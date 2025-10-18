void MyRoomControl___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct MyRoomControl_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v4; // x19
  struct MyRoomControl_StaticFields *v5; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4C3E3F5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&StringLiteral_2919/*"BGM_MYROOM_1"*/);
    byte_4C3E3F5 = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_2919/*"BGM_MYROOM_1"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)MyRoomControl_TypeInfo->static_fields, StringLiteral_2919/*"BGM_MYROOM_1"*/, v1, v2);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_C0EEA0;
  *(_QWORD *)&static_fields->BUTTON_MULTIPLE_VIEW = 0x2000000010LL;
  *(_QWORD *)&static_fields->BUTTON_CHANGE_BG = 0xC448000000000040LL;
  *(_QWORD *)&static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2;
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  v5 = MyRoomControl_TypeInfo->static_fields;
  v5->enableBgGroupIdList = v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&v5->enableBgGroupIdList, (int32_t)v4, v6, v7);
}


void MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  struct PhotoStandFigureComponent_array *v3; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  MyRoomStateMaterial_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_int__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_int__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int v18; // w8
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct System_Int64_array *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Int32_array *v24; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_Int32_array *v27; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct System_Int64_array *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct System_Int32_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  struct System_Int32_array *v36; // x0
  int32_t v37; // w2
  const MethodInfo *v38; // x3

  if ( (byte_4C3E3F4 & 1) == 0 )
  {
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&MyRoomStateMaterial_TypeInfo);
    sub_1C37058(&PhotoStandFigureComponent___TypeInfo);
    sub_1C37058(&UnityEngine_Vector3___TypeInfo);
    byte_4C3E3F4 = 1;
  }
  v3 = (struct PhotoStandFigureComponent_array *)sub_1C37100(PhotoStandFigureComponent___TypeInfo, 2);
  this->fields.photoStandFigures = v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoStandFigures, (int32_t)v3, v4, v5);
  v6 = (MyRoomStateMaterial_o *)sub_1C372A4(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v6, 0);
  this->fields.mStateMaterial = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mStateMaterial, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v9;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.imageIdList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v12,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v12;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.materialImageIdList, (int32_t)v12, v13, v14);
  v15 = sub_1C37100(UnityEngine_Vector3___TypeInfo, 2);
  if ( !v15 )
    sub_1C372B4(0);
  v18 = *(_DWORD *)(v15 + 24);
  if ( !v18 || (*(_DWORD *)(v15 + 40) = 0, *(_QWORD *)(v15 + 32) = 0x43900000C4000000LL, v18 == 1) )
    sub_1C372BC(v15);
  *(_DWORD *)(v15 + 52) = 0;
  *(_QWORD *)(v15 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v15;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.defaultMultipleServantPoses, v15, v16, v17);
  if ( !byte_4C3C921 )
  {
    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
    byte_4C3C921 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1;
  v21 = (struct System_Int64_array *)sub_1C37100(long___TypeInfo, 2);
  this->fields.multipleServantUsrIds = v21;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v21, v22, v23);
  v24 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.multipleLimitCounts = v24;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)v24, v25, v26);
  v27 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.photoTargetFaceListIndex = v27;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoTargetFaceListIndex, (int32_t)v27, v28, v29);
  this->fields.photoCampaignFinishedTime = -1;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  this->fields.isOneShot = 1;
  v30 = (struct System_Int64_array *)sub_1C37100(long___TypeInfo, 2);
  this->fields.temporaryPhotoUserSvtId = v30;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.temporaryPhotoUserSvtId, (int32_t)v30, v31, v32);
  v33 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.temporaryPhotoSvtLimitCount = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.temporaryPhotoSvtLimitCount, (int32_t)v33, v34, v35);
  v36 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.temporaryStaffImageId = v36;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.temporaryStaffImageId, (int32_t)v36, v37, v38);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MyRoomControl__AccountLinkageServerStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C372B4(0);
  AccountLinkageComponent__LinkageStatusCheck(accountLinkageComp, 0);
}


void MyRoomControl__AccountLinkageStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  NetworkManager_ResultCallbackFunc_o *v3; // x20
  Il2CppObject *Request_object; // x0

  if ( (byte_4C3E393 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_LinkageStatusCheckCallback__);
    sub_1C37058(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    byte_4C3E393 = 1;
  }
  v3 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v3,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v3,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1C372B4(0);
  AccountLinkageInfoRequest__beginRequest((AccountLinkageInfoRequest_o *)Request_object, 0);
}


void MyRoomControl__AddSpecialImageLimitCount(
        MyRoomControl_o *this,
        System_Collections_Generic_List_int__o **imageLimitCountList,
        int32_t svtId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v6; // x20
  Il2CppObject *Master_object; // x0
  MyroomServantSpecialImageMaster_o *v8; // x22
  _BOOL8 v9; // x0
  int32_t current; // w23
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  MyroomServantSpecialImageEntity_array *EntitiesByBaseLimitCount; // x0
  MyroomServantSpecialImageEntity_array *v15; // x23
  int max_length; // w8
  int i; // w29
  MyroomServantSpecialImageEntity_o *v18; // x8
  int32_t num; // w24
  struct System_Int32_array *v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4C3E3EB & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    byte_4C3E3EB = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v6 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v6,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1C372B4(Master_object);
  v8 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    *imageLimitCountList,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    v9 = System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v26,
           (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v9 )
      break;
    if ( !v6 )
      sub_1C372B4(v9);
    current = v26.fields._current;
    items = v6->fields._items;
    v12 = Method_System_Collections_Generic_List_int__Add__;
    ++v6->fields._version;
    if ( !items )
      sub_1C372B4(v9);
    size = v6->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v6,
        current,
        *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v6->fields._size = size + 1;
      items->m_Items[size] = current;
    }
    if ( !v8 )
      sub_1C372B4(v9);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v8, svtId, current, 0);
    v15 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1C372B4(0);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1C372BC(EntitiesByBaseLimitCount);
        v18 = v15->m_Items[i];
        if ( !v18 )
          sub_1C372B4(EntitiesByBaseLimitCount);
        num = v18->fields.num;
        if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
        EntitiesByBaseLimitCount = (MyroomServantSpecialImageEntity_array *)ImageLimitCount__SpecialNumToSpecialImageLimitCount(
                                                                              num,
                                                                              0);
        v20 = v6->fields._items;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++v6->fields._version;
        if ( !v20 )
          sub_1C372B4(EntitiesByBaseLimitCount);
        v22 = v6->fields._size;
        if ( (unsigned int)v22 >= LODWORD(v20->max_length) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v6,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          v6->fields._size = v22 + 1;
          v20->m_Items[v22] = (int)EntitiesByBaseLimitCount;
        }
        max_length = v15->max_length;
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)imageLimitCountList, (int32_t)v6, v23, v24);
}


void MyRoomControl__AutoDelinkAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_Nullable_int__o v9; // x4
  System_Nullable_float__o v10; // x3
  const MethodInfo *v11; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3E396 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageComponent_TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__320_0__);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/);
    sub_1C37058(&StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/);
    byte_4C3E396 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1872/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__320_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v9 = msgFontSize,
        v10 = 0,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v10, v9, 0, 0),
        (myRoomFsm = this->fields.myRoomFsm) == 0) )
  {
    sub_1C372B4(myRoomFsm);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/, 0);
  MyRoomControl__HideContinueDeviceMenu(this, v11);
}


void MyRoomControl__BlockTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  const MethodInfo *v4; // x1
  UIWidget_o *changeBGBtnImg; // x0
  __int64 v6; // x20
  __int64 v7; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v9; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v10; // 0:x0.16
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v12; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v13; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v14; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E3A5 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E3A5 = 1;
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
    goto LABEL_26;
  v11.fields.r = 0.5;
  v11.fields.g = 0.5;
  v11.fields.b = 0.5;
  v11.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v11, 0);
  changeBGBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v12.fields.r = 0.5;
  v12.fields.g = 0.5;
  v12.fields.b = 0.5;
  v12.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v12, 0);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBgButtonSprite;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v13.fields.r = 0.5;
  v13.fields.g = 0.5;
  v13.fields.b = 0.5;
  v13.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v13, 0);
  changeBGBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_CHANGE_BG;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  changeBGBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)changeBGBtnImg, this->fields.fvrUsrSvtId, 0);
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v7 = *(_QWORD *)&changeBGBtnImg->fields.mChanged;
  v6 = *(_QWORD *)&changeBGBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v10.fields.currentCryptoKey = v7;
  *(_QWORD *)&v10.fields.fakeValue = v6;
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v10, 0);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_26;
    LODWORD(changeBGBtnImg) = materialImageIdList->fields._size - 1;
  }
  if ( (int)changeBGBtnImg >= 1 )
  {
    changeBGBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !changeBGBtnImg )
      goto LABEL_26;
    v14.fields.r = 0.5;
    v14.fields.g = 0.5;
    v14.fields.b = 0.5;
    v14.fields.a = 1.0;
    UIWidget__set_color(changeBGBtnImg, v14, 0);
    v9 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v9 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag &= ~v9->static_fields->BUTTON_LIMIT_CHANGE;
  }
  changeBGBtnImg = (UIWidget_o *)this->fields.mBlocker;
  if ( !changeBGBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)changeBGBtnImg, 1, 0),
        (changeBGBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0) )
  {
LABEL_26:
    sub_1C372B4(changeBGBtnImg);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)changeBGBtnImg, 1, 0);
  if ( this->fields.type == 10 )
  {
    changeBGBtnImg = (UIWidget_o *)this->fields.soundPlayerComp;
    if ( changeBGBtnImg )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)changeBGBtnImg, 1, 0);
      return;
    }
    goto LABEL_26;
  }
}


float MyRoomControl__CalcGameScreenAspectRatio(MyRoomControl_o *this, const MethodInfo *method)
{
  ManagerConfig_c *v2; // x0
  int *static_fields; // x8
  float v4; // s0
  float v5; // s8
  float v6; // s9
  int32_t height; // w19
  float v8; // s0
  float v9; // s1

  if ( (byte_4C3E3DB & 1) == 0 )
  {
    sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C3E3DB = 1;
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
  height = UnityEngine_Screen__get_height(0);
  v8 = (float)height / (float)UnityEngine_Screen__get_width(0);
  if ( v8 <= v5 )
    v9 = v8;
  else
    v9 = v5;
  if ( v8 < v6 )
    return v6;
  else
    return v9;
}


System_Collections_IEnumerator_o *MyRoomControl__CaptureServant(
        MyRoomControl_o *this,
        int32_t width,
        int32_t height,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3E3D6 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__CaptureServant_d__418_TypeInfo);
    byte_4C3E3D6 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl__CaptureServant_d__418_TypeInfo);
  MyRoomControl__CaptureServant_d__418___ctor((MyRoomControl__CaptureServant_d__418_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v9, v10);
  *(_DWORD *)(v7 + 32) = width;
  *(_DWORD *)(v7 + 48) = height;
  return (System_Collections_IEnumerator_o *)v7;
}


// local variable allocation has failed, the output may be wrong!
void MyRoomControl__ChangeDisp(MyRoomControl_o *this, bool isSePlay, const MethodInfo *method)
{
  char v3; // vf
  MyRoomControl_c *v6; // x0
  const MethodInfo *v7; // x1
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v12; // x4
  UnityEngine_Component_o *soundPlayerComp; // x0
  unsigned int v14; // s0
  float v15; // s9
  float y; // s8
  const MethodInfo *v17; // x1
  const MethodInfo *v18; // x2
  float z; // s10
  MyRoomControl_o *v20; // x0
  const MethodInfo *v21; // x4
  const MethodInfo *v22; // x2
  float v23; // s9
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x3
  int32_t v26; // w8
  _QWORD *v27; // x0
  System_Reflection_MethodBase_o *v28; // x0
  const MethodInfo *v29; // x3
  MyRoomControl_c *v30; // x0
  UnityEngine_GameObject_o *multipleViewButton; // x20
  const MethodInfo *v32; // x3
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x3
  const MethodInfo *v36; // x3
  const MethodInfo *v37; // x3
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v39; // x21
  const MethodInfo *v40; // x2
  const MethodInfo *v41; // x2
  StandFigureBack_o *v42; // x20
  System_Action_o *v43; // x21
  const MethodInfo *v44; // x3
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
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E3A2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_ChangeDisp__);
    sub_1C37058(&Method_MyRoomControl__ChangeDisp_b__342_0__);
    sub_1C37058(&Method_MyRoomControl__ChangeDisp_b__342_1__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&StringLiteral_11294/*"ReleaseTouch"*/);
    byte_4C3E3A2 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_29;
  v6 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) < 0) ^ v3
     | ((this->fields.buttonFlag & v6->static_fields->BUTTON_DISP_CHANGE) == 0) )
  {
LABEL_29:
    v27 = Method_MyRoomControl_ChangeDisp__;
    if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
      v27 = (_QWORD *)sub_1C37070(Method_MyRoomControl_ChangeDisp__);
    v28 = (System_Reflection_MethodBase_o *)sub_1C3703C(v27, v27[4]);
    OverwriteAssetSoundName__PlaySystemSe(v28, 2, 0, 0);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v7);
    if ( isSePlay )
    {
      v8 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_1C37070(Method_MyRoomControl_ChangeDisp__);
      v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0);
    v52 = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0);
    switch ( this->fields.type )
    {
      case 1:
      case 0xC:
      case 0xD:
      case 0xE:
      case 0xF:
      case 0x10:
        MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &moveHidePos, v12);
        goto LABEL_14;
      case 6:
        moveTarget = this->fields.noticeObj;
        goto LABEL_14;
      case 0xA:
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.soundPlayerComp;
        if ( !soundPlayerComp )
          goto LABEL_53;
        gameObject = UnityEngine_Component__get_gameObject(soundPlayerComp, 0);
        moveTarget = gameObject;
LABEL_14:
        MyRoomControl__setupServantListUIMoveData(
          (MyRoomControl_o *)gameObject,
          this->fields.servantListObj,
          &LocalPosition,
          &v52,
          v12);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.standFigureBack;
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)soundPlayerComp,
                                                       0,
                                                       0);
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)soundPlayerComp[1].monitor;
        if ( !soundPlayerComp )
          goto LABEL_53;
        soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(soundPlayerComp, 0);
        if ( !soundPlayerComp )
          goto LABEL_53;
        v14 = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0);
        soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj;
        if ( !soundPlayerComp
          || (v15 = *(float *)&v14,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0)) == 0)
          || (v57 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0),
              (soundPlayerComp = (UnityEngine_Component_o *)this->fields.svtObj) == 0)
          || (y = v57.fields.y,
              (soundPlayerComp = (UnityEngine_Component_o *)UnityEngine_GameObject__get_transform(
                                                              (UnityEngine_GameObject_o *)soundPlayerComp,
                                                              0)) == 0) )
        {
LABEL_53:
          sub_1C372B4(soundPlayerComp);
        }
        v58 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)soundPlayerComp, 0);
        switch ( this->fields.mState )
        {
          case 0:
            z = v58.fields.z;
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveHidePos, v18);
            MyRoomControl__setupSortWindowUIMoveData(
              v20,
              this->fields.sortWindowObj,
              &this->fields.sortWindowMoveShowPos,
              &this->fields.sortWindowMoveHidePos,
              v21);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, v52, v22);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.sortWindowObj;
            if ( !soundPlayerComp )
              goto LABEL_53;
            v23 = -v15;
            if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)soundPlayerComp, 0) )
              MyRoomControl__MyRoomlUIAnimationStart(
                this,
                this->fields.sortWindowObj,
                this->fields.sortWindowMoveHidePos,
                v24);
            v59.fields.x = v23;
            v59.fields.y = y;
            v59.fields.z = z;
            MyRoomControl__moveControl(this, this->fields.svtObj, v59, (System_String_o *)StringLiteral_11294/*"ReleaseTouch"*/, v25);
            v26 = 1;
            break;
          case 1:
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
            TitleInfoControl__FrameOut((TitleInfoControl_o *)soundPlayerComp, 0, 0);
            if ( MainMenuBar__get_IsMenuBarActive(0) )
              MainMenuBar__FrameOut(0, 0);
            v30 = MyRoomControl_TypeInfo;
            multipleViewButton = this->fields.multipleViewButton;
            if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
              v30 = MyRoomControl_TypeInfo;
            }
            v60.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v60.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v60.fields.x = v30->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v60, 0, v29);
            v61.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v61.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v61.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v61, 0, v32);
            v62.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v62.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v62.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v62, 0, v33);
            v63.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v63.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v63.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v63, 0, v34);
            v64.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v64.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v64.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v64, (System_String_o *)StringLiteral_11294/*"ReleaseTouch"*/, v35);
            v65.fields.y = this->fields.helpBtnInitPos.fields.y;
            v65.fields.z = this->fields.helpBtnInitPos.fields.z;
            v65.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v65, 0, v36);
            v66.fields.y = this->fields.changeBgButtonInitPos.fields.y;
            v66.fields.z = this->fields.changeBgButtonInitPos.fields.z;
            v66.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeBgButton, v66, 0, v37);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0);
            v26 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v17);
            standFigureBack = this->fields.standFigureBack;
            v39 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v39, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__342_0__, 0);
            if ( !standFigureBack )
              goto LABEL_53;
            StandFigureBack__Fadeout(standFigureBack, v39, 0);
            v26 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v18);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v40);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v41);
            v42 = this->fields.standFigureBack;
            v43 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(v43, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__342_1__, 0);
            if ( !v42 )
              goto LABEL_53;
            StandFigureBack__Fadein(v42, v43, 0);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.titleInfo;
            if ( !soundPlayerComp )
              goto LABEL_53;
            TitleInfoControl__FrameIn((TitleInfoControl_o *)soundPlayerComp, 0, 0);
            if ( MainMenuBar__get_IsMenuBarActive(0) )
              MainMenuBar__FrameIn(0, 0);
            MyRoomControl__moveControl(
              this,
              this->fields.multipleViewButton,
              this->fields.multipleViewButtonInitPos,
              0,
              v44);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0,
              v45);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0, v46);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0, v47);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0, v48);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0, v49);
            MyRoomControl__moveControl(this, this->fields.changeBgButton, this->fields.changeBgButtonInitPos, 0, v50);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 0, 0);
            v26 = 0;
            break;
          default:
            goto LABEL_48;
        }
        this->fields.mState = v26;
LABEL_48:
        MyRoomControl__SetMultipleViewButtonColor(this, v17);
        MyRoomControl__SetPhotoCampaignButtonColor(this, v51);
        break;
      default:
        goto LABEL_14;
    }
  }
}


void MyRoomControl__ChangePhotoCampaignServantFace(
        MyRoomControl_o *this,
        int32_t figureIndex,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v10; // x19
  System_Action_o *v11; // x20

  if ( (byte_4C3E3D5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass416_0__ChangePhotoCampaignServantFace_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass416_0_TypeInfo);
    byte_4C3E3D5 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass416_0_TypeInfo);
  MyRoomControl___c__DisplayClass416_0___ctor((MyRoomControl___c__DisplayClass416_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_8;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_DWORD *)(v5 + 24) = figureIndex;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_8;
  if ( LODWORD(photoStandFigures->max_length) <= figureIndex )
    sub_1C372BC(v6);
  v10 = photoStandFigures->m_Items[figureIndex];
  v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass416_0__ChangePhotoCampaignServantFace_b__0__,
    0);
  if ( !v10 )
LABEL_8:
    sub_1C372B4(v6);
  PhotoStandFigureComponent__SetFacePhotoServant(v10, 1, v11, -1, 0);
}


void MyRoomControl__ChangeSetBtnsTouch(MyRoomControl_o *this, bool isSet, const MethodInfo *method)
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
  int32_t v21; // w8
  UnityEngine_Color_o v22; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v23; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E3A9 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3A9 = 1;
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
  UIWidget__set_color(playBtnImg, v22, 0);
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
  UIWidget__set_color(playBtnImg, v23, 0);
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
    sub_1C372B4(playBtnImg);
  v24.fields.a = 1.0;
  v24.fields.r = v6;
  v24.fields.g = v6;
  v24.fields.b = v6;
  UIWidget__set_color(playBtnImg, v24, 0);
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


void MyRoomControl__ChangeSetStandFigureObj(MyRoomControl_o *this, bool isSet, bool isTouch, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  UnityEngine_Object_o *SvtStandFigure; // x22

  if ( (byte_4C3E3A8 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E3A8 = 1;
  }
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_12;
  SvtStandFigure = (UnityEngine_Object_o *)StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  standFigureBack = (StandFigureBack_o *)UnityEngine_Object__op_Inequality(SvtStandFigure, 0, 0);
  if ( ((unsigned __int8)standFigureBack & 1) != 0 )
  {
    if ( SvtStandFigure )
    {
      standFigureBack = (StandFigureBack_o *)UnityEngine_Component__get_gameObject(
                                               (UnityEngine_Component_o *)SvtStandFigure,
                                               0);
      if ( standFigureBack )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isSet, 0);
        goto LABEL_10;
      }
    }
LABEL_12:
    sub_1C372B4(standFigureBack);
  }
LABEL_10:
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_12;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, isTouch, 0);
}


void MyRoomControl__CheckCsUnlink(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *SelfUserAccountLinkage; // x0
  int v4; // w8
  AccountLinkageComponent_c *v5; // x0
  struct AccountLinkageComponent_StaticFields *v6; // x8
  AccountLinkageComponent_c *v7; // x0
  __int64 *v8; // x8
  AccountLinkageComponent_c *v9; // x0
  System_String_o *v10; // x20
  Il2CppObject *Instance; // x21
  MyRoomControl___c_c *v12; // x8
  System_Action_o *_9__321_0; // x22
  Il2CppObject *v14; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Nullable_int__o p_msgFontSize; // x0
  System_Nullable_int__o v19; // x4
  System_Nullable_float__o v20; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3E397 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageComponent_TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__CheckCsUnlink_b__321_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_3285/*"CANNOT_CONTINUE_DEVICE"*/);
    sub_1C37058(&StringLiteral_1881/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/);
    sub_1C37058(&StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/);
    byte_4C3E397 = 1;
  }
  entity = 0;
  msgFontSize = 0;
  SelfUserAccountLinkage = (PlayMakerFSM_o *)UserAccountLinkageMaster__TryGetSelfUserAccountLinkage(&entity, 0);
  if ( ((unsigned __int8)SelfUserAccountLinkage & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_32;
    v4 = *(_DWORD *)((char *)&off_18 + (_QWORD)entity);
    if ( v4 == 1 )
    {
      v9 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v9 = AccountLinkageComponent_TypeInfo;
      }
      v9->static_fields->isLinked = 1;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_1881/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v12 = MyRoomControl___c_TypeInfo;
      }
      _9__321_0 = v12->static_fields->__9__321_0;
      if ( !_9__321_0 )
      {
        if ( !v12->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v12);
          v12 = MyRoomControl___c_TypeInfo;
        }
        v14 = (Il2CppObject *)v12->static_fields->__9;
        _9__321_0 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(_9__321_0, v14, Method_MyRoomControl___c__CheckCsUnlink_b__321_0__, 0);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__321_0 = _9__321_0;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__321_0, (int32_t)_9__321_0, v16, v17);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v19 = msgFontSize;
        v20 = 0;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v10, _9__321_0, v20, v19, 0, 0);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v8 = &StringLiteral_3285/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1C372B4(SelfUserAccountLinkage);
    }
    if ( !v4 )
    {
      v5 = AccountLinkageComponent_TypeInfo;
      if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
        v5 = AccountLinkageComponent_TypeInfo;
      }
      v6 = v5->static_fields;
LABEL_15:
      v6->isLinked = 0;
      goto LABEL_16;
    }
  }
  v7 = AccountLinkageComponent_TypeInfo;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v7 = AccountLinkageComponent_TypeInfo;
  }
  v6 = v7->static_fields;
  if ( v6->isLinked )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v6 = AccountLinkageComponent_TypeInfo->static_fields;
    }
    goto LABEL_15;
  }
LABEL_16:
  SelfUserAccountLinkage = this->fields.myRoomFsm;
  if ( !SelfUserAccountLinkage )
    goto LABEL_32;
  v8 = &StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/;
LABEL_18:
  PlayMakerFSM__SendEvent(SelfUserAccountLinkage, (System_String_o *)*v8, 0);
}


void MyRoomControl__CheckSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  System_String_o *name; // x20
  MyRoomRootComponent_c *v5; // x0
  PlayMakerFSM_o *myRoomFsm; // x8
  __int64 *v7; // x9

  v2 = this;
  if ( (byte_4C3E3AE & 1) == 0 )
  {
    sub_1C37058(&MyRoomRootComponent_TypeInfo);
    sub_1C37058(&StringLiteral_3466/*"CLICK_MATERIAL"*/);
    this = (MyRoomControl_o *)sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E3AE = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v7 = &StringLiteral_6979/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1C372B4(this);
  }
  name = sceneJumpInfo->fields.name;
  v5 = MyRoomRootComponent_TypeInfo;
  if ( !MyRoomRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomRootComponent_TypeInfo);
    v5 = MyRoomRootComponent_TypeInfo;
  }
  this = (MyRoomControl_o *)System_String__op_Equality(name, v5->static_fields->MYROOM_STATE_NEW_MATERIAL, 0);
  myRoomFsm = v2->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_13;
  v7 = &StringLiteral_6979/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v7 = &StringLiteral_3466/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v7, 0);
}


void MyRoomControl__ClearBackGroundData(const MethodInfo *method)
{
  MyRoomControl_c *v1; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *enableBgGroupIdList; // x9
  int v4; // w10

  if ( (byte_4C3E3EF & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3EF = 1;
  }
  v1 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v1 = MyRoomControl_TypeInfo;
  }
  static_fields = v1->static_fields;
  enableBgGroupIdList = static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    sub_1C372B4(v1);
  v4 = enableBgGroupIdList->fields._version + 1;
  enableBgGroupIdList->fields._size = 0;
  enableBgGroupIdList->fields._version = v4;
  static_fields->displayBgGroupIndex = 0;
}


void MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C372B4(0);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0);
}


void MyRoomControl__CloseExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C372B4(0);
  ExchangeSvtCoinComponent__CloseMenu(exchangeSvtCoinComp, 0);
}


void MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4C3E3BB & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__CloseMultipleView_b__387_0__);
    byte_4C3E3BB = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0);
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__387_0__, 0);
  MyRoomControl__SetFavoriteSvt(this, v4, 0, v5);
}


void MyRoomControl__CloseMutlipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v4; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x20
  __int64 v7; // x22
  int max_length; // w9
  unsigned int v9; // w24
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x10
  float x; // s10
  float z; // s11
  struct StandFigureBack_array *v13; // x8
  float y; // s8
  const MethodInfo *v15; // x3
  struct StandFigureBack_array *v16; // x8
  System_String_o *v17; // x2
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E3B9 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6740/*"FinishedCloseMultiServant"*/);
    byte_4C3E3B9 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0) )
  {
LABEL_20:
    sub_1C372B4(mBlocker);
  }
  v6 = 0;
  v7 = 4;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    v9 = v7 - 4;
    if ( (int)v7 - 4 >= max_length )
      break;
    defaultMultipleServantPoses = this->fields.defaultMultipleServantPoses;
    if ( !defaultMultipleServantPoses )
      goto LABEL_20;
    if ( v9 >= LODWORD(defaultMultipleServantPoses->max_length) || v9 >= max_length )
LABEL_22:
      sub_1C372BC(mBlocker);
    mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&multipleStandFigureBacks->obj.klass + v7);
    if ( mBlocker )
    {
      x = defaultMultipleServantPoses->m_Items[v6].fields.x;
      z = defaultMultipleServantPoses->m_Items[v6].fields.z;
      mBlocker = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)mBlocker,
                                               0);
      if ( mBlocker )
      {
        localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)mBlocker, 0);
        v13 = this->fields.multipleStandFigureBacks;
        if ( v13 )
        {
          if ( v9 >= LODWORD(v13->max_length) )
            goto LABEL_22;
          mBlocker = (UnityEngine_GameObject_o *)*((_QWORD *)&v13->obj.klass + v7);
          if ( mBlocker )
          {
            y = localPosition.fields.y;
            mBlocker = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mBlocker, 0);
            v16 = this->fields.multipleStandFigureBacks;
            if ( v16 )
            {
              v17 = v9 == LODWORD(v16->max_length) - 1 ? (System_String_o *)StringLiteral_6740/*"FinishedCloseMultiServant"*/ : 0LL;
              v19.fields.y = y;
              v19.fields.x = flt_C0DD88[(_DWORD)v7 == 4] + x;
              v19.fields.z = z + 0.0;
              MyRoomControl__moveControl(this, mBlocker, v19, v17, v15);
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


System_Collections_IEnumerator_o *MyRoomControl__CoWaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3E391 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo);
    byte_4C3E391 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__292___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *)v5,
    0,
    0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = setEndAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)setEndAction, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void MyRoomControl__CompletedTargetSetting(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  unsigned __int64 max_length_low; // x10
  unsigned __int64 v5; // x11
  char v6; // w14
  char v7; // w12
  struct System_Int64_array *temporaryPhotoUserSvtId; // x14
  PhotoStandFigureComponent_o *v9; // x13
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x14
  struct System_Int32_array *temporaryStaffImageId; // x15
  System_Collections_Generic_IEnumerable_TSource__o *temporaryPhotoTargetList; // x0
  System_Collections_Generic_List_TSource__o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v17; // x8
  int v18; // w9

  v2 = this;
  if ( (byte_4C3E3CA & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___);
    this = (MyRoomControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__);
    byte_4C3E3CA = 1;
  }
  photoStandFigures = v2->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_17;
  max_length_low = LODWORD(photoStandFigures->max_length);
  v5 = 0;
  v6 = 1;
  do
  {
    if ( v5 >= max_length_low )
      goto LABEL_16;
    v7 = v6;
    temporaryPhotoUserSvtId = v2->fields.temporaryPhotoUserSvtId;
    if ( !temporaryPhotoUserSvtId )
      goto LABEL_17;
    if ( v5 >= LODWORD(temporaryPhotoUserSvtId->max_length) )
LABEL_16:
      sub_1C372BC(this);
    v9 = photoStandFigures->m_Items[v5];
    if ( !v9 )
      goto LABEL_17;
    v9->fields._UserSvtId_k__BackingField = temporaryPhotoUserSvtId->m_Items[v5];
    temporaryPhotoSvtLimitCount = v2->fields.temporaryPhotoSvtLimitCount;
    if ( !temporaryPhotoSvtLimitCount )
      goto LABEL_17;
    if ( v5 >= LODWORD(temporaryPhotoSvtLimitCount->max_length) )
      goto LABEL_16;
    v9->fields._ImageLimitCount_k__BackingField = temporaryPhotoSvtLimitCount->m_Items[v5];
    temporaryStaffImageId = v2->fields.temporaryStaffImageId;
    if ( !temporaryStaffImageId )
      goto LABEL_17;
    if ( v5 >= LODWORD(temporaryStaffImageId->max_length) )
      goto LABEL_16;
    v6 = 0;
    v9->fields._StandFigureImageId_k__BackingField = temporaryStaffImageId->m_Items[v5];
    v5 = 1;
  }
  while ( (v7 & 1) != 0 );
  temporaryPhotoTargetList = (System_Collections_Generic_IEnumerable_TSource__o *)v2->fields.temporaryPhotoTargetList;
  *(_QWORD *)&v2->fields.photoMasterEquipId = *(_QWORD *)&v2->fields.temporaryMasterEquipId;
  v13 = System_Linq_Enumerable__ToList_Int32Enum_(
          temporaryPhotoTargetList,
          (const MethodInfo_312BDA0 *)Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___);
  v2->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v13;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.photoTargetList, (int32_t)v13, v14, v15);
  v17 = v2->fields.temporaryPhotoTargetList;
  if ( !v17 )
LABEL_17:
    sub_1C372B4(this);
  v18 = v17->fields._version + 1;
  v17->fields._size = 0;
  v17->fields._version = v18;
  MyRoomControl__DispPhotoCampaign(v2, 1, 1, v16);
}


void MyRoomControl__ConfirmTargetSelectState(MyRoomControl_o *this, bool isChangeTarget, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x1
  int32_t size; // w8
  char v11; // w21
  System_Action_o *v12; // x22
  const MethodInfo *v13; // x5
  int32_t v14; // w1
  int32_t v15; // w3
  MyRoomControl_o *v16; // x0
  bool v17; // w2
  System_Action_o *v18; // x4
  int32_t Item; // w0
  char v20; // w21
  int32_t v21; // w22
  System_Action_o *v22; // x23
  System_Action_o *v23; // x21
  System_Action_o *v24; // x22
  const MethodInfo *v25; // x3

  if ( (byte_4C3E3C9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_MyRoomControl_CompletedTargetSetting__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass404_0_TypeInfo);
    byte_4C3E3C9 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass404_0_TypeInfo);
  MyRoomControl___c__DisplayClass404_0___ctor((MyRoomControl___c__DisplayClass404_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 24) = this,
        *(_BYTE *)(v5 + 16) = isChangeTarget,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)this, v7, v8),
        (temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)this->fields.temporaryPhotoTargetList) == 0) )
  {
    sub_1C372B4(temporaryPhotoTargetList);
  }
  size = temporaryPhotoTargetList->fields._size;
  if ( size == 2 )
  {
    if ( *(_BYTE *)(v5 + 16) )
    {
      MyRoomControl__CompletedTargetSetting(this, v9);
    }
    else
    {
      v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v23, (Il2CppObject *)this, Method_MyRoomControl_CompletedTargetSetting__, 0);
      v24 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v24,
        (Il2CppObject *)v5,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__1__,
        0);
      MyRoomControl__OpenPhotoFrameSelectDialog(this, v23, v24, v25);
    }
  }
  else
  {
    if ( size )
    {
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               temporaryPhotoTargetList,
               0,
               (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v20 = *(_BYTE *)(v5 + 16);
      v21 = Item;
      v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v5,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__2__,
        0);
      v15 = 2;
      v16 = this;
      v14 = v21;
      v17 = v20;
      v18 = v22;
    }
    else
    {
      v11 = *(_BYTE *)(v5 + 16);
      v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v12,
        (Il2CppObject *)v5,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__0__,
        0);
      v14 = 3;
      v15 = 1;
      v16 = this;
      v17 = v11;
      v18 = v12;
    }
    MyRoomControl__OpenTargetSelectDialog(v16, v14, v17, v15, v18, v13);
  }
}


CRIMoviePlayer_o *MyRoomControl__CreateCriMoviePlayerObject(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *object; // x19
  Il2CppObject *v3; // x0

  if ( (byte_4C3E3AB & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_UnityEngine_Resources_Load_GameObject___);
    sub_1C37058(&StringLiteral_3920/*"CRIMovie/CRIMoviePlayerWithPanel"*/);
    byte_4C3E3AB = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3920/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_3184210 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v3 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_3173FC0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v3 )
    sub_1C372B4(0);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v3,
                               (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
}


void MyRoomControl__CreatePhotoMasterFigure(
        MyRoomControl_o *this,
        int32_t targetIndex,
        System_Action_o *func,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *Parent; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v15; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v18; // x23
  System_Action_o *v19; // x24
  struct UIMasterFigureTextureOld_o *Prefab_40672452; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  if ( (byte_4C3E3D0 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass411_0__CreatePhotoMasterFigure_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass411_0_TypeInfo);
    byte_4C3E3D0 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass411_0_TypeInfo);
  MyRoomControl___c__DisplayClass411_0___ctor((MyRoomControl___c__DisplayClass411_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = func;
  *(_DWORD *)(v7 + 24) = targetIndex;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)func, v11, v12);
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_9;
  if ( !LODWORD(photoStandFigures->max_length) )
    sub_1C372BC(Parent);
  Parent = (UnityEngine_Component_o *)photoStandFigures->m_Items[0];
  if ( !Parent
    || (gameObject = UnityEngine_Component__get_gameObject(Parent, 0),
        (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0)) == 0) )
  {
LABEL_9:
    sub_1C372B4(Parent);
  }
  v15 = UnityEngine_Component__get_gameObject(Parent, 0);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v18 = v15;
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass411_0__CreatePhotoMasterFigure_b__0__,
    0);
  Prefab_40672452 = MasterFigureManagerOld__CreatePrefab_40672452(
                      v18,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v19,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0,
                      0);
  this->fields.photoMasterTexture = Prefab_40672452;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, (int32_t)Prefab_40672452, v21, v22);
}


void MyRoomControl__DestroyExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomListControl_o *myRoomListCtr; // x0

  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr
    || (MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(myRoomListCtr, 0),
        (myRoomListCtr = (MyRoomListControl_o *)this->fields.exchangeSvtCoinComp) == 0) )
  {
    sub_1C372B4(myRoomListCtr);
  }
  ExchangeSvtCoinComponent__ExitMenu((ExchangeSvtCoinComponent_o *)myRoomListCtr, 0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomControl__DispDefaultMyRoom(
        MyRoomControl_o *this,
        bool isDispDefault,
        System_Action_o *callback,
        bool isFadein,
        const MethodInfo *method)
{
  __int64 v9; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v18; // x23
  StandFigureBack_o *v19; // x21
  System_Action_o *v20; // x23
  _BOOL4 v21; // w8
  _BOOL4 v22; // w8
  bool v23; // w1
  UnityEngine_GameObject_o *mShowPos; // x0
  UnityEngine_GameObject_o *mMainObj; // x21
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x4
  UnityEngine_Vector3_o *p_moveShowPos; // x10
  float *p_z; // x8
  float x; // s0 OVERLAPPED
  float *p_y; // x10
  int v32; // s1
  int v33; // s2
  UnityEngine_Vector3_o LocalPosition; // [xsp+0h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-38h] BYREF

  if ( (byte_4C3E3BA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__1__);
    sub_1C37058(&MyRoomControl___c__DisplayClass385_0_TypeInfo);
    byte_4C3E3BA = 1;
  }
  moveTarget = 0;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0;
  v9 = sub_1C372A4(MyRoomControl___c__DisplayClass385_0_TypeInfo);
  MyRoomControl___c__DisplayClass385_0___ctor((MyRoomControl___c__DisplayClass385_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_43;
  *(_QWORD *)(v9 + 16) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)callback, v11, v12);
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v13, v14);
  MyRoomControl__stopSvtVoice(this, v15);
  MyRoomControl__BlockTouch(this, v16);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v18,
        (Il2CppObject *)v9,
        Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__0__,
        0);
      if ( !standFigureBack )
        goto LABEL_43;
      StandFigureBack__Fadein(standFigureBack, v18, 0);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0);
      goto LABEL_13;
    }
LABEL_43:
    sub_1C372B4(frontObjectManager);
  }
  v19 = this->fields.standFigureBack;
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v20,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__1__,
    0);
  if ( !v19 )
    goto LABEL_43;
  StandFigureBack__Fadeout(v19, v20, 0);
  frontObjectManager = this->fields.frontObjectManager;
  if ( !frontObjectManager )
    goto LABEL_43;
  MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.voicePlayBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.moveBtnObj;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeLimitBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.helpBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.multipleViewButton;
  v21 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v21, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  v22 = isDispDefault && this->fields.isEnablePhotoCampaign;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v22, 0);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeBgButton;
  v23 = isDispDefault && this->fields.isEnableChangeBg;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v23, 0);
  mMainObj = this->fields.mMainObj;
  mShowPos = this->fields.mShowPos;
  moveTarget = mMainObj;
  moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0);
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0);
  switch ( this->fields.type )
  {
    case 1:
    case 0xC:
    case 0xD:
    case 0xE:
    case 0xF:
    case 0x10:
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v27);
      mMainObj = moveTarget;
      goto LABEL_31;
    case 6:
      mMainObj = this->fields.noticeObj;
      moveTarget = mMainObj;
      goto LABEL_31;
    case 0xA:
      frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.soundPlayerComp;
      if ( !frontObjectManager )
        goto LABEL_43;
      mMainObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frontObjectManager, 0);
      moveTarget = mMainObj;
LABEL_31:
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
      v32 = *(_DWORD *)p_y;
      v33 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v26);
      return;
    default:
      goto LABEL_31;
  }
}


void MyRoomControl__DispPhotoCampaign(
        MyRoomControl_o *this,
        bool isTargetUpdate,
        bool isPositionChangeUpdate,
        const MethodInfo *method)
{
  MissionNotifyManager_o *Instance; // x0
  UnityEngine_Component_o *photoFrameSprite; // x8
  const MethodInfo *v9; // x2
  struct System_Int32_array *photoTargetFaceListIndex; // x11
  unsigned __int64 max_length_low; // x8
  unsigned __int64 v12; // x9
  int32_t *m_Items; // x11
  System_Collections_IEnumerator_o *PhotoTarget; // x1

  if ( (byte_4C3E3CD & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3E3CD = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MissionNotifyManager__StartPause(Instance, 0);
  Instance = (MissionNotifyManager_o *)this->fields.photoTargetList;
  if ( !Instance )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)Instance,
                                         3,
                                         (const MethodInfo_3788BA4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__);
  photoFrameSprite = (UnityEngine_Component_o *)this->fields.photoFrameSprite;
  this->fields.isOneShot = (unsigned __int8)Instance & 1;
  if ( !photoFrameSprite )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject(photoFrameSprite, 0);
  if ( !Instance )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, this->fields.isOneShot, 0);
  Instance = (MissionNotifyManager_o *)this->fields.photoFrameWideSprite;
  if ( !Instance )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Instance, 0);
  if ( !Instance )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)Instance, !this->fields.isOneShot, 0);
  if ( !isPositionChangeUpdate )
    goto LABEL_15;
  photoTargetFaceListIndex = this->fields.photoTargetFaceListIndex;
  this->fields.isChangePhotoPosition = 0;
  if ( !photoTargetFaceListIndex )
LABEL_17:
    sub_1C372B4(Instance);
  max_length_low = LODWORD(photoTargetFaceListIndex->max_length);
  if ( (__int64)(max_length_low << 32) >= 1 )
  {
    v12 = 0;
    m_Items = photoTargetFaceListIndex->m_Items;
    do
    {
      if ( v12 >= max_length_low )
        sub_1C372BC(Instance);
      m_Items[v12++] = -1;
    }
    while ( (__int64)v12 < (int)max_length_low );
  }
LABEL_15:
  PhotoTarget = MyRoomControl__LoadPhotoTarget(this, isTargetUpdate, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, PhotoTarget, 0);
}


int32_t MyRoomControl__DisplayGroupId(const MethodInfo *method)
{
  MyRoomControl_c *v1; // x0
  MyRoomControl_c *v2; // x0
  MyRoomControl_c *v3; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0

  if ( (byte_4C3E3F0 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3F0 = 1;
  }
  v1 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v1 = MyRoomControl_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v1->static_fields->enableBgGroupIdList,
          (const MethodInfo_30F32A0 *)Method_System_Linq_Enumerable_Any_int___) )
  {
    v2 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    MyRoomControl__SetBackGroundData((const MethodInfo *)v2);
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v3 = MyRoomControl_TypeInfo;
  }
  static_fields = v3->static_fields;
  enableBgGroupIdList = static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    sub_1C372B4(0);
  return System_Collections_Generic_List_int___get_Item(
           enableBgGroupIdList,
           static_fields->displayBgGroupIndex,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  void *svtCtr; // x0
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
  int32_t v14; // w2
  const MethodInfo *v15; // x3

  if ( (byte_4C3E375 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__EndLoad_b__239_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    byte_4C3E375 = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_21;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v4);
  if ( SvtVoiceEnt )
  {
    v6 = SvtVoiceEnt;
    svtCtr = this->fields.imageIdList;
    if ( !svtCtr )
      goto LABEL_21;
    v7 = this->fields.svtCtr;
    svtCtr = (void *)System_Collections_Generic_List_int___get_Item(
                       (System_Collections_Generic_List_int__o *)svtCtr,
                       this->fields.figureSvtDispIdx,
                       (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v7 )
      goto LABEL_21;
    MyRoomSvtControl__initFirstPlayVoiceList(v7, v6, (int32_t)svtCtr, 0);
  }
  if ( this->fields.sceneJumpInfo )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  svtCtr = MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    svtCtr = MyRoomControl___c_TypeInfo;
  }
  v11 = *(System_Action_o **)(*((_QWORD *)svtCtr + 23) + 32LL);
  if ( !v11 )
  {
    if ( !*((_DWORD *)svtCtr + 56) )
    {
      j_il2cpp_runtime_class_init_0(svtCtr);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    v12 = (Il2CppObject *)**((_QWORD **)svtCtr + 23);
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v11, v12, Method_MyRoomControl___c__EndLoad_b__239_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__239_0 = v11;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__239_0, (int32_t)v11, v14, v15);
  }
  if ( !Instance )
LABEL_21:
    sub_1C372B4(svtCtr);
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v11, 0);
LABEL_19:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
}


void MyRoomControl__EndLoadPhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl___c_c *v3; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x20
  System_Action_object__o *_9__401_0; // x21
  Il2CppObject *v6; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v11; // x8
  CommonUI_o *v12; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v14; // x21
  __int64 v15; // x0

  if ( (byte_4C3E3C6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoStandFigureComponent__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
    sub_1C37058(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_1__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__EndLoadPhotoAsset_b__401_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E3C6 = 1;
  }
  v3 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v3 = MyRoomControl___c_TypeInfo;
  }
  _9__401_0 = (System_Action_object__o *)v3->static_fields->__9__401_0;
  if ( !_9__401_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = MyRoomControl___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__401_0 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__401_0, v6, Method_MyRoomControl___c__EndLoadPhotoAsset_b__401_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__401_0 = (struct System_Action_PhotoStandFigureComponent__o *)_9__401_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__401_0, (int32_t)_9__401_0, v8, v9);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__401_0,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  v12 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_1__, 0);
  if ( !v12 )
    sub_1C372B4(v15);
  CommonUI__maskFadeout(v12, 1, DEFAULT_FADE_TIME, v14, 0);
}


void MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  Il2CppObject *Instance; // x0
  CommonUI_o *v6; // x19

  if ( (byte_4C3E3AF & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E3AF = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, v2, v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v6 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v6 )
      sub_1C372B4(Instance);
    CommonUI__maskFadein(v6, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  }
}


void MyRoomControl__EndTurorialRequest(MyRoomControl_o *this, System_String_o *result, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1C372B4(0);
  MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0);
}


void MyRoomControl__ExchangePosition(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3E3E6 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__ExchangePosition_b__436_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E3E6 = 1;
  }
  this->fields.isChangePhotoPosition ^= 1u;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__ExchangePosition_b__436_0__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void MyRoomControl__FadeInPhotoTarget(
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
  UnityEngine_GameObject_o *gameObject; // x25
  System_String_o *v27; // x2
  __int64 v28; // [xsp+0h] [xbp-A0h] BYREF
  __int64 scale; // [xsp+8h] [xbp-98h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-90h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4

  v6 = this;
  if ( (byte_4C3E3CF & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    byte_4C3E3CF = 1;
  }
  position.fields.z = 0.0;
  scale = 0;
  *(_QWORD *)&position.fields.x = 0;
  v28 = 0;
  for ( i = 0; i != 2; ++i )
  {
    photoStandFigures = v6->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_33;
    if ( i >= LODWORD(photoStandFigures->max_length) )
      sub_1C372BC(this);
    this = (MyRoomControl_o *)v6->fields.photoTargetList;
    if ( !this )
LABEL_33:
      sub_1C372B4(this);
    v9 = photoStandFigures->m_Items[i];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                i,
                                (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
    {
      if ( isFadeOut )
        goto LABEL_14;
      MyRoomControl__GetPhotoStaffPosition(v6, v9, i, (UnityEngine_Vector3_o *)&v28, v10);
      if ( !v9 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      if ( !byte_4C3C926 )
      {
        sub_1C37058(&UnityEngine_Vector3_TypeInfo);
        byte_4C3C926 = 1;
      }
      GameObjectExtensions__SetLocalScale(gameObject, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      y = *((float *)&v28 + 1);
      z = *(float *)&scale;
      x = *(float *)&v28;
    }
    else if ( (_DWORD)this == 1 )
    {
      this = (MyRoomControl_o *)v6->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_33;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      v23 = v24;
      if ( !isFadeOut )
      {
        PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v6, i, v25);
        x = PhotoCampaignMasterPosition.fields.x;
        y = PhotoCampaignMasterPosition.fields.y;
        z = PhotoCampaignMasterPosition.fields.z;
        goto LABEL_27;
      }
      LocalPosition = GameObjectExtensions__GetLocalPosition(v24, 0);
      this = (MyRoomControl_o *)v6->fields.photoMasterTexture;
      if ( !this )
        goto LABEL_33;
      z = LocalPosition.fields.z + 0.0;
      y = LocalPosition.fields.y + 0.0;
      x = LocalPosition.fields.x + flt_C0D698[v6->fields.isChangePhotoPosition == (i == 1)];
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
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
        v18 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        v31 = GameObjectExtensions__GetLocalPosition(v18, 0);
        v19 = v31.fields.x;
        v20 = v31.fields.y;
        v21 = v31.fields.z;
        v22 = v6->fields.isChangePhotoPosition == (i == 1);
        v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
        z = v21 + 0.0;
        y = v20 + 0.0;
        x = v19 + flt_C0D698[v22];
        goto LABEL_27;
      }
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(v6, v9, i, &position, (float *)&scale + 1, v11);
      if ( !v9 )
        goto LABEL_33;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      GameObjectExtensions__SetLocalScale_36134400(v12, *((float *)&scale + 1), 0);
      v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0);
      y = position.fields.y;
      z = position.fields.z;
      x = position.fields.x;
    }
    v23 = v13;
LABEL_27:
    if ( i )
      v27 = 0;
    else
      v27 = finishedFadeCallback;
    v34.fields.x = x;
    v34.fields.y = y;
    v34.fields.z = z;
    MyRoomControl__moveControl(v6, v23, v34, v27, v14);
  }
}


void MyRoomControl__FingerGestures_OnGestureEvent(MyRoomControl_o *this, Gesture_o *gesture, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  UnityEngine_Object_o *startSelection; // x21
  const MethodInfo *v6; // x2
  __int64 naturalAligment; // x10

  v4 = this;
  if ( (byte_4C3E3AD & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl_o *)sub_1C37058(&SwipeGesture_TypeInfo);
    byte_4C3E3AD = 1;
  }
  if ( !gesture )
    sub_1C372B4(this);
  startSelection = (UnityEngine_Object_o *)gesture->fields.startSelection;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(startSelection, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v4, 0, 0) )
    {
      naturalAligment = SwipeGesture_TypeInfo->_2.naturalAligment;
      if ( gesture->klass->_2.naturalAligment >= (unsigned int)naturalAligment
        && (SwipeGesture_c *)gesture->klass->_2.typeHierarchy[naturalAligment - 1] == SwipeGesture_TypeInfo )
      {
        if ( (v4->fields.mState & 0xFFFFFFFE) == 2 )
          MyRoomControl__ChangeDisp(v4, 0, v6);
        if ( v4->fields.multipleViewState == 3 )
        {
          v4->fields.multipleViewState = 2;
          MyRoomControl__SetEnableMultipleViewUi(v4, 1, v6);
        }
        if ( v4->fields.photoState == 3 )
        {
          v4->fields.photoState = 2;
          MyRoomControl__SetPhotoCampaignUi(v4, 1, v6);
        }
      }
    }
  }
}


void MyRoomControl__FinishedCloseFullScreenPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignProduction; // x0
  UnityEngine_Object_o *v4; // x20
  const MethodInfo *v5; // x2

  if ( (byte_4C3E3DC & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E3DC = 1;
  }
  photoCampaignProduction = this->fields.photoCampaignProduction;
  this->fields.photoState = 2;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, 0, 0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoFrameSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  photoCampaignProduction = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignProduction, 0);
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, this->fields.isOneShot, 0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoFrameWideSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  photoCampaignProduction = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoCampaignProduction, 0);
  if ( !photoCampaignProduction )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(photoCampaignProduction, !this->fields.isOneShot, 0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignBackGroundSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.element_class)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.castClass,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignFadeSprite;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *, float))photoCampaignProduction->klass[1]._1.element_class)(
    photoCampaignProduction,
    photoCampaignProduction->klass[1]._1.castClass,
    1.0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
    goto LABEL_15;
  v4 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(UnityEngine_GameObject_o *, Il2CppMethodPointer))photoCampaignProduction->klass[1].vtable._2_GetHashCode.method)(
                                 photoCampaignProduction,
                                 photoCampaignProduction->klass[1].vtable._3_ToString.methodPtr);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(v4, 0);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_15:
    sub_1C372B4(photoCampaignProduction);
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))photoCampaignProduction->klass[1].vtable._3_ToString.method)(
    photoCampaignProduction,
    0,
    photoCampaignProduction->klass[2]._1.image);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
}


void MyRoomControl__FinishedCloseMultiServant(MyRoomControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  v6 = 0;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C372BC(multipleViewCloseButton);
    multipleViewCloseButton = (UnityEngine_GameObject_o *)multipleStandFigureBacks->m_Items[v6];
    if ( multipleViewCloseButton )
    {
      StandFigureBack__Init((StandFigureBack_o *)multipleViewCloseButton, 0);
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
    || (UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0),
        (multipleViewCloseButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0)
    || (TitleInfoControl__FrameIn((TitleInfoControl_o *)multipleViewCloseButton, 1, 0),
        (multipleViewCloseButton = (UnityEngine_GameObject_o *)this->fields.multipleViewComponent) == 0)
    || (MultipleViewComponent__Open((MultipleViewComponent_o *)multipleViewCloseButton, 0, v8),
        MyRoomControl__SetBackButtonIgnore(this, 0, v9),
        (multipleViewCloseButton = this->fields.mBlocker) == 0) )
  {
LABEL_8:
    sub_1C372B4(multipleViewCloseButton);
  }
  UnityEngine_GameObject__SetActive(multipleViewCloseButton, 0, 0);
}


void MyRoomControl__FinishedFadeInPhotoTarget(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PhotoSettingButtonComponent_o *photoSettingButtonComponent; // x0
  const MethodInfo *v5; // x2

  MyRoomControl__SetPhotoCampaignUi(this, 1, v2);
  photoSettingButtonComponent = this->fields.photoSettingButtonComponent;
  if ( !photoSettingButtonComponent )
    sub_1C372B4(0);
  PhotoSettingButtonComponent__DispSettingButton(
    photoSettingButtonComponent,
    this->fields.photoTargetList,
    this->fields.photoStandFigures,
    this->fields.isChangePhotoPosition,
    this->fields.isOneShot,
    0);
  MyRoomControl__SetBackButtonIgnore(this, 0, v5);
}


void MyRoomControl__FinishedFadeMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_GameObject_o *mBlocker; // x0
  const MethodInfo *v5; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(mBlocker, 0, 0);
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void MyRoomControl__FormChangeCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  MyRoomSvtControl_o *v4; // x20
  PlayMakerFSM_o *myRoomFsm; // x8
  System_String_o **v6; // x9

  if ( (byte_4C3E381 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9291/*"NORMAL_FORM"*/);
    sub_1C37058(&StringLiteral_3321/*"CHANGE_FORM"*/);
    byte_4C3E381 = 1;
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 0;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__SetVoiceData(svtCtr, 0);
  if ( ((unsigned __int8)svtCtr & 1) == 0 )
    goto LABEL_13;
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFirstServantVoiceData(svtCtr, 0);
  if ( !svtCtr || (v4 = svtCtr, !HIDWORD(svtCtr->fields.asstName)) )
  {
LABEL_13:
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v6 = (System_String_o **)&StringLiteral_9291/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1C372B4(svtCtr);
  }
  svtCtr = this->fields.svtCtr;
  this->fields.isServantFormKeep = 1;
  if ( !svtCtr )
    goto LABEL_16;
  svtCtr = (MyRoomSvtControl_o *)MyRoomSvtControl__GetFormId(svtCtr, 0);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  if ( LODWORD(v4->fields.asstName) == (_DWORD)svtCtr )
    v6 = (System_String_o **)&StringLiteral_9291/*"NORMAL_FORM"*/;
  else
    v6 = (System_String_o **)&StringLiteral_3321/*"CHANGE_FORM"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v6, 0);
}


System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *MyRoomControl__GetBgSaveData(
        const MethodInfo *method)
{
  Il2CppObject *String; // x19
  System_Collections_Generic_List_object__o *v2; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v4; // x0

  if ( (byte_4C3E3F1 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_JsonManager_DeserializeArray_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
    sub_1C37058(&StringLiteral_5301/*"DisplayedOverWriteIds"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E3F1 = 1;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             (System_String_o *)StringLiteral_5301/*"DisplayedOverWriteIds"*/,
                             (System_String_o *)StringLiteral_1/*""*/,
                             0);
  if ( System_String__IsNullOrEmpty((System_String_o *)String, 0) )
  {
    v2 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v2,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
    return (System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *)v2;
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v4 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                String,
                                                                (const MethodInfo_31570C4 *)Method_JsonManager_DeserializeArray_MyRoomControl_BackGroundSaveData___);
    return (System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v4,
                                                                                    (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
  }
}


UnityEngine_Camera_o *MyRoomControl__GetCamera2DUI(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mCamera2DUI;
}


int32_t MyRoomControl__GetDisplayBgGroupIndex(const MethodInfo *method)
{
  MyRoomParamsManager_c *v1; // x0
  int32_t DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField; // w20
  MyRoomControl_c *v3; // x0
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0
  MyRoomParamsManager_c *v5; // x0
  MyRoomControl_c *v6; // x0
  int32_t v7; // w1
  int32_t v8; // w20
  MyRoomControl_c *v9; // x0
  MyRoomParamsManager_c *v10; // x0
  Il2CppObject *Master_object; // x23
  int32_t i; // w25
  MyRoomControl_c *v13; // x8
  MyRoomControl___c__DisplayClass455_0_o *v14; // x24
  MyRoomControl_c *v15; // x0
  System_Collections_Generic_List_int__o *v16; // x25
  System_Func_object__bool__o *v17; // x26
  System_Collections_Generic_List_int__o *v18; // x26
  __int64 v19; // x27
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Func_object__bool__o *v22; // x28
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x26
  int32_t v24; // w27
  MyRoomParamsManager_c *v25; // x0
  void *monitor; // x8
  unsigned __int64 v27; // x28
  int32_t v28; // w27
  int32_t displayGroupId; // w19
  MyRoomParamsManager_c *v30; // x0
  bool v31; // w0
  int32_t v33; // w21
  MyRoomParamsManager_c *v34; // x0
  int32_t item; // [xsp+8h] [xbp-A8h]
  int32_t v36; // [xsp+Ch] [xbp-A4h]
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v39; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4C3E3F2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Contains_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_System_Linq_Enumerable_SingleOrDefault_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__IndexOf__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass455_0__GetDisplayBgGroupIndex_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass455_0_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass455_1__GetDisplayBgGroupIndex_b__1__);
    sub_1C37058(&MyRoomControl___c__DisplayClass455_1_TypeInfo);
    byte_4C3E3F2 = 1;
  }
  memset(&v39, 0, sizeof(v39));
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4C3E40A )
  {
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    byte_4C3E40A = 1;
  }
  v1 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
  if ( !byte_4C3E40B )
  {
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    v1 = MyRoomParamsManager_TypeInfo;
    byte_4C3E40B = 1;
  }
  if ( !v1->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v1);
    v1 = MyRoomParamsManager_TypeInfo;
  }
  v1->static_fields->_DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField = -1;
  if ( (DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField & 0x80000000) == 0 )
  {
    v3 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v3 = MyRoomControl_TypeInfo;
    }
    enableBgGroupIdList = v3->static_fields->enableBgGroupIdList;
    if ( !enableBgGroupIdList )
      goto LABEL_107;
    if ( System_Collections_Generic_List_int___Contains(
           enableBgGroupIdList,
           DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField,
           (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      if ( !byte_4C3E409 )
      {
        sub_1C37058(&MyRoomParamsManager_TypeInfo);
        byte_4C3E409 = 1;
      }
      v5 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
        v5 = MyRoomParamsManager_TypeInfo;
      }
      v5->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
      v6 = MyRoomControl_TypeInfo;
      if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
        v6 = MyRoomControl_TypeInfo;
      }
      enableBgGroupIdList = v6->static_fields->enableBgGroupIdList;
      if ( enableBgGroupIdList )
      {
        v7 = DisplayMyRoomBgGroupIdByLastClearQuest_k__BackingField;
        return System_Collections_Generic_List_int___IndexOf(
                 enableBgGroupIdList,
                 v7,
                 (const MethodInfo_3786C7C *)Method_System_Collections_Generic_List_int__IndexOf__);
      }
      goto LABEL_107;
    }
  }
  v9 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)MyRoomControl__GetBgSaveData((const MethodInfo *)v9);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4C3E40C )
  {
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    byte_4C3E40C = 1;
  }
  v10 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v10 = MyRoomParamsManager_TypeInfo;
  }
  item = v10->static_fields->_DisplayMyRoomBgGroupId_k__BackingField;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  for ( i = 0; ; i = v36 + 1 )
  {
    v13 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v13 = MyRoomControl_TypeInfo;
    }
    enableBgGroupIdList = v13->static_fields->enableBgGroupIdList;
    if ( !enableBgGroupIdList )
      goto LABEL_107;
    if ( i >= enableBgGroupIdList->fields._size )
      break;
    v14 = (MyRoomControl___c__DisplayClass455_0_o *)sub_1C372A4(MyRoomControl___c__DisplayClass455_0_TypeInfo);
    MyRoomControl___c__DisplayClass455_0___ctor(v14, 0);
    v15 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v15 = MyRoomControl_TypeInfo;
    }
    enableBgGroupIdList = v15->static_fields->enableBgGroupIdList;
    if ( !enableBgGroupIdList )
      goto LABEL_107;
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                      enableBgGroupIdList,
                                                                      i,
                                                                      (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v14 )
      goto LABEL_107;
    v36 = i;
    v14->fields.displayGroupId = (int)enableBgGroupIdList;
    if ( !Master_object )
      goto LABEL_107;
    v16 = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, (int32_t)enableBgGroupIdList, 0);
    v17 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v14,
      Method_MyRoomControl___c__DisplayClass455_0__GetDisplayBgGroupIndex_b__0__,
      0);
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__FirstOrDefault_object__51451648(
                                                                      source,
                                                                      (System_Func_TSource__bool__o *)v17,
                                                                      (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
    v18 = enableBgGroupIdList;
    if ( !v14->fields.displayGroupId )
    {
      v19 = sub_1C372A4(MyRoomControl___c__DisplayClass455_1_TypeInfo);
      MyRoomControl___c__DisplayClass455_1___ctor((MyRoomControl___c__DisplayClass455_1_o *)v19, 0);
      if ( !v19 )
        goto LABEL_107;
      *(_QWORD *)(v19 + 24) = v14;
      sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 24), (int32_t)v14, v20, v21);
      *(_DWORD *)(v19 + 16) = MyRoomAddMaster__GetMainGroupWarId((MyRoomAddMaster_o *)Master_object, 0);
      v22 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v22,
        (Il2CppObject *)v19,
        Method_MyRoomControl___c__DisplayClass455_1__GetDisplayBgGroupIndex_b__1__,
        0);
      enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__SingleOrDefault_object__51530816(
                                                                        source,
                                                                        (System_Func_TSource__bool__o *)v22,
                                                                        (const MethodInfo_3124C40 *)Method_System_Linq_Enumerable_SingleOrDefault_MyRoomControl_BackGroundSaveData___);
      if ( enableBgGroupIdList )
        v18 = enableBgGroupIdList;
    }
    if ( !v18 )
    {
      displayGroupId = v14->fields.displayGroupId;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v8 = v36;
      if ( !byte_4C3E409 )
      {
        sub_1C37058(&MyRoomParamsManager_TypeInfo);
        byte_4C3E409 = 1;
      }
      v30 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        goto LABEL_94;
      goto LABEL_95;
    }
    if ( !v16 )
      goto LABEL_107;
    v23 = *(System_Collections_Generic_IEnumerable_TSource__o **)&v18->fields._size;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v38,
      v16,
      (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v39 = v38;
    while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
              &v39,
              (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      if ( !System_Linq_Enumerable__Contains_int_(
              v23,
              v39.fields._current,
              (const MethodInfo_3104C08 *)Method_System_Linq_Enumerable_Contains_int___) )
      {
        v24 = v14->fields.displayGroupId;
        if ( v24 != item )
        {
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
          if ( !byte_4C3E409 )
          {
            sub_1C37058(&MyRoomParamsManager_TypeInfo);
            byte_4C3E409 = 1;
          }
          v25 = MyRoomParamsManager_TypeInfo;
          if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
            v25 = MyRoomParamsManager_TypeInfo;
          }
          v25->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = v24;
        }
        System_Collections_Generic_List_Enumerator_int___Dispose(
          &v39,
          (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
        return v36;
      }
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v39,
      (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v23 )
      goto LABEL_107;
    monitor = v23[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v27 = 0;
      while ( 1 )
      {
        if ( v27 >= (unsigned int)monitor )
          sub_1C372BC(enableBgGroupIdList);
        v28 = *((_DWORD *)&v23[2].klass + v27);
        enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                          v16,
                                                                          v28,
                                                                          (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)enableBgGroupIdList & 1) == 0 )
        {
          enableBgGroupIdList = (System_Collections_Generic_List_int__o *)MyRoomAddMaster__IsExistOverWriteIdInGroup(
                                                                            (MyRoomAddMaster_o *)Master_object,
                                                                            v28,
                                                                            v14->fields.displayGroupId,
                                                                            0);
          if ( ((unsigned __int8)enableBgGroupIdList & 1) != 0 )
            break;
        }
        LODWORD(monitor) = v23[1].monitor;
        if ( (__int64)++v27 >= (int)monitor )
          goto LABEL_72;
      }
      displayGroupId = v14->fields.displayGroupId;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v8 = v36;
      if ( !byte_4C3E409 )
      {
        sub_1C37058(&MyRoomParamsManager_TypeInfo);
        byte_4C3E409 = 1;
      }
      v30 = MyRoomParamsManager_TypeInfo;
      if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      {
LABEL_94:
        j_il2cpp_runtime_class_init_0(v30);
        v30 = MyRoomParamsManager_TypeInfo;
      }
LABEL_95:
      v30->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = displayGroupId;
      return v8;
    }
LABEL_72:
    ;
  }
  if ( (item & 0x80000000) == 0 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13);
      enableBgGroupIdList = MyRoomControl_TypeInfo->static_fields->enableBgGroupIdList;
      if ( !enableBgGroupIdList )
        goto LABEL_107;
    }
    v31 = System_Collections_Generic_List_int___Contains(
            enableBgGroupIdList,
            item,
            (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
    v13 = MyRoomControl_TypeInfo;
    if ( v31 )
    {
      if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
        v13 = MyRoomControl_TypeInfo;
      }
      enableBgGroupIdList = v13->static_fields->enableBgGroupIdList;
      if ( enableBgGroupIdList )
      {
        v7 = item;
        return System_Collections_Generic_List_int___IndexOf(
                 enableBgGroupIdList,
                 v7,
                 (const MethodInfo_3786C7C *)Method_System_Collections_Generic_List_int__IndexOf__);
      }
LABEL_107:
      sub_1C372B4(enableBgGroupIdList);
    }
  }
  if ( !v13->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v13);
    v13 = MyRoomControl_TypeInfo;
  }
  enableBgGroupIdList = v13->static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    goto LABEL_107;
  v33 = System_Collections_Generic_List_int___get_Item(
          enableBgGroupIdList,
          0,
          (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  if ( !byte_4C3E409 )
  {
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    byte_4C3E409 = 1;
  }
  v34 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v34 = MyRoomParamsManager_TypeInfo;
  }
  v8 = 0;
  v34->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = v33;
  return v8;
}


int32_t MyRoomControl__GetImageLimitCount(
        MyRoomControl_o *this,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  Il2CppObject *Master_object; // x21
  __int64 v7; // x0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3E3EC & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    byte_4C3E3EC = 1;
  }
  entity = 0;
  if ( imageLimitCount >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v7 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0);
    if ( !Master_object )
      goto LABEL_13;
    v7 = MyroomServantSpecialImageMaster__TryGetEntity(
           (MyroomServantSpecialImageMaster_o *)Master_object,
           &entity,
           svtId,
           v7,
           0);
    if ( (v7 & 1) != 0 )
    {
      if ( entity )
        return entity->fields.baseLimitCount;
LABEL_13:
      sub_1C372B4(v7);
    }
  }
  return imageLimitCount;
}


bool MyRoomControl__GetIsListActive(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.IsListActive;
}


bool MyRoomControl__GetIsMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.IsMaterialEventBack;
}


MaterialCollectionServantListViewManager_o *MyRoomControl__GetMaterialCollectionServantListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.materialCollectionServantListViewManager;
}


MaterialEventLogListViewManager_o *MyRoomControl__GetMaterialEventLogListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.mMaterialEventLogListViewManager;
}


MaterialEventLogServantListViewManager_o *MyRoomControl__GetMaterialEventLogServantListViewManager(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  return this->fields.materialEventLogServantListViewManager;
}


void MyRoomControl__GetMaximTransformValues(
        MyRoomControl_o *this,
        UnityEngine_Vector3_o *localScale,
        UnityEngine_Vector3_o *localEulerAngle,
        const MethodInfo *method)
{
  MyRoomControl_o *v6; // x21
  ManagerConfig_c *v7; // x0
  float v8; // s0
  struct UISprite_o *takingPhotoFrameSprite; // x8
  float v10; // s8
  float v11; // s9
  struct ManagerConfig_StaticFields *static_fields; // x9
  int *p_WIDTH; // x9
  int *p_mHeight; // x8
  float v15; // s0

  v6 = this;
  if ( (byte_4C3E3DA & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C37058(&ManagerConfig_TypeInfo);
    byte_4C3E3DA = 1;
  }
  v8 = MyRoomControl__CalcGameScreenAspectRatio(this, (const MethodInfo *)localScale);
  takingPhotoFrameSprite = v6->fields.takingPhotoFrameSprite;
  if ( !takingPhotoFrameSprite )
    goto LABEL_12;
  v10 = v8;
  v7 = ManagerConfig_TypeInfo;
  v11 = (float)takingPhotoFrameSprite->fields.mHeight / (float)takingPhotoFrameSprite->fields.mWidth;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v7 = ManagerConfig_TypeInfo;
    takingPhotoFrameSprite = v6->fields.takingPhotoFrameSprite;
  }
  static_fields = v7->static_fields;
  if ( v10 >= v11 )
  {
    if ( takingPhotoFrameSprite )
    {
      p_WIDTH = &static_fields->WIDTH;
      p_mHeight = &takingPhotoFrameSprite->fields.mHeight;
      goto LABEL_11;
    }
LABEL_12:
    sub_1C372B4(v7);
  }
  if ( !takingPhotoFrameSprite )
    goto LABEL_12;
  p_WIDTH = &static_fields->HEIGHT;
  p_mHeight = &takingPhotoFrameSprite->fields.mWidth;
LABEL_11:
  v15 = (float)*p_WIDTH / (float)*p_mHeight;
  localScale->fields.z = 1.0;
  localScale->fields.x = v15;
  localScale->fields.y = v15;
  *(_QWORD *)&localEulerAngle->fields.x = 0;
  localEulerAngle->fields.z = 90.0;
}


int32_t MyRoomControl__GetNowImageLimitCount(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *materialImageIdList; // x0

  if ( (byte_4C3E3AC & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C3E3AC = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1C372B4(0);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
}


UnityEngine_Vector3_o MyRoomControl__GetPhotoCampaignMasterPosition(
        MyRoomControl_o *this,
        int32_t targetIndex,
        const MethodInfo *method)
{
  MasterPhotoMaster_o *Master_object; // x0
  MyRoomControl_o *v6; // x8
  MyRoomControl_o *v7; // x9
  float offsetX; // s8
  int isChangePhotoPosition; // w9
  int v10; // w13
  bool v11; // zf
  int v12; // w9
  float y; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionZ; // s2
  float v16; // s0
  float v17; // s1
  MasterPhotoEntity_o *entity; // [xsp+18h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E3D4 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MasterPhotoMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    byte_4C3E3D4 = 1;
  }
  entity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
  if ( this->fields.isOneShot )
    v6 = 0;
  else
    v6 = this;
  if ( this->fields.isOneShot )
    v7 = this;
  else
    v7 = 0;
  if ( this->fields.isOneShot )
  {
    if ( !v7 )
      goto LABEL_28;
    v7->fields.masterPosition = 0;
    offsetX = -300.0;
    if ( !Master_object )
      goto LABEL_28;
  }
  else
  {
    if ( !v6 )
      goto LABEL_28;
    isChangePhotoPosition = this->fields.isChangePhotoPosition;
    v10 = targetIndex == 1;
    v11 = isChangePhotoPosition == v10;
    v12 = isChangePhotoPosition == v10 ? 1 : 2;
    offsetX = v11 ? -600.0 : -150.0;
    v6->fields.masterPosition = v12;
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
                                           0);
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
    sub_1C372B4(Master_object);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(gameObject, 0);
  v16 = offsetX;
  v17 = y;
  result.fields.z = LocalPositionZ;
  result.fields.y = v17;
  result.fields.x = v16;
  return result;
}


void MyRoomControl__GetPhotoCampaignServantPositionAndScale(
        MyRoomControl_o *this,
        PhotoStandFigureComponent_o *photoStandFigure,
        int32_t targetIndex,
        UnityEngine_Vector3_o *position,
        float *scale,
        const MethodInfo *method)
{
  MyRoomControl_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float myRoomData_low; // s8
  float v14; // s1
  float y; // s9
  int m_CancellationTokenSource; // w9
  MyRoomControl_o *v17; // x24
  int v18; // w10
  int v19; // w8
  struct ServantPhotoEntity_FaceData_array *FaceList_k__BackingField; // x8
  __int64 FaceListIndex_k__BackingField; // x9
  ServantPhotoEntity_FaceData_o *v22; // x8
  struct System_Int32_array *multiForm; // x8
  MyRoomControl_o *v24; // x22
  float PhotoSvtScaleLeft; // s0
  _BOOL4 v26; // w23
  System_Int32_array *v27; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  UnityEngine_GameObject_o *v29; // x0
  float LocalPositionZ; // s0
  ServantScriptEntity_o *entity; // [xsp+8h] [xbp-58h] BYREF

  v10 = this;
  if ( (byte_4C3E3D2 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantScriptMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    this = (MyRoomControl_o *)sub_1C37058(&int___TypeInfo);
    byte_4C3E3D2 = 1;
  }
  entity = 0;
  if ( !photoStandFigure )
    goto LABEL_48;
  this = (MyRoomControl_o *)photoStandFigure->fields.photoStandFigureBack;
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0);
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)this->fields.myRoomData;
  if ( !this )
    goto LABEL_48;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  if ( v10->fields.isOneShot )
  {
    myRoomData_low = -LocalPositionX;
  }
  else
  {
    v14 = 256.0;
    if ( v10->fields.isChangePhotoPosition == (targetIndex == 1) )
      v14 = -256.0;
    myRoomData_low = v14 - LocalPositionX;
  }
  y = v10->fields.defaultPhotoServantPos.fields.y;
  this = (MyRoomControl_o *)sub_1C37100(int___TypeInfo, 2);
  if ( !this )
    goto LABEL_48;
  m_CancellationTokenSource = (int)this->fields.m_CancellationTokenSource;
  v17 = this;
  if ( !m_CancellationTokenSource )
    goto LABEL_49;
  v18 = (int)myRoomData_low;
  if ( myRoomData_low == INFINITY )
    v18 = 0x80000000;
  LODWORD(this->fields.myRoomData) = v18;
  if ( m_CancellationTokenSource == 1 )
    goto LABEL_49;
  if ( y == INFINITY )
    v19 = 0x80000000;
  else
    v19 = (int)y;
  HIDWORD(this->fields.myRoomData) = v19;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantScriptMaster___);
  *scale = 1.0;
  FaceList_k__BackingField = photoStandFigure->fields._FaceList_k__BackingField;
  if ( !FaceList_k__BackingField )
    goto LABEL_48;
  FaceListIndex_k__BackingField = photoStandFigure->fields._FaceListIndex_k__BackingField;
  if ( (unsigned int)FaceListIndex_k__BackingField >= LODWORD(FaceList_k__BackingField->max_length) )
    goto LABEL_49;
  v22 = FaceList_k__BackingField->m_Items[FaceListIndex_k__BackingField];
  if ( !v22 )
    goto LABEL_48;
  multiForm = v22->fields.multiForm;
  if ( !multiForm )
    goto LABEL_48;
  if ( !LODWORD(multiForm->max_length) )
    goto LABEL_49;
  if ( !this )
    goto LABEL_48;
  this = (MyRoomControl_o *)ServantScriptMaster__TryGetEntity(
                              (ServantScriptMaster_o *)this,
                              &entity,
                              photoStandFigure->fields._StandFigureImageId_k__BackingField,
                              multiForm->m_Items[0],
                              0);
  if ( ((unsigned __int8)this & 1) == 0 )
    goto LABEL_44;
  if ( !v10->fields.isOneShot )
  {
    this = (MyRoomControl_o *)entity;
    v26 = targetIndex == 1;
    if ( entity )
    {
      v27 = v10->fields.isChangePhotoPosition == v26
          ? ServantScriptEntity__GetPhotoSvtPositionLeft(entity, (System_Int32_array *)v17, 0)
          : ServantScriptEntity__GetPhotoSvtPositionRight(entity, (System_Int32_array *)v17, 0);
      v24 = (MyRoomControl_o *)v27;
      this = (MyRoomControl_o *)entity;
      if ( entity )
      {
        if ( v10->fields.isChangePhotoPosition == v26 )
          PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScaleLeft(entity, 1.0, 0);
        else
          PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScaleRight(entity, 1.0, 0);
        goto LABEL_41;
      }
    }
LABEL_48:
    sub_1C372B4(this);
  }
  this = (MyRoomControl_o *)entity;
  if ( !entity )
    goto LABEL_48;
  this = (MyRoomControl_o *)ServantScriptEntity__GetPhotoSvtPosition(entity, (System_Int32_array *)v17, 0);
  if ( !entity )
    goto LABEL_48;
  v24 = this;
  PhotoSvtScaleLeft = ServantScriptEntity__GetPhotoSvtScale(entity, 1.0, 0);
LABEL_41:
  *scale = PhotoSvtScaleLeft;
  if ( !v24 )
    goto LABEL_48;
  if ( LODWORD(v24->fields.m_CancellationTokenSource) < 2 )
    goto LABEL_49;
  myRoomData_low = (float)SLODWORD(v24->fields.myRoomData);
  y = (float)SHIDWORD(v24->fields.myRoomData);
LABEL_44:
  photoStandFigures = v10->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_48;
  if ( !LODWORD(photoStandFigures->max_length) )
LABEL_49:
    sub_1C372BC(this);
  this = (MyRoomControl_o *)photoStandFigures->m_Items[0];
  if ( !this )
    goto LABEL_48;
  v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v29, 0);
  position->fields.x = myRoomData_low;
  position->fields.y = y;
  position->fields.z = LocalPositionZ;
}


void MyRoomControl__GetPhotoStaffPosition(
        MyRoomControl_o *this,
        PhotoStandFigureComponent_o *photoStandFigure,
        int32_t targetIndex,
        UnityEngine_Vector3_o *position,
        const MethodInfo *method)
{
  StaffPhotoCostumeMaster_o *Master_object; // x0
  StaffPhotoCostumeMaster_o *v10; // x23
  UnityEngine_GameObject_o *gameObject; // x0
  float LocalPositionX; // s0
  float revision; // s8
  float v14; // s1
  float y; // s9
  int MasterName_k__BackingField; // w9
  System_Int32_array *v17; // x24
  int v18; // w10
  unsigned int v19; // w8
  UnityEngine_GameObject_o *v20; // x0
  float LocalPositionZ; // s0
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3E3D3 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    byte_4C3E3D3 = 1;
  }
  costumeEntity = 0;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !photoStandFigure )
    goto LABEL_35;
  v10 = Master_object;
  Master_object = (StaffPhotoCostumeMaster_o *)photoStandFigure->fields.photoStandFigureBack;
  if ( !Master_object )
    goto LABEL_35;
  Master_object = (StaffPhotoCostumeMaster_o *)StandFigureBack__GetSvtStandFigure(
                                                 (StandFigureBack_o *)Master_object,
                                                 0,
                                                 0);
  if ( !Master_object )
    goto LABEL_35;
  Master_object = *(StaffPhotoCostumeMaster_o **)&Master_object->fields.revision;
  if ( !Master_object )
    goto LABEL_35;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)Master_object, 0);
  LocalPositionX = GameObjectExtensions__GetLocalPositionX(gameObject, 0);
  if ( this->fields.isOneShot )
  {
    revision = -LocalPositionX;
  }
  else
  {
    v14 = 256.0;
    if ( this->fields.isChangePhotoPosition == (targetIndex == 1) )
      v14 = -256.0;
    revision = v14 - LocalPositionX;
  }
  y = this->fields.defaultPhotoServantPos.fields.y;
  Master_object = (StaffPhotoCostumeMaster_o *)sub_1C37100(int___TypeInfo, 2);
  if ( !Master_object )
    goto LABEL_35;
  MasterName_k__BackingField = (int)Master_object->fields._MasterName_k__BackingField;
  v17 = (System_Int32_array *)Master_object;
  if ( !MasterName_k__BackingField )
    goto LABEL_36;
  v18 = (int)revision;
  if ( revision == INFINITY )
    v18 = 0x80000000;
  Master_object->fields.revision = v18;
  if ( MasterName_k__BackingField == 1 )
    goto LABEL_36;
  v19 = y == INFINITY ? 0x80000000 : (int)y;
  *(&Master_object->fields.revision + 1) = v19;
  if ( !v10 )
    goto LABEL_35;
  if ( StaffPhotoCostumeMaster__TryGetEntityByImageId(
         v10,
         &costumeEntity,
         photoStandFigure->fields._StandFigureImageId_k__BackingField,
         0) )
  {
    Master_object = (StaffPhotoCostumeMaster_o *)costumeEntity;
    if ( this->fields.isOneShot )
    {
      if ( !costumeEntity )
        goto LABEL_35;
      Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionCenter(
                                                     costumeEntity,
                                                     v17,
                                                     0);
    }
    else
    {
      if ( !costumeEntity )
        goto LABEL_35;
      if ( this->fields.isChangePhotoPosition == (targetIndex == 1) )
        Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionLeft(
                                                       costumeEntity,
                                                       v17,
                                                       0);
      else
        Master_object = (StaffPhotoCostumeMaster_o *)StaffPhotoCostumeEntity__GetPhotoPositionRight(
                                                       costumeEntity,
                                                       v17,
                                                       0);
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
      sub_1C372BC(Master_object);
    }
LABEL_35:
    sub_1C372B4(Master_object);
  }
LABEL_34:
  v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoStandFigure, 0);
  LocalPositionZ = GameObjectExtensions__GetLocalPositionZ(v20, 0);
  position->fields.x = revision;
  position->fields.y = y;
  position->fields.z = LocalPositionZ;
}


SceneJumpInfo_o *MyRoomControl__GetSceneJumpInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.sceneJumpInfo;
}


System_Int32_array *MyRoomControl__GetSortedCostumeIds(
        MyRoomControl_o *this,
        int32_t servantId,
        const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *v4; // x19
  ServantCostumeEntity_array *Instance; // x0
  int max_length; // w8
  ServantCostumeEntity_array *v7; // x20
  unsigned int v8; // w21
  ServantCostumeEntity_o *v9; // x8
  int32_t id; // w1
  struct System_Int32_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10

  if ( (byte_4C3E3B0 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantCostumeMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int___ctor__);
    sub_1C37058(&System_Collections_Generic_List_int__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E3B0 = 1;
  }
  v4 = (System_Collections_Generic_List_int__o *)sub_1C372A4(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v4,
    (const MethodInfo_37857AC *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
  if ( !Instance )
    goto LABEL_18;
  Instance = ServantCostumeMaster__releasedCostumeEntityList((ServantCostumeMaster_o *)Instance, servantId, 1, 0);
  if ( !Instance )
    goto LABEL_18;
  max_length = Instance->max_length;
  v7 = Instance;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1C372BC(Instance);
      v9 = v7->m_Items[v8];
      if ( !v9 )
        break;
      if ( !v4 )
        break;
      id = v9->fields.id;
      items = v4->fields._items;
      v12 = Method_System_Collections_Generic_List_int__Add__;
      ++v4->fields._version;
      if ( !items )
        break;
      size = v4->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          v4,
          id,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
      }
      else
      {
        v4->fields._size = size + 1;
        items->m_Items[size] = id;
      }
      max_length = v7->max_length;
      if ( (int)++v8 >= max_length )
        goto LABEL_16;
    }
LABEL_18:
    sub_1C372B4(Instance);
  }
LABEL_16:
  if ( !v4 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v4,
           (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4C3E36E & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C37058(&Method_CStateManager_MyRoomControl__getState__);
    byte_4C3E36E = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(this);
  return mFSM->fields.m_state;
}


MyRoomStateMaterial_o *MyRoomControl__GetStateMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mStateMaterial;
}


// local variable allocation has failed, the output may be wrong!
System_Collections_Generic_List_ServantVoiceData____o *MyRoomControl__GetVoiceList(
        MyRoomControl_o *this,
        ServantVoiceEntity_o *svtVoiceEnt,
        int32_t svtId,
        int32_t imageLimitCount,
        const MethodInfo *method)
{
  __int64 v6; // x0

  v6 = MyRoomControl__GetImageLimitCount(this, svtId, imageLimitCount, *(const MethodInfo **)&imageLimitCount);
  if ( !svtVoiceEnt )
    sub_1C372B4(v6);
  return ServantVoiceEntity__getMyRoomVoiceList(svtVoiceEnt, v6, 0);
}


void MyRoomControl__GoToTitle(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *v5; // x20
  System_String_o *v6; // x21
  Il2CppObject *Instance; // x22
  CommonConfirmDialog_ClickDelegate_o *v8; // x23
  BalanceConfig_c *v9; // x0

  if ( (byte_4C3E39C & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_GoToTitle__);
    sub_1C37058(&Method_MyRoomControl__GoToTitle_b__332_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_8862/*"MYROOM_TITLE_CONFIRM"*/);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3E39C = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v3 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_GoToTitle__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  v5 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_8862/*"MYROOM_TITLE_CONFIRM"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C372A4(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__332_0__, 0);
  v9 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1C372B4(v9);
  CommonUI__OpenConfirmDialog(
    (CommonUI_o *)Instance,
    v5,
    v6,
    v8,
    BalanceConfig_TypeInfo->static_fields->DefaultFontSize,
    0,
    0,
    0);
}


void MyRoomControl__HideContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *continueDeviceComp; // x0

  continueDeviceComp = (UnityEngine_Component_o *)this->fields.continueDeviceComp;
  if ( !continueDeviceComp
    || (continueDeviceComp = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(continueDeviceComp, 0)) == 0 )
  {
    sub_1C372B4(continueDeviceComp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0);
}


void MyRoomControl__HideExchangeSvtCoinMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C372B4(0);
  ExchangeSvtCoinComponent__HideMenu(exchangeSvtCoinComp, 0);
}


void MyRoomControl__HidePhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  void *photoCampaignDispUiMask; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  const MethodInfo *v10; // x2

  if ( (byte_4C3E3E7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoLayerChangeComponent__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
    sub_1C37058(&Method_MyRoomControl___c__HidePhotoUi_b__437_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E3E7 = 1;
  }
  this->fields.photoState = 3;
  photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)photoCampaignDispUiMask + 23) + 88LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)photoCampaignDispUiMask + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoCampaignDispUiMask);
      photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)photoCampaignDispUiMask + 23);
    v5 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_MyRoomControl___c__HidePhotoUi_b__437_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__437_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__437_0, (int32_t)v5, v8, v9);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v5,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0) )
  {
    sub_1C372B4(photoCampaignDispUiMask);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 1, 0);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v10);
}


System_Collections_IEnumerator_o *MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E38E & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo);
    byte_4C3E38E = 1;
  }
  v3 = sub_1C372A4(MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__286___ctor((MyRoomControl__InitMaterialOnBackground_d__286_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


System_Collections_IEnumerator_o *MyRoomControl__InitServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E390 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__InitServantMenu_d__289_TypeInfo);
    byte_4C3E390 = 1;
  }
  v3 = sub_1C372A4(MyRoomControl__InitServantMenu_d__289_TypeInfo);
  MyRoomControl__InitServantMenu_d__289___ctor((MyRoomControl__InitServantMenu_d__289_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


bool MyRoomControl__IsEnableButton(MyRoomControl_o *this, int32_t button, const MethodInfo *method)
{
  char v3; // vf

  return !(((this->fields.buttonFlag & button) < 0) ^ v3 | ((this->fields.buttonFlag & button) == 0));
}


bool MyRoomControl__IsEnableMultipleViewButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_4C3E3BD & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3BD = 1;
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


bool MyRoomControl__IsEnablePhotoCampaignButton(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0

  if ( (byte_4C3E3DE & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3DE = 1;
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


bool MyRoomControl__IsFrontMultipleServant(MyRoomControl_o *this, int32_t index, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x20
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  v4 = this;
  if ( (byte_4C3E3B6 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3E3B6 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( LODWORD(multipleStandFigureBacks->max_length) <= index )
    sub_1C372BC(this);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0 )
  {
LABEL_8:
    sub_1C372B4(this);
  }
  return SLODWORD(this->fields.changeLimitBtnInitPos.fields.y) > 15;
}


bool MyRoomControl__IsRightPosPhotoTarget(MyRoomControl_o *this, int32_t targetIndex, const MethodInfo *method)
{
  return this->fields.isChangePhotoPosition != (targetIndex == 1);
}


bool MyRoomControl__IsSceneJumpExist(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.sceneJumpInfo != 0;
}


bool MyRoomControl__IsScrollviewInShowPosition(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  System_String_o *v5; // x0
  float x; // s8
  float y; // s9
  float z; // s10
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E37D & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    sub_1C37058(&StringLiteral_7301/*"Help"*/);
    byte_4C3E37D = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v5 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
    if ( System_String__op_Inequality(v5, (System_String_o *)StringLiteral_7301/*"Help"*/, 0) )
      return 0;
  }
  myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomListCtr;
  if ( !myRoomFsm )
    goto LABEL_16;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)myRoomFsm, 0);
  if ( !myRoomFsm )
    goto LABEL_16;
  position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0);
  myRoomFsm = (PlayMakerFSM_o *)this->fields.mShowPos;
  if ( !myRoomFsm )
    goto LABEL_16;
  x = position.fields.x;
  y = position.fields.y;
  z = position.fields.z;
  myRoomFsm = (PlayMakerFSM_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)myRoomFsm, 0);
  if ( !myRoomFsm )
    goto LABEL_16;
  v12 = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)myRoomFsm, 0);
  if ( (float)((float)((float)(z - v12.fields.z) * (float)(z - v12.fields.z))
             + (float)((float)((float)(x - v12.fields.x) * (float)(x - v12.fields.x))
                     + (float)((float)(y - v12.fields.y) * (float)(y - v12.fields.y)))) < 1.0e-10 )
    return 1;
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
LABEL_16:
    sub_1C372B4(myRoomFsm);
  return !mMaterialEventLogListViewManager->fields.mIsDoing_Slide;
}


bool MyRoomControl__IsServantMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.isServantMaterial;
}


void MyRoomControl__LinkageStatusCheckCallback(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  int32_t notificationType; // w8

  if ( (byte_4C3E394 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageParams_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C3E394 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22382/*"ok"*/, 0) )
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


void MyRoomControl__LoadMasterEquip(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Master_object; // x20
  DataManager_o *MasterData_object; // x0
  UserEquipEntity_array *List; // x20
  long double v5; // q0
  __int64 v6; // x8
  __int64 v7; // x0
  int max_length; // w8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v9; // x29
  __int64 *v10; // x26
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x19
  unsigned int v12; // w27
  UserEquipEntity_o *v13; // x28
  __int64 v14; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  __int64 v17; // x24
  __int64 v18; // x25
  __int64 v19; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v20; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v21; // x0
  UserEquipEntity_array *v22; // x29
  const MethodInfo_33FA584 **v23; // x20
  __int64 v24; // x25
  __int64 v25; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  __int64 v31; // x5
  __int64 v32; // x6
  __int64 v33; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v34; // x0
  Il2CppObject *v35; // x0
  System_String_o *v36; // x24
  AssetLoader_LoadEndDataHandler_o *v37; // x25
  __int64 v38; // x2
  __int64 v39; // x3
  __int64 v40; // x4
  __int64 v41; // x5
  __int64 v42; // x6
  __int64 v43; // x7
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v44; // x0
  Il2CppObject *v45; // x0
  System_String_o *v46; // x23
  AssetLoader_LoadEndDataHandler_o *v47; // x24
  __int128 v49; // [xsp+10h] [xbp-80h] BYREF
  __int128 v50; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v51; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v52; // 0:x0.16

  if ( (byte_4C3E3C3 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EquipMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserEquipMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__1__);
    sub_1C37058(&MyRoomControl___c__DisplayClass397_0_TypeInfo);
    sub_1C37058(&StringLiteral_8943/*"MasterFace/equip{0:D5}"*/);
    byte_4C3E3C3 = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3CD62 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3CD62 = 1;
  }
  MasterData_object = (DataManager_o *)NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    MasterData_object = (DataManager_o *)NetworkManager_TypeInfo;
  }
  if ( !Master_object )
    goto LABEL_37;
  List = UserEquipMaster__getList(
           (UserEquipMaster_o *)Master_object,
           *(_QWORD *)(*(_QWORD *)&MasterData_object[1].fields._DispLog + 64LL),
           0);
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8776C(v5);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8776C(v5);
  MasterData_object = **(DataManager_o ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EquipMaster___);
  if ( !List )
    goto LABEL_37;
  max_length = List->max_length;
  if ( max_length >= 1 )
  {
    v9 = &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo;
    v10 = &Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__;
    v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C372BC(MasterData_object);
      v13 = List->m_Items[v12];
      v14 = sub_1C372A4(MyRoomControl___c__DisplayClass397_0_TypeInfo);
      MyRoomControl___c__DisplayClass397_0___ctor((MyRoomControl___c__DisplayClass397_0_o *)v14, 0);
      if ( !v14 )
        break;
      *(_QWORD *)(v14 + 24) = this;
      sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 24), (int32_t)this, v15, v16);
      if ( !v13 )
        break;
      v18 = *(_QWORD *)&v13->fields.equipId.fields.currentCryptoKey;
      v17 = *(_QWORD *)&v13->fields.equipId.fields.fakeValue;
      if ( !(*v9)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v9);
      *(_QWORD *)&v51.fields.currentCryptoKey = v18;
      *(_QWORD *)&v51.fields.fakeValue = v17;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v51, 0);
      if ( !v11 )
        break;
      v19 = v14 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v11,
              (Il2CppObject **)(v14 + 16),
              (int32_t)MasterData_object,
              (const MethodInfo_33A10EC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v20 = v9;
      v21 = *v9;
      v22 = List;
      v23 = (const MethodInfo_33FA584 **)v10;
      v25 = *(_QWORD *)&v13->fields.equipId.fields.currentCryptoKey;
      v24 = *(_QWORD *)&v13->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v21->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v21);
      *(_QWORD *)&v52.fields.currentCryptoKey = v25;
      *(_QWORD *)&v52.fields.fakeValue = v24;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v52, 0);
      if ( !masterFemaleEquipTexture )
        break;
      v10 = (__int64 *)v23;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        (int32_t)MasterData_object,
        0,
        *v23);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                             v13->fields.equipId,
                                             0);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        (int32_t)MasterData_object,
        0,
        *v23);
      if ( !*(_QWORD *)v19 )
        break;
      v34 = *v20;
      List = v22;
      v9 = v20;
      v50 = *(_OWORD *)(*(_QWORD *)v19 + 64LL);
      v35 = (Il2CppObject *)j_il2cpp_value_box_0(v34, &v50, v28, v29, v30, v31, v32, v33);
      v36 = System_String__Format((System_String_o *)StringLiteral_8943/*"MasterFace/equip{0:D5}"*/, v35, 0);
      v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v37,
        (Il2CppObject *)v14,
        Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__0__,
        0);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      MasterData_object = (DataManager_o *)AssetManager__loadAssetStorage(v36, v37, 10, 0);
      if ( !*(_QWORD *)v19 )
        break;
      v44 = *v20;
      v49 = *(_OWORD *)(*(_QWORD *)v19 + 80LL);
      v45 = (Il2CppObject *)j_il2cpp_value_box_0(v44, &v49, v38, v39, v40, v41, v42, v43);
      v46 = System_String__Format((System_String_o *)StringLiteral_8943/*"MasterFace/equip{0:D5}"*/, v45, 0);
      v47 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v47,
        (Il2CppObject *)v14,
        Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__1__,
        0);
      MasterData_object = (DataManager_o *)AssetManager__loadAssetStorage(v46, v47, 10, 0);
      max_length = List->max_length;
      if ( (int)++v12 >= max_length )
        return;
    }
LABEL_37:
    sub_1C372B4(MasterData_object);
  }
}


System_Collections_IEnumerator_o *MyRoomControl__LoadMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E3B8 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__LoadMultipleServant_d__381_TypeInfo);
    byte_4C3E3B8 = 1;
  }
  v3 = sub_1C372A4(MyRoomControl__LoadMultipleServant_d__381_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__381___ctor((MyRoomControl__LoadMultipleServant_d__381_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void MyRoomControl__LoadPhotoCampaignAssets(MyRoomControl_o *this, System_Action_o *callBack, const MethodInfo *method)
{
  __int64 v5; // x21
  Il2CppObject *Instance; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetLoader_LoadEndDataHandler_o *v11; // x19

  if ( (byte_4C3E3C2 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass396_0__LoadPhotoCampaignAssets_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass396_0_TypeInfo);
    sub_1C37058(&StringLiteral_9222/*"MyRoom/PhotoCampaign"*/);
    byte_4C3E3C2 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass396_0_TypeInfo);
  MyRoomControl___c__DisplayClass396_0___ctor((MyRoomControl___c__DisplayClass396_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_12;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = callBack;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)callBack, v9, v10);
  if ( this->fields.photoCampaignAssetData )
  {
    ActionExtensions__Call(*(System_Action_o **)(v5 + 24), 0);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v11,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass396_0__LoadPhotoCampaignAssets_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9222/*"MyRoom/PhotoCampaign"*/, v11, 1, 0) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(Instance);
  }
}


System_Collections_IEnumerator_o *MyRoomControl__LoadPhotoTarget(
        MyRoomControl_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4C3E3CE & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__LoadPhotoTarget_d__409_TypeInfo);
    byte_4C3E3CE = 1;
  }
  v5 = sub_1C372A4(MyRoomControl__LoadPhotoTarget_d__409_TypeInfo);
  MyRoomControl__LoadPhotoTarget_d__409___ctor((MyRoomControl__LoadPhotoTarget_d__409_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_BYTE *)(v5 + 40) = isUpdate;
  return (System_Collections_IEnumerator_o *)v5;
}


void MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E369 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E369 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
}


void MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3E385 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__LoadServantForm_b__266_0__);
    byte_4C3E385 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_0__, 0);
  if ( !svtCtr )
    sub_1C372B4(v5);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v4, 0);
}


void MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E386 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    byte_4C3E386 = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v6.fields.r = 1.0;
  v6.fields.g = 1.0;
  v6.fields.b = 1.0;
  v6.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v6, 0);
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
    sub_1C372B4(playBtnImg);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
}


void MyRoomControl__MoveEventButtonDisplay(
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
  GameObjectExtensions__SetLocalPosition(button, v4, 0);
  v5.fields.x = this->fields.voicePlayBtnInitPos.fields.x;
  v5.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
  v5.fields.y = this->fields.voicePlayBtnInitPos.fields.y + 48.0;
  GameObjectExtensions__SetLocalPosition(this->fields.voicePlayBtn, v5, 0);
  this->fields.voicePlayBtnInitPos = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0);
}


void MyRoomControl__MyRoomUIAnimationEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.isMyRoomUIAnimation = 0;
}


void MyRoomControl__MyRoomlUIAnimationStart(
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
  if ( (byte_4C3E3A4 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_9230/*"MyRoomUIAnimationEnd"*/);
    byte_4C3E3A4 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9230/*"MyRoomUIAnimationEnd"*/, v4);
}


void MyRoomControl__OnClickBack(MyRoomControl_o *this, const MethodInfo *method)
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
  const MethodInfo *v12; // x2
  int photoState; // w8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x21
  System_Action_o *v15; // x0
  intptr_t *v16; // x8
  _QWORD *v17; // x0
  System_Reflection_MethodBase_o *v18; // x0
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  int32_t type; // w8
  int32_t mState; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *temporaryPhotoTargetList; // x8
  int32_t size; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v25; // x8
  int32_t v26; // w8
  System_Action_o *v27; // x20
  BaseDialog_o *cgThumbnailDialog; // x21
  System_Action_o *v29; // x20
  MethodInfo *v30; // x1
  int v31; // w9
  char v32; // w8
  __int64 *v33; // x8
  bool v34; // w1
  MyRoomControl_o *v35; // x0
  __int64 *v36; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  bool IsOpenFolder; // w0
  System_String_o *ActiveStateName; // x0
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *materialCollectionComp; // x20
  MyRoomControl_c *v43; // x0
  struct NoticeInfoComponent_o *v44; // [xsp+8h] [xbp-28h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v45; // 0:x0.16
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C3E3A1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    sub_1C37058(&Method_MyRoomControl_OnClickBack__);
    sub_1C37058(&Method_MyRoomControl__OnClickBack_b__339_0__);
    sub_1C37058(&Method_MyRoomControl__OnClickBack_b__339_1__);
    sub_1C37058(&Method_MyRoomControl__OnClickBack_b__339_2__);
    sub_1C37058(&Method_MyRoomControl__OnClickBack_b__339_3__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_3498/*"CLOSE_ACCOUNT_LINKAGE"*/);
    sub_1C37058(&StringLiteral_3506/*"CLOSE_EXCHANGE_SVT_COIN"*/);
    sub_1C37058(&StringLiteral_3512/*"CLOSE_MATERIAL_COLLECTION"*/);
    sub_1C37058(&StringLiteral_3511/*"CLOSE_MATERIAL"*/);
    sub_1C37058(&StringLiteral_3524/*"CLOSE_USER_SERVANT_COIN"*/);
    sub_1C37058(&StringLiteral_3437/*"CLICK_BACK"*/);
    sub_1C37058(&StringLiteral_3515/*"CLOSE_NOTICE"*/);
    sub_1C37058(&StringLiteral_3509/*"CLOSE_GAMEOPTION"*/);
    sub_1C37058(&StringLiteral_3510/*"CLOSE_ITEMLIST"*/);
    sub_1C37058(&StringLiteral_3513/*"CLOSE_MATERIAL_COSTUME"*/);
    sub_1C37058(&StringLiteral_3504/*"CLOSE_CONTINUE_DEVICE"*/);
    sub_1C37058(&StringLiteral_3499/*"CLOSE_BLACKLIST"*/);
    sub_1C37058(&StringLiteral_13072/*"State 5"*/);
    sub_1C37058(&StringLiteral_3518/*"CLOSE_SERIAL_CODE"*/);
    sub_1C37058(&StringLiteral_3501/*"CLOSE_CHANGE_PROFILE"*/);
    sub_1C37058(&StringLiteral_3507/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/);
    sub_1C37058(&StringLiteral_3519/*"CLOSE_SOUND_PLAYER"*/);
    this = (MyRoomControl_o *)sub_1C37058(&StringLiteral_3508/*"CLOSE_FAVORITE_CHANGE"*/);
    byte_4C3E3A1 = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_97;
  if ( !mMaterialEventLogListViewManager->fields.mIsDoing_Slide )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !NetworkManager__CommunicationIsBusy(0)
      && !v2->fields.isMyRoomUIAnimation
      && !v2->fields.isBackBtnIgnore
      && !v2->fields.isSvtLoading )
    {
      multipleViewState = v2->fields.multipleViewState;
      if ( multipleViewState )
      {
        if ( multipleViewState == 2 )
        {
          v17 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v17 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickBack__);
          v18 = (System_Reflection_MethodBase_o *)sub_1C3703C(v17, v17[4]);
          OverwriteAssetSoundName__PlaySystemSe(v18, 1, 0, 0);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v19);
        }
        else if ( multipleViewState == 1 )
        {
          v6 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v6 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickBack__);
          v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v6, v6[4]);
          OverwriteAssetSoundName__PlaySystemSe(v7, 1, 0, 0);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v8);
        }
        return;
      }
      if ( v2->fields.photoState )
      {
        v9 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v9 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickBack__);
        v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v9, v9[4]);
        OverwriteAssetSoundName__PlaySystemSe(v10, 1, 0, 0);
        photoState = v2->fields.photoState;
        if ( photoState > 2 )
        {
          if ( photoState != 7 )
          {
            if ( photoState != 8 )
              return;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v16 = &Method_MyRoomControl__OnClickBack_b__339_3__;
LABEL_43:
            v27 = v15;
            System_Action___ctor(v15, (Il2CppObject *)v2, *v16, 0);
            if ( photoServantSelectMenu )
            {
              PhotoServantSelectMenu__Close(photoServantSelectMenu, v27, 0);
              return;
            }
            goto LABEL_97;
          }
          temporaryPhotoTargetList = v2->fields.temporaryPhotoTargetList;
          if ( !temporaryPhotoTargetList )
            goto LABEL_97;
          size = temporaryPhotoTargetList->fields._size;
          if ( size != 1 )
          {
            if ( size )
              return;
            v2->fields.photoState = 2;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v16 = &Method_MyRoomControl__OnClickBack_b__339_2__;
            goto LABEL_43;
          }
          v34 = 1;
          v35 = v2;
LABEL_56:
          MyRoomControl__ConfirmTargetSelectState(v35, v34, v12);
          return;
        }
        if ( photoState != 1 )
        {
          if ( photoState == 2 )
            MyRoomControl__TransitionMyRoomTop(v2, v11);
          return;
        }
        v25 = v2->fields.temporaryPhotoTargetList;
        if ( v25 )
        {
          v26 = v25->fields._size;
          if ( v26 != 1 )
          {
            if ( v26 )
              return;
            v2->fields.photoState = 0;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            v16 = &Method_MyRoomControl__OnClickBack_b__339_1__;
            goto LABEL_43;
          }
          v35 = v2;
          v34 = 0;
          goto LABEL_56;
        }
      }
      else
      {
        this = (MyRoomControl_o *)MyRoomControl__GetState(v2, v4);
        if ( !(_DWORD)this || (type = v2->fields.type, type == 10) )
        {
          mState = v2->fields.mState;
          v2->fields.IsMaterialEventBack = 1;
          if ( mState )
          {
            MyRoomControl__setDefSvtPos(v2, v20);
            return;
          }
          if ( v2->fields.type == 20 )
          {
            this = (MyRoomControl_o *)v2->fields.cgThumbnailDialog;
            if ( this )
            {
              CGThumbnailDialog__UnloadListViewAsset((CGThumbnailDialog_o *)this, 0);
              cgThumbnailDialog = (BaseDialog_o *)v2->fields.cgThumbnailDialog;
              v29 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
              System_Action___ctor(v29, (Il2CppObject *)v2, Method_MyRoomControl__OnClickBack_b__339_0__, 0);
              if ( cgThumbnailDialog )
              {
                BaseDialog__SafeClose(cgThumbnailDialog, v29, 0);
                return;
              }
            }
            goto LABEL_97;
          }
          this = (MyRoomControl_o *)v2->fields.mStateMaterial;
          if ( !this )
            goto LABEL_97;
          this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0);
          if ( ((unsigned __int8)this & 1) != 0 )
            return;
          type = v2->fields.type;
        }
        v30 = (MethodInfo *)StringLiteral_3437/*"CLICK_BACK"*/;
        v31 = type - 1;
        v32 = 0;
        switch ( v31 )
        {
          case 0:
            v33 = &StringLiteral_3511/*"CLOSE_MATERIAL"*/;
            goto LABEL_66;
          case 1:
            v36 = (__int64 *)&StringLiteral_3512/*"CLOSE_MATERIAL_COLLECTION"*/;
            goto LABEL_79;
          case 2:
            v36 = (__int64 *)&StringLiteral_3510/*"CLOSE_ITEMLIST"*/;
            goto LABEL_79;
          case 3:
            v36 = (__int64 *)&StringLiteral_3501/*"CLOSE_CHANGE_PROFILE"*/;
            goto LABEL_79;
          case 4:
            optionComp = v2->fields.optionComp;
            if ( !optionComp )
              break;
            optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
            if ( optionSceneType_k__BackingField )
            {
              v32 = 0;
              if ( optionSceneType_k__BackingField == 1 )
                v30 = (MethodInfo *)StringLiteral_3499/*"CLOSE_BLACKLIST"*/;
            }
            else
            {
              v36 = (__int64 *)&StringLiteral_3509/*"CLOSE_GAMEOPTION"*/;
LABEL_79:
              v30 = (MethodInfo *)*v36;
              v32 = 0;
            }
LABEL_80:
            if ( ((unsigned __int8)v32 & (v2->fields.mState != 0)) != 0 )
            {
              MyRoomControl__setDefSvtPos(v2, v30);
            }
            else
            {
              this = (MyRoomControl_o *)v2->fields.titleInfo;
              if ( !this )
                break;
              TitleInfoControl__sendEvent((TitleInfoControl_o *)this, (System_String_o *)v30, 0);
            }
            this = (MyRoomControl_o *)v2->fields.myRoomFsm;
            if ( this )
            {
              ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)this, 0);
              if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13072/*"State 5"*/, 0) )
                return;
              this = (MyRoomControl_o *)v2->fields.myRoomData;
              if ( this )
              {
                this = (MyRoomControl_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)this, v2->fields.fvrUsrSvtId, 0);
                if ( this )
                {
                  noticeComp = this->fields.noticeComp;
                  materialCollectionComp = this->fields.materialCollectionComp;
                  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
                  {
                    v44 = this->fields.noticeComp;
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    noticeComp = v44;
                  }
                  *(_QWORD *)&v45.fields.currentCryptoKey = noticeComp;
                  *(_QWORD *)&v45.fields.fakeValue = materialCollectionComp;
                  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v45, 0) < 1
                    || v2->fields.isHeroine && v2->fields.isHeroineReave )
                  {
                    return;
                  }
                  this = (MyRoomControl_o *)v2->fields.changeBtnImg;
                  if ( this )
                  {
                    v46.fields.r = 1.0;
                    v46.fields.g = 1.0;
                    v46.fields.b = 1.0;
                    v46.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)this, v46, 0);
                    v43 = MyRoomControl_TypeInfo;
                    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                      v43 = MyRoomControl_TypeInfo;
                    }
                    v2->fields.buttonFlag |= v43->static_fields->BUTTON_LIMIT_CHANGE;
                    return;
                  }
                }
              }
            }
            break;
          case 5:
            v33 = &StringLiteral_3515/*"CLOSE_NOTICE"*/;
LABEL_66:
            v30 = (MethodInfo *)*v33;
            v32 = 1;
            goto LABEL_80;
          case 6:
            v36 = &StringLiteral_3518/*"CLOSE_SERIAL_CODE"*/;
            goto LABEL_79;
          case 7:
            v36 = &StringLiteral_3504/*"CLOSE_CONTINUE_DEVICE"*/;
            goto LABEL_79;
          case 8:
            v36 = (__int64 *)&StringLiteral_3508/*"CLOSE_FAVORITE_CHANGE"*/;
            goto LABEL_79;
          case 9:
            v36 = &StringLiteral_3519/*"CLOSE_SOUND_PLAYER"*/;
            goto LABEL_79;
          case 10:
            v36 = (__int64 *)&StringLiteral_3513/*"CLOSE_MATERIAL_COSTUME"*/;
            goto LABEL_79;
          case 16:
            v36 = &StringLiteral_3524/*"CLOSE_USER_SERVANT_COIN"*/;
            goto LABEL_79;
          case 17:
            v36 = &StringLiteral_3498/*"CLOSE_ACCOUNT_LINKAGE"*/;
            goto LABEL_79;
          case 18:
            this = (MyRoomControl_o *)v2->fields.exchangeSvtCoinComp;
            if ( !this )
              break;
            IsOpenFolder = ExchangeSvtCoinComponent__IsOpenFolder((ExchangeSvtCoinComponent_o *)this, 0);
            v36 = (__int64 *)&StringLiteral_3507/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/;
            if ( !IsOpenFolder )
              v36 = (__int64 *)&StringLiteral_3506/*"CLOSE_EXCHANGE_SVT_COIN"*/;
            goto LABEL_79;
          default:
            goto LABEL_80;
        }
      }
LABEL_97:
      sub_1C372B4(this);
    }
  }
}


void MyRoomControl__OnClickChangeBg(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  MyRoomControl_c *v4; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *enableBgGroupIdList; // x10
  int v7; // w9
  struct MyRoomControl_StaticFields *v8; // x8
  int32_t Item; // w20
  MyRoomParamsManager_c *v10; // x0
  _QWORD *v11; // x0
  System_Reflection_MethodBase_o *v12; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0

  if ( (byte_4C3E3ED & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_MyRoomControl_OnClickChangeBg__);
    sub_1C37058(&Method_MyRoomControl__OnClickChangeBg_b__450_0__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E3ED = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  static_fields = v4->static_fields;
  if ( ((this->fields.buttonFlag & static_fields->BUTTON_CHANGE_BG) < 0) ^ v2
     | ((this->fields.buttonFlag & static_fields->BUTTON_CHANGE_BG) == 0) )
  {
    v18 = Method_MyRoomControl_OnClickChangeBg__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeBg__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickChangeBg__);
    v19 = (System_Reflection_MethodBase_o *)sub_1C3703C(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 2, 0, 0);
  }
  else
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MyRoomControl_TypeInfo;
      static_fields = MyRoomControl_TypeInfo->static_fields;
    }
    enableBgGroupIdList = static_fields->enableBgGroupIdList;
    v7 = static_fields->displayBgGroupIndex + 1;
    static_fields->displayBgGroupIndex = v7;
    if ( !enableBgGroupIdList )
      goto LABEL_31;
    if ( v7 >= enableBgGroupIdList->fields._size )
    {
      if ( !v4->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v4);
        v4 = MyRoomControl_TypeInfo;
        static_fields = MyRoomControl_TypeInfo->static_fields;
      }
      static_fields->displayBgGroupIndex = 0;
    }
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MyRoomControl_TypeInfo;
    }
    v8 = v4->static_fields;
    v4 = (MyRoomControl_c *)v8->enableBgGroupIdList;
    if ( !v4 )
      goto LABEL_31;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v4,
             v8->displayBgGroupIndex,
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    if ( !byte_4C3E409 )
    {
      sub_1C37058(&MyRoomParamsManager_TypeInfo);
      byte_4C3E409 = 1;
    }
    v10 = MyRoomParamsManager_TypeInfo;
    if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
      v10 = MyRoomParamsManager_TypeInfo;
    }
    v10->static_fields->_DisplayMyRoomBgGroupId_k__BackingField = Item;
    v11 = Method_MyRoomControl_OnClickChangeBg__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeBg__ + 83) & 2) != 0 )
      v11 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickChangeBg__);
    v12 = (System_Reflection_MethodBase_o *)sub_1C3703C(v11, v11[4]);
    OverwriteAssetSoundName__PlaySystemSe(v12, 0, 0, 0);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v14 = AvalonSceneManager_TypeInfo;
    v15 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v14 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_MyRoomControl__OnClickChangeBg_b__450_0__, 0);
    if ( !v15 )
LABEL_31:
      sub_1C372B4(v4);
    CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0);
  }
}


void MyRoomControl__OnClickChangeLimit(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  MyRoomControl_c *v4; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v7; // x1
  System_String_o *v8; // x0
  struct UserGameEntity_o *usrData; // x8
  UserServantCollectionEntity_o *EntityDefinitely; // x20
  DataMasterBase_TMaster__TEntity__PKType__o *v11; // x21
  __int64 v12; // x22
  __int64 v13; // x23
  Il2CppObject *Entity; // x21
  const MethodInfo *v15; // x1
  const MethodInfo *v16; // x1
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int32_t materialFigureSvtDispIdx; // w9
  int32_t v19; // w8
  _QWORD *v20; // x0
  System_Reflection_MethodBase_o *v21; // x0
  struct FsmTemplate_o *fsmTemplate; // x20
  struct HutongGames_PlayMaker_Fsm_o *fsm; // x21
  _QWORD *v24; // x0
  System_Reflection_MethodBase_o *v25; // x0
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v26; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v27; // 0:x0.16

  if ( (byte_4C3E37C & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_MyRoomControl_OnClickChangeLimit__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    sub_1C37058(&StringLiteral_3326/*"CHANGE_LIMIT"*/);
    sub_1C37058(&StringLiteral_7301/*"Help"*/);
    byte_4C3E37C = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) < 0) ^ v2
     | ((this->fields.buttonFlag & v4->static_fields->BUTTON_LIMIT_CHANGE) == 0) )
  {
    goto LABEL_30;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_45;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v8 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
    if ( System_String__op_Inequality(v8, (System_String_o *)StringLiteral_7301/*"Help"*/, 0) )
      return;
  }
  if ( !this->fields.isServantMaterial )
  {
    if ( !this->fields.isHeroine || !this->fields.isHeroineReave )
    {
      if ( !MyRoomControl__IsScrollviewInShowPosition(this, v7) )
        goto LABEL_40;
      myRoomFsm = (PlayMakerFSM_o *)this->fields.myRoomData;
      if ( !myRoomFsm )
        goto LABEL_45;
      myRoomFsm = (PlayMakerFSM_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)myRoomFsm, this->fields.fvrUsrSvtId, 0);
      if ( !myRoomFsm )
        goto LABEL_45;
      fsm = myRoomFsm[1].fields.fsm;
      fsmTemplate = myRoomFsm[1].fields.fsmTemplate;
      if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
      *(_QWORD *)&v27.fields.currentCryptoKey = fsm;
      *(_QWORD *)&v27.fields.fakeValue = fsmTemplate;
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v27, 0) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v20 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v20 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickChangeLimit__);
    v21 = (System_Reflection_MethodBase_o *)sub_1C3703C(v20, v20[4]);
    OverwriteAssetSoundName__PlaySystemSe(v21, 2, 0, 0);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_45;
  if ( !myRoomFsm )
    goto LABEL_45;
  EntityDefinitely = UserServantCollectionMaster__GetEntityDefinitely(
                       (UserServantCollectionMaster_o *)myRoomFsm,
                       usrData->fields.userId,
                       this->fields.materialServantId,
                       0);
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v11 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v13 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v12 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v26.fields.currentCryptoKey = v13;
  *(_QWORD *)&v26.fields.fakeValue = v12;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v26, 0);
  if ( !v11 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v11,
             (int32_t)myRoomFsm,
             (const MethodInfo_33A10A0 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
  myRoomFsm = (PlayMakerFSM_o *)MyRoomControl__IsScrollviewInShowPosition(this, v15);
  if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
  {
    if ( EntityDefinitely->fields.maxLimitCount > 0 )
      goto LABEL_23;
    if ( !Entity )
      goto LABEL_45;
    myRoomFsm = (PlayMakerFSM_o *)ServantEntity__checkIsHeroineSvt((ServantEntity_o *)Entity, 0);
    if ( ((unsigned __int8)myRoomFsm & 1) != 0 )
    {
LABEL_23:
      materialImageIdList = this->fields.materialImageIdList;
      if ( !materialImageIdList )
        goto LABEL_45;
      materialFigureSvtDispIdx = this->fields.materialFigureSvtDispIdx;
      if ( materialFigureSvtDispIdx + 1 < materialImageIdList->fields._size )
        v19 = materialFigureSvtDispIdx + 1;
      else
        v19 = 0;
      this->fields.materialFigureSvtDispIdx = v19;
LABEL_40:
      MyRoomControl__BlockTouch(this, v16);
      this->fields.isSvtLoading = 1;
      v24 = Method_MyRoomControl_OnClickChangeLimit__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
        v24 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickChangeLimit__);
      v25 = (System_Reflection_MethodBase_o *)sub_1C3703C(v24, v24[4]);
      OverwriteAssetSoundName__PlaySystemSe(v25, 0, 0, 0);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3326/*"CHANGE_LIMIT"*/, 0);
        return;
      }
LABEL_45:
      sub_1C372B4(myRoomFsm);
    }
  }
}


void MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E3B3 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickCloseMultipleView__);
    byte_4C3E3B3 = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.multipleViewState = 2;
  MyRoomControl__SetEnableMultipleViewUi(this, 1, v5);
}


void MyRoomControl__OnClickDispPhotoUi(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  void *photoCampaignDispUiMask; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v7; // x21
  Il2CppObject *v8; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  const MethodInfo *v12; // x2

  if ( (byte_4C3E3E8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoLayerChangeComponent__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
    sub_1C37058(&Method_MyRoomControl_OnClickDispPhotoUi__);
    sub_1C37058(&Method_MyRoomControl___c__OnClickDispPhotoUi_b__438_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E3E8 = 1;
  }
  v3 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickDispPhotoUi__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.photoState = 2;
  photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
  }
  v7 = *(System_Action_object__o **)(*((_QWORD *)photoCampaignDispUiMask + 23) + 96LL);
  if ( !v7 )
  {
    if ( !*((_DWORD *)photoCampaignDispUiMask + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoCampaignDispUiMask);
      photoCampaignDispUiMask = MyRoomControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)**((_QWORD **)photoCampaignDispUiMask + 23);
    v7 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v7, v8, Method_MyRoomControl___c__OnClickDispPhotoUi_b__438_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__438_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v7;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__438_0, (int32_t)v7, v10, v11);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v7,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0) )
  {
    sub_1C372B4(photoCampaignDispUiMask);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 0, 0);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v12);
}


void MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4C3E3C1 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickEventLogSortKind__);
    byte_4C3E3C1 = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  if ( this->fields.IsListActive )
  {
    materialCollectionServantListViewManager = this->fields.materialCollectionServantListViewManager;
    if ( materialCollectionServantListViewManager )
    {
      MaterialCollectionServantListViewManager__EventLogSortKind(
        materialCollectionServantListViewManager,
        this->fields.eventLogServantSortSelectMenu,
        0);
      return;
    }
LABEL_10:
    sub_1C372B4(materialCollectionServantListViewManager);
  }
  materialCollectionServantListViewManager = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !materialCollectionServantListViewManager )
    goto LABEL_10;
  MaterialEventLogListViewManager__EventLogSortKind(
    (MaterialEventLogListViewManager_o *)materialCollectionServantListViewManager,
    this->fields.eventLogServantSortSelectMenu,
    0);
}


void MyRoomControl__OnClickLeftServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3E3B4 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickLeftServant__);
    byte_4C3E3B4 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    MyRoomControl__SetLayerMultipleServant(this, 0, v6);
  }
}


void MyRoomControl__OnClickMoveBg(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ChangeDisp(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomControl__OnClickPhotoCampaignBackGround(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t photoState; // w8
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
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  int32_t v50; // w1
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UnityEngine_Vector3_o v53; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o localScale; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o v55; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v57; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v58; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v59; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v60; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v61; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v62; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Vector3_o v63; // 0:s1.4,4:s2.4,8:s3.4
  UnityEngine_Quaternion_o v64; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v65; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v66; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED
  UnityEngine_Quaternion_o v67; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4 OVERLAPPED

  if ( (byte_4C3E3D9 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
    sub_1C37058(&StringLiteral_6739/*"FinishedCloseFullScreenPhotoCampaign"*/);
    byte_4C3E3D9 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0;
  v53.fields.z = 0.0;
  *(_QWORD *)&v53.fields.x = 0;
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    goto LABEL_37;
  UnityEngine_Collider__set_enabled(maskBoxCollider, 1, 0);
  photoState = this->fields.photoState;
  switch ( photoState )
  {
    case 6:
      v28 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v28 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v29 = (System_Reflection_MethodBase_o *)sub_1C3703C(v28, v28[4]);
      OverwriteAssetSoundName__PlaySystemSe(v29, 1, 0, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v30 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v30 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v31 = (System_Reflection_MethodBase_o *)sub_1C3703C(v30, v30[4]);
      OverwriteAssetSoundName__PlaySystemSe(v31, 1, 0, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v57.fields.x = 0.0;
      v57.fields.y = 0.0;
      v57.fields.z = 0.0;
      v66 = UnityEngine_Quaternion__Internal_FromEulerRad(v57, 0);
      y = v66.fields.y;
      z = v66.fields.z;
      w = v66.fields.w;
      v66.fields.y = v66.fields.x;
      v66.fields.z = y;
      v66.fields.w = z;
      v36 = w;
      TweenRotation__Begin(gameObject, 0.2, *(UnityEngine_Quaternion_o *)&v66.fields.y, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v60.fields.x = 1.0;
      v60.fields.y = 1.0;
      v60.fields.z = 1.0;
      TweenScale__Begin(v37, 0.2, v60, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v61.fields.x = 0.0;
      v61.fields.y = 11.0;
      v61.fields.z = 0.0;
      TweenPosition__Begin(v38, 0.2, v61, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v39 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v58.fields.x = 0.0;
      v58.fields.y = 0.0;
      v58.fields.z = 0.0;
      v67 = UnityEngine_Quaternion__Internal_FromEulerRad(v58, 0);
      v40 = v67.fields.y;
      v41 = v67.fields.z;
      v42 = v67.fields.w;
      v67.fields.y = v67.fields.x;
      v67.fields.z = v40;
      v67.fields.w = v41;
      v43 = v42;
      TweenRotation__Begin(v39, 0.2, *(UnityEngine_Quaternion_o *)&v67.fields.y, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v62.fields.x = 1.0;
      v62.fields.y = 1.0;
      v62.fields.z = 1.0;
      TweenScale__Begin(v44, 0.2, v62, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v63.fields.x = 0.0;
      v63.fields.y = 11.0;
      v63.fields.z = 0.0;
      TweenPosition__Begin(v45, 0.2, v63, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
LABEL_34:
      v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
      v47 = TweenAlpha__Begin(v46, 0.2, 0.0, 0);
      maskBoxCollider = (UnityEngine_Collider_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
      if ( !v47 )
        goto LABEL_37;
      v47->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskBoxCollider;
      sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.eventReceiver, (int32_t)maskBoxCollider, v48, v49);
      v50 = StringLiteral_6739/*"FinishedCloseFullScreenPhotoCampaign"*/;
      v47->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6739/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1C36FFC((CGThumbnailListItem_o *)&v47->fields.callWhenFinished, v50, v51, v52);
      return;
    case 4:
      v5 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v5 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
      OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
      this->fields.photoState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v53, v7);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( maskBoxCollider )
      {
        v8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
        v9 = v53.fields.x * 0.017453;
        v10 = v53.fields.y * 0.017453;
        v11 = v53.fields.z * 0.017453;
        v55.fields.x = v53.fields.x * 0.017453;
        v55.fields.y = v53.fields.y * 0.017453;
        v55.fields.z = v53.fields.z * 0.017453;
        v64 = UnityEngine_Quaternion__Internal_FromEulerRad(v55, 0);
        v12 = v64.fields.y;
        v13 = v64.fields.z;
        v14 = v64.fields.w;
        v64.fields.y = v64.fields.x;
        v64.fields.z = v12;
        v64.fields.w = v13;
        v15 = v14;
        TweenRotation__Begin(v8, 0.2, *(UnityEngine_Quaternion_o *)&v64.fields.y, 0);
        maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
        if ( maskBoxCollider )
        {
          v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
          x = localScale.fields.x;
          v18 = localScale.fields.y;
          v19 = localScale.fields.z;
          TweenScale__Begin(v16, 0.2, localScale, 0);
          maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
          if ( maskBoxCollider )
          {
            v20 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
            if ( !byte_4C3C921 )
            {
              sub_1C37058(&UnityEngine_Vector3_TypeInfo);
              byte_4C3C921 = 1;
            }
            TweenPosition__Begin(v20, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
            maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
            if ( maskBoxCollider )
            {
              v21 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
              v56.fields.x = v9;
              v56.fields.y = v10;
              v56.fields.z = v11;
              v65 = UnityEngine_Quaternion__Internal_FromEulerRad(v56, 0);
              v22 = v65.fields.y;
              v23 = v65.fields.z;
              v24 = v65.fields.w;
              v65.fields.y = v65.fields.x;
              v65.fields.z = v22;
              v65.fields.w = v23;
              v25 = v24;
              TweenRotation__Begin(v21, 0.2, *(UnityEngine_Quaternion_o *)&v65.fields.y, 0);
              maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
              if ( maskBoxCollider )
              {
                v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
                v59.fields.x = x;
                v59.fields.y = v18;
                v59.fields.z = v19;
                TweenScale__Begin(v26, 0.2, v59, 0);
                maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignScreenshot;
                if ( maskBoxCollider )
                {
                  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0);
                  if ( !byte_4C3C921 )
                  {
                    sub_1C37058(&UnityEngine_Vector3_TypeInfo);
                    byte_4C3C921 = 1;
                  }
                  TweenPosition__Begin(v27, 0.2, UnityEngine_Vector3_TypeInfo->static_fields->zeroVector, 0);
                  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
                  if ( maskBoxCollider )
                  {
                    UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
LABEL_37:
      sub_1C372B4(maskBoxCollider);
  }
}


void MyRoomControl__OnClickPhotoCampaignCameraButton(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *backBtn; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x2
  MyRoomControl_c *klass; // x11
  bool v8; // zf
  int32_t v9; // w8
  __int64 v10; // x1
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4C3E3D7 & 1) == 0 )
  {
    sub_1C37058(&TouchEffectManager_TypeInfo);
    byte_4C3E3D7 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0 )
    sub_1C372B4(backBtn);
  UnityEngine_GameObject__SetActive(backBtn, 0, 0);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v5);
  MyRoomControl__SetBackButtonIgnore(this, 1, v6);
  klass = this->klass;
  v8 = !this->fields.isOneShot;
  if ( this->fields.isOneShot )
    v9 = 4;
  else
    v9 = 6;
  this->fields.photoState = v9;
  if ( v8 )
    v10 = 870;
  else
    v10 = 362;
  v11 = (System_Collections_IEnumerator_o *)((__int64 (__fastcall *)(MyRoomControl_o *, __int64, __int64, const MethodInfo *))klass->vtable._4_CaptureServant.methodPtr)(
                                              this,
                                              v10,
                                              552,
                                              klass->vtable._4_CaptureServant.method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v11, 0);
}


void MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3E3B5 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickRightServant__);
    byte_4C3E3B5 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0);
    MyRoomControl__SetLayerMultipleServant(this, 1, v6);
  }
}


void MyRoomControl__OnClickSelectMultipleServant(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  bool IsEnableMultipleViewButton; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v12; // x20
  int max_length; // w9
  struct System_Int64_array *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20
  const MethodInfo *v21; // x4

  if ( (byte_4C3E3B1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&long___TypeInfo);
    sub_1C37058(&Method_MyRoomControl_OnClickSelectMultipleServant__);
    sub_1C37058(&Method_MyRoomControl__OnClickSelectMultipleServant_b__373_0__);
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    sub_1C37058(&StringLiteral_7301/*"Help"*/);
    byte_4C3E3B1 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7301/*"Help"*/, 0) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, v5);
  v8 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v9 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
  if ( !v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1C372B4(myRoomFsm);
  v12 = 0;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v12 >= max_length )
      break;
    if ( (unsigned int)v12 >= max_length )
      sub_1C372BC(myRoomFsm);
    myRoomFsm = (PlayMakerFSM_o *)multipleStandFigureBacks->m_Items[v12];
    if ( myRoomFsm )
    {
      StandFigureBack__Init((StandFigureBack_o *)myRoomFsm, 0);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v12;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_16;
  }
  v14 = (struct System_Int64_array *)sub_1C37100(long___TypeInfo, 2);
  this->fields.multipleServantUsrIds = v14;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v14, v15, v16);
  v17 = (struct System_Int32_array *)sub_1C37100(int___TypeInfo, 2);
  this->fields.multipleLimitCounts = v17;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)v17, v18, v19);
  v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__373_0__, 0);
  MyRoomControl__DispDefaultMyRoom(this, 0, v20, 1, v21);
}


void MyRoomControl__OnClickSelectPhotoCampaign(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o *ActiveStateName; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  bool IsEnablePhotoCampaignButton; // w0
  _QWORD *v8; // x8
  bool v9; // w20
  System_Reflection_MethodBase_o *v10; // x0
  System_Action_o *v11; // x20
  const MethodInfo *v12; // x2
  const MethodInfo *v13; // x1

  if ( (byte_4C3E3C5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_EndLoadPhotoAsset__);
    sub_1C37058(&Method_MyRoomControl_OnClickSelectPhotoCampaign__);
    sub_1C37058(&StringLiteral_15567/*"Wait_Action"*/);
    sub_1C37058(&StringLiteral_7301/*"Help"*/);
    byte_4C3E3C5 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15567/*"Wait_Action"*/, 0) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0);
      if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7301/*"Help"*/, 0) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1C372B4(myRoomFsm);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, v5);
  v8 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v9 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
  if ( v9 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 0, 0, 0);
    v11 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_EndLoadPhotoAsset__, 0);
    MyRoomControl__LoadPhotoCampaignAssets(this, v11, v12);
    if ( !this->fields.isLoadMasterEquip )
    {
      this->fields.isLoadMasterEquip = 1;
      MyRoomControl__LoadMasterEquip(this, v13);
    }
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
  }
}


void MyRoomControl__OnClickSrotValentineList(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionServantListViewManager_o *Instance; // x0
  struct System_Collections_Generic_List_ListViewDropObject__o *dropObjectList; // x8
  __int64 naturalAligment; // x11

  if ( (byte_4C3E3C0 & 1) == 0 )
  {
    sub_1C37058(&MyRoomRootComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3E3C0 = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  dropObjectList = Instance->fields.dropObjectList;
  if ( !dropObjectList )
    goto LABEL_13;
  naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
  if ( dropObjectList->klass->_2.naturalAligment < (unsigned int)naturalAligment
    || (MyRoomRootComponent_c *)dropObjectList->klass->_2.typeHierarchy[naturalAligment - 1] != MyRoomRootComponent_TypeInfo
    || !*(_QWORD *)&dropObjectList[1].fields._size )
  {
    goto LABEL_13;
  }
  if ( this->fields.IsListActive )
  {
    Instance = this->fields.materialCollectionServantListViewManager;
    if ( Instance )
    {
      MaterialCollectionServantListViewManager__SortAscendingOrder(Instance, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
  Instance = (MaterialCollectionServantListViewManager_o *)this->fields.mMaterialEventLogListViewManager;
  if ( !Instance )
    goto LABEL_13;
  MaterialEventLogListViewManager__SortAscendingOrder((MaterialEventLogListViewManager_o *)Instance, 0);
}


void MyRoomControl__OnClickSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  char v2; // vf
  MyRoomControl_c *v4; // x0
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4C3E380 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickSvt__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&StringLiteral_10397/*"PLAY_VOICE"*/);
    byte_4C3E380 = 1;
  }
  if ( !this->fields.isServantMaterial && this->fields.isHeroine && this->fields.isHeroineReave )
    goto LABEL_12;
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) < 0) ^ v2
     | ((this->fields.buttonFlag & v4->static_fields->BUTTON_VOICE_PLAY) == 0) )
  {
LABEL_12:
    v5 = Method_MyRoomControl_OnClickSvt__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickSvt__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickSvt__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 2, 0, 0);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, method) && !this->fields.isVoiceLoading )
  {
    if ( this->fields.isVoicePlaying )
    {
      svtCtr = this->fields.svtCtr;
      this->fields.isVoicePlaying = 0;
      if ( svtCtr )
      {
        MyRoomSvtControl__stopVoice(svtCtr, 0);
        MyRoomControl__setNormalFace_33511708(this, 1, v8);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10397/*"PLAY_VOICE"*/, 0);
        return;
      }
    }
    sub_1C372B4(svtCtr);
  }
}


void MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C3E3B2 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickUiDisableMultipleView__);
    byte_4C3E3B2 = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  this->fields.multipleViewState = 3;
  MyRoomControl__SetEnableMultipleViewUi(this, 0, v5);
}


void MyRoomControl__OnClickValentineListChange(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *Instance; // x0
  _QWORD *monitor; // x8
  __int64 naturalAligment; // x11
  __int64 v6; // x8
  MyRoomStateMaterial_o *v7; // x20
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  _BOOL4 IsListActive; // w8
  const MethodInfo *v11; // x2
  _BOOL4 v12; // w19

  if ( (byte_4C3E3BF & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_OnClickValentineListChange__);
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    sub_1C37058(&MyRoomRootComponent_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3E3BF = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  monitor = Instance[1].monitor;
  if ( !monitor )
    goto LABEL_16;
  naturalAligment = MyRoomRootComponent_TypeInfo->_2.naturalAligment;
  if ( *(unsigned __int8 *)(*monitor + 304LL) < (unsigned int)naturalAligment )
    goto LABEL_16;
  if ( *(MyRoomRootComponent_c **)(*(_QWORD *)(*monitor + 200LL) + 8 * naturalAligment - 8) != MyRoomRootComponent_TypeInfo )
    goto LABEL_16;
  v6 = monitor[8];
  if ( !v6 )
    goto LABEL_16;
  v7 = *(MyRoomStateMaterial_o **)(v6 + 920);
  v8 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C37070(Method_MyRoomControl_OnClickValentineListChange__);
  v9 = (System_Reflection_MethodBase_o *)sub_1C3703C(v8, v8[4]);
  OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
  IsListActive = this->fields.IsListActive;
  this->fields.IsListActive = !IsListActive;
  if ( !v7
    || (MyRoomStateMaterial__ValentineListMomentChange(v7, !IsListActive, 0),
        (Instance = this->fields.listLabelObject) == 0)
    || (UnityEngine_GameObject__SetActive(Instance, this->fields.IsListActive, 0),
        (Instance = this->fields.servantListLabelObject) == 0) )
  {
LABEL_16:
    sub_1C372B4(Instance);
  }
  UnityEngine_GameObject__SetActive(Instance, !this->fields.IsListActive, 0);
  MyRoomControl__ValentineListChange(this, this->fields.IsListActive, v11);
  v12 = this->fields.IsListActive;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__SaveIsListActive(v12, 0);
}


void MyRoomControl__OnDestroy(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4C3E36C & 1) == 0 )
  {
    sub_1C37058(&Gesture_EventHandler_TypeInfo);
    sub_1C37058(&FingerGestures_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4C3E36C = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C372A4(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__remove_OnGestureEvent(v3, 0);
}


void MyRoomControl__OpenAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1C372B4(0);
  AccountLinkageComponent__OpenMenu(accountLinkageComp, 0);
}


void MyRoomControl__OpenChangeTargetSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isLeft,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  int v16; // w12
  __int64 v17; // x10
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  unsigned int max_length; // w9
  int FaceListIndex_k__BackingField; // w11
  __int64 v21; // x10
  struct PhotoStandFigureComponent_array *photoStandFigures; // x11
  PhotoStandFigureComponent_o *v23; // x11
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x21
  int32_t v25; // w22
  System_Action_T__o *v26; // x23
  System_Action_o *v27; // x20
  System_Action_bool__o *v28; // x24

  if ( (byte_4C3E3E3 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&System_Action_PhotoUtility_TargetType__TypeInfo);
    sub_1C37058(&Method_MyRoomControl_SetMaskCollider__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass433_0_TypeInfo);
    byte_4C3E3E3 = 1;
  }
  v9 = sub_1C372A4(MyRoomControl___c__DisplayClass433_0_TypeInfo);
  MyRoomControl___c__DisplayClass433_0___ctor((MyRoomControl___c__DisplayClass433_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_14;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 48) = cancelCallback;
  *(_DWORD *)(v9 + 36) = anotherTargetType;
  *(_BYTE *)(v9 + 40) = isLeft;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)cancelCallback, v13, v14);
  v15 = *(unsigned __int8 *)(v9 + 40);
  v16 = *(_DWORD *)(v9 + 36);
  v17 = v15 ^ 1;
  *(_DWORD *)(v9 + 28) = v15;
  *(_DWORD *)(v9 + 32) = v15 ^ 1;
  *(_BYTE *)(v9 + 24) = v16 == 0;
  photoTargetFaceListIndex = this->fields.photoTargetFaceListIndex;
  if ( !photoTargetFaceListIndex )
LABEL_14:
    sub_1C372B4(v10);
  max_length = photoTargetFaceListIndex->max_length;
  if ( (unsigned int)v17 >= max_length )
    goto LABEL_15;
  FaceListIndex_k__BackingField = -1;
  photoTargetFaceListIndex->m_Items[v17] = -1;
  v21 = *(int *)(v9 + 28);
  if ( v16 )
    goto LABEL_11;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_14;
  if ( (unsigned int)v21 >= LODWORD(photoStandFigures->max_length) )
LABEL_15:
    sub_1C372BC(v10);
  v23 = photoStandFigures->m_Items[v21];
  if ( !v23 )
    goto LABEL_14;
  FaceListIndex_k__BackingField = v23->fields._FaceListIndex_k__BackingField;
LABEL_11:
  if ( (unsigned int)v21 >= max_length )
    goto LABEL_15;
  photoTargetFaceListIndex->m_Items[v21] = FaceListIndex_k__BackingField;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v25 = *(_DWORD *)(v9 + 36);
  v26 = (System_Action_T__o *)sub_1C372A4(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v26,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__0__,
    0);
  v27 = *(System_Action_o **)(v9 + 48);
  v28 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v28, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0);
  if ( !photoTargetSelectDialog )
    goto LABEL_14;
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    v25,
    0,
    (System_Action_PhotoUtility_TargetType__o *)v26,
    v27,
    v28,
    0);
}


void MyRoomControl__OpenExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1C372B4(0);
  ExchangeSvtCoinComponent__OpenMenu(exchangeSvtCoinComp, 0);
}


void MyRoomControl__OpenMasterEquipSettingDialog(
        MyRoomControl_o *this,
        System_Action_int__int__o *callBack,
        System_Action_o *cancelCallBack,
        const MethodInfo *method)
{
  MasterEquipSettingDialog_o *masterEquipSettingDialog; // x22
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x23
  System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  System_Action_bool__o *v10; // x25
  __int64 v11; // x0

  if ( (byte_4C3E3CB & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl_SetMaskCollider__);
    byte_4C3E3CB = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v10 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0);
  if ( !masterEquipSettingDialog )
    sub_1C372B4(v11);
  MasterEquipSettingDialog__Open(
    masterEquipSettingDialog,
    masterMaleEquipTexture,
    masterFemaleEquipTexture,
    callBack,
    cancelCallBack,
    v10,
    0);
}


void MyRoomControl__OpenMultipleView(
        MyRoomControl_o *this,
        System_Int64_array *usrSvtIds,
        System_Int32_array *imageLimitCounts,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds,
    (int32_t)usrSvtIds,
    (int32_t)imageLimitCounts,
    method);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)imageLimitCounts, v6, v7);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0);
}


void MyRoomControl__OpenPhotoFrameSelectDialog(
        MyRoomControl_o *this,
        System_Action_o *decideCallback,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  PhotoFrameSelectDialog_o *photoFrameSelectDialog; // x21
  PhotoFrameSelectDialog_DecideDelegate_o *v14; // x23
  System_Action_bool__o *v15; // x22

  if ( (byte_4C3E3CC & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&PhotoFrameSelectDialog_DecideDelegate_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_SetMaskCollider__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass407_0__OpenPhotoFrameSelectDialog_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass407_0_TypeInfo);
    byte_4C3E3CC = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass407_0_TypeInfo);
  MyRoomControl___c__DisplayClass407_0___ctor((MyRoomControl___c__DisplayClass407_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_6;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = decideCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)decideCallback, v11, v12);
  photoFrameSelectDialog = this->fields.photoFrameSelectDialog;
  v14 = (PhotoFrameSelectDialog_DecideDelegate_o *)sub_1C372A4(PhotoFrameSelectDialog_DecideDelegate_TypeInfo);
  PhotoFrameSelectDialog_DecideDelegate___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass407_0__OpenPhotoFrameSelectDialog_b__0__,
    0);
  v15 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v15, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0);
  if ( !photoFrameSelectDialog )
LABEL_6:
    sub_1C372B4(v8);
  PhotoFrameSelectDialog__Open(photoFrameSelectDialog, v14, cancelCallback, v15, 0);
}


void MyRoomControl__OpenSelectImageLimit(
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
  const MethodInfo *v14; // x6

  if ( (byte_4C3E3BC & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl_SetMaskCollider__);
    byte_4C3E3BC = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v12 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v12, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0);
  if ( !selectImageLimitDialog )
    sub_1C372B4(v13);
  SelectImageLimitDialog__OpenImageLimit(selectImageLimitDialog, type, usrSvtId, v12, callback, index, v14);
}


void MyRoomControl__OpenStaffChangeDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isLeft,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v9; // x20
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  __int64 v16; // x8
  PhotoStandFigureComponent_o *v17; // x9
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *v19; // x8
  __int64 v20; // x9
  PhotoStandFigureComponent_o *v21; // x8
  int32_t v22; // w22
  System_Action_o *v23; // x23
  System_Action_int__o *v24; // x24
  System_Action_o *v25; // x25
  const MethodInfo *v26; // x6

  if ( (byte_4C3E3E4 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass434_0_TypeInfo);
    byte_4C3E3E4 = 1;
  }
  v9 = sub_1C372A4(MyRoomControl___c__DisplayClass434_0_TypeInfo);
  MyRoomControl___c__DisplayClass434_0___ctor((MyRoomControl___c__DisplayClass434_0_o *)v9, 0);
  if ( !v9 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 32) = cancelCallback;
  *(_DWORD *)(v9 + 24) = anotherTargetType;
  *(_BYTE *)(v9 + 28) = isLeft;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)cancelCallback, v13, v14);
  if ( *(_DWORD *)(v9 + 24) == 2 )
  {
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_18;
    v16 = *(unsigned __int8 *)(v9 + 28);
    if ( (unsigned int)v16 >= LODWORD(photoStandFigures->max_length) )
LABEL_19:
      sub_1C372BC(photoTargetList);
    v17 = photoStandFigures->m_Items[v16];
    if ( !v17 )
      goto LABEL_18;
    StandFigureImageId_k__BackingField = v17->fields._StandFigureImageId_k__BackingField;
  }
  else
  {
    LODWORD(v16) = *(unsigned __int8 *)(v9 + 28);
    StandFigureImageId_k__BackingField = -1;
  }
  *(_DWORD *)(v9 + 40) = v16 ^ 1;
  photoTargetList = this->fields.photoTargetList;
  if ( !photoTargetList )
    goto LABEL_18;
  photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                                           (System_Collections_Generic_List_T__o *)photoTargetList,
                                                                                           v16 ^ 1,
                                                                                           (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  if ( (_DWORD)photoTargetList != 2 )
  {
    v22 = -1;
    goto LABEL_17;
  }
  v19 = this->fields.photoStandFigures;
  if ( !v19 )
LABEL_18:
    sub_1C372B4(photoTargetList);
  v20 = *(int *)(v9 + 40);
  if ( (unsigned int)v20 >= LODWORD(v19->max_length) )
    goto LABEL_19;
  v21 = v19->m_Items[v20];
  if ( !v21 )
    goto LABEL_18;
  v22 = v21->fields._StandFigureImageId_k__BackingField;
LABEL_17:
  v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v23,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__0__,
    0);
  v24 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v24,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__1__,
    0);
  v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__2__,
    0);
  MyRoomControl__OpenStaffDialog(this, v23, v24, v25, StandFigureImageId_k__BackingField, v22, v26);
}


void MyRoomControl__OpenStaffDialog(
        MyRoomControl_o *this,
        System_Action_o *staffSelectCancelAction,
        System_Action_int__o *staffCostumeSelectDecideAction,
        System_Action_o *staffCostumeSelectCancelAction,
        int32_t selectedStaffImageId,
        int32_t baseStaffImageId,
        const MethodInfo *method)
{
  __int64 v13; // x23
  __int64 v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  PhotoCampaignStaffSelectDialog_o *photoStaffSelectDialog; // x20
  System_Action_T1__T2__T3__o *v24; // x21

  if ( (byte_4C3E3E5 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass435_0_TypeInfo);
    byte_4C3E3E5 = 1;
  }
  v13 = sub_1C372A4(MyRoomControl___c__DisplayClass435_0_TypeInfo);
  MyRoomControl___c__DisplayClass435_0___ctor((MyRoomControl___c__DisplayClass435_0_o *)v13, 0);
  if ( !v13 )
    goto LABEL_6;
  *(_QWORD *)(v13 + 16) = staffCostumeSelectDecideAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 16), (int32_t)staffCostumeSelectDecideAction, v15, v16);
  *(_DWORD *)(v13 + 24) = baseStaffImageId;
  *(_QWORD *)(v13 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 32), (int32_t)this, v17, v18);
  *(_QWORD *)(v13 + 40) = staffCostumeSelectCancelAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 40), (int32_t)staffCostumeSelectCancelAction, v19, v20);
  *(_QWORD *)(v13 + 48) = staffSelectCancelAction;
  sub_1C36FFC((CGThumbnailListItem_o *)(v13 + 48), (int32_t)staffSelectCancelAction, v21, v22);
  photoStaffSelectDialog = this->fields.photoStaffSelectDialog;
  v24 = (System_Action_T1__T2__T3__o *)sub_1C372A4(System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo);
  System_Action_bool__int__object____ctor(
    v24,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__0__,
    0);
  if ( !photoStaffSelectDialog )
LABEL_6:
    sub_1C372B4(v14);
  PhotoCampaignStaffSelectDialog__Open(
    photoStaffSelectDialog,
    (System_Action_bool__int__List_StaffPhotoCostumeEntity___o *)v24,
    selectedStaffImageId,
    *(_DWORD *)(v13 + 24),
    0);
}


void MyRoomControl__OpenStaffSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isChangeTarget,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Int32_array *temporaryStaffImageId; // x8
  int32_t v12; // w22
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v15; // x8
  System_Action_o *v16; // x23
  System_Action_int__o *v17; // x24
  System_Action_o *v18; // x25
  const MethodInfo *v19; // x6

  if ( (byte_4C3E3C8 & 1) == 0 )
  {
    sub_1C37058(&System_Action_int__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass403_0_TypeInfo);
    byte_4C3E3C8 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass403_0_TypeInfo);
  MyRoomControl___c__DisplayClass403_0___ctor((MyRoomControl___c__DisplayClass403_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_15;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_BYTE *)(v7 + 24) = isChangeTarget;
  *(_DWORD *)(v7 + 28) = anotherTargetType;
  if ( anotherTargetType != 2 )
  {
    v12 = -1;
    if ( !isChangeTarget )
      goto LABEL_8;
    goto LABEL_10;
  }
  temporaryStaffImageId = this->fields.temporaryStaffImageId;
  if ( !temporaryStaffImageId )
    goto LABEL_15;
  if ( !LODWORD(temporaryStaffImageId->max_length) )
    goto LABEL_16;
  v12 = temporaryStaffImageId->m_Items[0];
  if ( isChangeTarget )
  {
LABEL_10:
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_15;
    if ( LODWORD(photoStandFigures->max_length) )
    {
      v15 = photoStandFigures->m_Items[0];
      if ( v15 )
      {
        StandFigureImageId_k__BackingField = v15->fields._StandFigureImageId_k__BackingField;
        goto LABEL_14;
      }
LABEL_15:
      sub_1C372B4(v8);
    }
LABEL_16:
    sub_1C372BC(v8);
  }
LABEL_8:
  StandFigureImageId_k__BackingField = -1;
LABEL_14:
  v16 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v16,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__0__,
    0);
  v17 = (System_Action_int__o *)sub_1C372A4(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v17,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__1__,
    0);
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v18,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__2__,
    0);
  MyRoomControl__OpenStaffDialog(this, v16, v17, v18, v12, StandFigureImageId_k__BackingField, v19);
}


void MyRoomControl__OpenTargetSelectDialog(
        MyRoomControl_o *this,
        int32_t anotherTargetType,
        bool isChangeTarget,
        int32_t index,
        System_Action_o *cancelCallback,
        const MethodInfo *method)
{
  __int64 v11; // x24
  __int64 v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x23
  System_Action_T__o *v16; // x25
  System_Action_bool__o *v17; // x24

  if ( (byte_4C3E3C7 & 1) == 0 )
  {
    sub_1C37058(&System_Action_bool__TypeInfo);
    sub_1C37058(&System_Action_PhotoUtility_TargetType__TypeInfo);
    sub_1C37058(&Method_MyRoomControl_SetMaskCollider__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass402_0_TypeInfo);
    byte_4C3E3C7 = 1;
  }
  v11 = sub_1C372A4(MyRoomControl___c__DisplayClass402_0_TypeInfo);
  MyRoomControl___c__DisplayClass402_0___ctor((MyRoomControl___c__DisplayClass402_0_o *)v11, 0);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v13, v14);
  *(_BYTE *)(v11 + 24) = isChangeTarget;
  *(_DWORD *)(v11 + 28) = anotherTargetType;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v16 = (System_Action_T__o *)sub_1C372A4(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__0__,
    0);
  v17 = (System_Action_bool__o *)sub_1C372A4(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v17, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0);
  if ( !photoTargetSelectDialog )
LABEL_6:
    sub_1C372B4(v12);
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    anotherTargetType,
    index,
    (System_Action_PhotoUtility_TargetType__o *)v16,
    cancelCallback,
    v17,
    0);
}


void MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t Item; // w0
  _BOOL4 isChangePhotoPosition; // w22
  int32_t v7; // w20
  System_Action_o *v8; // x21
  const MethodInfo *v9; // x4

  if ( (byte_4C3E3E1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__431_0__);
    byte_4C3E3E1 = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0) )
  {
    sub_1C372B4(maskBoxCollider);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           !this->fields.isChangePhotoPosition,
           (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v7 = Item;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__431_0__,
    0);
  MyRoomControl__OpenChangeTargetSelectDialog(this, v7, !isChangePhotoPosition, v8, v9);
}


void MyRoomControl__OpenTargetSelectDialogOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0
  const MethodInfo *v5; // x2

  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0);
  MyRoomControl__ConfirmTargetSelectState(this, 1, v5);
}


void MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0
  int32_t Item; // w0
  bool isChangePhotoPosition; // w20
  int32_t v7; // w21
  System_Action_o *v8; // x22
  const MethodInfo *v9; // x4

  if ( (byte_4C3E3E2 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__432_0__);
    byte_4C3E3E2 = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0) )
  {
    sub_1C372B4(maskBoxCollider);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           this->fields.isChangePhotoPosition,
           (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v7 = Item;
  v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v8,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__432_0__,
    0);
  MyRoomControl__OpenChangeTargetSelectDialog(this, v7, isChangePhotoPosition, v8, v9);
}


void MyRoomControl__OverrideAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_c *v3; // x0
  System_String_o *v4; // x20
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x22
  System_Nullable_int__o p_msgFontSize; // x0
  PlayMakerFSM_o *myRoomFsm; // x0
  System_Nullable_int__o v9; // x4
  System_Nullable_float__o v10; // x3
  const MethodInfo *v11; // x1
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3E395 & 1) == 0 )
  {
    sub_1C37058(&AccountLinkageComponent_TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__OverrideAccountLinkage_b__319_0__);
    sub_1C37058(&Method_System_Nullable_int___ctor__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_1883/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/);
    sub_1C37058(&StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/);
    byte_4C3E395 = 1;
  }
  v3 = AccountLinkageComponent_TypeInfo;
  msgFontSize = 0;
  if ( !AccountLinkageComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AccountLinkageComponent_TypeInfo);
    v3 = AccountLinkageComponent_TypeInfo;
  }
  v3->static_fields->isLinked = 0;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v4 = LocalizationManager__Get((System_String_o *)StringLiteral_1883/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__319_0__, 0);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_38C87A4 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v9 = msgFontSize,
        v10 = 0,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v4, v6, v10, v9, 0, 0),
        (myRoomFsm = this->fields.myRoomFsm) == 0) )
  {
    sub_1C372B4(myRoomFsm);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3288/*"CAN_CONTINUE_DEVICE"*/, 0);
  MyRoomControl__HideContinueDeviceMenu(this, v11);
}


void MyRoomControl__PlayOpening(
        MyRoomControl_o *this,
        System_String_o *fileName,
        System_String_o *assetPath,
        bool isCanSkip,
        const MethodInfo *method)
{
  __int64 v8; // x24
  MyRoomControl_o *v9; // x0
  const MethodInfo *v10; // x1
  CRIMoviePlayer_o *CriMoviePlayerObject; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CRIMoviePlayer_o **v14; // x22
  CRIMoviePlayer_o *v15; // x23
  BgmManager_c *v16; // x0
  float masterVolume; // s8
  System_Action_o *v18; // x25

  if ( (byte_4C3E3AA & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BgmManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass360_0__PlayOpening_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass360_0_TypeInfo);
    byte_4C3E3AA = 1;
  }
  v8 = sub_1C372A4(MyRoomControl___c__DisplayClass360_0_TypeInfo);
  MyRoomControl___c__DisplayClass360_0___ctor((MyRoomControl___c__DisplayClass360_0_o *)v8, 0);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v9, v10);
  if ( !v8 )
    goto LABEL_13;
  *(_QWORD *)(v8 + 16) = CriMoviePlayerObject;
  v14 = (CRIMoviePlayer_o **)(v8 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v8 + 16), (int32_t)CriMoviePlayerObject, v12, v13);
  v15 = *(CRIMoviePlayer_o **)(v8 + 16);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4C3DDFF )
  {
    sub_1C37058(&BgmManager_TypeInfo);
    byte_4C3DDFF = 1;
  }
  v16 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v16 = BgmManager_TypeInfo;
  }
  masterVolume = v16->static_fields->masterVolume;
  v18 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v18, (Il2CppObject *)v8, Method_MyRoomControl___c__DisplayClass360_0__PlayOpening_b__0__, 0);
  if ( !v15
    || (CRIMoviePlayer__Initialize(v15, fileName, assetPath, masterVolume, isCanSkip, 0, v18, 1, 0, 0, 0, 1, 0, 0),
        (CriMoviePlayerObject = *v14) == 0) )
  {
LABEL_13:
    sub_1C372B4(CriMoviePlayerObject);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0, 0);
}


void MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  AssetData_o *photoCampaignAssetData; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  UnityEngine_Component_o *v13; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v22; // x21
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  UnityEngine_Object_o *photoStaffSelectDialog; // x20
  UnityEngine_Object_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *photoStaffCostumeSelectDialog; // x20
  UnityEngine_Object_o *v30; // x21
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  UnityEngine_Object_o *cgThumbnailDialog; // x20
  UnityEngine_Object_o *v34; // x21
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  UnityEngine_Object_o *photoFrameSelectDialog; // x20
  UnityEngine_Object_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  UnityEngine_Object_o *photoMasterTexture; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  AssetData_o *combineAssetData; // x20
  CGThumbnailListItem_o *p_combineAssetData; // x19
  int32_t v50; // w2
  const MethodInfo *v51; // x3

  if ( (byte_4C3E3E9 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__ToArray__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E3E9 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignShutterEffect, 0, v2, v3);
  this->fields.photoCampaignCameraEffect = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignCameraEffect, 0, v5, v6);
  this->fields.photoLayerChangeObj = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoLayerChangeObj, 0, v7, v8);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(photoCampaignAssetData, 0);
    this->fields.photoCampaignAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignAssetData, 0, v10, v11);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v13 )
      goto LABEL_70;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    this->fields.photoTargetSelectDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoTargetSelectDialog, 0, v15, v16);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v13 )
      goto LABEL_70;
    v18 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v18, 0);
    this->fields.photoSettingButtonComponent = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoSettingButtonComponent, 0, v19, v20);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v13 )
      goto LABEL_70;
    v22 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v22, 0);
    this->fields.masterEquipSettingDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterEquipSettingDialog, 0, v23, v24);
  }
  photoStaffSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffSelectDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoStaffSelectDialog;
    if ( !v13 )
      goto LABEL_70;
    v26 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v26, 0);
    this->fields.photoStaffSelectDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoStaffSelectDialog, 0, v27, v28);
  }
  photoStaffCostumeSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffCostumeSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffCostumeSelectDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoStaffCostumeSelectDialog;
    if ( !v13 )
      goto LABEL_70;
    v30 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v30, 0);
    this->fields.photoStaffCostumeSelectDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoStaffCostumeSelectDialog, 0, v31, v32);
  }
  cgThumbnailDialog = (UnityEngine_Object_o *)this->fields.cgThumbnailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cgThumbnailDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.cgThumbnailDialog;
    if ( !v13 )
      goto LABEL_70;
    v34 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v34, 0);
    this->fields.cgThumbnailDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.cgThumbnailDialog, 0, v35, v36);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v38 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534920((AssetData_array *)v38, 0);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterEquipAssetData, 0, v39, v40);
  }
  photoFrameSelectDialog = (UnityEngine_Object_o *)this->fields.photoFrameSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoFrameSelectDialog, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoFrameSelectDialog;
    if ( !v13 )
      goto LABEL_70;
    v42 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v13, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(v42, 0);
    this->fields.photoFrameSelectDialog = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoFrameSelectDialog, 0, v43, v44);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0, 0) )
  {
    v13 = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
    if ( v13 )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v13, 0);
      this->fields.photoMasterTexture = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, 0, v46, v47);
      goto LABEL_65;
    }
LABEL_70:
    sub_1C372B4(v13);
  }
LABEL_65:
  combineAssetData = this->fields.combineAssetData;
  if ( combineAssetData )
  {
    p_combineAssetData = (CGThumbnailListItem_o *)&this->fields.combineAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_40534712(combineAssetData, 0);
    p_combineAssetData->klass = 0;
    sub_1C36FFC(p_combineAssetData, 0, v50, v51);
  }
}


void MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  CGThumbnailListItem_o *p_asstName; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E36A & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3E36A = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = (CGThumbnailListItem_o *)&this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0);
    p_asstName->klass = 0;
    sub_1C36FFC(p_asstName, 0, v5, v6);
  }
}


void MyRoomControl__ReleaseTouch(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  int32_t buttonFlag; // w9
  int32_t BUTTON_MULTIPLE_VIEW; // w8
  int v6; // w11
  int32_t v7; // w8
  const MethodInfo *v8; // x1
  int32_t v9; // w9
  int32_t BUTTON_PHOTO_CAMPAIGN; // w8
  int v11; // w11
  int32_t v12; // w8
  UIWidget_o *playBtnImg; // x0
  __int64 v14; // x20
  __int64 v15; // x21
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v17; // w20
  System_String_o *ActiveStateName; // x0
  bool v19; // w0
  MyRoomControl_c *v20; // x0
  MyRoomControl_c *v21; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v23; // 0:x0.16
  UnityEngine_Color_o v24; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v25; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v26; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v27; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E3A6 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&StringLiteral_13072/*"State 5"*/);
    byte_4C3E3A6 = 1;
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
    goto LABEL_36;
  v24.fields.r = 1.0;
  v24.fields.g = 1.0;
  v24.fields.b = 1.0;
  v24.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v24, 0);
  playBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  if ( !playBtnImg )
    goto LABEL_36;
  v25.fields.r = 1.0;
  v25.fields.g = 1.0;
  v25.fields.b = 1.0;
  v25.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v25, 0);
  playBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !playBtnImg )
    goto LABEL_36;
  playBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)playBtnImg, this->fields.fvrUsrSvtId, 0);
  if ( !playBtnImg )
    goto LABEL_36;
  v15 = *(_QWORD *)&playBtnImg->fields.mChanged;
  v14 = *(_QWORD *)&playBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v23.fields.currentCryptoKey = v15;
  *(_QWORD *)&v23.fields.fakeValue = v14;
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v23, 0);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_36;
    v17 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v17 = (int)playBtnImg;
  }
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
    goto LABEL_36;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)playBtnImg, 0);
  v19 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_13072/*"State 5"*/, 0);
  if ( v17 >= 1 && v19 )
  {
    playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !playBtnImg )
      goto LABEL_36;
    v26.fields.r = 1.0;
    v26.fields.g = 1.0;
    v26.fields.b = 1.0;
    v26.fields.a = 1.0;
    UIWidget__set_color(playBtnImg, v26, 0);
    v20 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v20 = MyRoomControl_TypeInfo;
    }
    this->fields.buttonFlag |= v20->static_fields->BUTTON_LIMIT_CHANGE;
  }
  playBtnImg = (UIWidget_o *)this->fields.changeBGBtnImg;
  if ( !playBtnImg )
    goto LABEL_36;
  v27.fields.r = 1.0;
  v27.fields.g = 1.0;
  v27.fields.b = 1.0;
  v27.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v27, 0);
  v21 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v21 = MyRoomControl_TypeInfo;
  }
  static_fields = v21->static_fields;
  playBtnImg = (UIWidget_o *)this->fields.changeBgButtonSprite;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !playBtnImg )
    goto LABEL_36;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v28, 0);
  playBtnImg = (UIWidget_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_CHANGE_BG;
  if ( !playBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playBtnImg, 0, 0),
        (playBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0) )
  {
LABEL_36:
    sub_1C372B4(playBtnImg);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)playBtnImg, 0, 0);
  if ( this->fields.type == 10 )
  {
    playBtnImg = (UIWidget_o *)this->fields.soundPlayerComp;
    if ( playBtnImg )
    {
      SoundPlayerComponent__SetEnableBlockTouch((SoundPlayerComponent_o *)playBtnImg, 0, 0);
      return;
    }
    goto LABEL_36;
  }
}


void MyRoomControl__SaveDisplayOverWriteIds(const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass456_0_o *v1; // x20
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v3; // x19
  MyRoomControl_c *v4; // x0
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0
  int32_t current; // w23
  __int64 v7; // x22
  __int64 v8; // x0
  System_Collections_Generic_List_int__o *v9; // x0
  System_Int32_array *v10; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  _BOOL8 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  MyRoomControl_c *v20; // x0
  System_Collections_ICollection_o *BgSaveData; // x23
  System_Collections_Generic_List_object__o *v22; // x22
  MyRoomControl___c_c *v23; // x0
  System_Func_object__bool__o *_9__456_0; // x22
  Il2CppObject *v25; // x24
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Func_object__bool__o *v30; // x23
  Il2CppObject *v31; // x0
  Il2CppObject *v32; // x23
  System_Int32_array *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x23
  System_Int32_array *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_Object_array *v42; // x8
  _QWORD *v43; // x9
  __int64 v44; // x10
  Il2CppClass **v45; // x0
  _BOOL8 v46; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  Il2CppObject *v49; // x1
  struct System_Object_array *v50; // x8
  _QWORD *v51; // x9
  __int64 v52; // x10
  Il2CppClass **v53; // x0
  System_Object_array *v54; // x19
  System_String_o *v55; // x0
  System_Collections_Generic_List_Enumerator_object__o v56; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v57; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v58; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4C3E3F3 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_BackGroundSaveData_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_Any_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_MyRoomControl_BackGroundSaveData___);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__Dispose__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__MoveNext__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__get_Current__);
    sub_1C37058(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C37058(&System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
    sub_1C37058(&JsonManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C37058(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
    sub_1C37058(&System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__SaveDisplayOverWriteIds_b__456_0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass456_0__SaveDisplayOverWriteIds_b__1__);
    sub_1C37058(&MyRoomControl___c__DisplayClass456_0_TypeInfo);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_5301/*"DisplayedOverWriteIds"*/);
    byte_4C3E3F3 = 1;
  }
  memset(&v58, 0, sizeof(v58));
  memset(&v57, 0, sizeof(v57));
  v1 = (MyRoomControl___c__DisplayClass456_0_o *)sub_1C372A4(MyRoomControl___c__DisplayClass456_0_TypeInfo);
  MyRoomControl___c__DisplayClass456_0___ctor(v1, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  enableBgGroupIdList = v4->static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    goto LABEL_61;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    enableBgGroupIdList,
    (const MethodInfo_3786AD4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v58 = v56;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v58,
            (const MethodInfo_35299F8 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v58.fields._current;
    if ( LODWORD(v58.fields._current) )
    {
      v7 = sub_1C372A4(MyRoomControl_BackGroundSaveData_TypeInfo);
      MyRoomControl_BackGroundSaveData___ctor((MyRoomControl_BackGroundSaveData_o *)v7, 0);
      if ( !v7 )
        sub_1C372B4(v8);
      *(_DWORD *)(v7 + 16) = current;
      *(_DWORD *)(v7 + 20) = 0;
      if ( !Master_object )
        sub_1C372B4(v8);
      v9 = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, current, 0);
      if ( !v9 )
        sub_1C372B4(0);
      v10 = System_Collections_Generic_List_int___ToArray(
              v9,
              (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
      *(_QWORD *)(v7 + 24) = v10;
      sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)v10, v11, v12);
      v13 = System_Linq_Enumerable__Any_int_(
              *(System_Collections_Generic_IEnumerable_TSource__o **)(v7 + 24),
              (const MethodInfo_30F32A0 *)Method_System_Linq_Enumerable_Any_int___);
      if ( v13 )
      {
        if ( !v3 )
          sub_1C372B4(v13);
        items = v3->fields._items;
        v17 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
        ++v3->fields._version;
        if ( !items )
          sub_1C372B4(v13);
        size = v3->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)v7,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v7;
          sub_1C36FFC((CGThumbnailListItem_o *)(v19 + 4), v7, v14, v15);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v58,
    (const MethodInfo_35299F4 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v20 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  BgSaveData = (System_Collections_ICollection_o *)MyRoomControl__GetBgSaveData((const MethodInfo *)v20);
  v22 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v22,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
  enableBgGroupIdList = (System_Collections_Generic_List_int__o *)BasicHelper__IsNullOrEmpty(BgSaveData, 0);
  if ( ((unsigned __int8)enableBgGroupIdList & 1) == 0 )
  {
    v23 = MyRoomControl___c_TypeInfo;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      v23 = MyRoomControl___c_TypeInfo;
    }
    _9__456_0 = (System_Func_object__bool__o *)v23->static_fields->__9__456_0;
    if ( !_9__456_0 )
    {
      if ( !v23->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v23);
        v23 = MyRoomControl___c_TypeInfo;
      }
      v25 = (Il2CppObject *)v23->static_fields->__9;
      _9__456_0 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(_9__456_0, v25, Method_MyRoomControl___c__SaveDisplayOverWriteIds_b__456_0__, 0);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__456_0 = (struct System_Func_MyRoomControl_BackGroundSaveData__bool__o *)_9__456_0;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__456_0, (int32_t)_9__456_0, v27, v28);
    }
    v29 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BgSaveData,
            (System_Func_TSource__bool__o *)_9__456_0,
            (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_MyRoomControl_BackGroundSaveData___);
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v29,
                                                                      (const MethodInfo_312BF90 *)Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
    v22 = (System_Collections_Generic_List_object__o *)enableBgGroupIdList;
  }
  if ( !Master_object )
    goto LABEL_61;
  enableBgGroupIdList = (System_Collections_Generic_List_int__o *)MyRoomAddMaster__GetMainGroupWarId(
                                                                    (MyRoomAddMaster_o *)Master_object,
                                                                    0);
  if ( !v1 )
    goto LABEL_61;
  v1->fields.mainGroupWarId = (int)enableBgGroupIdList;
  v30 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v30,
    (Il2CppObject *)v1,
    Method_MyRoomControl___c__DisplayClass456_0__SaveDisplayOverWriteIds_b__1__,
    0);
  v31 = System_Linq_Enumerable__FirstOrDefault_object__51451648(
          (System_Collections_Generic_IEnumerable_TSource__o *)v22,
          (System_Func_TSource__bool__o *)v30,
          (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
  if ( v31 )
  {
    v32 = v31;
    enableBgGroupIdList = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, 0, 0);
    if ( !enableBgGroupIdList )
      goto LABEL_61;
    v33 = System_Collections_Generic_List_int___ToArray(
            enableBgGroupIdList,
            (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    v32[1].monitor = v33;
    sub_1C36FFC((CGThumbnailListItem_o *)&v32[1].monitor, (int32_t)v33, v34, v35);
    if ( !v22 )
      goto LABEL_61;
  }
  else
  {
    v36 = sub_1C372A4(MyRoomControl_BackGroundSaveData_TypeInfo);
    MyRoomControl_BackGroundSaveData___ctor((MyRoomControl_BackGroundSaveData_o *)v36, 0);
    if ( !v36 )
      goto LABEL_61;
    *(_DWORD *)(v36 + 16) = 0;
    *(_DWORD *)(v36 + 20) = v1->fields.mainGroupWarId;
    enableBgGroupIdList = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, 0, 0);
    if ( !enableBgGroupIdList )
      goto LABEL_61;
    v37 = System_Collections_Generic_List_int___ToArray(
            enableBgGroupIdList,
            (const MethodInfo_3787AB8 *)Method_System_Collections_Generic_List_int__ToArray__);
    *(_QWORD *)(v36 + 24) = v37;
    sub_1C36FFC((CGThumbnailListItem_o *)(v36 + 24), (int32_t)v37, v38, v39);
    if ( !v22 )
      goto LABEL_61;
    v42 = v22->fields._items;
    v43 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
    ++v22->fields._version;
    if ( !v42 )
      goto LABEL_61;
    v44 = v22->fields._size;
    if ( (unsigned int)v44 >= LODWORD(v42->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v22,
        (Il2CppObject *)v36,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v43[4] + 192LL) + 112LL));
    }
    else
    {
      v45 = &v42->obj.klass + v44;
      v22->fields._size = v44 + 1;
      v45[4] = (Il2CppClass *)v36;
      sub_1C36FFC((CGThumbnailListItem_o *)(v45 + 4), v36, v40, v41);
    }
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v56,
    v22,
    (const MethodInfo_37A3B1C *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__GetEnumerator__);
  v57 = v56;
  while ( 1 )
  {
    v46 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v57,
            (const MethodInfo_352D810 *)Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__MoveNext__);
    if ( !v46 )
      break;
    if ( !v3 )
      sub_1C372B4(v46);
    v49 = v57.fields._current;
    v50 = v3->fields._items;
    v51 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
    ++v3->fields._version;
    if ( !v50 )
      sub_1C372B4(v46);
    v52 = v3->fields._size;
    if ( (unsigned int)v52 >= LODWORD(v50->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        v49,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v51[4] + 192LL) + 112LL));
    }
    else
    {
      v53 = &v50->obj.klass + v52;
      v3->fields._size = v52 + 1;
      v53[4] = (Il2CppClass *)v49;
      sub_1C36FFC((CGThumbnailListItem_o *)(v53 + 4), (int32_t)v49, v47, v48);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v57,
    (const MethodInfo_352D80C *)Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__Dispose__);
  if ( !v3 )
LABEL_61:
    sub_1C372B4(enableBgGroupIdList);
  v54 = System_Collections_Generic_List_object___ToArray(
          v3,
          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v55 = JsonManager__toJson(&v54->obj, 0, 0, 0);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5301/*"DisplayedOverWriteIds"*/, v55, 0);
  UnityEngine_PlayerPrefs__Save(0);
}


void MyRoomControl__SetAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 18;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 92, 0, 0);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4);
}


void MyRoomControl__SetBackButtonIgnore(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0
  bool v5; // w1

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  v5 = flag;
  this->fields.isBackBtnIgnore = v5;
  if ( !maskBoxCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(maskBoxCollider, v5, 0);
}


void MyRoomControl__SetBackGroundData(const MethodInfo *method)
{
  Il2CppObject *Master_object; // x0
  System_Collections_Generic_List_int__o *v2; // x0
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  MyRoomControl_c *v5; // x8
  System_Collections_Generic_List_int__o *v6; // x19
  struct MyRoomControl_StaticFields *static_fields; // x0
  const MethodInfo *v8; // x0
  const MethodInfo *DisplayBgGroupIndex; // x0

  if ( (byte_4C3E3EE & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MyRoomAddMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E3EE = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    sub_1C372B4(0);
  v2 = MyRoomAddMaster__DisplayBgGroupList((MyRoomAddMaster_o *)Master_object, 0);
  v5 = MyRoomControl_TypeInfo;
  v6 = v2;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  static_fields = v5->static_fields;
  static_fields->enableBgGroupIdList = v6;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->enableBgGroupIdList, (int32_t)v6, v3, v4);
  DisplayBgGroupIndex = (const MethodInfo *)MyRoomControl__GetDisplayBgGroupIndex(v8);
  MyRoomControl_TypeInfo->static_fields->displayBgGroupIndex = (int)DisplayBgGroupIndex;
  MyRoomControl__SaveDisplayOverWriteIds(DisplayBgGroupIndex);
}


void MyRoomControl__SetButtonFlag(MyRoomControl_o *this, int32_t button, bool enabled, const MethodInfo *method)
{
  int32_t buttonFlag; // w8
  int v5; // w9
  int32_t v6; // w8

  buttonFlag = this->fields.buttonFlag;
  v5 = buttonFlag & ~button;
  v6 = buttonFlag | button;
  if ( !enabled )
    v6 = v5;
  this->fields.buttonFlag = v6;
}


void MyRoomControl__SetChangeBtn(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  MyRoomControl_c *v4; // x0
  int v5; // w8
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4C3E37A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    this = (MyRoomControl_o *)sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E37A = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1C372B4(this);
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
    UIWidget__set_color((UIWidget_o *)this, v8, 0);
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
    UIWidget__set_color((UIWidget_o *)this, v7, 0);
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


void MyRoomControl__SetEnableMultipleViewUi(MyRoomControl_o *this, bool isEnable, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *multipleFaceChangeButtons; // x8
  MyRoomControl_o *v4; // x20
  __int64 v6; // x21
  int max_length; // w9

  multipleFaceChangeButtons = this->fields.multipleFaceChangeButtons;
  if ( !multipleFaceChangeButtons )
    goto LABEL_7;
  v4 = this;
  v6 = 0;
  while ( 1 )
  {
    max_length = multipleFaceChangeButtons->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C372BC(this);
    this = (MyRoomControl_o *)multipleFaceChangeButtons->m_Items[v6];
    if ( this )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0);
      multipleFaceChangeButtons = v4->fields.multipleFaceChangeButtons;
      ++v6;
      if ( multipleFaceChangeButtons )
        continue;
    }
    goto LABEL_7;
  }
  this = (MyRoomControl_o *)v4->fields.multipleViewCloseButton;
  if ( !this
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !isEnable, 0),
        (this = (MyRoomControl_o *)v4->fields.multipleViewDisableUiButton) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, isEnable, 0),
        (this = (MyRoomControl_o *)v4->fields.titleInfo) == 0) )
  {
LABEL_7:
    sub_1C372B4(this);
  }
  if ( isEnable )
    TitleInfoControl__FrameIn((TitleInfoControl_o *)this, 0, 0);
  else
    TitleInfoControl__FrameOut((TitleInfoControl_o *)this, 0, 0);
}


void MyRoomControl__SetExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 19;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 95, 0, 0);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4);
}


void MyRoomControl__SetFavoriteSvt(
        MyRoomControl_o *this,
        System_Action_o *callback,
        bool IsActSetMyRoomStandFigre,
        const MethodInfo *method)
{
  __int64 v7; // x21
  CommonUI_o *Instance; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x1
  const MethodInfo *v14; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v16; // x22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  int32_t figureSvtId; // w23
  ServantVoiceEntity_o *v21; // x24
  int32_t Item; // w0
  const MethodInfo *v23; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  System_String_o *asstName; // x22
  System_Action_o *v31; // x23
  const MethodInfo *v32; // x3
  System_Action_o *v33; // x23
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Action_o *v36; // x20
  const MethodInfo *v37; // x2

  if ( (byte_4C3E399 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass325_0_TypeInfo);
    byte_4C3E399 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass325_0_TypeInfo);
  MyRoomControl___c__DisplayClass325_0___ctor((MyRoomControl___c__DisplayClass325_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 32) = callback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)callback, v11, v12);
  MyRoomControl__setupSvtImageIdList(this, v13);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v14);
  *(_QWORD *)(v7 + 24) = SvtVoiceEnt;
  v16 = (ServantVoiceEntity_o **)(v7 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)SvtVoiceEnt, v17, v18);
  if ( *(_QWORD *)(v7 + 24) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0);
      MyRoomControl__ReleaseSvtVoiceData(this, v19);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        figureSvtId = this->fields.figureSvtId;
        v21 = *v16;
        Item = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Instance,
                 this->fields.figureSvtDispIdx,
                 (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
        VoiceList = MyRoomControl__GetVoiceList(this, v21, figureSvtId, Item, v23);
        this->fields.voiceList = VoiceList;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v25, v26);
        Instance = (CommonUI_o *)*v16;
        if ( *v16 )
        {
          VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0);
          this->fields.asstName = VoiceAssetName;
          sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v28, v29);
          asstName = this->fields.asstName;
          v31 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v31,
            (Il2CppObject *)v7,
            Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__0__,
            0);
          MyRoomControl__voiceLoad(this, asstName, v31, v32);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1C372B4(Instance);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v33 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v33, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__1__, 0);
  *(_QWORD *)(v7 + 40) = v33;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)v33, v34, v35);
  if ( IsActSetMyRoomStandFigre )
  {
    v36 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v36, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__2__, 0);
    MyRoomControl__SetMyRoomStandFigure(this, v36, v37);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v7 + 40), 0);
  }
}


void MyRoomControl__SetGallery(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  this->fields._IsGallery_k__BackingField = 1;
  MyRoomControl__setMaterial(this, isPlayDecideSe, method);
}


void MyRoomControl__SetGallery_33517176(
        MyRoomControl_o *this,
        int32_t warId,
        System_Collections_Generic_List_GalleryEntity__o *galleryList,
        const MethodInfo *method)
{
  __int64 v7; // x20
  UnityEngine_Component_o *gameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *cgThumbnailDialog; // x21
  const MethodInfo *v14; // x1
  AssetLoader_LoadEndDataHandler_o *v15; // x19
  const MethodInfo *v16; // x3
  CGThumbnailDialog_o *v17; // x21
  System_Collections_Generic_List_GalleryEntity__o *v18; // x22
  int32_t v19; // w23
  System_Action_o *v20; // x24
  System_Action_o *v21; // x25
  System_Action_o *v22; // x26

  if ( (byte_4C3E392 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_OnClickBack__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass305_0_TypeInfo);
    sub_1C37058(&StringLiteral_9219/*"MyRoom/Gallery/Prefab"*/);
    byte_4C3E392 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass305_0_TypeInfo);
  MyRoomControl___c__DisplayClass305_0___ctor((MyRoomControl___c__DisplayClass305_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_14;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = galleryList;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)galleryList, v11, v12);
  *(_DWORD *)(v7 + 32) = warId;
  cgThumbnailDialog = (UnityEngine_Object_o *)this->fields.cgThumbnailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(cgThumbnailDialog, 0, 0) )
  {
    MyRoomControl__stopSvtVoice(this, v14);
    this->fields.type = 20;
    MyRoomControl__setSvtFigureActive(this, 20, 1, v16);
    gameObject = (UnityEngine_Component_o *)this->fields.cgThumbnailDialog;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
        v17 = this->fields.cgThumbnailDialog;
        v18 = *(System_Collections_Generic_List_GalleryEntity__o **)(v7 + 24);
        v19 = *(_DWORD *)(v7 + 32);
        v20 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__0__, 0);
        v21 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v21, (Il2CppObject *)this, (intptr_t)Method_MyRoomControl_OnClickBack__, 0);
        v22 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v22, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__1__, 0);
        if ( v17 )
        {
          CGThumbnailDialog__Open(v17, v18, v19, v20, v21, v22, 0);
          BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfo, 0, 0);
          return;
        }
      }
    }
LABEL_14:
    sub_1C372B4(gameObject);
  }
  v15 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v15,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__2__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9219/*"MyRoom/Gallery/Prefab"*/, v15, 1, 0);
}


void MyRoomControl__SetImageIdAndFormId(
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
  int32_t form; // w0
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3E3EA & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&UIStandFigureRender_TypeInfo);
    byte_4C3E3EA = 1;
  }
  entity = 0;
  Id = ServantScriptMaster__getId(svtId, imageLimitCount, 0);
  *imageId = Id;
  if ( imageLimitCount >= 201 )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    v11 = ImageLimitCount__SpecialImageLimitCountToSpecialNum(imageLimitCount, 0);
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    if ( !Master_object )
      goto LABEL_17;
    Master_object = (Il2CppObject *)MyroomServantSpecialImageMaster__TryGetEntity(
                                      (MyroomServantSpecialImageMaster_o *)Master_object,
                                      &entity,
                                      svtId,
                                      v11,
                                      0);
    if ( ((unsigned __int8)Master_object & 1) != 0 )
    {
      if ( entity )
      {
        form = entity->fields.form;
        goto LABEL_16;
      }
LABEL_17:
      sub_1C372B4(Master_object);
    }
    Id = *imageId;
  }
  if ( !UIStandFigureRender_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UIStandFigureRender_TypeInfo);
  form = UIStandFigureRender__GetForm(Id, 1, -1, 0);
LABEL_16:
  *formId = form;
}


void MyRoomControl__SetLayerChangeObj(MyRoomControl_o *this, const MethodInfo *method)
{
  void *photoTargetList; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v5; // x21
  Il2CppObject *v6; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v10; // x8
  int32_t size; // w2
  int v12; // w9
  unsigned __int64 v13; // x20
  char v14; // w8
  char v15; // w28
  UnityEngine_Transform_o *transform; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v18; // x8
  UnityEngine_Transform_o *v19; // x21
  Il2CppObject *photoLayerChangeObj; // x22
  char *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UIPanel_o *photoMasterPanel; // x1
  struct PhotoStandFigureComponent_array *v25; // x8
  PhotoStandFigureComponent_o *v26; // x8
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 v31; // x10
  __int64 v32; // x8
  char *v33; // x20
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  __int64 v36; // x1
  char *v37; // x20
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x1

  if ( (byte_4C3E3D1 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoLayerChangeComponent__TypeInfo);
    sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__SetLayerChangeObj_b__412_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E3D1 = 1;
  }
  photoTargetList = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoTargetList = MyRoomControl___c_TypeInfo;
  }
  v5 = *(System_Action_object__o **)(*((_QWORD *)photoTargetList + 23) + 64LL);
  if ( !v5 )
  {
    if ( !*((_DWORD *)photoTargetList + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoTargetList);
      photoTargetList = MyRoomControl___c_TypeInfo;
    }
    v6 = (Il2CppObject *)**((_QWORD **)photoTargetList + 23);
    v5 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v5, v6, Method_MyRoomControl___c__SetLayerChangeObj_b__412_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__412_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__412_0, (int32_t)v5, v8, v9);
  }
  if ( !instantiateLayerChangeObjList )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    instantiateLayerChangeObjList,
    (System_Action_T__o *)v5,
    (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
  v10 = this->fields.instantiateLayerChangeObjList;
  if ( !v10 )
    goto LABEL_53;
  size = v10->fields._size;
  v12 = v10->fields._version + 1;
  v10->fields._size = 0;
  v10->fields._version = v12;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v10->fields._items, 0, size, 0);
  if ( !this->fields.isOneShot )
  {
    v13 = 0;
    v14 = 1;
    do
    {
      photoTargetList = this->fields.photoTargetList;
      if ( !photoTargetList )
        goto LABEL_53;
      v15 = v14;
      photoTargetList = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)photoTargetList,
                                  v13,
                                  (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        photoTargetList = this->fields.photoMasterTexture;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoTargetList, 0);
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)photoTargetList, 0);
      }
      else
      {
        photoStandFigures = this->fields.photoStandFigures;
        if ( !photoStandFigures )
          goto LABEL_53;
        if ( v13 >= LODWORD(photoStandFigures->max_length) )
          goto LABEL_54;
        v18 = photoStandFigures->m_Items[v13];
        if ( !v18 )
          goto LABEL_53;
        photoTargetList = v18->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)photoTargetList, 0);
      }
      v19 = transform;
      photoLayerChangeObj = (Il2CppObject *)this->fields.photoLayerChangeObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      photoTargetList = UnityEngine_Object__Instantiate_object__51855596(
                          photoLayerChangeObj,
                          v19,
                          (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___);
      if ( !this->fields.photoTargetList )
        goto LABEL_53;
      v21 = (char *)photoTargetList;
      photoTargetList = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)this->fields.photoTargetList,
                                  v13,
                                  (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        photoMasterPanel = this->fields.photoMasterPanel;
      }
      else
      {
        v25 = this->fields.photoStandFigures;
        if ( !v25 )
          goto LABEL_53;
        if ( v13 >= LODWORD(v25->max_length) )
LABEL_54:
          sub_1C372BC(photoTargetList);
        v26 = v25->m_Items[v13];
        if ( !v26 )
          goto LABEL_53;
        photoTargetList = v26->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)photoTargetList,
                            (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        photoMasterPanel = (struct UIPanel_o *)photoTargetList;
      }
      if ( !v21 )
        goto LABEL_53;
      *((_QWORD *)v21 + 4) = photoMasterPanel;
      sub_1C36FFC((CGThumbnailListItem_o *)(v21 + 32), (int32_t)photoMasterPanel, v22, v23);
      photoTargetList = this->fields.instantiateLayerChangeObjList;
      if ( !photoTargetList )
        goto LABEL_53;
      v29 = *((_QWORD *)photoTargetList + 2);
      v30 = Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__;
      ++*((_DWORD *)photoTargetList + 7);
      if ( !v29 )
        goto LABEL_53;
      v31 = *((int *)photoTargetList + 6);
      if ( (unsigned int)v31 >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)photoTargetList,
          (Il2CppObject *)v21,
          *(const MethodInfo_37A3024 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        v32 = v29 + 8 * v31;
        *((_DWORD *)photoTargetList + 6) = v31 + 1;
        *(_QWORD *)(v32 + 32) = v21;
        sub_1C36FFC((CGThumbnailListItem_o *)(v32 + 32), (int32_t)v21, v27, v28);
      }
      v14 = 0;
      v13 = 1;
    }
    while ( (v15 & 1) != 0 );
    photoTargetList = this->fields.instantiateLayerChangeObjList;
    if ( photoTargetList )
    {
      photoTargetList = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)photoTargetList,
                          0,
                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
      if ( this->fields.instantiateLayerChangeObjList )
      {
        v33 = (char *)photoTargetList;
        photoTargetList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                            1,
                            (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
        if ( photoTargetList )
        {
          if ( v33 )
          {
            v36 = *((_QWORD *)photoTargetList + 4);
            *((_QWORD *)v33 + 5) = v36;
            sub_1C36FFC((CGThumbnailListItem_o *)(v33 + 40), v36, v34, v35);
            photoTargetList = this->fields.instantiateLayerChangeObjList;
            if ( photoTargetList )
            {
              photoTargetList = System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)photoTargetList,
                                  1,
                                  (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
              if ( this->fields.instantiateLayerChangeObjList )
              {
                v37 = (char *)photoTargetList;
                photoTargetList = System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                                    0,
                                    (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
                if ( photoTargetList )
                {
                  if ( v37 )
                  {
                    v40 = *((_QWORD *)photoTargetList + 4);
                    *((_QWORD *)v37 + 5) = v40;
                    sub_1C36FFC((CGThumbnailListItem_o *)(v37 + 40), v40, v38, v39);
                    photoTargetList = this->fields.instantiateLayerChangeObjList;
                    if ( photoTargetList )
                    {
                      photoTargetList = System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)photoTargetList,
                                          this->fields.isChangePhotoPosition,
                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
                      if ( photoTargetList )
                      {
                        PhotoLayerChangeComponent__InitDepth((PhotoLayerChangeComponent_o *)photoTargetList, 0);
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
    sub_1C372B4(photoTargetList);
  }
}


void MyRoomControl__SetLayerMultipleServant(MyRoomControl_o *this, int32_t frontIndex, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v6; // x21
  int max_length; // w9
  int32_t v8; // w1

  v4 = this;
  if ( (byte_4C3E3B7 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1C37058(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    byte_4C3E3B7 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1C372B4(this);
  v6 = 0;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C372BC(this);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_30DE428 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
      if ( this )
      {
        v8 = frontIndex == (_DWORD)v6 ? 16 : 15;
        UIPanel__set_depth((UIPanel_o *)this, v8, 0);
        multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
        ++v6;
        if ( multipleStandFigureBacks )
          continue;
      }
    }
    goto LABEL_13;
  }
}


void MyRoomControl__SetMaskCollider(MyRoomControl_o *this, bool flag, const MethodInfo *method)
{
  UnityEngine_Collider_o *maskBoxCollider; // x0

  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(maskBoxCollider, flag, 0);
}


void MyRoomControl__SetMaterialSvtFigure(
        MyRoomControl_o *this,
        int32_t servantId,
        System_Action_o *end_act,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v15; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  MyRoomControl_o *v18; // x0
  int32_t v19; // w3
  const MethodInfo *v20; // x5
  StandFigureBack_o *standFigureBack; // x19
  int32_t v22; // w21
  int32_t v23; // w22
  int32_t v24; // w23
  System_Action_o *v25; // x24
  CombineRootComponent_c *v26; // x0
  System_String_o *COMBINE_ASSET_PATH; // x19
  AssetLoader_LoadEndDataHandler_o *v28; // x21
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  if ( (byte_4C3E379 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&CombineRootComponent_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass243_0_TypeInfo);
    byte_4C3E379 = 1;
  }
  imageId = 0;
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass243_0_TypeInfo);
  MyRoomControl___c__DisplayClass243_0___ctor((MyRoomControl___c__DisplayClass243_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_19;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)end_act, v11, v12);
  *(_DWORD *)(v7 + 32) = servantId;
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = servantId;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, servantId, v13);
    MyRoomControl__SetChangeBtn(this, v15);
    servantId = *(_DWORD *)(v7 + 32);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_19;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  materialImageIdList = (System_Collections_Generic_List_int__o *)ImageLimitCount__GetLimitCountByImageLimitCostumeIn(
                                                                    Item,
                                                                    0);
  if ( !mStateMaterial )
    goto LABEL_19;
  MyRoomStateMaterial__CheckPlayableMaterial(mStateMaterial, servantId, (int32_t)materialImageIdList, 0);
  materialImageIdList = this->fields.materialImageIdList;
  this->fields.isSvtLoading = 1;
  if ( !materialImageIdList )
    goto LABEL_19;
  v18 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                             materialImageIdList,
                             this->fields.materialFigureSvtDispIdx,
                             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  v19 = *(_DWORD *)(v7 + 32);
  *(_DWORD *)(v7 + 36) = (_DWORD)v18;
  MyRoomControl__SetImageIdAndFormId(v18, &imageId, (int32_t *)(v7 + 40), v19, (int32_t)v18, v20);
  if ( this->fields.combineAssetData )
  {
    standFigureBack = this->fields.standFigureBack;
    v22 = *(_DWORD *)(v7 + 32);
    v23 = *(_DWORD *)(v7 + 36);
    v24 = *(_DWORD *)(v7 + 40);
    v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      v25,
      (Il2CppObject *)v7,
      Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__,
      0);
    if ( standFigureBack )
    {
      StandFigureBack__SetMyRoomStandFigure(standFigureBack, v22, v23, 1, 0, v24, 10, v25, 0, 0);
      return;
    }
LABEL_19:
    sub_1C372B4(materialImageIdList);
  }
  v26 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v26 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v26->static_fields->COMBINE_ASSET_PATH;
  v28 = (AssetLoader_LoadEndDataHandler_o *)sub_1C372A4(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v28,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v28, 1, 0);
}


void MyRoomControl__SetMultipleViewButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  bool IsEnableMultipleViewButton; // w8
  UIWidget_o *multipleViewButtonSprite; // x0
  float v5; // s8
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonSprite;
  if ( IsEnableMultipleViewButton )
    v5 = 1.0;
  else
    v5 = 0.5;
  if ( !multipleViewButtonSprite
    || (v6.fields.a = 1.0,
        v6.fields.r = v5,
        v6.fields.g = v5,
        v6.fields.b = v5,
        UIWidget__set_color(multipleViewButtonSprite, v6, 0),
        (multipleViewButtonSprite = (UIWidget_o *)this->fields.multipleViewButtonLabel) == 0) )
  {
    sub_1C372B4(multipleViewButtonSprite);
  }
  v7.fields.a = 1.0;
  v7.fields.r = v5;
  v7.fields.g = v5;
  v7.fields.b = v5;
  UIWidget__set_color(multipleViewButtonSprite, v7, 0);
}


void MyRoomControl__SetMyRoomStandFigure(MyRoomControl_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x3
  bool _40427704; // w8
  MyRoomControl_o *Item; // x0
  int32_t v14; // w21
  const MethodInfo *v15; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v18; // w19
  System_Action_o *v19; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4C3E377 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass241_0_TypeInfo);
    byte_4C3E377 = 1;
  }
  *(_QWORD *)formId = 0;
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor((MyRoomControl___c__DisplayClass241_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 24) = end_act;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)end_act, v9, v10);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v5 + 24), v11);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _40427704 = TutorialFlag__Get_40427704(126, 0);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _40427704;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  v14 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v15);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v18 = formId[1];
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v19,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__,
    0);
  if ( !standFigureBack )
LABEL_11:
    sub_1C372B4(imageIdList);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v14, 1, 0, v18, 10, v19, 0, 0);
}


void MyRoomControl__SetMySvtFigure(MyRoomControl_o *this, System_Action_o *end_act, const MethodInfo *method)
{
  __int64 v5; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v13; // x1
  System_Action_o *v14; // x21
  const MethodInfo *v15; // x2

  if ( (byte_4C3E378 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&MaterialServantLimitCountManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass242_0_TypeInfo);
    byte_4C3E378 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor((MyRoomControl___c__DisplayClass242_0_o *)v5, 0);
  if ( !v5
    || (*(_QWORD *)(v5 + 16) = this,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8),
        *(_QWORD *)(v5 + 24) = end_act,
        sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)end_act, v9, v10),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1C372B4(materialImageIdList);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0);
  MaterialServantLimitCountManager__WriteData(0);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v13);
  v14 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v14, (Il2CppObject *)v5, Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__, 0);
  MyRoomControl__SetMyRoomStandFigure(this, v14, v15);
}


void MyRoomControl__SetPhotoCampaignButtonColor(MyRoomControl_o *this, const MethodInfo *method)
{
  bool IsEnablePhotoCampaignButton; // w8
  UIWidget_o *photoCampaignButtonSprite; // x0
  float v5; // s8
  UnityEngine_Color_o v6; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonSprite;
  if ( IsEnablePhotoCampaignButton )
    v5 = 1.0;
  else
    v5 = 0.5;
  if ( !photoCampaignButtonSprite
    || (v6.fields.a = 1.0,
        v6.fields.r = v5,
        v6.fields.g = v5,
        v6.fields.b = v5,
        UIWidget__set_color(photoCampaignButtonSprite, v6, 0),
        (photoCampaignButtonSprite = (UIWidget_o *)this->fields.photoCampaignButtonLabel) == 0) )
  {
    sub_1C372B4(photoCampaignButtonSprite);
  }
  v7.fields.a = 1.0;
  v7.fields.r = v5;
  v7.fields.g = v5;
  v7.fields.b = v5;
  UIWidget__set_color(photoCampaignButtonSprite, v7, 0);
}


void MyRoomControl__SetPhotoCampaignSprite(
        MyRoomControl_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  UIAtlas_o *photoCampaignAtlas; // x0

  photoCampaignAtlas = this->fields.photoCampaignAtlas;
  if ( !photoCampaignAtlas )
    goto LABEL_6;
  photoCampaignAtlas = (UIAtlas_o *)UIAtlas__GetSprite(photoCampaignAtlas, name, 0);
  if ( photoCampaignAtlas )
  {
    if ( sprite )
    {
      UISprite__set_atlas(sprite, this->fields.photoCampaignAtlas, 0);
      UISprite__set_spriteName(sprite, name, 0);
      return;
    }
LABEL_6:
    sub_1C372B4(photoCampaignAtlas);
  }
}


void MyRoomControl__SetPhotoCampaignUi(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *photoCampaignCameraButton; // x0
  Il2CppObject *photoCampaignCameraEffect; // x20
  UnityEngine_Transform_o *transform; // x21
  Il2CppObject *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4C3E3E0 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E3E0 = 1;
  }
  photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.photoSettingButtonComponent;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  photoCampaignCameraButton = UnityEngine_Component__get_gameObject(
                                (UnityEngine_Component_o *)photoCampaignCameraButton,
                                0);
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive(photoCampaignCameraButton, isActive, 0);
  if ( isActive )
  {
    photoCampaignCameraButton = this->fields.photoCampaignCameraButton;
    if ( photoCampaignCameraButton )
    {
      photoCampaignCameraEffect = (Il2CppObject *)this->fields.photoCampaignCameraEffect;
      transform = UnityEngine_GameObject__get_transform(photoCampaignCameraButton, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v8 = UnityEngine_Object__Instantiate_object__51855596(
             photoCampaignCameraEffect,
             transform,
             (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v8;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignInstantiateCameraEffect, (int32_t)v8, v9, v10);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0);
        return;
      }
    }
LABEL_16:
    sub_1C372B4(photoCampaignCameraButton);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_71266752(photoCampaignInstantiateCameraEffect, 0);
  this->fields.photoCampaignInstantiateCameraEffect = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignInstantiateCameraEffect, 0, v12, v13);
  photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
  if ( !photoCampaignCameraButton )
    goto LABEL_16;
  TitleInfoControl__FrameOut((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0);
}


void MyRoomControl__SetPhotoFrameSprite(
        MyRoomControl_o *this,
        UISprite_o *sprite,
        System_String_o *name,
        const MethodInfo *method)
{
  UnityEngine_Object_o *photoFrameAtlas; // x22
  UIAtlas_o *v8; // x0

  if ( (byte_4C3E3C4 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E3C4 = 1;
  }
  photoFrameAtlas = (UnityEngine_Object_o *)this->fields.photoFrameAtlas;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoFrameAtlas, 0, 0) )
  {
    v8 = this->fields.photoFrameAtlas;
    if ( !v8 )
      goto LABEL_11;
    v8 = (UIAtlas_o *)UIAtlas__GetSprite(v8, name, 0);
    if ( v8 )
    {
      if ( sprite )
      {
        UISprite__set_atlas(sprite, this->fields.photoFrameAtlas, 0);
        UISprite__set_spriteName(sprite, name, 0);
        return;
      }
LABEL_11:
      sub_1C372B4(v8);
    }
  }
}


void MyRoomControl__SetPlayButtonAnimation(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *playBtnImg; // x20
  UnityEngine_GameObject_o *voicePlayEffect; // x0
  UnityEngine_Transform_o *v5; // x20
  UITweener_o *v6; // x20
  UITweener_o *v7; // x21
  struct System_Collections_Generic_List_ServantVoiceData____o *voiceList; // x8

  if ( (byte_4C3E382 & 1) == 0 )
  {
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_TweenScale___);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E382 = 1;
  }
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0, 0) )
  {
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_21;
    UnityEngine_GameObject__SetActive(voicePlayEffect, 1, 0);
    voicePlayEffect = this->fields.voicePlayEffect;
    if ( !voicePlayEffect )
      goto LABEL_21;
    voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayEffect, 0);
    v5 = (UnityEngine_Transform_o *)voicePlayEffect;
    if ( !byte_4C3C926 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v5
      || (UnityEngine_Transform__set_localScale(v5, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v6 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v6)
      || (v7 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v6, 0.0, 0), !v7) )
    {
LABEL_21:
      sub_1C372B4(voicePlayEffect);
    }
    UITweener__set_tweenFactor(v7, 0.0, 0);
    voiceList = this->fields.voiceList;
    if ( voiceList && voiceList->fields._size >= 1 )
    {
      v6->fields.style = 1;
      v7->fields.style = 1;
    }
    else
    {
      v6->fields.style = 0;
      v7->fields.style = 0;
      this->fields.isVoicePlaying = 0;
    }
    UITweener__Play_49452448(v6, 1, 0);
    UITweener__Play_49452448(v7, 1, 0);
  }
}


void MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sceneJumpInfo = info;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, (int32_t)info, (int32_t)method, v3);
}


void MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 44, 0, 0);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v4);
}


void MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C372B4(this);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


void MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3E36F & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_MyRoomControl__setState__);
    byte_4C3E36F = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1C372B4(0);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_332D0A4 *)Method_CStateManager_MyRoomControl__setState__);
}


void MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x0
  MyRoomAddMaster_o *v5; // x20
  int32_t v6; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4C3E363 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E363 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  v5 = (MyRoomAddMaster_o *)MasterData_object;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId((const MethodInfo *)MasterData_object);
  if ( !v5
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId(v5, -1, (int32_t)Instance, 0),
        !this->fields.frontObjectManager) )
  {
LABEL_11:
    sub_1C372B4(Instance);
  }
  v6 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v6 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v6, 0);
}


void MyRoomControl__SetupMaterialSvtImageIdList(MyRoomControl_o *this, int32_t servantId, const MethodInfo *method)
{
  MyRoomControl_o *v4; // x19
  struct System_Collections_Generic_List_int__o *materialImageIdList; // x8
  int v6; // w9
  struct UserGameEntity_o *usrData; // x8
  const MethodInfo *v8; // x2
  MyRoomControl_o *v9; // x21
  int32_t v10; // w22
  int32_t ImageLimitCount; // w23
  int32_t v12; // w23
  intptr_t m_CachedPtr; // x8
  _QWORD *v14; // x9
  __int64 m_CancellationTokenSource_low; // x10
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  MyRoomControl_o *v17; // x21
  unsigned __int64 v18; // x22
  int32_t v19; // w1
  intptr_t v20; // x8
  _QWORD *v21; // x9
  __int64 v22; // x10
  int32_t LimitCount; // w21
  System_Collections_Generic_List_int__o *v24; // x8
  int v25; // w20
  int32_t v26; // w21

  v4 = this;
  if ( (byte_4C3E365 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&MaterialServantLimitCountManager_TypeInfo);
    this = (MyRoomControl_o *)sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E365 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v6 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v6;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  usrData = v4->fields.usrData;
  if ( !usrData )
    goto LABEL_43;
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)UserServantCollectionMaster__GetEntityDefinitely(
                              (UserServantCollectionMaster_o *)this,
                              usrData->fields.userId,
                              servantId,
                              0);
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
      ImageLimitCount = ImageLimitCount__GetImageLimitCount(servantId, v10, 0);
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
      if ( !this )
        break;
      this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                  (ServantLimitImageMaster_o *)this,
                                  servantId,
                                  ImageLimitCount,
                                  0);
      if ( !v4->fields.materialImageIdList )
        break;
      v12 = (int)this;
      this = (MyRoomControl_o *)System_Collections_Generic_List_int___Contains(
                                  v4->fields.materialImageIdList,
                                  (int32_t)this,
                                  (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          break;
        m_CachedPtr = this->fields.m_CachedPtr;
        v14 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !m_CachedPtr )
          break;
        m_CancellationTokenSource_low = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(m_CachedPtr + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v12,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
          *(_DWORD *)(m_CachedPtr + 4 * m_CancellationTokenSource_low + 32) = v12;
        }
      }
      if ( ++v10 > SLODWORD(v9->fields.myRoomListCtr) )
        goto LABEL_22;
    }
LABEL_43:
    sub_1C372B4(this);
  }
LABEL_22:
  this = (MyRoomControl_o *)MyRoomControl__GetSortedCostumeIds(this, servantId, v8);
  if ( !this )
    goto LABEL_43;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v17 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v18 = 0;
    do
    {
      if ( v18 >= (unsigned int)m_CancellationTokenSource )
        sub_1C372BC(this);
      v19 = *((_DWORD *)&v17->fields.myRoomData + v18);
      if ( v19 >= 1 )
      {
        this = (MyRoomControl_o *)v4->fields.materialImageIdList;
        if ( !this )
          goto LABEL_43;
        v20 = this->fields.m_CachedPtr;
        v21 = Method_System_Collections_Generic_List_int__Add__;
        ++HIDWORD(this->fields.m_CancellationTokenSource);
        if ( !v20 )
          goto LABEL_43;
        v22 = SLODWORD(this->fields.m_CancellationTokenSource);
        if ( (unsigned int)v22 >= *(_DWORD *)(v20 + 24) )
        {
          System_Collections_Generic_List_int___AddWithResize(
            (System_Collections_Generic_List_int__o *)this,
            v19,
            *(const MethodInfo_3786000 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
        }
        else
        {
          LODWORD(this->fields.m_CancellationTokenSource) = v22 + 1;
          *(_DWORD *)(v20 + 4 * v22 + 32) = v19;
        }
      }
      LODWORD(m_CancellationTokenSource) = v17->fields.m_CancellationTokenSource;
    }
    while ( (__int64)++v18 < (int)m_CancellationTokenSource );
  }
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  LimitCount = MaterialServantLimitCountManager__GetLimitCount(servantId, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                              (ServantLimitImageMaster_o *)this,
                              servantId,
                              LimitCount,
                              0);
  v24 = v4->fields.materialImageIdList;
  if ( !v24 )
    goto LABEL_43;
  v25 = (int)this;
  v26 = 0;
  while ( v26 < v24->fields._size )
  {
    this = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                                v24,
                                v26,
                                (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)this == v25 )
    {
      v4->fields.materialFigureSvtDispIdx = v26;
      return;
    }
    v24 = v4->fields.materialImageIdList;
    ++v26;
    if ( !v24 )
      goto LABEL_43;
  }
}


void MyRoomControl__ShowContinueDeviceMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1C372B4(0);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0);
}


void MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  Gesture_EventHandler_o *v3; // x20

  if ( (byte_4C3E36B & 1) == 0 )
  {
    sub_1C37058(&Gesture_EventHandler_TypeInfo);
    sub_1C37058(&FingerGestures_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_FingerGestures_OnGestureEvent__);
    byte_4C3E36B = 1;
  }
  v3 = (Gesture_EventHandler_o *)sub_1C372A4(Gesture_EventHandler_TypeInfo);
  Gesture_EventHandler___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl_FingerGestures_OnGestureEvent__, 0);
  if ( !FingerGestures_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FingerGestures_TypeInfo);
  FingerGestures__add_OnGestureEvent(v3, 0);
}


System_Collections_IEnumerator_o *MyRoomControl__StartCameraEffect(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E3D8 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__StartCameraEffect_d__420_TypeInfo);
    byte_4C3E3D8 = 1;
  }
  v3 = sub_1C372A4(MyRoomControl__StartCameraEffect_d__420_TypeInfo);
  MyRoomControl__StartCameraEffect_d__420___ctor((MyRoomControl__StartCameraEffect_d__420_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void MyRoomControl__TransitionMyRoomTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  Il2CppObject *Instance; // x0
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x8
  int v6; // w9
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *temporaryPhotoTargetList; // x8
  int v8; // w9
  Il2CppObject *v9; // x0
  AvalonSceneManager_c *v10; // x8
  CommonUI_o *v11; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_4C3E3DD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__);
    sub_1C37058(&Method_MyRoomControl__TransitionMyRoomTop_b__425_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3E3DD = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  photoTargetList = this->fields.photoTargetList;
  if ( !photoTargetList )
    goto LABEL_10;
  v6 = photoTargetList->fields._version + 1;
  photoTargetList->fields._size = 0;
  photoTargetList->fields._version = v6;
  temporaryPhotoTargetList = this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_10;
  v8 = temporaryPhotoTargetList->fields._version + 1;
  temporaryPhotoTargetList->fields._size = 0;
  temporaryPhotoTargetList->fields._version = v8;
  this->fields.isChangePhotoPosition = 0;
  this->fields.photoState = 0;
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0);
  v9 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)v9;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_0__, 0);
  if ( !v11 )
LABEL_10:
    sub_1C372B4(Instance);
  CommonUI__maskFadeout(v11, 1, DEFAULT_FADE_TIME, v13, 0);
}


void MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4C3E36D & 1) == 0 )
  {
    sub_1C37058(&Method_CStateManager_MyRoomControl__update__);
    byte_4C3E36D = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_332D080 *)Method_CStateManager_MyRoomControl__update__);
  if ( this->fields.isEnableMultipleView )
    MyRoomControl__UpdateMutipleViewRemainTime(this, method);
  if ( this->fields.isEnablePhotoCampaign )
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, method);
}


void MyRoomControl__UpdateMutipleViewRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  UILabel_o *multipleViewButtonRemainTimeLabel; // x21
  int64_t multipleViewFinishedTime; // x22
  int64_t v6; // x20
  System_String_o *RestTime6; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C3E3BE & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3E3BE = 1;
  }
  if ( (this->fields.multipleViewFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    multipleViewButtonRemainTimeLabel = this->fields.multipleViewButtonRemainTimeLabel;
    multipleViewFinishedTime = this->fields.multipleViewFinishedTime;
    v6 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(multipleViewFinishedTime, v6, 0);
    if ( !multipleViewButtonRemainTimeLabel )
      sub_1C372B4(RestTime6);
    UILabel__set_text(multipleViewButtonRemainTimeLabel, RestTime6, 0);
    if ( v6 > this->fields.multipleViewFinishedTime )
    {
      this->fields.multipleViewFinishedTime = -1;
      MyRoomControl__SetMultipleViewButtonColor(this, v8);
    }
  }
}


void MyRoomControl__UpdatePhotoCampaignRemainTime(MyRoomControl_o *this, const MethodInfo *method)
{
  int64_t Time; // x0
  UILabel_o *photoCampaignButtonRemainTimeLabel; // x21
  int64_t photoCampaignFinishedTime; // x22
  int64_t v6; // x20
  System_String_o *RestTime6; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C3E3DF & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3E3DF = 1;
  }
  if ( (this->fields.photoCampaignFinishedTime & 0x8000000000000000LL) == 0 )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    Time = NetworkManager__getTime(0);
    photoCampaignButtonRemainTimeLabel = this->fields.photoCampaignButtonRemainTimeLabel;
    photoCampaignFinishedTime = this->fields.photoCampaignFinishedTime;
    v6 = Time;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    RestTime6 = LocalizationManager__GetRestTime6(photoCampaignFinishedTime, v6, 0);
    if ( !photoCampaignButtonRemainTimeLabel )
      sub_1C372B4(RestTime6);
    UILabel__set_text(photoCampaignButtonRemainTimeLabel, RestTime6, 0);
    if ( v6 > this->fields.photoCampaignFinishedTime )
    {
      this->fields.photoCampaignFinishedTime = -1;
      MyRoomControl__SetPhotoCampaignButtonColor(this, v8);
    }
  }
}


void MyRoomControl__ValentineListChange(MyRoomControl_o *this, bool isActive, const MethodInfo *method)
{
  UnityEngine_GameObject_o *MaterialEventLogItemListPanel; // x0
  void (__fastcall *element_class)(float); // x9
  long double v6; // q0
  UnityEngine_GameObject_c *klass; // x8

  MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.MaterialEventLogItemListPanel;
  if ( !MaterialEventLogItemListPanel )
    goto LABEL_11;
  element_class = (void (__fastcall *)(float))MaterialEventLogItemListPanel->klass[1]._1.element_class;
  if ( isActive )
  {
    element_class(0.0);
    MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.valentineListObj;
    if ( !MaterialEventLogItemListPanel )
      goto LABEL_11;
    klass = MaterialEventLogItemListPanel->klass;
    LODWORD(v6) = 1.0;
  }
  else
  {
    element_class(1.0);
    MaterialEventLogItemListPanel = (UnityEngine_GameObject_o *)this->fields.valentineListObj;
    if ( !MaterialEventLogItemListPanel )
      goto LABEL_11;
    klass = MaterialEventLogItemListPanel->klass;
    LODWORD(v6) = 0;
  }
  ((void (__fastcall *)(long double))klass[1]._1.element_class)(v6);
  MaterialEventLogItemListPanel = this->fields.servantListBg;
  if ( !MaterialEventLogItemListPanel
    || (UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, this->fields.IsListActive, 0),
        (MaterialEventLogItemListPanel = this->fields.listLabelObject) == 0)
    || (UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, this->fields.IsListActive, 0),
        (MaterialEventLogItemListPanel = this->fields.servantListLabelObject) == 0) )
  {
LABEL_11:
    sub_1C372B4(MaterialEventLogItemListPanel);
  }
  UnityEngine_GameObject__SetActive(MaterialEventLogItemListPanel, !this->fields.IsListActive, 0);
}


void MyRoomControl__WaitForConstructingRecordWithServant(
        MyRoomControl_o *this,
        System_Action_o *setEndAction,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = MyRoomControl__CoWaitForConstructingRecordWithServant(this, setEndAction, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void MyRoomControl___AutoDelinkAccountLinkage_b__320_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C3E3FB & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E3FB = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0) )
  {
    sub_1C372B4(Instance);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0);
}


void MyRoomControl___CloseMultipleView_b__387_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C3E3FF & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__CloseMultipleView_b__387_1__);
    byte_4C3E3FF = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__387_1__, 0);
  if ( !multipleViewComponent )
    sub_1C372B4(v5);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v4, v6);
}


void MyRoomControl___CloseMultipleView_b__387_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 43, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_10;
  TitleInfoControl__FrameIn(titleInfo, 1, 0);
  MyRoomControl__DispDefaultMyRoom(this, 1, 0, 0, v4);
  titleInfo = (TitleInfoControl_o *)this->fields.multipleViewCloseButton;
  if ( !titleInfo )
    goto LABEL_10;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_10;
  v6 = 0;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1C372BC(titleInfo);
    titleInfo = (TitleInfoControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( titleInfo )
    {
      StandFigureBack__Init((StandFigureBack_o *)titleInfo, 0);
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
    sub_1C372B4(titleInfo);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  MyRoomControl__SetMyRoomStandFigure(this, 0, v8);
}


bool MyRoomControl___CoWaitForConstructingRecordWithServant_b__292_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C372B4(this);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void MyRoomControl___EndLoadPhotoAsset_b__401_1(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x4

  if ( (byte_4C3E400 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_2__);
    byte_4C3E400 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_2__, 0);
  MyRoomControl__DispDefaultMyRoom(this, 0, v3, 1, v4);
}


void MyRoomControl___EndLoadPhotoAsset_b__401_2(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  struct TitleInfoControl_o *v4; // x8
  struct TitleInfoControl_o *v5; // x8
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v7; // x8
  CommonUI_o *v8; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x21

  if ( (byte_4C3E401 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_3__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E401 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 0, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setBackBtnSprite(titleInfo, 3, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)TitleInfoControl__FrameOut(titleInfo, 0, 0);
  v4 = this->fields.titleInfo;
  if ( !v4 )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)v4->fields.titleImg;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  v5 = this->fields.titleInfo;
  if ( !v5 )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)v5->fields.headerBgImg;
  if ( !titleInfo )
    goto LABEL_17;
  titleInfo = (TitleInfoControl_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__setDispParticleObj(titleInfo, 0, 0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_3__, 0);
  if ( !v8 )
LABEL_17:
    sub_1C372B4(titleInfo);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0);
}


void MyRoomControl___EndLoadPhotoAsset_b__401_3(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void MyRoomControl___ExchangePosition_b__436_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  unsigned __int64 v3; // x21
  char v4; // w9
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  char v6; // w28
  PhotoStandFigureComponent_o *v7; // x22
  const MethodInfo *v8; // x4
  const MethodInfo *v9; // x5
  UnityEngine_GameObject_o *v10; // x0
  UnityEngine_GameObject_o *v11; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v13; // x21
  UnityEngine_GameObject_o *v14; // x22
  const MethodInfo *v15; // x2
  CommonUI_o *v16; // x19
  UnityEngine_Vector3_o v17; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o position; // [xsp+10h] [xbp-70h] BYREF
  float scale; // [xsp+2Ch] [xbp-54h] BYREF
  UnityEngine_Vector3_o PhotoCampaignMasterPosition; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3E405 & 1) == 0 )
  {
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    this = (MyRoomControl_o *)sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E405 = 1;
  }
  position.fields.z = 0.0;
  *(_QWORD *)&position.fields.x = 0;
  scale = 0.0;
  v17.fields.z = 0.0;
  *(_QWORD *)&v17.fields.x = 0;
  v3 = 0;
  v4 = 1;
  do
  {
    photoStandFigures = v2->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_28;
    v6 = v4;
    if ( v3 >= LODWORD(photoStandFigures->max_length) )
      sub_1C372BC(this);
    this = (MyRoomControl_o *)v2->fields.photoTargetList;
    if ( !this )
      goto LABEL_28;
    v7 = photoStandFigures->m_Items[v3];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                v3,
                                (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    switch ( (_DWORD)this )
    {
      case 2:
        MyRoomControl__GetPhotoStaffPosition(v2, v7, v3, &v17, v8);
        if ( !v7 )
          goto LABEL_28;
        this = (MyRoomControl_o *)v7->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPosition(gameObject, v17, 0);
        this = (MyRoomControl_o *)v7->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( !byte_4C3C926 )
        {
          sub_1C37058(&UnityEngine_Vector3_TypeInfo);
          byte_4C3C926 = 1;
        }
        GameObjectExtensions__SetLocalScale(v13, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
        break;
      case 1:
        this = (MyRoomControl_o *)v2->fields.photoMasterTexture;
        if ( !this )
          goto LABEL_28;
        v14 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        PhotoCampaignMasterPosition = MyRoomControl__GetPhotoCampaignMasterPosition(v2, v3, v15);
        GameObjectExtensions__SetLocalPosition(v14, PhotoCampaignMasterPosition, 0);
        break;
      case 0:
        MyRoomControl__GetPhotoCampaignServantPositionAndScale(v2, v7, v3, &position, &scale, v9);
        if ( !v7 )
          goto LABEL_28;
        this = (MyRoomControl_o *)v7->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v10 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalPosition(v10, position, 0);
        this = (MyRoomControl_o *)v7->fields.photoStandFigureBack;
        if ( !this )
          goto LABEL_28;
        v11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        GameObjectExtensions__SetLocalScale_36134400(v11, scale, 0);
        break;
    }
    v4 = 0;
    v3 = 1;
  }
  while ( (v6 & 1) != 0 );
  this = (MyRoomControl_o *)v2->fields.photoSettingButtonComponent;
  if ( !this )
    goto LABEL_28;
  PhotoSettingButtonComponent__DispSettingButton(
    (PhotoSettingButtonComponent_o *)this,
    v2->fields.photoTargetList,
    v2->fields.photoStandFigures,
    v2->fields.isChangePhotoPosition,
    v2->fields.isOneShot,
    0);
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v16 )
LABEL_28:
    sub_1C372B4(this);
  CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
}


void MyRoomControl___GoToTitle_b__332_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
{
  void *Instance; // x0
  MyRoomControl_o *v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *v7; // x19
  AvalonSceneManager_c *v8; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v10; // x20
  Il2CppObject *v11; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C3E3FD & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__GoToTitle_b__332_1__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E3FD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v5, v6);
    v7 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = AvalonSceneManager_TypeInfo;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v8 = AvalonSceneManager_TypeInfo;
    }
    Instance = MyRoomControl___c_TypeInfo;
    DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      Instance = MyRoomControl___c_TypeInfo;
    }
    v10 = *(System_Action_o **)(*((_QWORD *)Instance + 23) + 48LL);
    if ( !v10 )
    {
      if ( !*((_DWORD *)Instance + 56) )
      {
        j_il2cpp_runtime_class_init_0(Instance);
        Instance = MyRoomControl___c_TypeInfo;
      }
      v11 = (Il2CppObject *)**((_QWORD **)Instance + 23);
      v10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v10, v11, Method_MyRoomControl___c__GoToTitle_b__332_1__, 0);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__332_1 = v10;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__332_1, (int32_t)v10, v13, v14);
    }
    if ( v7 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v7, 1, DEFAULT_FADE_TIME, v10, 0);
      return;
    }
LABEL_16:
    sub_1C372B4(Instance);
  }
}


bool MyRoomControl___InitServantMenu_b__289_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C372B4(this);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void MyRoomControl___LoadServantForm_b__266_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3
  int32_t mState; // w8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v6; // x21
  StandFigureBack_o *SvtStandFigure; // x0
  unsigned int localPosition; // s0
  float v9; // s8
  float y; // s9
  const MethodInfo *v11; // x3
  UnityEngine_Vector3_o v12; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E3F9 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__LoadServantForm_b__266_1__);
    sub_1C37058(&StringLiteral_8476/*"LoadServantFormEnd"*/);
    byte_4C3E3F9 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_1__, 0);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v6, 0);
      return;
    }
LABEL_18:
    sub_1C372B4(SvtStandFigure);
  }
  if ( (unsigned int)(mState - 1) > 1 )
  {
    MyRoomControl__LoadServantFormEnd(this, method);
    return;
  }
  SvtStandFigure = this->fields.standFigureBack;
  if ( !SvtStandFigure )
    goto LABEL_18;
  StandFigureBack__Fadein(SvtStandFigure, 0, 0);
  SvtStandFigure = this->fields.standFigureBack;
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)StandFigureBack__GetSvtStandFigure(SvtStandFigure, 0, 0);
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)SvtStandFigure->fields.basePanel;
  if ( !SvtStandFigure )
    goto LABEL_18;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_Component__get_transform(
                                          (UnityEngine_Component_o *)SvtStandFigure,
                                          0);
  if ( !SvtStandFigure )
    goto LABEL_18;
  localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  v9 = *(float *)&localPosition;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v12 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0);
  SvtStandFigure = (StandFigureBack_o *)this->fields.svtObj;
  if ( !SvtStandFigure )
    goto LABEL_18;
  y = v12.fields.y;
  SvtStandFigure = (StandFigureBack_o *)UnityEngine_GameObject__get_transform(
                                          (UnityEngine_GameObject_o *)SvtStandFigure,
                                          0);
  if ( !SvtStandFigure )
    goto LABEL_18;
  v13 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)SvtStandFigure, 0);
  v13.fields.x = -v9;
  v13.fields.y = y;
  MyRoomControl__moveControl(this, this->fields.svtObj, v13, (System_String_o *)StringLiteral_8476/*"LoadServantFormEnd"*/, v11);
}


void MyRoomControl___OnClickBack_b__339_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomStateMaterial_o *mStateMaterial; // x0
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x1

  mStateMaterial = this->fields.mStateMaterial;
  this->fields.type = 1;
  if ( !mStateMaterial )
    sub_1C372B4(0);
  MyRoomStateMaterial__GalleryBack(mStateMaterial, 0, 0);
  MyRoomControl__setSvtFigureActive(this, 1, 1, v4);
  MyRoomControl__setDefSvtPos(this, v5);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfo, 1, 0);
}


void MyRoomControl___OnClickBack_b__339_1(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void MyRoomControl___OnClickBack_b__339_2(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 1, v2);
}


void MyRoomControl___OnClickBack_b__339_3(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t targetChangeAnotherTargetType; // w20
  bool targetChangeIsLeft; // w21
  System_Action_o *v5; // x22
  const MethodInfo *v6; // x4

  if ( (byte_4C3E3FE & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__OnClickBack_b__339_4__);
    byte_4C3E3FE = 1;
  }
  targetChangeAnotherTargetType = this->fields.targetChangeAnotherTargetType;
  targetChangeIsLeft = this->fields.targetChangeIsLeft;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__OnClickBack_b__339_4__, 0);
  MyRoomControl__OpenChangeTargetSelectDialog(this, targetChangeAnotherTargetType, targetChangeIsLeft, v5, v6);
}


void MyRoomControl___OnClickBack_b__339_4(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void MyRoomControl___OnClickChangeBg_b__450_0(MyRoomControl_o *this, const MethodInfo *method)
{
  void *soundPlayerComp; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x0
  MyRoomBackGroundManager_o *backGroundManager; // x19
  System_Action_o *v8; // x20
  Il2CppObject *v9; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  if ( (byte_4C3E406 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__OnClickChangeBg_b__450_1__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E406 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_14;
  SoundPlayerComponent__InitPlaySoundData((SoundPlayerComponent_o *)soundPlayerComp, 0);
  MyRoomControl__SetupFrontObject(this, v4);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v5);
  SoundManager__playBgm(MyRoomBgm, 0);
  soundPlayerComp = MyRoomControl___c_TypeInfo;
  backGroundManager = this->fields.backGroundManager;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    soundPlayerComp = MyRoomControl___c_TypeInfo;
  }
  v8 = *(System_Action_o **)(*((_QWORD *)soundPlayerComp + 23) + 112LL);
  if ( !v8 )
  {
    if ( !*((_DWORD *)soundPlayerComp + 56) )
    {
      j_il2cpp_runtime_class_init_0(soundPlayerComp);
      soundPlayerComp = MyRoomControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)**((_QWORD **)soundPlayerComp + 23);
    v8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v8, v9, Method_MyRoomControl___c__OnClickChangeBg_b__450_1__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__450_1 = v8;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__450_1, (int32_t)v8, v11, v12);
  }
  if ( !backGroundManager )
LABEL_14:
    sub_1C372B4(soundPlayerComp);
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v8, 0);
}


void MyRoomControl___OnClickSelectMultipleServant_b__373_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1C372B4(0);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void MyRoomControl___OpenTargetSelectDialogLeftOnPhotoMode_b__431_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void MyRoomControl___OpenTargetSelectDialogRightOnPhotoMode_b__432_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void MyRoomControl___OverrideAccountLinkage_b__319_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0

  if ( (byte_4C3E3FA & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E3FA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0, 0),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0) )
  {
    sub_1C372B4(Instance);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0);
}


void MyRoomControl___TransitionMyRoomTop_b__425_0(MyRoomControl_o *this, const MethodInfo *method)
{
  void *titleInfo; // x0
  struct TitleInfoControl_o *v4; // x8
  const MethodInfo *v5; // x2
  MyRoomControl___c_c *v6; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x20
  System_Action_object__o *_9__425_1; // x21
  Il2CppObject *v9; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v19; // x21
  Il2CppObject *v20; // x22
  struct MyRoomControl___c_StaticFields *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v24; // x8
  int32_t size; // w2
  int v26; // w9
  System_Action_o *v27; // x20
  const MethodInfo *v28; // x4

  if ( (byte_4C3E402 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoLayerChangeComponent__TypeInfo);
    sub_1C37058(&System_Action_PhotoStandFigureComponent__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
    sub_1C37058(&Method_MyRoomControl__TransitionMyRoomTop_b__425_3__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__TransitionMyRoomTop_b__425_1__);
    sub_1C37058(&Method_MyRoomControl___c__TransitionMyRoomTop_b__425_2__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E402 = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)titleInfo, 1, 43, 0, 0);
  v4 = this->fields.titleInfo;
  if ( !v4 )
    goto LABEL_34;
  titleInfo = v4->fields.headerBgImg;
  if ( !titleInfo )
    goto LABEL_34;
  titleInfo = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
  if ( !titleInfo )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 1, 0);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__setDispParticleObj((TitleInfoControl_o *)titleInfo, 1, 0);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v5);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__FrameIn((TitleInfoControl_o *)titleInfo, 1, 0);
  v6 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v6 = MyRoomControl___c_TypeInfo;
  }
  _9__425_1 = (System_Action_object__o *)v6->static_fields->__9__425_1;
  if ( !_9__425_1 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = MyRoomControl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__425_1 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__425_1, v9, Method_MyRoomControl___c__TransitionMyRoomTop_b__425_1__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__425_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__425_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__425_1, (int32_t)_9__425_1, v11, v12);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__425_1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0, 0) )
  {
    p_photoMasterTexture = &this->fields.photoMasterTexture;
    titleInfo = this->fields.photoMasterTexture;
    if ( !titleInfo )
      goto LABEL_34;
    UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)titleInfo, 0);
    titleInfo = *p_photoMasterTexture;
    if ( !*p_photoMasterTexture )
      goto LABEL_34;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)titleInfo, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
    *p_photoMasterTexture = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, 0, v16, v17);
  }
  titleInfo = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    titleInfo = MyRoomControl___c_TypeInfo;
  }
  v19 = *(System_Action_object__o **)(*((_QWORD *)titleInfo + 23) + 80LL);
  if ( !v19 )
  {
    if ( !*((_DWORD *)titleInfo + 56) )
    {
      j_il2cpp_runtime_class_init_0(titleInfo);
      titleInfo = MyRoomControl___c_TypeInfo;
    }
    v20 = (Il2CppObject *)**((_QWORD **)titleInfo + 23);
    v19 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v19, v20, Method_MyRoomControl___c__TransitionMyRoomTop_b__425_2__, 0);
    v21 = MyRoomControl___c_TypeInfo->static_fields;
    v21->__9__425_2 = (struct System_Action_PhotoLayerChangeComponent__o *)v19;
    sub_1C36FFC((CGThumbnailListItem_o *)&v21->__9__425_2, (int32_t)v19, v22, v23);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v19,
          (const MethodInfo_37A3A64 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (v24 = this->fields.instantiateLayerChangeObjList) == 0) )
  {
LABEL_34:
    sub_1C372B4(titleInfo);
  }
  size = v24->fields._size;
  v26 = v24->fields._version + 1;
  v24->fields._size = 0;
  v24->fields._version = v26;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v24->fields._items, 0, size, 0);
  v27 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v27, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_3__, 0);
  MyRoomControl__DispDefaultMyRoom(this, 1, v27, 1, v28);
}


void MyRoomControl___TransitionMyRoomTop_b__425_3(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4C3E403 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__TransitionMyRoomTop_b__425_4__);
    byte_4C3E403 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_4__, 0);
  MyRoomControl__SetFavoriteSvt(this, v3, 1, v4);
}


void MyRoomControl___TransitionMyRoomTop_b__425_4(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0

  if ( (byte_4C3E404 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__TransitionMyRoomTop_b__425_5__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E404 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_5__, 0);
  if ( !v5 )
    sub_1C372B4(v8);
  CommonUI__maskFadein(v5, DEFAULT_FADE_TIME, v7, 0);
}


void MyRoomControl___TransitionMyRoomTop_b__425_5(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
}


void MyRoomControl___hideFavoriteSvt_b__324_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E3FC & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C3E3FC = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void MyRoomControl___hideSvtFigure_b__249_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E3F8 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_7251/*"HIDE_END"*/);
    byte_4C3E3F8 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7251/*"HIDE_END"*/, 0);
}


bool MyRoomControl___initMaterial_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C372B4(this);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void MyRoomControl___setMySvtFigure_b__240_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v4; // x8

  if ( (byte_4C3E3F7 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    sub_1C37058(&StringLiteral_8293/*"LOAD_END_TO_HELP"*/);
    byte_4C3E3F7 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  if ( this->fields.type == 6 )
    v4 = (System_String_o **)&StringLiteral_8293/*"LOAD_END_TO_HELP"*/;
  else
    v4 = (System_String_o **)&StringLiteral_8292/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v4, 0);
}


void MyRoomControl___setupSvtRand_b__222_0(MyRoomControl_o *this, System_String_o *result, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E3F6 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E3F6 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
}


void MyRoomControl__callbackChangeName(MyRoomControl_o *this, System_String_o *result, const MethodInfo *method)
{
  MyRoomControl_o **v4; // x19
  __int64 *v5; // x8

  v4 = (MyRoomControl_o **)this;
  if ( (byte_4C3E38B & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11084/*"REQUEST_OK"*/);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    this = (MyRoomControl_o *)sub_1C37058(&StringLiteral_11082/*"REQUEST_NG"*/);
    byte_4C3E38B = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_63596960(result, (System_String_o *)StringLiteral_22382/*"ok"*/, 0) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0);
      this = v4[5];
      if ( this )
      {
        v5 = &StringLiteral_11082/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1C372B4(this);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v5 = &StringLiteral_11084/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v5, 0);
}


void MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4C3E39D & 1) == 0 )
  {
    sub_1C37058(&TutorialFlag_TypeInfo);
    byte_4C3E39D = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(128, 0) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0, 0, 0, 0, 0, 0);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1C372B4(0);
    MyRoomHelpListViewManager__CreateList(helpListViewManager, 0);
  }
}


void MyRoomControl__closeMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  UnityEngine_Collider_o *maskBoxCollider; // x0

  this->fields._IsGallery_k__BackingField = 0;
  MyRoomControl__SetState(this, 1, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1C372B4(0);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0);
}


void MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1C372B4(0);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0);
}


void MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *svtCtr; // x0

  svtCtr = (char *)this->fields.svtCtr;
  if ( !svtCtr
    || (*((_QWORD *)svtCtr + 11) = 0,
        sub_1C36FFC((CGThumbnailListItem_o *)(svtCtr + 88), 0, v2, v3),
        (svtCtr = (char *)this->fields.standFigureBack) == 0) )
  {
    sub_1C372B4(svtCtr);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0);
}


void MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E389 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_11473/*"SAVE_END"*/);
    byte_4C3E389 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11473/*"SAVE_END"*/, 0);
}


System_String_o *MyRoomControl__getChangeMyRoomBgm(const MethodInfo *method)
{
  MyRoomControl_c *v1; // x0
  System_String_o *DEFAULT_BGM_NAME; // x19
  Il2CppObject *Instance; // x0
  Il2CppObject *MasterData_object; // x20
  int32_t v5; // w0
  int32_t v6; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3E367 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_BgmMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_MyRoomAddMaster___);
    sub_1C37058(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E367 = 1;
  }
  v1 = MyRoomControl_TypeInfo;
  entity = 0;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v1 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v1->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId((const MethodInfo *)MasterData_object);
  if ( !MasterData_object )
    goto LABEL_14;
  v5 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0);
  if ( v5 )
  {
    v6 = v5;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v6,
                                 (const MethodInfo_33A10EC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1C372B4(Instance);
    }
  }
  return DEFAULT_BGM_NAME;
}


System_String_o *MyRoomControl__getMyRoomBgm(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  System_String_o *v4; // x0
  SoundPlayerComponent_o *soundPlayerComp; // x8
  System_String_o *v6; // x19
  System_String_o *PlaySoundName; // x20

  if ( (byte_4C3E368 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E368 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C372B4(v4);
  v6 = v4;
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0) )
    return v6;
  else
    return PlaySoundName;
}


UIStandFigureR_o *MyRoomControl__getSvtStandFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0

  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    sub_1C372B4(0);
  return StandFigureBack__GetSvtStandFigure(standFigureBack, 0, 0);
}


ServantVoiceEntity_o *MyRoomControl__getSvtVoiceEnt(
        MyRoomControl_o *this,
        bool limitCntReset,
        const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  MyRoomData_o *myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v13; // w8
  struct System_Collections_Generic_List_int__o *v15; // x8
  MyRoomControl_c *v16; // x0
  int32_t v17; // w8
  MyRoomControl_c *v18; // x0
  int32_t v19; // w20
  int32_t Item; // w0
  StandFigureBack_c *v21; // x8
  int32_t v22; // w22
  int32_t LimitCountByImageLimit; // w21
  Il2CppObject *Master_object; // x0
  int32_t figureSvtId; // w19
  MyroomServantSpecialImageMaster_o *v26; // x23
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E37B & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StandFigureBack_TypeInfo);
    byte_4C3E37B = 1;
  }
  entity = 0;
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v6, v7);
  usrData = this->fields.usrData;
  if ( !usrData )
    goto LABEL_45;
  favoriteUserSvtId = usrData->fields.favoriteUserSvtId;
  this->fields.fvrUsrSvtId = favoriteUserSvtId;
  if ( favoriteUserSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0);
  if ( myRoomData )
  {
    if ( limitCntReset )
    {
      imageIdList = this->fields.imageIdList;
      if ( !imageIdList )
        goto LABEL_45;
      figureSvtDispIdx = this->fields.figureSvtDispIdx;
      if ( figureSvtDispIdx + 1 < imageIdList->fields._size )
        v13 = figureSvtDispIdx + 1;
      else
        v13 = 0;
      this->fields.figureSvtDispIdx = v13;
    }
    else
    {
      v15 = this->fields.imageIdList;
      if ( !v15 )
        goto LABEL_45;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v15->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_45;
        v29.fields.r = 0.5;
        v29.fields.g = 0.5;
        v29.fields.b = 0.5;
        v29.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v29, 0);
        v18 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v18 = MyRoomControl_TypeInfo;
        }
        v17 = this->fields.buttonFlag & ~v18->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_45;
        v28.fields.r = 1.0;
        v28.fields.g = 1.0;
        v28.fields.b = 1.0;
        v28.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v28, 0);
        v16 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v16 = MyRoomControl_TypeInfo;
        }
        v17 = this->fields.buttonFlag | v16->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v17;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0);
  if ( !this->fields.imageIdList )
    goto LABEL_45;
  v19 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  v21 = StandFigureBack_TypeInfo;
  v22 = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v21 = StandFigureBack_TypeInfo;
  }
  LimitCountByImageLimit = v22;
  if ( v22 < v21->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v22, 0);
  }
  if ( v22 < 201 )
    goto LABEL_41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v26 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v22, 0);
  if ( !v26 )
LABEL_45:
    sub_1C372B4(myRoomData);
  myRoomData = (MyRoomData_o *)MyroomServantSpecialImageMaster__TryGetEntity(
                                 v26,
                                 &entity,
                                 figureSvtId,
                                 (int32_t)myRoomData,
                                 0);
  if ( ((unsigned __int8)myRoomData & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_45;
    LimitCountByImageLimit = entity->fields.baseLimitCount;
  }
LABEL_41:
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !myRoomData )
    goto LABEL_45;
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v19, LimitCountByImageLimit, 0);
}


int32_t MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4C3E384 & 1) == 0 )
  {
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E384 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C372B4(0);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v9, 0);
}


bool MyRoomControl__get_IsGallery(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields._IsGallery_k__BackingField;
}


void MyRoomControl__helpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0
  NetworkManager_ResultCallbackFunc_o *v4; // x20

  if ( (byte_4C3E3A0 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_EndTurorialRequest__);
    sub_1C37058(&Method_NetworkManager_getRequest_TutorialSetRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&TutorialFlag_TypeInfo);
    sub_1C37058(&StringLiteral_22382/*"ok"*/);
    byte_4C3E3A0 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_40427704(128, 0) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0);
      return;
    }
LABEL_12:
    sub_1C372B4(helpListViewManager);
  }
  v4 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v4,
                                                         (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
  if ( !helpListViewManager )
    goto LABEL_12;
  TutorialSetRequest__beginRequest((TutorialSetRequest_o *)helpListViewManager, 128, 0);
  EventTutorialMaster__CheckTutorial(0, 74, 0, 0, 0, 0, 0, 0);
}


void MyRoomControl__hideContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  ContinueDeviceComponent_o *continueDeviceComp; // x0

  continueDeviceComp = this->fields.continueDeviceComp;
  if ( !continueDeviceComp )
    sub_1C372B4(0);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0);
}


void MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x3

  if ( (byte_4C3E398 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__hideFavoriteSvt_b__324_0__);
    byte_4C3E398 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__324_0__, 0);
  MyRoomControl__SetFavoriteSvt(this, v3, 1, v4);
}


void MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1C372B4(0);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0);
}


void MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1C372B4(0);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0);
}


void MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1C372B4(0);
  SetGameOptionComponent__hideGameOption(optionComp, 0);
}


void MyRoomControl__hideProfile(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp
    || (MstProfileComponent__hideMstProfile(mstPfComp, 0),
        (mstPfComp = (MstProfileComponent_o *)this->fields.mstpfObj) == 0) )
  {
    sub_1C372B4(mstPfComp);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0);
}


void MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1C372B4(0);
  SerialCodeComponent__hideMenu(serialCodeComp, 0);
}


void MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4C3E39A & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_3514/*"CLOSE_MENU"*/);
    byte_4C3E39A = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1C372B4(0);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3514/*"CLOSE_MENU"*/, 0);
}


void MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4C3E39B & 1) == 0 )
  {
    sub_1C37058(&SoundManager_TypeInfo);
    byte_4C3E39B = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0), (soundPlayerComp = this->fields.soundPlayerComp) == 0) )
  {
    sub_1C372B4(soundPlayerComp);
  }
  PlaySoundName = SoundPlayerComponent__getPlaySoundName(soundPlayerComp, 0);
  if ( System_String__IsNullOrEmpty(PlaySoundName, 0) )
  {
    MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v5);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__playBgm(MyRoomBgm, 0);
  }
}


void MyRoomControl__hideSvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v7; // x21
  UnityEngine_Color_o v8; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C3E37E & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__hideSvtFigure_b__249_0__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E37E = 1;
  }
  playBtnImg = (UIWidget_o *)this->fields.playBtnImg;
  if ( !playBtnImg )
    goto LABEL_8;
  v8.fields.r = 0.5;
  v8.fields.g = 0.5;
  v8.fields.b = 0.5;
  v8.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v8, 0);
  v5 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v5 = MyRoomControl_TypeInfo;
  }
  this->fields.buttonFlag &= ~v5->static_fields->BUTTON_VOICE_PLAY;
  MyRoomControl__BlockTouch(this, v4);
  standFigureBack = this->fields.standFigureBack;
  v7 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__249_0__, 0);
  if ( !standFigureBack )
LABEL_8:
    sub_1C372B4(playBtnImg);
  StandFigureBack__Fadeout(standFigureBack, v7, 0);
}


void MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1C372B4(0);
  UserServantCoinComponent__hideMenu(userServantCoinComp, 0);
}


void MyRoomControl__hideUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserItemListViewManager_o *usrItemListViewManager; // x0

  usrItemListViewManager = this->fields.usrItemListViewManager;
  if ( !usrItemListViewManager
    || (UserItemListViewManager__DestroyList(usrItemListViewManager, 0),
        (usrItemListViewManager = this->fields.usrItemListViewManager) == 0)
    || (usrItemListViewManager = (UserItemListViewManager_o *)UnityEngine_Component__get_gameObject(
                                                                (UnityEngine_Component_o *)usrItemListViewManager,
                                                                0)) == 0 )
  {
    sub_1C372B4(usrItemListViewManager);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)usrItemListViewManager, 0, 0);
}


System_Collections_IEnumerator_o *MyRoomControl__initMaterial(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4C3E38F & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__initMaterial_d__287_TypeInfo);
    byte_4C3E38F = 1;
  }
  v3 = sub_1C372A4(MyRoomControl__initMaterial_d__287_TypeInfo);
  MyRoomControl__initMaterial_d__287___ctor((MyRoomControl__initMaterial_d__287_o *)v3, 0, 0);
  if ( !v3 )
    sub_1C372B4(v4);
  *(_QWORD *)(v3 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v3;
}


void MyRoomControl__initMyRoom(MyRoomControl_o *this, const MethodInfo *method)
{
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v4; // x2
  CStateManager_T__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v9; // x21
  Il2CppObject *MasterData_object; // x0
  struct EventMaster_o **p_eventMaster; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v17; // x22
  Il2CppObject *v18; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  _BOOL8 v22; // x0
  const MethodInfo *v23; // x4
  MyRoomControl_o *v24; // x0
  const MethodInfo *v25; // x4
  MyRoomParamsManager_c *v26; // x0
  MyRoomControl_c *v27; // x0
  const MethodInfo *v28; // x1
  const MethodInfo *v29; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v32; // x22
  const MethodInfo *v33; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v37; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  __int64 v40; // x8
  int v41; // w8
  const MethodInfo *v42; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v44; // x21
  int max_length; // w9
  int m_CancellationTokenSource; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v49; // x1
  const MethodInfo *v50; // x2
  const MethodInfo *v51; // x1
  MyRoomControl___c_c *v52; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x21
  System_Action_object__o *_9__217_1; // x22
  Il2CppObject *v55; // x23
  struct MyRoomControl___c_StaticFields *v56; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v64; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v66; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  System_Collections_Generic_Dictionary_int__object__o *v69; // x22
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  System_Collections_Generic_Dictionary_int__object__o *v72; // x22
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v76; // x1
  System_Collections_Generic_List_T__o *v77; // x20
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  System_Collections_Generic_List_T__o *v80; // x20
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  System_Collections_Generic_List_object__o *v83; // x20
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  const MethodInfo *v86; // x2
  const MethodInfo *v87; // x1
  UnityEngine_Vector3_o v88; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E362 & 1) == 0 )
  {
    sub_1C37058(&System_Action_PhotoStandFigureComponent__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AtlasManager_TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
    sub_1C37058(&Method_CStateManager_MyRoomControl___ctor__);
    sub_1C37058(&Method_CStateManager_MyRoomControl__add__);
    sub_1C37058(&CStateManager_MyRoomControl__TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_EventMaster___);
    sub_1C37058(&Method_DataManager_GetMaster_UserServantMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    sub_1C37058(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    sub_1C37058(&System_Collections_Generic_List_AssetData__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_LoadScriptFileListAssetData__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&SoundManager_TypeInfo);
    sub_1C37058(&MyRoomControl_StateEtc_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__initMyRoom_b__217_0__);
    sub_1C37058(&Method_MyRoomControl___c__initMyRoom_b__217_1__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_10355/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/);
    sub_1C37058(&StringLiteral_17444/*"btn_bg_12"*/);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    sub_1C37058(&StringLiteral_8822/*"MULTIPLE_VIEW_BUTTON_TEXT"*/);
    byte_4C3E362 = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0;
  v88.fields.z = 0.0;
  *(_QWORD *)&v88.fields.x = 0;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_60;
  StandFigureBack__Init(standFigureBack, 0);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
      return;
    }
    goto LABEL_60;
  }
  if ( !this->fields.mFSM )
  {
    v5 = (CStateManager_T__o *)sub_1C372A4(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v5,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_332CF70 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v5;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v5, v6, v7);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_60;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_332D018 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v9 = (MyRoomControl_StateEtc_o *)sub_1C372A4(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v9, 0);
    if ( !mFSM )
      goto LABEL_60;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v9,
      (const MethodInfo_332D018 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v4);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)standFigureBack,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)MasterData_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.eventMaster, (int32_t)MasterData_object, v12, v13);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_60;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0, 43, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_60;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)standFigureBack, 30, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomListCtr;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomListControl__Setup((MyRoomListControl_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.voiceClickCollider;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0);
  this->fields.isHeroineReave = 0;
  *(_WORD *)&this->fields.isServantMaterial = 0;
  *(_DWORD *)&this->fields.isVoiceLoading = 0;
  this->fields.isExistVoiceData = 1;
  this->fields.materialServantId = -1;
  this->fields._IsGallery_k__BackingField = 0;
  MyRoomControl__setUserStInfoView(this, v14);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0);
  GameObjectExtensions__SetLocalPosition(mMainObj, LocalPosition, 0);
  mMaterialEventLogListViewManager = this->fields.mMaterialEventLogListViewManager;
  standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
  }
  v17 = *(System_Action_o **)(*(_QWORD *)&standFigureBack[1].fields.isFirstLoading + 8LL);
  if ( !v17 )
  {
    if ( !LODWORD(standFigureBack[2].fields.m_CachedPtr) )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
    }
    v18 = **(Il2CppObject ***)&standFigureBack[1].fields.isFirstLoading;
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_MyRoomControl___c__initMyRoom_b__217_0__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__217_0 = v17;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__217_0, (int32_t)v17, v20, v21);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_60;
  v22 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v17, 0);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v22,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v23);
  MyRoomControl__setupSortWindowUIMoveData(v24, this->fields.sortWindowObj, &v, &v88, v25);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__Load_SaveData(0);
  MyRoomParamsManager__LoadIsListActive(0);
  if ( !byte_4C3E407 )
  {
    sub_1C37058(&MyRoomParamsManager_TypeInfo);
    byte_4C3E407 = 1;
  }
  v26 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v26 = MyRoomParamsManager_TypeInfo;
  }
  this->fields.IsListActive = v26->static_fields->_IsListActive_k__BackingField;
  v27 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__SetBackGroundData((const MethodInfo *)v27);
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  if ( !standFigureBack )
    goto LABEL_60;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0);
  MyRoomControl__SetupFrontObject(this, v28);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v29);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0);
  backGroundManager = this->fields.backGroundManager;
  v32 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0);
  if ( !backGroundManager )
    goto LABEL_60;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v32, 0);
  MyRoomControl__setupSvtImageIdList(this, v33);
  standFigureBack = (StandFigureBack_o *)this->fields.helpListViewManager;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomHelpListViewManager__LoadBaseSprite((MyRoomHelpListViewManager_o *)standFigureBack, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
  if ( !this->fields.isSetVoicePlayButtonDefaultPos )
  {
    this->fields.voicePlayButtonDefaultPos = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0);
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  *(_QWORD *)&this->fields.voicePlayBtnInitPos.fields.x = *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x;
  this->fields.voicePlayBtnInitPos.fields.z = this->fields.voicePlayButtonDefaultPos.fields.z;
  v93 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v93;
  v94 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v94;
  v95 = GameObjectExtensions__GetLocalPosition(helpBtn, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v95;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
  inited = MyRoomControl__InitMaterialOnBackground(this, v37);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, inited, 0);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17444/*"btn_bg_12"*/, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_60;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.parent)(
    standFigureBack,
    standFigureBack->klass[2]._1.generic_class);
  this->fields.eventButtonInitPos = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0);
  standFigureBack = (StandFigureBack_o *)MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    standFigureBack = (StandFigureBack_o *)MyRoomControl_TypeInfo;
  }
  v40 = *(_QWORD *)(*(_QWORD *)&standFigureBack[1].fields.isFirstLoading + 48LL);
  if ( !v40 )
    goto LABEL_60;
  v41 = *(_DWORD *)(v40 + 24);
  standFigureBack = (StandFigureBack_o *)this->fields.changeBgButton;
  this->fields.isEnableChangeBg = v41 > 1;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, v41 > 1, 0);
  if ( this->fields.isEnableChangeBg )
  {
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.changeBgButton, v42);
    this->fields.changeBgButtonInitPos = GameObjectExtensions__GetLocalPosition(this->fields.changeBgButton, 0);
  }
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_60;
  v44 = 0;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v44 >= max_length )
      break;
    if ( (unsigned int)v44 >= max_length )
      goto LABEL_97;
    standFigureBack = multipleStandFigureBacks->m_Items[v44];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v44;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_60;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewCloseButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewDisableUiButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
  standFigureBack = (StandFigureBack_o *)*p_eventMaster;
  if ( !*p_eventMaster )
    goto LABEL_60;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView((EventMaster_o *)standFigureBack, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (StandFigureBack_o *)UserServantMaster__getOrganizationList(
                                                 (UserServantMaster_o *)standFigureBack,
                                                 0)) == 0
    || (m_CancellationTokenSource = (int)standFigureBack->fields.m_CancellationTokenSource,
        standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = m_CancellationTokenSource > 1,
        !standFigureBack) )
  {
LABEL_60:
    sub_1C372B4(standFigureBack);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8822/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0);
    if ( !multipleViewButtonLabel )
      goto LABEL_60;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_60;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v49);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v50);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(this->fields.multipleViewButton, 0);
    MyRoomControl__SetMultipleViewButtonColor(this, v51);
  }
  v52 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v52 = MyRoomControl___c_TypeInfo;
  }
  _9__217_1 = (System_Action_object__o *)v52->static_fields->__9__217_1;
  if ( !_9__217_1 )
  {
    if ( !v52->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v52);
      v52 = MyRoomControl___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v52->static_fields->__9;
    _9__217_1 = (System_Action_object__o *)sub_1C372A4(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__217_1, v55, Method_MyRoomControl___c__initMyRoom_b__217_1__, 0);
    v56 = MyRoomControl___c_TypeInfo->static_fields;
    v56->__9__217_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__217_1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v56->__9__217_1, (int32_t)_9__217_1, v57, v58);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__217_1,
    (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignCameraButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignProduction;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_60;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0, 0);
  standFigureBack = (StandFigureBack_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EnableEntityList,
                                           0);
  photoCampaignButton = this->fields.photoCampaignButton;
  this->fields.isEnablePhotoCampaign = ((unsigned __int8)standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(photoCampaignButton, ((unsigned __int8)standFigureBack ^ 1) & 1, 0);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_60;
    if ( !LODWORD(EnableEntityList->max_length) )
LABEL_97:
      sub_1C372BC(standFigureBack);
    v64 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v64;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoCampaignEntity, (int32_t)v64, v61, v62);
    v66 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v66,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v66;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterEquipAssetData, (int32_t)v66, v67, v68);
    v69 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v69,
      (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v69;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterMaleEquipTexture, (int32_t)v69, v70, v71);
    v72 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1C372A4(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v72,
      (const MethodInfo_33F9BB0 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v72;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.masterFemaleEquipTexture, (int32_t)v72, v73, v74);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10355/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0);
    if ( !photoCampaignButtonLabel )
      goto LABEL_60;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0);
    if ( !*p_photoCampaignEntity )
      goto LABEL_60;
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_60;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               (*p_photoCampaignEntity)->fields.id,
                                               0);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v76);
    v77 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v77,
      (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v77;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.photoTargetList, (int32_t)v77, v78, v79);
    v80 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v80,
      (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.temporaryPhotoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v80;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.temporaryPhotoTargetList, (int32_t)v80, v81, v82);
    v83 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v83,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__);
    this->fields.instantiateLayerChangeObjList = (struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *)v83;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.instantiateLayerChangeObjList, (int32_t)v83, v84, v85);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v86);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v87);
  }
}


bool MyRoomControl__isBattleSetup(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mBattleSetupInfo != 0;
}


void MyRoomControl__materialSvtVoicePlay(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v4; // x1

  v4 = MyRoomControl__svtVoicePlayAct(this, item, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)this, v4, 0);
}


void MyRoomControl__moveControl(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *target,
        UnityEngine_Vector3_o movePos,
        System_String_o *callwhenFinished,
        const MethodInfo *method)
{
  TweenPosition_o *v7; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v7 = TweenPosition__Begin(target, 0.2, movePos, 0);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !v7 )
    sub_1C372B4(gameObject);
  v7->fields.eventReceiver = gameObject;
  sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.eventReceiver, (int32_t)gameObject, v9, v10);
  if ( callwhenFinished )
  {
    v7->fields.callWhenFinished = callwhenFinished;
    sub_1C36FFC((CGThumbnailListItem_o *)&v7->fields.callWhenFinished, (int32_t)callwhenFinished, v11, v12);
  }
  v7->fields.method = 3;
}


void MyRoomControl__onClickHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_c *v3; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  _QWORD *v5; // x0
  int v6; // w20
  System_Reflection_MethodBase_o *v7; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4C3E39E & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_onClickHelp__);
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E39E = 1;
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
    v5 = (_QWORD *)sub_1C37070(Method_MyRoomControl_onClickHelp__);
  v7 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  if ( v6 <= 0 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 2, 0, 0);
  }
  else
  {
    OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0);
    if ( this->fields.isServantMaterial )
    {
      EventTutorialMaster__ShowTutorialWithoutCheck(0, 61, 0, 0, 0);
    }
    else
    {
      helpListViewManager = this->fields.helpListViewManager;
      if ( !helpListViewManager )
        sub_1C372B4(0);
      MyRoomHelpListViewManager__CreateList(helpListViewManager, 0);
    }
  }
}


void MyRoomControl__onClickHelpClose(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  MyRoomHelpListViewManager_o *helpListViewManager; // x20
  MyRoomHelpListViewManager_CallbackFunc2_o *v6; // x21
  __int64 v7; // x0

  if ( (byte_4C3E39F & 1) == 0 )
  {
    sub_1C37058(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_helpClose__);
    sub_1C37058(&Method_MyRoomControl_onClickHelpClose__);
    byte_4C3E39F = 1;
  }
  v3 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C37070(Method_MyRoomControl_onClickHelpClose__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
  helpListViewManager = this->fields.helpListViewManager;
  v6 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1C372A4(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0);
  if ( !helpListViewManager )
    sub_1C372B4(v7);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v6, 0);
}


void MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1C372B4(0);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0);
}


void MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1C372B4(0);
  SoundPlayerComponent__openMenu(soundPlayerComp, 0);
}


void MyRoomControl__playSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t VoiceSvtId; // w0
  int32_t v4; // w19
  MyRoomSvtControl_o *svtCtr; // x0
  System_String_o *v6; // x20
  int32_t FlagRequestNumber; // w0
  int32_t v8; // w20
  Il2CppObject *Request_object; // x21
  __int64 v10; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int m_CancellationTokenSource; // w8

  if ( (byte_4C3E387 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_VoiceMaster___);
    sub_1C37058(&int_____TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&Method_NetworkManager_getRequest_TopMyRoomRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    byte_4C3E387 = 1;
  }
  VoiceSvtId = MyRoomControl__getVoiceSvtId(this, method);
  if ( VoiceSvtId >= 1 )
  {
    v4 = VoiceSvtId;
    svtCtr = this->fields.svtCtr;
    if ( !svtCtr )
      goto LABEL_21;
    v6 = MyRoomSvtControl__playVoice(svtCtr, 0);
    if ( !System_String__IsNullOrEmpty(v6, 0) )
    {
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v4, 0);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0, 0);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_VoiceMaster___);
      if ( !svtCtr )
        goto LABEL_21;
      FlagRequestNumber = VoiceMaster__getFlagRequestNumber((VoiceMaster_o *)svtCtr, v4, v6, 1, 0);
      if ( FlagRequestNumber >= 1 )
      {
        v8 = FlagRequestNumber;
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        Request_object = NetworkManager__getRequest_object_(
                           0,
                           (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v10 = sub_1C37100(int_____TypeInfo, 1);
        svtCtr = (MyRoomSvtControl_o *)sub_1C37100(int___TypeInfo, 2);
        if ( svtCtr )
        {
          m_CancellationTokenSource = (int)svtCtr->fields.m_CancellationTokenSource;
          if ( !m_CancellationTokenSource )
            goto LABEL_22;
          LODWORD(svtCtr->fields.fsm) = v4;
          if ( m_CancellationTokenSource == 1 )
            goto LABEL_22;
          HIDWORD(svtCtr->fields.fsm) = v8;
          if ( !v10 )
            goto LABEL_21;
          if ( !*(_DWORD *)(v10 + 24) )
LABEL_22:
            sub_1C372BC(svtCtr);
          *(_QWORD *)(v10 + 32) = svtCtr;
          sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 32), (int32_t)svtCtr, v11, v12);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v10, 0);
            return;
          }
        }
LABEL_21:
        sub_1C372B4(svtCtr);
      }
    }
  }
}


void MyRoomControl__quit(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialServantId; // w20
  int32_t Item; // w21
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1

  v2 = this;
  if ( (byte_4C3E372 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MyRoomControl_o *)sub_1C37058(&MaterialServantLimitCountManager_TypeInfo);
    byte_4C3E372 = 1;
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
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
    MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0);
    MaterialServantLimitCountManager__WriteData(0);
  }
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.soundPlayerComp;
  if ( !materialImageIdList )
    goto LABEL_17;
  SoundPlayerComponent__DestroyMenu((SoundPlayerComponent_o *)materialImageIdList, 0);
  MyRoomControl__ReleaseSvtVoiceData(v2, v6);
  MyRoomControl__destroySvtFigure(v2, v7);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.backGroundManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomBackGroundManager__QuitBackGround((MyRoomBackGroundManager_o *)materialImageIdList, 0);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.mMaterialEventLogListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MaterialEventLogListViewManager__DestroyList((MaterialEventLogListViewManager_o *)materialImageIdList, 0);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList )
    goto LABEL_17;
  MyRoomHelpListViewManager__DestroyList((MyRoomHelpListViewManager_o *)materialImageIdList, 0);
  materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.helpListViewManager;
  if ( !materialImageIdList
    || (MyRoomHelpListViewManager__ReleaseBaseSprite((MyRoomHelpListViewManager_o *)materialImageIdList, 0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.frontObjectManager) == 0)
    || (MyRoomFrontObjectManager__ReleaseAll((MyRoomFrontObjectManager_o *)materialImageIdList, 0),
        MyRoomControl__ReleasePhotoAsset(v2, v8),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.MaterialEventLogItemListPanel) == 0)
    || (((void (__fastcall *)(System_Collections_Generic_List_int__o *, const MethodInfo *, float))materialImageIdList->klass->vtable._8_unknown.methodPtr)(
          materialImageIdList,
          materialImageIdList->klass->vtable._8_unknown.method,
          1.0),
        (materialImageIdList = (System_Collections_Generic_List_int__o *)v2->fields.valentineListObj) == 0) )
  {
LABEL_17:
    sub_1C372B4(materialImageIdList);
  }
  ((void (__fastcall *)(System_Collections_Generic_List_int__o *, const MethodInfo *, float))materialImageIdList->klass->vtable._8_unknown.methodPtr)(
    materialImageIdList,
    materialImageIdList->klass->vtable._8_unknown.method,
    0.0);
}


void MyRoomControl__reflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x20
  System_Action_o *v4; // x21
  __int64 v5; // x0

  if ( (byte_4C3E388 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl_endReflectionGameOption__);
    byte_4C3E388 = 1;
  }
  optionComp = this->fields.optionComp;
  v4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0);
  if ( !optionComp )
    sub_1C372B4(v5);
  SetGameOptionComponent__reflectionGameOption(optionComp, v4, 0);
}


void MyRoomControl__requestChangeName(MyRoomControl_o *this, const MethodInfo *method)
{
  void *SelfUserGame; // x0
  int32_t v4; // w20
  System_String_o *Value; // x21
  NetworkManager_ResultCallbackFunc_o *v6; // x22
  Il2CppObject *Request_object; // x19

  if ( (byte_4C3E38A & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_callbackChangeName__);
    sub_1C37058(&Method_NetworkManager_getRequest_UserNameChangeRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&StringLiteral_4367/*"ChangeUserName"*/);
    byte_4C3E38A = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame )
    goto LABEL_13;
  if ( !this->fields.myRoomFsm )
    goto LABEL_13;
  v4 = *((_DWORD *)SelfUserGame + 19);
  SelfUserGame = PlayMakerFSM__get_Fsm(this->fields.myRoomFsm, 0);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = (void *)*((_QWORD *)SelfUserGame + 11);
  if ( !SelfUserGame )
    goto LABEL_13;
  SelfUserGame = HutongGames_PlayMaker_FsmVariables__GetFsmString(
                   (HutongGames_PlayMaker_FsmVariables_o *)SelfUserGame,
                   (System_String_o *)StringLiteral_4367/*"ChangeUserName"*/,
                   0);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0);
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1C372B4(SelfUserGame);
  UserNameChangeRequest__beginRequest(
    (UserNameChangeRequest_o *)Request_object,
    Value,
    v4,
    *((System_String_o **)SelfUserGame + 31),
    0);
}


void MyRoomControl__resetProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  MstProfileComponent_o *mstPfComp; // x0

  mstPfComp = this->fields.mstPfComp;
  if ( !mstPfComp )
    sub_1C372B4(0);
  MstProfileComponent__showMstProfile(mstPfComp, 0);
}


void MyRoomControl__resetSvtVoiceData(MyRoomControl_o *this, bool isReset, const MethodInfo *method)
{
  __int64 v5; // x20
  PlayMakerFSM_o *myRoomFsm; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  const MethodInfo *v9; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  PlayMakerFSM_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  ServantVoiceEntity_o *v14; // x22
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v17; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  System_String_o *asstName; // x21
  System_Action_o *v25; // x22
  const MethodInfo *v26; // x3

  if ( (byte_4C3E37F & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass250_0__resetSvtVoiceData_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass250_0_TypeInfo);
    sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    byte_4C3E37F = 1;
  }
  v5 = sub_1C372A4(MyRoomControl___c__DisplayClass250_0_TypeInfo);
  MyRoomControl___c__DisplayClass250_0___ctor((MyRoomControl___c__DisplayClass250_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_13;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(myRoomFsm);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v9);
  *(_QWORD *)(v5 + 24) = SvtVoiceEnt;
  v11 = (PlayMakerFSM_o **)(v5 + 24);
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 24), (int32_t)SvtVoiceEnt, v12, v13);
  v14 = *(ServantVoiceEntity_o **)(v5 + 24);
  if ( !v14 )
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
           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
  VoiceList = MyRoomControl__GetVoiceList(this, v14, figureSvtId, Item, v17);
  this->fields.voiceList = VoiceList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v19, v20);
  myRoomFsm = *v11;
  if ( !*v11 )
    goto LABEL_13;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0);
  this->fields.asstName = VoiceAssetName;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v22, v23);
  asstName = this->fields.asstName;
  v25 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(
    v25,
    (Il2CppObject *)v5,
    Method_MyRoomControl___c__DisplayClass250_0__resetSvtVoiceData_b__0__,
    0);
  MyRoomControl__voiceLoad(this, asstName, v25, v26);
}


void MyRoomControl__setContinueDevice(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 8;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 52, 0, 0),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  ContinueDeviceComponent__showMenu((ContinueDeviceComponent_o *)titleInfo, 0);
}


void MyRoomControl__setDefSvtPos(MyRoomControl_o *this, const MethodInfo *method)
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
  UnityEngine_GameObject_o *servantListObj; // x22
  UnityEngine_GameObject_o *sortWindowObj; // x21
  float v14; // s10
  float v15; // s11
  float v16; // s12
  float v17; // s13
  const MethodInfo *v18; // x2
  const MethodInfo *v19; // x2
  int32_t mState; // w8
  float v21; // s11
  const MethodInfo *v22; // x3
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v24; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v25; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E3A7 & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_setDefSvtPos__);
    byte_4C3E3A7 = 1;
  }
  voicePlayBtn = this->fields.voicePlayBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  isServantMaterial = this->fields.isServantMaterial;
  UnityEngine_GameObject__SetActive(voicePlayBtn, !this->fields.isServantMaterial, 0);
  voicePlayBtn = this->fields.changeLimitBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0);
  voicePlayBtn = this->fields.helpBtn;
  if ( !voicePlayBtn )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(voicePlayBtn, 1, 0);
  if ( !this->fields.mState )
    return;
  v5 = Method_MyRoomControl_setDefSvtPos__;
  if ( (*((_BYTE *)Method_MyRoomControl_setDefSvtPos__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1C37070(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1C3703C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0);
  mMainObj = this->fields.mMainObj;
  LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0);
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
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.materialObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v24 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      y = v24.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(mMainObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v25 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      servantListObj = this->fields.servantListObj;
      if ( !servantListObj )
        goto LABEL_34;
      sortWindowObj = this->fields.sortWindowObj;
      z = v25.fields.z;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(this->fields.servantListObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v26 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      v14 = v26.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(servantListObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      if ( !sortWindowObj )
        goto LABEL_34;
      v15 = v27.fields.z;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      v16 = v28.fields.y;
      voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(sortWindowObj, 0);
      if ( !voicePlayBtn )
        goto LABEL_34;
      v29 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
      v17 = v29.fields.z;
      v29.fields.x = -7.0;
      v29.fields.y = v14;
      v29.fields.z = v15;
      MyRoomControl__MyRoomlUIAnimationStart(this, servantListObj, v29, v18);
      v30.fields.x = 0.0;
      v30.fields.y = v16;
      v30.fields.z = v17;
      MyRoomControl__MyRoomlUIAnimationStart(this, sortWindowObj, v30, v19);
      x = 250.0;
LABEL_20:
      mState = this->fields.mState;
      if ( (unsigned int)(mState - 1) < 2 )
      {
        voicePlayBtn = this->fields.svtObj;
        if ( voicePlayBtn )
        {
          voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0);
          if ( voicePlayBtn )
          {
            v31 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
            voicePlayBtn = this->fields.svtObj;
            if ( voicePlayBtn )
            {
              v21 = v31.fields.y;
              voicePlayBtn = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(voicePlayBtn, 0);
              if ( voicePlayBtn )
              {
                v32 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)voicePlayBtn, 0);
                v32.fields.x = -512.0;
                v32.fields.y = v21;
                MyRoomControl__moveControl(this, this->fields.svtObj, v32, 0, v22);
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
          StandFigureBack__Fadein((StandFigureBack_o *)voicePlayBtn, 0, 0);
          voicePlayBtn = this->fields.voicePlayBtn;
          if ( voicePlayBtn )
          {
            UnityEngine_GameObject__SetActive(voicePlayBtn, !isServantMaterial, 0);
            goto LABEL_30;
          }
        }
LABEL_34:
        sub_1C372B4(voicePlayBtn);
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


void MyRoomControl__setDispMyRoomOptionBtn(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  UnityEngine_GameObject_o *moveBtnObj; // x0
  bool v5; // w21
  bool v7; // w1

  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj )
    goto LABEL_9;
  v5 = isDisp;
  UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0);
  moveBtnObj = this->fields.changeLimitBtn;
  if ( !moveBtnObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(moveBtnObj, v5, 0);
  moveBtnObj = this->fields.helpBtn;
  if ( !moveBtnObj )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0);
  moveBtnObj = this->fields.changeBgButton;
  v7 = isDisp && this->fields.isEnableChangeBg;
  if ( !moveBtnObj )
LABEL_9:
    sub_1C372B4(moveBtnObj);
  UnityEngine_GameObject__SetActive(moveBtnObj, v7, 0);
}


void MyRoomControl__setEnalbeTitleBtn(MyRoomControl_o *this, bool isEnabled, const MethodInfo *method)
{
  UnityEngine_Collider_o *titleBtnCollider; // x0
  bool v6; // w20

  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.titleBtnCollider;
  if ( !titleBtnCollider )
    goto LABEL_8;
  UnityEngine_Collider__set_enabled(titleBtnCollider, isEnabled, 0);
  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !titleBtnCollider )
    goto LABEL_8;
  v6 = !isEnabled;
  UnityEngine_Collider__set_enabled(titleBtnCollider, v6, 0);
  if ( this->fields.type != 5 )
    return;
  titleBtnCollider = (UnityEngine_Collider_o *)this->fields.optionComp;
  if ( !titleBtnCollider )
LABEL_8:
    sub_1C372B4(titleBtnCollider);
  if ( !LODWORD(titleBtnCollider[11].klass) )
    SetGameOptionComponent__SetMaskEnabled((SetGameOptionComponent_o *)titleBtnCollider, v6, 0);
}


// attributes: thunk
void MyRoomControl__setFaceType(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl__SetPlayButtonAnimation(this, method);
}


void MyRoomControl__setFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 9;
  MyRoomControl__setSvtFigureActive(this, 9, 1, v3);
}


void MyRoomControl__setGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 5;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 49, 0, 0),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  SetGameOptionComponent__showGameOption((SetGameOptionComponent_o *)titleInfo, 0);
}


// local variable allocation has failed, the output may be wrong!
void MyRoomControl__setMaterial(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C3E38D & 1) == 0 )
  {
    sub_1C37058(&Method_MyRoomControl_setMaterial__);
    byte_4C3E38D = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 44, 0, 0);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v6);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v7 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v7 = (_QWORD *)sub_1C37070(Method_MyRoomControl_setMaterial__);
    v8 = (System_Reflection_MethodBase_o *)sub_1C3703C(v7, v7[4]);
    OverwriteAssetSoundName__PlaySystemSe(v8, 0, 0, 0);
  }
}


void MyRoomControl__setMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 57, 0, 0),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  MaterialCollectionComponent__showMenu((MaterialCollectionComponent_o *)titleInfo, 0);
}


void MyRoomControl__setMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 56, 0, 0),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0);
}


void MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 60, 0, 0);
  this->fields.type = 14;
}


void MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 62, 0, 0);
  this->fields.type = 16;
}


void MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 58, 0, 0);
  this->fields.type = 12;
}


void MyRoomControl__setMaterialMainQuestPart(MyRoomControl_o *this, int32_t titleNameParam, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 59, titleNameParam, 0);
  this->fields.type = 13;
}


void MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1C372B4(0);
  TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 61, 0, 0);
  this->fields.type = 15;
}


void MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1C372B4(this);
  mStateMaterial->fields.isServantMenuTop = 0;
  MyRoomControl__SetState(this, 0, v2);
}


void MyRoomControl__setMaterialUIMove(MyRoomControl_o *this, bool isDisp, const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  __int64 v6; // x0
  const MethodInfo *v7; // x2
  UnityEngine_Vector3_o *p_moveShowPos; // x8
  UnityEngine_Vector3_o v9; // [xsp+0h] [xbp-50h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+10h] [xbp-40h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+28h] [xbp-28h] BYREF

  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0;
  v9.fields.z = 0.0;
  *(_QWORD *)&v9.fields.x = 0;
  MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &v9, v3);
  if ( !this )
    sub_1C372B4(v6);
  if ( isDisp )
    p_moveShowPos = &moveShowPos;
  else
    p_moveShowPos = &v9;
  MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, *p_moveShowPos, v7);
}


void MyRoomControl__setMySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20
  const MethodInfo *v4; // x2

  if ( (byte_4C3E376 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl__setMySvtFigure_b__240_0__);
    byte_4C3E376 = 1;
  }
  v3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__240_0__, 0);
  MyRoomControl__SetMyRoomStandFigure(this, v3, v4);
}


void MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_33511708(this, 1, v2);
}


void MyRoomControl__setNormalFace_33511708(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
{
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  int32_t materialFigureSvtDispIdx; // w1
  int32_t materialServantId; // w20
  UnityEngine_Object_o *svtCtr; // x20
  MyRoomControl_o *Item; // x0
  const MethodInfo *v10; // x5
  UnityEngine_Object_o *playBtnImg; // x20
  int32_t formId[2]; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3E383 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E383 = 1;
  }
  *(_QWORD *)formId = 0;
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
                                (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  if ( UnityEngine_Object__op_Inequality(svtCtr, 0, 0) )
  {
    materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.svtCtr;
    if ( !materialImageIdList )
      goto LABEL_23;
    formId[1] = MyRoomSvtControl__GetFormId((MyRoomSvtControl_o *)materialImageIdList, 0);
  }
LABEL_16:
  materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.standFigureBack;
  if ( !materialImageIdList )
    goto LABEL_23;
  StandFigureBack__SetFaceTypeAndForm((StandFigureBack_o *)materialImageIdList, 0, formId[1], 0);
  this->fields.isVoicePlaying = 0;
  playBtnImg = (UnityEngine_Object_o *)this->fields.playBtnImg;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(playBtnImg, 0, 0) )
  {
    materialImageIdList = (System_Collections_Generic_List_int__o *)this->fields.voicePlayEffect;
    if ( materialImageIdList )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)materialImageIdList, 0, 0);
      return;
    }
LABEL_23:
    sub_1C372B4(materialImageIdList);
  }
}


void MyRoomControl__setNoticeInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 6;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 50, 0, 0),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  NoticeInfoComponent__setNoticeInfo((NoticeInfoComponent_o *)titleInfo, 0);
}


void MyRoomControl__setProfileInfo(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *mstpfObj; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x3

  mstpfObj = this->fields.mstpfObj;
  if ( !mstpfObj
    || (UnityEngine_GameObject__SetActive(mstpfObj, 1, 0),
        MyRoomControl__stopSvtVoice(this, v4),
        mstpfObj = (UnityEngine_GameObject_o *)this->fields.titleInfo,
        this->fields.type = 4,
        !mstpfObj)
    || (TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)mstpfObj, 1, 48, 0, 0),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0) )
  {
    sub_1C372B4(mstpfObj);
  }
  MstProfileComponent__showMstProfile((MstProfileComponent_o *)mstpfObj, 0);
}


void MyRoomControl__setSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SerialCodeComponent_o *serialCodeComp; // x0

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 7;
  MyRoomControl__setSvtFigureActive(this, 7, 1, v3);
  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1C372B4(0);
  SerialCodeComponent__showMenu(serialCodeComp, 0);
}


void MyRoomControl__setSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  MyRoomControl__stopSvtVoice(this, method);
  this->fields.type = 10;
  MyRoomControl__setSvtFigureActive(this, 10, 1, v3);
}


void MyRoomControl__setSvtFigureActive(MyRoomControl_o *this, int32_t type, bool callFadeIn, const MethodInfo *method)
{
  bool v6; // w0
  StandFigureBack_o *standFigureBack; // x0
  int v8; // w20
  bool isEnableMultipleView; // w1
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x1
  bool v12; // w1
  const MethodInfo *v13; // x1
  bool isEnableChangeBg; // w1

  switch ( type )
  {
    case 0:
    case 1:
    case 10:
      MainMenuBar__setMenuActive(1, 0, 0);
      if ( !callFadeIn )
        goto LABEL_15;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, 0, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_39;
      MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)standFigureBack, 0);
LABEL_15:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, !this->fields.isServantMaterial, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0);
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
    case 20:
      v6 = 0;
      goto LABEL_3;
    case 6:
      MainMenuBar__setMenuActive(0, 0, 0);
      if ( !callFadeIn )
        goto LABEL_26;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, 0, 0);
LABEL_26:
      v8 = 1;
      isEnableMultipleView = this->fields.isEnableMultipleView;
      break;
    case 7:
      MainMenuBar__setMenuActive(0, 0, 0);
      goto LABEL_6;
    case 19:
      v6 = 1;
LABEL_3:
      MainMenuBar__setMenuActive(v6, 0, 0);
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_39;
      StandFigureBack__Fadeout(standFigureBack, 0, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_39;
      MyRoomFrontObjectManager__FrameOut((MyRoomFrontObjectManager_o *)standFigureBack, 0);
LABEL_6:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0);
      v8 = 0;
      isEnableMultipleView = 0;
      break;
    default:
      goto LABEL_26;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton;
  if ( !standFigureBack )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0);
  MyRoomControl__SetMultipleViewButtonColor(this, v11);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton;
  v12 = v8 && this->fields.isEnablePhotoCampaign;
  if ( !standFigureBack
    || ((UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, v12, 0),
         MyRoomControl__SetPhotoCampaignButtonColor(this, v13),
         standFigureBack = (StandFigureBack_o *)this->fields.changeBgButton,
         !v8)
      ? (isEnableChangeBg = 0)
      : (isEnableChangeBg = this->fields.isEnableChangeBg),
        !standFigureBack) )
  {
LABEL_39:
    sub_1C372B4(standFigureBack);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableChangeBg, 0);
}


int32_t MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1C372B4(0);
  return MyRoomData__getSvtFriendshipLv(myRoomData, hSvtId, 0);
}


void MyRoomControl__setSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  void *myRoomFsm; // x0
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o *v6; // x20
  int32_t figureSvtId; // w21
  int32_t Item; // w0
  const MethodInfo *v9; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_String_o *asstName; // x20
  System_Action_o *v17; // x21
  const MethodInfo *v18; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v21; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v23; // x21
  Il2CppObject *v24; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3

  if ( (byte_4C3E374 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_MyRoomControl_EndLoad__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__setSvtVoiceData_b__238_0__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    byte_4C3E374 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
      return;
    }
LABEL_22:
    sub_1C372B4(myRoomFsm);
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
             (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    VoiceList = MyRoomControl__GetVoiceList(this, v6, figureSvtId, Item, v9);
    this->fields.voiceList = VoiceList;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v11, v12);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v6, 0);
    this->fields.asstName = VoiceAssetName;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v14, v15);
    asstName = this->fields.asstName;
    v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v17, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0);
    MyRoomControl__voiceLoad(this, asstName, v17, v18);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v21 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v21 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v23 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 24LL);
      if ( !v23 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v24 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v23 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(v23, v24, Method_MyRoomControl___c__setSvtVoiceData_b__238_0__, 0);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__238_0 = v23;
        sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__238_0, (int32_t)v23, v26, v27);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v23, 0);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
    this->fields.isVoicePlaying = 0;
  }
}


void MyRoomControl__setUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 47, 0, 0),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  UserServantCoinComponent__showMenu((UserServantCoinComponent_o *)titleInfo, 0);
}


void MyRoomControl__setUserStInfoView(MyRoomControl_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *multipleViewButton; // x0
  const MethodInfo *v4; // x1
  MyRoomControl_c *v5; // x0
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x3

  if ( (byte_4C3E38C & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl_TypeInfo);
    byte_4C3E38C = 1;
  }
  multipleViewButton = this->fields.multipleViewButton;
  this->fields.type = 0;
  if ( !multipleViewButton )
    goto LABEL_9;
  UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnableMultipleView, 0);
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
    || (UnityEngine_GameObject__SetActive(multipleViewButton, this->fields.isEnablePhotoCampaign, 0),
        this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_PHOTO_CAMPAIGN,
        MyRoomControl__SetPhotoCampaignButtonColor(this, v6),
        (multipleViewButton = (UnityEngine_GameObject_o *)this->fields.titleInfo) == 0) )
  {
LABEL_9:
    sub_1C372B4(multipleViewButton);
  }
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)multipleViewButton, 1, 43, 0, 0);
  MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v7);
}


void MyRoomControl__setUsrItemList(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v4; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  this->fields.type = 3;
  if ( !titleInfo
    || (TitleInfoControl__changeTitleInfo_39845736(titleInfo, 1, 46, 0, 0),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v4),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0) )
  {
    sub_1C372B4(titleInfo);
  }
  UserItemListViewManager__SetMode_33220624((UserItemListViewManager_o *)titleInfo, 1, 0);
}


void MyRoomControl__set_IsGallery(MyRoomControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsGallery_k__BackingField = value;
}


void MyRoomControl__setupMaterialUIMoveData(
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
  sub_1C36FFC(
    (CGThumbnailListItem_o *)moveTarget,
    (int32_t)materialObj,
    (int32_t)moveShowPos,
    (const MethodInfo *)moveHidePos);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0)) == 0 )
  {
    sub_1C372B4(transform);
  }
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)transform, 0);
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
  moveShowPos->fields.x = 250.0;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void MyRoomControl__setupServantListUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform(moveTarget, 0)) == 0 )
    sub_1C372B4(this);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
  moveShowPos->fields.x = -7.0;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void MyRoomControl__setupSortWindowUIMoveData(
        MyRoomControl_o *this,
        UnityEngine_GameObject_o *moveTarget,
        UnityEngine_Vector3_o *moveShowPos,
        UnityEngine_Vector3_o *moveHidePos,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4

  if ( !moveTarget || (this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform(moveTarget, 0)) == 0 )
    sub_1C372B4(this);
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  moveShowPos->fields.x = 0.0;
  moveShowPos->fields.y = localPosition.fields.y;
  moveShowPos->fields.z = localPosition.fields.z;
  moveHidePos->fields.x = 860.0;
  moveHidePos->fields.y = localPosition.fields.y;
  moveHidePos->fields.z = localPosition.fields.z;
}


void MyRoomControl__setupSvtImageIdList(MyRoomControl_o *this, const MethodInfo *method)
{
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  MyRoomData_o *myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  int64_t favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v10; // w9
  MyRoomData_o *v11; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x20
  intptr_t m_CachedPtr; // x22
  struct System_Collections_Generic_List_int__o **p_imageIdList; // x20
  Il2CppObject *Master_object; // x22
  int32_t i; // w23
  struct UserDeckMaster_o *usrDeckMst; // x24
  struct UserGameEntity_o *v18; // x25
  int32_t figureSvtId; // w24
  int32_t v20; // w24
  intptr_t v21; // x8
  _QWORD *v22; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v24; // x3
  struct System_Threading_CancellationTokenSource_o *v25; // x23
  intptr_t v26; // x24
  MyRoomControl_o *v27; // x0
  const MethodInfo *v28; // x2
  struct System_Threading_CancellationTokenSource_o *v29; // x8
  MyRoomData_o *v30; // x23
  unsigned __int64 v31; // x24
  int32_t v32; // w1
  intptr_t v33; // x8
  _QWORD *v34; // x9
  __int64 v35; // x10
  struct System_Collections_Generic_List_int__o *v36; // x8
  int v37; // w21
  int32_t v38; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v39; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v40; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v41; // 0:x0.16

  if ( (byte_4C3E364 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMaster_ServantLimitImageMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&ImageLimitCount_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Clear__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__Contains__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E364 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  this->fields.usrData = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v4, v5);
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
  v10 = imageIdList->fields._version + 1;
  imageIdList->fields._size = 0;
  imageIdList->fields._version = v10;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)MyRoomData__getUsrSvtData(myRoomData, favoriteUserSvtId, 0);
  if ( !myRoomData )
    goto LABEL_48;
  v11 = myRoomData;
  m_CachedPtr = myRoomData[1].fields.m_CachedPtr;
  m_CancellationTokenSource = myRoomData[1].fields.m_CancellationTokenSource;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v39.fields.currentCryptoKey = m_CachedPtr;
  *(_QWORD *)&v39.fields.fakeValue = m_CancellationTokenSource;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v39, 0);
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v11, 0);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  p_imageIdList = &this->fields.imageIdList;
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
  for ( i = 0; ; ++i )
  {
    v18 = v11[1].fields.usrData;
    usrDeckMst = v11[1].fields.usrDeckMst;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v40.fields.currentCryptoKey = v18;
    *(_QWORD *)&v40.fields.fakeValue = usrDeckMst;
    if ( i > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v40, 0) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    myRoomData = (MyRoomData_o *)ImageLimitCount__GetImageLimitCount(figureSvtId, i, 0);
    if ( !Master_object )
      goto LABEL_48;
    myRoomData = (MyRoomData_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   (ServantLimitImageMaster_o *)Master_object,
                                   this->fields.figureSvtId,
                                   (int32_t)myRoomData,
                                   0);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v20 = (int)myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)myRoomData,
            (const MethodInfo_3786378 *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (MyRoomData_o *)*p_imageIdList;
      if ( !*p_imageIdList )
        goto LABEL_48;
      v21 = myRoomData->fields.m_CachedPtr;
      v22 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( !v21 )
        goto LABEL_48;
      m_CancellationTokenSource_low = SLODWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v21 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v20,
          *(const MethodInfo_3786000 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(myRoomData->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v21 + 4 * m_CancellationTokenSource_low + 32) = v20;
      }
    }
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v11, 0)
    || (myRoomData = (MyRoomData_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)v11, 0),
        ((unsigned __int8)myRoomData & 1) != 0) )
  {
    v26 = v11[1].fields.m_CachedPtr;
    v25 = v11[1].fields.m_CancellationTokenSource;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v41.fields.currentCryptoKey = v26;
    *(_QWORD *)&v41.fields.fakeValue = v25;
    v27 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v41, 0);
    myRoomData = (MyRoomData_o *)MyRoomControl__GetSortedCostumeIds(v27, (int32_t)v27, v28);
    if ( myRoomData )
    {
      v29 = myRoomData->fields.m_CancellationTokenSource;
      v30 = myRoomData;
      if ( (int)v29 >= 1 )
      {
        v31 = 0;
        while ( 1 )
        {
          if ( v31 >= (unsigned int)v29 )
            sub_1C372BC(myRoomData);
          v32 = *((_DWORD *)&v30->fields.usrData + v31);
          if ( v32 >= 1 )
          {
            myRoomData = (MyRoomData_o *)*p_imageIdList;
            if ( !*p_imageIdList )
              goto LABEL_48;
            v33 = myRoomData->fields.m_CachedPtr;
            v34 = Method_System_Collections_Generic_List_int__Add__;
            ++HIDWORD(myRoomData->fields.m_CancellationTokenSource);
            if ( !v33 )
              goto LABEL_48;
            v35 = SLODWORD(myRoomData->fields.m_CancellationTokenSource);
            if ( (unsigned int)v35 >= *(_DWORD *)(v33 + 24) )
            {
              System_Collections_Generic_List_int___AddWithResize(
                (System_Collections_Generic_List_int__o *)myRoomData,
                v32,
                *(const MethodInfo_3786000 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
            }
            else
            {
              LODWORD(myRoomData->fields.m_CancellationTokenSource) = v35 + 1;
              *(_DWORD *)(v33 + 4 * v35 + 32) = v32;
            }
          }
          LODWORD(v29) = v30->fields.m_CancellationTokenSource;
          if ( (__int64)++v31 >= (int)v29 )
            goto LABEL_42;
        }
      }
      goto LABEL_42;
    }
LABEL_48:
    sub_1C372B4(myRoomData);
  }
LABEL_42:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v24);
  myRoomData = (MyRoomData_o *)UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v11, 0, 0);
  if ( !Master_object )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                 (ServantLimitImageMaster_o *)Master_object,
                                 this->fields.figureSvtId,
                                 (int32_t)myRoomData,
                                 0);
  v36 = this->fields.imageIdList;
  if ( !v36 )
    goto LABEL_48;
  v37 = (int)myRoomData;
  v38 = 0;
  while ( v38 < v36->fields._size )
  {
    myRoomData = (MyRoomData_o *)System_Collections_Generic_List_int___get_Item(
                                   v36,
                                   v38,
                                   (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v37 )
    {
      this->fields.figureSvtDispIdx = v38;
      return;
    }
    v36 = *p_imageIdList;
    ++v38;
    if ( !*p_imageIdList )
      goto LABEL_48;
  }
}


void MyRoomControl__setupSvtRand(MyRoomControl_o *this, const MethodInfo *method)
{
  void *limitCountSupport; // x0
  int32_t v4; // w22
  _DWORD *v5; // x20
  __int64 IsLeave; // x0
  char *v7; // x25
  unsigned int v8; // w23
  void **v9; // x25
  void *v10; // t1
  UserServantEntity_o *v11; // x19
  NetworkManager_ResultCallbackFunc_o *v12; // x20
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  UserServantCollectionMaster_o *v17; // x20
  int64_t userId; // x21
  __int64 v19; // x23
  __int64 v20; // x24
  __int128 v21; // q1
  _DWORD *v22; // x26
  int64_t pushUserSvtId; // x8
  int64_t v24; // x0
  __int128 v25; // q1
  int64_t v26; // x23
  int32_t v27; // w24
  int32_t v28; // w25
  int32_t v29; // w27
  int32_t v30; // w28
  bool IsLock; // w29
  char v32; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v36; // w0
  __int64 v37; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v40; // [xsp+58h] [xbp-D8h]
  int64_t v41; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v43; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v44; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v45; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v46; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16

  if ( (byte_4C3E366 & 1) == 0 )
  {
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantCollectionMaster___);
    sub_1C37058(&Method_DataManager_GetMasterData_UserServantMaster___);
    sub_1C37058(&Method_MyRoomControl__setupSvtRand_b__222_0__);
    sub_1C37058(&Method_NetworkManager_getRequest_CardFavoriteRequest___);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&NetworkManager_ResultCallbackFunc_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E366 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
      return;
    }
LABEL_36:
    sub_1C372B4(limitCountSupport);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0);
  if ( !limitCountSupport )
    goto LABEL_36;
  v4 = *((_DWORD *)limitCountSupport + 6);
  v5 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_71226972(0, v4, 0);
    if ( (unsigned int)IsLeave >= v5[6] )
LABEL_35:
      sub_1C372BC(IsLeave);
    v7 = (char *)&v5[2 * (int)IsLeave];
    v8 = IsLeave;
    v10 = (void *)*((_QWORD *)v7 + 4);
    v9 = (void **)(v7 + 32);
    limitCountSupport = v10;
    if ( !v10 )
      goto LABEL_36;
    IsLeave = UserServantEntity__IsLeave((UserServantEntity_o *)limitCountSupport, 0);
    v11 = 0;
    if ( (IsLeave & 1) == 0 )
    {
      if ( v8 >= v5[6] )
        goto LABEL_35;
      limitCountSupport = *v9;
      if ( !*v9 )
        goto LABEL_36;
      IsLeave = UserServantEntity__IsEventJoin((UserServantEntity_o *)limitCountSupport, 0);
      v11 = 0;
      if ( (IsLeave & 1) == 0 )
      {
        if ( v8 >= v5[6] )
          goto LABEL_35;
        v11 = (UserServantEntity_o *)*v9;
      }
    }
  }
  while ( !v11 );
  v12 = (NetworkManager_ResultCallbackFunc_o *)sub_1C372A4(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v12, (Il2CppObject *)this, Method_MyRoomControl__setupSvtRand_b__222_0__, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v12,
                                              (const MethodInfo_3172CF0 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v15, v16);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v17 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v20 = *(_QWORD *)&v11->fields.svtId.fields.currentCryptoKey;
  v19 = *(_QWORD *)&v11->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v46.fields.currentCryptoKey = v20;
  *(_QWORD *)&v46.fields.fakeValue = v19;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v46, 0);
  if ( !v17 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v17, userId, (int32_t)limitCountSupport, 0);
  if ( !*p_usrData )
    goto LABEL_36;
  v21 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v22 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v45.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v45.fields.fakeValue = v21;
  v41 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v44 = v45;
  v24 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v44, 0);
  v25 = *(_OWORD *)&v11->fields.id.fields.fakeValue;
  v26 = v24;
  *(_OWORD *)&v43.fields.currentCryptoKey = *(_OWORD *)&v11->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v43.fields.fakeValue = v25;
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_48934420(&v43, 0);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.imageLimitCount, 0);
  v27 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.dispLimitCount, 0);
  v28 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.commandCardLimitCount, 0);
  v29 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.iconLimitCount, 0);
  v30 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.portraitLimitCount, 0);
  IsLock = UserServantEntity__IsLock(v11, 0);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v11, 0);
  if ( !v22 )
    goto LABEL_36;
  v32 = (char)limitCountSupport;
  commonFlag = v22[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.battleVoice, 0);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                       v11->fields.randomLimitCount,
                       0);
  v36 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v11->fields.randomLimitCountSupport, 0);
  v37 = *(_QWORD *)&v11->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v47.fields.fakeValue = *(_QWORD *)&v11->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v36;
  *(_QWORD *)&v47.fields.currentCryptoKey = v37;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(v47, 0);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v40,
    imageLimitCount,
    v27,
    v28,
    v29,
    v30,
    1,
    IsLock,
    v32 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v41 == v26,
    0);
}


void MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E371 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3E371 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0);
}


void MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E370 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
    byte_4C3E370 = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0);
}


void MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1C372B4(0);
  MyRoomSvtControl__stopVoice(svtCtr, 0);
  MyRoomControl__setNormalFace_33511708(this, 1, v4);
}


System_Collections_IEnumerator_o *MyRoomControl__svtVoicePlayAct(
        MyRoomControl_o *this,
        MaterialEventLogListViewItem_Info_o *item,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3E3A3 & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl__svtVoicePlayAct_d__344_TypeInfo);
    byte_4C3E3A3 = 1;
  }
  v5 = sub_1C372A4(MyRoomControl__svtVoicePlayAct_d__344_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__344___ctor((MyRoomControl__svtVoicePlayAct_d__344_o *)v5, 0, 0);
  if ( !v5 )
    sub_1C372B4(v6);
  *(_QWORD *)(v5 + 32) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v7, v8);
  *(_QWORD *)(v5 + 40) = item;
  sub_1C36FFC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v9, v10);
  return (System_Collections_IEnumerator_o *)v5;
}


void MyRoomControl__voiceLoad(
        MyRoomControl_o *this,
        System_String_o *assetName,
        System_Action_o *endCallback,
        const MethodInfo *method)
{
  __int64 v7; // x20
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  NetworkManager_c *v13; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v15; // x22

  if ( (byte_4C3E373 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__);
    sub_1C37058(&MyRoomControl___c__DisplayClass237_0_TypeInfo);
    byte_4C3E373 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass237_0_TypeInfo);
  MyRoomControl___c__DisplayClass237_0___ctor((MyRoomControl___c__DisplayClass237_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_13;
  *(_QWORD *)(v7 + 16) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 24) = endCallback;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 24), (int32_t)endCallback, v11, v12);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4C3E408 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    byte_4C3E408 = 1;
  }
  v13 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v13 = NetworkManager_TypeInfo;
  }
  if ( !v13->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v15 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(v15, (Il2CppObject *)v7, Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__, 0);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v15, 1, 0);
      return;
    }
LABEL_13:
    sub_1C372B4(v8);
  }
}


void MyRoomControl_BackGroundSaveData___ctor(MyRoomControl_BackGroundSaveData_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl_StateEtc___ctor(MyRoomControl_StateEtc_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl_StateEtc__begin(MyRoomControl_StateEtc_o *this, MyRoomControl_o *that, const MethodInfo *method)
{
  ;
}


void MyRoomControl_StateEtc__end(MyRoomControl_StateEtc_o *this, MyRoomControl_o *that, const MethodInfo *method)
{
  ;
}


void MyRoomControl_StateEtc__update(MyRoomControl_StateEtc_o *this, MyRoomControl_o *that, const MethodInfo *method)
{
  ;
}


void MyRoomControl__CaptureServant_d__418___ctor(
        MyRoomControl__CaptureServant_d__418_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__CaptureServant_d__418__MoveNext(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  bool result; // w0
  struct MyRoomControl_o *_4__this; // x20
  UnityEngine_Texture2D_o *v9; // x0
  int32_t width; // w25
  UnityEngine_Texture2D_o *v11; // x21
  UIRect_o *height; // x0
  int v13; // w22
  int32_t activeHeight; // w0
  int32_t v15; // w26
  int32_t v16; // w23
  int v17; // w24
  int32_t v18; // w22
  int32_t v19; // w23
  int v20; // w8
  int v21; // w25
  int v22; // w0
  _BOOL4 isOneShot; // w26
  int v24; // w27
  int v25; // w24
  int32_t v26; // w25
  int v27; // w27
  int32_t v28; // w0
  int v29; // w8
  UnityEngine_Color_array *Pixels_71153844; // x25
  UnityEngine_Texture2D_o *v31; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v33; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4C3E431 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    sub_1C37058(&TouchEffectManager_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4C3E431 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -1;
    v9 = UnityEngine_ScreenCapture__CaptureScreenshotAsTexture(0);
    width = this->fields.width;
    v11 = v9;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0);
    if ( !_4__this )
      goto LABEL_35;
    v13 = (int)height;
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRect__get_root(height, 0);
    if ( !height )
      goto LABEL_35;
    activeHeight = UIRoot__get_activeHeight((UIRoot_o *)height, 0);
    v15 = this->fields.height;
    v16 = activeHeight;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v17 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0);
    if ( !height )
      goto LABEL_35;
    height = (UIRect_o *)UIRoot__get_activeHeight((UIRoot_o *)height, 0);
    if ( !v11 )
      goto LABEL_35;
    v18 = v13 * width / v16;
    v19 = v17 * v15 / (int)height;
    v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v11->klass->vtable._4_get_width.methodPtr)(
            v11,
            v11->klass->vtable._4_get_width.method)
        - v18;
    v21 = v20 >= 0 ? v20 : v20 + 1;
    v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))v11->klass->vtable._6_get_height.methodPtr)(
            v11,
            v11->klass->vtable._6_get_height.method);
    isOneShot = _4__this->fields.isOneShot;
    v24 = v22 - v19 >= 0 ? v22 - v19 : v22 - v19 + 1;
    height = (UIRect_o *)UnityEngine_Screen__get_height(0);
    if ( !_4__this->fields.photoCampaignScreenshot )
      goto LABEL_35;
    v25 = (int)height;
    height = (UIRect_o *)UIRect__get_root((UIRect_o *)_4__this->fields.photoCampaignScreenshot, 0);
    if ( !height )
      goto LABEL_35;
    v26 = v21 >> 1;
    v27 = v24 >> 1;
    v28 = UIRoot__get_activeHeight((UIRoot_o *)height, 0);
    v29 = isOneShot ? 11 : 1;
    Pixels_71153844 = UnityEngine_Texture2D__GetPixels_71153844(v11, v26, v29 * v25 / v28 + v27, v18, v19, 0);
    v31 = (UnityEngine_Texture2D_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_71154968(v31, v18, v19, 3, 0, 0);
    if ( !v31 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_71156048(v31, Pixels_71153844, 0);
    UnityEngine_Texture2D__Apply_71156820(v31, 0);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, Il2CppClass *))height->klass[1]._1.declaringType)(
      height,
      v31,
      height->klass[1]._1.parent);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752((UnityEngine_Object_o *)v11, 0);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0);
    v33 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v33 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v33, 0);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1C372B4(height);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0);
    started = MyRoomControl__StartCameraEffect(_4__this, 0);
    UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C372A4(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v4, 0);
    this->fields.__2__current = (Il2CppObject *)v4;
    sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v4, v5, v6);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *MyRoomControl__CaptureServant_d__418__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__CaptureServant_d__418__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__CaptureServant_d__418_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__CaptureServant_d__418__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__CaptureServant_d__418__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__CoWaitForConstructingRecordWithServant_d__292___ctor(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__MoveNext(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x21
  Il2CppObject *Instance; // x0
  bool v6; // w20
  System_Func_bool__o *v7; // x22
  UnityEngine_WaitUntil_o *v8; // x21
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3E432 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    byte_4C3E432 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1C372B4(Instance);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
    ActionExtensions__Call(this->fields.setEndAction, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v6 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v7 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v7, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__, 0);
  v8 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, v7, 0);
  this->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v8, v10, v11);
  *((_DWORD *)p__2__current - 2) = 1;
  return v6;
}


Il2CppObject *MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_IEnumerator_Reset(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__CoWaitForConstructingRecordWithServant_d__292__System_IDisposable_Dispose(
        MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__InitMaterialOnBackground_d__286___ctor(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__InitMaterialOnBackground_d__286__MoveNext(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MyRoomControl__InitMaterialOnBackground_d__286_o *v3; // x20
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  TerminalSceneComponent_c *v8; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  UnityEngine_Object_o *v11; // x21
  System_Collections_IEnumerator_o *v12; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0
  struct TerminalSceneComponent_o *terminal_5__2; // x8
  BackTaskAmountAdjuster_o *v18; // x20
  const MethodInfo *v19; // x1
  System_Collections_IEnumerator_o *v20; // x0

  v3 = this;
  if ( (byte_4C3E433 & 1) == 0 )
  {
    sub_1C37058(&BackTaskAmountAdjuster_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonTemplate_QuestTree__get_Instance__);
    this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)sub_1C37058(&TerminalSceneComponent_TypeInfo);
    byte_4C3E433 = 1;
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
    ScrTerminalMap__UpdateAllMapGimmickComponent((ScrTerminalMap_o *)this, 0);
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
    if ( !byte_4C3CF06 )
    {
      sub_1C37058(&TerminalSceneComponent_TypeInfo);
      byte_4C3CF06 = 1;
    }
    v8 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v8 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v8->static_fields;
    mInstance = static_fields->mInstance;
    v3->fields._terminal_5__2 = static_fields->mInstance;
    sub_1C36FFC((CGThumbnailListItem_o *)&v3->fields._terminal_5__2, (int32_t)mInstance, v6, v7);
    v11 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v11, 0, 0) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)SingletonTemplate_object___get_Instance((const MethodInfo_39ED65C *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v12 = QuestTree__Init((QuestTree_o *)this, 0, 0);
        v3->fields.__2__current = (Il2CppObject *)v12;
        p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)v12, v14, v15);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_26:
      sub_1C372B4(this);
    }
  }
  v18 = (BackTaskAmountAdjuster_o *)sub_1C372A4(BackTaskAmountAdjuster_TypeInfo);
  BackTaskAmountAdjuster___ctor(v18, 0);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               v19);
  if ( !v18 )
    goto LABEL_26;
  v20 = BackTaskAmountAdjuster__Execute(v18, (System_Collections_IEnumerator_o *)this, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v20, 0);
  return 0;
}


Il2CppObject *MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__InitMaterialOnBackground_d__286_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__InitMaterialOnBackground_d__286__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__InitMaterialOnBackground_d__286__System_IDisposable_Dispose(
        MyRoomControl__InitMaterialOnBackground_d__286_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__InitServantMenu_d__289___ctor(
        MyRoomControl__InitServantMenu_d__289_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__InitServantMenu_d__289__MoveNext(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  CommonUI_o *Instance; // x0
  bool v6; // w21
  System_Func_bool__o *v7; // x22
  UnityEngine_WaitUntil_o *v8; // x19
  Il2CppObject **p__2__current; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  BackTaskAmountAdjuster_o *v12; // x20
  const MethodInfo *v13; // x1
  System_Collections_IEnumerator_o *v14; // x0

  if ( (byte_4C3E434 & 1) == 0 )
  {
    sub_1C37058(&BackTaskAmountAdjuster_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl__InitServantMenu_b__289_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E434 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v12 = (BackTaskAmountAdjuster_o *)sub_1C372A4(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v12, 0);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v13);
          if ( !v12 )
            goto LABEL_17;
          v14 = BackTaskAmountAdjuster__Execute(v12, (System_Collections_IEnumerator_o *)Instance, 0);
          UnityEngine_MonoBehaviour__StartCoroutine_71252324((UnityEngine_MonoBehaviour_o *)_4__this, v14, 0);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1C372B4(Instance);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v6 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0);
  v7 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v7, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__289_0__, 0);
  v8 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, v7, 0);
  this->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v8, v10, v11);
  *((_DWORD *)p__2__current - 2) = 1;
  return v6;
}


Il2CppObject *MyRoomControl__InitServantMenu_d__289__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__InitServantMenu_d__289__System_Collections_IEnumerator_Reset(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__InitServantMenu_d__289_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__InitServantMenu_d__289__System_Collections_IEnumerator_get_Current(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__InitServantMenu_d__289__System_IDisposable_Dispose(
        MyRoomControl__InitServantMenu_d__289_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__LoadMultipleServant_d__381___ctor(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__LoadMultipleServant_d__381__MoveNext(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x28
  bool result; // w0
  Il2CppObject *v5; // x22
  struct MyRoomControl___c__DisplayClass381_0_o **p__8__1; // x27
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  Il2CppObject *v11; // x1
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct StandFigureBack_array *v16; // x8
  __int64 v17; // x19
  __int64 v18; // x22
  __int64 v19; // x24
  int max_length; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v22; // x8
  const MethodInfo *v23; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v26; // w20
  int32_t v27; // w23
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  struct ServantScriptMultipleEntity_array *v30; // x26
  ServantScriptMultipleEntity_o *v31; // x25
  struct StandFigureBack_array *v32; // x8
  __int64 v33; // x25
  __int64 v34; // x19
  struct MyRoomControl_o *v35; // x24
  struct MyRoomControl___c__DisplayClass381_0_o *v36; // x28
  struct MyRoomControl___c__DisplayClass381_0_o **v37; // x21
  int32_t v38; // w5
  StandFigureBack_o *v39; // x26
  System_Action_o *_9__3; // x27
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *v44; // x8
  __int64 v45; // x19
  int v46; // w9
  unsigned int v47; // w25
  struct StandFigureBack_array *v48; // x8
  UnityEngine_Component_o *v49; // x8
  UnityEngine_Component_o *v50; // x21
  float y; // s8
  float v52; // s10
  float z; // s9
  float v54; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v56; // x8
  float v57; // s10
  struct StandFigureBack_array *v58; // x9
  int v59; // s14
  int v60; // s15
  struct StandFigureBack_array *v61; // x8
  float x; // s11
  float v63; // s12
  struct StandFigureBack_array *v64; // x8
  struct StandFigureBack_array *v65; // x8
  System_String_o *v66; // x2
  struct MyRoomControl___c__DisplayClass381_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v69; // x22
  Il2CppObject *v70; // x20
  System_Func_bool__o *v71; // x21
  UnityEngine_WaitWhile_o *v72; // x20
  int32_t v73; // w2
  const MethodInfo *v74; // x3
  struct ServantScriptMultipleEntity_array *v75; // x8
  unsigned int v76; // w9
  ServantScriptMultipleEntity_o *v77; // x10
  ServantScriptMultipleEntity_o *v78; // x8
  Il2CppObject *v79; // x20
  System_Func_bool__o *v80; // x21
  UnityEngine_WaitWhile_o *v81; // x20
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  __int64 v84; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-C8h]
  int32_t v86; // [xsp+24h] [xbp-BCh]
  MyRoomControl__LoadMultipleServant_d__381_o *v87; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  int32_t formId[2]; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v90; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4

  v87 = this;
  if ( (byte_4C3E435 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&int___TypeInfo);
    sub_1C37058(&ServantScriptMultipleEntity___TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__2__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__3__);
    sub_1C37058(&MyRoomControl___c__DisplayClass381_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1C37058(&StringLiteral_6742/*"FinishedFadeMultipleServant"*/);
    byte_4C3E435 = 1;
  }
  entity = 0;
  *(_QWORD *)formId = 0;
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
          v69 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            v69,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__1__,
            0);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v69, 0);
            v70 = (Il2CppObject *)v87->fields.__8__1;
            v71 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v71,
              v70,
              Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__2__,
              0);
            v72 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v72, v71, 0);
            v87->fields.__2__current = (Il2CppObject *)v72;
            sub_1C36FFC((CGThumbnailListItem_o *)&v87->fields.__2__current, (int32_t)v72, v73, v74);
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
      v5 = (Il2CppObject *)sub_1C372A4(MyRoomControl___c__DisplayClass381_0_TypeInfo);
      System_Object___ctor(v5, 0);
      v87->fields.__8__1 = (struct MyRoomControl___c__DisplayClass381_0_o *)v5;
      p__8__1 = &v87->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v87->fields.__8__1, (int32_t)v5, v7, v8);
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)v87->fields.__8__1;
      if ( this )
      {
        v11 = (Il2CppObject *)v87->fields.__4__this;
        this->fields.__2__current = v11;
        sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v11, v9, v10);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.mBlocker;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0);
            if ( *p__8__1 )
            {
              (*p__8__1)->fields.loadedCount = 0;
              multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
              if ( multipleStandFigureBacks )
              {
                v13 = sub_1C37100(ServantScriptMultipleEntity___TypeInfo, LODWORD(multipleStandFigureBacks->max_length));
                v87->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v13;
                p_multipleEntities_5__2 = &v87->fields._multipleEntities_5__2;
                sub_1C36FFC((CGThumbnailListItem_o *)&v87->fields._multipleEntities_5__2, v13, v14, v15);
                v16 = _4__this->fields.multipleStandFigureBacks;
                if ( v16 )
                {
                  v17 = 0;
                  v18 = 0;
                  v19 = 32;
                  while ( 1 )
                  {
                    max_length = v16->max_length;
                    if ( (int)v18 >= max_length )
                      break;
                    if ( (unsigned int)v18 >= max_length )
                      goto LABEL_104;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)v16->m_Items[v18];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0);
                    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
                    if ( !defaultMultipleServantPoses )
                      goto LABEL_83;
                    if ( (unsigned int)v18 >= LODWORD(defaultMultipleServantPoses->max_length) )
                      goto LABEL_104;
                    if ( !this )
                      goto LABEL_83;
                    v22 = (float *)((char *)defaultMultipleServantPoses + v17);
                    v90.fields.z = v22[10] + 0.0;
                    v90.fields.y = v22[9] + 0.0;
                    v90.fields.x = flt_C0DD88[(_DWORD)v18 == 0] + v22[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v90, 0);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v18 >= LODWORD(multipleServantUsrIds->max_length) )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v18],
                                                                            v23);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UserServantEntity__getSvtId(
                                                                            (UserServantEntity_o *)this,
                                                                            0);
                    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
                    if ( !multipleLimitCounts )
                      goto LABEL_83;
                    if ( (unsigned int)v18 >= LODWORD(multipleLimitCounts->max_length) )
                      goto LABEL_104;
                    v26 = multipleLimitCounts->m_Items[v18];
                    v27 = (int)this;
                    MyRoomControl__SetImageIdAndFormId(_4__this, &formId[1], formId, (int32_t)this, v26, 0);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                                            (ServantScriptMultipleMaster_o *)this,
                                                                            &entity,
                                                                            formId[1],
                                                                            formId[0],
                                                                            v18 + 1,
                                                                            0);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v30 = *p_multipleEntities_5__2;
                      if ( !*p_multipleEntities_5__2 )
                        goto LABEL_83;
                      v31 = entity;
                      if ( entity )
                      {
                        this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1C37194(
                                                                                entity,
                                                                                v30->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v84 = sub_1C372D8();
                          sub_1C37180(v84, 0);
                        }
                      }
                      if ( (unsigned int)v18 >= LODWORD(v30->max_length) )
                        goto LABEL_104;
                      v30->m_Items[v18] = v31;
                      sub_1C36FFC((CGThumbnailListItem_o *)((char *)v30 + v19), (int32_t)v31, v28, v29);
                    }
                    v32 = _4__this->fields.multipleStandFigureBacks;
                    if ( !v32 )
                      goto LABEL_83;
                    if ( (unsigned int)v18 >= LODWORD(v32->max_length) )
                      goto LABEL_104;
                    v33 = v17;
                    v34 = v19;
                    v35 = _4__this;
                    v36 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v37 = p__8__1;
                      v38 = formId[0];
                      v39 = v32->m_Items[v18];
                      _9__3 = v36->fields.__9__3;
                      if ( !_9__3 )
                      {
                        v86 = formId[0];
                        _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__3,
                          (Il2CppObject *)v36,
                          Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__3__,
                          0);
                        v36->fields.__9__3 = _9__3;
                        sub_1C36FFC((CGThumbnailListItem_o *)&v36->fields.__9__3, (int32_t)_9__3, v41, v42);
                        v38 = v86;
                      }
                      if ( v39 )
                      {
                        StandFigureBack__SetMyRoomStandFigure(v39, v27, v26, 1, 0, v38, 10, _9__3, 0, 0);
                        v16 = v35->fields.multipleStandFigureBacks;
                        _4__this = v35;
                        v19 = v34 + 8;
                        ++v18;
                        v17 = v33 + 12;
                        p__8__1 = v37;
                        if ( v16 )
                          continue;
                      }
                    }
                    goto LABEL_83;
                  }
                  this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1C37100(int___TypeInfo, 2);
                  v75 = *p_multipleEntities_5__2;
                  if ( *p_multipleEntities_5__2 )
                  {
                    v76 = v75->max_length;
                    if ( !v76 )
                      goto LABEL_104;
                    v77 = v75->m_Items[0];
                    if ( v77 )
                    {
                      if ( !this )
                        goto LABEL_83;
                      if ( !LODWORD(this->fields.__2__current) )
                        goto LABEL_104;
                      LODWORD(this->fields.__4__this) = v77->fields.depth;
                    }
                    if ( v76 <= 1 )
                      goto LABEL_104;
                    v78 = v75->m_Items[1];
                    if ( v78 )
                    {
                      if ( this )
                      {
                        if ( LODWORD(this->fields.__2__current) <= 1 )
                          goto LABEL_104;
                        HIDWORD(this->fields.__4__this) = v78->fields.depth;
LABEL_101:
                        if ( LODWORD(this->fields.__2__current) >= 2 )
                        {
                          MyRoomControl__SetLayerMultipleServant(
                            _4__this,
                            SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
                            0);
                          v79 = (Il2CppObject *)v87->fields.__8__1;
                          v80 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v80,
                            v79,
                            Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__0__,
                            0);
                          v81 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v81, v80, 0);
                          v87->fields.__2__current = (Il2CppObject *)v81;
                          sub_1C36FFC((CGThumbnailListItem_o *)&v87->fields.__2__current, (int32_t)v81, v82, v83);
                          result = 1;
                          v87->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1C372BC(this);
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
    sub_1C372B4(this);
  }
  v87->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_39845736((TitleInfoControl_o *)this, 1, 0, 0, 0);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.multipleViewCloseButton;
  _4__this->fields.multipleViewState = 2;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v44 = _4__this->fields.multipleStandFigureBacks;
  if ( !v44 )
    goto LABEL_83;
  v45 = 4;
  while ( 1 )
  {
    v46 = v44->max_length;
    v47 = v45 - 4;
    if ( (int)v45 - 4 >= v46 )
      return 0;
    if ( v47 >= v46 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v44->obj.klass + v45);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)StandFigureBack__GetSvtStandFigure(
                                                            (StandFigureBack_o *)this,
                                                            0,
                                                            0);
    if ( !this )
      goto LABEL_83;
    v48 = _4__this->fields.multipleStandFigureBacks;
    if ( !v48 )
      goto LABEL_83;
    if ( v47 >= LODWORD(v48->max_length) )
      goto LABEL_104;
    v49 = (UnityEngine_Component_o *)*((_QWORD *)&v48->obj.klass + v45);
    if ( !v49 )
      goto LABEL_83;
    v50 = (UnityEngine_Component_o *)this->fields.__4__this;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(v49, 0);
    if ( !this )
      goto LABEL_83;
    localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    y = localPosition.fields.y;
    v52 = (_DWORD)v45 == 4 ? -256.0 : 256.0;
    if ( !v50 )
      goto LABEL_83;
    z = localPosition.fields.z;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(v50, 0);
    if ( !this )
      goto LABEL_83;
    LODWORD(v54) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    multipleEntities_5__2 = v87->fields._multipleEntities_5__2;
    if ( !multipleEntities_5__2 )
      goto LABEL_83;
    if ( v47 >= LODWORD(multipleEntities_5__2->max_length) )
      goto LABEL_104;
    v56 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v45);
    v57 = v52 - v54;
    if ( v56 )
    {
      v58 = _4__this->fields.multipleStandFigureBacks;
      if ( !v58 )
        goto LABEL_83;
      if ( v47 >= LODWORD(v58->max_length) )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v58->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      v59 = *(_DWORD *)(v56 + 28);
      v60 = *(_DWORD *)(v56 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_83;
      v92 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
      v61 = _4__this->fields.multipleStandFigureBacks;
      if ( !v61 )
        goto LABEL_83;
      if ( v47 >= LODWORD(v61->max_length) )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v61->obj.klass + v45);
      if ( !this )
        goto LABEL_83;
      x = v92.fields.x;
      v63 = v92.fields.z;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      if ( !this )
        goto LABEL_83;
      y = y + (float)v60;
      v57 = v57 + (float)v59;
      v93.fields.x = x;
      v93.fields.y = y;
      v93.fields.z = v63;
      z = z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v93, 0);
    }
    v64 = _4__this->fields.multipleStandFigureBacks;
    if ( !v64 )
      goto LABEL_83;
    if ( v47 >= LODWORD(v64->max_length) )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v64->obj.klass + v45);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0);
      v65 = _4__this->fields.multipleStandFigureBacks;
      if ( v65 )
      {
        v66 = v47 == LODWORD(v65->max_length) - 1 ? (System_String_o *)StringLiteral_6742/*"FinishedFadeMultipleServant"*/ : 0LL;
        v94.fields.x = v57;
        v94.fields.y = y;
        v94.fields.z = z;
        MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v94, v66, 0);
        v44 = _4__this->fields.multipleStandFigureBacks;
        ++v45;
        if ( v44 )
          continue;
      }
    }
    goto LABEL_83;
  }
}


Il2CppObject *MyRoomControl__LoadMultipleServant_d__381__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__LoadMultipleServant_d__381__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__LoadMultipleServant_d__381_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__LoadMultipleServant_d__381__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__LoadMultipleServant_d__381__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__LoadPhotoTarget_d__409___ctor(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__LoadPhotoTarget_d__409__MoveNext(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__LoadPhotoTarget_d__409_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v6; // x22
  struct MyRoomControl___c__DisplayClass409_0_o **p__8__1; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Object_o *photoMasterTexture; // x21
  MyRoomControl__LoadPhotoTarget_d__409_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_WaitForFixedUpdate_o *v15; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  int32_t v20; // w1
  struct PhotoStandFigureComponent_o *photoStandFigure_5__3; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  MyRoomControl__LoadPhotoTarget_d__409_o *v25; // x21
  float v26; // s0
  struct MyRoomControl___c__DisplayClass409_0_o *_8__1; // x8
  struct MyRoomControl___c__DisplayClass409_0_o *v28; // x21
  PhotoStandFigureComponent_o *v29; // x20
  System_Action_o *_9__4; // x22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v33; // x21
  System_Func_bool__o *_9__5; // x20
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  UnityEngine_WaitWhile_o *v37; // x21
  CGThumbnailListItem_o *v38; // x19
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  int v41; // w8
  struct MyRoomControl___c__DisplayClass409_0_o *v42; // x23
  System_Action_o *_9__6; // x22
  PhotoStandFigureComponent_o *v44; // x21
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  __int64 i_5__2; // x9
  struct MyRoomControl___c__DisplayClass409_0_o *v49; // x21
  System_Func_bool__o *_9__7; // x20
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  UnityEngine_WaitWhile_o *v53; // x21
  int32_t v54; // w2
  const MethodInfo *v55; // x3
  struct PhotoStandFigureComponent_o *photoStaffFigure_5__5; // x8
  float v57; // s8
  float v58; // s9
  float v59; // s10
  MyRoomControl__LoadPhotoTarget_d__409_o *v60; // x21
  float v61; // s0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v64; // x21
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *v66; // x22
  Il2CppObject *v67; // x20
  System_Func_bool__o *v68; // x21
  UnityEngine_WaitWhile_o *v69; // x20
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  struct PhotoStandFigureComponent_array *v72; // x8
  __int64 v73; // x9
  struct PhotoStandFigureComponent_o *v74; // x1
  struct PhotoStandFigureComponent_o **p_photoStaffFigure_5__5; // x20
  int32_t faceId; // w21
  struct MyRoomControl___c__DisplayClass409_0_o *v77; // x22
  System_Action_o *_9__10; // x24
  int32_t v79; // w21
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v82; // x21
  System_Func_bool__o *_9__11; // x20
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  UnityEngine_WaitWhile_o *v86; // x21
  int32_t v87; // w2
  const MethodInfo *v88; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  __int64 v90; // x9
  struct PhotoStandFigureComponent_o *v91; // x1
  struct PhotoStandFigureComponent_o **p_photoStandFigure_5__3; // x21
  const MethodInfo *v93; // x2
  int32_t ImageLimitCount_k__BackingField; // w22
  int32_t v95; // w21
  struct PhotoStandFigureComponent_o *v96; // x8
  struct MyRoomControl___c__DisplayClass409_0_o *v97; // x26
  StandFigureBack_o *photoStandFigureBack; // x24
  int32_t formId_5__4; // w23
  System_Action_o *_9__2; // x25
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v103; // x21
  System_Func_bool__o *_9__3; // x20
  int32_t v105; // w2
  const MethodInfo *v106; // x3
  UnityEngine_WaitWhile_o *v107; // x21
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v110; // x23
  struct PhotoStandFigureComponent_o *v111; // x8
  StandFigureBack_o *v112; // x20
  int32_t StandFigureImageId_k__BackingField; // w22
  System_Action_o *_9__8; // x24
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v117; // x21
  System_Func_bool__o *_9__9; // x20
  int32_t v119; // w2
  const MethodInfo *v120; // x3
  UnityEngine_WaitWhile_o *v121; // x21
  int32_t v122; // w2
  const MethodInfo *v123; // x3
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+18h] [xbp-78h] BYREF
  int32_t imageId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C3E436 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
    sub_1C37058(&DataManager_TypeInfo);
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__0__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__10__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__11__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__2__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__3__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__4__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__5__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__6__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__7__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__8__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__9__);
    sub_1C37058(&MyRoomControl___c__DisplayClass409_0_TypeInfo);
    sub_1C37058(&UnityEngine_WaitForFixedUpdate_TypeInfo);
    sub_1C37058(&UnityEngine_WaitWhile_TypeInfo);
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)sub_1C37058(&StringLiteral_6741/*"FinishedFadeInPhotoTarget"*/);
    byte_4C3E436 = 1;
  }
  imageId = 0;
  costumeEntity = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(MyRoomControl___c__DisplayClass409_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass409_0_o *)v6;
      p__8__1 = &v4->fields.__8__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v8, v9);
      if ( !_4__this )
        goto LABEL_113;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0);
      if ( !*p__8__1 )
        goto LABEL_113;
      (*p__8__1)->fields.flag = 1;
      if ( !v4->fields.isUpdate )
        goto LABEL_64;
      photoMasterTexture = (UnityEngine_Object_o *)_4__this->fields.photoMasterTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(photoMasterTexture, 0, 0) )
        goto LABEL_16;
      p_photoMasterTexture = (MyRoomControl__LoadPhotoTarget_d__409_o **)&_4__this->fields.photoMasterTexture;
      this = *p_photoMasterTexture;
      if ( !*p_photoMasterTexture )
        goto LABEL_113;
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)this, 0);
      this = *p_photoMasterTexture;
      if ( !*p_photoMasterTexture )
        goto LABEL_113;
      gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_71266752(gameObject, 0);
      *p_photoMasterTexture = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)p_photoMasterTexture, 0, v13, v14);
LABEL_16:
      v15 = (UnityEngine_WaitForFixedUpdate_o *)sub_1C372A4(UnityEngine_WaitForFixedUpdate_TypeInfo);
      UnityEngine_WaitForFixedUpdate___ctor(v15, 0);
      v4->fields.__2__current = (Il2CppObject *)v15;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(p__2__current, (int32_t)v15, v17, v18);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      v20 = 0;
      v4->fields.__1__state = -1;
      v4->fields._i_5__2 = 0;
      goto LABEL_61;
    case 2:
      photoStandFigure_5__3 = v4->fields._photoStandFigure_5__3;
      v4->fields.__1__state = -1;
      if ( !photoStandFigure_5__3 )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)photoStandFigure_5__3->fields.photoStandFigureBack;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !_4__this )
        goto LABEL_113;
      x = _4__this->fields.defaultPhotoServantPos.fields.x;
      y = _4__this->fields.defaultPhotoServantPos.fields.y;
      z = _4__this->fields.defaultPhotoServantPos.fields.z;
      v25 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v4->fields._i_5__2,
                                                          0);
      if ( !v25 )
        goto LABEL_113;
      v26 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
      v126.fields.x = x + v26;
      v126.fields.y = y + 0.0;
      v126.fields.z = z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v25, v126, 0);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_113;
      _8__1->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)v4->fields._photoStandFigure_5__3;
      if ( !this )
        goto LABEL_113;
      PhotoStandFigureComponent__GetPhotoTargetFaceList((PhotoStandFigureComponent_o *)this, v4->fields._formId_5__4, 0);
      v28 = v4->fields.__8__1;
      if ( !v28 )
        goto LABEL_113;
      v29 = v4->fields._photoStandFigure_5__3;
      _9__4 = v28->fields.__9__4;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v28,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__4__,
          0);
        v28->fields.__9__4 = _9__4;
        sub_1C36FFC((CGThumbnailListItem_o *)&v28->fields.__9__4, (int32_t)_9__4, v31, v32);
      }
      if ( !v29 )
        goto LABEL_113;
      PhotoStandFigureComponent__PreLoadFormAssets(v29, _9__4, 0);
      v33 = v4->fields.__8__1;
      if ( !v33 )
        goto LABEL_113;
      _9__5 = v33->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__5,
          (Il2CppObject *)v33,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__5__,
          0);
        v33->fields.__9__5 = _9__5;
        sub_1C36FFC((CGThumbnailListItem_o *)&v33->fields.__9__5, (int32_t)_9__5, v35, v36);
      }
      v37 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v37, _9__5, 0);
      v4->fields.__2__current = (Il2CppObject *)v37;
      v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v38, (int32_t)v37, v39, v40);
      v41 = 3;
      goto LABEL_112;
    case 3:
      v42 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v42 )
        goto LABEL_113;
      _9__6 = v42->fields.__9__6;
      v42->fields.flag = 1;
      v44 = v4->fields._photoStandFigure_5__3;
      if ( !_9__6 )
      {
        _9__6 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__6,
          (Il2CppObject *)v42,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__6__,
          0);
        v42->fields.__9__6 = _9__6;
        sub_1C36FFC((CGThumbnailListItem_o *)&v42->fields.__9__6, (int32_t)_9__6, v45, v46);
      }
      if ( !_4__this )
        goto LABEL_113;
      photoTargetFaceListIndex = _4__this->fields.photoTargetFaceListIndex;
      if ( !photoTargetFaceListIndex )
        goto LABEL_113;
      i_5__2 = v4->fields._i_5__2;
      if ( (unsigned int)i_5__2 >= LODWORD(photoTargetFaceListIndex->max_length) )
        goto LABEL_114;
      if ( !v44 )
        goto LABEL_113;
      PhotoStandFigureComponent__SetFacePhotoServant(v44, 0, _9__6, photoTargetFaceListIndex->m_Items[i_5__2], 0);
      v49 = v4->fields.__8__1;
      if ( !v49 )
        goto LABEL_113;
      _9__7 = v49->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__7,
          (Il2CppObject *)v49,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__7__,
          0);
        v49->fields.__9__7 = _9__7;
        sub_1C36FFC((CGThumbnailListItem_o *)&v49->fields.__9__7, (int32_t)_9__7, v51, v52);
      }
      v53 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v53, _9__7, 0);
      v4->fields.__2__current = (Il2CppObject *)v53;
      v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v38, (int32_t)v53, v54, v55);
      v41 = 4;
      goto LABEL_112;
    case 4:
    case 6:
      v4->fields.__1__state = -1;
      goto LABEL_60;
    case 5:
      photoStaffFigure_5__5 = v4->fields._photoStaffFigure_5__5;
      v4->fields.__1__state = -1;
      if ( !photoStaffFigure_5__5 )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)photoStaffFigure_5__5->fields.photoStandFigureBack;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UnityEngine_Component__get_transform(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !_4__this )
        goto LABEL_113;
      v57 = _4__this->fields.defaultPhotoServantPos.fields.x;
      v58 = _4__this->fields.defaultPhotoServantPos.fields.y;
      v59 = _4__this->fields.defaultPhotoServantPos.fields.z;
      v60 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v4->fields._i_5__2,
                                                          0);
      if ( !v60 )
        goto LABEL_113;
      if ( ((unsigned __int8)this & 1) != 0 )
        v61 = 1300.0;
      else
        v61 = -1812.0;
      v127.fields.x = v57 + v61;
      v127.fields.y = v58 + 0.0;
      v127.fields.z = v59 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v60, v127, 0);
      break;
    case 7:
      v4->fields.__1__state = -1;
      if ( !_4__this )
        goto LABEL_113;
      goto LABEL_69;
    default:
      return 0;
  }
  while ( 1 )
  {
LABEL_60:
    v4->fields._photoStandFigure_5__3 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._photoStandFigure_5__3, 0, v2, v3);
    v4->fields._photoStaffFigure_5__5 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._photoStaffFigure_5__5, 0, v62, v63);
    v20 = v4->fields._i_5__2 + 1;
    v4->fields._i_5__2 = v20;
LABEL_61:
    if ( !_4__this )
      goto LABEL_113;
    if ( v20 >= 2 )
    {
      MyRoomControl__SetLayerChangeObj(_4__this, 0);
LABEL_64:
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)_4__this->fields.photoServantSelectMenu;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                          (UnityEngine_Behaviour_o *)this,
                                                          0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v64 = v4->fields.__8__1;
        if ( !v64 )
          goto LABEL_113;
        v64->fields.flag = 1;
        photoServantSelectMenu = _4__this->fields.photoServantSelectMenu;
        v66 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          v66,
          (Il2CppObject *)v64,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__0__,
          0);
        if ( !photoServantSelectMenu )
          goto LABEL_113;
        PhotoServantSelectMenu__Close(photoServantSelectMenu, v66, 0);
        v67 = (Il2CppObject *)v4->fields.__8__1;
        v68 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v68, v67, Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__1__, 0);
        v69 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v69, v68, 0);
        v4->fields.__2__current = (Il2CppObject *)v69;
        v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v38, (int32_t)v69, v70, v71);
        v41 = 7;
        goto LABEL_112;
      }
LABEL_69:
      _4__this->fields.photoState = 2;
      MyRoomControl__FadeInPhotoTarget(_4__this, (System_String_o *)StringLiteral_6741/*"FinishedFadeInPhotoTarget"*/, 0, 0);
      return 0;
    }
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)_4__this->fields.photoTargetList;
    if ( !this )
      goto LABEL_113;
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)this,
                                                        v20,
                                                        (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
      break;
    if ( (_DWORD)this == 1 )
    {
      v77 = v4->fields.__8__1;
      if ( !v77 )
        goto LABEL_113;
      _9__10 = v77->fields.__9__10;
      v77->fields.flag = 1;
      v79 = v4->fields._i_5__2;
      if ( !_9__10 )
      {
        _9__10 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__10,
          (Il2CppObject *)v77,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__10__,
          0);
        v77->fields.__9__10 = _9__10;
        sub_1C36FFC((CGThumbnailListItem_o *)&v77->fields.__9__10, (int32_t)_9__10, v80, v81);
      }
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v79, _9__10, 0);
      v82 = v4->fields.__8__1;
      if ( !v82 )
        goto LABEL_113;
      _9__11 = v82->fields.__9__11;
      if ( !_9__11 )
      {
        _9__11 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__11,
          (Il2CppObject *)v82,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__11__,
          0);
        v82->fields.__9__11 = _9__11;
        sub_1C36FFC((CGThumbnailListItem_o *)&v82->fields.__9__11, (int32_t)_9__11, v84, v85);
      }
      v86 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v86, _9__11, 0);
      v4->fields.__2__current = (Il2CppObject *)v86;
      v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v38, (int32_t)v86, v87, v88);
      v41 = 6;
      goto LABEL_112;
    }
    if ( !(_DWORD)this )
    {
      photoStandFigures = _4__this->fields.photoStandFigures;
      if ( !photoStandFigures )
        goto LABEL_113;
      v90 = v4->fields._i_5__2;
      if ( (unsigned int)v90 < LODWORD(photoStandFigures->max_length) )
      {
        v91 = photoStandFigures->m_Items[v90];
        v4->fields._photoStandFigure_5__3 = v91;
        p_photoStandFigure_5__3 = &v4->fields._photoStandFigure_5__3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._photoStandFigure_5__3, (int32_t)v91, v2, v3);
        if ( !v4->fields._photoStandFigure_5__3 )
          goto LABEL_113;
        if ( !_4__this->fields.myRoomData )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            v4->fields._photoStandFigure_5__3->fields._UserSvtId_k__BackingField,
                                                            v93);
        if ( !this )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0);
        if ( !*p_photoStandFigure_5__3 )
          goto LABEL_113;
        ImageLimitCount_k__BackingField = (*p_photoStandFigure_5__3)->fields._ImageLimitCount_k__BackingField;
        v95 = (int)this;
        MyRoomControl__SetImageIdAndFormId(
          _4__this,
          &imageId,
          &v4->fields._formId_5__4,
          (int32_t)this,
          ImageLimitCount_k__BackingField,
          0);
        v96 = v4->fields._photoStandFigure_5__3;
        if ( !v96 )
          goto LABEL_113;
        v96->fields._StandFigureImageId_k__BackingField = imageId;
        v97 = v4->fields.__8__1;
        if ( !v97 )
          goto LABEL_113;
        photoStandFigureBack = v96->fields.photoStandFigureBack;
        formId_5__4 = v4->fields._formId_5__4;
        _9__2 = v97->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)v97,
            Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__2__,
            0);
          v97->fields.__9__2 = _9__2;
          sub_1C36FFC((CGThumbnailListItem_o *)&v97->fields.__9__2, (int32_t)_9__2, v101, v102);
        }
        if ( !photoStandFigureBack )
          goto LABEL_113;
        StandFigureBack__SetMyRoomStandFigure(
          photoStandFigureBack,
          v95,
          ImageLimitCount_k__BackingField,
          1,
          0,
          formId_5__4,
          10,
          _9__2,
          !_4__this->fields.isOneShot,
          0);
        v103 = v4->fields.__8__1;
        if ( !v103 )
          goto LABEL_113;
        _9__3 = v103->fields.__9__3;
        if ( !_9__3 )
        {
          _9__3 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            _9__3,
            (Il2CppObject *)v103,
            Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__3__,
            0);
          v103->fields.__9__3 = _9__3;
          sub_1C36FFC((CGThumbnailListItem_o *)&v103->fields.__9__3, (int32_t)_9__3, v105, v106);
        }
        v107 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v107, _9__3, 0);
        v4->fields.__2__current = (Il2CppObject *)v107;
        v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v38, (int32_t)v107, v108, v109);
        v41 = 2;
        goto LABEL_112;
      }
LABEL_114:
      sub_1C372BC(this);
    }
  }
  v72 = _4__this->fields.photoStandFigures;
  if ( !v72 )
    goto LABEL_113;
  v73 = v4->fields._i_5__2;
  if ( (unsigned int)v73 >= LODWORD(v72->max_length) )
    goto LABEL_114;
  v74 = v72->m_Items[v73];
  v4->fields._photoStaffFigure_5__5 = v74;
  p_photoStaffFigure_5__5 = &v4->fields._photoStaffFigure_5__5;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._photoStaffFigure_5__5, (int32_t)v74, v2, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl__LoadPhotoTarget_d__409_o *)DataManager__GetMaster_object_((const MethodInfo_30E7C04 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !*p_photoStaffFigure_5__5 || !this )
    goto LABEL_113;
  this = (MyRoomControl__LoadPhotoTarget_d__409_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
                                                      (StaffPhotoCostumeMaster_o *)this,
                                                      &costumeEntity,
                                                      (*p_photoStaffFigure_5__5)->fields._StandFigureImageId_k__BackingField,
                                                      0);
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
  v110 = v4->fields.__8__1;
  if ( !v110 )
    goto LABEL_113;
  v110->fields.flag = 1;
  v111 = *p_photoStaffFigure_5__5;
  if ( !*p_photoStaffFigure_5__5 )
    goto LABEL_113;
  v112 = v111->fields.photoStandFigureBack;
  StandFigureImageId_k__BackingField = v111->fields._StandFigureImageId_k__BackingField;
  _9__8 = v110->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__8,
      (Il2CppObject *)v110,
      Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__8__,
      0);
    v110->fields.__9__8 = _9__8;
    sub_1C36FFC((CGThumbnailListItem_o *)&v110->fields.__9__8, (int32_t)_9__8, v115, v116);
  }
  if ( !v112
    || (StandFigureBack__SetMyRoomStandFigureForImageId(
          v112,
          StandFigureImageId_k__BackingField,
          1,
          faceId,
          10,
          _9__8,
          0),
        (v117 = v4->fields.__8__1) == 0) )
  {
LABEL_113:
    sub_1C372B4(this);
  }
  _9__9 = v117->fields.__9__9;
  if ( !_9__9 )
  {
    _9__9 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__9,
      (Il2CppObject *)v117,
      Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__9__,
      0);
    v117->fields.__9__9 = _9__9;
    sub_1C36FFC((CGThumbnailListItem_o *)&v117->fields.__9__9, (int32_t)_9__9, v119, v120);
  }
  v121 = (UnityEngine_WaitWhile_o *)sub_1C372A4(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v121, _9__9, 0);
  v4->fields.__2__current = (Il2CppObject *)v121;
  v38 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1C36FFC(v38, (int32_t)v121, v122, v123);
  v41 = 5;
LABEL_112:
  LODWORD(v38[-1].fields._ThumbnailSpritePath_k__BackingField) = v41;
  return 1;
}


Il2CppObject *MyRoomControl__LoadPhotoTarget_d__409__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__LoadPhotoTarget_d__409__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__LoadPhotoTarget_d__409_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__LoadPhotoTarget_d__409__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__LoadPhotoTarget_d__409__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__StartCameraEffect_d__420___ctor(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__StartCameraEffect_d__420__MoveNext(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__StartCameraEffect_d__420_o *v4; // x20
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v9; // x0
  UnityEngine_WaitForSeconds_o *v10; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  bool result; // w0
  int32_t v15; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v17; // s0
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *v19; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  CGThumbnailListItem_o *v21; // x20

  v4 = this;
  if ( (byte_4C3E437 & 1) == 0 )
  {
    sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)sub_1C37058(&UnityEngine_WaitForSeconds_TypeInfo);
    byte_4C3E437 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 2 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.takingPhotoFrameSprite;
    if ( !this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isOneShot, 0);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.takingPhotoFrameWideSprite;
    if ( !this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !_4__this->fields.isOneShot, 0);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v15 = _4__this->fields.isOneShot ? 362 : 870;
    UIWidget__set_width((UIWidget_o *)this, v15, 0);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    v17 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v17 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v17, 0);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4C3C921 )
    {
      sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C921 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)TweenAlpha__Begin(v19, 0.4, 0.0, 0);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)titleInfo->fields.backBtn;
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
    MyRoomControl__SetPhotoCampaignUi(_4__this, 1, 0);
    MyRoomControl__SetMaskCollider(_4__this, 0, 0);
    return 0;
  }
  if ( _1__state != 1 )
  {
    if ( !_1__state )
    {
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.shutterEffect;
        if ( this )
        {
          photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Instantiate_object__51855596(
            photoCampaignShutterEffect,
            transform,
            (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
          GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0);
          this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignProduction;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
            this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoFrameSprite;
            if ( this )
            {
              this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoFrameWideSprite;
                if ( this )
                {
                  this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
                    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
                    if ( this )
                    {
                      v9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
                      GameObjectExtensions__SafeGetComponent_object_(
                        v9,
                        (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
                      v10 = (UnityEngine_WaitForSeconds_o *)sub_1C372A4(UnityEngine_WaitForSeconds_TypeInfo);
                      UnityEngine_WaitForSeconds___ctor(v10, 0.066, 0);
                      v4->fields.__2__current = (Il2CppObject *)v10;
                      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                      sub_1C36FFC(p__2__current, (int32_t)v10, v12, v13);
                      result = 1;
                      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
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
      sub_1C372B4(this);
    }
    return 0;
  }
  v4->fields.__2__current = 0;
  v21 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
  sub_1C36FFC(v21, 0, v2, v3);
  LODWORD(v21[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *MyRoomControl__StartCameraEffect_d__420__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__StartCameraEffect_d__420__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__StartCameraEffect_d__420_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__StartCameraEffect_d__420__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__StartCameraEffect_d__420__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3E40D & 1) == 0 )
  {
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E40D = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)MyRoomControl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c___CheckCsUnlink_b__321_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E410 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E410 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0, 0);
}


void MyRoomControl___c___EndLoadPhotoAsset_b__401_0(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0 )
    sub_1C372B4(this);
  StandFigureBack__Init((StandFigureBack_o *)this, 0);
}


void MyRoomControl___c___EndLoad_b__239_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E40F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E40F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void MyRoomControl___c___GoToTitle_b__332_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E411 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4C3E411 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0);
}


void MyRoomControl___c___HidePhotoUi_b__437_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3E414 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E414 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0)) == 0 )
      sub_1C372B4(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  }
}


void MyRoomControl___c___OnClickChangeBg_b__450_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v3; // x8
  CommonUI_o *v4; // x19
  MyRoomControl___c_c *v5; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__450_2; // x20
  Il2CppObject *v8; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3E416 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__OnClickChangeBg_b__450_2__);
    sub_1C37058(&MyRoomControl___c_TypeInfo);
    byte_4C3E416 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v3 = AvalonSceneManager_TypeInfo;
  v4 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v3 = AvalonSceneManager_TypeInfo;
  }
  v5 = MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v3->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v5 = MyRoomControl___c_TypeInfo;
  }
  _9__450_2 = v5->static_fields->__9__450_2;
  if ( !_9__450_2 )
  {
    if ( !v5->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v5);
      v5 = MyRoomControl___c_TypeInfo;
    }
    v8 = (Il2CppObject *)v5->static_fields->__9;
    _9__450_2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__450_2, v8, Method_MyRoomControl___c__OnClickChangeBg_b__450_2__, 0);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__450_2 = _9__450_2;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__450_2, (int32_t)_9__450_2, v10, v11);
  }
  if ( !v4 )
    sub_1C372B4(v5);
  CommonUI__maskFadein(v4, DEFAULT_FADE_TIME, _9__450_2, 0);
}


void MyRoomControl___c___OnClickChangeBg_b__450_2(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E417 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E417 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void MyRoomControl___c___OnClickDispPhotoUi_b__438_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  if ( (byte_4C3E415 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E415 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0)) == 0 )
      sub_1C372B4(gameObject);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  }
}


bool MyRoomControl___c___SaveDisplayOverWriteIds_b__456_0(
        MyRoomControl___c_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1C372B4(this);
  return saveData->fields.groupId == 0;
}


void MyRoomControl___c___SetLayerChangeObj_b__412_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3E412 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E412 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1C372B4(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
}


void MyRoomControl___c___TransitionMyRoomTop_b__425_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  PhotoStandFigureComponent__Init(x, 0);
}


void MyRoomControl___c___TransitionMyRoomTop_b__425_2(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4C3E413 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3E413 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0, 0);
  if ( v4 )
  {
    if ( !x )
      sub_1C372B4(v4);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_71266752(gameObject, 0);
  }
}


void MyRoomControl___c___initMyRoom_b__217_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void MyRoomControl___c___initMyRoom_b__217_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0 )
    sub_1C372B4(this);
  StandFigureBack__Init((StandFigureBack_o *)this, 0);
}


void MyRoomControl___c___setSvtVoiceData_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3E40E & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E40E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
}


void MyRoomControl___c__DisplayClass237_0___ctor(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass237_0___voiceLoad_b__0(
        MyRoomControl___c__DisplayClass237_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(this);
  _4__this->fields.isVoiceLoading = 0;
  ActionExtensions__Call(this->fields.endCallback, 0);
}


void MyRoomControl___c__DisplayClass241_0___ctor(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__0(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass241_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Action_o *standFigureCollectList; // x1
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  FavoriteChangeComponent_o *favoriteChangeComp; // x20
  System_Action_o *_9__1; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  v4 = this;
  if ( (byte_4C3E418 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_1C37058(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__);
    byte_4C3E418 = 1;
  }
  _4__this = v4->fields.__4__this;
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this[1].fields.__9__1, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[20].monitor, 0, 0);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v8->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v8->fields.isExistVoiceData, 0);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v9->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9->fields.isExistVoiceData, 0);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[19].fields.end_act) )
    MyRoomControl__setNormalFace_33511708((MyRoomControl_o *)this, 0, 0);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  favoriteChangeComp = v10->fields.favoriteChangeComp;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__,
      0);
    v4->fields.__9__1 = _9__1;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v13, v14);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1C372B4(this);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0);
}


void MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  int32_t mState; // w8
  struct MyRoomControl_o *v5; // x8
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *_9__2; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct MyRoomControl_o *v10; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v12; // x8
  float v13; // s8
  struct MyRoomControl_o *v14; // x8
  float y; // s9
  float v16; // s0
  float v17; // s1
  struct MyRoomControl_o *v18; // x8
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3E419 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__);
    sub_1C37058(&StringLiteral_11294/*"ReleaseTouch"*/);
    byte_4C3E419 = 1;
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
    StandFigureBack__Fadein((StandFigureBack_o *)_4__this, 0, 0);
    v10 = this->fields.__4__this;
    if ( !v10 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v10->fields.standFigureBack;
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)_4__this, 0, 0);
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)_4__this->fields.myRoomData;
    if ( !_4__this )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_30;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)_4__this, 0);
    v12 = this->fields.__4__this;
    if ( !v12 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v12->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    v13 = *(float *)&localPosition;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_30;
    v19 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)_4__this, 0);
    v14 = this->fields.__4__this;
    if ( !v14 )
      goto LABEL_30;
    _4__this = (MyRoomControl_o *)v14->fields.svtObj;
    if ( !_4__this )
      goto LABEL_30;
    y = v19.fields.y;
    _4__this = (MyRoomControl_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)_4__this, 0);
    if ( !_4__this )
      goto LABEL_30;
    v20 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)_4__this, 0);
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_30;
    v16 = -v13;
    v17 = y;
    MyRoomControl__moveControl(_4__this, _4__this->fields.svtObj, v20, (System_String_o *)StringLiteral_11294/*"ReleaseTouch"*/, 0);
  }
  else if ( !mState )
  {
    if ( !_4__this->fields.isHeroineReave
      || (MyRoomControl__ChangeSetStandFigureObj(_4__this, !_4__this->fields.isHeroine, 1, 0),
          (_4__this = this->fields.__4__this) != 0) )
    {
      _4__this = (MyRoomControl_o *)_4__this->fields.frontObjectManager;
      if ( _4__this )
      {
        MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)_4__this, 0);
        v5 = this->fields.__4__this;
        if ( v5 )
        {
          standFigureBack = v5->fields.standFigureBack;
          _9__2 = this->fields.__9__2;
          if ( !_9__2 )
          {
            _9__2 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__,
              0);
            this->fields.__9__2 = _9__2;
            sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v8, v9);
          }
          if ( standFigureBack )
          {
            StandFigureBack__Fadein(standFigureBack, _9__2, 0);
            return;
          }
        }
      }
    }
LABEL_30:
    sub_1C372B4(_4__this);
  }
  ActionExtensions__Call(this->fields.end_act, 0);
  v18 = this->fields.__4__this;
  if ( !v18 )
    goto LABEL_30;
  v18->fields.isSvtLoading = 0;
}


void MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__2(
        MyRoomControl___c__DisplayClass241_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  _BOOL4 isHeroine; // w8

  ActionExtensions__Call(this->fields.end_act, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0), (_4__this = this->fields.__4__this) == 0) )
    sub_1C372B4(_4__this);
  isHeroine = _4__this->fields.isHeroine;
  _4__this->fields.isSvtLoading = 0;
  if ( isHeroine && _4__this->fields.isHeroineReave )
    MyRoomControl__ChangeSetBtnsTouch(_4__this, 0, 0);
}


void MyRoomControl___c__DisplayClass242_0___ctor(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass242_0___SetMySvtFigure_b__0(
        MyRoomControl___c__DisplayClass242_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass242_0_o *v3; // x19
  UnityEngine_GameObject_o *voicePlayBtn; // x20

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v3 = this, (this = (MyRoomControl___c__DisplayClass242_0_o *)_4__this->fields.svtClickCollider) == 0)
    || (voicePlayBtn = _4__this->fields.voicePlayBtn,
        this = (MyRoomControl___c__DisplayClass242_0_o *)UnityEngine_Collider__get_enabled(
                                                           (UnityEngine_Collider_o *)this,
                                                           0),
        !voicePlayBtn) )
  {
    sub_1C372B4(this);
  }
  UnityEngine_GameObject__SetActive(voicePlayBtn, (unsigned __int8)this & 1, 0);
  ActionExtensions__Call(v3->fields.end_act, 0);
}


void MyRoomControl___c__DisplayClass243_0___ctor(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass243_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass243_0_o *v5; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v7; // x8
  StandFigureBack_o *standFigureBack; // x20
  int32_t servantId; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v12; // x24

  v5 = this;
  if ( (byte_4C3E41B & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1C37058(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__);
    byte_4C3E41B = 1;
  }
  if ( assetData )
  {
    _4__this = v5->fields.__4__this;
    if ( !_4__this )
      goto LABEL_9;
    _4__this->fields.combineAssetData = assetData;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.combineAssetData, (int32_t)assetData, (int32_t)method, v3);
  }
  v7 = v5->fields.__4__this;
  if ( !v7
    || (standFigureBack = v7->fields.standFigureBack,
        servantId = v5->fields.servantId,
        imageLimitCount = v5->fields.imageLimitCount,
        formId = v5->fields.formId,
        v12 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo),
        System_Action___ctor(
          v12,
          (Il2CppObject *)v5,
          Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__,
          0),
        !standFigureBack) )
  {
LABEL_9:
    sub_1C372B4(this);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, imageLimitCount, 1, 0, formId, 10, v12, 0, 0);
}


void MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__2(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v4; // x8

  ActionExtensions__Call(this->fields.end_act, 0);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0), (v4 = this->fields.__4__this) == 0) )
    sub_1C372B4(_4__this);
  v4->fields.isSvtLoading = 0;
}


void MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_g__OnEnd_0(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass243_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_o *standFigureBack; // x9
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  struct MyRoomControl_o *v8; // x8
  struct MyRoomControl_o *v9; // x8
  struct MyRoomControl_o *v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct MyRoomControl_o *v12; // x8
  struct MyRoomControl_o *v13; // x8
  int32_t formId; // w8
  struct MyRoomControl_o *v15; // x8
  StandFigureBack_o *v16; // x20
  System_Action_o *v17; // x21
  struct MyRoomControl_o *v18; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v20; // x8
  float v21; // s8
  struct MyRoomControl_o *v22; // x8
  float y; // s9
  float v24; // s0
  float v25; // s1
  struct MyRoomControl_o *v26; // x8
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4C3E41A & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__2__);
    this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1C37058(&StringLiteral_11294/*"ReleaseTouch"*/);
    byte_4C3E41A = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_44;
  standFigureBack = _4__this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_44;
  standFigureCollectList = standFigureBack->fields.standFigureCollectList;
  *(_QWORD *)&this[1].fields.formId = standFigureCollectList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[1].fields.formId, (int32_t)standFigureCollectList, v2, v3);
  MainMenuBar__setMenuActive(1, 0, 0);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v8->fields.moveBtnObj;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v9->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v10->fields.helpBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v11->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v12->fields.svtClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v13->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  if ( LOBYTE(this[19].fields.end_act) )
    MyRoomControl__setNormalFace_33511708((MyRoomControl_o *)this, 0, 0);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  formId = this[18].fields.formId;
  if ( formId == 1 )
  {
    this = (MyRoomControl___c__DisplayClass243_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_44;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0, 0);
    v18 = v4->fields.__4__this;
    if ( !v18 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v18->fields.standFigureBack;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)StandFigureBack__GetSvtStandFigure((StandFigureBack_o *)this, 0, 0);
    if ( !this )
      goto LABEL_44;
    this = *(MyRoomControl___c__DisplayClass243_0_o **)&this->fields.servantId;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_44;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v20 = v4->fields.__4__this;
    if ( !v20 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v20->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v21 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_44;
    v27 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    v22 = v4->fields.__4__this;
    if ( !v22 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v22->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    y = v27.fields.y;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0);
    if ( !this )
      goto LABEL_44;
    v28 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
    this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_44;
    v24 = -v21;
    v25 = y;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].monitor,
      v28,
      (System_String_o *)StringLiteral_11294/*"ReleaseTouch"*/,
      0);
  }
  else if ( !formId )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0);
    v15 = v4->fields.__4__this;
    if ( v15 )
    {
      v16 = v15->fields.standFigureBack;
      v17 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(
        v17,
        (Il2CppObject *)v4,
        Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__2__,
        0);
      if ( v16 )
      {
        StandFigureBack__Fadein(v16, v17, 0);
        return;
      }
    }
LABEL_44:
    sub_1C372B4(this);
  }
  ActionExtensions__Call(v4->fields.end_act, 0);
  v26 = v4->fields.__4__this;
  if ( !v26 )
    goto LABEL_44;
  v26->fields.isSvtLoading = 0;
}


void MyRoomControl___c__DisplayClass250_0___ctor(
        MyRoomControl___c__DisplayClass250_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass250_0___resetSvtVoiceData_b__0(
        MyRoomControl___c__DisplayClass250_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass250_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v7; // x8

  v2 = this;
  if ( (byte_4C3E41C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    this = (MyRoomControl___c__DisplayClass250_0_o *)sub_1C37058(&StringLiteral_8292/*"LOAD_END"*/);
    byte_4C3E41C = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (MyRoomControl___c__DisplayClass250_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_11;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v4->fields.imageIdList) == 0
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass250_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0), (v7 = v2->fields.__4__this) == 0)
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v7->fields.myRoomFsm) == 0 )
  {
LABEL_11:
    sub_1C372B4(this);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8292/*"LOAD_END"*/, 0);
}


void MyRoomControl___c__DisplayClass305_0___ctor(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass305_0___SetGallery_b__0(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__SetMaskCollider(_4__this, 0, 0);
}


void MyRoomControl___c__DisplayClass305_0___SetGallery_b__1(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (MyRoomControl___c__DisplayClass305_0_o *)_4__this->fields.mStateMaterial) == 0)
    || (MyRoomStateMaterial__GalleryBack((MyRoomStateMaterial_o *)this, 1, v2), (v5 = v4->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v5->fields.titleInfo, 1, 0);
}


void MyRoomControl___c__DisplayClass305_0___SetGallery_b__2(
        MyRoomControl___c__DisplayClass305_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x22
  struct MyRoomControl_o *v6; // x8
  Il2CppObject *v7; // x20
  UnityEngine_Transform_o *transform; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct MyRoomControl_o *v11; // x8
  Il2CppObject *v12; // x25
  CGThumbnailDialog_o *klass; // x20
  System_Action_o *_9__3; // x23
  System_Collections_Generic_List_GalleryEntity__o *galleryList; // x21
  int32_t warId; // w22
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x24
  System_Action_o *_9__4; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct MyRoomControl_o *v23; // x8

  v4 = this;
  if ( (byte_4C3E41D & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailDialog___);
    sub_1C37058(&Method_MyRoomControl_OnClickBack__);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__3__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__4__);
    this = (MyRoomControl___c__DisplayClass305_0_o *)sub_1C37058(&StringLiteral_3315/*"CGThumbnailDialog"*/);
    byte_4C3E41D = 1;
  }
  if ( !assetData )
    goto LABEL_23;
  _4__this = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass305_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_3315/*"CGThumbnailDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  v6 = v4->fields.__4__this;
  if ( !v6 )
    goto LABEL_23;
  v7 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass305_0_o *)v6->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v7,
                                                     transform,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailDialog___);
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.cgThumbnailDialog = (struct CGThumbnailDialog_o *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.cgThumbnailDialog, (int32_t)this, v9, v10);
  this = (MyRoomControl___c__DisplayClass305_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  MyRoomControl__stopSvtVoice((MyRoomControl_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass305_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  LODWORD(this[17].fields.__4__this) = 20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, 20, 1, 0);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)v11->fields.cgThumbnailDialog;
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
  v12 = (Il2CppObject *)v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_23;
  klass = (CGThumbnailDialog_o *)v12[58].klass;
  _9__3 = v4->fields.__9__3;
  galleryList = v4->fields.galleryList;
  warId = v4->fields.warId;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v4, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__3__, 0);
    v4->fields.__9__3 = _9__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v17, v18);
    v12 = (Il2CppObject *)v4->fields.__4__this;
  }
  v19 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v19, v12, (intptr_t)Method_MyRoomControl_OnClickBack__, 0);
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
    System_Action___ctor(_9__4, (Il2CppObject *)v4, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__4__, 0);
    v4->fields.__9__4 = _9__4;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v21, v22);
  }
  if ( !klass
    || (CGThumbnailDialog__Open(klass, galleryList, warId, _9__3, v19, _9__4, 0), (v23 = v4->fields.__4__this) == 0) )
  {
LABEL_23:
    sub_1C372B4(this);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v23->fields.titleInfo, 0, 0);
}


void MyRoomControl___c__DisplayClass305_0___SetGallery_b__3(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__SetMaskCollider(_4__this, 0, 0);
}


void MyRoomControl___c__DisplayClass305_0___SetGallery_b__4(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (MyRoomControl___c__DisplayClass305_0_o *)_4__this->fields.mStateMaterial) == 0)
    || (MyRoomStateMaterial__GalleryBack((MyRoomStateMaterial_o *)this, 1, v2), (v5 = v4->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v5->fields.titleInfo, 1, 0);
}


void MyRoomControl___c__DisplayClass325_0___ctor(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__0(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass325_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v7; // x8

  v2 = this;
  if ( (byte_4C3E41E & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass325_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    byte_4C3E41E = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass325_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_10;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass325_0_o *)v4->fields.imageIdList) == 0
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass325_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0), (v7 = v2->fields.__4__this) == 0) )
  {
LABEL_10:
    sub_1C372B4(this);
  }
  v7->fields.isExistVoiceData = 1;
}


void MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  struct System_Action_o *callback; // x8

  if ( (byte_4C3E41F & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4C3E41F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0);
}


void MyRoomControl___c__DisplayClass344_0___ctor(
        MyRoomControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass344_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass344_0_o *v6; // x19
  struct System_Collections_Generic_List_StandFigureCollect__o *standFigureCollectList; // x1
  struct MyRoomControl_o *v8; // x8
  float y; // s8
  float z; // s9
  struct MyRoomControl_o *v11; // x8
  UnityEngine_Vector3_o localPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v13; // 0:s0.4,4:s1.4,8:s2.4

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_14;
  bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
  if ( !bondsStandFigureBack )
    goto LABEL_14;
  v6 = this;
  this = (MyRoomControl___c__DisplayClass344_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = bondsStandFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1C36FFC((CGThumbnailListItem_o *)&this[2].monitor, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass344_0_o *)v6->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass344_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0);
  if ( !this )
    goto LABEL_14;
  localPosition = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0);
  v8 = v6->fields.__4__this;
  if ( !v8 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass344_0_o *)v8->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  y = localPosition.fields.y;
  z = localPosition.fields.z;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0, 0);
  v11 = v6->fields.__4__this;
  if ( !v11
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)v11->fields.bondsStandFigureBack) == 0
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0)) == 0
    || (this = *(MyRoomControl___c__DisplayClass344_0_o **)&this->fields.createStandEnd) == 0
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0)) == 0 )
  {
LABEL_14:
    sub_1C372B4(this);
  }
  v13.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0));
  v13.fields.y = y;
  v13.fields.z = z;
  GameObjectExtensions__SetLocalPosition(v6->fields.bondsSvtObj, v13, 0);
  v6->fields.createStandEnd = 1;
}


void MyRoomControl___c__DisplayClass360_0___ctor(
        MyRoomControl___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass360_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1C372B4(0);
  CRIMoviePlayer__Dispose(player, 0);
}


void MyRoomControl___c__DisplayClass381_0___ctor(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0 )
    sub_1C372B4(this);
  return this->fields.loadedCount < SLODWORD(multipleStandFigureBacks->max_length);
}


void MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void MyRoomControl___c__DisplayClass385_0___ctor(
        MyRoomControl___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass385_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__ReleaseTouch(_4__this, 0);
}


void MyRoomControl___c__DisplayClass385_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8
  MyRoomControl_o *_4__this; // x0

  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__ReleaseTouch(_4__this, 0);
}


void MyRoomControl___c__DisplayClass396_0___ctor(
        MyRoomControl___c__DisplayClass396_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass396_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass396_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass396_0_o *v5; // x19
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass396_0_o **p_fields; // x23
  Il2CppObject *Object_object__51154888; // x21
  Il2CppObject *Component_object; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  MyRoomControl___c__DisplayClass396_0_o *v12; // x8
  Il2CppObject *v13; // x21
  Il2CppObject *v14; // x21
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  MyRoomControl___c__DisplayClass396_0_o *v17; // x8
  MyRoomControl___c__DisplayClass396_0_o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  MyRoomControl___c__DisplayClass396_0_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  MyRoomControl___c__DisplayClass396_0_o *v24; // x26
  Il2CppObject *v25; // x21
  UnityEngine_Transform_o *transform; // x22
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  MyRoomControl___c__DisplayClass396_0_o *v29; // x22
  Il2CppObject *v30; // x21
  UnityEngine_Transform_o *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  MyRoomControl___c__DisplayClass396_0_o *v34; // x8
  MyRoomControl___c__DisplayClass396_0_o *v35; // x22
  Il2CppObject *v36; // x21
  UnityEngine_Transform_o *v37; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  MyRoomControl___c__DisplayClass396_0_o *v40; // x8
  MyRoomControl___c__DisplayClass396_0_o *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  MyRoomControl___c__DisplayClass396_0_o *v44; // x1
  MyRoomControl___c__DisplayClass396_0_o *v45; // x22
  Il2CppObject *v46; // x21
  UnityEngine_Transform_o *v47; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  MyRoomControl___c__DisplayClass396_0_o *v50; // x22
  Il2CppObject *v51; // x21
  UnityEngine_Transform_o *v52; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  MyRoomControl___c__DisplayClass396_0_o *v55; // x8
  MyRoomControl___c__DisplayClass396_0_o *v56; // x21
  int32_t v57; // w2
  const MethodInfo *v58; // x3

  v5 = this;
  if ( (byte_4C3E420 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_GameObject____78105168);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    sub_1C37058(&Method_UnityEngine_Object_Instantiate_GameObject____78192880);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&StringLiteral_20331/*"img_bg_shutter"*/);
    sub_1C37058(&StringLiteral_8381/*"LayerChangeButton"*/);
    sub_1C37058(&StringLiteral_10624/*"PhotoSettingButton"*/);
    sub_1C37058(&StringLiteral_8942/*"MasterEquipSettingDialog"*/);
    sub_1C37058(&StringLiteral_5358/*"DownloadPhotoCampaignAtlas"*/);
    sub_1C37058(&StringLiteral_17182/*"bit_camera_shutter"*/);
    sub_1C37058(&StringLiteral_10619/*"PhotoCampaignStaffCostumeSelectDialog"*/);
    sub_1C37058(&StringLiteral_10621/*"PhotoFrameSelectDialog"*/);
    sub_1C37058(&StringLiteral_17181/*"bit_camera_iconblink"*/);
    sub_1C37058(&StringLiteral_10691/*"Polaroid_btn_shutter"*/);
    sub_1C37058(&StringLiteral_10620/*"PhotoCampaignStaffSelectDialog"*/);
    sub_1C37058(&StringLiteral_5359/*"DownloadPhotoFrameAtlas"*/);
    this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1C37058(&StringLiteral_10626/*"PhotoTargetSelectDialog"*/);
    byte_4C3E420 = 1;
  }
  p_fields = (MyRoomControl___c__DisplayClass396_0_o **)&v5->fields;
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_68;
  _4__this->fields.photoCampaignAssetData = assetData;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&_4__this->fields.photoCampaignAssetData,
    (int32_t)assetData,
    (int32_t)method,
    v3);
  if ( !assetData )
    goto LABEL_68;
  Object_object__51154888 = AssetData__GetObject_object__51154888(
                              assetData,
                              (System_String_o *)StringLiteral_5358/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__51154888,
                                                     0,
                                                     0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__51154888 )
      goto LABEL_68;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__51154888,
                         (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0,
                                                       0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v12[44].monitor = Component_object;
      sub_1C36FFC((CGThumbnailListItem_o *)&v12[44].monitor, (int32_t)Component_object, v10, v11);
    }
  }
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_10691/*"Polaroid_btn_shutter"*/,
    0);
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].klass,
    (System_String_o *)StringLiteral_20331/*"img_bg_shutter"*/,
    0);
  v13 = AssetData__GetObject_object__51154888(
          assetData,
          (System_String_o *)StringLiteral_5359/*"DownloadPhotoFrameAtlas"*/,
          (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0, 0);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v13 )
      goto LABEL_68;
    v14 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v13,
            (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v14,
                                                       0,
                                                       0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v17 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v17[44].fields.__4__this = (struct MyRoomControl_o *)v14;
      sub_1C36FFC((CGThumbnailListItem_o *)&v17[44].fields, (int32_t)v14, v15, v16);
    }
  }
  v18 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_17181/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !v18 )
    goto LABEL_68;
  v18[38].fields.callBack = (struct System_Action_o *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v18[38].fields.callBack, (int32_t)this, v19, v20);
  v21 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_17182/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !v21 )
    goto LABEL_68;
  v21[39].monitor = this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v21[39].monitor, (int32_t)this, v22, v23);
  v24 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_10626/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  v25 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v25,
                                                     transform,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v24 )
    goto LABEL_68;
  v24[41].klass = (MyRoomControl___c__DisplayClass396_0_c *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v24[41], (int32_t)this, v27, v28);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[41].klass;
  if ( !this )
    goto LABEL_68;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0);
  v29 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_10620/*"PhotoCampaignStaffSelectDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  v30 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v31 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v30,
                                                     v31,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___);
  if ( !v29 )
    goto LABEL_68;
  v29[41].monitor = this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v29[41].monitor, (int32_t)this, v32, v33);
  v34 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v34[41].monitor;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffSelectDialog__Init((PhotoCampaignStaffSelectDialog_o *)this, (UIAtlas_o *)v34[44].monitor, 0);
  v35 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_10619/*"PhotoCampaignStaffCostumeSelectDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  v36 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v37 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v36,
                                                     v37,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___);
  if ( !v35 )
    goto LABEL_68;
  v35[41].fields.__4__this = (struct MyRoomControl_o *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v35[41].fields, (int32_t)this, v38, v39);
  v40 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v40[41].fields.__4__this;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffCostumeSelectDialog__Init(
    (PhotoCampaignStaffCostumeSelectDialog_o *)this,
    (UIAtlas_o *)v40[44].monitor,
    0);
  v41 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_10624/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     (Il2CppObject *)this,
                                                     (UnityEngine_Transform_o *)(*p_fields)[19].fields.__4__this,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v41 )
    goto LABEL_68;
  v41[41].fields.callBack = (struct System_Action_o *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v41[41].fields.callBack, (int32_t)this, v42, v43);
  v44 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v44[41].fields.callBack;
  if ( !this )
    goto LABEL_68;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)v44, 0);
  v45 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_8942/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  v46 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v47 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v46,
                                                     v47,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v45 )
    goto LABEL_68;
  v45[42].klass = (MyRoomControl___c__DisplayClass396_0_c *)this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v45[42], (int32_t)this, v48, v49);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[42].klass;
  if ( !this )
    goto LABEL_68;
  MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0);
  v50 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_10621/*"PhotoFrameSelectDialog"*/,
                                                     (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168);
  if ( !*p_fields )
    goto LABEL_68;
  v51 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v52 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__51855596(
                                                     v51,
                                                     v52,
                                                     (const MethodInfo_31740EC *)Method_UnityEngine_Object_Instantiate_GameObject____78192880);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___);
  if ( !v50 )
    goto LABEL_68;
  v50[42].monitor = this;
  sub_1C36FFC((CGThumbnailListItem_o *)&v50[42].monitor, (int32_t)this, v53, v54);
  v55 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v55[42].monitor;
  if ( !this
    || (PhotoFrameSelectDialog__Init((PhotoFrameSelectDialog_o *)this, (UIAtlas_o *)v55[44].fields.__4__this, 0),
        v56 = *p_fields,
        (this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__51154888(
                                                            assetData,
                                                            (System_String_o *)StringLiteral_8381/*"LayerChangeButton"*/,
                                                            (const MethodInfo_30C8FC8 *)Method_AssetData_GetObject_GameObject____78105168)) == 0)
    || (this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___),
        !v56)
    || (v56[44].fields.callBack = (struct System_Action_o *)this,
        sub_1C36FFC((CGThumbnailListItem_o *)&v56[44].fields.callBack, (int32_t)this, v57, v58),
        (this = (MyRoomControl___c__DisplayClass396_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
LABEL_68:
    sub_1C372B4(this);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0);
  ActionExtensions__Call(v5->fields.callBack, 0);
}


void MyRoomControl___c__DisplayClass397_0___ctor(
        MyRoomControl___c__DisplayClass397_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass397_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass397_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass397_0_o *v5; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v8; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct EquipEntity_o *v12; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterMaleEquipTexture; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v5 = this;
  if ( (byte_4C3E421 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass397_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E421 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass397_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v8 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v10 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v10[4] = (EquipEntity_c *)assetData;
          sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)assetData, (int32_t)method, v3);
        }
        v11 = v5->fields.__4__this;
        if ( v11 )
        {
          v12 = v5->fields.equipEnt;
          if ( v12 )
          {
            masterMaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v11->fields.masterMaleEquipTexture;
            v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
            v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v15;
            *(_QWORD *)&v17.fields.fakeValue = v14;
            this = (MyRoomControl___c__DisplayClass397_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v17,
                                                               0);
            if ( assetData )
            {
              v16 = (int)this;
              this = (MyRoomControl___c__DisplayClass397_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v16,
                  (Il2CppObject *)this,
                  (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C372B4(this);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(assetData, 0);
}


void MyRoomControl___c__DisplayClass397_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass397_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass397_0_o *v5; // x20
  struct MyRoomControl_o *_4__this; // x8
  struct EquipEntity_o *equipEnt; // x8
  _QWORD *v8; // x9
  __int64 _4__this_low; // x10
  EquipEntity_c **v10; // x8
  struct MyRoomControl_o *v11; // x8
  struct EquipEntity_o *v12; // x9
  System_Collections_Generic_Dictionary_int__object__o *masterFemaleEquipTexture; // x20
  __int64 v14; // x21
  __int64 v15; // x22
  int32_t v16; // w21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v17; // 0:x0.16

  v5 = this;
  if ( (byte_4C3E422 & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData_GetObject_Texture2D___);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_AssetData__Add__);
    this = (MyRoomControl___c__DisplayClass397_0_o *)sub_1C37058(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    byte_4C3E422 = 1;
  }
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_20;
  if ( _4__this->fields.isLoadMasterEquip )
  {
    this = (MyRoomControl___c__DisplayClass397_0_o *)_4__this->fields.masterEquipAssetData;
    if ( this )
    {
      equipEnt = this->fields.equipEnt;
      v8 = Method_System_Collections_Generic_List_AssetData__Add__;
      ++HIDWORD(this->fields.__4__this);
      if ( equipEnt )
      {
        _4__this_low = SLODWORD(this->fields.__4__this);
        if ( (unsigned int)_4__this_low >= equipEnt->fields.id.fields.fakeValue )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)this,
            (Il2CppObject *)assetData,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
        }
        else
        {
          v10 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v10[4] = (EquipEntity_c *)assetData;
          sub_1C36FFC((CGThumbnailListItem_o *)(v10 + 4), (int32_t)assetData, (int32_t)method, v3);
        }
        v11 = v5->fields.__4__this;
        if ( v11 )
        {
          v12 = v5->fields.equipEnt;
          if ( v12 )
          {
            masterFemaleEquipTexture = (System_Collections_Generic_Dictionary_int__object__o *)v11->fields.masterFemaleEquipTexture;
            v15 = *(_QWORD *)&v12->fields.id.fields.currentCryptoKey;
            v14 = *(_QWORD *)&v12->fields.id.fields.fakeValue;
            if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
            *(_QWORD *)&v17.fields.currentCryptoKey = v15;
            *(_QWORD *)&v17.fields.fakeValue = v14;
            this = (MyRoomControl___c__DisplayClass397_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_48930896(
                                                               v17,
                                                               0);
            if ( assetData )
            {
              v16 = (int)this;
              this = (MyRoomControl___c__DisplayClass397_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_30C8EC0 *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v16,
                  (Il2CppObject *)this,
                  (const MethodInfo_33FA570 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1C372B4(this);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_40534712(assetData, 0);
}


void MyRoomControl___c__DisplayClass402_0___ctor(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass402_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass402_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  _BOOL4 isChangeTarget; // w9
  int v7; // w10
  int32_t v8; // w20
  int64_t v9; // x21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  PhotoStandFigureComponent_o *v11; // x9
  int64_t UserSvtId_k__BackingField; // x22
  System_Action_int__int__o *_9__2; // x21
  MyRoomControl_o *v14; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  System_Action_o *_9__3; // x22
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Collections_Generic_List_T__o *v20; // x8
  struct System_Object_array *items; // x9
  _QWORD *v22; // x10
  __int64 size; // x11
  struct System_Int64_array *temporaryPhotoUserSvtId; // x10
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x11
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  v4 = this;
  if ( (byte_4C3E423 & 1) == 0 )
  {
    sub_1C37058(&System_Action_long__int__TypeInfo);
    sub_1C37058(&System_Action_int__int__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__2__);
    this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1C37058(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__3__);
    byte_4C3E423 = 1;
  }
  switch ( targetType )
  {
    case 0:
      _4__this = v4->fields.__4__this;
      if ( !_4__this )
        goto LABEL_39;
      isChangeTarget = v4->fields.isChangeTarget;
      if ( v4->fields.isChangeTarget )
        v7 = 7;
      else
        v7 = 1;
      _4__this->fields.photoState = v7;
      if ( v4->fields.anotherTargetType )
      {
        v8 = -1;
        v9 = -1;
        if ( isChangeTarget )
          goto LABEL_10;
LABEL_34:
        UserSvtId_k__BackingField = -1;
        goto LABEL_35;
      }
      temporaryPhotoUserSvtId = _4__this->fields.temporaryPhotoUserSvtId;
      if ( !temporaryPhotoUserSvtId )
        goto LABEL_39;
      if ( !LODWORD(temporaryPhotoUserSvtId->max_length) )
        goto LABEL_40;
      temporaryPhotoSvtLimitCount = _4__this->fields.temporaryPhotoSvtLimitCount;
      if ( !temporaryPhotoSvtLimitCount )
        goto LABEL_39;
      if ( !LODWORD(temporaryPhotoSvtLimitCount->max_length) )
LABEL_40:
        sub_1C372BC(this);
      v9 = temporaryPhotoUserSvtId->m_Items[0];
      v8 = temporaryPhotoSvtLimitCount->m_Items[0];
      if ( !isChangeTarget )
        goto LABEL_34;
LABEL_10:
      photoStandFigures = _4__this->fields.photoStandFigures;
      if ( !photoStandFigures )
        goto LABEL_39;
      if ( !LODWORD(photoStandFigures->max_length) )
        goto LABEL_40;
      v11 = photoStandFigures->m_Items[0];
      if ( !v11 )
        goto LABEL_39;
      UserSvtId_k__BackingField = v11->fields._UserSvtId_k__BackingField;
LABEL_35:
      photoServantSelectMenu = _4__this->fields.photoServantSelectMenu;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_long__int__o *)sub_1C372A4(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__1__,
          0);
        v4->fields.__9__1 = _9__1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v28, v29);
      }
      if ( !photoServantSelectMenu )
LABEL_39:
        sub_1C372B4(this);
      PhotoServantSelectMenu__Open(photoServantSelectMenu, _9__1, v9, v8, UserSvtId_k__BackingField, 0);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v14 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1C372A4(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__2__,
          0);
        v4->fields.__9__2 = _9__2;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v15, v16);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__3__,
          0);
        v4->fields.__9__3 = _9__3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v18, v19);
      }
      if ( !v14 )
        goto LABEL_39;
      MyRoomControl__OpenMasterEquipSettingDialog(v14, _9__2, _9__3, 0);
      return;
    case 2:
      this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      MyRoomControl__OpenStaffSelectDialog(
        (MyRoomControl_o *)this,
        v4->fields.anotherTargetType,
        v4->fields.isChangeTarget,
        0);
      return;
    case 3:
      this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      v20 = (System_Collections_Generic_List_T__o *)this[21].fields.__4__this;
      if ( !v20 )
        goto LABEL_39;
      items = v20->fields._items;
      v22 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
      ++v20->fields._version;
      if ( !items )
        goto LABEL_39;
      size = v20->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v20,
          3,
          *(const MethodInfo_378882C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
        this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_39;
      }
      else
      {
        v20->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 3;
      }
      MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, v4->fields.isChangeTarget, 0);
      return;
    default:
      return;
  }
}


void MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__1(
        MyRoomControl___c__DisplayClass402_0_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v10; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v12; // x9
  struct System_Int64_array *temporaryPhotoUserSvtId; // x8
  int v14; // w9
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x8

  if ( (byte_4C3E424 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    byte_4C3E424 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_15;
  items = temporaryPhotoTargetList->fields._items;
  v10 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
  ++temporaryPhotoTargetList->fields._version;
  if ( !items )
    goto LABEL_15;
  size = temporaryPhotoTargetList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      0,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_15;
  }
  else
  {
    temporaryPhotoTargetList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 0;
  }
  v12 = _4__this->fields.temporaryPhotoTargetList;
  if ( !v12 )
    goto LABEL_15;
  temporaryPhotoUserSvtId = _4__this->fields.temporaryPhotoUserSvtId;
  if ( !temporaryPhotoUserSvtId )
    goto LABEL_15;
  v14 = v12->fields._size - 1;
  if ( (unsigned int)v14 >= LODWORD(temporaryPhotoUserSvtId->max_length) )
    goto LABEL_16;
  temporaryPhotoUserSvtId->m_Items[v14] = userSvtId;
  temporaryPhotoSvtLimitCount = _4__this->fields.temporaryPhotoSvtLimitCount;
  if ( !temporaryPhotoSvtLimitCount )
LABEL_15:
    sub_1C372B4(_4__this);
  if ( (unsigned int)v14 >= LODWORD(temporaryPhotoSvtLimitCount->max_length) )
LABEL_16:
    sub_1C372BC(_4__this);
  temporaryPhotoSvtLimitCount->m_Items[v14] = limitCount;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__2(
        MyRoomControl___c__DisplayClass402_0_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v10; // x10
  __int64 size; // x11

  if ( (byte_4C3E425 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__);
    byte_4C3E425 = 1;
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
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      1,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( _4__this )
      goto LABEL_9;
LABEL_10:
    sub_1C372B4(_4__this);
  }
  temporaryPhotoTargetList->fields._size = size + 1;
  *((_DWORD *)items->m_Items + size) = 1;
LABEL_9:
  _4__this->fields.temporaryMasterEquipId = equipId;
  _4__this->fields.temporaryMasterGenderType = genderType;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass403_0___ctor(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__0(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__1(
        MyRoomControl___c__DisplayClass403_0_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x8
  struct System_Object_array *items; // x9
  _QWORD *v8; // x10
  __int64 size; // x11
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v10; // x9
  struct System_Int32_array *temporaryStaffImageId; // x8
  int v12; // w9

  if ( (byte_4C3E426 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    byte_4C3E426 = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !temporaryPhotoTargetList )
    goto LABEL_13;
  items = temporaryPhotoTargetList->fields._items;
  v8 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
  ++temporaryPhotoTargetList->fields._version;
  if ( !items )
    goto LABEL_13;
  size = temporaryPhotoTargetList->fields._size;
  if ( (unsigned int)size >= LODWORD(items->max_length) )
  {
    System_Collections_Generic_List_Int32Enum___AddWithResize(
      temporaryPhotoTargetList,
      2,
      *(const MethodInfo_378882C **)(*(_QWORD *)(v8[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_13;
  }
  else
  {
    temporaryPhotoTargetList->fields._size = size + 1;
    *((_DWORD *)items->m_Items + size) = 2;
  }
  v10 = _4__this->fields.temporaryPhotoTargetList;
  if ( !v10 || (temporaryStaffImageId = _4__this->fields.temporaryStaffImageId) == 0 )
LABEL_13:
    sub_1C372B4(_4__this);
  v12 = v10->fields._size - 1;
  if ( (unsigned int)v12 >= LODWORD(temporaryStaffImageId->max_length) )
    sub_1C372BC(_4__this);
  temporaryStaffImageId->m_Items[v12] = imageId;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__2(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__OpenStaffSelectDialog(_4__this, this->fields.anotherTargetType, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass404_0___ctor(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__0(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  if ( this->fields.isChangeTarget )
  {
    _4__this->fields.photoState = 2;
    MyRoomControl__DispPhotoCampaign(_4__this, 0, 1, 0);
  }
  else
  {
    MyRoomControl__TransitionMyRoomTop(_4__this, 0);
  }
}


void MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__1(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass404_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4C3E427 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__);
    this = (MyRoomControl___c__DisplayClass404_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    byte_4C3E427 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass404_0_o *)_4__this->fields.temporaryPhotoTargetList) == 0
    || (System_Collections_Generic_List_Int32Enum___RemoveAt(
          (System_Collections_Generic_List_T__o *)this,
          LODWORD(this->fields.__4__this) - 1,
          (const MethodInfo_3789FAC *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__),
        (this = (MyRoomControl___c__DisplayClass404_0_o *)v2->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, 0, 0);
}


void MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__2(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass404_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v4; // x8
  MyRoomControl_o *v5; // x8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *_9__3; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  v2 = this;
  if ( (byte_4C3E428 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__);
    this = (MyRoomControl___c__DisplayClass404_0_o *)sub_1C37058(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__3__);
    byte_4C3E428 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass404_0_o *)_4__this->fields.temporaryPhotoTargetList;
  if ( !this )
    goto LABEL_15;
  System_Collections_Generic_List_Int32Enum___RemoveAt(
    (System_Collections_Generic_List_T__o *)this,
    LODWORD(this->fields.__4__this) - 1,
    (const MethodInfo_3789FAC *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__);
  v4 = v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass404_0_o *)v4->fields.photoServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass404_0_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                     (UnityEngine_Behaviour_o *)this,
                                                     0);
  v5 = v2->fields.__4__this;
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v5 )
    {
      photoServantSelectMenu = v5->fields.photoServantSelectMenu;
      _9__3 = v2->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__3__,
          0);
        v2->fields.__9__3 = _9__3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v8, v9);
      }
      if ( photoServantSelectMenu )
      {
        PhotoServantSelectMenu__Close(photoServantSelectMenu, _9__3, 0);
        return;
      }
    }
LABEL_15:
    sub_1C372B4(this);
  }
  if ( !v5 )
    goto LABEL_15;
  MyRoomControl__ConfirmTargetSelectState(v5, v2->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__3(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0);
}


void MyRoomControl___c__DisplayClass407_0___ctor(
        MyRoomControl___c__DisplayClass407_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass407_0___OpenPhotoFrameSelectDialog_b__0(
        MyRoomControl___c__DisplayClass407_0_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass407_0_o *v4; // x19
  MyRoomControl_o *_4__this; // x21
  UISprite_o *takingPhotoFrameSprite; // x22
  System_String_o *v7; // x0
  MyRoomControl_o *v8; // x21
  UISprite_o *takingPhotoFrameWideSprite; // x22
  System_String_o *v10; // x0
  MyRoomControl_o *v11; // x21
  UISprite_o *photoFrameSprite; // x22
  System_String_o *v13; // x0
  MyRoomControl_o *v14; // x21
  UISprite_o *photoFrameWideSprite; // x22
  System_String_o *v16; // x0

  v4 = this;
  if ( (byte_4C3E429 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_16545/*"_duo"*/);
    this = (MyRoomControl___c__DisplayClass407_0_o *)sub_1C37058(&StringLiteral_16581/*"_solo"*/);
    byte_4C3E429 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  takingPhotoFrameSprite = _4__this->fields.takingPhotoFrameSprite;
  v7 = System_String__Concat_63561656(spriteName, (System_String_o *)StringLiteral_16581/*"_solo"*/, 0);
  MyRoomControl__SetPhotoFrameSprite(_4__this, takingPhotoFrameSprite, v7, 0);
  v8 = v4->fields.__4__this;
  if ( !v8 )
    goto LABEL_8;
  takingPhotoFrameWideSprite = v8->fields.takingPhotoFrameWideSprite;
  v10 = System_String__Concat_63561656(spriteName, (System_String_o *)StringLiteral_16545/*"_duo"*/, 0);
  MyRoomControl__SetPhotoFrameSprite(v8, takingPhotoFrameWideSprite, v10, 0);
  v11 = v4->fields.__4__this;
  if ( !v11
    || (photoFrameSprite = v11->fields.photoFrameSprite,
        v13 = System_String__Concat_63561656(spriteName, (System_String_o *)StringLiteral_16581/*"_solo"*/, 0),
        MyRoomControl__SetPhotoFrameSprite(v11, photoFrameSprite, v13, 0),
        (v14 = v4->fields.__4__this) == 0) )
  {
LABEL_8:
    sub_1C372B4(this);
  }
  photoFrameWideSprite = v14->fields.photoFrameWideSprite;
  v16 = System_String__Concat_63561656(spriteName, (System_String_o *)StringLiteral_16545/*"_duo"*/, 0);
  MyRoomControl__SetPhotoFrameSprite(v14, photoFrameWideSprite, v16, 0);
  ActionExtensions__Call(v4->fields.decideCallback, 0);
}


void MyRoomControl___c__DisplayClass409_0___ctor(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__0(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__1(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__10(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__11(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__2(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__3(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__4(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__5(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__6(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__7(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__8(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__9(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void MyRoomControl___c__DisplayClass411_0___ctor(
        MyRoomControl___c__DisplayClass411_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass411_0___CreatePhotoMasterFigure_b__0(
        MyRoomControl___c__DisplayClass411_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass411_0_o *v2; // x19
  struct MyRoomControl_o *_4__this; // x8
  float *v4; // x8
  float v5; // s8
  float v6; // s9
  float v7; // s10
  MyRoomControl___c__DisplayClass411_0_o *v8; // x20
  float v9; // s0
  struct MyRoomControl_o *v10; // x20
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  struct MyRoomControl_o *v15; // x8
  struct MyRoomControl_o *v16; // x8
  UnityEngine_GameObject_o *v17; // x0
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4

  v2 = this;
  if ( (byte_4C3E42A & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass411_0_o *)sub_1C37058(&Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
    byte_4C3E42A = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0);
  v4 = (float *)v2->fields.__4__this;
  if ( !v4 )
    goto LABEL_17;
  v5 = v4[294];
  v6 = v4[295];
  v7 = v4[296];
  v8 = this;
  this = (MyRoomControl___c__DisplayClass411_0_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                     v2->fields.__4__this,
                                                     v2->fields.targetIndex,
                                                     0);
  if ( !v8 )
    goto LABEL_17;
  v9 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
  v18.fields.x = v5 + v9;
  v18.fields.y = v6 + 0.0;
  v18.fields.z = v7 + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v18, 0);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)v10->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_3140CC0 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v10->fields.photoMasterPanel = (struct UIPanel_o *)Component_object;
  sub_1C36FFC((CGThumbnailListItem_o *)&v10->fields.photoMasterPanel, (int32_t)Component_object, v13, v14);
  v15 = v2->fields.__4__this;
  if ( !v15
    || (this = (MyRoomControl___c__DisplayClass411_0_o *)v15->fields.photoMasterPanel) == 0
    || (UIPanel__set_depth((UIPanel_o *)this, 15, 0), (v16 = v2->fields.__4__this) == 0)
    || (this = (MyRoomControl___c__DisplayClass411_0_o *)v16->fields.photoMasterTexture) == 0 )
  {
LABEL_17:
    sub_1C372B4(this);
  }
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  GameObjectExtensions__SetLocalScale_36134400(v17, 0.9, 0);
  ActionExtensions__Call(v2->fields.func, 0);
}


void MyRoomControl___c__DisplayClass416_0___ctor(
        MyRoomControl___c__DisplayClass416_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass416_0___ChangePhotoCampaignServantFace_b__0(
        MyRoomControl___c__DisplayClass416_0_o *this,
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
  *(_QWORD *)&position.fields.x = 0;
  scale = 0.0;
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_13;
  photoStandFigures = _4__this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_13;
  figureIndex = this->fields.figureIndex;
  if ( (unsigned int)figureIndex >= LODWORD(photoStandFigures->max_length) )
    goto LABEL_14;
  MyRoomControl__GetPhotoCampaignServantPositionAndScale(
    _4__this,
    photoStandFigures->m_Items[figureIndex],
    figureIndex,
    &position,
    &scale,
    0);
  v6 = this->fields.__4__this;
  if ( !v6 )
    goto LABEL_13;
  v7 = v6->fields.photoStandFigures;
  if ( !v7 )
    goto LABEL_13;
  v8 = this->fields.figureIndex;
  if ( (unsigned int)v8 >= LODWORD(v7->max_length) )
    goto LABEL_14;
  _4__this = (struct MyRoomControl_o *)v7->m_Items[v8];
  if ( !_4__this
    || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0),
        GameObjectExtensions__SetLocalPosition(gameObject, position, 0),
        (v10 = this->fields.__4__this) == 0)
    || (v11 = v10->fields.photoStandFigures) == 0 )
  {
LABEL_13:
    sub_1C372B4(_4__this);
  }
  v12 = this->fields.figureIndex;
  if ( (unsigned int)v12 >= LODWORD(v11->max_length) )
LABEL_14:
    sub_1C372BC(_4__this);
  _4__this = (struct MyRoomControl_o *)v11->m_Items[v12];
  if ( !_4__this )
    goto LABEL_13;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0);
  GameObjectExtensions__SetLocalScale_36134400(v13, scale, 0);
}


void MyRoomControl___c__DisplayClass433_0___ctor(
        MyRoomControl___c__DisplayClass433_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass433_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass433_0_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x8
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  __int64 anotherIndex; // x10
  PhotoStandFigureComponent_o *v8; // x9
  int64_t UserSvtId_k__BackingField; // x21
  int32_t ImageLimitCount_k__BackingField; // w20
  System_Action_int__int__o *_9__2; // x21
  MyRoomControl_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Action_o *_9__3; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct MyRoomControl_o *v18; // x8
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  int32_t Item; // w0
  struct MyRoomControl_o *v21; // x8
  __int64 v22; // x8
  __int64 v23; // x9
  __int64 v24; // x8
  struct MyRoomControl_o *v25; // x8
  int64_t v26; // x22
  struct PhotoStandFigureComponent_array *v27; // x9
  __int64 targetIndex; // x10
  PhotoStandFigureComponent_o *v29; // x9
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25
  int32_t v32; // w2
  const MethodInfo *v33; // x3

  v4 = this;
  if ( (byte_4C3E42B & 1) == 0 )
  {
    sub_1C37058(&System_Action_long__int__TypeInfo);
    sub_1C37058(&System_Action_int__int__TypeInfo);
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__2__);
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1C37058(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__3__);
    byte_4C3E42B = 1;
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
        if ( (unsigned int)anotherIndex >= LODWORD(photoStandFigures->max_length) )
          goto LABEL_47;
        v8 = photoStandFigures->m_Items[anotherIndex];
        if ( !v8 )
          goto LABEL_46;
        UserSvtId_k__BackingField = v8->fields._UserSvtId_k__BackingField;
        ImageLimitCount_k__BackingField = v8->fields._ImageLimitCount_k__BackingField;
      }
      else
      {
        ImageLimitCount_k__BackingField = -1;
        UserSvtId_k__BackingField = -1;
      }
      this = (MyRoomControl___c__DisplayClass433_0_o *)_4__this->fields.photoTargetList;
      if ( !this )
        goto LABEL_46;
      this = (MyRoomControl___c__DisplayClass433_0_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         (System_Collections_Generic_List_T__o *)this,
                                                         v4->fields.targetIndex,
                                                         (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v25 = v4->fields.__4__this;
      if ( (_DWORD)this )
      {
        if ( !v25 )
          goto LABEL_46;
        v26 = -1;
        goto LABEL_42;
      }
      if ( !v25 )
        goto LABEL_46;
      v27 = v25->fields.photoStandFigures;
      if ( !v27 )
        goto LABEL_46;
      targetIndex = v4->fields.targetIndex;
      if ( (unsigned int)targetIndex >= LODWORD(v27->max_length) )
        goto LABEL_47;
      v29 = v27->m_Items[targetIndex];
      if ( !v29 )
        goto LABEL_46;
      v26 = v29->fields._UserSvtId_k__BackingField;
LABEL_42:
      photoServantSelectMenu = v25->fields.photoServantSelectMenu;
      v25->fields.targetChangeAnotherTargetType = v4->fields.anotherTargetType;
      v25->fields.targetChangeIsLeft = v4->fields.isLeft;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_long__int__o *)sub_1C372A4(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__1__,
          0);
        v4->fields.__9__1 = _9__1;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v32, v33);
      }
      if ( !photoServantSelectMenu )
LABEL_46:
        sub_1C372B4(this);
      PhotoServantSelectMenu__Open(
        photoServantSelectMenu,
        _9__1,
        UserSvtId_k__BackingField,
        ImageLimitCount_k__BackingField,
        v26,
        0);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v12 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1C372A4(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__2__,
          0);
        v4->fields.__9__2 = _9__2;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v13, v14);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__3__,
          0);
        v4->fields.__9__3 = _9__3;
        sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v16, v17);
      }
      if ( !v12 )
        goto LABEL_46;
      MyRoomControl__OpenMasterEquipSettingDialog(v12, _9__2, _9__3, 0);
      return;
    case 2:
      this = (MyRoomControl___c__DisplayClass433_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_46;
      MyRoomControl__OpenStaffChangeDialog(
        (MyRoomControl_o *)this,
        v4->fields.anotherTargetType,
        v4->fields.isLeft,
        v4->fields.cancelCallback,
        0);
      return;
    case 3:
      v18 = v4->fields.__4__this;
      if ( !v18 )
        goto LABEL_46;
      photoTargetList = (System_Collections_Generic_List_T__o *)v18->fields.photoTargetList;
      if ( v4->fields.isLeft )
      {
        if ( !photoTargetList )
          goto LABEL_46;
        Item = System_Collections_Generic_List_Int32Enum___get_Item(
                 photoTargetList,
                 1,
                 (const MethodInfo_378853C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          0,
          Item,
          (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        v21 = v4->fields.__4__this;
        if ( !v21 )
          goto LABEL_46;
        this = (MyRoomControl___c__DisplayClass433_0_o *)v21->fields.photoTargetList;
        if ( !this )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          1,
          3,
          (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass433_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
        v22 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
        if ( !v22 )
          goto LABEL_46;
        if ( *(_DWORD *)(v22 + 24) < 2u )
LABEL_47:
          sub_1C372BC(this);
        v23 = *(_QWORD *)(v22 + 40);
        if ( !v23 )
          goto LABEL_46;
        v24 = *(_QWORD *)(v22 + 32);
        if ( !v24 )
          goto LABEL_46;
        *(_QWORD *)(v24 + 40) = *(_QWORD *)(v23 + 40);
        *(_QWORD *)(v24 + 48) = *(_QWORD *)(v23 + 48);
      }
      else
      {
        if ( !photoTargetList )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          1,
          3,
          (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass433_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
      }
      MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 1, 0);
      return;
    default:
      return;
  }
}


void MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__1(
        MyRoomControl___c__DisplayClass433_0_o *this,
        int64_t userSvtId,
        int32_t limitCount,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass433_0_o *v6; // x21
  struct MyRoomControl_o *_4__this; // x8
  __int64 v8; // x8
  __int64 targetIndex; // x9
  __int64 v10; // x8

  v6 = this;
  if ( (byte_4C3E42C & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
    byte_4C3E42C = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass433_0_o *)_4__this->fields.photoTargetList;
  if ( !this )
    goto LABEL_10;
  System_Collections_Generic_List_Int32Enum___set_Item(
    (System_Collections_Generic_List_T__o *)this,
    v6->fields.targetIndex,
    0,
    (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass433_0_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v8 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
  if ( !v8 )
    goto LABEL_10;
  targetIndex = v6->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v8 + 24) )
    sub_1C372BC(this);
  v10 = *(_QWORD *)(v8 + 8 * targetIndex + 32);
  if ( !v10 )
LABEL_10:
    sub_1C372B4(this);
  *(_QWORD *)(v10 + 40) = userSvtId;
  *(_DWORD *)(v10 + 48) = limitCount;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0);
}


void MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__2(
        MyRoomControl___c__DisplayClass433_0_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass433_0_o *v6; // x21
  struct MyRoomControl_o *_4__this; // x8

  v6 = this;
  if ( (byte_4C3E42D & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
    byte_4C3E42D = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass433_0_o *)_4__this->fields.photoTargetList) == 0
    || (System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          v6->fields.targetIndex,
          1,
          (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__),
        (this = (MyRoomControl___c__DisplayClass433_0_o *)v6->fields.__4__this) == 0) )
  {
    sub_1C372B4(this);
  }
  LODWORD(this[17].fields.cancelCallback) = equipId;
  HIDWORD(this[17].fields.cancelCallback) = genderType;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0);
}


void MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass433_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0);
}


void MyRoomControl___c__DisplayClass434_0___ctor(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__0(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0);
}


void MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__1(
        MyRoomControl___c__DisplayClass434_0_o *this,
        int32_t imageId,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass434_0_o *v4; // x20
  struct MyRoomControl_o *_4__this; // x8
  __int64 v6; // x8
  __int64 targetIndex; // x9
  __int64 v8; // x8

  v4 = this;
  if ( (byte_4C3E42E & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass434_0_o *)sub_1C37058(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
    byte_4C3E42E = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass434_0_o *)_4__this->fields.photoTargetList;
  if ( !this )
    goto LABEL_10;
  System_Collections_Generic_List_Int32Enum___set_Item(
    (System_Collections_Generic_List_T__o *)this,
    v4->fields.targetIndex,
    2,
    (const MethodInfo_3788590 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass434_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v6 = *(_QWORD *)&this[15].fields.anotherTargetType;
  if ( !v6 )
    goto LABEL_10;
  targetIndex = v4->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v6 + 24) )
    sub_1C372BC(this);
  v8 = *(_QWORD *)(v6 + 8 * targetIndex + 32);
  if ( !v8 )
LABEL_10:
    sub_1C372B4(this);
  *(_DWORD *)(v8 + 52) = imageId;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0);
}


void MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__2(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1C372B4(0);
  MyRoomControl__OpenStaffChangeDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0);
}


void MyRoomControl___c__DisplayClass435_0___ctor(
        MyRoomControl___c__DisplayClass435_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass435_0___OpenStaffDialog_b__0(
        MyRoomControl___c__DisplayClass435_0_o *this,
        bool isDecide,
        int32_t staffId,
        System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList,
        const MethodInfo *method)
{
  __int64 v9; // x21
  Il2CppObject *Item; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_List_object__o **v13; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_List_object__o *v16; // x23
  System_Action_T__o *staffCostumeSelectDecideAction; // x19
  struct System_Func_StaffPhotoCostumeEntity__bool__o *_9__1; // x25
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t klass_high; // w23
  struct MyRoomControl_o *_4__this; // x8
  PhotoCampaignStaffCostumeSelectDialog_o *photoStaffCostumeSelectDialog; // x20
  System_Action_bool__int__o *v24; // x24

  if ( (byte_4C3E42F & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_int___);
    sub_1C37058(&System_Action_bool__int__TypeInfo);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___);
    sub_1C37058(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__1__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass435_1__OpenStaffDialog_b__2__);
    sub_1C37058(&MyRoomControl___c__DisplayClass435_1_TypeInfo);
    byte_4C3E42F = 1;
  }
  v9 = sub_1C372A4(MyRoomControl___c__DisplayClass435_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_18;
  *(_QWORD *)(v9 + 24) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)this, v11, v12);
  *(_QWORD *)(v9 + 16) = staffPhotoCostumeEntityList;
  v13 = (System_Collections_Generic_List_object__o **)(v9 + 16);
  sub_1C36FFC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)staffPhotoCostumeEntityList, v14, v15);
  if ( isDecide )
  {
    v16 = *v13;
    if ( !*v13 )
      goto LABEL_18;
    if ( v16->fields._size == 1 )
    {
      staffCostumeSelectDecideAction = (System_Action_T__o *)this->fields.staffCostumeSelectDecideAction;
      Item = System_Collections_Generic_List_object___get_Item(
               *v13,
               0,
               (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      if ( Item )
      {
        ActionExtensions__Call_int_(
          staffCostumeSelectDecideAction,
          (int32_t)Item[2].monitor,
          (const MethodInfo_30344A8 *)Method_ActionExtensions_Call_int___);
        return;
      }
LABEL_18:
      sub_1C372B4(Item);
    }
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (struct System_Func_StaffPhotoCostumeEntity__bool__o *)sub_1C372A4(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        (System_Func_object__bool__o *)_9__1,
        (Il2CppObject *)this,
        Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__1__,
        0);
      this->fields.__9__1 = _9__1;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v19, v20);
    }
    Item = System_Linq_Enumerable__FirstOrDefault_object__51451648(
             (System_Collections_Generic_IEnumerable_TSource__o *)v16,
             (System_Func_TSource__bool__o *)_9__1,
             (const MethodInfo_3111700 *)Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___);
    if ( Item )
      klass_high = HIDWORD(Item[1].klass);
    else
      klass_high = -1;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_18;
    photoStaffCostumeSelectDialog = _4__this->fields.photoStaffCostumeSelectDialog;
    v24 = (System_Action_bool__int__o *)sub_1C372A4(System_Action_bool__int__TypeInfo);
    System_Action_bool__int____ctor(
      v24,
      (Il2CppObject *)v9,
      Method_MyRoomControl___c__DisplayClass435_1__OpenStaffDialog_b__2__,
      0);
    if ( !photoStaffCostumeSelectDialog )
      goto LABEL_18;
    PhotoCampaignStaffCostumeSelectDialog__Open(
      photoStaffCostumeSelectDialog,
      v24,
      staffId,
      klass_high,
      (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)*v13,
      0);
  }
  else
  {
    ActionExtensions__Call(this->fields.staffSelectCancelAction, 0);
  }
}


bool MyRoomControl___c__DisplayClass435_0___OpenStaffDialog_b__1(
        MyRoomControl___c__DisplayClass435_0_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.imageId == this->fields.baseStaffImageId;
}


void MyRoomControl___c__DisplayClass435_1___ctor(
        MyRoomControl___c__DisplayClass435_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MyRoomControl___c__DisplayClass435_1___OpenStaffDialog_b__2(
        MyRoomControl___c__DisplayClass435_1_o *this,
        bool isCostumeDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x22
  Il2CppObject *object__51441300; // x0
  struct MyRoomControl___c__DisplayClass435_0_o *CS___8__locals1; // x8
  System_Action_T__o *staffCostumeSelectDecideAction; // x20
  struct System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList; // x19
  System_Func_object__bool__o *v12; // x21

  if ( (byte_4C3E430 & 1) == 0 )
  {
    sub_1C37058(&Method_ActionExtensions_Call_int___);
    sub_1C37058(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____78146680);
    sub_1C37058(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass435_2__OpenStaffDialog_b__3__);
    sub_1C37058(&MyRoomControl___c__DisplayClass435_2_TypeInfo);
    byte_4C3E430 = 1;
  }
  v7 = sub_1C372A4(MyRoomControl___c__DisplayClass435_2_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_9;
  *(_DWORD *)(v7 + 16) = idx;
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_9;
  if ( isCostumeDecide )
  {
    staffCostumeSelectDecideAction = (System_Action_T__o *)CS___8__locals1->fields.staffCostumeSelectDecideAction;
    staffPhotoCostumeEntityList = this->fields.staffPhotoCostumeEntityList;
    v12 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v12,
      (Il2CppObject *)v7,
      Method_MyRoomControl___c__DisplayClass435_2__OpenStaffDialog_b__3__,
      0);
    object__51441300 = System_Linq_Enumerable__First_object__51441300(
                         (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                         (System_Func_TSource__bool__o *)v12,
                         (const MethodInfo_310EE94 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____78146680);
    if ( object__51441300 )
    {
      ActionExtensions__Call_int_(
        staffCostumeSelectDecideAction,
        (int32_t)object__51441300[2].monitor,
        (const MethodInfo_30344A8 *)Method_ActionExtensions_Call_int___);
      return;
    }
LABEL_9:
    sub_1C372B4(object__51441300);
  }
  ActionExtensions__Call(CS___8__locals1->fields.staffCostumeSelectCancelAction, 0);
}


void MyRoomControl___c__DisplayClass435_2___ctor(
        MyRoomControl___c__DisplayClass435_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomControl___c__DisplayClass435_2___OpenStaffDialog_b__3(
        MyRoomControl___c__DisplayClass435_2_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1C372B4(this);
  return x->fields.idx == this->fields.idx;
}


void MyRoomControl___c__DisplayClass455_0___ctor(
        MyRoomControl___c__DisplayClass455_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomControl___c__DisplayClass455_0___GetDisplayBgGroupIndex_b__0(
        MyRoomControl___c__DisplayClass455_0_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1C372B4(this);
  return saveData->fields.groupId == this->fields.displayGroupId;
}


void MyRoomControl___c__DisplayClass455_1___ctor(
        MyRoomControl___c__DisplayClass455_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomControl___c__DisplayClass455_1___GetDisplayBgGroupIndex_b__1(
        MyRoomControl___c__DisplayClass455_1_o *this,
        MyRoomControl_BackGroundSaveData_o *data,
        const MethodInfo *method)
{
  struct MyRoomControl___c__DisplayClass455_0_o *CS___8__locals1; // x8

  if ( !data || (CS___8__locals1 = this->fields.CS___8__locals1) == 0 )
    sub_1C372B4(this);
  return data->fields.groupId == CS___8__locals1->fields.displayGroupId && data->fields.warId == this->fields.warId;
}


void MyRoomControl___c__DisplayClass456_0___ctor(
        MyRoomControl___c__DisplayClass456_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MyRoomControl___c__DisplayClass456_0___SaveDisplayOverWriteIds_b__1(
        MyRoomControl___c__DisplayClass456_0_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1C372B4(this);
  return saveData->fields.warId == this->fields.mainGroupWarId;
}


void MyRoomControl__initMaterial_d__287___ctor(
        MyRoomControl__initMaterial_d__287_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__initMaterial_d__287__MoveNext(MyRoomControl__initMaterial_d__287_o *this, const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *_4__this; // x20
  Il2CppObject *Instance; // x0
  bool v6; // w21
  System_Func_bool__o *v7; // x22
  UnityEngine_WaitUntil_o *v8; // x20
  Il2CppObject **p__2__current; // x19
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4C3E438 & 1) == 0 )
  {
    sub_1C37058(&System_Func_bool__TypeInfo);
    sub_1C37058(&Method_MyRoomControl__initMaterial_b__287_0__);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&UnityEngine_WaitUntil_TypeInfo);
    sub_1C37058(&StringLiteral_6979/*"GO_NEXT"*/);
    byte_4C3E438 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0 )
    {
LABEL_13:
      sub_1C372B4(Instance);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6979/*"GO_NEXT"*/, 0);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v6 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0);
  v7 = (System_Func_bool__o *)sub_1C372A4(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v7, _4__this, Method_MyRoomControl__initMaterial_b__287_0__, 0);
  v8 = (UnityEngine_WaitUntil_o *)sub_1C372A4(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v8, v7, 0);
  this->fields.__2__current = (Il2CppObject *)v8;
  p__2__current = &this->fields.__2__current;
  sub_1C36FFC((CGThumbnailListItem_o *)p__2__current, (int32_t)v8, v10, v11);
  *((_DWORD *)p__2__current - 2) = 1;
  return v6;
}


Il2CppObject *MyRoomControl__initMaterial_d__287__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__initMaterial_d__287__System_Collections_IEnumerator_Reset(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__initMaterial_d__287_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__initMaterial_d__287__System_Collections_IEnumerator_get_Current(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__initMaterial_d__287__System_IDisposable_Dispose(
        MyRoomControl__initMaterial_d__287_o *this,
        const MethodInfo *method)
{
  ;
}


void MyRoomControl__svtVoicePlayAct_d__344___ctor(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool MyRoomControl__svtVoicePlayAct_d__344__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__svtVoicePlayAct_d__344_o *v4; // x19
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v6; // x22
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct MyRoomControl_o *v11; // x1
  CommonUI_o *v12; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_T__o *v17; // x21
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v22; // x22
  System_String_o *VoiceAssetName; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *v26; // x23
  __int64 v27; // x2
  __int64 v28; // x3
  __int64 v29; // x4
  __int64 v30; // x5
  __int64 v31; // x6
  __int64 v32; // x7
  struct MaterialEventLogListViewItem_Info_o *v33; // x8
  System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  struct MaterialEventLogListViewItem_Info_o *v37; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_42799652; // x0
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct MaterialEventLogListViewItem_Info_o *v42; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_42798924; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *_8__1; // x22
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *v49; // x8
  struct MyRoomControl___c__DisplayClass344_0_o *v50; // x8
  struct MaterialEventLogListViewItem_Info_o *v51; // x8
  int32_t v52; // w22
  struct MyRoomControl_o *v53; // x8
  struct MyRoomControl_o *v54; // x8
  struct MaterialEventLogListViewItem_Info_o *v55; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  int32_t v58; // w23
  Il2CppObject *v59; // x26
  System_Action_o *v60; // x25
  struct MyRoomControl___c__DisplayClass344_0_o *v61; // x8
  CGThumbnailListItem_o *v62; // x19
  int v63; // w8
  System_Collections_Generic_List_object__o *svtVoiceDataList_5__4; // x1
  int32_t v65; // w21
  MyRoomControl__svtVoicePlayAct_d__344_o *v66; // x22
  struct MyRoomControl_o *v67; // x8
  CommonUI_o *v68; // x21
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  CommonUI_o *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *v76; // x8
  CommonUI_o *v77; // x20
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int16 v80; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4C3E439 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&AvalonSceneManager_TypeInfo);
    sub_1C37058(&char_TypeInfo);
    sub_1C37058(&Method_DataManager_GetMasterData_ServantVoiceMaster___);
    sub_1C37058(&Method_System_Collections_Generic_List_CondType_Kind__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_CondType_Kind___ctor__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__);
    sub_1C37058(&Method_System_Collections_Generic_List_int__get_Item__);
    sub_1C37058(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
    sub_1C37058(&System_Collections_Generic_List_CondType_Kind__TypeInfo);
    sub_1C37058(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_1C37058(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C37058(&Method_MyRoomControl___c__DisplayClass344_0__svtVoicePlayAct_b__0__);
    this = (MyRoomControl__svtVoicePlayAct_d__344_o *)sub_1C37058(&MyRoomControl___c__DisplayClass344_0_TypeInfo);
    byte_4C3E439 = 1;
  }
  *(_QWORD *)formId = 0;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v6 = (Il2CppObject *)sub_1C372A4(MyRoomControl___c__DisplayClass344_0_TypeInfo);
      System_Object___ctor(v6, 0);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass344_0_o *)v6;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v6, v7, v8);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      v11 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v11;
      sub_1C36FFC((CGThumbnailListItem_o *)&this->fields, (int32_t)v11, v9, v10);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v12 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v12 )
        goto LABEL_126;
      CommonUI__maskFadeout(v12, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(p__2__current, 0, v13, v14);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)MyRoomControl__getSvtStandFigure(_4__this, 0);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0);
      v17 = (System_Collections_Generic_List_T__o *)sub_1C372A4(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v17,
        (const MethodInfo_3787FD8 *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v17 )
        goto LABEL_126;
      items = v17->fields._items;
      v19 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v17->fields._version;
      if ( !items )
        goto LABEL_126;
      size = v17->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v17,
          81,
          *(const MethodInfo_378882C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v17->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_30E7C58 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
      item = (int32_t *)v4->fields.item;
      if ( !item )
        goto LABEL_126;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)ServantVoiceMaster__getEntity(
                                                          (ServantVoiceMaster_o *)this,
                                                          item[26],
                                                          item[28],
                                                          item[16],
                                                          0);
      if ( !this )
        goto LABEL_126;
      v22 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0);
      v4->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._voiceAssetName_5__2, (int32_t)VoiceAssetName, v24, v25);
      v26 = (Il2CppObject *)System_Int32__ToString((int)v22 + 20, 0);
      v80 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)j_il2cpp_value_box_0(
                                                          char_TypeInfo,
                                                          &v80,
                                                          v27,
                                                          v28,
                                                          v29,
                                                          v30,
                                                          v31,
                                                          v32);
      v33 = v4->fields.item;
      if ( !v33 )
        goto LABEL_126;
      v34 = System_String__Concat_63599656(v26, (Il2CppObject *)this, (Il2CppObject *)v33->fields.voiceId, 0);
      v4->fields._playSvtVoiceId_5__3 = v34;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._playSvtVoiceId_5__3, (int32_t)v34, v35, v36);
      v37 = v4->fields.item;
      if ( !v37 )
        goto LABEL_126;
      VoiceList_42799652 = ServantVoiceEntity__getVoiceList_42799652(
                             v22,
                             v37->fields.svtVoiceType,
                             v4->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v17,
                             0,
                             0);
      v4->fields._svtVoiceDataList_5__4 = VoiceList_42799652;
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v4->fields._svtVoiceDataList_5__4;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._svtVoiceDataList_5__4, (int32_t)VoiceList_42799652, v40, v41);
      if ( v4->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v42 = v4->fields.item;
      if ( !v42 )
        goto LABEL_126;
      VoiceList_42798924 = ServantVoiceEntity__getVoiceList_42798924(
                             v22,
                             v42->fields.svtVoiceType,
                             3,
                             v42->fields.voiceCondValue,
                             0,
                             -1,
                             0);
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)VoiceList_42798924;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields._svtVoiceDataList_5__4, (int32_t)VoiceList_42798924, v44, v45);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v4->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_1C36FFC((CGThumbnailListItem_o *)&_8__1->fields.bondsSvtObj, (int32_t)this, v47, v48);
      v49 = v4->fields.__8__1;
      if ( !v49 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v49->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v50 = v4->fields.__8__1;
      if ( !v50 )
        goto LABEL_126;
      v50->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_3785D10 *)Method_System_Collections_Generic_List_int__get_Item__);
      v51 = v4->fields.item;
      if ( !v51 )
        goto LABEL_126;
      v52 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v51->fields.svt_id, (int32_t)this, 0);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v53 = this->fields.__4__this;
      if ( !v53 )
        goto LABEL_126;
      if ( !HIDWORD(v53->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1C372BC(this);
      v54 = this->fields.__4__this;
      if ( !v54 )
        goto LABEL_126;
      formId[1] = (int32_t)v54->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0);
      v55 = v4->fields.item;
      if ( !v55 )
        goto LABEL_126;
      svt_id = v55->fields.svt_id;
      bondsStandFigureBack = _4__this->fields.bondsStandFigureBack;
      v58 = formId[1];
      v59 = (Il2CppObject *)v4->fields.__8__1;
      v60 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
      System_Action___ctor(v60, v59, Method_MyRoomControl___c__DisplayClass344_0__svtVoicePlayAct_b__0__, 0);
      if ( !bondsStandFigureBack )
        goto LABEL_126;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v52, 1, 0, v58, 10, v60, 0, 0);
LABEL_63:
      v61 = v4->fields.__8__1;
      if ( !v61 )
        goto LABEL_126;
      if ( !v61->fields.createStandEnd )
      {
        v4->fields.__2__current = 0;
        v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v62, 0, v2, v3);
        v63 = 2;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__voiceLoad(_4__this, v4->fields._voiceAssetName_5__2, 0, 0);
LABEL_67:
      if ( _4__this->fields.isVoiceLoading )
      {
        v4->fields.__2__current = 0;
        v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v62, 0, v2, v3);
        v63 = 3;
        goto LABEL_125;
      }
      svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)v4->fields._svtVoiceDataList_5__4;
      if ( !svtVoiceDataList_5__4 )
        goto LABEL_126;
      if ( svtVoiceDataList_5__4->fields._size >= 2 )
      {
        v65 = 0;
        while ( 1 )
        {
          this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                              svtVoiceDataList_5__4,
                                                              v65,
                                                              (const MethodInfo_37A2D54 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v66 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v67 = this->fields.__4__this;
          if ( !v67 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_String__op_Equality(
                                                              (System_String_o *)v67->fields.m_CachedPtr,
                                                              v4->fields._playSvtVoiceId_5__3,
                                                              0);
          if ( ((unsigned __int8)this & 1) != 0 )
            break;
          svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)v4->fields._svtVoiceDataList_5__4;
          if ( !svtVoiceDataList_5__4 )
            goto LABEL_126;
          if ( ++v65 >= svtVoiceDataList_5__4->fields._size )
            goto LABEL_84;
        }
        this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_33765820(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v66,
          v4->fields._voiceAssetName_5__2,
          0);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)svtVoiceDataList_5__4,
          v4->fields._voiceAssetName_5__2,
          0);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v68 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v68 )
        goto LABEL_126;
      CommonUI__maskFadein(v68, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0;
        v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v62, 0, v69, v70);
        v63 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0) && UnityEngine_Input__get_touchCount(0) <= 0 )
      {
        v4->fields.__2__current = 0;
        v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v62, 0, v71, v72);
        v63 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v73 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v73 )
        goto LABEL_126;
      CommonUI__maskFadeout(v73, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0;
        v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C36FFC(v62, 0, v74, v75);
        v63 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v4->fields._voiceAssetName_5__2, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0);
      v76 = v4->fields.__8__1;
      if ( !v76 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v76->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)MyRoomControl__getSvtStandFigure(_4__this, 0);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v77 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v77 )
        goto LABEL_126;
      CommonUI__maskFadein(v77, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1C372B4(this);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0) )
        return 0;
      v4->fields.__2__current = 0;
      v62 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1C36FFC(v62, 0, v78, v79);
      v63 = 7;
LABEL_125:
      LODWORD(v62[-1].fields._ThumbnailSpritePath_k__BackingField) = v63;
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


Il2CppObject *MyRoomControl__svtVoicePlayAct_d__344__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn MyRoomControl__svtVoicePlayAct_d__344__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_MyRoomControl__svtVoicePlayAct_d__344_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *MyRoomControl__svtVoicePlayAct_d__344__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void MyRoomControl__svtVoicePlayAct_d__344__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  ;
}