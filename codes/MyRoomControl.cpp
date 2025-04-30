void __fastcall MyRoomControl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct MyRoomControl_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *v8; // x19
  struct MyRoomControl_StaticFields *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A49A31 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v1);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v4);
    sub_1B863B8(&MyRoomControl_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_2930/*"BGM_MYROOM_1"*/, v6);
    byte_4A49A31 = 1;
  }
  MyRoomControl_TypeInfo->static_fields->DEFAULT_BGM_NAME = (struct System_String_o *)StringLiteral_2930/*"BGM_MYROOM_1"*/;
  sub_1B8635C((CGThumbnailListItem_o *)MyRoomControl_TypeInfo->static_fields, StringLiteral_2930/*"BGM_MYROOM_1"*/, v2, v3);
  static_fields = MyRoomControl_TypeInfo->static_fields;
  *(_OWORD *)&static_fields->BUTTON_VOICE_PLAY = xmmword_BC3000;
  *(_QWORD *)&static_fields->BUTTON_MULTIPLE_VIEW = 0x2000000010LL;
  *(_QWORD *)&static_fields->BUTTON_CHANGE_BG = 0xC448000000000040LL;
  *(_QWORD *)&static_fields->MULTIPLE_VIEW_SELECTED_MAX = 2LL;
  v8 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v8,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  v9 = MyRoomControl_TypeInfo->static_fields;
  v9->enableBgGroupIdList = v8;
  sub_1B8635C((CGThumbnailListItem_o *)&v9->enableBgGroupIdList, (int32_t)v8, v10, v11);
}


void __fastcall MyRoomControl___ctor(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  struct PhotoStandFigureComponent_array *v9; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  MyRoomStateMaterial_o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_int__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_Collections_Generic_List_int__o *v18; // x20
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  __int64 v21; // x0
  __int64 v22; // x1
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  int v25; // w8
  __int64 v26; // x1
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float z; // s1
  struct System_Int64_array *v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  struct System_Int32_array *v32; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct System_Int32_array *v35; // x0
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  struct System_Int64_array *v38; // x0
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Int32_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  struct System_Int32_array *v44; // x0
  int32_t v45; // w2
  const MethodInfo *v46; // x3

  if ( (byte_4A49A30 & 1) == 0 )
  {
    sub_1B863B8(&int___TypeInfo, method);
    sub_1B863B8(&long___TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v5);
    sub_1B863B8(&MyRoomStateMaterial_TypeInfo, v6);
    sub_1B863B8(&PhotoStandFigureComponent___TypeInfo, v7);
    sub_1B863B8(&UnityEngine_Vector3___TypeInfo, v8);
    byte_4A49A30 = 1;
  }
  v9 = (struct PhotoStandFigureComponent_array *)sub_1B86460(PhotoStandFigureComponent___TypeInfo, 2LL);
  this->fields.photoStandFigures = v9;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoStandFigures, (int32_t)v9, v10, v11);
  v12 = (MyRoomStateMaterial_o *)sub_1B86604(MyRoomStateMaterial_TypeInfo);
  MyRoomStateMaterial___ctor(v12, 0LL);
  this->fields.mStateMaterial = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mStateMaterial, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.imageIdList = v15;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.imageIdList, (int32_t)v15, v16, v17);
  v18 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v18,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  this->fields.materialImageIdList = v18;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.materialImageIdList, (int32_t)v18, v19, v20);
  v21 = sub_1B86460(UnityEngine_Vector3___TypeInfo, 2LL);
  if ( !v21 )
    sub_1B86614(0LL, v22);
  v25 = *(_DWORD *)(v21 + 24);
  if ( !v25 || (*(_DWORD *)(v21 + 40) = 0, *(_QWORD *)(v21 + 32) = 0x43900000C4000000LL, v25 == 1) )
    sub_1B8661C(v21, v21);
  *(_DWORD *)(v21 + 52) = 0;
  *(_QWORD *)(v21 + 44) = 0x4390000000000000LL;
  this->fields.defaultMultipleServantPoses = (struct UnityEngine_Vector3_array *)v21;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.defaultMultipleServantPoses, v21, v23, v24);
  if ( !byte_4A487E1 )
  {
    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v26);
    byte_4A487E1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  z = static_fields->zeroVector.fields.z;
  *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x = *(_QWORD *)&static_fields->zeroVector.fields.x;
  this->fields.voicePlayButtonDefaultPos.fields.z = z;
  this->fields.multipleViewFinishedTime = -1LL;
  v29 = (struct System_Int64_array *)sub_1B86460(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v29;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v29, v30, v31);
  v32 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v32;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)v32, v33, v34);
  v35 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.photoTargetFaceListIndex = v35;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoTargetFaceListIndex, (int32_t)v35, v36, v37);
  this->fields.photoCampaignFinishedTime = -1LL;
  *(_QWORD *)&this->fields.defaultPhotoServantPos.fields.x = 0x4390000000000000LL;
  this->fields.defaultPhotoServantPos.fields.z = 0.0;
  this->fields.isOneShot = 1;
  v38 = (struct System_Int64_array *)sub_1B86460(long___TypeInfo, 2LL);
  this->fields.temporaryPhotoUserSvtId = v38;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryPhotoUserSvtId, (int32_t)v38, v39, v40);
  v41 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.temporaryPhotoSvtLimitCount = v41;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryPhotoSvtLimitCount, (int32_t)v41, v42, v43);
  v44 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.temporaryStaffImageId = v44;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryStaffImageId, (int32_t)v44, v45, v46);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MyRoomControl__AccountLinkageServerStatusCheck(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B86614(0LL, method);
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

  if ( (byte_4A499CF & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_LinkageStatusCheckCallback__, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_AccountLinkageInfoRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    byte_4A499CF = 1;
  }
  v6 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v6,
    (Il2CppObject *)this,
    Method_MyRoomControl_LinkageStatusCheckCallback__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v6,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_AccountLinkageInfoRequest___);
  if ( !Request_object )
    sub_1B86614(0LL, v8);
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
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_Collections_Generic_List_Enumerator_int__o v37; // [xsp+8h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v38; // [xsp+20h] [xbp-80h] BYREF

  if ( (byte_4A49A27 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageLimitCountList);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v9);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v14);
    byte_4A49A27 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v15 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v15,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  if ( !*imageLimitCountList )
    sub_1B86614(Master_object, v17);
  v18 = (MyroomServantSpecialImageMaster_o *)Master_object;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v37,
    *imageLimitCountList,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v38 = v37;
  while ( 1 )
  {
    v19 = System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v38,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    if ( !v19 )
      break;
    if ( !v15 )
      sub_1B86614(v19, v20);
    current = v38.fields._current;
    items = v15->fields._items;
    v23 = Method_System_Collections_Generic_List_int__Add__;
    ++v15->fields._version;
    if ( !items )
      sub_1B86614(v19, v20);
    size = v15->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_int___AddWithResize(
        v15,
        current,
        *(const MethodInfo_35DF934 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
    }
    else
    {
      v15->fields._size = size + 1;
      items->m_Items[size + 1] = current;
    }
    if ( !v18 )
      sub_1B86614(v19, v20);
    EntitiesByBaseLimitCount = MyroomServantSpecialImageMaster__GetEntitiesByBaseLimitCount(v18, svtId, current, 0LL);
    v27 = EntitiesByBaseLimitCount;
    if ( !EntitiesByBaseLimitCount )
      sub_1B86614(0LL, v26);
    max_length = EntitiesByBaseLimitCount->max_length;
    if ( max_length >= 1 )
    {
      for ( i = 0; i < max_length; ++i )
      {
        if ( i >= (unsigned int)max_length )
          sub_1B8661C(EntitiesByBaseLimitCount, v26);
        v30 = v27->m_Items[i];
        if ( !v30 )
          sub_1B86614(EntitiesByBaseLimitCount, v26);
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
          sub_1B86614(EntitiesByBaseLimitCount, (unsigned int)EntitiesByBaseLimitCount);
        v34 = v15->fields._size;
        if ( (unsigned int)v34 >= v32->max_length )
        {
          System_Collections_Generic_List_int___AddWithResize(
            v15,
            (int32_t)EntitiesByBaseLimitCount,
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
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
    &v38,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  *imageLimitCountList = v15;
  sub_1B8635C((CGThumbnailListItem_o *)imageLimitCountList, (int32_t)v15, v35, v36);
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

  if ( (byte_4A499D2 & 1) == 0 )
  {
    sub_1B863B8(&AccountLinkageComponent_TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&Method_MyRoomControl__AutoDelinkAccountLinkage_b__320_0__, v5);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_1884/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, v8);
    sub_1B863B8(&StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4A499D2 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1884/*"ACCOUNT_LINKAGE_DELINK_CONFIRM_COMPLETE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__AutoDelinkAccountLinkage_b__320_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B86614(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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
  UnityEngine_Color_o v17; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A499E1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    byte_4A499E1 = 1;
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
    goto LABEL_26;
  v14.fields.r = 0.5;
  v14.fields.g = 0.5;
  v14.fields.b = 0.5;
  v14.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v14, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_DISP_CHANGE;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v15.fields.r = 0.5;
  v15.fields.g = 0.5;
  v15.fields.b = 0.5;
  v15.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v15, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.changeBgButtonSprite;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v16.fields.r = 0.5;
  v16.fields.g = 0.5;
  v16.fields.b = 0.5;
  v16.fields.a = 1.0;
  UIWidget__set_color(changeBGBtnImg, v16, 0LL);
  changeBGBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag &= ~MyRoomControl_TypeInfo->static_fields->BUTTON_CHANGE_BG;
  if ( !changeBGBtnImg )
    goto LABEL_26;
  changeBGBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData(
                                   (MyRoomData_o *)changeBGBtnImg,
                                   this->fields.fvrUsrSvtId,
                                   0LL);
  if ( !changeBGBtnImg )
    goto LABEL_26;
  v10 = *(_QWORD *)&changeBGBtnImg->fields.mChanged;
  v9 = *(_QWORD *)&changeBGBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v13.fields.currentCryptoKey = v10;
  *(_QWORD *)&v13.fields.fakeValue = v9;
  changeBGBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v13, 0LL);
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
    v17.fields.r = 0.5;
    v17.fields.g = 0.5;
    v17.fields.b = 0.5;
    v17.fields.a = 1.0;
    UIWidget__set_color(changeBGBtnImg, v17, 0LL);
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
LABEL_26:
    sub_1B86614(changeBGBtnImg, v7);
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
    goto LABEL_26;
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

  if ( (byte_4A49A17 & 1) == 0 )
  {
    sub_1B863B8(&ManagerConfig_TypeInfo, method);
    byte_4A49A17 = 1;
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
  const MethodInfo *v11; // x3

  if ( (byte_4A49A12 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__CaptureServant_d__418_TypeInfo, *(_QWORD *)&width);
    byte_4A49A12 = 1;
  }
  v7 = sub_1B86604(MyRoomControl__CaptureServant_d__418_TypeInfo);
  MyRoomControl__CaptureServant_d__418___ctor((MyRoomControl__CaptureServant_d__418_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_1B86614(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v10, v11);
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
  const MethodInfo *v44; // x3
  StandFigureBack_o *standFigureBack; // x20
  System_Action_o *v46; // x21
  const MethodInfo *v47; // x2
  const MethodInfo *v48; // x2
  StandFigureBack_o *v49; // x20
  System_Action_o *v50; // x21
  const MethodInfo *v51; // x3
  const MethodInfo *v52; // x3
  const MethodInfo *v53; // x3
  const MethodInfo *v54; // x3
  const MethodInfo *v55; // x3
  const MethodInfo *v56; // x3
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x1
  UnityEngine_Vector3_o v59; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o LocalPosition; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_GameObject_o *moveTarget; // [xsp+48h] [xbp-38h] BYREF
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v65; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v66; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v67; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v68; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v69; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v70; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v71; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A499DE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isSePlay);
    sub_1B863B8(&Method_MyRoomControl_ChangeDisp__, v6);
    sub_1B863B8(&Method_MyRoomControl__ChangeDisp_b__342_0__, v7);
    sub_1B863B8(&Method_MyRoomControl__ChangeDisp_b__342_1__, v8);
    sub_1B863B8(&MyRoomControl_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_11106/*"ReleaseTouch"*/, v10);
    byte_4A499DE = 1;
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
      v34 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_ChangeDisp__);
    v35 = (System_Reflection_MethodBase_o *)sub_1B8639C(v34, v34[4]);
    OverwriteAssetSoundName__PlaySystemSe(v35, 2, 0, 0LL);
  }
  else if ( MyRoomControl__IsScrollviewInShowPosition(this, (const MethodInfo *)isSePlay) )
  {
    MyRoomControl__BlockTouch(this, v12);
    if ( isSePlay )
    {
      v13 = Method_MyRoomControl_ChangeDisp__;
      if ( (*((_BYTE *)Method_MyRoomControl_ChangeDisp__ + 83) & 2) != 0 )
        v13 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_ChangeDisp__);
      v14 = (System_Reflection_MethodBase_o *)sub_1B8639C(v13, v13[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 0, 0, 0LL);
    }
    mShowPos = this->fields.mShowPos;
    moveTarget = this->fields.mMainObj;
    moveShowPos = GameObjectExtensions__GetLocalPosition(mShowPos, 0LL);
    LocalPosition = GameObjectExtensions__GetLocalPosition(this->fields.mShowPos, 0LL);
    moveHidePos = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
    v59 = GameObjectExtensions__GetLocalPosition(this->fields.mHidePos, 0LL);
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
          &v59,
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
          sub_1B86614(soundPlayerComp, v17);
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
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, v59, v29);
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
            v64.fields.x = v30;
            v64.fields.y = v23;
            v64.fields.z = v26;
            MyRoomControl__moveControl(this, this->fields.svtObj, v64, (System_String_o *)StringLiteral_11106/*"ReleaseTouch"*/, v32);
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
            v65.fields.y = this->fields.multipleViewButtonInitPos.fields.y;
            v65.fields.z = this->fields.multipleViewButtonInitPos.fields.z;
            v65.fields.x = v37->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, multipleViewButton, v65, 0LL, v36);
            v66.fields.y = this->fields.photoCampaignButtonInitPos.fields.y;
            v66.fields.z = this->fields.photoCampaignButtonInitPos.fields.z;
            v66.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.photoCampaignButton, v66, 0LL, v39);
            v67.fields.y = this->fields.voicePlayBtnInitPos.fields.y;
            v67.fields.z = this->fields.voicePlayBtnInitPos.fields.z;
            v67.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, v67, 0LL, v40);
            v68.fields.y = this->fields.changeLimitBtnInitPos.fields.y;
            v68.fields.z = this->fields.changeLimitBtnInitPos.fields.z;
            v68.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, v68, 0LL, v41);
            v69.fields.y = this->fields.moveBtnObjInitPos.fields.y;
            v69.fields.z = this->fields.moveBtnObjInitPos.fields.z;
            v69.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, v69, (System_String_o *)StringLiteral_11106/*"ReleaseTouch"*/, v42);
            v70.fields.y = this->fields.helpBtnInitPos.fields.y;
            v70.fields.z = this->fields.helpBtnInitPos.fields.z;
            v70.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.helpBtn, v70, 0LL, v43);
            v71.fields.y = this->fields.changeBgButtonInitPos.fields.y;
            v71.fields.z = this->fields.changeBgButtonInitPos.fields.z;
            v71.fields.x = MyRoomControl_TypeInfo->static_fields->BUTTON_OUT_X;
            MyRoomControl__moveControl(this, this->fields.changeBgButton, v71, 0LL, v44);
            soundPlayerComp = (UnityEngine_Component_o *)this->fields.changeDispTouch;
            if ( !soundPlayerComp )
              goto LABEL_53;
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)soundPlayerComp, 1, 0LL);
            v33 = 2;
            break;
          case 2:
            MyRoomControl__stopSvtVoice(this, v17);
            standFigureBack = this->fields.standFigureBack;
            v46 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v46, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__342_0__, 0LL);
            if ( !standFigureBack )
              goto LABEL_53;
            StandFigureBack__Fadeout(standFigureBack, v46, 0LL);
            v33 = 3;
            break;
          case 3:
            MyRoomControl__MyRoomlUIAnimationStart(this, moveTarget, moveShowPos, v24);
            MyRoomControl__MyRoomlUIAnimationStart(this, this->fields.servantListObj, LocalPosition, v47);
            MyRoomControl__MyRoomlUIAnimationStart(
              this,
              this->fields.sortWindowObj,
              this->fields.sortWindowMoveShowPos,
              v48);
            v49 = this->fields.standFigureBack;
            v50 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(v50, (Il2CppObject *)this, Method_MyRoomControl__ChangeDisp_b__342_1__, 0LL);
            if ( !v49 )
              goto LABEL_53;
            StandFigureBack__Fadein(v49, v50, 0LL);
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
              v51);
            MyRoomControl__moveControl(
              this,
              this->fields.photoCampaignButton,
              this->fields.photoCampaignButtonInitPos,
              0LL,
              v52);
            MyRoomControl__moveControl(this, this->fields.voicePlayBtn, this->fields.voicePlayBtnInitPos, 0LL, v53);
            MyRoomControl__moveControl(this, this->fields.changeLimitBtn, this->fields.changeLimitBtnInitPos, 0LL, v54);
            MyRoomControl__moveControl(this, this->fields.moveBtnObj, this->fields.moveBtnObjInitPos, 0LL, v55);
            MyRoomControl__moveControl(this, this->fields.helpBtn, this->fields.helpBtnInitPos, 0LL, v56);
            MyRoomControl__moveControl(this, this->fields.changeBgButton, this->fields.changeBgButtonInitPos, 0LL, v57);
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
        MyRoomControl__SetPhotoCampaignButtonColor(this, v58);
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
  __int64 v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v13; // x19
  System_Action_o *v14; // x20

  if ( (byte_4A49A11 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&figureIndex);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass416_0__ChangePhotoCampaignServantFace_b__0__, v5);
    sub_1B863B8(&MyRoomControl___c__DisplayClass416_0_TypeInfo, v6);
    byte_4A49A11 = 1;
  }
  v7 = sub_1B86604(MyRoomControl___c__DisplayClass416_0_TypeInfo);
  MyRoomControl___c__DisplayClass416_0___ctor((MyRoomControl___c__DisplayClass416_0_o *)v7, 0LL);
  if ( !v7 )
    goto LABEL_8;
  *(_QWORD *)(v7 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 16), (int32_t)this, v10, v11);
  *(_DWORD *)(v7 + 24) = figureIndex;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_8;
  if ( photoStandFigures->max_length <= figureIndex )
    sub_1B8661C(v8, v9);
  v13 = photoStandFigures->m_Items[figureIndex];
  v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v14,
    (Il2CppObject *)v7,
    Method_MyRoomControl___c__DisplayClass416_0__ChangePhotoCampaignServantFace_b__0__,
    0LL);
  if ( !v13 )
LABEL_8:
    sub_1B86614(v8, v9);
  PhotoStandFigureComponent__SetFacePhotoServant(v13, 1, v14, -1, 0LL);
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

  if ( (byte_4A499E5 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, isSet);
    byte_4A499E5 = 1;
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
    sub_1B86614(playBtnImg, isSet);
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

  if ( (byte_4A499E4 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, isSet);
    byte_4A499E4 = 1;
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
    sub_1B86614(standFigureBack, isSet);
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
  System_Action_o *_9__321_0; // x22
  Il2CppObject *v24; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Nullable_int__o msgFontSize; // [xsp+8h] [xbp-48h] BYREF
  UserAccountLinkageEntity_o *entity; // [xsp+18h] [xbp-38h] BYREF
  System_Nullable_int__o p_msgFontSize; // 0:x0.8
  System_Nullable_float__o v31; // 0:x3.8
  System_Nullable_int__o v32; // 0:x4.8

  if ( (byte_4A499D3 & 1) == 0 )
  {
    sub_1B863B8(&AccountLinkageComponent_TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_MyRoomControl___c__CheckCsUnlink_b__321_0__, v7);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_3310/*"CANNOT_CONTINUE_DEVICE"*/, v9);
    sub_1B863B8(&StringLiteral_1893/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, v10);
    sub_1B863B8(&StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/, v11);
    byte_4A499D3 = 1;
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
      v20 = LocalizationManager__Get((System_String_o *)StringLiteral_1893/*"ACCOUNT_LINKAGE_NOTICE_CANNOT_GET_CONTINUE_NUMBER"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v22 = MyRoomControl___c_TypeInfo;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        v22 = MyRoomControl___c_TypeInfo;
      }
      _9__321_0 = v22->static_fields->__9__321_0;
      if ( !_9__321_0 )
      {
        if ( !v22->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v22);
          v22 = MyRoomControl___c_TypeInfo;
        }
        v24 = (Il2CppObject *)v22->static_fields->__9;
        _9__321_0 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(_9__321_0, v24, Method_MyRoomControl___c__CheckCsUnlink_b__321_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__321_0 = _9__321_0;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__321_0, (int32_t)_9__321_0, v26, v27);
      }
      p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
      System_Nullable_int____ctor(p_msgFontSize, 26, (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__);
      if ( Instance )
      {
        v32 = msgFontSize;
        v31 = 0LL;
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v20, _9__321_0, v31, v32, 0, 0LL);
        SelfUserAccountLinkage = this->fields.myRoomFsm;
        if ( SelfUserAccountLinkage )
        {
          v18 = &StringLiteral_3310/*"CANNOT_CONTINUE_DEVICE"*/;
          goto LABEL_18;
        }
      }
LABEL_32:
      sub_1B86614(SelfUserAccountLinkage, v13);
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
  v18 = &StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/;
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
  if ( (byte_4A499EA & 1) == 0 )
  {
    sub_1B863B8(&MyRoomRootComponent_TypeInfo, method);
    sub_1B863B8(&StringLiteral_3467/*"CLICK_MATERIAL"*/, v3);
    this = (MyRoomControl_o *)sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v4);
    byte_4A499EA = 1;
  }
  sceneJumpInfo = v2->fields.sceneJumpInfo;
  if ( !sceneJumpInfo )
  {
    myRoomFsm = v2->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = &StringLiteral_6903/*"GO_NEXT"*/;
      goto LABEL_12;
    }
LABEL_13:
    sub_1B86614(this, method);
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
  v9 = &StringLiteral_6903/*"GO_NEXT"*/;
  if ( ((unsigned __int8)this & 1) != 0 )
    v9 = &StringLiteral_3467/*"CLICK_MATERIAL"*/;
LABEL_12:
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)*v9, 0LL);
}


void __fastcall MyRoomControl__ClearBackGroundData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  MyRoomControl_c *v3; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *enableBgGroupIdList; // x9
  int v6; // w10

  if ( (byte_4A49A2B & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v1);
    sub_1B863B8(&MyRoomControl_TypeInfo, v2);
    byte_4A49A2B = 1;
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
    sub_1B86614(v3, v1);
  v6 = enableBgGroupIdList->fields._version + 1;
  enableBgGroupIdList->fields._size = 0;
  enableBgGroupIdList->fields._version = v6;
  static_fields->displayBgGroupIndex = 0;
}


void __fastcall MyRoomControl__CloseAccountLinkage(MyRoomControl_o *this, const MethodInfo *method)
{
  AccountLinkageComponent_o *accountLinkageComp; // x0

  accountLinkageComp = this->fields.accountLinkageComp;
  if ( !accountLinkageComp )
    sub_1B86614(0LL, method);
  AccountLinkageComponent__CloseMenu(accountLinkageComp, 0LL);
}


void __fastcall MyRoomControl__CloseExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1B86614(0LL, method);
  ExchangeSvtCoinComponent__CloseMenu(exchangeSvtCoinComp, 0LL);
}


void __fastcall MyRoomControl__CloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *mBlocker; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x3

  if ( (byte_4A499F7 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__CloseMultipleView_b__387_0__, v3);
    byte_4A499F7 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker )
    sub_1B86614(0LL, method);
  UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL);
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__387_0__, 0LL);
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

  if ( (byte_4A499F5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_6670/*"FinishedCloseMultiServant"*/, method);
    byte_4A499F5 = 1;
  }
  mBlocker = this->fields.mBlocker;
  if ( !mBlocker
    || (UnityEngine_GameObject__SetActive(mBlocker, 1, 0LL),
        MyRoomControl__SetBackButtonIgnore(this, 1, v4),
        (multipleStandFigureBacks = this->fields.multipleStandFigureBacks) == 0LL) )
  {
LABEL_20:
    sub_1B86614(mBlocker, method);
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
      sub_1B8661C(mBlocker, method);
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
              v18 = v9 == v17->max_length - 1 ? (System_String_o *)StringLiteral_6670/*"FinishedCloseMultiServant"*/ : 0LL;
              v19.fields.y = v15;
              v19.fields.x = flt_BC1FF0[(_DWORD)v7 == 4] + y;
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
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A499CD & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo, setEndAction);
    byte_4A499CD = 1;
  }
  v5 = sub_1B86604(MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_TypeInfo);
  MyRoomControl__CoWaitForConstructingRecordWithServant_d__292___ctor(
    (MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_o *)v5,
    0,
    0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = setEndAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)setEndAction, v10, v11);
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
  System_Collections_Generic_List_TSource__o *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x3
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v18; // x8
  int v19; // w9

  v2 = this;
  if ( (byte_4A49A06 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___, method);
    this = (MyRoomControl_o *)sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__, v3);
    byte_4A49A06 = 1;
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
      sub_1B8661C(this, method);
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
  v14 = System_Linq_Enumerable__ToList_Int32Enum_(
          temporaryPhotoTargetList,
          (const MethodInfo_2FAD9F0 *)Method_System_Linq_Enumerable_ToList_PhotoUtility_TargetType___);
  v2->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v14;
  sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.photoTargetList, (int32_t)v14, v15, v16);
  v18 = v2->fields.temporaryPhotoTargetList;
  if ( !v18 )
LABEL_17:
    sub_1B86614(this, method);
  v19 = v18->fields._version + 1;
  v18->fields._size = 0;
  v18->fields._version = v19;
  MyRoomControl__DispPhotoCampaign(v2, 1, 1, v17);
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
  __int64 v12; // x20
  System_Collections_Generic_List_T__o *temporaryPhotoTargetList; // x0
  const MethodInfo *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t size; // w8
  char v18; // w21
  System_Action_o *v19; // x22
  const MethodInfo *v20; // x5
  int32_t v21; // w1
  int32_t v22; // w3
  MyRoomControl_o *v23; // x0
  bool v24; // w2
  System_Action_o *v25; // x4
  int32_t Item; // w0
  char v27; // w21
  int32_t v28; // w22
  System_Action_o *v29; // x23
  System_Action_o *v30; // x21
  System_Action_o *v31; // x22
  const MethodInfo *v32; // x3

  if ( (byte_4A49A05 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isChangeTarget);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v6);
    sub_1B863B8(&Method_MyRoomControl_CompletedTargetSetting__, v7);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__0__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__1__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__2__, v10);
    sub_1B863B8(&MyRoomControl___c__DisplayClass404_0_TypeInfo, v11);
    byte_4A49A05 = 1;
  }
  v12 = sub_1B86604(MyRoomControl___c__DisplayClass404_0_TypeInfo);
  MyRoomControl___c__DisplayClass404_0___ctor((MyRoomControl___c__DisplayClass404_0_o *)v12, 0LL);
  if ( !v12
    || (*(_QWORD *)(v12 + 24) = this,
        *(_BYTE *)(v12 + 16) = isChangeTarget,
        sub_1B8635C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v15, v16),
        (temporaryPhotoTargetList = (System_Collections_Generic_List_T__o *)this->fields.temporaryPhotoTargetList) == 0LL) )
  {
    sub_1B86614(temporaryPhotoTargetList, v14);
  }
  size = temporaryPhotoTargetList->fields._size;
  if ( size == 2 )
  {
    if ( *(_BYTE *)(v12 + 16) )
    {
      MyRoomControl__CompletedTargetSetting(this, v14);
    }
    else
    {
      v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v30, (Il2CppObject *)this, Method_MyRoomControl_CompletedTargetSetting__, 0LL);
      v31 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v31,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__1__,
        0LL);
      MyRoomControl__OpenPhotoFrameSelectDialog(this, v30, v31, v32);
    }
  }
  else
  {
    if ( size )
    {
      Item = System_Collections_Generic_List_Int32Enum___get_Item(
               temporaryPhotoTargetList,
               0,
               (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v27 = *(_BYTE *)(v12 + 16);
      v28 = Item;
      v29 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v29,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__2__,
        0LL);
      v22 = 2;
      v23 = this;
      v21 = v28;
      v24 = v27;
      v25 = v29;
    }
    else
    {
      v18 = *(_BYTE *)(v12 + 16);
      v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__0__,
        0LL);
      v21 = 3;
      v22 = 1;
      v23 = this;
      v24 = v18;
      v25 = v19;
    }
    MyRoomControl__OpenTargetSelectDialog(v23, v21, v24, v22, v25, v20);
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

  if ( (byte_4A499E7 & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___, method);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject___, v2);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v3);
    sub_1B863B8(&Method_UnityEngine_Resources_Load_GameObject___, v4);
    sub_1B863B8(&StringLiteral_3900/*"CRIMovie/CRIMoviePlayerWithPanel"*/, v5);
    byte_4A499E7 = 1;
  }
  object = UnityEngine_Resources__Load_object_(
             (System_String_o *)StringLiteral_3900/*"CRIMovie/CRIMoviePlayerWithPanel"*/,
             (const MethodInfo_30059F0 *)Method_UnityEngine_Resources_Load_GameObject___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v7 = UnityEngine_Object__Instantiate_object_(
         object,
         (const MethodInfo_2FF5DC4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
  if ( !v7 )
    sub_1B86614(0LL, v8);
  return (CRIMoviePlayer_o *)UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v7,
                               (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CRIMoviePlayer___);
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
  __int64 v9; // x20
  UnityEngine_Component_o *Parent; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v18; // x0
  int32_t photoMasterGenderType; // w21
  int32_t photoMasterEquipId; // w22
  UnityEngine_GameObject_o *v21; // x23
  System_Action_o *v22; // x24
  struct UIMasterFigureTextureOld_o *Prefab_38876220; // x1
  int32_t v24; // w2
  const MethodInfo *v25; // x3

  if ( (byte_4A49A0C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&targetIndex);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass411_0__CreatePhotoMasterFigure_b__0__, v7);
    sub_1B863B8(&MyRoomControl___c__DisplayClass411_0_TypeInfo, v8);
    byte_4A49A0C = 1;
  }
  v9 = sub_1B86604(MyRoomControl___c__DisplayClass411_0_TypeInfo);
  MyRoomControl___c__DisplayClass411_0___ctor((MyRoomControl___c__DisplayClass411_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_9;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 32) = func;
  *(_DWORD *)(v9 + 24) = targetIndex;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 32), (int32_t)func, v14, v15);
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_9;
  if ( !photoStandFigures->max_length )
    sub_1B8661C(Parent, v11);
  Parent = (UnityEngine_Component_o *)photoStandFigures->m_Items[0];
  if ( !Parent
    || (gameObject = UnityEngine_Component__get_gameObject(Parent, 0LL),
        (Parent = (UnityEngine_Component_o *)GameObjectExtensions__GetParent(gameObject, 0LL)) == 0LL) )
  {
LABEL_9:
    sub_1B86614(Parent, v11);
  }
  v18 = UnityEngine_Component__get_gameObject(Parent, 0LL);
  photoMasterGenderType = this->fields.photoMasterGenderType;
  photoMasterEquipId = this->fields.photoMasterEquipId;
  v21 = v18;
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass411_0__CreatePhotoMasterFigure_b__0__,
    0LL);
  Prefab_38876220 = MasterFigureManagerOld__CreatePrefab_38876220(
                      v21,
                      2,
                      photoMasterGenderType,
                      photoMasterEquipId,
                      1,
                      v22,
                      0,
                      (System_Nullable_Vector3__o)0,
                      0,
                      0LL);
  this->fields.photoMasterTexture = Prefab_38876220;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, (int32_t)Prefab_38876220, v24, v25);
}


void __fastcall MyRoomControl__DestroyExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomListControl_o *myRoomListCtr; // x0

  myRoomListCtr = this->fields.myRoomListCtr;
  if ( !myRoomListCtr
    || (MyRoomListControl__DestroyExchangeSvtCoinMenuBoard(myRoomListCtr, 0LL),
        (myRoomListCtr = (MyRoomListControl_o *)this->fields.exchangeSvtCoinComp) == 0LL) )
  {
    sub_1B86614(myRoomListCtr, method);
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
  __int64 v12; // x22
  MyRoomFrontObjectManager_o *frontObjectManager; // x0
  _BOOL8 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  const MethodInfo *v19; // x1
  const MethodInfo *v20; // x1
  StandFigureBack_o *standFigureBack; // x21
  System_Action_o *v22; // x23
  StandFigureBack_o *v23; // x21
  System_Action_o *v24; // x23
  _BOOL4 v25; // w8
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

  if ( (byte_4A499F6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDispDefault);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__0__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__1__, v10);
    sub_1B863B8(&MyRoomControl___c__DisplayClass385_0_TypeInfo, v11);
    byte_4A499F6 = 1;
  }
  moveTarget = 0LL;
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  LocalPosition.fields.z = 0.0;
  *(_QWORD *)&LocalPosition.fields.x = 0LL;
  v12 = sub_1B86604(MyRoomControl___c__DisplayClass385_0_TypeInfo);
  MyRoomControl___c__DisplayClass385_0___ctor((MyRoomControl___c__DisplayClass385_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_43;
  *(_QWORD *)(v12 + 16) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)callback, v15, v16);
  *(_QWORD *)(v12 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 24), (int32_t)this, v17, v18);
  MyRoomControl__stopSvtVoice(this, v19);
  MyRoomControl__BlockTouch(this, v20);
  if ( isDispDefault )
  {
    if ( isFadein )
    {
      standFigureBack = this->fields.standFigureBack;
      v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v22,
        (Il2CppObject *)v12,
        Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__0__,
        0LL);
      if ( !standFigureBack )
        goto LABEL_43;
      StandFigureBack__Fadein(standFigureBack, v22, 0LL);
    }
    frontObjectManager = this->fields.frontObjectManager;
    if ( frontObjectManager )
    {
      MyRoomFrontObjectManager__FrameIn(frontObjectManager, 0LL);
      goto LABEL_13;
    }
LABEL_43:
    sub_1B86614(frontObjectManager, v14);
  }
  v23 = this->fields.standFigureBack;
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass385_0__DispDefaultMyRoom_b__1__,
    0LL);
  if ( !v23 )
    goto LABEL_43;
  StandFigureBack__Fadeout(v23, v24, 0LL);
  frontObjectManager = this->fields.frontObjectManager;
  if ( !frontObjectManager )
    goto LABEL_43;
  MyRoomFrontObjectManager__FrameOut(frontObjectManager, 0LL);
LABEL_13:
  MainMenuBar__setMenuActive(isDispDefault, 0LL, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.voicePlayBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.moveBtnObj;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeLimitBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.helpBtn;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, isDispDefault, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.multipleViewButton;
  v25 = isDispDefault && this->fields.isEnableMultipleView;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v25, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.photoCampaignButton;
  v26 = isDispDefault && this->fields.isEnablePhotoCampaign;
  if ( !frontObjectManager )
    goto LABEL_43;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)frontObjectManager, v26, 0LL);
  frontObjectManager = (MyRoomFrontObjectManager_o *)this->fields.changeBgButton;
  v14 = isDispDefault && (unsigned __int64)this->fields.isEnableChangeBg;
  if ( !frontObjectManager )
    goto LABEL_43;
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
      MyRoomControl__setupMaterialUIMoveData(this, &moveTarget, &moveShowPos, &LocalPosition, v30);
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
      mMainObj = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)frontObjectManager, 0LL);
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
      v35 = *(_DWORD *)p_y;
      v36 = *(_DWORD *)p_z;
      MyRoomControl__MyRoomlUIAnimationStart(this, mMainObj, *(UnityEngine_Vector3_o *)&x, v29);
      return;
    default:
      goto LABEL_31;
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

  if ( (byte_4A49A09 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__, isTargetUpdate);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v7);
    byte_4A49A09 = 1;
  }
  Instance = (MissionNotifyManager_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  MissionNotifyManager__StartPause(Instance, 0LL);
  Instance = (MissionNotifyManager_o *)this->fields.photoTargetList;
  if ( !Instance )
    goto LABEL_17;
  Instance = (MissionNotifyManager_o *)System_Collections_Generic_List_Int32Enum___Contains(
                                         (System_Collections_Generic_List_T__o *)Instance,
                                         3,
                                         (const MethodInfo_35E24D8 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__Contains__);
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
    sub_1B86614(Instance, v9);
  max_length = photoTargetFaceListIndex->max_length;
  if ( (__int64)(max_length << 32) >= 1 )
  {
    v14 = 0LL;
    v15 = &photoTargetFaceListIndex->m_Items[1];
    do
    {
      if ( v14 >= max_length )
        sub_1B8661C(Instance, v9);
      v15[v14++] = -1;
    }
    while ( (__int64)v14 < (int)max_length );
  }
LABEL_15:
  PhotoTarget = MyRoomControl__LoadPhotoTarget(this, isTargetUpdate, v11);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, PhotoTarget, 0LL);
}


int32_t __fastcall MyRoomControl__DisplayGroupId(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  MyRoomControl_c *v4; // x0
  __int64 v5; // x1
  MyRoomControl_c *v6; // x0
  MyRoomControl_c *v7; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0

  if ( (byte_4A49A2C & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v1);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v2);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    byte_4A49A2C = 1;
  }
  v4 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v4 = MyRoomControl_TypeInfo;
  }
  if ( !System_Linq_Enumerable__Any_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)v4->static_fields->enableBgGroupIdList,
          (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___) )
  {
    v6 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    MyRoomControl__SetBackGroundData((const MethodInfo *)v6);
  }
  v7 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v7 = MyRoomControl_TypeInfo;
  }
  static_fields = v7->static_fields;
  enableBgGroupIdList = static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    sub_1B86614(0LL, v5);
  return System_Collections_Generic_List_int___get_Item(
           enableBgGroupIdList,
           static_fields->displayBgGroupIndex,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
}


void __fastcall MyRoomControl__EndLoad(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  void *svtCtr; // x0
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A499B1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_MyRoomControl___c__EndLoad_b__239_0__, v6);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, v8);
    byte_4A499B1 = 1;
  }
  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    goto LABEL_21;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)svtCtr, this->fields.voiceList, this->fields.asstName, 0LL);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v10);
  if ( SvtVoiceEnt )
  {
    v12 = SvtVoiceEnt;
    svtCtr = this->fields.imageIdList;
    if ( !svtCtr )
      goto LABEL_21;
    v13 = this->fields.svtCtr;
    svtCtr = (void *)System_Collections_Generic_List_int___get_Item(
                       (System_Collections_Generic_List_int__o *)svtCtr,
                       this->fields.figureSvtDispIdx,
                       (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v13 )
      goto LABEL_21;
    MyRoomSvtControl__initFirstPlayVoiceList(v13, v12, (int32_t)svtCtr, 0LL);
  }
  if ( this->fields.sceneJumpInfo )
    goto LABEL_19;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  svtCtr = MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    svtCtr = MyRoomControl___c_TypeInfo;
  }
  v17 = *(System_Action_o **)(*((_QWORD *)svtCtr + 23) + 32LL);
  if ( !v17 )
  {
    if ( !*((_DWORD *)svtCtr + 56) )
    {
      j_il2cpp_runtime_class_init_0(svtCtr);
      svtCtr = MyRoomControl___c_TypeInfo;
    }
    v18 = (Il2CppObject *)**((_QWORD **)svtCtr + 23);
    v17 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v17, v18, Method_MyRoomControl___c__EndLoad_b__239_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__239_0 = v17;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__239_0, (int32_t)v17, v20, v21);
  }
  if ( !Instance )
LABEL_21:
    sub_1B86614(svtCtr, method);
  CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v17, 0LL);
LABEL_19:
  svtCtr = this->fields.myRoomFsm;
  if ( !svtCtr )
    goto LABEL_21;
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
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
  System_Action_object__o *_9__401_0; // x21
  Il2CppObject *v13; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v18; // x8
  CommonUI_o *v19; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v21; // x21
  __int64 v22; // x0
  __int64 v23; // x1

  if ( (byte_4A49A02 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoStandFigureComponent__TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1B863B8(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_1__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_MyRoomControl___c__EndLoadPhotoAsset_b__401_0__, v8);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v9);
    byte_4A49A02 = 1;
  }
  v10 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v10 = MyRoomControl___c_TypeInfo;
  }
  _9__401_0 = (System_Action_object__o *)v10->static_fields->__9__401_0;
  if ( !_9__401_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__401_0 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__401_0, v13, Method_MyRoomControl___c__EndLoadPhotoAsset_b__401_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__401_0 = (struct System_Action_PhotoStandFigureComponent__o *)_9__401_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__401_0, (int32_t)_9__401_0, v15, v16);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__401_0,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v18 = AvalonSceneManager_TypeInfo;
  v19 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v18 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v18->static_fields->DEFAULT_FADE_TIME;
  v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v21, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_1__, 0LL);
  if ( !v19 )
    sub_1B86614(v22, v23);
  CommonUI__maskFadeout(v19, 1, DEFAULT_FADE_TIME, v21, 0LL);
}


void __fastcall MyRoomControl__EndMaterialEventBack(MyRoomControl_o *this, const MethodInfo *method)
{
  this->fields.IsMaterialEventBack = 0;
}


void __fastcall MyRoomControl__EndSceneJump(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  CommonUI_o *v8; // x19

  if ( (byte_4A499EB & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A499EB = 1;
  }
  if ( this->fields.sceneJumpInfo )
  {
    this->fields.sceneJumpInfo = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, 0, v2, v3);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v8 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v8 )
      sub_1B86614(Instance, v7);
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
    sub_1B86614(0LL, result);
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

  if ( (byte_4A49A22 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl__ExchangePosition_b__436_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A49A22 = 1;
  }
  this->fields.isChangePhotoPosition ^= 1u;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__ExchangePosition_b__436_0__, 0LL);
  if ( !v8 )
    sub_1B86614(v11, v12);
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
  if ( (byte_4A49A0B & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B863B8(
                                &Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__,
                                finishedFadeCallback);
    byte_4A49A0B = 1;
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
      sub_1B8661C(this, finishedFadeCallback);
    this = (MyRoomControl_o *)v6->fields.photoTargetList;
    if ( !this )
LABEL_33:
      sub_1B86614(this, finishedFadeCallback);
    v9 = photoStandFigures->m_Items[i];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                i,
                                (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
    {
      if ( isFadeOut )
        goto LABEL_14;
      MyRoomControl__GetPhotoStaffPosition(v6, v9, i, (UnityEngine_Vector3_o *)&v32, v10);
      if ( !v9 )
        goto LABEL_33;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      if ( !byte_4A487E6 )
      {
        sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v29);
        byte_4A487E6 = 1;
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
      x = v26 + flt_BC1940[v6->fields.isChangePhotoPosition == (i == 1)];
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
        x = v19 + flt_BC1940[v22];
        goto LABEL_27;
      }
      MyRoomControl__GetPhotoCampaignServantPositionAndScale(v6, v9, i, &position, &scale[1], v11);
      if ( !v9 )
        goto LABEL_33;
      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v9, 0LL);
      GameObjectExtensions__SetLocalScale_34384400(v12, scale[1], 0LL);
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
  if ( (byte_4A499E9 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, gesture);
    this = (MyRoomControl_o *)sub_1B863B8(&SwipeGesture_TypeInfo, v5);
    byte_4A499E9 = 1;
  }
  if ( !gesture )
    sub_1B86614(this, gesture);
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

  if ( (byte_4A49A18 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    byte_4A49A18 = 1;
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
  UnityEngine_Object__Destroy_69356292(v4, 0LL);
  photoCampaignProduction = (UnityEngine_GameObject_o *)this->fields.photoCampaignScreenshot;
  if ( !photoCampaignProduction )
LABEL_15:
    sub_1B86614(photoCampaignProduction, method);
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
      sub_1B8661C(multipleViewCloseButton, method);
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
    sub_1B86614(multipleViewCloseButton, method);
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
    sub_1B86614(0LL, v4);
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
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A499BD & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_9143/*"NORMAL_FORM"*/, method);
    sub_1B863B8(&StringLiteral_3343/*"CHANGE_FORM"*/, v3);
    byte_4A499BD = 1;
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
      v7 = (System_String_o **)&StringLiteral_9143/*"NORMAL_FORM"*/;
      goto LABEL_15;
    }
LABEL_16:
    sub_1B86614(svtCtr, method);
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
    v7 = (System_String_o **)&StringLiteral_9143/*"NORMAL_FORM"*/;
  else
    v7 = (System_String_o **)&StringLiteral_3343/*"CHANGE_FORM"*/;
LABEL_15:
  PlayMakerFSM__SendEvent(myRoomFsm, *v7, 0LL);
}


System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *__fastcall MyRoomControl__GetBgSaveData(
        const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *String; // x19
  System_Collections_Generic_List_object__o *v9; // x19
  System_Collections_Generic_IEnumerable_TSource__o *v11; // x0

  if ( (byte_4A49A2D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___, v1);
    sub_1B863B8(&Method_JsonManager_DeserializeArray_MyRoomControl_BackGroundSaveData___, v2);
    sub_1B863B8(&JsonManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__, v4);
    sub_1B863B8(&System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo, v5);
    sub_1B863B8(&StringLiteral_5267/*"DisplayedOverWriteIds"*/, v6);
    sub_1B863B8(&StringLiteral_1/*""*/, v7);
    byte_4A49A2D = 1;
  }
  String = (Il2CppObject *)UnityEngine_PlayerPrefs__GetString(
                             (System_String_o *)StringLiteral_5267/*"DisplayedOverWriteIds"*/,
                             (System_String_o *)StringLiteral_1/*""*/,
                             0LL);
  if ( System_String__IsNullOrEmpty((System_String_o *)String, 0LL) )
  {
    v9 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v9,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
    return (System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *)v9;
  }
  else
  {
    if ( !JsonManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
    v11 = (System_Collections_Generic_IEnumerable_TSource__o *)JsonManager__DeserializeArray_object_(
                                                                 String,
                                                                 (const MethodInfo_2FD883C *)Method_JsonManager_DeserializeArray_MyRoomControl_BackGroundSaveData___);
    return (System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__o *)System_Linq_Enumerable__ToList_object_(
                                                                                    v11,
                                                                                    (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
  }
}


UnityEngine_Camera_o *__fastcall MyRoomControl__GetCamera2DUI(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields.mCamera2DUI;
}


int32_t __fastcall MyRoomControl__GetDisplayBgGroupIndex(const MethodInfo *method)
{
  __int64 v1; // x1
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
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  Il2CppObject *Master_object; // x0
  MyRoomAddMaster_o *v22; // x21
  __int64 v23; // x1
  int32_t Int; // w28
  int32_t i; // w20
  MyRoomControl_c *v26; // x8
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0
  MyRoomControl___c__DisplayClass455_0_o *v28; // x23
  MyRoomControl_c *v29; // x0
  System_Collections_Generic_List_int__o *v30; // x24
  System_Func_object__bool__o *v31; // x25
  System_Collections_Generic_List_int__o *v32; // x25
  __int64 v33; // x26
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Func_object__bool__o *v36; // x27
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x25
  int32_t v38; // w1
  void *monitor; // x8
  unsigned __int64 v40; // x27
  int32_t v41; // w26
  int32_t displayGroupId; // w1
  System_String_o *v43; // x0
  bool v44; // w0
  int32_t Item; // w0
  System_Collections_Generic_IEnumerable_TSource__o *source; // [xsp+10h] [xbp-A0h]
  System_Collections_Generic_List_Enumerator_int__o v48; // [xsp+18h] [xbp-98h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v49; // [xsp+30h] [xbp-80h] BYREF

  if ( (byte_4A49A2E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyRoomAddMaster___, v1);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(&Method_System_Linq_Enumerable_Contains_int___, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_SingleOrDefault_MyRoomControl_BackGroundSaveData___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v8);
    sub_1B863B8(&System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__IndexOf__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v13);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v14);
    sub_1B863B8(&MyRoomControl_TypeInfo, v15);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass455_0__GetDisplayBgGroupIndex_b__0__, v16);
    sub_1B863B8(&MyRoomControl___c__DisplayClass455_0_TypeInfo, v17);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass455_1__GetDisplayBgGroupIndex_b__1__, v18);
    sub_1B863B8(&MyRoomControl___c__DisplayClass455_1_TypeInfo, v19);
    sub_1B863B8(&StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, v20);
    byte_4A49A2E = 1;
  }
  memset(&v49, 0, sizeof(v49));
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  v22 = (MyRoomAddMaster_o *)Master_object;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  source = (System_Collections_Generic_IEnumerable_TSource__o *)MyRoomControl__GetBgSaveData((const MethodInfo *)Master_object);
  Int = UnityEngine_PlayerPrefs__GetInt((System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, -1, 0LL);
  for ( i = 0; ; ++i )
  {
    v26 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v26 = MyRoomControl_TypeInfo;
    }
    enableBgGroupIdList = v26->static_fields->enableBgGroupIdList;
    if ( !enableBgGroupIdList )
      goto LABEL_54;
    if ( i >= enableBgGroupIdList->fields._size )
    {
      if ( (Int & 0x80000000) != 0 )
        goto LABEL_57;
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        enableBgGroupIdList = MyRoomControl_TypeInfo->static_fields->enableBgGroupIdList;
        if ( !enableBgGroupIdList )
          goto LABEL_54;
      }
      v44 = System_Collections_Generic_List_int___Contains(
              enableBgGroupIdList,
              Int,
              (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
      v26 = MyRoomControl_TypeInfo;
      if ( !v44 )
      {
LABEL_57:
        if ( !v26->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v26);
          v26 = MyRoomControl_TypeInfo;
        }
        enableBgGroupIdList = v26->static_fields->enableBgGroupIdList;
        if ( enableBgGroupIdList )
        {
          Item = System_Collections_Generic_List_int___get_Item(
                   enableBgGroupIdList,
                   0,
                   (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
          UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, Item, 0LL);
          UnityEngine_PlayerPrefs__Save(0LL);
          return 0;
        }
      }
      else
      {
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v26 = MyRoomControl_TypeInfo;
        }
        enableBgGroupIdList = v26->static_fields->enableBgGroupIdList;
        if ( enableBgGroupIdList )
          return System_Collections_Generic_List_int___IndexOf(
                   enableBgGroupIdList,
                   Int,
                   (const MethodInfo_35E05B0 *)Method_System_Collections_Generic_List_int__IndexOf__);
      }
LABEL_54:
      sub_1B86614(enableBgGroupIdList, v23);
    }
    v28 = (MyRoomControl___c__DisplayClass455_0_o *)sub_1B86604(MyRoomControl___c__DisplayClass455_0_TypeInfo);
    MyRoomControl___c__DisplayClass455_0___ctor(v28, 0LL);
    v29 = MyRoomControl_TypeInfo;
    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
      v29 = MyRoomControl_TypeInfo;
    }
    enableBgGroupIdList = v29->static_fields->enableBgGroupIdList;
    if ( !enableBgGroupIdList )
      goto LABEL_54;
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___get_Item(
                                                                      enableBgGroupIdList,
                                                                      i,
                                                                      (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( !v28 )
      goto LABEL_54;
    v23 = (unsigned int)enableBgGroupIdList;
    v28->fields.displayGroupId = (int)enableBgGroupIdList;
    if ( !v22 )
      goto LABEL_54;
    v30 = MyRoomAddMaster__GetDisplayOverWriteIds(v22, (int32_t)enableBgGroupIdList, 0LL);
    v31 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v31,
      (Il2CppObject *)v28,
      Method_MyRoomControl___c__DisplayClass455_0__GetDisplayBgGroupIndex_b__0__,
      0LL);
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__FirstOrDefault_object__49893388(
                                                                      source,
                                                                      (System_Func_TSource__bool__o *)v31,
                                                                      (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
    v32 = enableBgGroupIdList;
    if ( !v28->fields.displayGroupId )
    {
      v33 = sub_1B86604(MyRoomControl___c__DisplayClass455_1_TypeInfo);
      MyRoomControl___c__DisplayClass455_1___ctor((MyRoomControl___c__DisplayClass455_1_o *)v33, 0LL);
      if ( !v33 )
        goto LABEL_54;
      *(_QWORD *)(v33 + 24) = v28;
      sub_1B8635C((CGThumbnailListItem_o *)(v33 + 24), (int32_t)v28, v34, v35);
      *(_DWORD *)(v33 + 16) = MyRoomAddMaster__GetMainGroupWarId(v22, 0LL);
      v36 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v36,
        (Il2CppObject *)v33,
        Method_MyRoomControl___c__DisplayClass455_1__GetDisplayBgGroupIndex_b__1__,
        0LL);
      enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__SingleOrDefault_object__49968876(
                                                                        source,
                                                                        (System_Func_TSource__bool__o *)v36,
                                                                        (const MethodInfo_2FA76EC *)Method_System_Linq_Enumerable_SingleOrDefault_MyRoomControl_BackGroundSaveData___);
      if ( enableBgGroupIdList )
        v32 = enableBgGroupIdList;
    }
    if ( !v32 )
    {
      displayGroupId = v28->fields.displayGroupId;
      v43 = (System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/;
LABEL_47:
      UnityEngine_PlayerPrefs__SetInt(v43, displayGroupId, 0LL);
      UnityEngine_PlayerPrefs__Save(0LL);
      return i;
    }
    if ( !v30 )
      goto LABEL_54;
    v37 = *(System_Collections_Generic_IEnumerable_TSource__o **)&v32->fields._size;
    System_Collections_Generic_List_int___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v48,
      v30,
      (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
    v49 = v48;
LABEL_24:
    if ( System_Collections_Generic_List_Enumerator_int___MoveNext(
           &v49,
           (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
    {
      break;
    }
    System_Collections_Generic_List_Enumerator_int___Dispose(
      &v49,
      (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    if ( !v37 )
      goto LABEL_54;
    monitor = v37[1].monitor;
    if ( (int)monitor >= 1 )
    {
      v40 = 0LL;
      while ( 1 )
      {
        if ( v40 >= (unsigned int)monitor )
          sub_1B8661C(enableBgGroupIdList, v23);
        v41 = *((_DWORD *)&v37[2].klass + v40);
        enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Collections_Generic_List_int___Contains(
                                                                          v30,
                                                                          v41,
                                                                          (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
        if ( ((unsigned __int8)enableBgGroupIdList & 1) == 0 )
        {
          enableBgGroupIdList = (System_Collections_Generic_List_int__o *)MyRoomAddMaster__IsExistOverWriteIdInGroup(
                                                                            v22,
                                                                            v41,
                                                                            v28->fields.displayGroupId,
                                                                            0LL);
          if ( ((unsigned __int8)enableBgGroupIdList & 1) != 0 )
            break;
        }
        LODWORD(monitor) = v37[1].monitor;
        if ( (__int64)++v40 >= (int)monitor )
          goto LABEL_35;
      }
      displayGroupId = v28->fields.displayGroupId;
      v43 = (System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/;
      goto LABEL_47;
    }
LABEL_35:
    ;
  }
  if ( System_Linq_Enumerable__Contains_int_(
         v37,
         v49.fields._current,
         (const MethodInfo_2F884F0 *)Method_System_Linq_Enumerable_Contains_int___) )
  {
    goto LABEL_24;
  }
  v38 = v28->fields.displayGroupId;
  if ( v38 != Int )
  {
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, v38, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v49,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  return i;
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

  if ( (byte_4A49A28 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, *(_QWORD *)&svtId);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v7);
    byte_4A49A28 = 1;
  }
  entity = 0LL;
  if ( imageLimitCount >= 201 )
  {
    if ( !DataManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1B86614(v9, v10);
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
  if ( (byte_4A49A16 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B863B8(&ManagerConfig_TypeInfo, localScale);
    byte_4A49A16 = 1;
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
    sub_1B86614(v7, v8);
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

  if ( (byte_4A499E8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, method);
    byte_4A499E8 = 1;
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    sub_1B86614(0LL, method);
  return System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
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

  if ( (byte_4A49A10 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MasterPhotoMaster___, *(_QWORD *)&targetIndex);
    sub_1B863B8(&DataManager_TypeInfo, v5);
    byte_4A49A10 = 1;
  }
  entity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (MasterPhotoMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MasterPhotoMaster___);
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
    sub_1B86614(Master_object, v7);
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
  if ( (byte_4A49A0E & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_ServantScriptMaster___, photoStandFigure);
    sub_1B863B8(&DataManager_TypeInfo, v11);
    this = (MyRoomControl_o *)sub_1B863B8(&int___TypeInfo, v12);
    byte_4A49A0E = 1;
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
  this = (MyRoomControl_o *)sub_1B86460(int___TypeInfo, 2LL);
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
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantScriptMaster___);
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
    sub_1B86614(this, photoStandFigure);
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
    sub_1B8661C(this, photoStandFigure);
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

  if ( (byte_4A49A0F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, photoStandFigure);
    sub_1B863B8(&DataManager_TypeInfo, v9);
    sub_1B863B8(&int___TypeInfo, v10);
    byte_4A49A0F = 1;
  }
  costumeEntity = 0LL;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = (StaffPhotoCostumeMaster_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
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
  Master_object = (StaffPhotoCostumeMaster_o *)sub_1B86460(int___TypeInfo, 2LL);
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
      sub_1B8661C(Master_object, v12);
    }
LABEL_35:
    sub_1B86614(Master_object, v12);
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

  if ( (byte_4A499EC & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantCostumeMaster___, *(_QWORD *)&servantId);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int___ctor__, v6);
    sub_1B863B8(&System_Collections_Generic_List_int__TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A499EC = 1;
  }
  v9 = (System_Collections_Generic_List_int__o *)sub_1B86604(System_Collections_Generic_List_int__TypeInfo);
  System_Collections_Generic_List_int____ctor(
    v9,
    (const MethodInfo_35DF0E0 *)Method_System_Collections_Generic_List_int___ctor__);
  Instance = (ServantCostumeEntity_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_18;
  Instance = (ServantCostumeEntity_array *)DataManager__GetMasterData_object_(
                                             (DataManager_o *)Instance,
                                             (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantCostumeMaster___);
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
        sub_1B8661C(Instance, id);
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
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
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
    sub_1B86614(Instance, id);
  }
LABEL_16:
  if ( !v9 )
    goto LABEL_18;
  return System_Collections_Generic_List_int___ToArray(
           v9,
           (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
}


int32_t __fastcall MyRoomControl__GetState(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomControl_o *v2; // x19
  struct CStateManager_MyRoomControl__o *mFSM; // x8

  v2 = this;
  if ( (byte_4A499AA & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B863B8(&Method_CStateManager_MyRoomControl__getState__, method);
    byte_4A499AA = 1;
  }
  mFSM = v2->fields.mFSM;
  if ( !mFSM )
    sub_1B86614(this, method);
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
    sub_1B86614(v6, v7);
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

  if ( (byte_4A499D8 & 1) == 0 )
  {
    sub_1B863B8(&BalanceConfig_TypeInfo, method);
    sub_1B863B8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&Method_MyRoomControl_GoToTitle__, v5);
    sub_1B863B8(&Method_MyRoomControl__GoToTitle_b__332_0__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_8708/*"MYROOM_TITLE_CONFIRM"*/, v8);
    sub_1B863B8(&StringLiteral_1/*""*/, v9);
    byte_4A499D8 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  v10 = Method_MyRoomControl_GoToTitle__;
  if ( (*((_BYTE *)Method_MyRoomControl_GoToTitle__ + 83) & 2) != 0 )
    v10 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_GoToTitle__);
  v11 = (System_Reflection_MethodBase_o *)sub_1B8639C(v10, v10[4]);
  OverwriteAssetSoundName__PlaySystemSe(v11, 0, 0, 0LL);
  v12 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v13 = LocalizationManager__Get((System_String_o *)StringLiteral_8708/*"MYROOM_TITLE_CONFIRM"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B86604(CommonConfirmDialog_ClickDelegate_TypeInfo);
  CommonConfirmDialog_ClickDelegate___ctor(v15, (Il2CppObject *)this, Method_MyRoomControl__GoToTitle_b__332_0__, 0LL);
  v17 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
  if ( !Instance )
    sub_1B86614(v17, v16);
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
    sub_1B86614(continueDeviceComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)continueDeviceComp, 0, 0LL);
}


void __fastcall MyRoomControl__HideExchangeSvtCoinMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1B86614(0LL, method);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  const MethodInfo *v13; // x2

  if ( (byte_4A49A23 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v3);
    sub_1B863B8(&Method_MyRoomControl___c__HidePhotoUi_b__437_0__, v4);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v5);
    byte_4A49A23 = 1;
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
    v8 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v8, v9, Method_MyRoomControl___c__HidePhotoUi_b__437_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__437_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v8;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__437_0, (int32_t)v8, v11, v12);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v8,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0LL) )
  {
    sub_1B86614(photoCampaignDispUiMask, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 1, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 0, v13);
}


System_Collections_IEnumerator_o *__fastcall MyRoomControl__InitMaterialOnBackground(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3

  if ( (byte_4A499CA & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo, method);
    byte_4A499CA = 1;
  }
  v3 = sub_1B86604(MyRoomControl__InitMaterialOnBackground_d__286_TypeInfo);
  MyRoomControl__InitMaterialOnBackground_d__286___ctor((MyRoomControl__InitMaterialOnBackground_d__286_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  const MethodInfo *v7; // x3

  if ( (byte_4A499CC & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__InitServantMenu_d__289_TypeInfo, method);
    byte_4A499CC = 1;
  }
  v3 = sub_1B86604(MyRoomControl__InitServantMenu_d__289_TypeInfo);
  MyRoomControl__InitServantMenu_d__289___ctor((MyRoomControl__InitServantMenu_d__289_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A499F9 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, method);
    byte_4A499F9 = 1;
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

  if ( (byte_4A49A1A & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, method);
    byte_4A49A1A = 1;
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
  if ( (byte_4A499F2 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&index);
    byte_4A499F2 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_8;
  if ( multipleStandFigureBacks->max_length <= index )
    sub_1B8661C(this, *(_QWORD *)&index);
  this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[index];
  if ( !this
    || (this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                    (UnityEngine_Component_o *)this,
                                    (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___)) == 0LL )
  {
LABEL_8:
    sub_1B86614(this, *(_QWORD *)&index);
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

  if ( (byte_4A499B9 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_15340/*"Wait_Action"*/, method);
    sub_1B863B8(&StringLiteral_7162/*"Help"*/, v3);
    byte_4A499B9 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15340/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v6 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v6, (System_String_o *)StringLiteral_7162/*"Help"*/, 0LL) )
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
    sub_1B86614(myRoomFsm, method);
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

  if ( (byte_4A499D0 & 1) == 0 )
  {
    sub_1B863B8(&AccountLinkageParams_TypeInfo, result);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    byte_4A499D0 = 1;
  }
  if ( System_String__op_Equality(result, (System_String_o *)StringLiteral_22061/*"ok"*/, 0LL) )
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
  DataManager_o *MasterData_object; // x0
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
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  __int64 v31; // x24
  __int64 v32; // x25
  __int64 v33; // x23
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c **v34; // x21
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v35; // x0
  UserEquipEntity_array *v36; // x29
  const MethodInfo_326D764 **v37; // x20
  __int64 v38; // x25
  __int64 v39; // x26
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterFemaleEquipTexture; // x24
  struct System_Collections_Generic_Dictionary_int__Texture2D__o *masterMaleEquipTexture; // x24
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v45; // x0
  Il2CppObject *v46; // x0
  System_String_o *v47; // x24
  AssetLoader_LoadEndDataHandler_o *v48; // x25
  __int64 v49; // x2
  __int64 v50; // x3
  __int64 v51; // x4
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_c *v52; // x0
  Il2CppObject *v53; // x0
  System_String_o *v54; // x23
  AssetLoader_LoadEndDataHandler_o *v55; // x24
  __int128 v57; // [xsp+10h] [xbp-80h] BYREF
  __int128 v58; // [xsp+20h] [xbp-70h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v59; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v60; // 0:x0.16

  if ( (byte_4A499FF & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_EquipMaster___, v2);
    sub_1B863B8(&Method_DataManager_GetMaster_UserEquipMaster___, v3);
    sub_1B863B8(&DataManager_TypeInfo, v4);
    sub_1B863B8(&Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__Texture2D__Add__, v6);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v7);
    sub_1B863B8(&NetworkManager_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__0__, v11);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__1__, v12);
    sub_1B863B8(&MyRoomControl___c__DisplayClass397_0_TypeInfo, v13);
    sub_1B863B8(&StringLiteral_8790/*"MasterFace/equip{0:D5}"*/, v14);
    byte_4A499FF = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserEquipMaster___);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A48C25 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v15);
    byte_4A48C25 = 1;
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
           0LL);
  v20 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
    v20 = sub_1BD6A48(v19);
  v21 = *(_QWORD *)(*(_QWORD *)(v20 + 192) + 16LL);
  if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
    v21 = sub_1BD6A48(v19);
  MasterData_object = **(DataManager_o ***)(v21 + 184);
  if ( !MasterData_object )
    goto LABEL_37;
  MasterData_object = (DataManager_o *)DataManager__GetMasterData_object_(
                                         MasterData_object,
                                         (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EquipMaster___);
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
        sub_1B8661C(MasterData_object, v15);
      v27 = List->m_Items[v26];
      v28 = sub_1B86604(MyRoomControl___c__DisplayClass397_0_TypeInfo);
      MyRoomControl___c__DisplayClass397_0___ctor((MyRoomControl___c__DisplayClass397_0_o *)v28, 0LL);
      if ( !v28 )
        break;
      *(_QWORD *)(v28 + 24) = this;
      sub_1B8635C((CGThumbnailListItem_o *)(v28 + 24), (int32_t)this, v29, v30);
      if ( !v27 )
        break;
      v32 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v31 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      if ( !(*v23)->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(*v23);
      *(_QWORD *)&v59.fields.currentCryptoKey = v32;
      *(_QWORD *)&v59.fields.fakeValue = v31;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v59, 0LL);
      if ( !v25 )
        break;
      v33 = v28 + 16;
      if ( !DataMasterBase_object__object__int___TryGetEntity(
              v25,
              (Il2CppObject **)(v28 + 16),
              (int32_t)MasterData_object,
              (const MethodInfo_32142CC *)Method_DataMasterBase_EquipMaster__EquipEntity__int__TryGetEntity__) )
        return;
      v34 = v23;
      v35 = *v23;
      v36 = List;
      v37 = (const MethodInfo_326D764 **)v24;
      v39 = *(_QWORD *)&v27->fields.equipId.fields.currentCryptoKey;
      v38 = *(_QWORD *)&v27->fields.equipId.fields.fakeValue;
      masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
      if ( !v35->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(v35);
      *(_QWORD *)&v60.fields.currentCryptoKey = v39;
      *(_QWORD *)&v60.fields.fakeValue = v38;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v60, 0LL);
      if ( !masterFemaleEquipTexture )
        break;
      v24 = (__int64 *)v37;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterFemaleEquipTexture,
        (int32_t)MasterData_object,
        0LL,
        *v37);
      masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
      MasterData_object = (DataManager_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                             v27->fields.equipId,
                                             0LL);
      if ( !masterMaleEquipTexture )
        break;
      System_Collections_Generic_Dictionary_int__object___Add(
        (System_Collections_Generic_Dictionary_int__object__o *)masterMaleEquipTexture,
        (int32_t)MasterData_object,
        0LL,
        *v37);
      if ( !*(_QWORD *)v33 )
        break;
      v45 = *v34;
      List = v36;
      v23 = v34;
      v58 = *(_OWORD *)(*(_QWORD *)v33 + 64LL);
      v46 = (Il2CppObject *)j_il2cpp_value_box_0(v45, &v58, v42, v43, v44);
      v47 = System_String__Format((System_String_o *)StringLiteral_8790/*"MasterFace/equip{0:D5}"*/, v46, 0LL);
      v48 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v48,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__0__,
        0LL);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      MasterData_object = (DataManager_o *)AssetManager__loadAssetStorage(v47, v48, 10, 0LL);
      if ( !*(_QWORD *)v33 )
        break;
      v52 = *v34;
      v57 = *(_OWORD *)(*(_QWORD *)v33 + 80LL);
      v53 = (Il2CppObject *)j_il2cpp_value_box_0(v52, &v57, v49, v50, v51);
      v54 = System_String__Format((System_String_o *)StringLiteral_8790/*"MasterFace/equip{0:D5}"*/, v53, 0LL);
      v55 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
      AssetLoader_LoadEndDataHandler___ctor(
        v55,
        (Il2CppObject *)v28,
        Method_MyRoomControl___c__DisplayClass397_0__LoadMasterEquip_b__1__,
        0LL);
      MasterData_object = (DataManager_o *)AssetManager__loadAssetStorage(v54, v55, 10, 0LL);
      max_length = List->max_length;
      if ( (int)++v26 >= max_length )
        return;
    }
LABEL_37:
    sub_1B86614(MasterData_object, v15);
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
  const MethodInfo *v7; // x3

  if ( (byte_4A499F4 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__LoadMultipleServant_d__381_TypeInfo, method);
    byte_4A499F4 = 1;
  }
  v3 = sub_1B86604(MyRoomControl__LoadMultipleServant_d__381_TypeInfo);
  MyRoomControl__LoadMultipleServant_d__381___ctor((MyRoomControl__LoadMultipleServant_d__381_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  AssetLoader_LoadEndDataHandler_o *v17; // x19

  if ( (byte_4A499FE & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, callBack);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass396_0__LoadPhotoCampaignAssets_b__0__, v7);
    sub_1B863B8(&MyRoomControl___c__DisplayClass396_0_TypeInfo, v8);
    sub_1B863B8(&StringLiteral_9074/*"MyRoom/PhotoCampaign"*/, v9);
    byte_4A499FE = 1;
  }
  v10 = sub_1B86604(MyRoomControl___c__DisplayClass396_0_TypeInfo);
  MyRoomControl___c__DisplayClass396_0___ctor((MyRoomControl___c__DisplayClass396_0_o *)v10, 0LL);
  if ( !v10 )
    goto LABEL_12;
  *(_QWORD *)(v10 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 16), (int32_t)this, v13, v14);
  *(_QWORD *)(v10 + 24) = callBack;
  sub_1B8635C((CGThumbnailListItem_o *)(v10 + 24), (int32_t)callBack, v15, v16);
  if ( this->fields.photoCampaignAssetData )
  {
    ActionExtensions__Call(*(System_Action_o **)(v10 + 24), 0LL);
    return;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v17 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v17,
    (Il2CppObject *)v10,
    Method_MyRoomControl___c__DisplayClass396_0__LoadPhotoCampaignAssets_b__0__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9074/*"MyRoom/PhotoCampaign"*/, v17, 1, 0LL) )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
      return;
    }
LABEL_12:
    sub_1B86614(Instance, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
System_Collections_IEnumerator_o *__fastcall MyRoomControl__LoadPhotoTarget(
        MyRoomControl_o *this,
        bool isUpdate,
        const MethodInfo *method)
{
  __int64 v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4A49A0A & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__LoadPhotoTarget_d__409_TypeInfo, isUpdate);
    byte_4A49A0A = 1;
  }
  v5 = sub_1B86604(MyRoomControl__LoadPhotoTarget_d__409_TypeInfo);
  MyRoomControl__LoadPhotoTarget_d__409___ctor((MyRoomControl__LoadPhotoTarget_d__409_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_BYTE *)(v5 + 40) = isUpdate;
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall MyRoomControl__LoadScriptFileListAssetData(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A499A5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, method);
    byte_4A499A5 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
}


void __fastcall MyRoomControl__LoadServantForm(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomSvtControl_o *svtCtr; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1

  if ( (byte_4A499C1 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__LoadServantForm_b__266_0__, v3);
    byte_4A499C1 = 1;
  }
  svtCtr = this->fields.svtCtr;
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_0__, 0LL);
  if ( !svtCtr )
    sub_1B86614(v6, v7);
  MyRoomSvtControl__PreloadFormAssets(svtCtr, v5, 0LL);
}


void __fastcall MyRoomControl__LoadServantFormEnd(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UIWidget_o *playBtnImg; // x0
  const MethodInfo *v5; // x1
  MyRoomControl_c *v6; // x0
  UnityEngine_Color_o v7; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A499C2 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, method);
    sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, v3);
    byte_4A499C2 = 1;
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
    sub_1B86614(playBtnImg, method);
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)playBtnImg, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
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
  if ( (byte_4A499E0 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_9082/*"MyRoomUIAnimationEnd"*/, target);
    byte_4A499E0 = 1;
  }
  this->fields.isMyRoomUIAnimation = 1;
  v10.fields.y = y;
  v10.fields.z = z;
  v10.fields.x = x;
  MyRoomControl__moveControl(this, target, v10, (System_String_o *)StringLiteral_9082/*"MyRoomUIAnimationEnd"*/, v4);
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
  __int64 v29; // x1
  struct MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x8
  const MethodInfo *v31; // x1
  int32_t multipleViewState; // w8
  _QWORD *v33; // x0
  System_Reflection_MethodBase_o *v34; // x0
  const MethodInfo *v35; // x1
  _QWORD *v36; // x0
  System_Reflection_MethodBase_o *v37; // x0
  const MethodInfo *v38; // x2
  int photoState; // w8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x21
  System_Action_o *v41; // x0
  __int64 *v42; // x8
  _QWORD *v43; // x0
  System_Reflection_MethodBase_o *v44; // x0
  const MethodInfo *v45; // x1
  int32_t type; // w8
  int32_t mState; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *temporaryPhotoTargetList; // x8
  int32_t size; // w8
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *v50; // x8
  int32_t v51; // w8
  System_Action_o *v52; // x20
  BaseDialog_o *cgThumbnailDialog; // x21
  System_Action_o *v54; // x20
  int v55; // w9
  char v56; // w8
  __int64 *v57; // x8
  bool v58; // w1
  MyRoomControl_o *v59; // x0
  __int64 *v60; // x8
  struct SetGameOptionComponent_o *optionComp; // x8
  int32_t optionSceneType_k__BackingField; // w9
  bool IsOpenFolder; // w0
  System_String_o *ActiveStateName; // x0
  struct NoticeInfoComponent_o *noticeComp; // x8
  struct MaterialCollectionComponent_o *materialCollectionComp; // x20
  MyRoomControl_c *v67; // x0
  struct NoticeInfoComponent_o *v68; // [xsp+8h] [xbp-28h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v69; // 0:x0.16
  UnityEngine_Color_o v70; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  v2 = this;
  if ( (byte_4A499DD & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v3);
    sub_1B863B8(&Method_MyRoomControl_OnClickBack__, v4);
    sub_1B863B8(&Method_MyRoomControl__OnClickBack_b__339_0__, v5);
    sub_1B863B8(&Method_MyRoomControl__OnClickBack_b__339_1__, v6);
    sub_1B863B8(&Method_MyRoomControl__OnClickBack_b__339_2__, v7);
    sub_1B863B8(&Method_MyRoomControl__OnClickBack_b__339_3__, v8);
    sub_1B863B8(&MyRoomControl_TypeInfo, v9);
    sub_1B863B8(&NetworkManager_TypeInfo, v10);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v11);
    sub_1B863B8(&StringLiteral_3496/*"CLOSE_ACCOUNT_LINKAGE"*/, v12);
    sub_1B863B8(&StringLiteral_3504/*"CLOSE_EXCHANGE_SVT_COIN"*/, v13);
    sub_1B863B8(&StringLiteral_3510/*"CLOSE_MATERIAL_COLLECTION"*/, v14);
    sub_1B863B8(&StringLiteral_3509/*"CLOSE_MATERIAL"*/, v15);
    sub_1B863B8(&StringLiteral_3521/*"CLOSE_USER_SERVANT_COIN"*/, v16);
    sub_1B863B8(&StringLiteral_3439/*"CLICK_BACK"*/, v17);
    sub_1B863B8(&StringLiteral_3513/*"CLOSE_NOTICE"*/, v18);
    sub_1B863B8(&StringLiteral_3507/*"CLOSE_GAMEOPTION"*/, v19);
    sub_1B863B8(&StringLiteral_3508/*"CLOSE_ITEMLIST"*/, v20);
    sub_1B863B8(&StringLiteral_3511/*"CLOSE_MATERIAL_COSTUME"*/, v21);
    sub_1B863B8(&StringLiteral_3502/*"CLOSE_CONTINUE_DEVICE"*/, v22);
    sub_1B863B8(&StringLiteral_3497/*"CLOSE_BLACKLIST"*/, v23);
    sub_1B863B8(&StringLiteral_12849/*"State 5"*/, v24);
    sub_1B863B8(&StringLiteral_3516/*"CLOSE_SERIAL_CODE"*/, v25);
    sub_1B863B8(&StringLiteral_3499/*"CLOSE_CHANGE_PROFILE"*/, v26);
    sub_1B863B8(&StringLiteral_3505/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/, v27);
    sub_1B863B8(&StringLiteral_3517/*"CLOSE_SOUND_PLAYER"*/, v28);
    this = (MyRoomControl_o *)sub_1B863B8(&StringLiteral_3506/*"CLOSE_FAVORITE_CHANGE"*/, v29);
    byte_4A499DD = 1;
  }
  mMaterialEventLogListViewManager = v2->fields.mMaterialEventLogListViewManager;
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_97;
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
          v43 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v43 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickBack__);
          v44 = (System_Reflection_MethodBase_o *)sub_1B8639C(v43, v43[4]);
          OverwriteAssetSoundName__PlaySystemSe(v44, 1, 0, 0LL);
          v2->fields.multipleViewState = 1;
          MyRoomControl__CloseMutlipleServant(v2, v45);
        }
        else if ( multipleViewState == 1 )
        {
          v33 = Method_MyRoomControl_OnClickBack__;
          if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
            v33 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickBack__);
          v34 = (System_Reflection_MethodBase_o *)sub_1B8639C(v33, v33[4]);
          OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0, 0LL);
          v2->fields.multipleViewState = 0;
          MyRoomControl__CloseMultipleView(v2, v35);
        }
        return;
      }
      if ( v2->fields.photoState )
      {
        v36 = Method_MyRoomControl_OnClickBack__;
        if ( (*((_BYTE *)Method_MyRoomControl_OnClickBack__ + 83) & 2) != 0 )
          v36 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickBack__);
        v37 = (System_Reflection_MethodBase_o *)sub_1B8639C(v36, v36[4]);
        OverwriteAssetSoundName__PlaySystemSe(v37, 1, 0, 0LL);
        photoState = v2->fields.photoState;
        if ( photoState > 2 )
        {
          if ( photoState != 7 )
          {
            if ( photoState != 8 )
              return;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v41 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v42 = &Method_MyRoomControl__OnClickBack_b__339_3__;
LABEL_43:
            v52 = v41;
            System_Action___ctor(v41, (Il2CppObject *)v2, *v42, 0LL);
            if ( photoServantSelectMenu )
            {
              PhotoServantSelectMenu__Close(photoServantSelectMenu, v52, 0LL);
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
            v41 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v42 = &Method_MyRoomControl__OnClickBack_b__339_2__;
            goto LABEL_43;
          }
          v58 = 1;
          v59 = v2;
LABEL_56:
          MyRoomControl__ConfirmTargetSelectState(v59, v58, v38);
          return;
        }
        if ( photoState != 1 )
        {
          if ( photoState == 2 )
            MyRoomControl__TransitionMyRoomTop(v2, method);
          return;
        }
        v50 = v2->fields.temporaryPhotoTargetList;
        if ( v50 )
        {
          v51 = v50->fields._size;
          if ( v51 != 1 )
          {
            if ( v51 )
              return;
            v2->fields.photoState = 0;
            photoServantSelectMenu = v2->fields.photoServantSelectMenu;
            v41 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            v42 = &Method_MyRoomControl__OnClickBack_b__339_1__;
            goto LABEL_43;
          }
          v59 = v2;
          v58 = 0;
          goto LABEL_56;
        }
      }
      else
      {
        this = (MyRoomControl_o *)MyRoomControl__GetState(v2, v31);
        if ( !(_DWORD)this || (type = v2->fields.type, type == 10) )
        {
          mState = v2->fields.mState;
          v2->fields.IsMaterialEventBack = 1;
          if ( mState )
          {
            MyRoomControl__setDefSvtPos(v2, method);
            return;
          }
          if ( v2->fields.type == 20 )
          {
            this = (MyRoomControl_o *)v2->fields.cgThumbnailDialog;
            if ( this )
            {
              CGThumbnailDialog__UnloadListViewAsset((CGThumbnailDialog_o *)this, 0LL);
              cgThumbnailDialog = (BaseDialog_o *)v2->fields.cgThumbnailDialog;
              v54 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
              System_Action___ctor(v54, (Il2CppObject *)v2, Method_MyRoomControl__OnClickBack_b__339_0__, 0LL);
              if ( cgThumbnailDialog )
              {
                BaseDialog__SafeClose(cgThumbnailDialog, v54, 0LL);
                return;
              }
            }
            goto LABEL_97;
          }
          this = (MyRoomControl_o *)v2->fields.mStateMaterial;
          if ( !this )
            goto LABEL_97;
          this = (MyRoomControl_o *)MyRoomStateMaterial__Back((MyRoomStateMaterial_o *)this, 0LL);
          if ( ((unsigned __int8)this & 1) != 0 )
            return;
          type = v2->fields.type;
        }
        method = (const MethodInfo *)StringLiteral_3439/*"CLICK_BACK"*/;
        v55 = type - 1;
        v56 = 0;
        switch ( v55 )
        {
          case 0:
            v57 = &StringLiteral_3509/*"CLOSE_MATERIAL"*/;
            goto LABEL_66;
          case 1:
            v60 = &StringLiteral_3510/*"CLOSE_MATERIAL_COLLECTION"*/;
            goto LABEL_79;
          case 2:
            v60 = &StringLiteral_3508/*"CLOSE_ITEMLIST"*/;
            goto LABEL_79;
          case 3:
            v60 = &StringLiteral_3499/*"CLOSE_CHANGE_PROFILE"*/;
            goto LABEL_79;
          case 4:
            optionComp = v2->fields.optionComp;
            if ( !optionComp )
              break;
            optionSceneType_k__BackingField = optionComp->fields._optionSceneType_k__BackingField;
            if ( optionSceneType_k__BackingField )
            {
              v56 = 0;
              if ( optionSceneType_k__BackingField == 1 )
                method = (const MethodInfo *)StringLiteral_3497/*"CLOSE_BLACKLIST"*/;
            }
            else
            {
              v60 = &StringLiteral_3507/*"CLOSE_GAMEOPTION"*/;
LABEL_79:
              method = (const MethodInfo *)*v60;
              v56 = 0;
            }
LABEL_80:
            if ( ((unsigned __int8)v56 & (v2->fields.mState != 0)) != 0 )
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
              if ( !System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12849/*"State 5"*/, 0LL) )
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
                    v68 = this->fields.noticeComp;
                    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
                    noticeComp = v68;
                  }
                  *(_QWORD *)&v69.fields.currentCryptoKey = noticeComp;
                  *(_QWORD *)&v69.fields.fakeValue = materialCollectionComp;
                  if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v69, 0LL) < 1
                    || v2->fields.isHeroine && v2->fields.isHeroineReave )
                  {
                    return;
                  }
                  this = (MyRoomControl_o *)v2->fields.changeBtnImg;
                  if ( this )
                  {
                    v70.fields.r = 1.0;
                    v70.fields.g = 1.0;
                    v70.fields.b = 1.0;
                    v70.fields.a = 1.0;
                    UIWidget__set_color((UIWidget_o *)this, v70, 0LL);
                    v67 = MyRoomControl_TypeInfo;
                    if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
                    {
                      j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
                      v67 = MyRoomControl_TypeInfo;
                    }
                    v2->fields.buttonFlag |= v67->static_fields->BUTTON_LIMIT_CHANGE;
                    return;
                  }
                }
              }
            }
            break;
          case 5:
            v57 = &StringLiteral_3513/*"CLOSE_NOTICE"*/;
LABEL_66:
            method = (const MethodInfo *)*v57;
            v56 = 1;
            goto LABEL_80;
          case 6:
            v60 = &StringLiteral_3516/*"CLOSE_SERIAL_CODE"*/;
            goto LABEL_79;
          case 7:
            v60 = &StringLiteral_3502/*"CLOSE_CONTINUE_DEVICE"*/;
            goto LABEL_79;
          case 8:
            v60 = &StringLiteral_3506/*"CLOSE_FAVORITE_CHANGE"*/;
            goto LABEL_79;
          case 9:
            v60 = &StringLiteral_3517/*"CLOSE_SOUND_PLAYER"*/;
            goto LABEL_79;
          case 10:
            v60 = &StringLiteral_3511/*"CLOSE_MATERIAL_COSTUME"*/;
            goto LABEL_79;
          case 16:
            v60 = &StringLiteral_3521/*"CLOSE_USER_SERVANT_COIN"*/;
            goto LABEL_79;
          case 17:
            v60 = &StringLiteral_3496/*"CLOSE_ACCOUNT_LINKAGE"*/;
            goto LABEL_79;
          case 18:
            this = (MyRoomControl_o *)v2->fields.exchangeSvtCoinComp;
            if ( !this )
              break;
            IsOpenFolder = ExchangeSvtCoinComponent__IsOpenFolder((ExchangeSvtCoinComponent_o *)this, 0LL);
            v60 = (__int64 *)&StringLiteral_3505/*"CLOSE_EXCHANGE_SVT_COIN_LIST"*/;
            if ( !IsOpenFolder )
              v60 = (__int64 *)&StringLiteral_3504/*"CLOSE_EXCHANGE_SVT_COIN"*/;
            goto LABEL_79;
          default:
            goto LABEL_80;
        }
      }
LABEL_97:
      sub_1B86614(this, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickChangeBg(MyRoomControl_o *this, const MethodInfo *method)
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
  MyRoomControl_c *v12; // x0
  struct MyRoomControl_StaticFields *static_fields; // x8
  struct System_Collections_Generic_List_int__o *enableBgGroupIdList; // x10
  int v15; // w9
  struct MyRoomControl_StaticFields *v16; // x8
  int32_t Item; // w0
  _QWORD *v18; // x0
  System_Reflection_MethodBase_o *v19; // x0
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v21; // x8
  CommonUI_o *v22; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v24; // x21
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0

  if ( (byte_4A49A29 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v6);
    sub_1B863B8(&Method_MyRoomControl_OnClickChangeBg__, v7);
    sub_1B863B8(&Method_MyRoomControl__OnClickChangeBg_b__450_0__, v8);
    sub_1B863B8(&MyRoomControl_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, v11);
    byte_4A49A29 = 1;
  }
  v12 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v12 = MyRoomControl_TypeInfo;
  }
  static_fields = v12->static_fields;
  if ( ((this->fields.buttonFlag & static_fields->BUTTON_CHANGE_BG) < 0) ^ v2 | ((this->fields.buttonFlag & static_fields->BUTTON_CHANGE_BG) == 0) )
  {
    v25 = Method_MyRoomControl_OnClickChangeBg__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeBg__ + 83) & 2) != 0 )
      v25 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickChangeBg__);
    v26 = (System_Reflection_MethodBase_o *)sub_1B8639C(v25, v25[4]);
    OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0LL);
  }
  else
  {
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomControl_TypeInfo;
      static_fields = MyRoomControl_TypeInfo->static_fields;
    }
    enableBgGroupIdList = static_fields->enableBgGroupIdList;
    v15 = static_fields->displayBgGroupIndex + 1;
    static_fields->displayBgGroupIndex = v15;
    if ( !enableBgGroupIdList )
      goto LABEL_25;
    if ( v15 >= enableBgGroupIdList->fields._size )
    {
      if ( !v12->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v12);
        v12 = MyRoomControl_TypeInfo;
        static_fields = MyRoomControl_TypeInfo->static_fields;
      }
      static_fields->displayBgGroupIndex = 0;
    }
    if ( !v12->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v12);
      v12 = MyRoomControl_TypeInfo;
    }
    v16 = v12->static_fields;
    v12 = (MyRoomControl_c *)v16->enableBgGroupIdList;
    if ( !v12 )
      goto LABEL_25;
    Item = System_Collections_Generic_List_int___get_Item(
             (System_Collections_Generic_List_int__o *)v12,
             v16->displayBgGroupIndex,
             (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
    UnityEngine_PlayerPrefs__SetInt((System_String_o *)StringLiteral_5263/*"DisplayMyRoomBgGroupId"*/, Item, 0LL);
    UnityEngine_PlayerPrefs__Save(0LL);
    v18 = Method_MyRoomControl_OnClickChangeBg__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeBg__ + 83) & 2) != 0 )
      v18 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickChangeBg__);
    v19 = (System_Reflection_MethodBase_o *)sub_1B8639C(v18, v18[4]);
    OverwriteAssetSoundName__PlaySystemSe(v19, 0, 0, 0LL);
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v21 = AvalonSceneManager_TypeInfo;
    v22 = (CommonUI_o *)Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      v21 = AvalonSceneManager_TypeInfo;
    }
    DEFAULT_FADE_TIME = v21->static_fields->DEFAULT_FADE_TIME;
    v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_MyRoomControl__OnClickChangeBg_b__450_0__, 0LL);
    if ( !v22 )
LABEL_25:
      sub_1B86614(v12, method);
    CommonUI__maskFadeout(v22, 1, DEFAULT_FADE_TIME, v24, 0LL);
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

  if ( (byte_4A499B8 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v4);
    sub_1B863B8(&Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v6);
    sub_1B863B8(&Method_MyRoomControl_OnClickChangeLimit__, v7);
    sub_1B863B8(&MyRoomControl_TypeInfo, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    sub_1B863B8(&StringLiteral_15340/*"Wait_Action"*/, v11);
    sub_1B863B8(&StringLiteral_3347/*"CHANGE_LIMIT"*/, v12);
    sub_1B863B8(&StringLiteral_7162/*"Help"*/, v13);
    byte_4A499B8 = 1;
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
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15340/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_45;
    v17 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v17, (System_String_o *)StringLiteral_7162/*"Help"*/, 0LL) )
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
      if ( CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v35, 0LL) > 0 || this->fields.isHeroine )
        goto LABEL_40;
      return;
    }
LABEL_30:
    v28 = Method_MyRoomControl_OnClickChangeLimit__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickChangeLimit__ + 83) & 2) != 0 )
      v28 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickChangeLimit__);
    v29 = (System_Reflection_MethodBase_o *)sub_1B8639C(v28, v28[4]);
    OverwriteAssetSoundName__PlaySystemSe(v29, 2, 0, 0LL);
    return;
  }
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
  myRoomFsm = (PlayMakerFSM_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomFsm )
    goto LABEL_45;
  myRoomFsm = (PlayMakerFSM_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)myRoomFsm,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantMaster___);
  if ( !EntityDefinitely )
    goto LABEL_45;
  v20 = (DataMasterBase_TMaster__TEntity__PKType__o *)myRoomFsm;
  v22 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.currentCryptoKey;
  v21 = *(_QWORD *)&EntityDefinitely->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v34.fields.currentCryptoKey = v22;
  *(_QWORD *)&v34.fields.fakeValue = v21;
  myRoomFsm = (PlayMakerFSM_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v34, 0LL);
  if ( !v20 )
    goto LABEL_45;
  Entity = DataMasterBase_object__object__int___GetEntity(
             v20,
             (int32_t)myRoomFsm,
             (const MethodInfo_3214280 *)Method_DataMasterBase_ServantMaster__ServantEntity__int__GetEntity__);
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
        v32 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickChangeLimit__);
      v33 = (System_Reflection_MethodBase_o *)sub_1B8639C(v32, v32[4]);
      OverwriteAssetSoundName__PlaySystemSe(v33, 0, 0, 0LL);
      myRoomFsm = this->fields.myRoomFsm;
      if ( myRoomFsm )
      {
        PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3347/*"CHANGE_LIMIT"*/, 0LL);
        return;
      }
LABEL_45:
      sub_1B86614(myRoomFsm, method);
    }
  }
}


void __fastcall MyRoomControl__OnClickCloseMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A499EF & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickCloseMultipleView__, method);
    byte_4A499EF = 1;
  }
  v3 = Method_MyRoomControl_OnClickCloseMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickCloseMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickCloseMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  const MethodInfo *v17; // x2

  if ( (byte_4A49A24 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v3);
    sub_1B863B8(&Method_MyRoomControl_OnClickDispPhotoUi__, v4);
    sub_1B863B8(&Method_MyRoomControl___c__OnClickDispPhotoUi_b__438_0__, v5);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v6);
    byte_4A49A24 = 1;
  }
  v7 = Method_MyRoomControl_OnClickDispPhotoUi__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickDispPhotoUi__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickDispPhotoUi__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v7, v7[4]);
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
    v12 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v12, v13, Method_MyRoomControl___c__OnClickDispPhotoUi_b__438_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__438_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v12;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__438_0, (int32_t)v12, v15, v16);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v12,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (photoCampaignDispUiMask = this->fields.photoCampaignDispUiMask) == 0LL) )
  {
    sub_1B86614(photoCampaignDispUiMask, v9);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)photoCampaignDispUiMask, 0, 0LL);
  MyRoomControl__SetPhotoCampaignUi(this, 1, v17);
}


void __fastcall MyRoomControl__OnClickEventLogSortKind(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  MaterialCollectionServantListViewManager_o *materialCollectionServantListViewManager; // x0

  if ( (byte_4A499FD & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickEventLogSortKind__, method);
    byte_4A499FD = 1;
  }
  v3 = Method_MyRoomControl_OnClickEventLogSortKind__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickEventLogSortKind__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickEventLogSortKind__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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
    sub_1B86614(materialCollectionServantListViewManager, v5);
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

  if ( (byte_4A499F0 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickLeftServant__, method);
    byte_4A499F0 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 0, v2) )
  {
    v4 = Method_MyRoomControl_OnClickLeftServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickLeftServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickLeftServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
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
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  int32_t v54; // w2
  const MethodInfo *v55; // x3
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

  if ( (byte_4A49A15 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickPhotoCampaignBackGround__, method);
    sub_1B863B8(&StringLiteral_6669/*"FinishedCloseFullScreenPhotoCampaign"*/, v3);
    byte_4A49A15 = 1;
  }
  localScale.fields.z = 0.0;
  *(_QWORD *)&localScale.fields.x = 0LL;
  v56.fields.z = 0.0;
  *(_QWORD *)&v56.fields.x = 0LL;
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
        v31 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v32 = (System_Reflection_MethodBase_o *)sub_1B8639C(v31, v31[4]);
      OverwriteAssetSoundName__PlaySystemSe(v32, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoCampaignBackGroundSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      goto LABEL_34;
    case 5:
      v33 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v33 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v34 = (System_Reflection_MethodBase_o *)sub_1B8639C(v33, v33[4]);
      OverwriteAssetSoundName__PlaySystemSe(v34, 1, 0, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
      if ( !maskBoxCollider )
        goto LABEL_37;
      v40 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskBoxCollider, 0LL);
      v63.fields.x = 1.0;
      v63.fields.y = 1.0;
      v63.fields.z = 1.0;
      TweenScale__Begin(v40, 0.2, v63, 0LL);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
      sub_1B8635C((CGThumbnailListItem_o *)&v50->fields.eventReceiver, (int32_t)maskBoxCollider, v51, v52);
      v53 = StringLiteral_6669/*"FinishedCloseFullScreenPhotoCampaign"*/;
      v50->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6669/*"FinishedCloseFullScreenPhotoCampaign"*/;
      sub_1B8635C((CGThumbnailListItem_o *)&v50->fields.callWhenFinished, v53, v54, v55);
      return;
    case 4:
      v6 = Method_MyRoomControl_OnClickPhotoCampaignBackGround__;
      if ( (*((_BYTE *)Method_MyRoomControl_OnClickPhotoCampaignBackGround__ + 83) & 2) != 0 )
        v6 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickPhotoCampaignBackGround__);
      v7 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
      OverwriteAssetSoundName__PlaySystemSe(v7, 0, 0, 0LL);
      this->fields.photoState = 5;
      MyRoomControl__GetMaximTransformValues(this, &localScale, &v56, v8);
      maskBoxCollider = (UnityEngine_Collider_o *)this->fields.takingPhotoFrameSprite;
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
            if ( !byte_4A487E1 )
            {
              sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v21);
              byte_4A487E1 = 1;
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
                  if ( !byte_4A487E1 )
                  {
                    sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v29);
                    byte_4A487E1 = 1;
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
      sub_1B86614(maskBoxCollider, method);
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

  if ( (byte_4A49A13 & 1) == 0 )
  {
    sub_1B863B8(&TouchEffectManager_TypeInfo, method);
    byte_4A49A13 = 1;
  }
  if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
  TouchEffectManager__SetBlock(1, 0LL);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo || (backBtn = titleInfo->fields.backBtn) == 0LL )
    sub_1B86614(backBtn, v4);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v12, 0LL);
}


void __fastcall MyRoomControl__OnClickRightServant(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4A499F1 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickRightServant__, method);
    byte_4A499F1 = 1;
  }
  if ( !MyRoomControl__IsFrontMultipleServant(this, 1, v2) )
  {
    v4 = Method_MyRoomControl_OnClickRightServant__;
    if ( (*((_BYTE *)Method_MyRoomControl_OnClickRightServant__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickRightServant__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B8639C(v4, v4[4]);
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
  struct System_Int64_array *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Int32_array *v22; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Action_o *v25; // x20
  const MethodInfo *v26; // x4

  if ( (byte_4A499ED & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&int___TypeInfo, v3);
    sub_1B863B8(&long___TypeInfo, v4);
    sub_1B863B8(&Method_MyRoomControl_OnClickSelectMultipleServant__, v5);
    sub_1B863B8(&Method_MyRoomControl__OnClickSelectMultipleServant_b__373_0__, v6);
    sub_1B863B8(&StringLiteral_15340/*"Wait_Action"*/, v7);
    sub_1B863B8(&StringLiteral_7162/*"Help"*/, v8);
    byte_4A499ED = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_16;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15340/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_16;
    v11 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
    if ( System_String__op_Inequality(v11, (System_String_o *)StringLiteral_7162/*"Help"*/, 0LL) )
      return;
  }
  IsEnableMultipleViewButton = MyRoomControl__IsEnableMultipleViewButton(this, method);
  v13 = Method_MyRoomControl_OnClickSelectMultipleServant__;
  v14 = IsEnableMultipleViewButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectMultipleServant__ + 83) & 2) != 0 )
    v13 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickSelectMultipleServant__);
  v15 = (System_Reflection_MethodBase_o *)sub_1B8639C(v13, v13[4]);
  if ( !v14 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v15, 2, 0, 0LL);
    return;
  }
  OverwriteAssetSoundName__PlaySystemSe(v15, 0, 0, 0LL);
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_16:
    sub_1B86614(myRoomFsm, method);
  v17 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v17 >= max_length )
      break;
    if ( (unsigned int)v17 >= max_length )
      sub_1B8661C(myRoomFsm, method);
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
  v19 = (struct System_Int64_array *)sub_1B86460(long___TypeInfo, 2LL);
  this->fields.multipleServantUsrIds = v19;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds, (int32_t)v19, v20, v21);
  v22 = (struct System_Int32_array *)sub_1B86460(int___TypeInfo, 2LL);
  this->fields.multipleLimitCounts = v22;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)v22, v23, v24);
  v25 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v25, (Il2CppObject *)this, Method_MyRoomControl__OnClickSelectMultipleServant_b__373_0__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v25, 1, v26);
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

  if ( (byte_4A49A01 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl_EndLoadPhotoAsset__, v3);
    sub_1B863B8(&Method_MyRoomControl_OnClickSelectPhotoCampaign__, v4);
    sub_1B863B8(&StringLiteral_15340/*"Wait_Action"*/, v5);
    sub_1B863B8(&StringLiteral_7162/*"Help"*/, v6);
    byte_4A49A01 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    goto LABEL_14;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
  if ( System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_15340/*"Wait_Action"*/, 0LL) )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      v9 = PlayMakerFSM__get_ActiveStateName(myRoomFsm, 0LL);
      if ( System_String__op_Inequality(v9, (System_String_o *)StringLiteral_7162/*"Help"*/, 0LL) )
        return;
      goto LABEL_7;
    }
LABEL_14:
    sub_1B86614(myRoomFsm, method);
  }
LABEL_7:
  IsEnablePhotoCampaignButton = MyRoomControl__IsEnablePhotoCampaignButton(this, method);
  v11 = Method_MyRoomControl_OnClickSelectPhotoCampaign__;
  v12 = IsEnablePhotoCampaignButton;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickSelectPhotoCampaign__ + 83) & 2) != 0 )
    v11 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickSelectPhotoCampaign__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B8639C(v11, v11[4]);
  if ( v12 )
  {
    OverwriteAssetSoundName__PlaySystemSe(v13, 0, 0, 0LL);
    v14 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
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

  if ( (byte_4A499FC & 1) == 0 )
  {
    sub_1B863B8(&MyRoomRootComponent_TypeInfo, method);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v3);
    byte_4A499FC = 1;
  }
  Instance = (MaterialCollectionServantListViewManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
    sub_1B86614(Instance, v5);
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

  if ( (byte_4A499BC & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickSvt__, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_10242/*"PLAY_VOICE"*/, v5);
    byte_4A499BC = 1;
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
      v8 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickSvt__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B8639C(v8, v8[4]);
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
        MyRoomControl__setNormalFace_31887636(this, 1, v11);
        return;
      }
    }
    else
    {
      svtCtr = (MyRoomSvtControl_o *)this->fields.myRoomFsm;
      this->fields.isVoicePlaying = 1;
      if ( svtCtr )
      {
        PlayMakerFSM__SendEvent((PlayMakerFSM_o *)svtCtr, (System_String_o *)StringLiteral_10242/*"PLAY_VOICE"*/, 0LL);
        return;
      }
    }
    sub_1B86614(svtCtr, v7);
  }
}


void __fastcall MyRoomControl__OnClickUiDisableMultipleView(MyRoomControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4A499EE & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickUiDisableMultipleView__, method);
    byte_4A499EE = 1;
  }
  v3 = Method_MyRoomControl_OnClickUiDisableMultipleView__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickUiDisableMultipleView__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickUiDisableMultipleView__);
  v4 = (System_Reflection_MethodBase_o *)sub_1B8639C(v3, v3[4]);
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

  if ( (byte_4A499FB & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_OnClickValentineListChange__, method);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v3);
    sub_1B863B8(&MyRoomRootComponent_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v5);
    byte_4A499FB = 1;
  }
  Instance = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
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
  v11 = *(MyRoomStateMaterial_o **)(v10 + 920);
  v12 = Method_MyRoomControl_OnClickValentineListChange__;
  if ( (*((_BYTE *)Method_MyRoomControl_OnClickValentineListChange__ + 83) & 2) != 0 )
    v12 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_OnClickValentineListChange__);
  v13 = (System_Reflection_MethodBase_o *)sub_1B8639C(v12, v12[4]);
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
    sub_1B86614(Instance, v7);
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

  if ( (byte_4A499A8 & 1) == 0 )
  {
    sub_1B863B8(&Gesture_EventHandler_TypeInfo, method);
    sub_1B863B8(&FingerGestures_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4A499A8 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B86604(Gesture_EventHandler_TypeInfo);
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
    sub_1B86614(0LL, method);
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
  __int64 v13; // x20
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x8
  int v21; // w12
  __int64 v22; // x10
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  unsigned int max_length; // w9
  int FaceListIndex_k__BackingField; // w11
  __int64 v26; // x10
  struct PhotoStandFigureComponent_array *photoStandFigures; // x11
  PhotoStandFigureComponent_o *v28; // x11
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x21
  int32_t v30; // w22
  System_Action_T__o *v31; // x23
  System_Action_o *v32; // x20
  System_Action_bool__o *v33; // x24

  if ( (byte_4A49A1F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1B863B8(&System_Action_PhotoUtility_TargetType__TypeInfo, v9);
    sub_1B863B8(&Method_MyRoomControl_SetMaskCollider__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__0__, v11);
    sub_1B863B8(&MyRoomControl___c__DisplayClass433_0_TypeInfo, v12);
    byte_4A49A1F = 1;
  }
  v13 = sub_1B86604(MyRoomControl___c__DisplayClass433_0_TypeInfo);
  MyRoomControl___c__DisplayClass433_0___ctor((MyRoomControl___c__DisplayClass433_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_14;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 48) = cancelCallback;
  *(_DWORD *)(v13 + 36) = anotherTargetType;
  *(_BYTE *)(v13 + 40) = isLeft;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 48), (int32_t)cancelCallback, v18, v19);
  v20 = *(unsigned __int8 *)(v13 + 40);
  v21 = *(_DWORD *)(v13 + 36);
  v22 = v20 ^ 1;
  *(_DWORD *)(v13 + 28) = v20;
  *(_DWORD *)(v13 + 32) = v20 ^ 1;
  *(_BYTE *)(v13 + 24) = v21 == 0;
  photoTargetFaceListIndex = this->fields.photoTargetFaceListIndex;
  if ( !photoTargetFaceListIndex )
LABEL_14:
    sub_1B86614(v14, v15);
  max_length = photoTargetFaceListIndex->max_length;
  if ( (unsigned int)v22 >= max_length )
    goto LABEL_15;
  FaceListIndex_k__BackingField = -1;
  photoTargetFaceListIndex->m_Items[v22 + 1] = -1;
  v26 = *(int *)(v13 + 28);
  if ( v21 )
    goto LABEL_11;
  photoStandFigures = this->fields.photoStandFigures;
  if ( !photoStandFigures )
    goto LABEL_14;
  if ( (unsigned int)v26 >= photoStandFigures->max_length )
LABEL_15:
    sub_1B8661C(v14, v15);
  v28 = photoStandFigures->m_Items[v26];
  if ( !v28 )
    goto LABEL_14;
  FaceListIndex_k__BackingField = v28->fields._FaceListIndex_k__BackingField;
LABEL_11:
  if ( (unsigned int)v26 >= max_length )
    goto LABEL_15;
  photoTargetFaceListIndex->m_Items[v26 + 1] = FaceListIndex_k__BackingField;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v30 = *(_DWORD *)(v13 + 36);
  v31 = (System_Action_T__o *)sub_1B86604(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v31,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__0__,
    0LL);
  v32 = *(System_Action_o **)(v13 + 48);
  v33 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v33, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoTargetSelectDialog )
    goto LABEL_14;
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    v30,
    0,
    (System_Action_PhotoUtility_TargetType__o *)v31,
    v32,
    v33,
    0LL);
}


void __fastcall MyRoomControl__OpenExchangeSvtCoin(MyRoomControl_o *this, const MethodInfo *method)
{
  ExchangeSvtCoinComponent_o *exchangeSvtCoinComp; // x0

  exchangeSvtCoinComp = this->fields.exchangeSvtCoinComp;
  if ( !exchangeSvtCoinComp )
    sub_1B86614(0LL, method);
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

  if ( (byte_4A49A07 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, callBack);
    sub_1B863B8(&Method_MyRoomControl_SetMaskCollider__, v7);
    byte_4A49A07 = 1;
  }
  masterEquipSettingDialog = this->fields.masterEquipSettingDialog;
  masterMaleEquipTexture = this->fields.masterMaleEquipTexture;
  masterFemaleEquipTexture = this->fields.masterFemaleEquipTexture;
  v11 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !masterEquipSettingDialog )
    sub_1B86614(v12, v13);
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
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  const MethodInfo *v8; // x1
  System_Collections_IEnumerator_o *MultipleServant; // x1

  this->fields.multipleServantUsrIds = usrSvtIds;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields.multipleServantUsrIds,
    (int32_t)usrSvtIds,
    (int32_t)imageLimitCounts,
    method);
  this->fields.multipleLimitCounts = imageLimitCounts;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.multipleLimitCounts, (int32_t)imageLimitCounts, v6, v7);
  MultipleServant = MyRoomControl__LoadMultipleServant(this, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, MultipleServant, 0LL);
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
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  PhotoFrameSelectDialog_o *photoFrameSelectDialog; // x21
  PhotoFrameSelectDialog_DecideDelegate_o *v19; // x23
  System_Action_bool__o *v20; // x22

  if ( (byte_4A49A08 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, decideCallback);
    sub_1B863B8(&PhotoFrameSelectDialog_DecideDelegate_TypeInfo, v7);
    sub_1B863B8(&Method_MyRoomControl_SetMaskCollider__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass407_0__OpenPhotoFrameSelectDialog_b__0__, v9);
    sub_1B863B8(&MyRoomControl___c__DisplayClass407_0_TypeInfo, v10);
    byte_4A49A08 = 1;
  }
  v11 = sub_1B86604(MyRoomControl___c__DisplayClass407_0_TypeInfo);
  MyRoomControl___c__DisplayClass407_0___ctor((MyRoomControl___c__DisplayClass407_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_6;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = decideCallback;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)decideCallback, v16, v17);
  photoFrameSelectDialog = this->fields.photoFrameSelectDialog;
  v19 = (PhotoFrameSelectDialog_DecideDelegate_o *)sub_1B86604(PhotoFrameSelectDialog_DecideDelegate_TypeInfo);
  PhotoFrameSelectDialog_DecideDelegate___ctor(
    v19,
    (Il2CppObject *)v11,
    Method_MyRoomControl___c__DisplayClass407_0__OpenPhotoFrameSelectDialog_b__0__,
    0LL);
  v20 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v20, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoFrameSelectDialog )
LABEL_6:
    sub_1B86614(v12, v13);
  PhotoFrameSelectDialog__Open(photoFrameSelectDialog, v19, cancelCallback, v20, 0LL);
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

  if ( (byte_4A499F8 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, *(_QWORD *)&type);
    sub_1B863B8(&Method_MyRoomControl_SetMaskCollider__, v11);
    byte_4A499F8 = 1;
  }
  selectImageLimitDialog = this->fields.selectImageLimitDialog;
  v13 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v13, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !selectImageLimitDialog )
    sub_1B86614(v14, v15);
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
  __int64 v15; // x20
  struct System_Collections_Generic_List_PhotoUtility_TargetType__o *photoTargetList; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x9
  __int64 v23; // x8
  PhotoStandFigureComponent_o *v24; // x9
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *v26; // x8
  __int64 v27; // x9
  PhotoStandFigureComponent_o *v28; // x8
  int32_t v29; // w22
  System_Action_o *v30; // x23
  System_Action_int__o *v31; // x24
  System_Action_o *v32; // x25
  const MethodInfo *v33; // x6

  if ( (byte_4A49A20 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1B863B8(&System_Action_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__0__, v11);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__1__, v12);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__2__, v13);
    sub_1B863B8(&MyRoomControl___c__DisplayClass434_0_TypeInfo, v14);
    byte_4A49A20 = 1;
  }
  v15 = sub_1B86604(MyRoomControl___c__DisplayClass434_0_TypeInfo);
  MyRoomControl___c__DisplayClass434_0___ctor((MyRoomControl___c__DisplayClass434_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_18;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 32) = cancelCallback;
  *(_DWORD *)(v15 + 24) = anotherTargetType;
  *(_BYTE *)(v15 + 28) = isLeft;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)cancelCallback, v20, v21);
  if ( *(_DWORD *)(v15 + 24) == 2 )
  {
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_18;
    v23 = *(unsigned __int8 *)(v15 + 28);
    if ( (unsigned int)v23 >= photoStandFigures->max_length )
LABEL_19:
      sub_1B8661C(photoTargetList, v17);
    v24 = photoStandFigures->m_Items[v23];
    if ( !v24 )
      goto LABEL_18;
    StandFigureImageId_k__BackingField = v24->fields._StandFigureImageId_k__BackingField;
  }
  else
  {
    LODWORD(v23) = *(unsigned __int8 *)(v15 + 28);
    StandFigureImageId_k__BackingField = -1;
  }
  v17 = (unsigned int)v23 ^ 1;
  *(_DWORD *)(v15 + 40) = v17;
  photoTargetList = this->fields.photoTargetList;
  if ( !photoTargetList )
    goto LABEL_18;
  photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                                                           (System_Collections_Generic_List_T__o *)photoTargetList,
                                                                                           v17,
                                                                                           (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  if ( (_DWORD)photoTargetList != 2 )
  {
    v29 = -1;
    goto LABEL_17;
  }
  v26 = this->fields.photoStandFigures;
  if ( !v26 )
LABEL_18:
    sub_1B86614(photoTargetList, v17);
  v27 = *(int *)(v15 + 40);
  if ( (unsigned int)v27 >= v26->max_length )
    goto LABEL_19;
  v28 = v26->m_Items[v27];
  if ( !v28 )
    goto LABEL_18;
  v29 = v28->fields._StandFigureImageId_k__BackingField;
LABEL_17:
  v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__0__,
    0LL);
  v31 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v31,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__1__,
    0LL);
  v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v32,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass434_0__OpenStaffChangeDialog_b__2__,
    0LL);
  MyRoomControl__OpenStaffDialog(this, v30, v31, v32, StandFigureImageId_k__BackingField, v29, v33);
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
  __int64 v15; // x23
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  PhotoCampaignStaffSelectDialog_o *photoStaffSelectDialog; // x20
  System_Action_T1__T2__T3__o *v27; // x21

  if ( (byte_4A49A21 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo, staffSelectCancelAction);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__0__, v13);
    sub_1B863B8(&MyRoomControl___c__DisplayClass435_0_TypeInfo, v14);
    byte_4A49A21 = 1;
  }
  v15 = sub_1B86604(MyRoomControl___c__DisplayClass435_0_TypeInfo);
  MyRoomControl___c__DisplayClass435_0___ctor((MyRoomControl___c__DisplayClass435_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_6;
  *(_QWORD *)(v15 + 16) = staffCostumeSelectDecideAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)staffCostumeSelectDecideAction, v18, v19);
  *(_DWORD *)(v15 + 24) = baseStaffImageId;
  *(_QWORD *)(v15 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 32), (int32_t)this, v20, v21);
  *(_QWORD *)(v15 + 40) = staffCostumeSelectCancelAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 40), (int32_t)staffCostumeSelectCancelAction, v22, v23);
  *(_QWORD *)(v15 + 48) = staffSelectCancelAction;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 48), (int32_t)staffSelectCancelAction, v24, v25);
  photoStaffSelectDialog = this->fields.photoStaffSelectDialog;
  v27 = (System_Action_T1__T2__T3__o *)sub_1B86604(System_Action_bool__int__List_StaffPhotoCostumeEntity___TypeInfo);
  System_Action_bool__int__object____ctor(
    v27,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__0__,
    0LL);
  if ( !photoStaffSelectDialog )
LABEL_6:
    sub_1B86614(v16, v17);
  PhotoCampaignStaffSelectDialog__Open(
    photoStaffSelectDialog,
    (System_Action_bool__int__List_StaffPhotoCostumeEntity___o *)v27,
    selectedStaffImageId,
    *(_DWORD *)(v15 + 24),
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
  __int64 v12; // x20
  __int64 v13; // x0
  __int64 v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct System_Int32_array *temporaryStaffImageId; // x8
  int32_t v18; // w22
  int32_t StandFigureImageId_k__BackingField; // w21
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v21; // x8
  System_Action_o *v22; // x23
  System_Action_int__o *v23; // x24
  System_Action_o *v24; // x25
  const MethodInfo *v25; // x6

  if ( (byte_4A49A04 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_int__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1B863B8(&System_Action_TypeInfo, v7);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__0__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__1__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__2__, v10);
    sub_1B863B8(&MyRoomControl___c__DisplayClass403_0_TypeInfo, v11);
    byte_4A49A04 = 1;
  }
  v12 = sub_1B86604(MyRoomControl___c__DisplayClass403_0_TypeInfo);
  MyRoomControl___c__DisplayClass403_0___ctor((MyRoomControl___c__DisplayClass403_0_o *)v12, 0LL);
  if ( !v12 )
    goto LABEL_15;
  *(_QWORD *)(v12 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v12 + 16), (int32_t)this, v15, v16);
  *(_BYTE *)(v12 + 24) = isChangeTarget;
  *(_DWORD *)(v12 + 28) = anotherTargetType;
  if ( anotherTargetType != 2 )
  {
    v18 = -1;
    if ( !isChangeTarget )
      goto LABEL_8;
    goto LABEL_10;
  }
  temporaryStaffImageId = this->fields.temporaryStaffImageId;
  if ( !temporaryStaffImageId )
    goto LABEL_15;
  if ( !temporaryStaffImageId->max_length )
    goto LABEL_16;
  v18 = temporaryStaffImageId->m_Items[1];
  if ( isChangeTarget )
  {
LABEL_10:
    photoStandFigures = this->fields.photoStandFigures;
    if ( !photoStandFigures )
      goto LABEL_15;
    if ( photoStandFigures->max_length )
    {
      v21 = photoStandFigures->m_Items[0];
      if ( v21 )
      {
        StandFigureImageId_k__BackingField = v21->fields._StandFigureImageId_k__BackingField;
        goto LABEL_14;
      }
LABEL_15:
      sub_1B86614(v13, v14);
    }
LABEL_16:
    sub_1B8661C(v13, v14);
  }
LABEL_8:
  StandFigureImageId_k__BackingField = -1;
LABEL_14:
  v22 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v22,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__0__,
    0LL);
  v23 = (System_Action_int__o *)sub_1B86604(System_Action_int__TypeInfo);
  System_Action_int____ctor(
    v23,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__1__,
    0LL);
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v12,
    Method_MyRoomControl___c__DisplayClass403_0__OpenStaffSelectDialog_b__2__,
    0LL);
  MyRoomControl__OpenStaffDialog(this, v22, v23, v24, v18, StandFigureImageId_k__BackingField, v25);
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
  __int64 v15; // x24
  __int64 v16; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  PhotoTargetSelectDialog_o *photoTargetSelectDialog; // x23
  System_Action_T__o *v21; // x25
  System_Action_bool__o *v22; // x24

  if ( (byte_4A49A03 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_bool__TypeInfo, *(_QWORD *)&anotherTargetType);
    sub_1B863B8(&System_Action_PhotoUtility_TargetType__TypeInfo, v11);
    sub_1B863B8(&Method_MyRoomControl_SetMaskCollider__, v12);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__0__, v13);
    sub_1B863B8(&MyRoomControl___c__DisplayClass402_0_TypeInfo, v14);
    byte_4A49A03 = 1;
  }
  v15 = sub_1B86604(MyRoomControl___c__DisplayClass402_0_TypeInfo);
  MyRoomControl___c__DisplayClass402_0___ctor((MyRoomControl___c__DisplayClass402_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_6;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_BYTE *)(v15 + 24) = isChangeTarget;
  *(_DWORD *)(v15 + 28) = anotherTargetType;
  photoTargetSelectDialog = this->fields.photoTargetSelectDialog;
  v21 = (System_Action_T__o *)sub_1B86604(System_Action_PhotoUtility_TargetType__TypeInfo);
  System_Action_Int32Enum____ctor(
    v21,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__0__,
    0LL);
  v22 = (System_Action_bool__o *)sub_1B86604(System_Action_bool__TypeInfo);
  System_Action_bool____ctor(v22, (Il2CppObject *)this, Method_MyRoomControl_SetMaskCollider__, 0LL);
  if ( !photoTargetSelectDialog )
LABEL_6:
    sub_1B86614(v16, v17);
  PhotoTargetSelectDialog__Open(
    photoTargetSelectDialog,
    anotherTargetType,
    index,
    (System_Action_PhotoUtility_TargetType__o *)v21,
    cancelCallback,
    v22,
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

  if ( (byte_4A49A1D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v4);
    sub_1B863B8(&Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__431_0__, v5);
    byte_4A49A1D = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0LL) )
  {
    sub_1B86614(maskBoxCollider, v6);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           !this->fields.isChangePhotoPosition,
           (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v10 = Item;
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogLeftOnPhotoMode_b__431_0__,
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
    sub_1B86614(0LL, v4);
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

  if ( (byte_4A49A1E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v4);
    sub_1B863B8(&Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__432_0__, v5);
    byte_4A49A1E = 1;
  }
  MyRoomControl__SetPhotoCampaignUi(this, 0, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider
    || (UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL),
        (maskBoxCollider = (UnityEngine_Collider_o *)this->fields.photoTargetList) == 0LL) )
  {
    sub_1B86614(maskBoxCollider, v6);
  }
  Item = System_Collections_Generic_List_Int32Enum___get_Item(
           (System_Collections_Generic_List_T__o *)maskBoxCollider,
           this->fields.isChangePhotoPosition,
           (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
  isChangePhotoPosition = this->fields.isChangePhotoPosition;
  v10 = Item;
  v11 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v11,
    (Il2CppObject *)this,
    Method_MyRoomControl__OpenTargetSelectDialogRightOnPhotoMode_b__432_0__,
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

  if ( (byte_4A499D1 & 1) == 0 )
  {
    sub_1B863B8(&AccountLinkageComponent_TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&LocalizationManager_TypeInfo, v4);
    sub_1B863B8(&Method_MyRoomControl__OverrideAccountLinkage_b__319_0__, v5);
    sub_1B863B8(&Method_System_Nullable_int___ctor__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&StringLiteral_1895/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, v8);
    sub_1B863B8(&StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/, v9);
    byte_4A499D1 = 1;
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
  v11 = LocalizationManager__Get((System_String_o *)StringLiteral_1895/*"ACCOUNT_LINKAGE_OVERRIDE_DELINK_MESSAGE"*/, 0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__OverrideAccountLinkage_b__319_0__, 0LL);
  p_msgFontSize = (System_Nullable_int__o)&msgFontSize;
  System_Nullable_int____ctor(p_msgFontSize, 24, (const MethodInfo_371C418 *)Method_System_Nullable_int___ctor__);
  if ( !Instance
    || (v20 = msgFontSize,
        v19 = 0LL,
        CommonUI__OpenAccountLinkageNotificationDialog((CommonUI_o *)Instance, v11, v13, v19, v20, 0, 0LL),
        (myRoomFsm = this->fields.myRoomFsm) == 0LL) )
  {
    sub_1B86614(myRoomFsm, v15);
  }
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3311/*"CAN_CONTINUE_DEVICE"*/, 0LL);
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
  const MethodInfo *v17; // x3
  CRIMoviePlayer_o **v18; // x22
  __int64 v19; // x1
  CRIMoviePlayer_o *v20; // x23
  BgmManager_c *v21; // x0
  float masterVolume; // s8
  System_Action_o *v23; // x25

  if ( (byte_4A499E6 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, fileName);
    sub_1B863B8(&BgmManager_TypeInfo, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass360_0__PlayOpening_b__0__, v9);
    sub_1B863B8(&MyRoomControl___c__DisplayClass360_0_TypeInfo, v10);
    byte_4A499E6 = 1;
  }
  v11 = sub_1B86604(MyRoomControl___c__DisplayClass360_0_TypeInfo);
  MyRoomControl___c__DisplayClass360_0___ctor((MyRoomControl___c__DisplayClass360_0_o *)v11, 0LL);
  CriMoviePlayerObject = MyRoomControl__CreateCriMoviePlayerObject(v12, v13);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = CriMoviePlayerObject;
  v18 = (CRIMoviePlayer_o **)(v11 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)CriMoviePlayerObject, v16, v17);
  v20 = *(CRIMoviePlayer_o **)(v11 + 16);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( !byte_4A49609 )
  {
    sub_1B863B8(&BgmManager_TypeInfo, v19);
    byte_4A49609 = 1;
  }
  v21 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v21 = BgmManager_TypeInfo;
  }
  masterVolume = v21->static_fields->masterVolume;
  v23 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass360_0__PlayOpening_b__0__, 0LL);
  if ( !v20
    || (CRIMoviePlayer__Initialize(
          v20,
          fileName,
          assetPath,
          masterVolume,
          isCanSkip,
          0LL,
          v23,
          1,
          0LL,
          0,
          0,
          1,
          0LL,
          0LL),
        (CriMoviePlayerObject = *v18) == 0LL) )
  {
LABEL_13:
    sub_1B86614(CriMoviePlayerObject, v15);
  }
  CRIMoviePlayer__MoviePlay(CriMoviePlayerObject, 1, 1, 1, 0, 0LL);
}


void __fastcall MyRoomControl__ReleasePhotoAsset(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  AssetData_o *photoCampaignAssetData; // x20
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  UnityEngine_Object_o *photoTargetSelectDialog; // x20
  __int64 v15; // x1
  UnityEngine_Component_o *v16; // x0
  UnityEngine_Object_o *gameObject; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  UnityEngine_Object_o *photoSettingButtonComponent; // x20
  UnityEngine_Object_o *v21; // x21
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  UnityEngine_Object_o *masterEquipSettingDialog; // x20
  UnityEngine_Object_o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *photoStaffSelectDialog; // x20
  UnityEngine_Object_o *v29; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  UnityEngine_Object_o *photoStaffCostumeSelectDialog; // x20
  UnityEngine_Object_o *v33; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_Object_o *cgThumbnailDialog; // x20
  UnityEngine_Object_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct System_Collections_Generic_List_AssetData__o *masterEquipAssetData; // x0
  System_Object_array *v41; // x21
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  UnityEngine_Object_o *photoFrameSelectDialog; // x20
  UnityEngine_Object_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  UnityEngine_Object_o *photoMasterTexture; // x20
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  AssetData_o *combineAssetData; // x20
  CGThumbnailListItem_o *p_combineAssetData; // x19
  int32_t v53; // w2
  const MethodInfo *v54; // x3

  if ( (byte_4A49A25 & 1) == 0 )
  {
    sub_1B863B8(&AssetManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__ToArray__, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    byte_4A49A25 = 1;
  }
  this->fields.photoCampaignShutterEffect = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignShutterEffect, 0, v2, v3);
  this->fields.photoCampaignCameraEffect = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignCameraEffect, 0, v7, v8);
  this->fields.photoLayerChangeObj = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoLayerChangeObj, 0, v9, v10);
  photoCampaignAssetData = this->fields.photoCampaignAssetData;
  if ( photoCampaignAssetData )
  {
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(photoCampaignAssetData, 0LL);
    this->fields.photoCampaignAssetData = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignAssetData, 0, v12, v13);
  }
  photoTargetSelectDialog = (UnityEngine_Object_o *)this->fields.photoTargetSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoTargetSelectDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoTargetSelectDialog;
    if ( !v16 )
      goto LABEL_70;
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    this->fields.photoTargetSelectDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoTargetSelectDialog, 0, v18, v19);
  }
  photoSettingButtonComponent = (UnityEngine_Object_o *)this->fields.photoSettingButtonComponent;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoSettingButtonComponent, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoSettingButtonComponent;
    if ( !v16 )
      goto LABEL_70;
    v21 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v21, 0LL);
    this->fields.photoSettingButtonComponent = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoSettingButtonComponent, 0, v22, v23);
  }
  masterEquipSettingDialog = (UnityEngine_Object_o *)this->fields.masterEquipSettingDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(masterEquipSettingDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.masterEquipSettingDialog;
    if ( !v16 )
      goto LABEL_70;
    v25 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v25, 0LL);
    this->fields.masterEquipSettingDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterEquipSettingDialog, 0, v26, v27);
  }
  photoStaffSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffSelectDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoStaffSelectDialog;
    if ( !v16 )
      goto LABEL_70;
    v29 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v29, 0LL);
    this->fields.photoStaffSelectDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoStaffSelectDialog, 0, v30, v31);
  }
  photoStaffCostumeSelectDialog = (UnityEngine_Object_o *)this->fields.photoStaffCostumeSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoStaffCostumeSelectDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoStaffCostumeSelectDialog;
    if ( !v16 )
      goto LABEL_70;
    v33 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v33, 0LL);
    this->fields.photoStaffCostumeSelectDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoStaffCostumeSelectDialog, 0, v34, v35);
  }
  cgThumbnailDialog = (UnityEngine_Object_o *)this->fields.cgThumbnailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(cgThumbnailDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.cgThumbnailDialog;
    if ( !v16 )
      goto LABEL_70;
    v37 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v37, 0LL);
    this->fields.cgThumbnailDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.cgThumbnailDialog, 0, v38, v39);
  }
  masterEquipAssetData = this->fields.masterEquipAssetData;
  if ( masterEquipAssetData )
  {
    v41 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)masterEquipAssetData,
            (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_AssetData__ToArray__);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38745176((AssetData_array *)v41, 0LL);
    this->fields.isLoadMasterEquip = 0;
    this->fields.masterEquipAssetData = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterEquipAssetData, 0, v42, v43);
  }
  photoFrameSelectDialog = (UnityEngine_Object_o *)this->fields.photoFrameSelectDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoFrameSelectDialog, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoFrameSelectDialog;
    if ( !v16 )
      goto LABEL_70;
    v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v16, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(v45, 0LL);
    this->fields.photoFrameSelectDialog = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoFrameSelectDialog, 0, v46, v47);
  }
  photoMasterTexture = (UnityEngine_Object_o *)this->fields.photoMasterTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
  {
    v16 = (UnityEngine_Component_o *)this->fields.photoMasterTexture;
    if ( v16 )
    {
      UIMasterFigureTextureOld__ReleaseCharacter((UIMasterFigureTextureOld_o *)v16, 0LL);
      this->fields.photoMasterTexture = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, 0, v49, v50);
      goto LABEL_65;
    }
LABEL_70:
    sub_1B86614(v16, v15);
  }
LABEL_65:
  combineAssetData = this->fields.combineAssetData;
  if ( combineAssetData )
  {
    p_combineAssetData = (CGThumbnailListItem_o *)&this->fields.combineAssetData;
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    AssetManager__releaseAsset_38744968(combineAssetData, 0LL);
    p_combineAssetData->klass = 0LL;
    sub_1B8635C(p_combineAssetData, 0, v53, v54);
  }
}


void __fastcall MyRoomControl__ReleaseSvtVoiceData(MyRoomControl_o *this, const MethodInfo *method)
{
  System_String_o *asstName; // x19
  CGThumbnailListItem_o *p_asstName; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A499A6 & 1) == 0 )
  {
    sub_1B863B8(&SoundManager_TypeInfo, method);
    byte_4A499A6 = 1;
  }
  asstName = this->fields.asstName;
  if ( asstName )
  {
    p_asstName = (CGThumbnailListItem_o *)&this->fields.asstName;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(asstName, 0LL);
    p_asstName->klass = 0LL;
    sub_1B8635C(p_asstName, 0, v5, v6);
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
  UnityEngine_Color_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A499E2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v4);
    sub_1B863B8(&StringLiteral_12849/*"State 5"*/, v5);
    byte_4A499E2 = 1;
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
    goto LABEL_36;
  v28.fields.r = 1.0;
  v28.fields.g = 1.0;
  v28.fields.b = 1.0;
  v28.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v28, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.helpButtonImg;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_VOICE_PLAY;
  if ( !playBtnImg )
    goto LABEL_36;
  v29.fields.r = 1.0;
  v29.fields.g = 1.0;
  v29.fields.b = 1.0;
  v29.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v29, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.myRoomData;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_HELP;
  if ( !playBtnImg )
    goto LABEL_36;
  playBtnImg = (UIWidget_o *)MyRoomData__getUsrSvtData((MyRoomData_o *)playBtnImg, this->fields.fvrUsrSvtId, 0LL);
  if ( !playBtnImg )
    goto LABEL_36;
  v19 = *(_QWORD *)&playBtnImg->fields.mChanged;
  v18 = *(_QWORD *)&playBtnImg->fields.mAnchorsCached;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v27.fields.currentCryptoKey = v19;
  *(_QWORD *)&v27.fields.fakeValue = v18;
  playBtnImg = (UIWidget_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v27, 0LL);
  if ( this->fields.isServantMaterial )
  {
    materialImageIdList = this->fields.materialImageIdList;
    if ( !materialImageIdList )
      goto LABEL_36;
    v21 = materialImageIdList->fields._size - 1;
  }
  else
  {
    v21 = (int)playBtnImg;
  }
  playBtnImg = (UIWidget_o *)this->fields.myRoomFsm;
  if ( !playBtnImg )
    goto LABEL_36;
  ActiveStateName = PlayMakerFSM__get_ActiveStateName((PlayMakerFSM_o *)playBtnImg, 0LL);
  v23 = System_String__op_Inequality(ActiveStateName, (System_String_o *)StringLiteral_12849/*"State 5"*/, 0LL);
  if ( v21 >= 1 && v23 )
  {
    playBtnImg = (UIWidget_o *)this->fields.changeBtnImg;
    if ( !playBtnImg )
      goto LABEL_36;
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
    goto LABEL_36;
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
  playBtnImg = (UIWidget_o *)this->fields.changeBgButtonSprite;
  this->fields.buttonFlag |= static_fields->BUTTON_DISP_CHANGE;
  if ( !playBtnImg )
    goto LABEL_36;
  v32.fields.r = 1.0;
  v32.fields.g = 1.0;
  v32.fields.b = 1.0;
  v32.fields.a = 1.0;
  UIWidget__set_color(playBtnImg, v32, 0LL);
  playBtnImg = (UIWidget_o *)this->fields.mBlocker;
  this->fields.buttonFlag |= MyRoomControl_TypeInfo->static_fields->BUTTON_CHANGE_BG;
  if ( !playBtnImg
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)playBtnImg, 0, 0LL),
        (playBtnImg = (UIWidget_o *)this->fields.maskBoxCollider) == 0LL) )
  {
LABEL_36:
    sub_1B86614(playBtnImg, v16);
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
    goto LABEL_36;
  }
}


void __fastcall MyRoomControl__SaveDisplayOverWriteIds(const MethodInfo *method)
{
  __int64 v1; // x1
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
  MyRoomControl___c__DisplayClass456_0_o *v29; // x20
  Il2CppObject *Master_object; // x21
  System_Collections_Generic_List_object__o *v31; // x19
  __int64 v32; // x1
  MyRoomControl_c *v33; // x0
  System_Collections_Generic_List_int__o *enableBgGroupIdList; // x0
  int32_t current; // w23
  __int64 v36; // x22
  __int64 v37; // x0
  __int64 v38; // x1
  System_Collections_Generic_List_int__o *v39; // x0
  __int64 v40; // x1
  System_Int32_array *v41; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  _BOOL8 v44; // x0
  __int64 v45; // x1
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct System_Object_array *items; // x8
  _QWORD *v49; // x9
  __int64 size; // x10
  Il2CppClass **v51; // x0
  MyRoomControl_c *v52; // x0
  System_Collections_ICollection_o *BgSaveData; // x23
  System_Collections_Generic_List_object__o *v54; // x22
  MyRoomControl___c_c *v55; // x0
  System_Func_object__bool__o *_9__456_0; // x22
  Il2CppObject *v57; // x24
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Func_object__bool__o *v62; // x23
  Il2CppObject *v63; // x0
  Il2CppObject *v64; // x23
  System_Int32_array *v65; // x0
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  __int64 v68; // x23
  System_Int32_array *v69; // x0
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  int32_t v72; // w2
  const MethodInfo *v73; // x3
  struct System_Object_array *v74; // x8
  _QWORD *v75; // x9
  __int64 v76; // x10
  Il2CppClass **v77; // x0
  _BOOL8 v78; // x0
  __int64 v79; // x1
  int32_t v80; // w2
  const MethodInfo *v81; // x3
  Il2CppObject *v82; // x1
  struct System_Object_array *v83; // x8
  _QWORD *v84; // x9
  __int64 v85; // x10
  Il2CppClass **v86; // x0
  System_Object_array *v87; // x19
  System_String_o *v88; // x0
  System_Collections_Generic_List_Enumerator_object__o v89; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v90; // [xsp+20h] [xbp-A0h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v91; // [xsp+40h] [xbp-80h] BYREF

  if ( (byte_4A49A2F & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_BackGroundSaveData_TypeInfo, v1);
    sub_1B863B8(&Method_DataManager_GetMaster_MyRoomAddMaster___, v2);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_int___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___, v5);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___, v6);
    sub_1B863B8(&Method_System_Linq_Enumerable_Where_MyRoomControl_BackGroundSaveData___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__Dispose__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__MoveNext__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__get_Current__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v13);
    sub_1B863B8(&System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo, v14);
    sub_1B863B8(&JsonManager_TypeInfo, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__GetEnumerator__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__GetEnumerator__, v18);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__ToArray__, v19);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__ToArray__, v20);
    sub_1B863B8(&Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__, v21);
    sub_1B863B8(&System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo, v22);
    sub_1B863B8(&MyRoomControl_TypeInfo, v23);
    sub_1B863B8(&Method_MyRoomControl___c__SaveDisplayOverWriteIds_b__456_0__, v24);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass456_0__SaveDisplayOverWriteIds_b__1__, v25);
    sub_1B863B8(&MyRoomControl___c__DisplayClass456_0_TypeInfo, v26);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v27);
    sub_1B863B8(&StringLiteral_5267/*"DisplayedOverWriteIds"*/, v28);
    byte_4A49A2F = 1;
  }
  memset(&v91, 0, sizeof(v91));
  memset(&v90, 0, sizeof(v90));
  v29 = (MyRoomControl___c__DisplayClass456_0_o *)sub_1B86604(MyRoomControl___c__DisplayClass456_0_TypeInfo);
  MyRoomControl___c__DisplayClass456_0___ctor(v29, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  v31 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v31,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
  v33 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v33 = MyRoomControl_TypeInfo;
  }
  enableBgGroupIdList = v33->static_fields->enableBgGroupIdList;
  if ( !enableBgGroupIdList )
    goto LABEL_61;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    enableBgGroupIdList,
    (const MethodInfo_35E0408 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v91 = v89;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            (System_Collections_Generic_List_Enumerator_int__o *)&v91,
            (const MethodInfo_337C530 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = (int32_t)v91.fields._current;
    if ( LODWORD(v91.fields._current) )
    {
      v36 = sub_1B86604(MyRoomControl_BackGroundSaveData_TypeInfo);
      MyRoomControl_BackGroundSaveData___ctor((MyRoomControl_BackGroundSaveData_o *)v36, 0LL);
      if ( !v36 )
        sub_1B86614(v37, v38);
      *(_DWORD *)(v36 + 16) = current;
      *(_DWORD *)(v36 + 20) = 0;
      if ( !Master_object )
        sub_1B86614(v37, v38);
      v39 = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, current, 0LL);
      if ( !v39 )
        sub_1B86614(0LL, v40);
      v41 = System_Collections_Generic_List_int___ToArray(
              v39,
              (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
      *(_QWORD *)(v36 + 24) = v41;
      sub_1B8635C((CGThumbnailListItem_o *)(v36 + 24), (int32_t)v41, v42, v43);
      v44 = System_Linq_Enumerable__Any_int_(
              *(System_Collections_Generic_IEnumerable_TSource__o **)(v36 + 24),
              (const MethodInfo_2F7B3AC *)Method_System_Linq_Enumerable_Any_int___);
      if ( v44 )
      {
        if ( !v31 )
          sub_1B86614(v44, v45);
        items = v31->fields._items;
        v49 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
        ++v31->fields._version;
        if ( !items )
          sub_1B86614(v44, v45);
        size = v31->fields._size;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v31,
            (Il2CppObject *)v36,
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v49[4] + 192LL) + 112LL));
        }
        else
        {
          v51 = &items->obj.klass + size;
          v31->fields._size = size + 1;
          v51[4] = (Il2CppClass *)v36;
          sub_1B8635C((CGThumbnailListItem_o *)(v51 + 4), v36, v46, v47);
        }
      }
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    (System_Collections_Generic_List_Enumerator_int__o *)&v91,
    (const MethodInfo_337C52C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  v52 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  BgSaveData = (System_Collections_ICollection_o *)MyRoomControl__GetBgSaveData((const MethodInfo *)v52);
  v54 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v54,
    (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData___ctor__);
  enableBgGroupIdList = (System_Collections_Generic_List_int__o *)BasicHelper__IsNullOrEmpty(BgSaveData, 0LL);
  if ( ((unsigned __int8)enableBgGroupIdList & 1) == 0 )
  {
    v55 = MyRoomControl___c_TypeInfo;
    if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
      v55 = MyRoomControl___c_TypeInfo;
    }
    _9__456_0 = (System_Func_object__bool__o *)v55->static_fields->__9__456_0;
    if ( !_9__456_0 )
    {
      if ( !v55->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v55);
        v55 = MyRoomControl___c_TypeInfo;
      }
      v57 = (Il2CppObject *)v55->static_fields->__9;
      _9__456_0 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
      System_Func_object__bool____ctor(
        _9__456_0,
        v57,
        Method_MyRoomControl___c__SaveDisplayOverWriteIds_b__456_0__,
        0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__456_0 = (struct System_Func_MyRoomControl_BackGroundSaveData__bool__o *)_9__456_0;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__456_0, (int32_t)_9__456_0, v59, v60);
    }
    v61 = System_Linq_Enumerable__Where_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)BgSaveData,
            (System_Func_TSource__bool__o *)_9__456_0,
            (const MethodInfo_2FAFD10 *)Method_System_Linq_Enumerable_Where_MyRoomControl_BackGroundSaveData___);
    enableBgGroupIdList = (System_Collections_Generic_List_int__o *)System_Linq_Enumerable__ToList_object_(
                                                                      v61,
                                                                      (const MethodInfo_2FADBE0 *)Method_System_Linq_Enumerable_ToList_MyRoomControl_BackGroundSaveData___);
    v54 = (System_Collections_Generic_List_object__o *)enableBgGroupIdList;
  }
  if ( !Master_object )
    goto LABEL_61;
  enableBgGroupIdList = (System_Collections_Generic_List_int__o *)MyRoomAddMaster__GetMainGroupWarId(
                                                                    (MyRoomAddMaster_o *)Master_object,
                                                                    0LL);
  if ( !v29 )
    goto LABEL_61;
  v29->fields.mainGroupWarId = (int)enableBgGroupIdList;
  v62 = (System_Func_object__bool__o *)sub_1B86604(System_Func_MyRoomControl_BackGroundSaveData__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v62,
    (Il2CppObject *)v29,
    Method_MyRoomControl___c__DisplayClass456_0__SaveDisplayOverWriteIds_b__1__,
    0LL);
  v63 = System_Linq_Enumerable__FirstOrDefault_object__49893388(
          (System_Collections_Generic_IEnumerable_TSource__o *)v54,
          (System_Func_TSource__bool__o *)v62,
          (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_MyRoomControl_BackGroundSaveData___);
  if ( v63 )
  {
    v64 = v63;
    enableBgGroupIdList = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, 0, 0LL);
    if ( !enableBgGroupIdList )
      goto LABEL_61;
    v65 = System_Collections_Generic_List_int___ToArray(
            enableBgGroupIdList,
            (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
    v64[1].monitor = v65;
    sub_1B8635C((CGThumbnailListItem_o *)&v64[1].monitor, (int32_t)v65, v66, v67);
    if ( !v54 )
      goto LABEL_61;
  }
  else
  {
    v68 = sub_1B86604(MyRoomControl_BackGroundSaveData_TypeInfo);
    MyRoomControl_BackGroundSaveData___ctor((MyRoomControl_BackGroundSaveData_o *)v68, 0LL);
    if ( !v68 )
      goto LABEL_61;
    *(_DWORD *)(v68 + 16) = 0;
    *(_DWORD *)(v68 + 20) = v29->fields.mainGroupWarId;
    enableBgGroupIdList = MyRoomAddMaster__GetDisplayOverWriteIds((MyRoomAddMaster_o *)Master_object, 0, 0LL);
    if ( !enableBgGroupIdList )
      goto LABEL_61;
    v69 = System_Collections_Generic_List_int___ToArray(
            enableBgGroupIdList,
            (const MethodInfo_35E13EC *)Method_System_Collections_Generic_List_int__ToArray__);
    *(_QWORD *)(v68 + 24) = v69;
    sub_1B8635C((CGThumbnailListItem_o *)(v68 + 24), (int32_t)v69, v70, v71);
    if ( !v54 )
      goto LABEL_61;
    v74 = v54->fields._items;
    v75 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
    ++v54->fields._version;
    if ( !v74 )
      goto LABEL_61;
    v76 = v54->fields._size;
    if ( (unsigned int)v76 >= v74->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v54,
        (Il2CppObject *)v68,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v75[4] + 192LL) + 112LL));
    }
    else
    {
      v77 = &v74->obj.klass + v76;
      v54->fields._size = v76 + 1;
      v77[4] = (Il2CppClass *)v68;
      sub_1B8635C((CGThumbnailListItem_o *)(v77 + 4), v68, v72, v73);
    }
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v89,
    v54,
    (const MethodInfo_35FD450 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__GetEnumerator__);
  v90 = v89;
  while ( 1 )
  {
    v78 = System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v90,
            (const MethodInfo_3398634 *)Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__MoveNext__);
    if ( !v78 )
      break;
    if ( !v31 )
      sub_1B86614(v78, v79);
    v82 = v90.fields._current;
    v83 = v31->fields._items;
    v84 = Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__Add__;
    ++v31->fields._version;
    if ( !v83 )
      sub_1B86614(v78, v82);
    v85 = v31->fields._size;
    if ( (unsigned int)v85 >= v83->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v31,
        v82,
        *(const MethodInfo_35FC958 **)(*(_QWORD *)(v84[4] + 192LL) + 112LL));
    }
    else
    {
      v86 = &v83->obj.klass + v85;
      v31->fields._size = v85 + 1;
      v86[4] = (Il2CppClass *)v82;
      sub_1B8635C((CGThumbnailListItem_o *)(v86 + 4), (int32_t)v82, v80, v81);
    }
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v90,
    (const MethodInfo_3398630 *)Method_System_Collections_Generic_List_Enumerator_MyRoomControl_BackGroundSaveData__Dispose__);
  if ( !v31 )
LABEL_61:
    sub_1B86614(enableBgGroupIdList, v32);
  v87 = System_Collections_Generic_List_object___ToArray(
          v31,
          (const MethodInfo_35FE4B0 *)Method_System_Collections_Generic_List_MyRoomControl_BackGroundSaveData__ToArray__);
  if ( !JsonManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(JsonManager_TypeInfo);
  v88 = JsonManager__toJson(&v87->obj, 0, 0, 0LL);
  UnityEngine_PlayerPrefs__SetString((System_String_o *)StringLiteral_5267/*"DisplayedOverWriteIds"*/, v88, 0LL);
  UnityEngine_PlayerPrefs__Save(0LL);
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
    sub_1B86614(0LL, v3);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 90, 0, 0LL);
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
    sub_1B86614(0LL, v5);
  UnityEngine_Collider__set_enabled(maskBoxCollider, v5, 0LL);
}


void __fastcall MyRoomControl__SetBackGroundData(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  __int64 v3; // x1
  Il2CppObject *Master_object; // x0
  __int64 v5; // x1
  System_Collections_Generic_List_int__o *v6; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MyRoomControl_c *v9; // x8
  System_Collections_Generic_List_int__o *v10; // x19
  struct MyRoomControl_StaticFields *static_fields; // x0
  const MethodInfo *v12; // x0
  const MethodInfo *DisplayBgGroupIndex; // x0

  if ( (byte_4A49A2A & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyRoomAddMaster___, v1);
    sub_1B863B8(&DataManager_TypeInfo, v2);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    byte_4A49A2A = 1;
  }
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyRoomAddMaster___);
  if ( !Master_object )
    sub_1B86614(0LL, v5);
  v6 = MyRoomAddMaster__DisplayBgGroupList((MyRoomAddMaster_o *)Master_object, 0LL);
  v9 = MyRoomControl_TypeInfo;
  v10 = v6;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v9 = MyRoomControl_TypeInfo;
  }
  static_fields = v9->static_fields;
  static_fields->enableBgGroupIdList = v10;
  sub_1B8635C((CGThumbnailListItem_o *)&static_fields->enableBgGroupIdList, (int32_t)v10, v7, v8);
  DisplayBgGroupIndex = (const MethodInfo *)MyRoomControl__GetDisplayBgGroupIndex(v12);
  MyRoomControl_TypeInfo->static_fields->displayBgGroupIndex = (int)DisplayBgGroupIndex;
  MyRoomControl__SaveDisplayOverWriteIds(DisplayBgGroupIndex);
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
  if ( (byte_4A499B6 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, method);
    this = (MyRoomControl_o *)sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    byte_4A499B6 = 1;
  }
  if ( v2->fields.isServantMaterial )
  {
    materialImageIdList = v2->fields.materialImageIdList;
    if ( !materialImageIdList )
LABEL_17:
      sub_1B86614(this, method);
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
      sub_1B8661C(this, isEnable);
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
    sub_1B86614(this, isEnable);
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
    sub_1B86614(0LL, v3);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 93, 0, 0LL);
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
  __int64 v13; // x21
  CommonUI_o *Instance; // x0
  __int64 v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  const MethodInfo *v20; // x1
  const MethodInfo *v21; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  ServantVoiceEntity_o **v23; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  int32_t figureSvtId; // w23
  ServantVoiceEntity_o *v28; // x24
  int32_t Item; // w0
  const MethodInfo *v30; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  System_String_o *asstName; // x22
  System_Action_o *v38; // x23
  const MethodInfo *v39; // x3
  System_Action_o *v40; // x23
  int32_t v41; // w2
  const MethodInfo *v42; // x3
  System_Action_o *v43; // x20
  const MethodInfo *v44; // x2

  if ( (byte_4A499D5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, callback);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__0__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__1__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__2__, v11);
    sub_1B863B8(&MyRoomControl___c__DisplayClass325_0_TypeInfo, v12);
    byte_4A499D5 = 1;
  }
  v13 = sub_1B86604(MyRoomControl___c__DisplayClass325_0_TypeInfo);
  MyRoomControl___c__DisplayClass325_0___ctor((MyRoomControl___c__DisplayClass325_0_o *)v13, 0LL);
  if ( !v13 )
    goto LABEL_13;
  *(_QWORD *)(v13 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 16), (int32_t)this, v16, v17);
  *(_QWORD *)(v13 + 32) = callback;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 32), (int32_t)callback, v18, v19);
  MyRoomControl__setupSvtImageIdList(this, v20);
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, 0, v21);
  *(_QWORD *)(v13 + 24) = SvtVoiceEnt;
  v23 = (ServantVoiceEntity_o **)(v13 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 24), (int32_t)SvtVoiceEnt, v24, v25);
  if ( *(_QWORD *)(v13 + 24) )
  {
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 1, 0LL);
      MyRoomControl__ReleaseSvtVoiceData(this, v26);
      Instance = (CommonUI_o *)this->fields.imageIdList;
      if ( Instance )
      {
        figureSvtId = this->fields.figureSvtId;
        v28 = *v23;
        Item = System_Collections_Generic_List_int___get_Item(
                 (System_Collections_Generic_List_int__o *)Instance,
                 this->fields.figureSvtDispIdx,
                 (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
        VoiceList = MyRoomControl__GetVoiceList(this, v28, figureSvtId, Item, v30);
        this->fields.voiceList = VoiceList;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v32, v33);
        Instance = (CommonUI_o *)*v23;
        if ( *v23 )
        {
          VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)Instance, 0LL);
          this->fields.asstName = VoiceAssetName;
          sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v35, v36);
          asstName = this->fields.asstName;
          v38 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v38,
            (Il2CppObject *)v13,
            Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__0__,
            0LL);
          MyRoomControl__voiceLoad(this, asstName, v38, v39);
          goto LABEL_10;
        }
      }
    }
LABEL_13:
    sub_1B86614(Instance, v15);
  }
  this->fields.isExistVoiceData = 0;
LABEL_10:
  v40 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v40,
    (Il2CppObject *)v13,
    Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__1__,
    0LL);
  *(_QWORD *)(v13 + 40) = v40;
  sub_1B8635C((CGThumbnailListItem_o *)(v13 + 40), (int32_t)v40, v41, v42);
  if ( IsActSetMyRoomStandFigre )
  {
    v43 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v43,
      (Il2CppObject *)v13,
      Method_MyRoomControl___c__DisplayClass325_0__SetFavoriteSvt_b__2__,
      0LL);
    MyRoomControl__SetMyRoomStandFigure(this, v43, v44);
  }
  else
  {
    ActionExtensions__Call(*(System_Action_o **)(v13 + 40), 0LL);
  }
}


void __fastcall MyRoomControl__SetGallery(MyRoomControl_o *this, bool isPlayDecideSe, const MethodInfo *method)
{
  this->fields._IsGallery_k__BackingField = 1;
  MyRoomControl__setMaterial(this, isPlayDecideSe, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetGallery_31893104(
        MyRoomControl_o *this,
        int32_t warId,
        System_Collections_Generic_List_GalleryEntity__o *galleryList,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x20
  UnityEngine_Component_o *gameObject; // x0
  __int64 v18; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *cgThumbnailDialog; // x21
  const MethodInfo *v24; // x1
  AssetLoader_LoadEndDataHandler_o *v25; // x19
  const MethodInfo *v26; // x3
  CGThumbnailDialog_o *v27; // x21
  System_Collections_Generic_List_GalleryEntity__o *v28; // x22
  int32_t v29; // w23
  System_Action_o *v30; // x24
  System_Action_o *v31; // x25
  System_Action_o *v32; // x26

  if ( (byte_4A499CE & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&warId);
    sub_1B863B8(&AssetManager_TypeInfo, v7);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v8);
    sub_1B863B8(&Method_MyRoomControl_OnClickBack__, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__0__, v11);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__1__, v12);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__2__, v13);
    sub_1B863B8(&MyRoomControl___c__DisplayClass305_0_TypeInfo, v14);
    sub_1B863B8(&StringLiteral_9071/*"MyRoom/Gallery/Prefab"*/, v15);
    byte_4A499CE = 1;
  }
  v16 = sub_1B86604(MyRoomControl___c__DisplayClass305_0_TypeInfo);
  MyRoomControl___c__DisplayClass305_0___ctor((MyRoomControl___c__DisplayClass305_0_o *)v16, 0LL);
  if ( !v16 )
    goto LABEL_14;
  *(_QWORD *)(v16 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 16), (int32_t)this, v19, v20);
  *(_QWORD *)(v16 + 24) = galleryList;
  sub_1B8635C((CGThumbnailListItem_o *)(v16 + 24), (int32_t)galleryList, v21, v22);
  *(_DWORD *)(v16 + 32) = warId;
  cgThumbnailDialog = (UnityEngine_Object_o *)this->fields.cgThumbnailDialog;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(cgThumbnailDialog, 0LL, 0LL) )
  {
    MyRoomControl__stopSvtVoice(this, v24);
    this->fields.type = 20;
    MyRoomControl__setSvtFigureActive(this, 20, 1, v26);
    gameObject = (UnityEngine_Component_o *)this->fields.cgThumbnailDialog;
    if ( gameObject )
    {
      gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0LL);
        v27 = this->fields.cgThumbnailDialog;
        v28 = *(System_Collections_Generic_List_GalleryEntity__o **)(v16 + 24);
        v29 = *(_DWORD *)(v16 + 32);
        v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v30,
          (Il2CppObject *)v16,
          Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__0__,
          0LL);
        v31 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v31, (Il2CppObject *)this, (intptr_t)Method_MyRoomControl_OnClickBack__, 0LL);
        v32 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v32,
          (Il2CppObject *)v16,
          Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__1__,
          0LL);
        if ( v27 )
        {
          CGThumbnailDialog__Open(v27, v28, v29, v30, v31, v32, 0LL);
          BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfo, 0, 0LL);
          return;
        }
      }
    }
LABEL_14:
    sub_1B86614(gameObject, v18);
  }
  v25 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v25,
    (Il2CppObject *)v16,
    Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__2__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage((System_String_o *)StringLiteral_9071/*"MyRoom/Gallery/Prefab"*/, v25, 1, 0LL);
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

  if ( (byte_4A49A26 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, imageId);
    sub_1B863B8(&DataManager_TypeInfo, v10);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v11);
    sub_1B863B8(&UIStandFigureRender_TypeInfo, v12);
    byte_4A49A26 = 1;
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
    Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
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
      sub_1B86614(Master_object, v16);
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
  void *photoTargetList; // x0
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v15; // x21
  Il2CppObject *v16; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v20; // x8
  int32_t size; // w2
  int v22; // w9
  unsigned __int64 v23; // x20
  char v24; // w8
  char v25; // w28
  UnityEngine_Transform_o *transform; // x0
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  PhotoStandFigureComponent_o *v28; // x8
  UnityEngine_Transform_o *v29; // x21
  Il2CppObject *photoLayerChangeObj; // x22
  char *v31; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct PhotoStandFigureComponent_array *v34; // x8
  PhotoStandFigureComponent_o *v35; // x8
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x8
  _QWORD *v39; // x9
  __int64 v40; // x10
  __int64 v41; // x8
  char *v42; // x20
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  __int64 v45; // x1
  char *v46; // x20
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  __int64 v49; // x1

  if ( (byte_4A49A0D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__, v8);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___, v9);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v10);
    sub_1B863B8(&Method_MyRoomControl___c__SetLayerChangeObj_b__412_0__, v11);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v12);
    byte_4A49A0D = 1;
  }
  photoTargetList = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    photoTargetList = MyRoomControl___c_TypeInfo;
  }
  v15 = *(System_Action_object__o **)(*((_QWORD *)photoTargetList + 23) + 64LL);
  if ( !v15 )
  {
    if ( !*((_DWORD *)photoTargetList + 56) )
    {
      j_il2cpp_runtime_class_init_0(photoTargetList);
      photoTargetList = MyRoomControl___c_TypeInfo;
    }
    v16 = (Il2CppObject *)**((_QWORD **)photoTargetList + 23);
    v15 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v15, v16, Method_MyRoomControl___c__SetLayerChangeObj_b__412_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__412_0 = (struct System_Action_PhotoLayerChangeComponent__o *)v15;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__412_0, (int32_t)v15, v18, v19);
  }
  if ( !instantiateLayerChangeObjList )
    goto LABEL_53;
  System_Collections_Generic_List_object___ForEach(
    instantiateLayerChangeObjList,
    (System_Action_T__o *)v15,
    (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__);
  v20 = this->fields.instantiateLayerChangeObjList;
  if ( !v20 )
    goto LABEL_53;
  size = v20->fields._size;
  v22 = v20->fields._version + 1;
  v20->fields._size = 0;
  v20->fields._version = v22;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v20->fields._items, 0, size, 0LL);
  if ( !this->fields.isOneShot )
  {
    v23 = 0LL;
    v24 = 1;
    do
    {
      photoTargetList = this->fields.photoTargetList;
      if ( !photoTargetList )
        goto LABEL_53;
      v25 = v24;
      photoTargetList = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)photoTargetList,
                                  v23,
                                  (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        photoTargetList = this->fields.photoMasterTexture;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)photoTargetList, 0LL);
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)photoTargetList, 0LL);
      }
      else
      {
        photoStandFigures = this->fields.photoStandFigures;
        if ( !photoStandFigures )
          goto LABEL_53;
        if ( v23 >= photoStandFigures->max_length )
          goto LABEL_54;
        v28 = photoStandFigures->m_Items[v23];
        if ( !v28 )
          goto LABEL_53;
        photoTargetList = v28->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)photoTargetList, 0LL);
      }
      v29 = transform;
      photoLayerChangeObj = (Il2CppObject *)this->fields.photoLayerChangeObj;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      photoTargetList = UnityEngine_Object__Instantiate_object__50290416(
                          photoLayerChangeObj,
                          v29,
                          (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_PhotoLayerChangeComponent___);
      if ( !this->fields.photoTargetList )
        goto LABEL_53;
      v31 = (char *)photoTargetList;
      photoTargetList = (void *)System_Collections_Generic_List_Int32Enum___get_Item(
                                  (System_Collections_Generic_List_T__o *)this->fields.photoTargetList,
                                  v23,
                                  (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      if ( (_DWORD)photoTargetList == 1 )
      {
        method = (const MethodInfo *)this->fields.photoMasterPanel;
      }
      else
      {
        v34 = this->fields.photoStandFigures;
        if ( !v34 )
          goto LABEL_53;
        if ( v23 >= v34->max_length )
LABEL_54:
          sub_1B8661C(photoTargetList, method);
        v35 = v34->m_Items[v23];
        if ( !v35 )
          goto LABEL_53;
        photoTargetList = v35->fields.photoStandFigureBack;
        if ( !photoTargetList )
          goto LABEL_53;
        photoTargetList = UnityEngine_Component__GetComponent_object_(
                            (UnityEngine_Component_o *)photoTargetList,
                            (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
        method = (const MethodInfo *)photoTargetList;
      }
      if ( !v31 )
        goto LABEL_53;
      *((_QWORD *)v31 + 4) = method;
      sub_1B8635C((CGThumbnailListItem_o *)(v31 + 32), (int32_t)method, v32, v33);
      photoTargetList = this->fields.instantiateLayerChangeObjList;
      if ( !photoTargetList )
        goto LABEL_53;
      v38 = *((_QWORD *)photoTargetList + 2);
      v39 = Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Add__;
      ++*((_DWORD *)photoTargetList + 7);
      if ( !v38 )
        goto LABEL_53;
      v40 = *((int *)photoTargetList + 6);
      if ( (unsigned int)v40 >= *(_DWORD *)(v38 + 24) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          (System_Collections_Generic_List_object__o *)photoTargetList,
          (Il2CppObject *)v31,
          *(const MethodInfo_35FC958 **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
      }
      else
      {
        v41 = v38 + 8 * v40;
        *((_DWORD *)photoTargetList + 6) = v40 + 1;
        *(_QWORD *)(v41 + 32) = v31;
        sub_1B8635C((CGThumbnailListItem_o *)(v41 + 32), (int32_t)v31, v36, v37);
      }
      v24 = 0;
      v23 = 1LL;
    }
    while ( (v25 & 1) != 0 );
    photoTargetList = this->fields.instantiateLayerChangeObjList;
    if ( photoTargetList )
    {
      photoTargetList = System_Collections_Generic_List_object___get_Item(
                          (System_Collections_Generic_List_object__o *)photoTargetList,
                          0,
                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
      if ( this->fields.instantiateLayerChangeObjList )
      {
        v42 = (char *)photoTargetList;
        photoTargetList = System_Collections_Generic_List_object___get_Item(
                            (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                            1,
                            (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
        if ( photoTargetList )
        {
          if ( v42 )
          {
            v45 = *((_QWORD *)photoTargetList + 4);
            *((_QWORD *)v42 + 5) = v45;
            sub_1B8635C((CGThumbnailListItem_o *)(v42 + 40), v45, v43, v44);
            photoTargetList = this->fields.instantiateLayerChangeObjList;
            if ( photoTargetList )
            {
              photoTargetList = System_Collections_Generic_List_object___get_Item(
                                  (System_Collections_Generic_List_object__o *)photoTargetList,
                                  1,
                                  (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
              if ( this->fields.instantiateLayerChangeObjList )
              {
                v46 = (char *)photoTargetList;
                photoTargetList = System_Collections_Generic_List_object___get_Item(
                                    (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList,
                                    0,
                                    (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
                if ( photoTargetList )
                {
                  if ( v46 )
                  {
                    v49 = *((_QWORD *)photoTargetList + 4);
                    *((_QWORD *)v46 + 5) = v49;
                    sub_1B8635C((CGThumbnailListItem_o *)(v46 + 40), v49, v47, v48);
                    photoTargetList = this->fields.instantiateLayerChangeObjList;
                    if ( photoTargetList )
                    {
                      photoTargetList = System_Collections_Generic_List_object___get_Item(
                                          (System_Collections_Generic_List_object__o *)photoTargetList,
                                          this->fields.isChangePhotoPosition,
                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__get_Item__);
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
    sub_1B86614(photoTargetList, method);
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
  if ( (byte_4A499F3 & 1) == 0 )
  {
    this = (MyRoomControl_o *)sub_1B863B8(&Method_UnityEngine_Component_GetComponent_UIPanel___, *(_QWORD *)&frontIndex);
    byte_4A499F3 = 1;
  }
  multipleStandFigureBacks = v4->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
LABEL_13:
    sub_1B86614(this, *(_QWORD *)&frontIndex);
  v6 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v6 >= max_length )
      break;
    if ( (unsigned int)v6 >= max_length )
      sub_1B8661C(this, *(_QWORD *)&frontIndex);
    this = (MyRoomControl_o *)multipleStandFigureBacks->m_Items[v6];
    if ( this )
    {
      this = (MyRoomControl_o *)UnityEngine_Component__GetComponent_object_(
                                  (UnityEngine_Component_o *)this,
                                  (const MethodInfo_2F646C0 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
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
    sub_1B86614(0LL, flag);
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
  __int64 v15; // x20
  System_Collections_Generic_List_int__o *materialImageIdList; // x0
  __int64 v17; // x1
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x2
  _BOOL4 isServantMaterial; // w8
  const MethodInfo *v24; // x1
  MyRoomStateMaterial_o *mStateMaterial; // x22
  int32_t Item; // w23
  MyRoomControl_o *v27; // x0
  int32_t v28; // w3
  const MethodInfo *v29; // x5
  StandFigureBack_o *standFigureBack; // x19
  int32_t v31; // w21
  int32_t v32; // w22
  int32_t v33; // w23
  System_Action_o *v34; // x24
  CombineRootComponent_c *v35; // x0
  System_String_o *COMBINE_ASSET_PATH; // x19
  AssetLoader_LoadEndDataHandler_o *v37; // x21
  int32_t imageId; // [xsp+1Ch] [xbp-34h] BYREF

  v5 = servantId;
  if ( (byte_4A499B5 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, *(_QWORD *)&servantId);
    sub_1B863B8(&AssetManager_TypeInfo, v7);
    sub_1B863B8(&CombineRootComponent_TypeInfo, v8);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v10);
    sub_1B863B8(&AssetLoader_LoadEndDataHandler_TypeInfo, v11);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__, v12);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__, v13);
    sub_1B863B8(&MyRoomControl___c__DisplayClass243_0_TypeInfo, v14);
    byte_4A499B5 = 1;
  }
  imageId = 0;
  v15 = sub_1B86604(MyRoomControl___c__DisplayClass243_0_TypeInfo);
  MyRoomControl___c__DisplayClass243_0___ctor((MyRoomControl___c__DisplayClass243_0_o *)v15, 0LL);
  if ( !v15 )
    goto LABEL_19;
  *(_QWORD *)(v15 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 16), (int32_t)this, v18, v19);
  *(_QWORD *)(v15 + 24) = end_act;
  sub_1B8635C((CGThumbnailListItem_o *)(v15 + 24), (int32_t)end_act, v20, v21);
  *(_DWORD *)(v15 + 32) = v5;
  isServantMaterial = this->fields.isServantMaterial;
  this->fields.materialServantId = v5;
  if ( !isServantMaterial )
  {
    this->fields.isServantMaterial = 1;
    MyRoomControl__SetupMaterialSvtImageIdList(this, v5, v22);
    MyRoomControl__SetChangeBtn(this, v24);
    v5 = *(_DWORD *)(v15 + 32);
  }
  materialImageIdList = this->fields.materialImageIdList;
  if ( !materialImageIdList )
    goto LABEL_19;
  mStateMaterial = this->fields.mStateMaterial;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
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
  v27 = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                             materialImageIdList,
                             this->fields.materialFigureSvtDispIdx,
                             (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
  v28 = *(_DWORD *)(v15 + 32);
  *(_DWORD *)(v15 + 36) = (_DWORD)v27;
  MyRoomControl__SetImageIdAndFormId(v27, &imageId, (int32_t *)(v15 + 40), v28, (int32_t)v27, v29);
  if ( this->fields.combineAssetData )
  {
    standFigureBack = this->fields.standFigureBack;
    v31 = *(_DWORD *)(v15 + 32);
    v32 = *(_DWORD *)(v15 + 36);
    v33 = *(_DWORD *)(v15 + 40);
    v34 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      v34,
      (Il2CppObject *)v15,
      Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__,
      0LL);
    if ( standFigureBack )
    {
      StandFigureBack__SetMyRoomStandFigure(standFigureBack, v31, v32, 1, 0, v33, 10, v34, 0, 0LL);
      return;
    }
LABEL_19:
    sub_1B86614(materialImageIdList, v17);
  }
  v35 = CombineRootComponent_TypeInfo;
  if ( !CombineRootComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CombineRootComponent_TypeInfo);
    v35 = CombineRootComponent_TypeInfo;
  }
  COMBINE_ASSET_PATH = v35->static_fields->COMBINE_ASSET_PATH;
  v37 = (AssetLoader_LoadEndDataHandler_o *)sub_1B86604(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v37,
    (Il2CppObject *)v15,
    Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__1__,
    0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__loadAssetStorage(COMBINE_ASSET_PATH, v37, 1, 0LL);
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
    sub_1B86614(multipleViewButtonSprite, v3);
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
  __int64 v9; // x20
  System_Collections_Generic_List_int__o *imageIdList; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  const MethodInfo *v16; // x3
  bool _38640612; // w8
  MyRoomControl_o *Item; // x0
  int32_t v19; // w21
  const MethodInfo *v20; // x5
  StandFigureBack_o *standFigureBack; // x22
  int32_t figureSvtId; // w23
  int32_t v23; // w19
  System_Action_o *v24; // x24
  int32_t formId[2]; // [xsp+18h] [xbp-38h] BYREF

  if ( (byte_4A499B3 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, end_act);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&TutorialFlag_TypeInfo, v6);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__, v7);
    sub_1B863B8(&MyRoomControl___c__DisplayClass241_0_TypeInfo, v8);
    byte_4A499B3 = 1;
  }
  *(_QWORD *)formId = 0LL;
  v9 = sub_1B86604(MyRoomControl___c__DisplayClass241_0_TypeInfo);
  MyRoomControl___c__DisplayClass241_0___ctor((MyRoomControl___c__DisplayClass241_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_11;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  *(_QWORD *)(v9 + 24) = end_act;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)end_act, v14, v15);
  if ( this->fields.isServantMaterial )
  {
    MyRoomControl__SetMaterialSvtFigure(this, this->fields.materialServantId, *(System_Action_o **)(v9 + 24), v16);
    return;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  _38640612 = TutorialFlag__Get_38640612(126, 0LL);
  imageIdList = this->fields.imageIdList;
  this->fields.isHeroineReave = _38640612;
  this->fields.isSvtLoading = 1;
  if ( !imageIdList )
    goto LABEL_11;
  Item = (MyRoomControl_o *)System_Collections_Generic_List_int___get_Item(
                              imageIdList,
                              this->fields.figureSvtDispIdx,
                              (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
  v19 = (int)Item;
  MyRoomControl__SetImageIdAndFormId(Item, formId, &formId[1], this->fields.figureSvtId, (int32_t)Item, v20);
  standFigureBack = this->fields.standFigureBack;
  figureSvtId = this->fields.figureSvtId;
  v23 = formId[1];
  v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v24,
    (Il2CppObject *)v9,
    Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__0__,
    0LL);
  if ( !standFigureBack )
LABEL_11:
    sub_1B86614(imageIdList, v11);
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, figureSvtId, v19, 1, 0, v23, 10, v24, 0, 0LL);
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
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t materialServantId; // w21
  int32_t Item; // w22
  const MethodInfo *v18; // x1
  System_Action_o *v19; // x21
  const MethodInfo *v20; // x2

  if ( (byte_4A499B4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, end_act);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&MaterialServantLimitCountManager_TypeInfo, v6);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__, v7);
    sub_1B863B8(&MyRoomControl___c__DisplayClass242_0_TypeInfo, v8);
    byte_4A499B4 = 1;
  }
  v9 = sub_1B86604(MyRoomControl___c__DisplayClass242_0_TypeInfo);
  MyRoomControl___c__DisplayClass242_0___ctor((MyRoomControl___c__DisplayClass242_0_o *)v9, 0LL);
  if ( !v9
    || (*(_QWORD *)(v9 + 16) = this,
        sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13),
        *(_QWORD *)(v9 + 24) = end_act,
        sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)end_act, v14, v15),
        materialImageIdList = this->fields.materialImageIdList,
        this->fields.isServantMaterial = 0,
        !materialImageIdList) )
  {
    sub_1B86614(materialImageIdList, v11);
  }
  materialServantId = this->fields.materialServantId;
  Item = System_Collections_Generic_List_int___get_Item(
           materialImageIdList,
           this->fields.materialFigureSvtDispIdx,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
  if ( !MaterialServantLimitCountManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MaterialServantLimitCountManager_TypeInfo);
  MaterialServantLimitCountManager__SetLimitCount(materialServantId, Item, 0LL);
  MaterialServantLimitCountManager__WriteData(0LL);
  this->fields.materialServantId = -1;
  MyRoomControl__SetChangeBtn(this, v18);
  v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)v9, Method_MyRoomControl___c__DisplayClass242_0__SetMySvtFigure_b__0__, 0LL);
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
    sub_1B86614(photoCampaignButtonSprite, v3);
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
    sub_1B86614(photoCampaignAtlas, sprite);
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
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *photoCampaignInstantiateCameraEffect; // x21
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4A49A1C & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, isActive);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A49A1C = 1;
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
      v9 = UnityEngine_Object__Instantiate_object__50290416(
             photoCampaignCameraEffect,
             transform,
             (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
      this->fields.photoCampaignInstantiateCameraEffect = (struct UnityEngine_GameObject_o *)v9;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignInstantiateCameraEffect, (int32_t)v9, v10, v11);
      photoCampaignCameraButton = (UnityEngine_GameObject_o *)this->fields.titleInfo;
      if ( photoCampaignCameraButton )
      {
        TitleInfoControl__FrameIn((TitleInfoControl_o *)photoCampaignCameraButton, 0, 0LL);
        return;
      }
    }
LABEL_16:
    sub_1B86614(photoCampaignCameraButton, isActive);
  }
  photoCampaignInstantiateCameraEffect = (UnityEngine_Object_o *)this->fields.photoCampaignInstantiateCameraEffect;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69356292(photoCampaignInstantiateCameraEffect, 0LL);
  this->fields.photoCampaignInstantiateCameraEffect = 0LL;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignInstantiateCameraEffect, 0, v13, v14);
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

  if ( (byte_4A49A00 & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, sprite);
    byte_4A49A00 = 1;
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
      sub_1B86614(v9, v8);
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

  if ( (byte_4A499BE & 1) == 0 )
  {
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TweenAlpha___, method);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_TweenScale___, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v4);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A499BE = 1;
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
    if ( !byte_4A487E6 )
    {
      voicePlayEffect = (UnityEngine_GameObject_o *)sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v7);
      byte_4A487E6 = 1;
    }
    if ( !v9
      || (UnityEngine_Transform__set_localScale(v9, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL),
          (voicePlayEffect = this->fields.voicePlayEffect) == 0LL)
      || (voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          voicePlayEffect,
                                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TweenScale___),
          !this->fields.voicePlayEffect)
      || (v10 = (UITweener_o *)voicePlayEffect,
          voicePlayEffect = (UnityEngine_GameObject_o *)UnityEngine_GameObject__GetComponent_object_(
                                                          this->fields.voicePlayEffect,
                                                          (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_TweenAlpha___),
          !v10)
      || (v11 = (UITweener_o *)voicePlayEffect, UITweener__set_tweenFactor(v10, 0.0, 0LL), !v11) )
    {
LABEL_21:
      sub_1B86614(voicePlayEffect, v7);
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
    UITweener__Play_47952920(v10, 1, 0LL);
    UITweener__Play_47952920(v11, 1, 0LL);
  }
}


void __fastcall MyRoomControl__SetSceneJumpInfo(MyRoomControl_o *this, SceneJumpInfo_o *info, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields.sceneJumpInfo = info;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.sceneJumpInfo, (int32_t)info, (int32_t)method, v3);
}


void __fastcall MyRoomControl__SetServantMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  TitleInfoControl_o *titleInfo; // x0
  const MethodInfo *v5; // x3

  MyRoomControl__stopSvtVoice(this, method);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, v3);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v5);
}


void __fastcall MyRoomControl__SetServantMenuTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B86614(this, method);
  mStateMaterial->fields.isServantMenuTop = 1;
  MyRoomControl__SetState(this, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__SetState(MyRoomControl_o *this, int32_t state, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A499AB & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_MyRoomControl__setState__, *(_QWORD *)&state);
    byte_4A499AB = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( !mFSM )
    sub_1B86614(0LL, *(_QWORD *)&state);
  CStateManager_object___setState(
    mFSM,
    state,
    (const MethodInfo_31A349C *)Method_CStateManager_MyRoomControl__setState__);
}


void __fastcall MyRoomControl__SetupFrontObject(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  Il2CppObject *MasterData_object; // x0
  MyRoomAddMaster_o *v8; // x20
  int32_t v9; // w1
  MyRoomFrontObjectManager_o *frontObjectManager; // x0

  if ( (byte_4A4999F & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v4);
    byte_4A4999F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  v8 = (MyRoomAddMaster_o *)MasterData_object;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId((const MethodInfo *)MasterData_object);
  if ( !v8
    || (Instance = (Il2CppObject *)MyRoomAddMaster__GetChangeMyRoomFrontObjId(v8, -1, (int32_t)Instance, 0LL),
        !this->fields.frontObjectManager) )
  {
LABEL_11:
    sub_1B86614(Instance, v6);
  }
  v9 = (int)Instance;
  frontObjectManager = this->fields.frontObjectManager;
  if ( v9 == -1 )
    MyRoomFrontObjectManager__ReleaseAll(frontObjectManager, 0LL);
  else
    MyRoomFrontObjectManager__Setup(frontObjectManager, v9, 0LL);
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
  if ( (byte_4A499A1 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, *(_QWORD *)&servantId);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, v5);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantLimitImageMaster___, v6);
    sub_1B863B8(&DataManager_TypeInfo, v7);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v13);
    sub_1B863B8(&MaterialServantLimitCountManager_TypeInfo, v14);
    this = (MyRoomControl_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    byte_4A499A1 = 1;
  }
  materialImageIdList = v4->fields.materialImageIdList;
  v4->fields.materialFigureSvtDispIdx = 0;
  if ( !materialImageIdList )
    goto LABEL_43;
  v17 = materialImageIdList->fields._version + 1;
  materialImageIdList->fields._size = 0;
  materialImageIdList->fields._version = v17;
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !this )
    goto LABEL_43;
  this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                              (DataManager_o *)this,
                              (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
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
      this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        break;
      this = (MyRoomControl_o *)DataManager__GetMasterData_object_(
                                  (DataManager_o *)this,
                                  (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                  (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__);
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
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
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
    sub_1B86614(this, *(_QWORD *)&servantId);
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
        sub_1B8661C(this, *(_QWORD *)&servantId);
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
            *(const MethodInfo_35DF934 **)(*(_QWORD *)(v31[4] + 192LL) + 112LL));
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
  this = (MyRoomControl_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantLimitImageMaster___);
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
                                (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1B86614(0LL, method);
  ContinueDeviceComponent__openMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__Start(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  Gesture_EventHandler_o *v5; // x20

  if ( (byte_4A499A7 & 1) == 0 )
  {
    sub_1B863B8(&Gesture_EventHandler_TypeInfo, method);
    sub_1B863B8(&FingerGestures_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl_FingerGestures_OnGestureEvent__, v4);
    byte_4A499A7 = 1;
  }
  v5 = (Gesture_EventHandler_o *)sub_1B86604(Gesture_EventHandler_TypeInfo);
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
  const MethodInfo *v7; // x3

  if ( (byte_4A49A14 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__StartCameraEffect_d__420_TypeInfo, method);
    byte_4A49A14 = 1;
  }
  v3 = sub_1B86604(MyRoomControl__StartCameraEffect_d__420_TypeInfo);
  MyRoomControl__StartCameraEffect_d__420___ctor((MyRoomControl__StartCameraEffect_d__420_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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

  if ( (byte_4A49A19 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Clear__, v5);
    sub_1B863B8(&Method_MyRoomControl__TransitionMyRoomTop_b__425_0__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, v8);
    byte_4A49A19 = 1;
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
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    goto LABEL_10;
  MissionNotifyManager__EndPause((MissionNotifyManager_o *)Instance, 0LL);
  v15 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = AvalonSceneManager_TypeInfo;
  v17 = (CommonUI_o *)v15;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v16 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v16->static_fields->DEFAULT_FADE_TIME;
  v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_0__, 0LL);
  if ( !v17 )
LABEL_10:
    sub_1B86614(Instance, v10);
  CommonUI__maskFadeout(v17, 1, DEFAULT_FADE_TIME, v19, 0LL);
}


void __fastcall MyRoomControl__Update(MyRoomControl_o *this, const MethodInfo *method)
{
  CStateManager_T__o *mFSM; // x0

  if ( (byte_4A499A9 & 1) == 0 )
  {
    sub_1B863B8(&Method_CStateManager_MyRoomControl__update__, method);
    byte_4A499A9 = 1;
  }
  mFSM = (CStateManager_T__o *)this->fields.mFSM;
  if ( mFSM )
    CStateManager_object___update(mFSM, (const MethodInfo_31A3478 *)Method_CStateManager_MyRoomControl__update__);
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

  if ( (byte_4A499FA & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A499FA = 1;
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
      sub_1B86614(RestTime6, v9);
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

  if ( (byte_4A49A1B & 1) == 0 )
  {
    sub_1B863B8(&LocalizationManager_TypeInfo, method);
    sub_1B863B8(&NetworkManager_TypeInfo, v3);
    byte_4A49A1B = 1;
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
      sub_1B86614(RestTime6, v9);
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
    sub_1B86614(MaterialEventLogItemListPanel, isActive);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
}


void __fastcall MyRoomControl___AutoDelinkAccountLinkage_b__320_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A49A37 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A37 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B86614(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___CloseMultipleView_b__387_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2

  if ( (byte_4A49A3B & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__CloseMultipleView_b__387_1__, v3);
    byte_4A49A3B = 1;
  }
  multipleViewComponent = this->fields.multipleViewComponent;
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl__CloseMultipleView_b__387_1__, 0LL);
  if ( !multipleViewComponent )
    sub_1B86614(v6, v7);
  MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v5, v8);
}


void __fastcall MyRoomControl___CloseMultipleView_b__387_1(MyRoomControl_o *this, const MethodInfo *method)
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
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 41, 0, 0LL);
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
      sub_1B8661C(titleInfo, method);
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
    sub_1B86614(titleInfo, method);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleInfo, 0, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, 0LL, v8);
}


bool __fastcall MyRoomControl___CoWaitForConstructingRecordWithServant_b__292_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B86614(this, method);
  return mStateMaterial->fields._recordWithServantPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__401_1(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x4

  if ( (byte_4A49A3C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_2__, v3);
    byte_4A49A3C = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_2__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 0, v4, 1, v5);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__401_2(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A49A3D & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl__EndLoadPhotoAsset_b__401_3__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A49A3D = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_17;
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 0, 0, 0LL);
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
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = AvalonSceneManager_TypeInfo;
  v11 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v10 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v10->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_MyRoomControl__EndLoadPhotoAsset_b__401_3__, 0LL);
  if ( !v11 )
LABEL_17:
    sub_1B86614(titleInfo, method);
  CommonUI__maskFadein(v11, DEFAULT_FADE_TIME, v13, 0LL);
}


void __fastcall MyRoomControl___EndLoadPhotoAsset_b__401_3(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void __fastcall MyRoomControl___ExchangePosition_b__436_0(MyRoomControl_o *this, const MethodInfo *method)
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
  if ( (byte_4A49A41 & 1) == 0 )
  {
    sub_1B863B8(&AvalonSceneManager_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v3);
    this = (MyRoomControl_o *)sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4A49A41 = 1;
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
      sub_1B8661C(this, method);
    this = (MyRoomControl_o *)v2->fields.photoTargetList;
    if ( !this )
      goto LABEL_28;
    v9 = photoStandFigures->m_Items[v5];
    this = (MyRoomControl_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                (System_Collections_Generic_List_T__o *)this,
                                v5,
                                (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
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
        if ( !byte_4A487E6 )
        {
          sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v15);
          byte_4A487E6 = 1;
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
        GameObjectExtensions__SetLocalScale_34384400(v13, scale, 0LL);
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
  this = (MyRoomControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v19 = (CommonUI_o *)this;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
  if ( !v19 )
LABEL_28:
    sub_1B86614(this, method);
  CommonUI__maskFadein(v19, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___GoToTitle_b__332_0(MyRoomControl_o *this, bool isDecide, const MethodInfo *method)
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
  const MethodInfo *v19; // x3

  if ( (byte_4A49A39 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isDecide);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&Method_MyRoomControl___c__GoToTitle_b__332_1__, v6);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v7);
    byte_4A49A39 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  CommonUI__CloseConfirmDialog((CommonUI_o *)Instance, 0LL);
  if ( isDecide )
  {
    MyRoomControl__shutdown(v10, v11);
    v12 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
      v15 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v15, v16, Method_MyRoomControl___c__GoToTitle_b__332_1__, 0LL);
      static_fields = MyRoomControl___c_TypeInfo->static_fields;
      static_fields->__9__332_1 = v15;
      sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__332_1, (int32_t)v15, v18, v19);
    }
    if ( v12 )
    {
      CommonUI__maskFadeout((CommonUI_o *)v12, 1, DEFAULT_FADE_TIME, v15, 0LL);
      return;
    }
LABEL_16:
    sub_1B86614(Instance, v9);
  }
}


bool __fastcall MyRoomControl___InitServantMenu_b__289_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B86614(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___LoadServantForm_b__266_0(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A49A35 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__LoadServantForm_b__266_1__, v4);
    sub_1B863B8(&StringLiteral_8323/*"LoadServantFormEnd"*/, v5);
    byte_4A49A35 = 1;
  }
  mState = this->fields.mState;
  if ( !mState )
  {
    MyRoomControl__ChangeSetStandFigureObj(this, 1, 1, v2);
    standFigureBack = this->fields.standFigureBack;
    v8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl__LoadServantForm_b__266_1__, 0LL);
    if ( standFigureBack )
    {
      StandFigureBack__Fadein(standFigureBack, v8, 0LL);
      return;
    }
LABEL_18:
    sub_1B86614(SvtStandFigure, method);
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
  MyRoomControl__moveControl(this, this->fields.svtObj, v15, (System_String_o *)StringLiteral_8323/*"LoadServantFormEnd"*/, v14);
}


void __fastcall MyRoomControl___OnClickBack_b__339_0(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomStateMaterial_o *mStateMaterial; // x0
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x1

  mStateMaterial = this->fields.mStateMaterial;
  this->fields.type = 1;
  if ( !mStateMaterial )
    sub_1B86614(0LL, method);
  MyRoomStateMaterial__GalleryBack(mStateMaterial, 0, 0LL);
  MyRoomControl__setSvtFigureActive(this, 1, 1, v4);
  MyRoomControl__setDefSvtPos(this, v5);
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)this->fields.titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl___OnClickBack_b__339_1(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 0, v2);
}


void __fastcall MyRoomControl___OnClickBack_b__339_2(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__ConfirmTargetSelectState(this, 1, v2);
}


void __fastcall MyRoomControl___OnClickBack_b__339_3(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t targetChangeAnotherTargetType; // w20
  bool targetChangeIsLeft; // w21
  System_Action_o *v6; // x22
  const MethodInfo *v7; // x4

  if ( (byte_4A49A3A & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__OnClickBack_b__339_4__, v3);
    byte_4A49A3A = 1;
  }
  targetChangeAnotherTargetType = this->fields.targetChangeAnotherTargetType;
  targetChangeIsLeft = this->fields.targetChangeIsLeft;
  v6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MyRoomControl__OnClickBack_b__339_4__, 0LL);
  MyRoomControl__OpenChangeTargetSelectDialog(this, targetChangeAnotherTargetType, targetChangeIsLeft, v6, v7);
}


void __fastcall MyRoomControl___OnClickBack_b__339_4(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OnClickChangeBg_b__450_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  void *soundPlayerComp; // x0
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1
  System_String_o *MyRoomBgm; // x0
  MyRoomBackGroundManager_o *backGroundManager; // x19
  System_Action_o *v12; // x20
  Il2CppObject *v13; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A49A42 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&SoundManager_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl___c__OnClickChangeBg_b__450_1__, v4);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v5);
    byte_4A49A42 = 1;
  }
  MyRoomControl__stopSvtVoice(this, method);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopBgm(0LL);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    goto LABEL_14;
  SoundPlayerComponent__InitPlaySoundData((SoundPlayerComponent_o *)soundPlayerComp, 0LL);
  MyRoomControl__SetupFrontObject(this, v8);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v9);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  soundPlayerComp = MyRoomControl___c_TypeInfo;
  backGroundManager = this->fields.backGroundManager;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    soundPlayerComp = MyRoomControl___c_TypeInfo;
  }
  v12 = *(System_Action_o **)(*((_QWORD *)soundPlayerComp + 23) + 112LL);
  if ( !v12 )
  {
    if ( !*((_DWORD *)soundPlayerComp + 56) )
    {
      j_il2cpp_runtime_class_init_0(soundPlayerComp);
      soundPlayerComp = MyRoomControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)**((_QWORD **)soundPlayerComp + 23);
    v12 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v12, v13, Method_MyRoomControl___c__OnClickChangeBg_b__450_1__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__450_1 = v12;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__450_1, (int32_t)v12, v15, v16);
  }
  if ( !backGroundManager )
LABEL_14:
    sub_1B86614(soundPlayerComp, v6);
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v12, 0LL);
}


void __fastcall MyRoomControl___OnClickSelectMultipleServant_b__373_0(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  MultipleViewComponent_o *multipleViewComponent; // x0

  multipleViewComponent = this->fields.multipleViewComponent;
  this->fields.multipleViewState = 1;
  if ( !multipleViewComponent )
    sub_1B86614(0LL, method);
  MultipleViewComponent__Open(multipleViewComponent, 1, v2);
}


void __fastcall MyRoomControl___OpenTargetSelectDialogLeftOnPhotoMode_b__431_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OpenTargetSelectDialogRightOnPhotoMode_b__432_0(
        MyRoomControl_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  MyRoomControl__DispPhotoCampaign(this, 0, 0, v2);
}


void __fastcall MyRoomControl___OverrideAccountLinkage_b__319_0(MyRoomControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A49A36 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A36 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance
    || (CommonUI__CloseAccountLinkageNotificationDialog(Instance, 0LL, 0LL),
        (Instance = (CommonUI_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B86614(Instance, v4);
  }
  ContinueDeviceComponent__openMenu((ContinueDeviceComponent_o *)Instance, 0LL);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__425_0(MyRoomControl_o *this, const MethodInfo *method)
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
  System_Action_object__o *_9__425_1; // x21
  Il2CppObject *v19; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  UnityEngine_Object_o *photoMasterTexture; // x20
  struct UIMasterFigureTextureOld_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  System_Collections_Generic_List_object__o *instantiateLayerChangeObjList; // x20
  System_Action_object__o *v29; // x21
  Il2CppObject *v30; // x22
  struct MyRoomControl___c_StaticFields *v31; // x0
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *v34; // x8
  int32_t size; // w2
  int v36; // w9
  System_Action_o *v37; // x20
  const MethodInfo *v38; // x4

  if ( (byte_4A49A3E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoLayerChangeComponent__TypeInfo, method);
    sub_1B863B8(&System_Action_PhotoStandFigureComponent__TypeInfo, v3);
    sub_1B863B8(&System_Action_TypeInfo, v4);
    sub_1B863B8(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__Clear__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__, v7);
    sub_1B863B8(&Method_MyRoomControl__TransitionMyRoomTop_b__425_3__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&Method_MyRoomControl___c__TransitionMyRoomTop_b__425_1__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__TransitionMyRoomTop_b__425_2__, v11);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v12);
    byte_4A49A3E = 1;
  }
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_34;
  TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)titleInfo, 1, 41, 0, 0LL);
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
  _9__425_1 = (System_Action_object__o *)v16->static_fields->__9__425_1;
  if ( !_9__425_1 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = MyRoomControl___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v16->static_fields->__9;
    _9__425_1 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__425_1, v19, Method_MyRoomControl___c__TransitionMyRoomTop_b__425_1__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__425_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__425_1;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__425_1, (int32_t)_9__425_1, v21, v22);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__425_1,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
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
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
    *p_photoMasterTexture = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoMasterTexture, 0, v26, v27);
  }
  titleInfo = MyRoomControl___c_TypeInfo;
  instantiateLayerChangeObjList = (System_Collections_Generic_List_object__o *)this->fields.instantiateLayerChangeObjList;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    titleInfo = MyRoomControl___c_TypeInfo;
  }
  v29 = *(System_Action_object__o **)(*((_QWORD *)titleInfo + 23) + 80LL);
  if ( !v29 )
  {
    if ( !*((_DWORD *)titleInfo + 56) )
    {
      j_il2cpp_runtime_class_init_0(titleInfo);
      titleInfo = MyRoomControl___c_TypeInfo;
    }
    v30 = (Il2CppObject *)**((_QWORD **)titleInfo + 23);
    v29 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoLayerChangeComponent__TypeInfo);
    System_Action_object____ctor(v29, v30, Method_MyRoomControl___c__TransitionMyRoomTop_b__425_2__, 0LL);
    v31 = MyRoomControl___c_TypeInfo->static_fields;
    v31->__9__425_2 = (struct System_Action_PhotoLayerChangeComponent__o *)v29;
    sub_1B8635C((CGThumbnailListItem_o *)&v31->__9__425_2, (int32_t)v29, v32, v33);
  }
  if ( !instantiateLayerChangeObjList
    || (System_Collections_Generic_List_object___ForEach(
          instantiateLayerChangeObjList,
          (System_Action_T__o *)v29,
          (const MethodInfo_35FD398 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent__ForEach__),
        (v34 = this->fields.instantiateLayerChangeObjList) == 0LL) )
  {
LABEL_34:
    sub_1B86614(titleInfo, method);
  }
  size = v34->fields._size;
  v36 = v34->fields._version + 1;
  v34->fields._size = 0;
  v34->fields._version = v36;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v34->fields._items, 0, size, 0LL);
  v37 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v37, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_3__, 0LL);
  MyRoomControl__DispDefaultMyRoom(this, 1, v37, 1, v38);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__425_3(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A49A3F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__TransitionMyRoomTop_b__425_4__, v3);
    byte_4A49A3F = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_4__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__425_4(MyRoomControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A49A40 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl__TransitionMyRoomTop_b__425_5__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A49A40 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl__TransitionMyRoomTop_b__425_5__, 0LL);
  if ( !v8 )
    sub_1B86614(v11, v12);
  CommonUI__maskFadein(v8, DEFAULT_FADE_TIME, v10, 0LL);
}


void __fastcall MyRoomControl___TransitionMyRoomTop_b__425_5(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__SetBackButtonIgnore(this, 0, v2);
}


void __fastcall MyRoomControl___hideFavoriteSvt_b__324_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A49A38 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3512/*"CLOSE_MENU"*/, method);
    byte_4A49A38 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3512/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl___hideSvtFigure_b__249_0(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A49A34 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_7110/*"HIDE_END"*/, method);
    byte_4A49A34 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_7110/*"HIDE_END"*/, 0LL);
}


bool __fastcall MyRoomControl___initMaterial_b__287_0(MyRoomControl_o *this, const MethodInfo *method)
{
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B86614(this, method);
  return mStateMaterial->fields._materialPageDataConstructionCompleted_k__BackingField;
}


void __fastcall MyRoomControl___setMySvtFigure_b__240_0(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  PlayMakerFSM_o *myRoomFsm; // x0
  System_String_o **v5; // x8

  if ( (byte_4A49A33 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, method);
    sub_1B863B8(&StringLiteral_8141/*"LOAD_END_TO_HELP"*/, v3);
    byte_4A49A33 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, method);
  if ( this->fields.type == 6 )
    v5 = (System_String_o **)&StringLiteral_8141/*"LOAD_END_TO_HELP"*/;
  else
    v5 = (System_String_o **)&StringLiteral_8140/*"LOAD_END"*/;
  PlayMakerFSM__SendEvent(myRoomFsm, *v5, 0LL);
}


void __fastcall MyRoomControl___setupSvtRand_b__222_0(
        MyRoomControl_o *this,
        System_String_o *result,
        const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A49A32 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, result);
    byte_4A49A32 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, result);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
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
  if ( (byte_4A499C7 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_10905/*"REQUEST_OK"*/, result);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v5);
    this = (MyRoomControl_o *)sub_1B863B8(&StringLiteral_10903/*"REQUEST_NG"*/, v6);
    byte_4A499C7 = 1;
  }
  if ( !result )
    goto LABEL_12;
  if ( !System_String__Equals_61680480(result, (System_String_o *)StringLiteral_22061/*"ok"*/, 0LL) )
  {
    this = v4[9];
    if ( this )
    {
      MstProfileComponent__resetInput((MstProfileComponent_o *)this, 0LL);
      this = v4[5];
      if ( this )
      {
        v7 = &StringLiteral_10903/*"REQUEST_NG"*/;
        goto LABEL_11;
      }
    }
LABEL_12:
    sub_1B86614(this, result);
  }
  this = v4[4];
  if ( !this )
    goto LABEL_12;
  MyRoomData__setUserInfoData((MyRoomData_o *)this, 0LL);
  this = v4[5];
  if ( !this )
    goto LABEL_12;
  v7 = &StringLiteral_10905/*"REQUEST_OK"*/;
LABEL_11:
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)*v7, 0LL);
}


void __fastcall MyRoomControl__checklTutorialHelp(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  if ( (byte_4A499D9 & 1) == 0 )
  {
    sub_1B863B8(&TutorialFlag_TypeInfo, method);
    byte_4A499D9 = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38640612(128, 0LL) )
  {
    EventTutorialMaster__CheckTutorial(0, 74, 0LL, 0, 0, 0, 0, 0LL);
  }
  else
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( !helpListViewManager )
      sub_1B86614(0LL, v3);
    MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
  }
}


void __fastcall MyRoomControl__closeMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  UnityEngine_Collider_o *maskBoxCollider; // x0

  this->fields._IsGallery_k__BackingField = 0;
  MyRoomControl__SetState(this, 1, v2);
  maskBoxCollider = (UnityEngine_Collider_o *)this->fields.maskBoxCollider;
  if ( !maskBoxCollider )
    sub_1B86614(0LL, v4);
  UnityEngine_Collider__set_enabled(maskBoxCollider, 0, 0LL);
}


void __fastcall MyRoomControl__createHelpList(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomHelpListViewManager_o *helpListViewManager; // x0

  helpListViewManager = this->fields.helpListViewManager;
  if ( !helpListViewManager )
    sub_1B86614(0LL, method);
  MyRoomHelpListViewManager__CreateList(helpListViewManager, 0LL);
}


void __fastcall MyRoomControl__destroySvtFigure(MyRoomControl_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  char *svtCtr; // x0

  svtCtr = (char *)this->fields.svtCtr;
  if ( !svtCtr
    || (*((_QWORD *)svtCtr + 11) = 0LL,
        sub_1B8635C((CGThumbnailListItem_o *)(svtCtr + 88), 0, v2, v3),
        (svtCtr = (char *)this->fields.standFigureBack) == 0LL) )
  {
    sub_1B86614(svtCtr, method);
  }
  StandFigureBack__DestroyFigure((StandFigureBack_o *)svtCtr, 0LL);
}


void __fastcall MyRoomControl__endReflectionGameOption(MyRoomControl_o *this, const MethodInfo *method)
{
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A499C5 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_11276/*"SAVE_END"*/, method);
    byte_4A499C5 = 1;
  }
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, method);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_11276/*"SAVE_END"*/, 0LL);
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
  Il2CppObject *MasterData_object; // x20
  int32_t v11; // w0
  int32_t v12; // w20
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A499A3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_BgmMaster___, v1);
    sub_1B863B8(&Method_DataManager_GetMasterData_MyRoomAddMaster___, v2);
    sub_1B863B8(&Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__, v3);
    sub_1B863B8(&MyRoomControl_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v5);
    byte_4A499A3 = 1;
  }
  v6 = MyRoomControl_TypeInfo;
  entity = 0LL;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    v6 = MyRoomControl_TypeInfo;
  }
  DEFAULT_BGM_NAME = v6->static_fields->DEFAULT_BGM_NAME;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_14;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_MyRoomAddMaster___);
  Instance = (Il2CppObject *)MyRoomControl__DisplayGroupId((const MethodInfo *)MasterData_object);
  if ( !MasterData_object )
    goto LABEL_14;
  v11 = MyRoomAddMaster__GetChangeMyRoomBgm((MyRoomAddMaster_o *)MasterData_object, (int32_t)Instance, 0LL);
  if ( v11 )
  {
    v12 = v11;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !Instance )
      goto LABEL_14;
    Instance = DataManager__GetMasterData_object_(
                 (DataManager_o *)Instance,
                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_BgmMaster___);
    if ( !Instance )
      goto LABEL_14;
    Instance = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                 (DataMasterBase_TMaster__TEntity__PKType__o *)Instance,
                                 &entity,
                                 v12,
                                 (const MethodInfo_32142CC *)Method_DataMasterBase_BgmMaster__BgmEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Instance & 1) != 0 )
    {
      if ( entity )
        return (System_String_o *)entity[1].monitor;
LABEL_14:
      sub_1B86614(Instance, v9);
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

  if ( (byte_4A499A4 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, method);
    byte_4A499A4 = 1;
  }
  v3 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  v4 = MyRoomControl__getChangeMyRoomBgm((const MethodInfo *)v3);
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B86614(v4, v5);
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
    sub_1B86614(0LL, method);
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
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  MyRoomData_o *myRoomData; // x0
  int64_t favoriteUserSvtId; // x1
  struct UserGameEntity_o *usrData; // x8
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int32_t figureSvtDispIdx; // w9
  int32_t v21; // w8
  struct System_Collections_Generic_List_int__o *v23; // x8
  MyRoomControl_c *v24; // x0
  int v25; // w8
  MyRoomControl_c *v26; // x0
  int32_t v27; // w20
  int32_t Item; // w0
  StandFigureBack_c *v29; // x8
  int32_t v30; // w22
  int32_t LimitCountByImageLimit; // w21
  Il2CppObject *Master_object; // x0
  int32_t figureSvtId; // w19
  MyroomServantSpecialImageMaster_o *v34; // x23
  MyroomServantSpecialImageEntity_o *entity; // [xsp+8h] [xbp-38h] BYREF
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4A499B7 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, limitCntReset);
    sub_1B863B8(&Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v9);
    sub_1B863B8(&MyRoomControl_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&StandFigureBack_TypeInfo, v12);
    byte_4A499B7 = 1;
  }
  entity = 0LL;
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v14, v15);
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
        v21 = figureSvtDispIdx + 1;
      else
        v21 = 0;
      this->fields.figureSvtDispIdx = v21;
    }
    else
    {
      v23 = this->fields.imageIdList;
      if ( !v23 )
        goto LABEL_45;
      myRoomData = (MyRoomData_o *)this->fields.changeBtnImg;
      if ( v23->fields._size <= 1 )
      {
        if ( !myRoomData )
          goto LABEL_45;
        v37.fields.r = 0.5;
        v37.fields.g = 0.5;
        v37.fields.b = 0.5;
        v37.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v37, 0LL);
        v26 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v26 = MyRoomControl_TypeInfo;
        }
        v25 = this->fields.buttonFlag & ~v26->static_fields->BUTTON_LIMIT_CHANGE;
      }
      else
      {
        if ( !myRoomData )
          goto LABEL_45;
        v36.fields.r = 1.0;
        v36.fields.g = 1.0;
        v36.fields.b = 1.0;
        v36.fields.a = 1.0;
        UIWidget__set_color((UIWidget_o *)myRoomData, v36, 0LL);
        v24 = MyRoomControl_TypeInfo;
        if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
          v24 = MyRoomControl_TypeInfo;
        }
        v25 = this->fields.buttonFlag | v24->static_fields->BUTTON_LIMIT_CHANGE;
      }
      this->fields.buttonFlag = v25;
    }
  }
  myRoomData = (MyRoomData_o *)ServantVoiceMaster__getSvtVoiceId(this->fields.figureSvtId, 0LL);
  if ( !this->fields.imageIdList )
    goto LABEL_45;
  v27 = (int)myRoomData;
  Item = System_Collections_Generic_List_int___get_Item(
           this->fields.imageIdList,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
  v29 = StandFigureBack_TypeInfo;
  v30 = Item;
  if ( !StandFigureBack_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(StandFigureBack_TypeInfo);
    v29 = StandFigureBack_TypeInfo;
  }
  LimitCountByImageLimit = v30;
  if ( v30 < v29->static_fields->COSTUME_IMAGE_CNT_START )
  {
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    LimitCountByImageLimit = ImageLimitCount__GetLimitCountByImageLimit(v30, 0LL);
  }
  if ( v30 < 201 )
    goto LABEL_41;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_MyroomServantSpecialImageMaster___);
  figureSvtId = this->fields.figureSvtId;
  v34 = (MyroomServantSpecialImageMaster_o *)Master_object;
  if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
  myRoomData = (MyRoomData_o *)ImageLimitCount__SpecialImageLimitCountToSpecialNum(v30, 0LL);
  if ( !v34 )
LABEL_45:
    sub_1B86614(myRoomData, favoriteUserSvtId);
  myRoomData = (MyRoomData_o *)MyroomServantSpecialImageMaster__TryGetEntity(
                                 v34,
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
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_45;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
  if ( !myRoomData )
    goto LABEL_45;
  return ServantVoiceMaster__getEntity((ServantVoiceMaster_o *)myRoomData, 1, v27, LimitCountByImageLimit, 0LL);
}


int32_t __fastcall MyRoomControl__getVoiceSvtId(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 fvrUsrSvtId; // x1
  MyRoomData_o *myRoomData; // x0
  UserServantEntity_o *UsrSvtData; // x0
  __int64 v6; // x19
  __int64 v7; // x20
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v9; // 0:x0.16

  if ( (byte_4A499C0 & 1) == 0 )
  {
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, method);
    byte_4A499C0 = 1;
  }
  fvrUsrSvtId = this->fields.fvrUsrSvtId;
  if ( fvrUsrSvtId < 1 )
    return 0;
  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1B86614(0LL, fvrUsrSvtId);
  UsrSvtData = MyRoomData__getUsrSvtData(myRoomData, fvrUsrSvtId, 0LL);
  if ( !UsrSvtData )
    return 0;
  v7 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.currentCryptoKey;
  v6 = *(_QWORD *)&UsrSvtData->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v9.fields.currentCryptoKey = v7;
  *(_QWORD *)&v9.fields.fakeValue = v6;
  return CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v9, 0LL);
}


bool __fastcall MyRoomControl__get_IsGallery(MyRoomControl_o *this, const MethodInfo *method)
{
  return this->fields._IsGallery_k__BackingField;
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

  if ( (byte_4A499DC & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_EndTurorialRequest__, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_TutorialSetRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B863B8(&TutorialFlag_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_22061/*"ok"*/, v7);
    byte_4A499DC = 1;
  }
  if ( !TutorialFlag_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TutorialFlag_TypeInfo);
  if ( TutorialFlag__Get_38640612(128, 0LL) )
  {
    helpListViewManager = this->fields.helpListViewManager;
    if ( helpListViewManager )
    {
      MyRoomHelpListViewManager__DestroyList(helpListViewManager, 0LL);
      return;
    }
LABEL_12:
    sub_1B86614(helpListViewManager, v8);
  }
  v10 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v10, (Il2CppObject *)this, Method_MyRoomControl_EndTurorialRequest__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  helpListViewManager = (MyRoomHelpListViewManager_o *)NetworkManager__getRequest_object_(
                                                         v10,
                                                         (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TutorialSetRequest___);
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
    sub_1B86614(0LL, method);
  ContinueDeviceComponent__hideMenu(continueDeviceComp, 0LL);
}


void __fastcall MyRoomControl__hideFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Action_o *v4; // x20
  const MethodInfo *v5; // x3

  if ( (byte_4A499D4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__hideFavoriteSvt_b__324_0__, v3);
    byte_4A499D4 = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__hideFavoriteSvt_b__324_0__, 0LL);
  MyRoomControl__SetFavoriteSvt(this, v4, 1, v5);
}


void __fastcall MyRoomControl__hideMaterialCollection(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCollectionComponent_o *materialCollectionComp; // x0

  materialCollectionComp = this->fields.materialCollectionComp;
  if ( !materialCollectionComp )
    sub_1B86614(0LL, method);
  MaterialCollectionComponent__hideMenu(materialCollectionComp, 0LL);
}


void __fastcall MyRoomControl__hideMaterialCostume(MyRoomControl_o *this, const MethodInfo *method)
{
  MaterialCostumeComponent_o *materialCostumeComp; // x0

  materialCostumeComp = this->fields.materialCostumeComp;
  if ( !materialCostumeComp )
    sub_1B86614(0LL, method);
  MaterialCostumeComponent__hideMenu(materialCostumeComp, 0LL);
}


void __fastcall MyRoomControl__hideOption(MyRoomControl_o *this, const MethodInfo *method)
{
  SetGameOptionComponent_o *optionComp; // x0

  optionComp = this->fields.optionComp;
  if ( !optionComp )
    sub_1B86614(0LL, method);
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
    sub_1B86614(mstPfComp, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mstPfComp, 0, 0LL);
}


void __fastcall MyRoomControl__hideSerialCode(MyRoomControl_o *this, const MethodInfo *method)
{
  SerialCodeComponent_o *serialCodeComp; // x0

  serialCodeComp = this->fields.serialCodeComp;
  if ( !serialCodeComp )
    sub_1B86614(0LL, method);
  SerialCodeComponent__hideMenu(serialCodeComp, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  __int64 v4; // x1
  PlayMakerFSM_o *myRoomFsm; // x0

  if ( (byte_4A499D6 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_3512/*"CLOSE_MENU"*/, method);
    byte_4A499D6 = 1;
  }
  MyRoomControl__SetBackButtonIgnore(this, 1, v2);
  myRoomFsm = this->fields.myRoomFsm;
  if ( !myRoomFsm )
    sub_1B86614(0LL, v4);
  PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_3512/*"CLOSE_MENU"*/, 0LL);
}


void __fastcall MyRoomControl__hideSoundPlayerMenu(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0
  System_String_o *PlaySoundName; // x0
  const MethodInfo *v5; // x1
  System_String_o *MyRoomBgm; // x19

  if ( (byte_4A499D7 & 1) == 0 )
  {
    sub_1B863B8(&SoundManager_TypeInfo, method);
    byte_4A499D7 = 1;
  }
  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp
    || (SoundPlayerComponent__hideMenu(soundPlayerComp, 0LL), (soundPlayerComp = this->fields.soundPlayerComp) == 0LL) )
  {
    sub_1B86614(soundPlayerComp, method);
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

  if ( (byte_4A499BA & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__hideSvtFigure_b__249_0__, v3);
    sub_1B863B8(&MyRoomControl_TypeInfo, v4);
    byte_4A499BA = 1;
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
  v9 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_MyRoomControl__hideSvtFigure_b__249_0__, 0LL);
  if ( !standFigureBack )
LABEL_8:
    sub_1B86614(playBtnImg, method);
  StandFigureBack__Fadeout(standFigureBack, v9, 0LL);
}


void __fastcall MyRoomControl__hideUserServantCoinList(MyRoomControl_o *this, const MethodInfo *method)
{
  UserServantCoinComponent_o *userServantCoinComp; // x0

  userServantCoinComp = this->fields.userServantCoinComp;
  if ( !userServantCoinComp )
    sub_1B86614(0LL, method);
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
    sub_1B86614(usrItemListViewManager, method);
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
  const MethodInfo *v7; // x3

  if ( (byte_4A499CB & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__initMaterial_d__287_TypeInfo, method);
    byte_4A499CB = 1;
  }
  v3 = sub_1B86604(MyRoomControl__initMaterial_d__287_TypeInfo);
  MyRoomControl__initMaterial_d__287___ctor((MyRoomControl__initMaterial_d__287_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_1B86614(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v6, v7);
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
  __int64 v34; // x1
  __int64 v35; // x1
  StandFigureBack_o *standFigureBack; // x0
  const MethodInfo *v37; // x2
  CStateManager_T__o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  CStateManager_T__o *mFSM; // x20
  MyRoomControl_StateEtc_o *v42; // x21
  Il2CppObject *MasterData_object; // x0
  struct EventMaster_o **p_eventMaster; // x20
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  const MethodInfo *v47; // x1
  UnityEngine_GameObject_o *mMainObj; // x21
  MaterialEventLogListViewManager_o *mMaterialEventLogListViewManager; // x21
  System_Action_o *v50; // x22
  Il2CppObject *v51; // x23
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  _BOOL8 v55; // x0
  const MethodInfo *v56; // x4
  MyRoomControl_o *v57; // x0
  const MethodInfo *v58; // x4
  __int64 v59; // x1
  MyRoomParamsManager_c *v60; // x0
  MyRoomControl_c *v61; // x0
  const MethodInfo *v62; // x1
  const MethodInfo *v63; // x1
  System_String_o *MyRoomBgm; // x21
  MyRoomBackGroundManager_o *backGroundManager; // x21
  System_Action_o *v66; // x22
  const MethodInfo *v67; // x1
  UnityEngine_GameObject_o *changeLimitBtn; // x0
  UnityEngine_GameObject_o *moveBtnObj; // x0
  UnityEngine_GameObject_o *helpBtn; // x0
  const MethodInfo *v71; // x1
  System_Collections_IEnumerator_o *inited; // x0
  UISprite_o *changeServantListBtnSprite; // x21
  __int64 v74; // x8
  int v75; // w8
  const MethodInfo *v76; // x2
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v78; // x21
  int max_length; // w9
  int m_CancellationTokenSource; // w8
  _BOOL4 isEnableMultipleView; // w8
  UILabel_o *multipleViewButtonLabel; // x21
  const MethodInfo *v83; // x1
  const MethodInfo *v84; // x2
  const MethodInfo *v85; // x1
  MyRoomControl___c_c *v86; // x0
  System_Collections_Generic_IEnumerable_T__o *photoStandFigures; // x21
  System_Action_object__o *_9__217_1; // x22
  Il2CppObject *v89; // x23
  struct MyRoomControl___c_StaticFields *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  EventEntity_array *EnableEntityList; // x21
  UnityEngine_GameObject_o *photoCampaignButton; // x8
  int32_t v95; // w2
  const MethodInfo *v96; // x3
  _BOOL4 isEnablePhotoCampaign; // w8
  struct EventEntity_o *v98; // x1
  struct EventEntity_o **p_photoCampaignEntity; // x21
  System_Collections_Generic_List_object__o *v100; // x22
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_Collections_Generic_Dictionary_int__object__o *v103; // x22
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  System_Collections_Generic_Dictionary_int__object__o *v106; // x22
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  UILabel_o *photoCampaignButtonLabel; // x22
  const MethodInfo *v110; // x1
  System_Collections_Generic_List_T__o *v111; // x20
  int32_t v112; // w2
  const MethodInfo *v113; // x3
  System_Collections_Generic_List_T__o *v114; // x20
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  System_Collections_Generic_List_object__o *v117; // x20
  int32_t v118; // w2
  const MethodInfo *v119; // x3
  const MethodInfo *v120; // x2
  const MethodInfo *v121; // x1
  UnityEngine_Vector3_o v122; // [xsp+0h] [xbp-80h] BYREF
  UnityEngine_Vector3_o v; // [xsp+10h] [xbp-70h] BYREF
  UnityEngine_Vector3_o moveHidePos; // [xsp+20h] [xbp-60h] BYREF
  UnityEngine_Vector3_o moveShowPos; // [xsp+30h] [xbp-50h] BYREF
  UnityEngine_Vector3_o LocalPosition; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v128; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v129; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A4999E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_PhotoStandFigureComponent__TypeInfo, method);
    sub_1B863B8(&System_Action_TypeInfo, v3);
    sub_1B863B8(&AtlasManager_TypeInfo, v4);
    sub_1B863B8(&Method_BasicHelper_ForEach_PhotoStandFigureComponent___, v5);
    sub_1B863B8(&Method_CStateManager_MyRoomControl___ctor__, v6);
    sub_1B863B8(&Method_CStateManager_MyRoomControl__add__, v7);
    sub_1B863B8(&CStateManager_MyRoomControl__TypeInfo, v8);
    sub_1B863B8(&Method_DataManager_GetMasterData_EventMaster___, v9);
    sub_1B863B8(&Method_DataManager_GetMaster_EventMaster___, v10);
    sub_1B863B8(&Method_DataManager_GetMaster_UserServantMaster___, v11);
    sub_1B863B8(&DataManager_TypeInfo, v12);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__, v13);
    sub_1B863B8(&System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo, v14);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__, v15);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData___ctor__, v16);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__, v17);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v18);
    sub_1B863B8(&System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo, v19);
    sub_1B863B8(&System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo, v20);
    sub_1B863B8(&System_Collections_Generic_List_AssetData__TypeInfo, v21);
    sub_1B863B8(&LocalizationManager_TypeInfo, v22);
    sub_1B863B8(&Method_MyRoomControl_LoadScriptFileListAssetData__, v23);
    sub_1B863B8(&MyRoomControl_TypeInfo, v24);
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v25);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v26);
    sub_1B863B8(&SoundManager_TypeInfo, v27);
    sub_1B863B8(&MyRoomControl_StateEtc_TypeInfo, v28);
    sub_1B863B8(&Method_MyRoomControl___c__initMyRoom_b__217_0__, v29);
    sub_1B863B8(&Method_MyRoomControl___c__initMyRoom_b__217_1__, v30);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v31);
    sub_1B863B8(&StringLiteral_10201/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, v32);
    sub_1B863B8(&StringLiteral_17234/*"btn_bg_12"*/, v33);
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v34);
    sub_1B863B8(&StringLiteral_8668/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, v35);
    byte_4A4999E = 1;
  }
  moveShowPos.fields.z = 0.0;
  *(_QWORD *)&moveShowPos.fields.x = 0LL;
  moveHidePos.fields.z = 0.0;
  *(_QWORD *)&moveHidePos.fields.x = 0LL;
  v.fields.z = 0.0;
  *(_QWORD *)&v.fields.x = 0LL;
  v122.fields.z = 0.0;
  *(_QWORD *)&v122.fields.x = 0LL;
  standFigureBack = this->fields.standFigureBack;
  if ( !standFigureBack )
    goto LABEL_60;
  StandFigureBack__Init(standFigureBack, 0LL);
  if ( this->fields.mBattleSetupInfo )
  {
    standFigureBack = (StandFigureBack_o *)this->fields.myRoomFsm;
    if ( standFigureBack )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)standFigureBack, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
      return;
    }
    goto LABEL_60;
  }
  if ( !this->fields.mFSM )
  {
    v38 = (CStateManager_T__o *)sub_1B86604(CStateManager_MyRoomControl__TypeInfo);
    CStateManager_object____ctor(
      v38,
      (Il2CppObject *)this,
      2,
      (const MethodInfo_31A3368 *)Method_CStateManager_MyRoomControl___ctor__);
    this->fields.mFSM = (struct CStateManager_MyRoomControl__o *)v38;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.mFSM, (int32_t)v38, v39, v40);
    standFigureBack = (StandFigureBack_o *)this->fields.mFSM;
    if ( !standFigureBack )
      goto LABEL_60;
    CStateManager_object___add(
      (CStateManager_T__o *)standFigureBack,
      0,
      (IState_T__o *)this->fields.mStateMaterial,
      (const MethodInfo_31A3410 *)Method_CStateManager_MyRoomControl__add__);
    mFSM = (CStateManager_T__o *)this->fields.mFSM;
    v42 = (MyRoomControl_StateEtc_o *)sub_1B86604(MyRoomControl_StateEtc_TypeInfo);
    MyRoomControl_StateEtc___ctor(v42, 0LL);
    if ( !mFSM )
      goto LABEL_60;
    CStateManager_object___add(
      mFSM,
      1,
      (IState_T__o *)v42,
      (const MethodInfo_31A3410 *)Method_CStateManager_MyRoomControl__add__);
  }
  MyRoomControl__SetState(this, 1, v37);
  standFigureBack = (StandFigureBack_o *)this->fields.mStateMaterial;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomStateMaterial__PreInit((MyRoomStateMaterial_o *)standFigureBack, this, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomData;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomData__initMyRoomData((MyRoomData_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !standFigureBack )
    goto LABEL_60;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)standFigureBack,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_EventMaster___);
  p_eventMaster = &this->fields.eventMaster;
  this->fields.eventMaster = (struct EventMaster_o *)MasterData_object;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.eventMaster, (int32_t)MasterData_object, v45, v46);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_60;
  TitleInfoControl__setTitleInfo((TitleInfoControl_o *)standFigureBack, this->fields.myRoomFsm, 1, 0LL, 41, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.titleInfo;
  if ( !standFigureBack )
    goto LABEL_60;
  TitleInfoControl__setBackBtnDepth((TitleInfoControl_o *)standFigureBack, 30, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.myRoomListCtr;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomListControl__Setup((MyRoomListControl_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.svtClickCollider;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.voiceClickCollider;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)standFigureBack, 0, 0LL);
  this->fields.isHeroineReave = 0;
  *(_WORD *)&this->fields.isServantMaterial = 0;
  *(_DWORD *)&this->fields.isVoiceLoading = 0;
  this->fields.isExistVoiceData = 1;
  this->fields.materialServantId = -1;
  this->fields._IsGallery_k__BackingField = 0;
  MyRoomControl__setUserStInfoView(this, v47);
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
  v50 = *(System_Action_o **)(*(_QWORD *)&standFigureBack[1].fields.isFirstLoading + 8LL);
  if ( !v50 )
  {
    if ( !standFigureBack[2].fields.m_CachedPtr )
    {
      j_il2cpp_runtime_class_init_0(standFigureBack);
      standFigureBack = (StandFigureBack_o *)MyRoomControl___c_TypeInfo;
    }
    v51 = **(Il2CppObject ***)&standFigureBack[1].fields.isFirstLoading;
    v50 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v50, v51, Method_MyRoomControl___c__initMyRoom_b__217_0__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__217_0 = v50;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__217_0, (int32_t)v50, v53, v54);
  }
  if ( !mMaterialEventLogListViewManager )
    goto LABEL_60;
  v55 = MaterialEventLogListViewManager__SetMode(mMaterialEventLogListViewManager, 0, v50, 0LL);
  MyRoomControl__setupServantListUIMoveData(
    (MyRoomControl_o *)v55,
    this->fields.servantListObj,
    &moveShowPos,
    &moveHidePos,
    v56);
  MyRoomControl__setupSortWindowUIMoveData(v57, this->fields.sortWindowObj, &v, &v122, v58);
  GameObjectExtensions__SetLocalPosition(this->fields.servantListObj, moveShowPos, 0LL);
  GameObjectExtensions__SetLocalPosition(this->fields.sortWindowObj, v, 0LL);
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
  MyRoomParamsManager__Load_SaveData(0LL);
  MyRoomParamsManager__LoadIsListActive(0LL);
  if ( !byte_4A49A44 )
  {
    sub_1B863B8(&MyRoomParamsManager_TypeInfo, v59);
    byte_4A49A44 = 1;
  }
  v60 = MyRoomParamsManager_TypeInfo;
  if ( !MyRoomParamsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomParamsManager_TypeInfo);
    v60 = MyRoomParamsManager_TypeInfo;
  }
  this->fields.IsListActive = v60->static_fields->_IsListActive_k__BackingField;
  v61 = MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
  MyRoomControl__SetBackGroundData((const MethodInfo *)v61);
  standFigureBack = (StandFigureBack_o *)this->fields.soundPlayerComp;
  if ( !standFigureBack )
    goto LABEL_60;
  SoundPlayerComponent__initMenu((SoundPlayerComponent_o *)standFigureBack, 0LL);
  MyRoomControl__SetupFrontObject(this, v62);
  MyRoomBgm = MyRoomControl__getMyRoomBgm(this, v63);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playBgm(MyRoomBgm, 0LL);
  backGroundManager = this->fields.backGroundManager;
  v66 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v66, (Il2CppObject *)this, Method_MyRoomControl_LoadScriptFileListAssetData__, 0LL);
  if ( !backGroundManager )
    goto LABEL_60;
  MyRoomBackGroundManager__SetBackGround(backGroundManager, 3, v66, 0LL);
  MyRoomControl__setupSvtImageIdList(this, v67);
  standFigureBack = (StandFigureBack_o *)this->fields.helpListViewManager;
  if ( !standFigureBack )
    goto LABEL_60;
  MyRoomHelpListViewManager__LoadBaseSprite((MyRoomHelpListViewManager_o *)standFigureBack, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
  this->fields.mState = 0;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
  if ( !this->fields.isSetVoicePlayButtonDefaultPos )
  {
    this->fields.voicePlayButtonDefaultPos = GameObjectExtensions__GetLocalPosition(this->fields.voicePlayBtn, 0LL);
    this->fields.isSetVoicePlayButtonDefaultPos = 1;
  }
  changeLimitBtn = this->fields.changeLimitBtn;
  *(_QWORD *)&this->fields.voicePlayBtnInitPos.fields.x = *(_QWORD *)&this->fields.voicePlayButtonDefaultPos.fields.x;
  this->fields.voicePlayBtnInitPos.fields.z = this->fields.voicePlayButtonDefaultPos.fields.z;
  v127 = GameObjectExtensions__GetLocalPosition(changeLimitBtn, 0LL);
  moveBtnObj = this->fields.moveBtnObj;
  this->fields.changeLimitBtnInitPos = v127;
  v128 = GameObjectExtensions__GetLocalPosition(moveBtnObj, 0LL);
  helpBtn = this->fields.helpBtn;
  this->fields.moveBtnObjInitPos = v128;
  v129 = GameObjectExtensions__GetLocalPosition(helpBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeDispTouch;
  this->fields.helpBtnInitPos = v129;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  inited = MyRoomControl__InitMaterialOnBackground(this, v71);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, inited, 0LL);
  changeServantListBtnSprite = this->fields.changeServantListBtnSprite;
  if ( !AtlasManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
  AtlasManager__SetEventSprite(changeServantListBtnSprite, (System_String_o *)StringLiteral_17234/*"btn_bg_12"*/, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.changeServantListBtnSprite;
  if ( !standFigureBack )
    goto LABEL_60;
  ((void (__fastcall *)(StandFigureBack_o *, void *))standFigureBack->klass[2]._1.typeMetadataHandle)(
    standFigureBack,
    standFigureBack->klass[2]._1.interopData);
  this->fields.eventButtonInitPos = GameObjectExtensions__GetLocalPosition(this->fields.changeLimitBtn, 0LL);
  standFigureBack = (StandFigureBack_o *)MyRoomControl_TypeInfo;
  if ( !MyRoomControl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl_TypeInfo);
    standFigureBack = (StandFigureBack_o *)MyRoomControl_TypeInfo;
  }
  v74 = *(_QWORD *)(*(_QWORD *)&standFigureBack[1].fields.isFirstLoading + 48LL);
  if ( !v74 )
    goto LABEL_60;
  v75 = *(_DWORD *)(v74 + 24);
  standFigureBack = (StandFigureBack_o *)this->fields.changeBgButton;
  this->fields.isEnableChangeBg = v75 > 1;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, v75 > 1, 0LL);
  if ( this->fields.isEnableChangeBg )
  {
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.changeBgButton, v76);
    this->fields.changeBgButtonInitPos = GameObjectExtensions__GetLocalPosition(this->fields.changeBgButton, 0LL);
  }
  multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
  if ( !multipleStandFigureBacks )
    goto LABEL_60;
  v78 = 0LL;
  while ( 1 )
  {
    max_length = multipleStandFigureBacks->max_length;
    if ( (int)v78 >= max_length )
      break;
    if ( (unsigned int)v78 >= max_length )
      goto LABEL_97;
    standFigureBack = multipleStandFigureBacks->m_Items[v78];
    if ( standFigureBack )
    {
      StandFigureBack__Init(standFigureBack, 0LL);
      multipleStandFigureBacks = this->fields.multipleStandFigureBacks;
      ++v78;
      if ( multipleStandFigureBacks )
        continue;
    }
    goto LABEL_60;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewCloseButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewDisableUiButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)*p_eventMaster;
  if ( !*p_eventMaster )
    goto LABEL_60;
  this->fields.isEnableMultipleView = EventMaster__IsEnableMyRoomMultipleView((EventMaster_o *)standFigureBack, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_UserServantMaster___);
  if ( !standFigureBack
    || (standFigureBack = (StandFigureBack_o *)UserServantMaster__getOrganizationList(
                                                 (UserServantMaster_o *)standFigureBack,
                                                 0LL)) == 0LL
    || (m_CancellationTokenSource = (int)standFigureBack->fields.m_CancellationTokenSource,
        standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton,
        this->fields.isEnoughServantMultipleView = m_CancellationTokenSource > 1,
        !standFigureBack) )
  {
LABEL_60:
    sub_1B86614(standFigureBack, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, this->fields.isEnableMultipleView, 0LL);
  isEnableMultipleView = this->fields.isEnableMultipleView;
  this->fields.multipleViewState = 0;
  if ( isEnableMultipleView )
  {
    multipleViewButtonLabel = this->fields.multipleViewButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8668/*"MULTIPLE_VIEW_BUTTON_TEXT"*/, 0LL);
    if ( !multipleViewButtonLabel )
      goto LABEL_60;
    UILabel__set_text(multipleViewButtonLabel, (System_String_o *)standFigureBack, 0LL);
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_60;
    this->fields.multipleViewFinishedTime = EventMaster__GetFinishedTimeMyRoomMultipleView(
                                              (EventMaster_o *)standFigureBack,
                                              0LL);
    MyRoomControl__UpdateMutipleViewRemainTime(this, v83);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.multipleViewButton, v84);
    this->fields.multipleViewButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                               this->fields.multipleViewButton,
                                               0LL);
    MyRoomControl__SetMultipleViewButtonColor(this, v85);
  }
  v86 = MyRoomControl___c_TypeInfo;
  photoStandFigures = (System_Collections_Generic_IEnumerable_T__o *)this->fields.photoStandFigures;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v86 = MyRoomControl___c_TypeInfo;
  }
  _9__217_1 = (System_Action_object__o *)v86->static_fields->__9__217_1;
  if ( !_9__217_1 )
  {
    if ( !v86->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v86);
      v86 = MyRoomControl___c_TypeInfo;
    }
    v89 = (Il2CppObject *)v86->static_fields->__9;
    _9__217_1 = (System_Action_object__o *)sub_1B86604(System_Action_PhotoStandFigureComponent__TypeInfo);
    System_Action_object____ctor(_9__217_1, v89, Method_MyRoomControl___c__initMyRoom_b__217_1__, 0LL);
    v90 = MyRoomControl___c_TypeInfo->static_fields;
    v90->__9__217_1 = (struct System_Action_PhotoStandFigureComponent__o *)_9__217_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v90->__9__217_1, (int32_t)_9__217_1, v91, v92);
  }
  BasicHelper__ForEach_object_(
    photoStandFigures,
    (System_Action_T__o *)_9__217_1,
    (const MethodInfo_2F59FB0 *)Method_BasicHelper_ForEach_PhotoStandFigureComponent___);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignCameraButton;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignProduction;
  if ( !standFigureBack )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  standFigureBack = (StandFigureBack_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_EventMaster___);
  if ( !standFigureBack )
    goto LABEL_60;
  EnableEntityList = EventMaster__GetEnableEntityList((EventMaster_o *)standFigureBack, 26, 1, 0, 0LL);
  standFigureBack = (StandFigureBack_o *)BasicHelper__IsNullOrEmpty(
                                           (System_Collections_ICollection_o *)EnableEntityList,
                                           0LL);
  photoCampaignButton = this->fields.photoCampaignButton;
  method = (const MethodInfo *)(((unsigned int)standFigureBack ^ 1) & 1);
  this->fields.isEnablePhotoCampaign = ((unsigned __int8)standFigureBack ^ 1) & 1;
  if ( !photoCampaignButton )
    goto LABEL_60;
  UnityEngine_GameObject__SetActive(photoCampaignButton, ((unsigned __int8)standFigureBack ^ 1) & 1, 0LL);
  isEnablePhotoCampaign = this->fields.isEnablePhotoCampaign;
  this->fields.photoState = 0;
  if ( isEnablePhotoCampaign )
  {
    if ( !EnableEntityList )
      goto LABEL_60;
    if ( !EnableEntityList->max_length )
LABEL_97:
      sub_1B8661C(standFigureBack, method);
    v98 = EnableEntityList->m_Items[0];
    p_photoCampaignEntity = &this->fields.photoCampaignEntity;
    this->fields.photoCampaignEntity = v98;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoCampaignEntity, (int32_t)v98, v95, v96);
    v100 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_AssetData__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v100,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_AssetData___ctor__);
    this->fields.masterEquipAssetData = (struct System_Collections_Generic_List_AssetData__o *)v100;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterEquipAssetData, (int32_t)v100, v101, v102);
    v103 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v103,
      (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterMaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v103;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterMaleEquipTexture, (int32_t)v103, v104, v105);
    v106 = (System_Collections_Generic_Dictionary_int__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_int__Texture2D__TypeInfo);
    System_Collections_Generic_Dictionary_int__object____ctor(
      v106,
      (const MethodInfo_326CD90 *)Method_System_Collections_Generic_Dictionary_int__Texture2D___ctor__);
    this->fields.masterFemaleEquipTexture = (struct System_Collections_Generic_Dictionary_int__Texture2D__o *)v106;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.masterFemaleEquipTexture, (int32_t)v106, v107, v108);
    photoCampaignButtonLabel = this->fields.photoCampaignButtonLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    standFigureBack = (StandFigureBack_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10201/*"PHOTO_CAMPAIGN_BUTTON_TEXT"*/, 0LL);
    if ( !photoCampaignButtonLabel )
      goto LABEL_60;
    UILabel__set_text(photoCampaignButtonLabel, (System_String_o *)standFigureBack, 0LL);
    if ( !*p_photoCampaignEntity )
      goto LABEL_60;
    standFigureBack = (StandFigureBack_o *)*p_eventMaster;
    if ( !*p_eventMaster )
      goto LABEL_60;
    this->fields.photoCampaignFinishedTime = EventMaster__GetEventFinishedAt(
                                               (EventMaster_o *)standFigureBack,
                                               (*p_photoCampaignEntity)->fields.id,
                                               0LL);
    MyRoomControl__UpdatePhotoCampaignRemainTime(this, v110);
    v111 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v111,
      (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.photoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v111;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.photoTargetList, (int32_t)v111, v112, v113);
    v114 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_PhotoUtility_TargetType__TypeInfo);
    System_Collections_Generic_List_Int32Enum____ctor(
      v114,
      (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_PhotoUtility_TargetType___ctor__);
    this->fields.temporaryPhotoTargetList = (struct System_Collections_Generic_List_PhotoUtility_TargetType__o *)v114;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.temporaryPhotoTargetList, (int32_t)v114, v115, v116);
    v117 = (System_Collections_Generic_List_object__o *)sub_1B86604(System_Collections_Generic_List_PhotoLayerChangeComponent__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v117,
      (const MethodInfo_35FC124 *)Method_System_Collections_Generic_List_PhotoLayerChangeComponent___ctor__);
    this->fields.instantiateLayerChangeObjList = (struct System_Collections_Generic_List_PhotoLayerChangeComponent__o *)v117;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.instantiateLayerChangeObjList, (int32_t)v117, v118, v119);
    MyRoomControl__MoveEventButtonDisplay(this, this->fields.photoCampaignButton, v120);
    this->fields.photoCampaignButtonInitPos = GameObjectExtensions__GetLocalPosition(
                                                this->fields.photoCampaignButton,
                                                0LL);
    MyRoomControl__SetPhotoCampaignButtonColor(this, v121);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v4, 0LL);
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
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  z = movePos.fields.z;
  movePos.fields.z = movePos.fields.y;
  movePos.fields.y = movePos.fields.x;
  v8 = TweenPosition__Begin(target, 0.2, *(UnityEngine_Vector3_o *)&movePos.fields.y, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !v8 )
    sub_1B86614(gameObject, v10);
  v8->fields.eventReceiver = gameObject;
  sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.eventReceiver, (int32_t)gameObject, v11, v12);
  if ( callwhenFinished )
  {
    v8->fields.callWhenFinished = callwhenFinished;
    sub_1B8635C((CGThumbnailListItem_o *)&v8->fields.callWhenFinished, (int32_t)callwhenFinished, v13, v14);
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

  if ( (byte_4A499DA & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_onClickHelp__, method);
    sub_1B863B8(&MyRoomControl_TypeInfo, v3);
    byte_4A499DA = 1;
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
    v6 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_onClickHelp__);
  v8 = (System_Reflection_MethodBase_o *)sub_1B8639C(v6, v6[4]);
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
        sub_1B86614(0LL, v9);
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

  if ( (byte_4A499DB & 1) == 0 )
  {
    sub_1B863B8(&MyRoomHelpListViewManager_CallbackFunc2_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl_helpClose__, v3);
    sub_1B863B8(&Method_MyRoomControl_onClickHelpClose__, v4);
    byte_4A499DB = 1;
  }
  v5 = Method_MyRoomControl_onClickHelpClose__;
  if ( (*((_BYTE *)Method_MyRoomControl_onClickHelpClose__ + 83) & 2) != 0 )
    v5 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_onClickHelpClose__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
  OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0, 0LL);
  helpListViewManager = this->fields.helpListViewManager;
  v8 = (MyRoomHelpListViewManager_CallbackFunc2_o *)sub_1B86604(MyRoomHelpListViewManager_CallbackFunc2_TypeInfo);
  MyRoomHelpListViewManager_CallbackFunc2___ctor(v8, (Il2CppObject *)this, Method_MyRoomControl_helpClose__, 0LL);
  if ( !helpListViewManager )
    sub_1B86614(v9, v10);
  MyRoomHelpListViewManager__CloseHelpDialog(helpListViewManager, v8, 0LL);
}


void __fastcall MyRoomControl__openFavoriteSvt(MyRoomControl_o *this, const MethodInfo *method)
{
  FavoriteChangeComponent_o *favoriteChangeComp; // x0

  favoriteChangeComp = this->fields.favoriteChangeComp;
  if ( !favoriteChangeComp )
    sub_1B86614(0LL, method);
  FavoriteChangeComponent__Open(favoriteChangeComp, 0LL);
}


void __fastcall MyRoomControl__openSoundPlayer(MyRoomControl_o *this, const MethodInfo *method)
{
  SoundPlayerComponent_o *soundPlayerComp; // x0

  soundPlayerComp = this->fields.soundPlayerComp;
  if ( !soundPlayerComp )
    sub_1B86614(0LL, method);
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int m_CancellationTokenSource; // w8

  if ( (byte_4A499C3 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_VoiceMaster___, method);
    sub_1B863B8(&int_____TypeInfo, v3);
    sub_1B863B8(&int___TypeInfo, v4);
    sub_1B863B8(&Method_NetworkManager_getRequest_TopMyRoomRequest___, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v8);
    byte_4A499C3 = 1;
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
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__MyRoomPlayVoice((ClientMissionManager_o *)svtCtr, v11, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ClientMissionManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      ClientMissionManager__SendRequest((ClientMissionManager_o *)svtCtr, 0LL, 0LL);
      svtCtr = (MyRoomSvtControl_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !svtCtr )
        goto LABEL_21;
      svtCtr = (MyRoomSvtControl_o *)DataManager__GetMasterData_object_(
                                       (DataManager_o *)svtCtr,
                                       (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_VoiceMaster___);
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
                           (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_TopMyRoomRequest___);
        v17 = sub_1B86460(int_____TypeInfo, 1LL);
        svtCtr = (MyRoomSvtControl_o *)sub_1B86460(int___TypeInfo, 2LL);
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
            sub_1B8661C(svtCtr, svtCtr);
          *(_QWORD *)(v17 + 32) = svtCtr;
          sub_1B8635C((CGThumbnailListItem_o *)(v17 + 32), (int32_t)svtCtr, v18, v19);
          if ( Request_object )
          {
            TopMyRoomRequest__beginRequest((TopMyRoomRequest_o *)Request_object, (System_Int32_array_array *)v17, 0LL);
            return;
          }
        }
LABEL_21:
        sub_1B86614(svtCtr, v10);
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
  if ( (byte_4A499AE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl_o *)sub_1B863B8(&MaterialServantLimitCountManager_TypeInfo, v3);
    byte_4A499AE = 1;
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
             (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1B86614(materialImageIdList, v4);
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

  if ( (byte_4A499C4 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl_endReflectionGameOption__, v3);
    byte_4A499C4 = 1;
  }
  optionComp = this->fields.optionComp;
  v5 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_MyRoomControl_endReflectionGameOption__, 0LL);
  if ( !optionComp )
    sub_1B86614(v6, v7);
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

  if ( (byte_4A499C6 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_callbackChangeName__, method);
    sub_1B863B8(&Method_NetworkManager_getRequest_UserNameChangeRequest___, v3);
    sub_1B863B8(&NetworkManager_TypeInfo, v4);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_4356/*"ChangeUserName"*/, v6);
    byte_4A499C6 = 1;
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
                   (System_String_o *)StringLiteral_4356/*"ChangeUserName"*/,
                   0LL);
  if ( !SelfUserGame )
    goto LABEL_13;
  Value = HutongGames_PlayMaker_FsmString__get_Value((HutongGames_PlayMaker_FsmString_o *)SelfUserGame, 0LL);
  v11 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(v11, (Il2CppObject *)this, Method_MyRoomControl_callbackChangeName__, 0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = NetworkManager__getRequest_object_(
                     v11,
                     (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_UserNameChangeRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  if ( !SelfUserGame || !Request_object )
LABEL_13:
    sub_1B86614(SelfUserGame, v8);
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
    sub_1B86614(0LL, method);
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
  const MethodInfo *v13; // x3
  const MethodInfo *v14; // x2
  ServantVoiceEntity_o *SvtVoiceEnt; // x0
  PlayMakerFSM_o **v16; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  ServantVoiceEntity_o *v19; // x22
  int32_t figureSvtId; // w23
  int32_t Item; // w0
  const MethodInfo *v22; // x4
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  System_String_o *asstName; // x21
  System_Action_o *v30; // x22
  const MethodInfo *v31; // x3

  if ( (byte_4A499BB & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, isReset);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass250_0__resetSvtVoiceData_b__0__, v6);
    sub_1B863B8(&MyRoomControl___c__DisplayClass250_0_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, v8);
    byte_4A499BB = 1;
  }
  v9 = sub_1B86604(MyRoomControl___c__DisplayClass250_0_TypeInfo);
  MyRoomControl___c__DisplayClass250_0___ctor((MyRoomControl___c__DisplayClass250_0_o *)v9, 0LL);
  if ( !v9 )
    goto LABEL_13;
  *(_QWORD *)(v9 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 16), (int32_t)this, v12, v13);
  if ( this->fields.mBattleSetupInfo || this->fields.isServantMaterial )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
LABEL_7:
      PlayMakerFSM__SendEvent(myRoomFsm, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_13:
    sub_1B86614(myRoomFsm, v11);
  }
  SvtVoiceEnt = MyRoomControl__getSvtVoiceEnt(this, isReset, v14);
  *(_QWORD *)(v9 + 24) = SvtVoiceEnt;
  v16 = (PlayMakerFSM_o **)(v9 + 24);
  sub_1B8635C((CGThumbnailListItem_o *)(v9 + 24), (int32_t)SvtVoiceEnt, v17, v18);
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
  figureSvtId = this->fields.figureSvtId;
  Item = System_Collections_Generic_List_int___get_Item(
           (System_Collections_Generic_List_int__o *)myRoomFsm,
           this->fields.figureSvtDispIdx,
           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
  VoiceList = MyRoomControl__GetVoiceList(this, v19, figureSvtId, Item, v22);
  this->fields.voiceList = VoiceList;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v24, v25);
  myRoomFsm = *v16;
  if ( !*v16 )
    goto LABEL_13;
  VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)myRoomFsm, 0LL);
  this->fields.asstName = VoiceAssetName;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v27, v28);
  asstName = this->fields.asstName;
  v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(
    v30,
    (Il2CppObject *)v9,
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 50, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.continueDeviceComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
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

  if ( (byte_4A499E3 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_setDefSvtPos__, method);
    byte_4A499E3 = 1;
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
    v5 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_setDefSvtPos__);
  v6 = (System_Reflection_MethodBase_o *)sub_1B8639C(v5, v5[4]);
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
        sub_1B86614(voicePlayBtn, method);
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
  bool v7; // w20

  moveBtnObj = this->fields.moveBtnObj;
  if ( !moveBtnObj )
    goto LABEL_6;
  v5 = isDisp;
  UnityEngine_GameObject__SetActive(moveBtnObj, isDisp, 0LL);
  moveBtnObj = this->fields.changeLimitBtn;
  if ( !moveBtnObj
    || (UnityEngine_GameObject__SetActive(moveBtnObj, v5, 0LL), (moveBtnObj = this->fields.helpBtn) == 0LL)
    || (v7 = isDisp,
        UnityEngine_GameObject__SetActive(moveBtnObj, v7, 0LL),
        (moveBtnObj = this->fields.changeBgButton) == 0LL) )
  {
LABEL_6:
    sub_1B86614(moveBtnObj, isDisp);
  }
  UnityEngine_GameObject__SetActive(moveBtnObj, v7, 0LL);
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
    sub_1B86614(titleBtnCollider, isEnabled);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 47, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.optionComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
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

  if ( (byte_4A499C9 & 1) == 0 )
  {
    sub_1B863B8(&Method_MyRoomControl_setMaterial__, isPlayDecideSe);
    byte_4A499C9 = 1;
  }
  MyRoomControl__stopSvtVoice(this, (const MethodInfo *)isPlayDecideSe);
  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, v5);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 42, 0, 0LL);
  this->fields.type = 1;
  MyRoomControl__setSvtFigureActive(this, 1, 1, v7);
  if ( isPlayDecideSe && !this->fields.sceneJumpInfo )
  {
    v8 = Method_MyRoomControl_setMaterial__;
    if ( (*((_BYTE *)Method_MyRoomControl_setMaterial__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B863D0(Method_MyRoomControl_setMaterial__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B8639C(v8, v8[4]);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 55, 0, 0LL),
        this->fields.type = 2,
        MyRoomControl__setSvtFigureActive(this, 2, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCollectionComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 54, 0, 0LL),
        this->fields.type = 11,
        MyRoomControl__setSvtFigureActive(this, 11, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.materialCostumeComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
  }
  MaterialCostumeComponent__showMenu((MaterialCostumeComponent_o *)titleInfo, 0LL);
}


void __fastcall MyRoomControl__setMaterialEventQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 58, 0, 0LL);
  this->fields.type = 14;
}


void __fastcall MyRoomControl__setMaterialMainInterlude(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 60, 0, 0LL);
  this->fields.type = 16;
}


void __fastcall MyRoomControl__setMaterialMainQuest(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 56, 0, 0LL);
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
    sub_1B86614(0LL, titleNameParam);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 57, titleNameParam, 0LL);
  this->fields.type = 13;
}


void __fastcall MyRoomControl__setMaterialServant(MyRoomControl_o *this, const MethodInfo *method)
{
  TitleInfoControl_o *titleInfo; // x0

  titleInfo = this->fields.titleInfo;
  if ( !titleInfo )
    sub_1B86614(0LL, method);
  TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 59, 0, 0LL);
  this->fields.type = 15;
}


void __fastcall MyRoomControl__setMaterialTop(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomStateMaterial_o *mStateMaterial; // x8

  mStateMaterial = this->fields.mStateMaterial;
  if ( !mStateMaterial )
    sub_1B86614(this, method);
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
    sub_1B86614(v6, v7);
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

  if ( (byte_4A499B2 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__setMySvtFigure_b__240_0__, v3);
    byte_4A499B2 = 1;
  }
  v4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_MyRoomControl__setMySvtFigure_b__240_0__, 0LL);
  MyRoomControl__SetMyRoomStandFigure(this, v4, v5);
}


void __fastcall MyRoomControl__setNormalFace(MyRoomControl_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MyRoomControl__setNormalFace_31887636(this, 1, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl__setNormalFace_31887636(MyRoomControl_o *this, bool isCurrent, const MethodInfo *method)
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

  if ( (byte_4A499BF & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, isCurrent);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v5);
    byte_4A499BF = 1;
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
                                (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
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
    sub_1B86614(materialImageIdList, isCurrent);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 48, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.noticeComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
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
    || (TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)mstpfObj, 1, 46, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (mstpfObj = (UnityEngine_GameObject_o *)this->fields.mstPfComp) == 0LL) )
  {
    sub_1B86614(mstpfObj, method);
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
    sub_1B86614(0LL, v4);
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
        goto LABEL_39;
      StandFigureBack__Fadein(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_39;
      MyRoomFrontObjectManager__FrameIn((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_15:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive(
        (UnityEngine_GameObject_o *)standFigureBack,
        !this->fields.isServantMaterial,
        0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 1, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_39;
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
    case 20:
      v6 = 0;
      goto LABEL_3;
    case 6:
      MainMenuBar__setMenuActive(0, 0LL, 0LL);
      if ( !callFadeIn )
        goto LABEL_26;
      standFigureBack = this->fields.standFigureBack;
      if ( !standFigureBack )
        goto LABEL_39;
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
        goto LABEL_39;
      StandFigureBack__Fadeout(standFigureBack, 0LL, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.frontObjectManager;
      if ( !standFigureBack )
        goto LABEL_39;
      MyRoomFrontObjectManager__FrameOut((MyRoomFrontObjectManager_o *)standFigureBack, 0LL);
LABEL_6:
      standFigureBack = (StandFigureBack_o *)this->fields.voicePlayBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.moveBtnObj;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.changeLimitBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      standFigureBack = (StandFigureBack_o *)this->fields.helpBtn;
      if ( !standFigureBack )
        goto LABEL_39;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, 0, 0LL);
      v9 = 0;
      isEnableMultipleView = 0LL;
      break;
    default:
      goto LABEL_26;
  }
  standFigureBack = (StandFigureBack_o *)this->fields.multipleViewButton;
  if ( !standFigureBack )
    goto LABEL_39;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
  MyRoomControl__SetMultipleViewButtonColor(this, v11);
  standFigureBack = (StandFigureBack_o *)this->fields.photoCampaignButton;
  isEnableMultipleView = v9 && (unsigned __int64)this->fields.isEnablePhotoCampaign;
  if ( !standFigureBack
    || ((UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL),
         MyRoomControl__SetPhotoCampaignButtonColor(this, v12),
         standFigureBack = (StandFigureBack_o *)this->fields.changeBgButton,
         !v9)
      ? (isEnableMultipleView = 0LL)
      : (isEnableMultipleView = this->fields.isEnableChangeBg),
        !standFigureBack) )
  {
LABEL_39:
    sub_1B86614(standFigureBack, isEnableMultipleView);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)standFigureBack, isEnableMultipleView, 0LL);
}


int32_t __fastcall MyRoomControl__setSvtFriendShipLv(MyRoomControl_o *this, int32_t hSvtId, const MethodInfo *method)
{
  MyRoomData_o *myRoomData; // x0

  myRoomData = this->fields.myRoomData;
  if ( !myRoomData )
    sub_1B86614(0LL, hSvtId);
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
  struct System_Collections_Generic_List_ServantVoiceData____o *VoiceList; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_String_o *VoiceAssetName; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_String_o *asstName; // x20
  System_Action_o *v24; // x21
  const MethodInfo *v25; // x3
  struct SceneJumpInfo_o *sceneJumpInfo; // x8
  Il2CppObject *Instance; // x20
  AvalonSceneManager_c *v28; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v30; // x21
  Il2CppObject *v31; // x22
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3

  if ( (byte_4A499B0 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v5);
    sub_1B863B8(&Method_MyRoomControl_EndLoad__, v6);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    sub_1B863B8(&Method_MyRoomControl___c__setSvtVoiceData_b__238_0__, v8);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, v10);
    byte_4A499B0 = 1;
  }
  if ( this->fields.mBattleSetupInfo )
  {
    myRoomFsm = this->fields.myRoomFsm;
    if ( myRoomFsm )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
      return;
    }
LABEL_22:
    sub_1B86614(myRoomFsm, method);
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
             (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
    VoiceList = MyRoomControl__GetVoiceList(this, v13, figureSvtId, Item, v16);
    this->fields.voiceList = VoiceList;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.voiceList, (int32_t)VoiceList, v18, v19);
    VoiceAssetName = ServantVoiceEntity__getVoiceAssetName(v13, 0LL);
    this->fields.asstName = VoiceAssetName;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.asstName, (int32_t)VoiceAssetName, v21, v22);
    asstName = this->fields.asstName;
    v24 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v24, (Il2CppObject *)this, Method_MyRoomControl_EndLoad__, 0LL);
    MyRoomControl__voiceLoad(this, asstName, v24, v25);
  }
  else
  {
    sceneJumpInfo = this->fields.sceneJumpInfo;
    this->fields.isExistVoiceData = 0;
    if ( !sceneJumpInfo )
    {
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = AvalonSceneManager_TypeInfo;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
        v28 = AvalonSceneManager_TypeInfo;
      }
      myRoomFsm = MyRoomControl___c_TypeInfo;
      DEFAULT_FADE_TIME = v28->static_fields->DEFAULT_FADE_TIME;
      if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
        myRoomFsm = MyRoomControl___c_TypeInfo;
      }
      v30 = *(System_Action_o **)(*((_QWORD *)myRoomFsm + 23) + 24LL);
      if ( !v30 )
      {
        if ( !*((_DWORD *)myRoomFsm + 56) )
        {
          j_il2cpp_runtime_class_init_0(myRoomFsm);
          myRoomFsm = MyRoomControl___c_TypeInfo;
        }
        v31 = (Il2CppObject *)**((_QWORD **)myRoomFsm + 23);
        v30 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(v30, v31, Method_MyRoomControl___c__setSvtVoiceData_b__238_0__, 0LL);
        static_fields = MyRoomControl___c_TypeInfo->static_fields;
        static_fields->__9__238_0 = v30;
        sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__238_0, (int32_t)v30, v33, v34);
      }
      if ( !Instance )
        goto LABEL_22;
      CommonUI__maskFadein((CommonUI_o *)Instance, DEFAULT_FADE_TIME, v30, 0LL);
    }
    myRoomFsm = this->fields.myRoomFsm;
    if ( !myRoomFsm )
      goto LABEL_22;
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)myRoomFsm, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 45, 0, 0LL),
        this->fields.type = 17,
        MyRoomControl__setSvtFigureActive(this, 17, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.userServantCoinComp) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
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

  if ( (byte_4A499C8 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl_TypeInfo, method);
    byte_4A499C8 = 1;
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
    sub_1B86614(multipleViewButton, method);
  }
  TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)multipleViewButton, 1, 41, 0, 0LL);
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
    || (TitleInfoControl__changeTitleInfo_38093432(titleInfo, 1, 44, 0, 0LL),
        MyRoomControl__setSvtFigureActive(this, this->fields.type, 1, v5),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL)
    || (UserItemListViewManager__CreateList((UserItemListViewManager_o *)titleInfo, 0LL),
        (titleInfo = (TitleInfoControl_o *)this->fields.usrItemListViewManager) == 0LL) )
  {
    sub_1B86614(titleInfo, v3);
  }
  UserItemListViewManager__SetMode_31571604((UserItemListViewManager_o *)titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl__set_IsGallery(MyRoomControl_o *this, bool value, const MethodInfo *method)
{
  this->fields._IsGallery_k__BackingField = value;
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
  sub_1B8635C(
    (CGThumbnailListItem_o *)moveTarget,
    (int32_t)materialObj,
    (int32_t)moveShowPos,
    (const MethodInfo *)moveHidePos);
  transform = *moveTarget;
  if ( !*moveTarget
    || (transform = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(transform, 0LL)) == 0LL )
  {
    sub_1B86614(transform, v9);
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
    sub_1B86614(this, moveTarget);
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
    sub_1B86614(this, moveTarget);
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
  struct UserGameEntity_o *SelfUserGame; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  MyRoomData_o *myRoomData; // x0
  struct UserGameEntity_o *usrData; // x8
  __int64 favoriteUserSvtId; // x1
  struct System_Collections_Generic_List_int__o *imageIdList; // x8
  int v18; // w9
  MyRoomData_o *v19; // x21
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x22
  __int64 v21; // x23
  struct System_Collections_Generic_List_int__o **p_imageIdList; // x20
  int32_t v23; // w22
  struct UserDeckMaster_o *usrDeckMst; // x23
  struct UserGameEntity_o *v25; // x24
  int32_t figureSvtId; // w23
  int32_t ImageLimitCount; // w23
  int32_t v28; // w23
  __int64 v29; // x8
  _QWORD *v30; // x9
  __int64 m_CancellationTokenSource_low; // x10
  const MethodInfo *v32; // x3
  struct System_Threading_CancellationTokenSource_o *v33; // x22
  __int64 v34; // x23
  MyRoomControl_o *v35; // x0
  const MethodInfo *v36; // x2
  struct System_Threading_CancellationTokenSource_o *v37; // x8
  MyRoomData_o *v38; // x22
  unsigned __int64 v39; // x23
  __int64 v40; // x8
  _QWORD *v41; // x9
  __int64 v42; // x10
  int32_t FigureImageLimitCount; // w21
  struct System_Collections_Generic_List_int__o *v44; // x8
  int v45; // w21
  int32_t v46; // w22
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v47; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v48; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v49; // 0:x0.16

  if ( (byte_4A499A0 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantLimitImageMaster___, method);
    sub_1B863B8(&ImageLimitCount_TypeInfo, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Add__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Clear__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__Contains__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Count__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v8);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v9);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v10);
    byte_4A499A0 = 1;
  }
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  this->fields.usrData = SelfUserGame;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v12, v13);
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
  p_imageIdList = &this->fields.imageIdList;
  this->fields.figureSvtId = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v47, 0LL);
  v23 = 0;
  this->fields.isHeroine = UserServantEntity__IsHeroine((UserServantEntity_o *)v19, 0LL);
  while ( 1 )
  {
    v25 = v19[1].fields.usrData;
    usrDeckMst = v19[1].fields.usrDeckMst;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v48.fields.currentCryptoKey = v25;
    *(_QWORD *)&v48.fields.fakeValue = usrDeckMst;
    if ( v23 > CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v48, 0LL) )
      break;
    figureSvtId = this->fields.figureSvtId;
    if ( !ImageLimitCount_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ImageLimitCount_TypeInfo);
    ImageLimitCount = ImageLimitCount__GetImageLimitCount(figureSvtId, v23, 0LL);
    myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                   (DataManager_o *)myRoomData,
                                   (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
    if ( !myRoomData )
      goto LABEL_48;
    myRoomData = (MyRoomData_o *)ServantLimitImageMaster__GetServantImageLimitSealAfter(
                                   (ServantLimitImageMaster_o *)myRoomData,
                                   this->fields.figureSvtId,
                                   ImageLimitCount,
                                   0LL);
    if ( !this->fields.imageIdList )
      goto LABEL_48;
    v28 = (int)myRoomData;
    if ( !System_Collections_Generic_List_int___Contains(
            this->fields.imageIdList,
            (int32_t)myRoomData,
            (const MethodInfo_35DFCAC *)Method_System_Collections_Generic_List_int__Contains__) )
    {
      myRoomData = (MyRoomData_o *)*p_imageIdList;
      if ( !*p_imageIdList )
        goto LABEL_48;
      v29 = *(_QWORD *)&myRoomData->fields.m_CachedPtr;
      v30 = Method_System_Collections_Generic_List_int__Add__;
      ++HIDWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( !v29 )
        goto LABEL_48;
      m_CancellationTokenSource_low = SLODWORD(myRoomData->fields.m_CancellationTokenSource);
      if ( (unsigned int)m_CancellationTokenSource_low >= *(_DWORD *)(v29 + 24) )
      {
        System_Collections_Generic_List_int___AddWithResize(
          (System_Collections_Generic_List_int__o *)myRoomData,
          v28,
          *(const MethodInfo_35DF934 **)(*(_QWORD *)(v30[4] + 192LL) + 112LL));
      }
      else
      {
        LODWORD(myRoomData->fields.m_CancellationTokenSource) = m_CancellationTokenSource_low + 1;
        *(_DWORD *)(v29 + 4 * m_CancellationTokenSource_low + 32) = v28;
      }
    }
    ++v23;
  }
  if ( UserServantEntity__IsHeroine((UserServantEntity_o *)v19, 0LL)
    || (myRoomData = (MyRoomData_o *)UserServantEntity__isLimitCountMax((UserServantEntity_o *)v19, 0LL),
        ((unsigned __int8)myRoomData & 1) != 0) )
  {
    v34 = *(_QWORD *)&v19[1].fields.m_CachedPtr;
    v33 = v19[1].fields.m_CancellationTokenSource;
    if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
    *(_QWORD *)&v49.fields.currentCryptoKey = v34;
    *(_QWORD *)&v49.fields.fakeValue = v33;
    v35 = (MyRoomControl_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v49, 0LL);
    myRoomData = (MyRoomData_o *)MyRoomControl__GetSortedCostumeIds(v35, (int32_t)v35, v36);
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
            sub_1B8661C(myRoomData, favoriteUserSvtId);
          favoriteUserSvtId = *((unsigned int *)&v38->fields.usrData + v39);
          if ( (int)favoriteUserSvtId >= 1 )
          {
            myRoomData = (MyRoomData_o *)*p_imageIdList;
            if ( !*p_imageIdList )
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
                *(const MethodInfo_35DF934 **)(*(_QWORD *)(v41[4] + 192LL) + 112LL));
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
    sub_1B86614(myRoomData, favoriteUserSvtId);
  }
LABEL_41:
  MyRoomControl__AddSpecialImageLimitCount(
    (MyRoomControl_o *)myRoomData,
    &this->fields.imageIdList,
    this->fields.figureSvtId,
    v32);
  FigureImageLimitCount = UserServantEntity__getFigureImageLimitCount((UserServantEntity_o *)v19, 0, 0LL);
  myRoomData = (MyRoomData_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !myRoomData )
    goto LABEL_48;
  myRoomData = (MyRoomData_o *)DataManager__GetMasterData_object_(
                                 (DataManager_o *)myRoomData,
                                 (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantLimitImageMaster___);
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
                                   (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
    if ( (_DWORD)myRoomData == v45 )
    {
      this->fields.figureSvtDispIdx = v46;
      return;
    }
    v44 = *p_imageIdList;
    ++v46;
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
  struct UserGameEntity_o *SelfUserGame; // x0
  struct UserGameEntity_o **p_usrData; // x22
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  UserServantCollectionMaster_o *v28; // x20
  int64_t userId; // x21
  __int64 v30; // x23
  __int64 v31; // x24
  __int128 v32; // q1
  _DWORD *v33; // x26
  int64_t pushUserSvtId; // x8
  int64_t v35; // x0
  __int128 v36; // q1
  int64_t v37; // x23
  int32_t v38; // w24
  int32_t v39; // w25
  int32_t v40; // w27
  int32_t v41; // w28
  bool IsLock; // w29
  char v43; // w20
  int32_t commonFlag; // w22
  int32_t battleVoice; // w26
  int32_t randomSettingOwn; // w21
  int32_t v47; // w0
  __int64 v48; // x8
  int32_t randomSettingSupport; // w19
  int32_t imageLimitCount; // [xsp+54h] [xbp-DCh]
  int64_t v51; // [xsp+58h] [xbp-D8h]
  int64_t v52; // [xsp+60h] [xbp-D0h]
  CardFavoriteRequest_o *Request_object; // [xsp+68h] [xbp-C8h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v54; // [xsp+70h] [xbp-C0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v55; // [xsp+90h] [xbp-A0h] BYREF
  CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_o v56; // [xsp+B0h] [xbp-80h]
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v57; // 0:x0.16
  CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_o v58; // 0:x0.16

  if ( (byte_4A499A2 & 1) == 0 )
  {
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantCollectionMaster___, method);
    sub_1B863B8(&Method_DataManager_GetMasterData_UserServantMaster___, v3);
    sub_1B863B8(&Method_MyRoomControl__setupSvtRand_b__222_0__, v4);
    sub_1B863B8(&Method_NetworkManager_getRequest_CardFavoriteRequest___, v5);
    sub_1B863B8(&NetworkManager_TypeInfo, v6);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo, v7);
    sub_1B863B8(&CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo, v8);
    sub_1B863B8(&OptionManager_TypeInfo, v9);
    sub_1B863B8(&NetworkManager_ResultCallbackFunc_TypeInfo, v10);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v11);
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v12);
    byte_4A499A2 = 1;
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  if ( !OptionManager__GetSvtRand(0LL) || this->fields.mBattleSetupInfo )
  {
    limitCountSupport = this->fields.myRoomFsm;
    if ( limitCountSupport )
    {
      PlayMakerFSM__SendEvent((PlayMakerFSM_o *)limitCountSupport, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
      return;
    }
LABEL_36:
    sub_1B86614(limitCountSupport, v13);
  }
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantMaster___);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = UserServantMaster__getOrganizationList((UserServantMaster_o *)limitCountSupport, 0LL);
  if ( !limitCountSupport )
    goto LABEL_36;
  v15 = *((_DWORD *)limitCountSupport + 6);
  v16 = limitCountSupport;
  do
  {
    IsLeave = UnityEngine_Random__Range_69316044(0, v15, 0LL);
    if ( (unsigned int)IsLeave >= v16[6] )
LABEL_35:
      sub_1B8661C(IsLeave, v13);
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
  v23 = (NetworkManager_ResultCallbackFunc_o *)sub_1B86604(NetworkManager_ResultCallbackFunc_TypeInfo);
  NetworkManager_ResultCallbackFunc___ctor(
    v23,
    (Il2CppObject *)this,
    Method_MyRoomControl__setupSvtRand_b__222_0__,
    0LL);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  Request_object = (CardFavoriteRequest_o *)NetworkManager__getRequest_object_(
                                              v23,
                                              (const MethodInfo_2FF4AF4 *)Method_NetworkManager_getRequest_CardFavoriteRequest___);
  SelfUserGame = UserGameMaster__getSelfUserGame(0LL);
  p_usrData = &this->fields.usrData;
  this->fields.usrData = SelfUserGame;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.usrData, (int32_t)SelfUserGame, v26, v27);
  limitCountSupport = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !limitCountSupport )
    goto LABEL_36;
  limitCountSupport = DataManager__GetMasterData_object_(
                        (DataManager_o *)limitCountSupport,
                        (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_UserServantCollectionMaster___);
  if ( !*p_usrData )
    goto LABEL_36;
  v28 = (UserServantCollectionMaster_o *)limitCountSupport;
  userId = (*p_usrData)->fields.userId;
  v31 = *(_QWORD *)&v22->fields.svtId.fields.currentCryptoKey;
  v30 = *(_QWORD *)&v22->fields.svtId.fields.fakeValue;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo);
  *(_QWORD *)&v57.fields.currentCryptoKey = v31;
  *(_QWORD *)&v57.fields.fakeValue = v30;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v57, 0LL);
  if ( !v28 )
    goto LABEL_36;
  limitCountSupport = UserServantCollectionMaster__GetEntityDefinitely(v28, userId, (int32_t)limitCountSupport, 0LL);
  if ( !*p_usrData )
    goto LABEL_36;
  v32 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v33 = limitCountSupport;
  pushUserSvtId = (*p_usrData)->fields.pushUserSvtId;
  *(_OWORD *)&v56.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v56.fields.fakeValue = v32;
  v52 = pushUserSvtId;
  if ( !CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CodeStage_AntiCheat_ObscuredTypes_ObscuredLong_TypeInfo);
  v55 = v56;
  v35 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v55, 0LL);
  v36 = *(_OWORD *)&v22->fields.id.fields.fakeValue;
  v37 = v35;
  *(_OWORD *)&v54.fields.currentCryptoKey = *(_OWORD *)&v22->fields.id.fields.currentCryptoKey;
  *(_OWORD *)&v54.fields.fakeValue = v36;
  v51 = CodeStage_AntiCheat_ObscuredTypes_ObscuredLong__op_Implicit_47437768(&v54, 0LL);
  imageLimitCount = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                      v22->fields.imageLimitCount,
                      0LL);
  v38 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.dispLimitCount, 0LL);
  v39 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.commandCardLimitCount, 0LL);
  v40 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.iconLimitCount, 0LL);
  v41 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.portraitLimitCount, 0LL);
  IsLock = UserServantEntity__IsLock(v22, 0LL);
  limitCountSupport = (void *)UserServantEntity__IsChoice(v22, 0LL);
  if ( !v33 )
    goto LABEL_36;
  v43 = (char)limitCountSupport;
  commonFlag = v33[19];
  battleVoice = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.battleVoice, 0LL);
  randomSettingOwn = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                       v22->fields.randomLimitCount,
                       0LL);
  v47 = CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v22->fields.randomLimitCountSupport, 0LL);
  v48 = *(_QWORD *)&v22->fields.limitCountSupport.fields.currentCryptoKey;
  *(_QWORD *)&v58.fields.fakeValue = *(_QWORD *)&v22->fields.limitCountSupport.fields.fakeValue;
  randomSettingSupport = v47;
  *(_QWORD *)&v58.fields.currentCryptoKey = v48;
  limitCountSupport = (void *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(v58, 0LL);
  if ( !Request_object )
    goto LABEL_36;
  CardFavoriteRequest__beginRequest(
    Request_object,
    v51,
    imageLimitCount,
    v38,
    v39,
    v40,
    v41,
    1,
    IsLock,
    v43 & 1,
    commonFlag,
    battleVoice,
    randomSettingOwn,
    randomSettingSupport,
    (int32_t)limitCountSupport,
    v52 == v37,
    0LL);
}


void __fastcall MyRoomControl__shutdown(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A499AD & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A499AD = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  MissionNotifyManager__RemoveNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__startUp(MyRoomControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A499AC & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonTemplate_MissionNotifyManager__get_Instance__, method);
    byte_4A499AC = 1;
  }
  Instance = SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_MissionNotifyManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  MissionNotifyManager__AddNoDisplayMissionCondType((MissionNotifyManager_o *)Instance, 39, 0LL);
}


void __fastcall MyRoomControl__stopSvtVoice(MyRoomControl_o *this, const MethodInfo *method)
{
  MyRoomSvtControl_o *svtCtr; // x0
  const MethodInfo *v4; // x2

  svtCtr = this->fields.svtCtr;
  if ( !svtCtr )
    sub_1B86614(0LL, method);
  MyRoomSvtControl__stopVoice(svtCtr, 0LL);
  MyRoomControl__setNormalFace_31887636(this, 1, v4);
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
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3

  if ( (byte_4A499DF & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl__svtVoicePlayAct_d__344_TypeInfo, item);
    byte_4A499DF = 1;
  }
  v5 = sub_1B86604(MyRoomControl__svtVoicePlayAct_d__344_TypeInfo);
  MyRoomControl__svtVoicePlayAct_d__344___ctor((MyRoomControl__svtVoicePlayAct_d__344_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_1B86614(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v8, v9);
  *(_QWORD *)(v5 + 40) = item;
  sub_1B8635C((CGThumbnailListItem_o *)(v5 + 40), (int32_t)item, v10, v11);
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
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  NetworkManager_c *v19; // x0
  Il2CppObject *Instance; // x21
  System_Action_o *v21; // x22

  if ( (byte_4A499AF & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetName);
    sub_1B863B8(&NetworkManager_TypeInfo, v7);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__, v9);
    sub_1B863B8(&MyRoomControl___c__DisplayClass237_0_TypeInfo, v10);
    byte_4A499AF = 1;
  }
  v11 = sub_1B86604(MyRoomControl___c__DisplayClass237_0_TypeInfo);
  MyRoomControl___c__DisplayClass237_0___ctor((MyRoomControl___c__DisplayClass237_0_o *)v11, 0LL);
  if ( !v11 )
    goto LABEL_13;
  *(_QWORD *)(v11 + 16) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 16), (int32_t)this, v14, v15);
  *(_QWORD *)(v11 + 24) = endCallback;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 24), (int32_t)endCallback, v16, v17);
  this->fields.isVoiceLoading = 1;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4A49A45 )
  {
    sub_1B863B8(&NetworkManager_TypeInfo, v18);
    byte_4A49A45 = 1;
  }
  v19 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v19 = NetworkManager_TypeInfo;
  }
  if ( !v19->static_fields->isRebootBlock )
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    v21 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)v11, Method_MyRoomControl___c__DisplayClass237_0__voiceLoad_b__0__, 0LL);
    if ( Instance )
    {
      SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, assetName, v21, 1, 0LL);
      return;
    }
LABEL_13:
    sub_1B86614(v12, v13);
  }
}


void __fastcall MyRoomControl_BackGroundSaveData___ctor(
        MyRoomControl_BackGroundSaveData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
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


void __fastcall MyRoomControl__CaptureServant_d__418___ctor(
        MyRoomControl__CaptureServant_d__418_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__CaptureServant_d__418__MoveNext(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  int32_t _1__state; // w8
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
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
  _BOOL4 isOneShot; // w26
  int v28; // w27
  int v29; // w24
  int v30; // w25
  int v31; // w27
  int32_t v32; // w0
  int v33; // w8
  UnityEngine_Color_array *Pixels_69243220; // x25
  UnityEngine_Texture2D_o *v35; // x24
  UnityEngine_GameObject_o *gameObject; // x0
  float v37; // s0
  System_Collections_IEnumerator_o *started; // x0

  if ( (byte_4A49A6A & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Texture2D_TypeInfo, v3);
    sub_1B863B8(&TouchEffectManager_TypeInfo, v4);
    sub_1B863B8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v5);
    byte_4A49A6A = 1;
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
    isOneShot = _4__this->fields.isOneShot;
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
    v33 = isOneShot ? 11 : 1;
    Pixels_69243220 = UnityEngine_Texture2D__GetPixels_69243220(v14, v30, v33 * v29 / v32 + v31, v22, v23, 0LL);
    v35 = (UnityEngine_Texture2D_o *)sub_1B86604(UnityEngine_Texture2D_TypeInfo);
    UnityEngine_Texture2D___ctor_69244344(v35, v22, v23, 3, 0, 0LL);
    if ( !v35 )
      goto LABEL_35;
    UnityEngine_Texture2D__SetPixels_69245424(v35, Pixels_69243220, 0LL);
    UnityEngine_Texture2D__Apply_69246196(v35, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    ((void (__fastcall *)(UIRect_o *, UnityEngine_Texture2D_o *, void *))height->klass[1]._1.parent)(
      height,
      v35,
      height->klass[1]._1.generic_class);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292((UnityEngine_Object_o *)v14, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
      goto LABEL_35;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)height, 0LL);
    v37 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v37 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v37, 0LL);
    height = (UIRect_o *)_4__this->fields.photoCampaignScreenshot;
    if ( !height )
LABEL_35:
      sub_1B86614(height, v16);
    UIWidget__set_width((UIWidget_o *)height, this->fields.width, 0LL);
    if ( !TouchEffectManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TouchEffectManager_TypeInfo);
    TouchEffectManager__SetBlock(0, 0LL);
    started = MyRoomControl__StartCameraEffect(_4__this, 0LL);
    UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B86604(UnityEngine_WaitForEndOfFrame_TypeInfo);
    UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
    this->fields.__2__current = (Il2CppObject *)v7;
    sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v7, v8, v9);
    result = 1;
    this->fields.__1__state = 1;
    return result;
  }
  return 0;
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__418__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__CaptureServant_d__418__System_Collections_IEnumerator_Reset(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__CaptureServant_d__418_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__CaptureServant_d__418__System_Collections_IEnumerator_get_Current(
        MyRoomControl__CaptureServant_d__418_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__CaptureServant_d__418__System_IDisposable_Dispose(
        MyRoomControl__CaptureServant_d__418_o *this,
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
  const MethodInfo *v15; // x3

  if ( (byte_4A49A6B & 1) == 0 )
  {
    sub_1B863B8(&System_Func_bool__TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v5);
    byte_4A49A6B = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
LABEL_11:
      sub_1B86614(Instance, v9);
    CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
    ActionExtensions__Call(this->fields.setEndAction, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_11;
  v10 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v11 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v11, _4__this, Method_MyRoomControl__CoWaitForConstructingRecordWithServant_b__292_0__, 0LL);
  v12 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v12, v11, 0LL);
  this->fields.__2__current = (Il2CppObject *)v12;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v12, v14, v15);
  *((_DWORD *)p__2__current - 2) = 1;
  return v10;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__CoWaitForConstructingRecordWithServant_d__292_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  __int64 v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  TerminalSceneComponent_c *v12; // x0
  struct TerminalSceneComponent_StaticFields *static_fields; // x8
  struct TerminalSceneComponent_o *mInstance; // x1
  UnityEngine_Object_o *v15; // x21
  System_Collections_IEnumerator_o *v16; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  bool result; // w0
  struct TerminalSceneComponent_o *terminal_5__2; // x8
  BackTaskAmountAdjuster_o *v22; // x20
  System_Collections_IEnumerator_o *v23; // x0

  v3 = this;
  if ( (byte_4A49A6C & 1) == 0 )
  {
    sub_1B863B8(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v4);
    sub_1B863B8(&Method_SingletonTemplate_QuestTree__get_Instance__, v5);
    this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)sub_1B863B8(&TerminalSceneComponent_TypeInfo, v6);
    byte_4A49A6C = 1;
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
    if ( !byte_4A48DB8 )
    {
      sub_1B863B8(&TerminalSceneComponent_TypeInfo, v9);
      byte_4A48DB8 = 1;
    }
    v12 = TerminalSceneComponent_TypeInfo;
    if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
      v12 = TerminalSceneComponent_TypeInfo;
    }
    static_fields = v12->static_fields;
    mInstance = static_fields->mInstance;
    v3->fields._terminal_5__2 = static_fields->mInstance;
    sub_1B8635C((CGThumbnailListItem_o *)&v3->fields._terminal_5__2, (int32_t)mInstance, v10, v11);
    v15 = (UnityEngine_Object_o *)v3->fields._terminal_5__2;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)SingletonTemplate_object___get_Instance((const MethodInfo_3839AA0 *)Method_SingletonTemplate_QuestTree__get_Instance__);
      if ( this )
      {
        v16 = QuestTree__Init((QuestTree_o *)this, 0LL, 0LL);
        v3->fields.__2__current = (Il2CppObject *)v16;
        p__2__current = (CGThumbnailListItem_o *)&v3->fields.__2__current;
        sub_1B8635C(p__2__current, (int32_t)v16, v18, v19);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_26:
      sub_1B86614(this, method);
    }
  }
  v22 = (BackTaskAmountAdjuster_o *)sub_1B86604(BackTaskAmountAdjuster_TypeInfo);
  BackTaskAmountAdjuster___ctor(v22, 0LL);
  if ( !_4__this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)_4__this->fields.mStateMaterial;
  if ( !this )
    goto LABEL_26;
  this = (MyRoomControl__InitMaterialOnBackground_d__286_o *)MyRoomStateMaterial__ConstructMaterialDataGradually(
                                                               (MyRoomStateMaterial_o *)this,
                                                               method);
  if ( !v22 )
    goto LABEL_26;
  v23 = BackTaskAmountAdjuster__Execute(v22, (System_Collections_IEnumerator_o *)this, 0LL);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v23, 0LL);
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__InitMaterialOnBackground_d__286_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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
  const MethodInfo *v17; // x3
  BackTaskAmountAdjuster_o *v18; // x20
  System_Collections_IEnumerator_o *v19; // x0

  if ( (byte_4A49A6D & 1) == 0 )
  {
    sub_1B863B8(&BackTaskAmountAdjuster_TypeInfo, method);
    sub_1B863B8(&System_Func_bool__TypeInfo, v3);
    sub_1B863B8(&Method_MyRoomControl__InitServantMenu_b__289_0__, v4);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v6);
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v7);
    byte_4A49A6D = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( Instance )
    {
      CommonUI__SetLoadMode(Instance, 0, 0LL);
      if ( _4__this )
      {
        if ( !_4__this->fields.isRecordWithServantInitialized )
        {
          _4__this->fields.isRecordWithServantInitialized = 1;
          v18 = (BackTaskAmountAdjuster_o *)sub_1B86604(BackTaskAmountAdjuster_TypeInfo);
          BackTaskAmountAdjuster___ctor(v18, 0LL);
          Instance = (CommonUI_o *)_4__this->fields.mStateMaterial;
          if ( !Instance )
            goto LABEL_17;
          Instance = (CommonUI_o *)MyRoomStateMaterial__InitRecordWithServant((MyRoomStateMaterial_o *)Instance, v11);
          if ( !v18 )
            goto LABEL_17;
          v19 = BackTaskAmountAdjuster__Execute(v18, (System_Collections_IEnumerator_o *)Instance, 0LL);
          UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)_4__this, v19, 0LL);
        }
        Instance = (CommonUI_o *)_4__this->fields.myRoomFsm;
        if ( Instance )
        {
          PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
          return 0;
        }
      }
    }
LABEL_17:
    sub_1B86614(Instance, v11);
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_17;
  v12 = 1;
  CommonUI__SetLoadMode(Instance, 1, 0LL);
  v13 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v13, (Il2CppObject *)_4__this, Method_MyRoomControl__InitServantMenu_b__289_0__, 0LL);
  v14 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v14, v13, 0LL);
  this->fields.__2__current = (Il2CppObject *)v14;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v14, v16, v17);
  *((_DWORD *)p__2__current - 2) = 1;
  return v12;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__InitServantMenu_d__289_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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


void __fastcall MyRoomControl__LoadMultipleServant_d__381___ctor(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MyRoomControl__LoadMultipleServant_d__381__MoveNext(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
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
  struct MyRoomControl___c__DisplayClass381_0_o **p__8__1; // x27
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x1
  struct StandFigureBack_array *multipleStandFigureBacks; // x8
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct StandFigureBack_array *v28; // x8
  __int64 v29; // x19
  __int64 v30; // x22
  __int64 v31; // x24
  int max_length; // w9
  struct UnityEngine_Vector3_array *defaultMultipleServantPoses; // x8
  float *v34; // x8
  const MethodInfo *v35; // x2
  struct System_Int64_array *multipleServantUsrIds; // x8
  struct System_Int32_array *multipleLimitCounts; // x8
  int32_t v38; // w20
  int32_t v39; // w23
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct ServantScriptMultipleEntity_array *v42; // x26
  ServantScriptMultipleEntity_o *v43; // x25
  struct StandFigureBack_array *v44; // x8
  __int64 v45; // x25
  __int64 v46; // x19
  struct MyRoomControl_o *v47; // x24
  struct MyRoomControl___c__DisplayClass381_0_o *v48; // x28
  struct MyRoomControl___c__DisplayClass381_0_o **v49; // x21
  int32_t v50; // w5
  StandFigureBack_o *v51; // x26
  System_Action_o *_9__3; // x27
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  struct TitleInfoControl_o *titleInfo; // x8
  struct StandFigureBack_array *v56; // x8
  __int64 v57; // x19
  int v58; // w9
  unsigned int v59; // w25
  struct StandFigureBack_array *v60; // x8
  UnityEngine_Component_o *v61; // x8
  UnityEngine_Component_o *v62; // x21
  float v63; // s2
  float v64; // s1
  float v65; // s8
  float v66; // s10
  float v67; // s9
  float v68; // s0
  struct ServantScriptMultipleEntity_array *multipleEntities_5__2; // x8
  __int64 v70; // x8
  float v71; // s10
  struct StandFigureBack_array *v72; // x9
  int v73; // s14
  int v74; // s15
  float v75; // s0
  float v76; // s2
  struct StandFigureBack_array *v77; // x8
  float v78; // s11
  float v79; // s12
  struct StandFigureBack_array *v80; // x8
  struct StandFigureBack_array *v81; // x8
  System_String_o *v82; // x2
  struct MyRoomControl___c__DisplayClass381_0_o *_8__1; // x21
  MultipleViewComponent_o *multipleViewComponent; // x20
  System_Action_o *v85; // x22
  Il2CppObject *v86; // x20
  System_Func_bool__o *v87; // x21
  UnityEngine_WaitWhile_o *v88; // x20
  int32_t v89; // w2
  const MethodInfo *v90; // x3
  struct ServantScriptMultipleEntity_array *v91; // x8
  unsigned int v92; // w9
  ServantScriptMultipleEntity_o *v93; // x10
  ServantScriptMultipleEntity_o *v94; // x8
  Il2CppObject *v95; // x20
  System_Func_bool__o *v96; // x21
  UnityEngine_WaitWhile_o *v97; // x20
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 v100; // x0
  struct ServantScriptMultipleEntity_array **p_multipleEntities_5__2; // [xsp+18h] [xbp-C8h]
  int32_t v102; // [xsp+24h] [xbp-BCh]
  MyRoomControl__LoadMultipleServant_d__381_o *v103; // [xsp+28h] [xbp-B8h]
  ServantScriptMultipleEntity_o *entity; // [xsp+30h] [xbp-B0h] BYREF
  __int64 formId; // [xsp+38h] [xbp-A8h] BYREF
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4

  v103 = this;
  if ( (byte_4A49A6E & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_ServantScriptMultipleMaster___, v2);
    sub_1B863B8(&DataManager_TypeInfo, v3);
    sub_1B863B8(&System_Func_bool__TypeInfo, v4);
    sub_1B863B8(&int___TypeInfo, v5);
    sub_1B863B8(&ServantScriptMultipleEntity___TypeInfo, v6);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__0__, v7);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__1__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__2__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__3__, v10);
    sub_1B863B8(&MyRoomControl___c__DisplayClass381_0_TypeInfo, v11);
    sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v12);
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1B863B8(&StringLiteral_6672/*"FinishedFadeMultipleServant"*/, v13);
    byte_4A49A6E = 1;
  }
  entity = 0LL;
  formId = 0LL;
  _1__state = v103->fields.__1__state;
  _4__this = v103->fields.__4__this;
  if ( _1__state != 2 )
  {
    if ( _1__state == 1 )
    {
      _8__1 = v103->fields.__8__1;
      v103->fields.__1__state = -1;
      if ( _8__1 )
      {
        _8__1->fields.wait = 1;
        if ( _4__this )
        {
          multipleViewComponent = _4__this->fields.multipleViewComponent;
          v85 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            v85,
            (Il2CppObject *)_8__1,
            Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__1__,
            0LL);
          if ( multipleViewComponent )
          {
            MultipleViewComponent__CancelMultipleViewWindow(multipleViewComponent, v85, 0LL);
            v86 = (Il2CppObject *)v103->fields.__8__1;
            v87 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
            System_Func_bool____ctor(
              v87,
              v86,
              Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__2__,
              0LL);
            v88 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
            UnityEngine_WaitWhile___ctor(v88, v87, 0LL);
            v103->fields.__2__current = (Il2CppObject *)v88;
            sub_1B8635C((CGThumbnailListItem_o *)&v103->fields.__2__current, (int32_t)v88, v89, v90);
            v103->fields.__1__state = 2;
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
      v103->fields.__1__state = -1;
      v17 = (Il2CppObject *)sub_1B86604(MyRoomControl___c__DisplayClass381_0_TypeInfo);
      System_Object___ctor(v17, 0LL);
      v103->fields.__8__1 = (struct MyRoomControl___c__DisplayClass381_0_o *)v17;
      p__8__1 = &v103->fields.__8__1;
      sub_1B8635C((CGThumbnailListItem_o *)&v103->fields.__8__1, (int32_t)v17, v19, v20);
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)v103->fields.__8__1;
      if ( this )
      {
        v23 = (Il2CppObject *)v103->fields.__4__this;
        this->fields.__2__current = v23;
        sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__2__current, (int32_t)v23, v21, v22);
        if ( _4__this )
        {
          this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.mBlocker;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
            if ( *p__8__1 )
            {
              (*p__8__1)->fields.loadedCount = 0;
              multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks;
              if ( multipleStandFigureBacks )
              {
                v25 = sub_1B86460(ServantScriptMultipleEntity___TypeInfo, multipleStandFigureBacks->max_length);
                v103->fields._multipleEntities_5__2 = (struct ServantScriptMultipleEntity_array *)v25;
                p_multipleEntities_5__2 = &v103->fields._multipleEntities_5__2;
                sub_1B8635C((CGThumbnailListItem_o *)&v103->fields._multipleEntities_5__2, v25, v26, v27);
                v28 = _4__this->fields.multipleStandFigureBacks;
                if ( v28 )
                {
                  v29 = 0LL;
                  v30 = 0LL;
                  v31 = 32LL;
                  while ( 1 )
                  {
                    max_length = v28->max_length;
                    if ( (int)v30 >= max_length )
                      break;
                    if ( (unsigned int)v30 >= max_length )
                      goto LABEL_104;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)v28->m_Items[v30];
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                                            (UnityEngine_Component_o *)this,
                                                                            0LL);
                    defaultMultipleServantPoses = _4__this->fields.defaultMultipleServantPoses;
                    if ( !defaultMultipleServantPoses )
                      goto LABEL_83;
                    if ( (unsigned int)v30 >= defaultMultipleServantPoses->max_length )
                      goto LABEL_104;
                    if ( !this )
                      goto LABEL_83;
                    v34 = (float *)((char *)defaultMultipleServantPoses + v29);
                    v106.fields.z = v34[10] + 0.0;
                    v106.fields.y = v34[9] + 0.0;
                    v106.fields.x = flt_BC1FF0[(_DWORD)v30 == 0] + v34[8];
                    UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v106, 0LL);
                    multipleServantUsrIds = _4__this->fields.multipleServantUsrIds;
                    if ( !multipleServantUsrIds )
                      goto LABEL_83;
                    if ( (unsigned int)v30 >= multipleServantUsrIds->max_length )
                      goto LABEL_104;
                    if ( !_4__this->fields.myRoomData )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)MyRoomData__getUsrSvtData(
                                                                            (MyRoomData_o *)this,
                                                                            multipleServantUsrIds->m_Items[v30],
                                                                            v35);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UserServantEntity__getSvtId(
                                                                            (UserServantEntity_o *)this,
                                                                            0LL);
                    multipleLimitCounts = _4__this->fields.multipleLimitCounts;
                    if ( !multipleLimitCounts )
                      goto LABEL_83;
                    if ( (unsigned int)v30 >= multipleLimitCounts->max_length )
                      goto LABEL_104;
                    v38 = multipleLimitCounts->m_Items[v30 + 1];
                    v39 = (int)this;
                    MyRoomControl__SetImageIdAndFormId(
                      _4__this,
                      (int32_t *)&formId + 1,
                      (int32_t *)&formId,
                      (int32_t)this,
                      v38,
                      0LL);
                    if ( !DataManager_TypeInfo->_2.cctor_finished )
                      j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_ServantScriptMultipleMaster___);
                    if ( !this )
                      goto LABEL_83;
                    this = (MyRoomControl__LoadMultipleServant_d__381_o *)ServantScriptMultipleMaster__TryGetEntity(
                                                                            (ServantScriptMultipleMaster_o *)this,
                                                                            &entity,
                                                                            SHIDWORD(formId),
                                                                            formId,
                                                                            v30 + 1,
                                                                            0LL);
                    if ( ((unsigned __int8)this & 1) != 0 )
                    {
                      v42 = *p_multipleEntities_5__2;
                      if ( !*p_multipleEntities_5__2 )
                        goto LABEL_83;
                      v43 = entity;
                      if ( entity )
                      {
                        this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1B864F4(
                                                                                entity,
                                                                                v42->obj.klass->_1.element_class);
                        if ( !this )
                        {
                          v100 = sub_1B86638();
                          sub_1B864E0(v100, 0LL);
                        }
                      }
                      if ( (unsigned int)v30 >= v42->max_length )
                        goto LABEL_104;
                      v42->m_Items[v30] = v43;
                      sub_1B8635C((CGThumbnailListItem_o *)((char *)v42 + v31), (int32_t)v43, v40, v41);
                    }
                    v44 = _4__this->fields.multipleStandFigureBacks;
                    if ( !v44 )
                      goto LABEL_83;
                    if ( (unsigned int)v30 >= v44->max_length )
                      goto LABEL_104;
                    v45 = v29;
                    v46 = v31;
                    v47 = _4__this;
                    v48 = *p__8__1;
                    if ( *p__8__1 )
                    {
                      v49 = p__8__1;
                      v50 = formId;
                      v51 = v44->m_Items[v30];
                      _9__3 = v48->fields.__9__3;
                      if ( !_9__3 )
                      {
                        v102 = formId;
                        _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
                        System_Action___ctor(
                          _9__3,
                          (Il2CppObject *)v48,
                          Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__3__,
                          0LL);
                        v48->fields.__9__3 = _9__3;
                        sub_1B8635C((CGThumbnailListItem_o *)&v48->fields.__9__3, (int32_t)_9__3, v53, v54);
                        v50 = v102;
                      }
                      if ( v51 )
                      {
                        StandFigureBack__SetMyRoomStandFigure(v51, v39, v38, 1, 0, v50, 10, _9__3, 0, 0LL);
                        v28 = v47->fields.multipleStandFigureBacks;
                        _4__this = v47;
                        v31 = v46 + 8;
                        ++v30;
                        v29 = v45 + 12;
                        p__8__1 = v49;
                        if ( v28 )
                          continue;
                      }
                    }
                    goto LABEL_83;
                  }
                  this = (MyRoomControl__LoadMultipleServant_d__381_o *)sub_1B86460(int___TypeInfo, 2LL);
                  v91 = *p_multipleEntities_5__2;
                  if ( *p_multipleEntities_5__2 )
                  {
                    v92 = v91->max_length;
                    if ( !v92 )
                      goto LABEL_104;
                    v93 = v91->m_Items[0];
                    if ( v93 )
                    {
                      if ( !this )
                        goto LABEL_83;
                      if ( !LODWORD(this->fields.__2__current) )
                        goto LABEL_104;
                      LODWORD(this->fields.__4__this) = v93->fields.depth;
                    }
                    if ( v92 <= 1 )
                      goto LABEL_104;
                    v94 = v91->m_Items[1];
                    if ( v94 )
                    {
                      if ( this )
                      {
                        if ( LODWORD(this->fields.__2__current) <= 1 )
                          goto LABEL_104;
                        HIDWORD(this->fields.__4__this) = v94->fields.depth;
LABEL_101:
                        if ( LODWORD(this->fields.__2__current) >= 2 )
                        {
                          MyRoomControl__SetLayerMultipleServant(
                            _4__this,
                            SLODWORD(this->fields.__4__this) < SHIDWORD(this->fields.__4__this),
                            0LL);
                          v95 = (Il2CppObject *)v103->fields.__8__1;
                          v96 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
                          System_Func_bool____ctor(
                            v96,
                            v95,
                            Method_MyRoomControl___c__DisplayClass381_0__LoadMultipleServant_b__0__,
                            0LL);
                          v97 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
                          UnityEngine_WaitWhile___ctor(v97, v96, 0LL);
                          v103->fields.__2__current = (Il2CppObject *)v97;
                          sub_1B8635C((CGThumbnailListItem_o *)&v103->fields.__2__current, (int32_t)v97, v98, v99);
                          result = 1;
                          v103->fields.__1__state = 1;
                          return result;
                        }
LABEL_104:
                        sub_1B8661C(this, method);
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
    sub_1B86614(this, method);
  }
  v103->fields.__1__state = -1;
  if ( !_4__this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.titleInfo;
  if ( !this )
    goto LABEL_83;
  TitleInfoControl__changeTitleInfo_38093432((TitleInfoControl_o *)this, 1, 0, 0, 0LL);
  titleInfo = _4__this->fields.titleInfo;
  if ( !titleInfo )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)titleInfo->fields.titleImg;
  if ( !this )
    goto LABEL_83;
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  this = (MyRoomControl__LoadMultipleServant_d__381_o *)_4__this->fields.multipleViewCloseButton;
  _4__this->fields.multipleViewState = 2;
  if ( !this )
    goto LABEL_83;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v56 = _4__this->fields.multipleStandFigureBacks;
  if ( !v56 )
    goto LABEL_83;
  v57 = 4LL;
  while ( 1 )
  {
    v58 = v56->max_length;
    v59 = v57 - 4;
    if ( (int)v57 - 4 >= v58 )
      return 0;
    if ( v59 >= v58 )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v56->obj.klass + v57);
    if ( !this )
      goto LABEL_83;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)StandFigureBack__GetSvtStandFigure(
                                                            (StandFigureBack_o *)this,
                                                            0,
                                                            0LL);
    if ( !this )
      goto LABEL_83;
    v60 = _4__this->fields.multipleStandFigureBacks;
    if ( !v60 )
      goto LABEL_83;
    if ( v59 >= v60->max_length )
      goto LABEL_104;
    v61 = (UnityEngine_Component_o *)*((_QWORD *)&v60->obj.klass + v57);
    if ( !v61 )
      goto LABEL_83;
    v62 = (UnityEngine_Component_o *)this->fields.__4__this;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(v61, 0LL);
    if ( !this )
      goto LABEL_83;
    *(UnityEngine_Vector3_o *)(&v63 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v65 = v64;
    v66 = (_DWORD)v57 == 4 ? -256.0 : 256.0;
    if ( !v62 )
      goto LABEL_83;
    v67 = v63;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(v62, 0LL);
    if ( !this )
      goto LABEL_83;
    LODWORD(v68) = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    multipleEntities_5__2 = v103->fields._multipleEntities_5__2;
    if ( !multipleEntities_5__2 )
      goto LABEL_83;
    if ( v59 >= multipleEntities_5__2->max_length )
      goto LABEL_104;
    v70 = *((_QWORD *)&multipleEntities_5__2->obj.klass + v57);
    v71 = v66 - v68;
    if ( v70 )
    {
      v72 = _4__this->fields.multipleStandFigureBacks;
      if ( !v72 )
        goto LABEL_83;
      if ( v59 >= v72->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v72->obj.klass + v57);
      if ( !this )
        goto LABEL_83;
      v73 = *(_DWORD *)(v70 + 28);
      v74 = *(_DWORD *)(v70 + 32);
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      *(UnityEngine_Vector3_o *)&v75 = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
      v77 = _4__this->fields.multipleStandFigureBacks;
      if ( !v77 )
        goto LABEL_83;
      if ( v59 >= v77->max_length )
        goto LABEL_104;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v77->obj.klass + v57);
      if ( !this )
        goto LABEL_83;
      v78 = v75;
      v79 = v76;
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_transform(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      if ( !this )
        goto LABEL_83;
      v65 = v65 + (float)v74;
      v71 = v71 + (float)v73;
      v107.fields.x = v78;
      v107.fields.y = v65;
      v107.fields.z = v79;
      v67 = v67 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)this, v107, 0LL);
    }
    v80 = _4__this->fields.multipleStandFigureBacks;
    if ( !v80 )
      goto LABEL_83;
    if ( v59 >= v80->max_length )
      goto LABEL_104;
    this = (MyRoomControl__LoadMultipleServant_d__381_o *)*((_QWORD *)&v80->obj.klass + v57);
    if ( this )
    {
      this = (MyRoomControl__LoadMultipleServant_d__381_o *)UnityEngine_Component__get_gameObject(
                                                              (UnityEngine_Component_o *)this,
                                                              0LL);
      v81 = _4__this->fields.multipleStandFigureBacks;
      if ( v81 )
      {
        v82 = v59 == v81->max_length - 1 ? (System_String_o *)StringLiteral_6672/*"FinishedFadeMultipleServant"*/ : 0LL;
        v108.fields.x = v71;
        v108.fields.y = v65;
        v108.fields.z = v67;
        MyRoomControl__moveControl(_4__this, (UnityEngine_GameObject_o *)this, v108, v82, 0LL);
        v56 = _4__this->fields.multipleStandFigureBacks;
        ++v57;
        if ( v56 )
          continue;
      }
    }
    goto LABEL_83;
  }
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__381__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadMultipleServant_d__381__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__LoadMultipleServant_d__381_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadMultipleServant_d__381__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadMultipleServant_d__381__System_IDisposable_Dispose(
        MyRoomControl__LoadMultipleServant_d__381_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__LoadPhotoTarget_d__409___ctor(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__LoadPhotoTarget_d__409__MoveNext(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__LoadPhotoTarget_d__409_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v27; // x22
  struct MyRoomControl___c__DisplayClass409_0_o **p__8__1; // x21
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *photoMasterTexture; // x21
  MyRoomControl__LoadPhotoTarget_d__409_o **p_photoMasterTexture; // x20
  UnityEngine_Object_o *gameObject; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  UnityEngine_WaitForFixedUpdate_o *v36; // x20
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  bool result; // w0
  struct PhotoStandFigureComponent_o *photoStandFigure_5__3; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  MyRoomControl__LoadPhotoTarget_d__409_o *v45; // x21
  float v46; // s0
  struct MyRoomControl___c__DisplayClass409_0_o *_8__1; // x8
  struct MyRoomControl___c__DisplayClass409_0_o *v48; // x21
  PhotoStandFigureComponent_o *v49; // x20
  System_Action_o *_9__4; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v53; // x21
  System_Func_bool__o *_9__5; // x20
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  UnityEngine_WaitWhile_o *v57; // x21
  CGThumbnailListItem_o *v58; // x19
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  int v61; // w8
  struct MyRoomControl___c__DisplayClass409_0_o *v62; // x23
  System_Action_o *_9__6; // x22
  PhotoStandFigureComponent_o *v64; // x21
  int32_t v65; // w2
  const MethodInfo *v66; // x3
  struct System_Int32_array *photoTargetFaceListIndex; // x8
  __int64 i_5__2; // x9
  struct MyRoomControl___c__DisplayClass409_0_o *v69; // x21
  System_Func_bool__o *_9__7; // x20
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  UnityEngine_WaitWhile_o *v73; // x21
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  struct PhotoStandFigureComponent_o *photoStaffFigure_5__5; // x8
  float v77; // s8
  float v78; // s9
  float v79; // s10
  MyRoomControl__LoadPhotoTarget_d__409_o *v80; // x21
  float v81; // s0
  int32_t v82; // w2
  const MethodInfo *v83; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v84; // x21
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *v86; // x22
  Il2CppObject *v87; // x20
  System_Func_bool__o *v88; // x21
  UnityEngine_WaitWhile_o *v89; // x20
  int32_t v90; // w2
  const MethodInfo *v91; // x3
  struct PhotoStandFigureComponent_array *v92; // x8
  __int64 v93; // x9
  struct PhotoStandFigureComponent_o *v94; // x1
  struct PhotoStandFigureComponent_o **p_photoStaffFigure_5__5; // x20
  int32_t faceId; // w21
  struct MyRoomControl___c__DisplayClass409_0_o *v97; // x22
  System_Action_o *_9__10; // x24
  int32_t v99; // w21
  int32_t v100; // w2
  const MethodInfo *v101; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v102; // x21
  System_Func_bool__o *_9__11; // x20
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  UnityEngine_WaitWhile_o *v106; // x21
  int32_t v107; // w2
  const MethodInfo *v108; // x3
  struct PhotoStandFigureComponent_array *photoStandFigures; // x8
  __int64 v110; // x9
  struct PhotoStandFigureComponent_o *v111; // x1
  struct PhotoStandFigureComponent_o **p_photoStandFigure_5__3; // x21
  const MethodInfo *v113; // x2
  int32_t ImageLimitCount_k__BackingField; // w22
  int32_t v115; // w21
  struct PhotoStandFigureComponent_o *v116; // x8
  struct MyRoomControl___c__DisplayClass409_0_o *v117; // x26
  StandFigureBack_o *photoStandFigureBack; // x24
  int32_t formId_5__4; // w23
  System_Action_o *_9__2; // x25
  int32_t v121; // w2
  const MethodInfo *v122; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v123; // x21
  System_Func_bool__o *_9__3; // x20
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  UnityEngine_WaitWhile_o *v127; // x21
  int32_t v128; // w2
  const MethodInfo *v129; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v130; // x23
  struct PhotoStandFigureComponent_o *v131; // x8
  StandFigureBack_o *v132; // x20
  int32_t StandFigureImageId_k__BackingField; // w22
  System_Action_o *_9__8; // x24
  int32_t v135; // w2
  const MethodInfo *v136; // x3
  struct MyRoomControl___c__DisplayClass409_0_o *v137; // x21
  System_Func_bool__o *_9__9; // x20
  int32_t v139; // w2
  const MethodInfo *v140; // x3
  UnityEngine_WaitWhile_o *v141; // x21
  int32_t v142; // w2
  const MethodInfo *v143; // x3
  StaffPhotoCostumeEntity_o *costumeEntity; // [xsp+18h] [xbp-78h] BYREF
  int32_t imageId; // [xsp+2Ch] [xbp-64h] BYREF
  UnityEngine_Vector3_o v146; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v147; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A49A6F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_DataManager_GetMaster_StaffPhotoCostumeMaster___, v5);
    sub_1B863B8(&DataManager_TypeInfo, v6);
    sub_1B863B8(&System_Func_bool__TypeInfo, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__0__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__10__, v11);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__11__, v12);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__1__, v13);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__2__, v14);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__3__, v15);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__4__, v16);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__5__, v17);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__6__, v18);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__7__, v19);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__8__, v20);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__9__, v21);
    sub_1B863B8(&MyRoomControl___c__DisplayClass409_0_TypeInfo, v22);
    sub_1B863B8(&UnityEngine_WaitForFixedUpdate_TypeInfo, v23);
    sub_1B863B8(&UnityEngine_WaitWhile_TypeInfo, v24);
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)sub_1B863B8(&StringLiteral_6671/*"FinishedFadeInPhotoTarget"*/, v25);
    byte_4A49A6F = 1;
  }
  imageId = 0;
  costumeEntity = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v27 = (Il2CppObject *)sub_1B86604(MyRoomControl___c__DisplayClass409_0_TypeInfo);
      System_Object___ctor(v27, 0LL);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass409_0_o *)v27;
      p__8__1 = &v4->fields.__8__1;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v27, v29, v30);
      if ( !_4__this )
        goto LABEL_113;
      MyRoomControl__SetBackButtonIgnore(_4__this, 1, 0LL);
      if ( !*p__8__1 )
        goto LABEL_113;
      (*p__8__1)->fields.flag = 1;
      if ( !v4->fields.isUpdate )
        goto LABEL_64;
      photoMasterTexture = (UnityEngine_Object_o *)_4__this->fields.photoMasterTexture;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( !UnityEngine_Object__op_Inequality(photoMasterTexture, 0LL, 0LL) )
        goto LABEL_16;
      p_photoMasterTexture = (MyRoomControl__LoadPhotoTarget_d__409_o **)&_4__this->fields.photoMasterTexture;
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
      UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
      *p_photoMasterTexture = 0LL;
      sub_1B8635C((CGThumbnailListItem_o *)p_photoMasterTexture, 0, v34, v35);
LABEL_16:
      v36 = (UnityEngine_WaitForFixedUpdate_o *)sub_1B86604(UnityEngine_WaitForFixedUpdate_TypeInfo);
      UnityEngine_WaitForFixedUpdate___ctor(v36, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v36;
      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(p__2__current, (int32_t)v36, v38, v39);
      result = 1;
      LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
      return result;
    case 1:
      method = 0LL;
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
                                                          0LL);
      if ( !_4__this )
        goto LABEL_113;
      x = _4__this->fields.defaultPhotoServantPos.fields.x;
      y = _4__this->fields.defaultPhotoServantPos.fields.y;
      z = _4__this->fields.defaultPhotoServantPos.fields.z;
      v45 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v4->fields._i_5__2,
                                                          0LL);
      if ( !v45 )
        goto LABEL_113;
      v46 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
      v146.fields.x = x + v46;
      v146.fields.y = y + 0.0;
      v146.fields.z = z + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v45, v146, 0LL);
      _8__1 = v4->fields.__8__1;
      if ( !_8__1 )
        goto LABEL_113;
      _8__1->fields.flag = 1;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)v4->fields._photoStandFigure_5__3;
      if ( !this )
        goto LABEL_113;
      PhotoStandFigureComponent__GetPhotoTargetFaceList(
        (PhotoStandFigureComponent_o *)this,
        v4->fields._formId_5__4,
        0LL);
      v48 = v4->fields.__8__1;
      if ( !v48 )
        goto LABEL_113;
      v49 = v4->fields._photoStandFigure_5__3;
      _9__4 = v48->fields.__9__4;
      if ( !_9__4 )
      {
        _9__4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__4,
          (Il2CppObject *)v48,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__4__,
          0LL);
        v48->fields.__9__4 = _9__4;
        sub_1B8635C((CGThumbnailListItem_o *)&v48->fields.__9__4, (int32_t)_9__4, v51, v52);
      }
      if ( !v49 )
        goto LABEL_113;
      PhotoStandFigureComponent__PreLoadFormAssets(v49, _9__4, 0LL);
      v53 = v4->fields.__8__1;
      if ( !v53 )
        goto LABEL_113;
      _9__5 = v53->fields.__9__5;
      if ( !_9__5 )
      {
        _9__5 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__5,
          (Il2CppObject *)v53,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__5__,
          0LL);
        v53->fields.__9__5 = _9__5;
        sub_1B8635C((CGThumbnailListItem_o *)&v53->fields.__9__5, (int32_t)_9__5, v55, v56);
      }
      v57 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v57, _9__5, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v57;
      v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v58, (int32_t)v57, v59, v60);
      v61 = 3;
      goto LABEL_112;
    case 3:
      v62 = v4->fields.__8__1;
      v4->fields.__1__state = -1;
      if ( !v62 )
        goto LABEL_113;
      _9__6 = v62->fields.__9__6;
      v62->fields.flag = 1;
      v64 = v4->fields._photoStandFigure_5__3;
      if ( !_9__6 )
      {
        _9__6 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__6,
          (Il2CppObject *)v62,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__6__,
          0LL);
        v62->fields.__9__6 = _9__6;
        sub_1B8635C((CGThumbnailListItem_o *)&v62->fields.__9__6, (int32_t)_9__6, v65, v66);
      }
      if ( !_4__this )
        goto LABEL_113;
      photoTargetFaceListIndex = _4__this->fields.photoTargetFaceListIndex;
      if ( !photoTargetFaceListIndex )
        goto LABEL_113;
      i_5__2 = v4->fields._i_5__2;
      if ( (unsigned int)i_5__2 >= photoTargetFaceListIndex->max_length )
        goto LABEL_114;
      if ( !v64 )
        goto LABEL_113;
      PhotoStandFigureComponent__SetFacePhotoServant(v64, 0, _9__6, photoTargetFaceListIndex->m_Items[i_5__2 + 1], 0LL);
      v69 = v4->fields.__8__1;
      if ( !v69 )
        goto LABEL_113;
      _9__7 = v69->fields.__9__7;
      if ( !_9__7 )
      {
        _9__7 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__7,
          (Il2CppObject *)v69,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__7__,
          0LL);
        v69->fields.__9__7 = _9__7;
        sub_1B8635C((CGThumbnailListItem_o *)&v69->fields.__9__7, (int32_t)_9__7, v71, v72);
      }
      v73 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v73, _9__7, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v73;
      v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v58, (int32_t)v73, v74, v75);
      v61 = 4;
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
                                                          0LL);
      if ( !_4__this )
        goto LABEL_113;
      v77 = _4__this->fields.defaultPhotoServantPos.fields.x;
      v78 = _4__this->fields.defaultPhotoServantPos.fields.y;
      v79 = _4__this->fields.defaultPhotoServantPos.fields.z;
      v80 = this;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomControl__IsRightPosPhotoTarget(
                                                          _4__this,
                                                          v4->fields._i_5__2,
                                                          0LL);
      if ( !v80 )
        goto LABEL_113;
      if ( ((unsigned __int8)this & 1) != 0 )
        v81 = 1300.0;
      else
        v81 = -1812.0;
      v147.fields.x = v77 + v81;
      v147.fields.y = v78 + 0.0;
      v147.fields.z = v79 + 0.0;
      UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v80, v147, 0LL);
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
    v4->fields._photoStandFigure_5__3 = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._photoStandFigure_5__3, 0, v2, v3);
    v4->fields._photoStaffFigure_5__5 = 0LL;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._photoStaffFigure_5__5, 0, v82, v83);
    method = (const MethodInfo *)(unsigned int)(v4->fields._i_5__2 + 1);
    v4->fields._i_5__2 = (int)method;
LABEL_61:
    if ( !_4__this )
      goto LABEL_113;
    if ( (int)method >= 2 )
    {
      MyRoomControl__SetLayerChangeObj(_4__this, 0LL);
LABEL_64:
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)_4__this->fields.photoServantSelectMenu;
      if ( !this )
        goto LABEL_113;
      this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
                                                          (UnityEngine_Behaviour_o *)this,
                                                          0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v84 = v4->fields.__8__1;
        if ( !v84 )
          goto LABEL_113;
        v84->fields.flag = 1;
        photoServantSelectMenu = _4__this->fields.photoServantSelectMenu;
        v86 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          v86,
          (Il2CppObject *)v84,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__0__,
          0LL);
        if ( !photoServantSelectMenu )
          goto LABEL_113;
        PhotoServantSelectMenu__Close(photoServantSelectMenu, v86, 0LL);
        v87 = (Il2CppObject *)v4->fields.__8__1;
        v88 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(v88, v87, Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__1__, 0LL);
        v89 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v89, v88, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v89;
        v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v58, (int32_t)v89, v90, v91);
        v61 = 7;
        goto LABEL_112;
      }
LABEL_69:
      _4__this->fields.photoState = 2;
      MyRoomControl__FadeInPhotoTarget(_4__this, (System_String_o *)StringLiteral_6671/*"FinishedFadeInPhotoTarget"*/, 0, 0LL);
      return 0;
    }
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)_4__this->fields.photoTargetList;
    if ( !this )
      goto LABEL_113;
    this = (MyRoomControl__LoadPhotoTarget_d__409_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                        (System_Collections_Generic_List_T__o *)this,
                                                        (int32_t)method,
                                                        (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
    if ( (_DWORD)this == 2 )
      break;
    if ( (_DWORD)this == 1 )
    {
      v97 = v4->fields.__8__1;
      if ( !v97 )
        goto LABEL_113;
      _9__10 = v97->fields.__9__10;
      v97->fields.flag = 1;
      v99 = v4->fields._i_5__2;
      if ( !_9__10 )
      {
        _9__10 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__10,
          (Il2CppObject *)v97,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__10__,
          0LL);
        v97->fields.__9__10 = _9__10;
        sub_1B8635C((CGThumbnailListItem_o *)&v97->fields.__9__10, (int32_t)_9__10, v100, v101);
      }
      MyRoomControl__CreatePhotoMasterFigure(_4__this, v99, _9__10, 0LL);
      v102 = v4->fields.__8__1;
      if ( !v102 )
        goto LABEL_113;
      _9__11 = v102->fields.__9__11;
      if ( !_9__11 )
      {
        _9__11 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
        System_Func_bool____ctor(
          _9__11,
          (Il2CppObject *)v102,
          Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__11__,
          0LL);
        v102->fields.__9__11 = _9__11;
        sub_1B8635C((CGThumbnailListItem_o *)&v102->fields.__9__11, (int32_t)_9__11, v104, v105);
      }
      v106 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
      UnityEngine_WaitWhile___ctor(v106, _9__11, 0LL);
      v4->fields.__2__current = (Il2CppObject *)v106;
      v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v58, (int32_t)v106, v107, v108);
      v61 = 6;
      goto LABEL_112;
    }
    if ( !(_DWORD)this )
    {
      photoStandFigures = _4__this->fields.photoStandFigures;
      if ( !photoStandFigures )
        goto LABEL_113;
      v110 = v4->fields._i_5__2;
      if ( (unsigned int)v110 < photoStandFigures->max_length )
      {
        v111 = photoStandFigures->m_Items[v110];
        v4->fields._photoStandFigure_5__3 = v111;
        p_photoStandFigure_5__3 = &v4->fields._photoStandFigure_5__3;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._photoStandFigure_5__3, (int32_t)v111, v2, v3);
        if ( !v4->fields._photoStandFigure_5__3 )
          goto LABEL_113;
        if ( !_4__this->fields.myRoomData )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__409_o *)MyRoomData__getUsrSvtData(
                                                            (MyRoomData_o *)this,
                                                            v4->fields._photoStandFigure_5__3->fields._UserSvtId_k__BackingField,
                                                            v113);
        if ( !this )
          goto LABEL_113;
        this = (MyRoomControl__LoadPhotoTarget_d__409_o *)UserServantEntity__getSvtId((UserServantEntity_o *)this, 0LL);
        if ( !*p_photoStandFigure_5__3 )
          goto LABEL_113;
        ImageLimitCount_k__BackingField = (*p_photoStandFigure_5__3)->fields._ImageLimitCount_k__BackingField;
        v115 = (int)this;
        MyRoomControl__SetImageIdAndFormId(
          _4__this,
          &imageId,
          &v4->fields._formId_5__4,
          (int32_t)this,
          ImageLimitCount_k__BackingField,
          0LL);
        v116 = v4->fields._photoStandFigure_5__3;
        if ( !v116 )
          goto LABEL_113;
        v116->fields._StandFigureImageId_k__BackingField = imageId;
        v117 = v4->fields.__8__1;
        if ( !v117 )
          goto LABEL_113;
        photoStandFigureBack = v116->fields.photoStandFigureBack;
        formId_5__4 = v4->fields._formId_5__4;
        _9__2 = v117->fields.__9__2;
        if ( !_9__2 )
        {
          _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
          System_Action___ctor(
            _9__2,
            (Il2CppObject *)v117,
            Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__2__,
            0LL);
          v117->fields.__9__2 = _9__2;
          sub_1B8635C((CGThumbnailListItem_o *)&v117->fields.__9__2, (int32_t)_9__2, v121, v122);
        }
        if ( !photoStandFigureBack )
          goto LABEL_113;
        StandFigureBack__SetMyRoomStandFigure(
          photoStandFigureBack,
          v115,
          ImageLimitCount_k__BackingField,
          1,
          0,
          formId_5__4,
          10,
          _9__2,
          !_4__this->fields.isOneShot,
          0LL);
        v123 = v4->fields.__8__1;
        if ( !v123 )
          goto LABEL_113;
        _9__3 = v123->fields.__9__3;
        if ( !_9__3 )
        {
          _9__3 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
          System_Func_bool____ctor(
            _9__3,
            (Il2CppObject *)v123,
            Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__3__,
            0LL);
          v123->fields.__9__3 = _9__3;
          sub_1B8635C((CGThumbnailListItem_o *)&v123->fields.__9__3, (int32_t)_9__3, v125, v126);
        }
        v127 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
        UnityEngine_WaitWhile___ctor(v127, _9__3, 0LL);
        v4->fields.__2__current = (Il2CppObject *)v127;
        v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v58, (int32_t)v127, v128, v129);
        v61 = 2;
        goto LABEL_112;
      }
LABEL_114:
      sub_1B8661C(this, method);
    }
  }
  v92 = _4__this->fields.photoStandFigures;
  if ( !v92 )
    goto LABEL_113;
  v93 = v4->fields._i_5__2;
  if ( (unsigned int)v93 >= v92->max_length )
    goto LABEL_114;
  v94 = v92->m_Items[v93];
  v4->fields._photoStaffFigure_5__5 = v94;
  p_photoStaffFigure_5__5 = &v4->fields._photoStaffFigure_5__5;
  sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._photoStaffFigure_5__5, (int32_t)v94, v2, v3);
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  this = (MyRoomControl__LoadPhotoTarget_d__409_o *)DataManager__GetMaster_object_((const MethodInfo_2F6DC64 *)Method_DataManager_GetMaster_StaffPhotoCostumeMaster___);
  if ( !*p_photoStaffFigure_5__5 || !this )
    goto LABEL_113;
  this = (MyRoomControl__LoadPhotoTarget_d__409_o *)StaffPhotoCostumeMaster__TryGetEntityByImageId(
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
  v130 = v4->fields.__8__1;
  if ( !v130 )
    goto LABEL_113;
  v130->fields.flag = 1;
  v131 = *p_photoStaffFigure_5__5;
  if ( !*p_photoStaffFigure_5__5 )
    goto LABEL_113;
  v132 = v131->fields.photoStandFigureBack;
  StandFigureImageId_k__BackingField = v131->fields._StandFigureImageId_k__BackingField;
  _9__8 = v130->fields.__9__8;
  if ( !_9__8 )
  {
    _9__8 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__8,
      (Il2CppObject *)v130,
      Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__8__,
      0LL);
    v130->fields.__9__8 = _9__8;
    sub_1B8635C((CGThumbnailListItem_o *)&v130->fields.__9__8, (int32_t)_9__8, v135, v136);
  }
  if ( !v132
    || (StandFigureBack__SetMyRoomStandFigureForImageId(
          v132,
          StandFigureImageId_k__BackingField,
          1,
          faceId,
          10,
          _9__8,
          0LL),
        (v137 = v4->fields.__8__1) == 0LL) )
  {
LABEL_113:
    sub_1B86614(this, method);
  }
  _9__9 = v137->fields.__9__9;
  if ( !_9__9 )
  {
    _9__9 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
    System_Func_bool____ctor(
      _9__9,
      (Il2CppObject *)v137,
      Method_MyRoomControl___c__DisplayClass409_0__LoadPhotoTarget_b__9__,
      0LL);
    v137->fields.__9__9 = _9__9;
    sub_1B8635C((CGThumbnailListItem_o *)&v137->fields.__9__9, (int32_t)_9__9, v139, v140);
  }
  v141 = (UnityEngine_WaitWhile_o *)sub_1B86604(UnityEngine_WaitWhile_TypeInfo);
  UnityEngine_WaitWhile___ctor(v141, _9__9, 0LL);
  v4->fields.__2__current = (Il2CppObject *)v141;
  v58 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  sub_1B8635C(v58, (int32_t)v141, v142, v143);
  v61 = 5;
LABEL_112:
  LODWORD(v58[-1].fields._ThumbnailSpritePath_k__BackingField) = v61;
  return 1;
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoTarget_d__409__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__LoadPhotoTarget_d__409__System_Collections_IEnumerator_Reset(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__LoadPhotoTarget_d__409_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__LoadPhotoTarget_d__409__System_Collections_IEnumerator_get_Current(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__LoadPhotoTarget_d__409__System_IDisposable_Dispose(
        MyRoomControl__LoadPhotoTarget_d__409_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl__StartCameraEffect_d__420___ctor(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__StartCameraEffect_d__420__MoveNext(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__StartCameraEffect_d__420_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t _1__state; // w8
  struct MyRoomControl_o *_4__this; // x19
  Il2CppObject *photoCampaignShutterEffect; // x21
  UnityEngine_Transform_o *transform; // x22
  UnityEngine_GameObject_o *v12; // x0
  UnityEngine_WaitForSeconds_o *v13; // x19
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  bool result; // w0
  int32_t v18; // w1
  UnityEngine_GameObject_o *gameObject; // x0
  float v20; // s0
  __int64 v21; // x1
  UnityEngine_GameObject_o *photoCampaignProduction; // x20
  UnityEngine_GameObject_o *v23; // x0
  struct TitleInfoControl_o *titleInfo; // x8
  CGThumbnailListItem_o *v25; // x20

  v4 = this;
  if ( (byte_4A49A70 & 1) == 0 )
  {
    sub_1B863B8(&Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___, method);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v5);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v6);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)sub_1B863B8(&UnityEngine_WaitForSeconds_TypeInfo, v7);
    byte_4A49A70 = 1;
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
                                                          0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isOneShot, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.takingPhotoFrameWideSprite;
    if ( !this )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
    if ( !this )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, !_4__this->fields.isOneShot, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v18 = _4__this->fields.isOneShot ? 362 : 870;
    UIWidget__set_width((UIWidget_o *)this, v18, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    v20 = 11.0;
    if ( !_4__this->fields.isOneShot )
      v20 = 1.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, v20, 0LL);
    photoCampaignProduction = _4__this->fields.photoCampaignProduction;
    if ( !byte_4A487E1 )
    {
      sub_1B863B8(&UnityEngine_Vector3_TypeInfo, v21);
      byte_4A487E1 = 1;
    }
    GameObjectExtensions__SetLocalPosition(
      photoCampaignProduction,
      UnityEngine_Vector3_TypeInfo->static_fields->zeroVector,
      0LL);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
    if ( !this )
      goto LABEL_37;
    v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    this = (MyRoomControl__StartCameraEffect_d__420_o *)TweenAlpha__Begin(v23, 0.4, 0.0, 0LL);
    titleInfo = _4__this->fields.titleInfo;
    if ( !titleInfo )
      goto LABEL_37;
    this = (MyRoomControl__StartCameraEffect_d__420_o *)titleInfo->fields.backBtn;
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
      v4->fields.__1__state = -1;
      if ( _4__this )
      {
        this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.shutterEffect;
        if ( this )
        {
          photoCampaignShutterEffect = (Il2CppObject *)_4__this->fields.photoCampaignShutterEffect;
          transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)this, 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Instantiate_object__50290416(
            photoCampaignShutterEffect,
            transform,
            (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
          GameObjectExtensions__SetLocalPositionX(_4__this->fields.photoCampaignProduction, 1500.0, 0LL);
          this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignProduction;
          if ( this )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
            this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoFrameSprite;
            if ( this )
            {
              this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                                    (UnityEngine_Component_o *)this,
                                                                    0LL);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoFrameWideSprite;
                if ( this )
                {
                  this = (MyRoomControl__StartCameraEffect_d__420_o *)UnityEngine_Component__get_gameObject(
                                                                        (UnityEngine_Component_o *)this,
                                                                        0LL);
                  if ( this )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
                    this = (MyRoomControl__StartCameraEffect_d__420_o *)_4__this->fields.photoCampaignFadeSprite;
                    if ( this )
                    {
                      v12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
                      GameObjectExtensions__SafeGetComponent_object_(
                        v12,
                        (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_TweenAlpha___);
                      v13 = (UnityEngine_WaitForSeconds_o *)sub_1B86604(UnityEngine_WaitForSeconds_TypeInfo);
                      UnityEngine_WaitForSeconds___ctor(v13, 0.066, 0LL);
                      v4->fields.__2__current = (Il2CppObject *)v13;
                      p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
                      sub_1B8635C(p__2__current, (int32_t)v13, v15, v16);
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
      sub_1B86614(this, method);
    }
    return 0;
  }
  v4->fields.__2__current = 0LL;
  v25 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
  LODWORD(v25[-1].fields._ThumbnailSpritePath_k__BackingField) = -1;
  sub_1B8635C(v25, 0, v2, v3);
  LODWORD(v25[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
  return 1;
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__420__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__StartCameraEffect_d__420__System_Collections_IEnumerator_Reset(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__StartCameraEffect_d__420_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__StartCameraEffect_d__420__System_Collections_IEnumerator_get_Current(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__StartCameraEffect_d__420__System_IDisposable_Dispose(
        MyRoomControl__StartCameraEffect_d__420_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A49A46 & 1) == 0 )
  {
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v1);
    byte_4A49A46 = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(MyRoomControl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MyRoomControl___c_TypeInfo->static_fields->__9 = (struct MyRoomControl___c_o *)v2;
  sub_1B8635C((CGThumbnailListItem_o *)MyRoomControl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
}


void __fastcall MyRoomControl___c___ctor(MyRoomControl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c___CheckCsUnlink_b__321_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A49 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  CommonUI__CloseAccountLinkageNotificationDialog((CommonUI_o *)Instance, 0LL, 0LL);
}


void __fastcall MyRoomControl___c___EndLoadPhotoAsset_b__401_0(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0LL )
    sub_1B86614(this, x);
  StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
}


void __fastcall MyRoomControl___c___EndLoad_b__239_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A48 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___GoToTitle_b__332_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A4A & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, method);
    byte_4A49A4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  ManagementManager__reboot((ManagementManager_o *)Instance, 0, 0, 0LL);
}


void __fastcall MyRoomControl___c___HidePhotoUi_b__437_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4A49A4D & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, x);
    byte_4A49A4D = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
      sub_1B86614(gameObject, v5);
    UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  }
}


void __fastcall MyRoomControl___c___OnClickChangeBg_b__450_1(MyRoomControl___c_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  AvalonSceneManager_c *v8; // x8
  CommonUI_o *v9; // x19
  MyRoomControl___c_c *v10; // x0
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *_9__450_2; // x20
  Il2CppObject *v13; // x21
  struct MyRoomControl___c_StaticFields *static_fields; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  if ( (byte_4A49A4F & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v2);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B863B8(&Method_MyRoomControl___c__OnClickChangeBg_b__450_2__, v4);
    sub_1B863B8(&MyRoomControl___c_TypeInfo, v5);
    byte_4A49A4F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = AvalonSceneManager_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v8 = AvalonSceneManager_TypeInfo;
  }
  v10 = MyRoomControl___c_TypeInfo;
  DEFAULT_FADE_TIME = v8->static_fields->DEFAULT_FADE_TIME;
  if ( !MyRoomControl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MyRoomControl___c_TypeInfo);
    v10 = MyRoomControl___c_TypeInfo;
  }
  _9__450_2 = v10->static_fields->__9__450_2;
  if ( !_9__450_2 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = MyRoomControl___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v10->static_fields->__9;
    _9__450_2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__450_2, v13, Method_MyRoomControl___c__OnClickChangeBg_b__450_2__, 0LL);
    static_fields = MyRoomControl___c_TypeInfo->static_fields;
    static_fields->__9__450_2 = _9__450_2;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__450_2, (int32_t)_9__450_2, v15, v16);
  }
  if ( !v9 )
    sub_1B86614(v10, v7);
  CommonUI__maskFadein(v9, DEFAULT_FADE_TIME, _9__450_2, 0LL);
}


void __fastcall MyRoomControl___c___OnClickChangeBg_b__450_2(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A50 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A50 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
}


void __fastcall MyRoomControl___c___OnClickDispPhotoUi_b__438_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v5; // x1

  if ( (byte_4A49A4E & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, x);
    byte_4A49A4E = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( ((unsigned __int8)gameObject & 1) != 0 )
  {
    if ( !x || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL)) == 0LL )
      sub_1B86614(gameObject, v5);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  }
}


bool __fastcall MyRoomControl___c___SaveDisplayOverWriteIds_b__456_0(
        MyRoomControl___c_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B86614(this, 0LL);
  return saveData->fields.groupId == 0;
}


void __fastcall MyRoomControl___c___SetLayerChangeObj_b__412_0(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A49A4B & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, x);
    byte_4A49A4B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1B86614(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
  }
}


void __fastcall MyRoomControl___c___TransitionMyRoomTop_b__425_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  PhotoStandFigureComponent__Init(x, 0LL);
}


void __fastcall MyRoomControl___c___TransitionMyRoomTop_b__425_2(
        MyRoomControl___c_o *this,
        PhotoLayerChangeComponent_o *x,
        const MethodInfo *method)
{
  _BOOL8 v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *gameObject; // x19

  if ( (byte_4A49A4C & 1) == 0 )
  {
    sub_1B863B8(&UnityEngine_Object_TypeInfo, x);
    byte_4A49A4C = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)x, 0LL, 0LL);
  if ( v4 )
  {
    if ( !x )
      sub_1B86614(v4, v5);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    UnityEngine_Object__Destroy_69356292(gameObject, 0LL);
  }
}


void __fastcall MyRoomControl___c___initMyRoom_b__217_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  ;
}


void __fastcall MyRoomControl___c___initMyRoom_b__217_1(
        MyRoomControl___c_o *this,
        PhotoStandFigureComponent_o *x,
        const MethodInfo *method)
{
  if ( !x || (this = (MyRoomControl___c_o *)x->fields.photoStandFigureBack) == 0LL )
    sub_1B86614(this, x);
  StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
}


void __fastcall MyRoomControl___c___setSvtVoiceData_b__238_0(MyRoomControl___c_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_4A49A47 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A47 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v3);
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
    sub_1B86614(this, method);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass241_0_o *v4; // x19
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
  const MethodInfo *v15; // x3

  v4 = this;
  if ( (byte_4A49A51 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    this = (MyRoomControl___c__DisplayClass241_0_o *)sub_1B863B8(
                                                       &Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__,
                                                       v5);
    byte_4A49A51 = 1;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this[1].fields.__9__1, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, (int32_t)this[20].monitor, 0, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v9->fields.svtClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v9->fields.isExistVoiceData, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_20;
  this = (MyRoomControl___c__DisplayClass241_0_o *)v10->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_20;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, v10->fields.isExistVoiceData, 0LL);
  this = (MyRoomControl___c__DisplayClass241_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_20;
  if ( LOBYTE(this[19].fields.end_act) )
    MyRoomControl__setNormalFace_31887636((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_20;
  favoriteChangeComp = v11->fields.favoriteChangeComp;
  _9__1 = v4->fields.__9__1;
  if ( !_9__1 )
  {
    _9__1 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(
      _9__1,
      (Il2CppObject *)v4,
      Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__1__,
      0LL);
    v4->fields.__9__1 = _9__1;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v14, v15);
  }
  if ( !favoriteChangeComp )
LABEL_20:
    sub_1B86614(this, method);
  FavoriteChangeComponent__cancelFavoriteWindow(favoriteChangeComp, _9__1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass241_0___SetMyRoomStandFigure_b__1(
        MyRoomControl___c__DisplayClass241_0_o *this,
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
  const MethodInfo *v11; // x3
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

  if ( (byte_4A49A52 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__, v3);
    sub_1B863B8(&StringLiteral_11106/*"ReleaseTouch"*/, v4);
    byte_4A49A52 = 1;
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
      (System_String_o *)StringLiteral_11106/*"ReleaseTouch"*/,
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
            _9__2 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
            System_Action___ctor(
              _9__2,
              (Il2CppObject *)this,
              Method_MyRoomControl___c__DisplayClass241_0__SetMyRoomStandFigure_b__2__,
              0LL);
            this->fields.__9__2 = _9__2;
            sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__2, (int32_t)_9__2, v10, v11);
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
    sub_1B86614(_4__this, method);
  }
  ActionExtensions__Call(this->fields.end_act, 0LL);
  v22 = this->fields.__4__this;
  if ( !v22 )
    goto LABEL_30;
  v22->fields.isSvtLoading = 0;
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
    sub_1B86614(_4__this, v3);
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
    sub_1B86614(this, method);
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


void __fastcall MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__1(
        MyRoomControl___c__DisplayClass243_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass243_0_o *v5; // x19
  __int64 v6; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v8; // x8
  StandFigureBack_o *standFigureBack; // x20
  int32_t servantId; // w21
  int32_t imageLimitCount; // w22
  int32_t formId; // w23
  System_Action_o *v13; // x24

  v5 = this;
  if ( (byte_4A49A54 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetData);
    this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1B863B8(
                                                       &Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__,
                                                       v6);
    byte_4A49A54 = 1;
  }
  if ( assetData )
  {
    _4__this = v5->fields.__4__this;
    if ( !_4__this )
      goto LABEL_9;
    _4__this->fields.combineAssetData = assetData;
    sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.combineAssetData, (int32_t)assetData, (int32_t)method, v3);
  }
  v8 = v5->fields.__4__this;
  if ( !v8
    || (standFigureBack = v8->fields.standFigureBack,
        servantId = v5->fields.servantId,
        imageLimitCount = v5->fields.imageLimitCount,
        formId = v5->fields.formId,
        v13 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo),
        System_Action___ctor(
          v13,
          (Il2CppObject *)v5,
          Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_g__OnEnd_0__,
          0LL),
        !standFigureBack) )
  {
LABEL_9:
    sub_1B86614(this, assetData);
  }
  StandFigureBack__SetMyRoomStandFigure(standFigureBack, servantId, imageLimitCount, 1, 0, formId, 10, v13, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_b__2(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  MyRoomControl_o *_4__this; // x0
  struct MyRoomControl_o *v5; // x8

  ActionExtensions__Call(this->fields.end_act, 0LL);
  _4__this = this->fields.__4__this;
  if ( !_4__this || (MyRoomControl__ReleaseTouch(_4__this, 0LL), (v5 = this->fields.__4__this) == 0LL) )
    sub_1B86614(_4__this, v3);
  v5->fields.isSvtLoading = 0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass243_0___SetMaterialSvtFigure_g__OnEnd_0(
        MyRoomControl___c__DisplayClass243_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass243_0_o *v4; // x19
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
  int32_t formId; // w8
  struct MyRoomControl_o *v17; // x8
  StandFigureBack_o *v18; // x20
  System_Action_o *v19; // x21
  struct MyRoomControl_o *v20; // x8
  unsigned int localPosition; // s0
  struct MyRoomControl_o *v22; // x8
  float v23; // s8
  int v24; // s1
  struct MyRoomControl_o *v25; // x8
  int v26; // s9
  int v27; // s2
  float v28; // s0
  int v29; // s1
  struct MyRoomControl_o *v30; // x8

  v4 = this;
  if ( (byte_4A49A53 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__2__, v5);
    this = (MyRoomControl___c__DisplayClass243_0_o *)sub_1B863B8(&StringLiteral_11106/*"ReleaseTouch"*/, v6);
    byte_4A49A53 = 1;
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
  sub_1B8635C((CGThumbnailListItem_o *)&this[1].fields.formId, (int32_t)standFigureCollectList, v2, v3);
  MainMenuBar__setMenuActive(1, 0LL, 0LL);
  v10 = v4->fields.__4__this;
  if ( !v10 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v10->fields.moveBtnObj;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v11 = v4->fields.__4__this;
  if ( !v11 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v11->fields.changeLimitBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v12->fields.helpBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v13 = v4->fields.__4__this;
  if ( !v13 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v13->fields.voicePlayBtn;
  if ( !this )
    goto LABEL_44;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v14->fields.svtClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  v15 = v4->fields.__4__this;
  if ( !v15 )
    goto LABEL_44;
  this = (MyRoomControl___c__DisplayClass243_0_o *)v15->fields.voiceClickCollider;
  if ( !this )
    goto LABEL_44;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)this, 0, 0LL);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  if ( LOBYTE(this[19].fields.end_act) )
    MyRoomControl__setNormalFace_31887636((MyRoomControl_o *)this, 0, 0LL);
  else
    MyRoomControl__setFaceType((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_44;
  formId = this[18].fields.formId;
  if ( formId == 1 )
  {
    this = (MyRoomControl___c__DisplayClass243_0_o *)this[3].fields.end_act;
    if ( !this )
      goto LABEL_44;
    StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
    v20 = v4->fields.__4__this;
    if ( !v20 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v20->fields.standFigureBack;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)StandFigureBack__GetSvtStandFigure(
                                                       (StandFigureBack_o *)this,
                                                       0,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    this = *(MyRoomControl___c__DisplayClass243_0_o **)&this->fields.servantId;
    if ( !this )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    localPosition = (unsigned int)UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
    v22 = v4->fields.__4__this;
    if ( !v22 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v22->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v23 = *(float *)&localPosition;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v24 - 1) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    v25 = v4->fields.__4__this;
    if ( !v25 )
      goto LABEL_44;
    this = (MyRoomControl___c__DisplayClass243_0_o *)v25->fields.svtObj;
    if ( !this )
      goto LABEL_44;
    v26 = v24;
    this = (MyRoomControl___c__DisplayClass243_0_o *)UnityEngine_GameObject__get_transform(
                                                       (UnityEngine_GameObject_o *)this,
                                                       0LL);
    if ( !this )
      goto LABEL_44;
    *(UnityEngine_Vector3_o *)(&v27 - 2) = UnityEngine_Transform__get_localPosition(
                                             (UnityEngine_Transform_o *)this,
                                             0LL);
    this = (MyRoomControl___c__DisplayClass243_0_o *)v4->fields.__4__this;
    if ( !this )
      goto LABEL_44;
    v28 = -v23;
    v29 = v26;
    MyRoomControl__moveControl(
      (MyRoomControl_o *)this,
      (UnityEngine_GameObject_o *)this[4].monitor,
      *(UnityEngine_Vector3_o *)(&v27 - 2),
      (System_String_o *)StringLiteral_11106/*"ReleaseTouch"*/,
      0LL);
  }
  else if ( !formId )
  {
    MyRoomControl__ChangeSetStandFigureObj((MyRoomControl_o *)this, 1, 0, 0LL);
    v17 = v4->fields.__4__this;
    if ( v17 )
    {
      v18 = v17->fields.standFigureBack;
      v19 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(
        v19,
        (Il2CppObject *)v4,
        Method_MyRoomControl___c__DisplayClass243_0__SetMaterialSvtFigure_b__2__,
        0LL);
      if ( v18 )
      {
        StandFigureBack__Fadein(v18, v19, 0LL);
        return;
      }
    }
LABEL_44:
    sub_1B86614(this, method);
  }
  ActionExtensions__Call(v4->fields.end_act, 0LL);
  v30 = v4->fields.__4__this;
  if ( !v30 )
    goto LABEL_44;
  v30->fields.isSvtLoading = 0;
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
  MyRoomControl___c__DisplayClass250_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v5; // x8
  MyRoomSvtControl_o *svtCtr; // x20
  ServantVoiceEntity_o *svtVoiceEnt; // x21
  struct MyRoomControl_o *v8; // x8

  v2 = this;
  if ( (byte_4A49A55 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, method);
    this = (MyRoomControl___c__DisplayClass250_0_o *)sub_1B863B8(&StringLiteral_8140/*"LOAD_END"*/, v3);
    byte_4A49A55 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_11;
  this = (MyRoomControl___c__DisplayClass250_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_11;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v5 = v2->fields.__4__this;
  if ( !v5
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v5->fields.imageIdList) == 0LL
    || (svtCtr = v5->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass250_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v5->fields.figureSvtDispIdx,
                                                           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v8 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass250_0_o *)v8->fields.myRoomFsm) == 0LL )
  {
LABEL_11:
    sub_1B86614(this, method);
  }
  PlayMakerFSM__SendEvent((PlayMakerFSM_o *)this, (System_String_o *)StringLiteral_8140/*"LOAD_END"*/, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___ctor(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___SetGallery_b__0(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___SetGallery_b__1(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (MyRoomControl___c__DisplayClass305_0_o *)_4__this->fields.mStateMaterial) == 0LL)
    || (MyRoomStateMaterial__GalleryBack((MyRoomStateMaterial_o *)this, 1, v2), (v5 = v4->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, method);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v5->fields.titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___SetGallery_b__2(
        MyRoomControl___c__DisplayClass305_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  struct MyRoomControl_o *_4__this; // x22
  struct MyRoomControl_o *v14; // x8
  Il2CppObject *v15; // x20
  UnityEngine_Transform_o *transform; // x21
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  struct MyRoomControl_o *v19; // x8
  Il2CppObject *v20; // x25
  CGThumbnailDialog_o *klass; // x20
  System_Action_o *_9__3; // x23
  System_Collections_Generic_List_GalleryEntity__o *galleryList; // x21
  int32_t warId; // w22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Action_o *v27; // x24
  System_Action_o *_9__4; // x25
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct MyRoomControl_o *v31; // x8

  v4 = this;
  if ( (byte_4A49A56 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, assetData);
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, v5);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_CGThumbnailDialog___, v6);
    sub_1B863B8(&Method_MyRoomControl_OnClickBack__, v7);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v8);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__3__, v10);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__4__, v11);
    this = (MyRoomControl___c__DisplayClass305_0_o *)sub_1B863B8(&StringLiteral_3338/*"CGThumbnailDialog"*/, v12);
    byte_4A49A56 = 1;
  }
  if ( !assetData )
    goto LABEL_23;
  _4__this = v4->fields.__4__this;
  this = (MyRoomControl___c__DisplayClass305_0_o *)AssetData__GetObject_object__49610244(
                                                     assetData,
                                                     (System_String_o *)StringLiteral_3338/*"CGThumbnailDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  v14 = v4->fields.__4__this;
  if ( !v14 )
    goto LABEL_23;
  v15 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass305_0_o *)v14->fields.mCamera2DUI;
  if ( !this )
    goto LABEL_23;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v15,
                                                     transform,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_CGThumbnailDialog___);
  if ( !_4__this )
    goto LABEL_23;
  _4__this->fields.cgThumbnailDialog = (struct CGThumbnailDialog_o *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.cgThumbnailDialog, (int32_t)this, v17, v18);
  this = (MyRoomControl___c__DisplayClass305_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  MyRoomControl__stopSvtVoice((MyRoomControl_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass305_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_23;
  LODWORD(this[17].fields.__4__this) = 20;
  MyRoomControl__setSvtFigureActive((MyRoomControl_o *)this, 20, 1, 0LL);
  v19 = v4->fields.__4__this;
  if ( !v19 )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)v19->fields.cgThumbnailDialog;
  if ( !this )
    goto LABEL_23;
  this = (MyRoomControl___c__DisplayClass305_0_o *)UnityEngine_Component__get_gameObject(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_23;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
  v20 = (Il2CppObject *)v4->fields.__4__this;
  if ( !v20 )
    goto LABEL_23;
  klass = (CGThumbnailDialog_o *)v20[58].klass;
  _9__3 = v4->fields.__9__3;
  galleryList = v4->fields.galleryList;
  warId = v4->fields.warId;
  if ( !_9__3 )
  {
    _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__3, (Il2CppObject *)v4, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__3__, 0LL);
    v4->fields.__9__3 = _9__3;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v25, v26);
    v20 = (Il2CppObject *)v4->fields.__4__this;
  }
  v27 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
  System_Action___ctor(v27, v20, (intptr_t)Method_MyRoomControl_OnClickBack__, 0LL);
  _9__4 = v4->fields.__9__4;
  if ( !_9__4 )
  {
    _9__4 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
    System_Action___ctor(_9__4, (Il2CppObject *)v4, Method_MyRoomControl___c__DisplayClass305_0__SetGallery_b__4__, 0LL);
    v4->fields.__9__4 = _9__4;
    sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__4, (int32_t)_9__4, v29, v30);
  }
  if ( !klass
    || (CGThumbnailDialog__Open(klass, galleryList, warId, _9__3, v27, _9__4, 0LL), (v31 = v4->fields.__4__this) == 0LL) )
  {
LABEL_23:
    sub_1B86614(this, assetData);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v31->fields.titleInfo, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___SetGallery_b__3(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__SetMaskCollider(_4__this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass305_0___SetGallery_b__4(
        MyRoomControl___c__DisplayClass305_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass305_0_o *v4; // x19
  struct MyRoomControl_o *v5; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this
    || (v4 = this, (this = (MyRoomControl___c__DisplayClass305_0_o *)_4__this->fields.mStateMaterial) == 0LL)
    || (MyRoomStateMaterial__GalleryBack((MyRoomStateMaterial_o *)this, 1, v2), (v5 = v4->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, method);
  }
  BasicHelper__SetActiveSafely((UnityEngine_Component_o *)v5->fields.titleInfo, 1, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass325_0___ctor(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__0(
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
  if ( (byte_4A49A57 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass325_0_o *)sub_1B863B8(
                                                       &Method_System_Collections_Generic_List_int__get_Item__,
                                                       method);
    byte_4A49A57 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_10;
  this = (MyRoomControl___c__DisplayClass325_0_o *)_4__this->fields.svtCtr;
  if ( !this )
    goto LABEL_10;
  MyRoomSvtControl__setSvtVoice((MyRoomSvtControl_o *)this, _4__this->fields.voiceList, _4__this->fields.asstName, 0LL);
  v4 = v2->fields.__4__this;
  if ( !v4
    || (this = (MyRoomControl___c__DisplayClass325_0_o *)v4->fields.imageIdList) == 0LL
    || (svtCtr = v4->fields.svtCtr,
        svtVoiceEnt = v2->fields.svtVoiceEnt,
        this = (MyRoomControl___c__DisplayClass325_0_o *)System_Collections_Generic_List_int___get_Item(
                                                           (System_Collections_Generic_List_int__o *)this,
                                                           v4->fields.figureSvtDispIdx,
                                                           (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__),
        !svtCtr)
    || (MyRoomSvtControl__initFirstPlayVoiceList(svtCtr, svtVoiceEnt, (int32_t)this, 0LL),
        (v7 = v2->fields.__4__this) == 0LL) )
  {
LABEL_10:
    sub_1B86614(this, method);
  }
  v7->fields.isExistVoiceData = 1;
}


void __fastcall MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__1(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  struct System_Action_o *callback; // x8

  if ( (byte_4A49A58 & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, method);
    byte_4A49A58 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v4);
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL);
  callback = this->fields.callback;
  if ( callback )
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))callback->fields.m_target)(
      callback->fields.original_method_info,
      *(_QWORD *)&callback->fields.extra_arg);
}


void __fastcall MyRoomControl___c__DisplayClass325_0___SetFavoriteSvt_b__2(
        MyRoomControl___c__DisplayClass325_0_o *this,
        const MethodInfo *method)
{
  ActionExtensions__Call(this->fields.action, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass344_0___ctor(
        MyRoomControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass344_0___svtVoicePlayAct_b__0(
        MyRoomControl___c__DisplayClass344_0_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct MyRoomControl_o *_4__this; // x9
  struct StandFigureBack_o *bondsStandFigureBack; // x8
  MyRoomControl___c__DisplayClass344_0_o *v6; // x19
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
  this = (MyRoomControl___c__DisplayClass344_0_o *)_4__this->fields.bondsSvtCtr;
  if ( !this )
    goto LABEL_14;
  standFigureCollectList = bondsStandFigureBack->fields.standFigureCollectList;
  this[2].monitor = standFigureCollectList;
  sub_1B8635C((CGThumbnailListItem_o *)&this[2].monitor, (int32_t)standFigureCollectList, v2, v3);
  this = (MyRoomControl___c__DisplayClass344_0_o *)v6->fields.bondsSvtObj;
  if ( !this )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass344_0_o *)UnityEngine_GameObject__get_transform(
                                                     (UnityEngine_GameObject_o *)this,
                                                     0LL);
  if ( !this )
    goto LABEL_14;
  *(UnityEngine_Vector3_o *)(&v8 - 1) = UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL);
  v10 = v6->fields.__4__this;
  if ( !v10 )
    goto LABEL_14;
  this = (MyRoomControl___c__DisplayClass344_0_o *)v10->fields.bondsStandFigureBack;
  if ( !this )
    goto LABEL_14;
  v11 = v8;
  v12 = v9;
  StandFigureBack__Fadein((StandFigureBack_o *)this, 0LL, 0LL);
  v13 = v6->fields.__4__this;
  if ( !v13
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)v13->fields.bondsStandFigureBack) == 0LL
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)StandFigureBack__GetSvtStandFigure(
                                                           (StandFigureBack_o *)this,
                                                           0,
                                                           0LL)) == 0LL
    || (this = *(MyRoomControl___c__DisplayClass344_0_o **)&this->fields.createStandEnd) == 0LL
    || (this = (MyRoomControl___c__DisplayClass344_0_o *)UnityEngine_Component__get_transform(
                                                           (UnityEngine_Component_o *)this,
                                                           0LL)) == 0LL )
  {
LABEL_14:
    sub_1B86614(this, method);
  }
  v14.fields.x = -COERCE_FLOAT(UnityEngine_Transform__get_localPosition((UnityEngine_Transform_o *)this, 0LL));
  v14.fields.y = v11;
  v14.fields.z = v12;
  GameObjectExtensions__SetLocalPosition(v6->fields.bondsSvtObj, v14, 0LL);
  v6->fields.createStandEnd = 1;
}


void __fastcall MyRoomControl___c__DisplayClass360_0___ctor(
        MyRoomControl___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass360_0___PlayOpening_b__0(
        MyRoomControl___c__DisplayClass360_0_o *this,
        const MethodInfo *method)
{
  CRIMoviePlayer_o *player; // x0

  player = this->fields.player;
  if ( !player )
    sub_1B86614(0LL, method);
  CRIMoviePlayer__Dispose(player, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass381_0___ctor(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__0(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x8
  struct StandFigureBack_array *multipleStandFigureBacks; // x8

  _4__this = this->fields.__4__this;
  if ( !_4__this || (multipleStandFigureBacks = _4__this->fields.multipleStandFigureBacks) == 0LL )
    sub_1B86614(this, method);
  return this->fields.loadedCount < (signed int)multipleStandFigureBacks->max_length;
}


void __fastcall MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__1(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  this->fields.wait = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__2(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  return this->fields.wait;
}


void __fastcall MyRoomControl___c__DisplayClass381_0___LoadMultipleServant_b__3(
        MyRoomControl___c__DisplayClass381_0_o *this,
        const MethodInfo *method)
{
  ++this->fields.loadedCount;
}


void __fastcall MyRoomControl___c__DisplayClass385_0___ctor(
        MyRoomControl___c__DisplayClass385_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass385_0___DispDefaultMyRoom_b__0(
        MyRoomControl___c__DisplayClass385_0_o *this,
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
    sub_1B86614(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass385_0___DispDefaultMyRoom_b__1(
        MyRoomControl___c__DisplayClass385_0_o *this,
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
    sub_1B86614(0LL, method);
  MyRoomControl__ReleaseTouch(_4__this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___ctor(
        MyRoomControl___c__DisplayClass396_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass396_0___LoadPhotoCampaignAssets_b__0(
        MyRoomControl___c__DisplayClass396_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  AssetData_o *v4; // x20
  MyRoomControl___c__DisplayClass396_0_o *v5; // x19
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
  struct MyRoomControl_o *_4__this; // x8
  MyRoomControl___c__DisplayClass396_0_o **p_fields; // x23
  Il2CppObject *Object_object__49610244; // x21
  Il2CppObject *Component_object; // x21
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  MyRoomControl___c__DisplayClass396_0_o *v36; // x8
  Il2CppObject *v37; // x21
  Il2CppObject *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  MyRoomControl___c__DisplayClass396_0_o *v41; // x8
  MyRoomControl___c__DisplayClass396_0_o *v42; // x21
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  MyRoomControl___c__DisplayClass396_0_o *v45; // x21
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  MyRoomControl___c__DisplayClass396_0_o *v48; // x26
  Il2CppObject *v49; // x21
  UnityEngine_Transform_o *transform; // x22
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  MyRoomControl___c__DisplayClass396_0_o *v53; // x22
  Il2CppObject *v54; // x21
  UnityEngine_Transform_o *v55; // x0
  int32_t v56; // w2
  const MethodInfo *v57; // x3
  MyRoomControl___c__DisplayClass396_0_o *v58; // x8
  MyRoomControl___c__DisplayClass396_0_o *v59; // x22
  Il2CppObject *v60; // x21
  UnityEngine_Transform_o *v61; // x0
  int32_t v62; // w2
  const MethodInfo *v63; // x3
  MyRoomControl___c__DisplayClass396_0_o *v64; // x8
  MyRoomControl___c__DisplayClass396_0_o *v65; // x21
  int32_t v66; // w2
  const MethodInfo *v67; // x3
  MyRoomControl___c__DisplayClass396_0_o *v68; // x22
  Il2CppObject *v69; // x21
  UnityEngine_Transform_o *v70; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  MyRoomControl___c__DisplayClass396_0_o *v73; // x22
  Il2CppObject *v74; // x21
  UnityEngine_Transform_o *v75; // x0
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  MyRoomControl___c__DisplayClass396_0_o *v78; // x8
  MyRoomControl___c__DisplayClass396_0_o *v79; // x21
  int32_t v80; // w2
  const MethodInfo *v81; // x3

  v4 = assetData;
  v5 = this;
  if ( (byte_4A49A59 & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_GameObject____76085296, assetData);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___, v6);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___, v7);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___, v8);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___, v9);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___, v10);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___, v11);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___, v12);
    sub_1B863B8(&Method_UnityEngine_GameObject_GetComponent_UIAtlas___, v13);
    sub_1B863B8(&Method_UnityEngine_Object_Instantiate_GameObject____76169360, v14);
    sub_1B863B8(&UnityEngine_Object_TypeInfo, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v16);
    sub_1B863B8(&StringLiteral_20056/*"img_bg_shutter"*/, v17);
    sub_1B863B8(&StringLiteral_8227/*"LayerChangeButton"*/, v18);
    sub_1B863B8(&StringLiteral_10463/*"PhotoSettingButton"*/, v19);
    sub_1B863B8(&StringLiteral_8789/*"MasterEquipSettingDialog"*/, v20);
    sub_1B863B8(&StringLiteral_5323/*"DownloadPhotoCampaignAtlas"*/, v21);
    sub_1B863B8(&StringLiteral_16972/*"bit_camera_shutter"*/, v22);
    sub_1B863B8(&StringLiteral_10458/*"PhotoCampaignStaffCostumeSelectDialog"*/, v23);
    sub_1B863B8(&StringLiteral_10460/*"PhotoFrameSelectDialog"*/, v24);
    sub_1B863B8(&StringLiteral_16971/*"bit_camera_iconblink"*/, v25);
    sub_1B863B8(&StringLiteral_10531/*"Polaroid_btn_shutter"*/, v26);
    sub_1B863B8(&StringLiteral_10459/*"PhotoCampaignStaffSelectDialog"*/, v27);
    sub_1B863B8(&StringLiteral_5324/*"DownloadPhotoFrameAtlas"*/, v28);
    this = (MyRoomControl___c__DisplayClass396_0_o *)sub_1B863B8(&StringLiteral_10465/*"PhotoTargetSelectDialog"*/, v29);
    byte_4A49A59 = 1;
  }
  p_fields = (MyRoomControl___c__DisplayClass396_0_o **)&v5->fields;
  _4__this = v5->fields.__4__this;
  if ( !_4__this )
    goto LABEL_68;
  _4__this->fields.photoCampaignAssetData = v4;
  sub_1B8635C((CGThumbnailListItem_o *)&_4__this->fields.photoCampaignAssetData, (int32_t)v4, (int32_t)method, v3);
  if ( !v4 )
    goto LABEL_68;
  Object_object__49610244 = AssetData__GetObject_object__49610244(
                              v4,
                              (System_String_o *)StringLiteral_5323/*"DownloadPhotoCampaignAtlas"*/,
                              (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)Object_object__49610244,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !Object_object__49610244 )
      goto LABEL_68;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)Object_object__49610244,
                         (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)Component_object,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v36 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v36[44].monitor = Component_object;
      sub_1B8635C((CGThumbnailListItem_o *)&v36[44].monitor, (int32_t)Component_object, v34, v35);
    }
  }
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[24].fields.callBack,
    (System_String_o *)StringLiteral_10531/*"Polaroid_btn_shutter"*/,
    0LL);
  this = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  MyRoomControl__SetPhotoCampaignSprite(
    (MyRoomControl_o *)this,
    (UISprite_o *)this[25].klass,
    (System_String_o *)StringLiteral_20056/*"img_bg_shutter"*/,
    0LL);
  v37 = AssetData__GetObject_object__49610244(
          v4,
          (System_String_o *)StringLiteral_5324/*"DownloadPhotoFrameAtlas"*/,
          (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                     (UnityEngine_Object_o *)v37,
                                                     0LL,
                                                     0LL);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( !v37 )
      goto LABEL_68;
    v38 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)v37,
            (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_UIAtlas___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__op_Inequality(
                                                       (UnityEngine_Object_o *)v38,
                                                       0LL,
                                                       0LL);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v41 = *p_fields;
      if ( !*p_fields )
        goto LABEL_68;
      v41[44].fields.__4__this = (struct MyRoomControl_o *)v38;
      sub_1B8635C((CGThumbnailListItem_o *)&v41[44].fields, (int32_t)v38, v39, v40);
    }
  }
  v42 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16971/*"bit_camera_iconblink"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !v42 )
    goto LABEL_68;
  v42[38].fields.callBack = (struct System_Action_o *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&v42[38].fields.callBack, (int32_t)this, v43, v44);
  v45 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_16972/*"bit_camera_shutter"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !v45 )
    goto LABEL_68;
  v45[39].monitor = this;
  sub_1B8635C((CGThumbnailListItem_o *)&v45[39].monitor, (int32_t)this, v46, v47);
  v48 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10465/*"PhotoTargetSelectDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  v49 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v49,
                                                     transform,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoTargetSelectDialog___);
  if ( !v48 )
    goto LABEL_68;
  v48[41].klass = (MyRoomControl___c__DisplayClass396_0_c *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&v48[41], (int32_t)this, v51, v52);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[41].klass;
  if ( !this )
    goto LABEL_68;
  PhotoTargetSelectDialog__Init((PhotoTargetSelectDialog_o *)this, 0LL);
  v53 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10459/*"PhotoCampaignStaffSelectDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  v54 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v55 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v54,
                                                     v55,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffSelectDialog___);
  if ( !v53 )
    goto LABEL_68;
  v53[41].monitor = this;
  sub_1B8635C((CGThumbnailListItem_o *)&v53[41].monitor, (int32_t)this, v56, v57);
  v58 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v58[41].monitor;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffSelectDialog__Init((PhotoCampaignStaffSelectDialog_o *)this, (UIAtlas_o *)v58[44].monitor, 0LL);
  v59 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10458/*"PhotoCampaignStaffCostumeSelectDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  v60 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v61 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v60,
                                                     v61,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoCampaignStaffCostumeSelectDialog___);
  if ( !v59 )
    goto LABEL_68;
  v59[41].fields.__4__this = (struct MyRoomControl_o *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&v59[41].fields, (int32_t)this, v62, v63);
  v64 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v64[41].fields.__4__this;
  if ( !this )
    goto LABEL_68;
  PhotoCampaignStaffCostumeSelectDialog__Init(
    (PhotoCampaignStaffCostumeSelectDialog_o *)this,
    (UIAtlas_o *)v64[44].monitor,
    0LL);
  v65 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10463/*"PhotoSettingButton"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     (Il2CppObject *)this,
                                                     (UnityEngine_Transform_o *)(*p_fields)[19].fields.__4__this,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoSettingButtonComponent___);
  if ( !v65 )
    goto LABEL_68;
  v65[41].fields.callBack = (struct System_Action_o *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&v65[41].fields.callBack, (int32_t)this, v66, v67);
  assetData = (AssetData_o *)*p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = *(MyRoomControl___c__DisplayClass396_0_o **)&assetData[15].fields.type;
  if ( !this )
    goto LABEL_68;
  PhotoSettingButtonComponent__Init((PhotoSettingButtonComponent_o *)this, (MyRoomControl_o *)assetData, 0LL);
  v68 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_8789/*"MasterEquipSettingDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  v69 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v70 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v69,
                                                     v70,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_MasterEquipSettingDialog___);
  if ( !v68 )
    goto LABEL_68;
  v68[42].klass = (MyRoomControl___c__DisplayClass396_0_c *)this;
  sub_1B8635C((CGThumbnailListItem_o *)&v68[42], (int32_t)this, v71, v72);
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[42].klass;
  if ( !this )
    goto LABEL_68;
  MasterEquipSettingDialog__Init((MasterEquipSettingDialog_o *)this, 0LL);
  v73 = *p_fields;
  this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                     v4,
                                                     (System_String_o *)StringLiteral_10460/*"PhotoFrameSelectDialog"*/,
                                                     (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296);
  if ( !*p_fields )
    goto LABEL_68;
  v74 = (Il2CppObject *)this;
  this = (MyRoomControl___c__DisplayClass396_0_o *)(*p_fields)[13].monitor;
  if ( !this )
    goto LABEL_68;
  v75 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_Object__Instantiate_object__50290416(
                                                     v74,
                                                     v75,
                                                     (const MethodInfo_2FF5EF0 *)Method_UnityEngine_Object_Instantiate_GameObject____76169360);
  if ( !this )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                     (UnityEngine_GameObject_o *)this,
                                                     (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoFrameSelectDialog___);
  if ( !v73 )
    goto LABEL_68;
  v73[42].monitor = this;
  sub_1B8635C((CGThumbnailListItem_o *)&v73[42].monitor, (int32_t)this, v76, v77);
  v78 = *p_fields;
  if ( !*p_fields )
    goto LABEL_68;
  this = (MyRoomControl___c__DisplayClass396_0_o *)v78[42].monitor;
  if ( !this
    || (PhotoFrameSelectDialog__Init((PhotoFrameSelectDialog_o *)this, (UIAtlas_o *)v78[44].fields.__4__this, 0LL),
        v79 = *p_fields,
        (this = (MyRoomControl___c__DisplayClass396_0_o *)AssetData__GetObject_object__49610244(
                                                            v4,
                                                            (System_String_o *)StringLiteral_8227/*"LayerChangeButton"*/,
                                                            (const MethodInfo_2F4FE04 *)Method_AssetData_GetObject_GameObject____76085296)) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass396_0_o *)UnityEngine_GameObject__GetComponent_object_(
                                                           (UnityEngine_GameObject_o *)this,
                                                           (const MethodInfo_2FC0DF0 *)Method_UnityEngine_GameObject_GetComponent_PhotoLayerChangeComponent___),
        !v79)
    || (v79[44].fields.callBack = (struct System_Action_o *)this,
        sub_1B8635C((CGThumbnailListItem_o *)&v79[44].fields.callBack, (int32_t)this, v80, v81),
        (this = (MyRoomControl___c__DisplayClass396_0_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
LABEL_68:
    sub_1B86614(this, assetData);
  }
  CommonUI__SetLoadMode((CommonUI_o *)this, 0, 0LL);
  ActionExtensions__Call(v5->fields.callBack, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass397_0___ctor(
        MyRoomControl___c__DisplayClass397_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass397_0___LoadMasterEquip_b__0(
        MyRoomControl___c__DisplayClass397_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass397_0_o *v5; // x20
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
  if ( (byte_4A49A5A & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B863B8(&AssetManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Add__, v8);
    this = (MyRoomControl___c__DisplayClass397_0_o *)sub_1B863B8(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v9);
    byte_4A49A5A = 1;
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
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v14[4] = (EquipEntity_c *)assetData;
          sub_1B8635C((CGThumbnailListItem_o *)(v14 + 4), (int32_t)assetData, (int32_t)method, v3);
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
            this = (MyRoomControl___c__DisplayClass397_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                               v21,
                                                               0LL);
            if ( assetData )
            {
              v20 = (int)this;
              this = (MyRoomControl___c__DisplayClass397_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2F4FCFC *)Method_AssetData_GetObject_Texture2D___);
              if ( masterMaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterMaleEquipTexture,
                  v20,
                  (Il2CppObject *)this,
                  (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B86614(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38744968(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass397_0___LoadMasterEquip_b__1(
        MyRoomControl___c__DisplayClass397_0_o *this,
        AssetData_o *assetData,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  MyRoomControl___c__DisplayClass397_0_o *v5; // x20
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
  if ( (byte_4A49A5B & 1) == 0 )
  {
    sub_1B863B8(&Method_AssetData_GetObject_Texture2D___, assetData);
    sub_1B863B8(&AssetManager_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_AssetData__Add__, v8);
    this = (MyRoomControl___c__DisplayClass397_0_o *)sub_1B863B8(
                                                       &CodeStage_AntiCheat_ObscuredTypes_ObscuredInt_TypeInfo,
                                                       v9);
    byte_4A49A5B = 1;
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
            *(const MethodInfo_35FC958 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &equipEnt->klass + _4__this_low;
          LODWORD(this->fields.__4__this) = _4__this_low + 1;
          v14[4] = (EquipEntity_c *)assetData;
          sub_1B8635C((CGThumbnailListItem_o *)(v14 + 4), (int32_t)assetData, (int32_t)method, v3);
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
            this = (MyRoomControl___c__DisplayClass397_0_o *)CodeStage_AntiCheat_ObscuredTypes_ObscuredInt__op_Implicit_47434244(
                                                               v21,
                                                               0LL);
            if ( assetData )
            {
              v20 = (int)this;
              this = (MyRoomControl___c__DisplayClass397_0_o *)AssetData__GetObject_object_(
                                                                 assetData,
                                                                 (const MethodInfo_2F4FCFC *)Method_AssetData_GetObject_Texture2D___);
              if ( masterFemaleEquipTexture )
              {
                System_Collections_Generic_Dictionary_int__object___set_Item(
                  masterFemaleEquipTexture,
                  v20,
                  (Il2CppObject *)this,
                  (const MethodInfo_326D750 *)Method_System_Collections_Generic_Dictionary_int__Texture2D__set_Item__);
                return;
              }
            }
          }
        }
      }
    }
LABEL_20:
    sub_1B86614(this, assetData);
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  AssetManager__releaseAsset_38744968(assetData, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass402_0___ctor(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass402_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass402_0_o *v4; // x19
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
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Action_o *_9__3; // x22
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_List_T__o *v26; // x8
  struct System_Object_array *items; // x9
  _QWORD *v28; // x10
  __int64 size; // x11
  struct System_Int64_array *temporaryPhotoUserSvtId; // x10
  struct System_Int32_array *temporaryPhotoSvtLimitCount; // x11
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25
  int32_t v34; // w2
  const MethodInfo *v35; // x3

  v4 = this;
  if ( (byte_4A49A5C & 1) == 0 )
  {
    sub_1B863B8(&System_Action_long__int__TypeInfo, *(_QWORD *)&targetType);
    sub_1B863B8(&System_Action_int__int__TypeInfo, v5);
    sub_1B863B8(&System_Action_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, v7);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__1__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__2__, v9);
    this = (MyRoomControl___c__DisplayClass402_0_o *)sub_1B863B8(
                                                       &Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__3__,
                                                       v10);
    byte_4A49A5C = 1;
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
        sub_1B8661C(this, *(_QWORD *)&targetType);
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
        _9__1 = (System_Action_long__int__o *)sub_1B86604(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v34, v35);
      }
      if ( !photoServantSelectMenu )
LABEL_39:
        sub_1B86614(this, *(_QWORD *)&targetType);
      PhotoServantSelectMenu__Open(photoServantSelectMenu, _9__1, v15, v14, UserSvtId_k__BackingField, 0LL);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v20 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1B86604(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__2__,
          0LL);
        v4->fields.__9__2 = _9__2;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v21, v22);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass402_0__OpenTargetSelectDialog_b__3__,
          0LL);
        v4->fields.__9__3 = _9__3;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v24, v25);
      }
      if ( !v20 )
        goto LABEL_39;
      MyRoomControl__OpenMasterEquipSettingDialog(v20, _9__2, _9__3, 0LL);
      return;
    case 2:
      this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      MyRoomControl__OpenStaffSelectDialog(
        (MyRoomControl_o *)this,
        v4->fields.anotherTargetType,
        v4->fields.isChangeTarget,
        0LL);
      return;
    case 3:
      this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
      if ( !this )
        goto LABEL_39;
      v26 = (System_Collections_Generic_List_T__o *)this[21].fields.__4__this;
      if ( !v26 )
        goto LABEL_39;
      items = v26->fields._items;
      v28 = Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__;
      ++v26->fields._version;
      if ( !items )
        goto LABEL_39;
      size = v26->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v26,
          3,
          *(const MethodInfo_35E2160 **)(*(_QWORD *)(v28[4] + 192LL) + 112LL));
        this = (MyRoomControl___c__DisplayClass402_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_39;
      }
      else
      {
        v26->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 3;
      }
      MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, v4->fields.isChangeTarget, 0LL);
      return;
    default:
      return;
  }
}


void __fastcall MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__1(
        MyRoomControl___c__DisplayClass402_0_o *this,
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

  if ( (byte_4A49A5D & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, userSvtId);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v7);
    byte_4A49A5D = 1;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
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
    sub_1B86614(_4__this, userSvtId);
  if ( v15 >= temporaryPhotoSvtLimitCount->max_length )
LABEL_16:
    sub_1B8661C(_4__this, userSvtId);
  temporaryPhotoSvtLimitCount->m_Items[v15 + 1] = limitCount;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__2(
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

  if ( (byte_4A49A5E & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, *(_QWORD *)&equipId);
    byte_4A49A5E = 1;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    _4__this = this->fields.__4__this;
    if ( _4__this )
      goto LABEL_9;
LABEL_10:
    sub_1B86614(_4__this, *(_QWORD *)&equipId);
  }
  temporaryPhotoTargetList->fields._size = size + 1;
  *((_DWORD *)items->m_Items + size) = 1;
LABEL_9:
  _4__this->fields.temporaryMasterEquipId = equipId;
  _4__this->fields.temporaryMasterGenderType = genderType;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass402_0___OpenTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass402_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass403_0___ctor(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__0(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__1(
        MyRoomControl___c__DisplayClass403_0_o *this,
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

  if ( (byte_4A49A5F & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__Add__, *(_QWORD *)&imageId);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v5);
    byte_4A49A5F = 1;
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
      *(const MethodInfo_35E2160 **)(*(_QWORD *)(v9[4] + 192LL) + 112LL));
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
    sub_1B86614(_4__this, *(_QWORD *)&imageId);
  v13 = v11->fields._size - 1;
  if ( v13 >= temporaryStaffImageId->max_length )
    sub_1B8661C(_4__this, *(_QWORD *)&imageId);
  temporaryStaffImageId->m_Items[v13 + 1] = imageId;
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass403_0___OpenStaffSelectDialog_b__2(
        MyRoomControl___c__DisplayClass403_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__OpenStaffSelectDialog(_4__this, this->fields.anotherTargetType, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass404_0___ctor(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__0(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  struct MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
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


void __fastcall MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__1(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass404_0_o *v2; // x19
  __int64 v3; // x1
  struct MyRoomControl_o *_4__this; // x8

  v2 = this;
  if ( (byte_4A49A60 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__, method);
    this = (MyRoomControl___c__DisplayClass404_0_o *)sub_1B863B8(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__,
                                                       v3);
    byte_4A49A60 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass404_0_o *)_4__this->fields.temporaryPhotoTargetList) == 0LL
    || (System_Collections_Generic_List_Int32Enum___RemoveAt(
          (System_Collections_Generic_List_T__o *)this,
          LODWORD(this->fields.__4__this) - 1,
          (const MethodInfo_35E38E0 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__),
        (this = (MyRoomControl___c__DisplayClass404_0_o *)v2->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, method);
  }
  MyRoomControl__ConfirmTargetSelectState((MyRoomControl_o *)this, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__2(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass404_0_o *v2; // x19
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  struct MyRoomControl_o *_4__this; // x8
  struct MyRoomControl_o *v7; // x8
  MyRoomControl_o *v8; // x8
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x20
  System_Action_o *_9__3; // x22
  int32_t v11; // w2
  const MethodInfo *v12; // x3

  v2 = this;
  if ( (byte_4A49A61 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Count__, v4);
    this = (MyRoomControl___c__DisplayClass404_0_o *)sub_1B863B8(
                                                       &Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__3__,
                                                       v5);
    byte_4A49A61 = 1;
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
    (const MethodInfo_35E38E0 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__RemoveAt__);
  v7 = v2->fields.__4__this;
  if ( !v7 )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass404_0_o *)v7->fields.photoServantSelectMenu;
  if ( !this )
    goto LABEL_15;
  this = (MyRoomControl___c__DisplayClass404_0_o *)UnityEngine_Behaviour__get_isActiveAndEnabled(
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
        _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v2,
          Method_MyRoomControl___c__DisplayClass404_0__ConfirmTargetSelectState_b__3__,
          0LL);
        v2->fields.__9__3 = _9__3;
        sub_1B8635C((CGThumbnailListItem_o *)&v2->fields.__9__3, (int32_t)_9__3, v11, v12);
      }
      if ( photoServantSelectMenu )
      {
        PhotoServantSelectMenu__Close(photoServantSelectMenu, _9__3, 0LL);
        return;
      }
    }
LABEL_15:
    sub_1B86614(this, method);
  }
  if ( !v8 )
    goto LABEL_15;
  MyRoomControl__ConfirmTargetSelectState(v8, v2->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass404_0___ConfirmTargetSelectState_b__3(
        MyRoomControl___c__DisplayClass404_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__ConfirmTargetSelectState(_4__this, this->fields.isChangeTarget, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass407_0___ctor(
        MyRoomControl___c__DisplayClass407_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass407_0___OpenPhotoFrameSelectDialog_b__0(
        MyRoomControl___c__DisplayClass407_0_o *this,
        System_String_o *spriteName,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass407_0_o *v4; // x19
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
  if ( (byte_4A49A62 & 1) == 0 )
  {
    sub_1B863B8(&StringLiteral_16303/*"_duo"*/, spriteName);
    this = (MyRoomControl___c__DisplayClass407_0_o *)sub_1B863B8(&StringLiteral_16341/*"_solo"*/, v5);
    byte_4A49A62 = 1;
  }
  _4__this = v4->fields.__4__this;
  if ( !_4__this )
    goto LABEL_8;
  takingPhotoFrameSprite = _4__this->fields.takingPhotoFrameSprite;
  v8 = System_String__Concat_61645176(spriteName, (System_String_o *)StringLiteral_16341/*"_solo"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(_4__this, takingPhotoFrameSprite, v8, 0LL);
  v9 = v4->fields.__4__this;
  if ( !v9 )
    goto LABEL_8;
  takingPhotoFrameWideSprite = v9->fields.takingPhotoFrameWideSprite;
  v11 = System_String__Concat_61645176(spriteName, (System_String_o *)StringLiteral_16303/*"_duo"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(v9, takingPhotoFrameWideSprite, v11, 0LL);
  v12 = v4->fields.__4__this;
  if ( !v12
    || (photoFrameSprite = v12->fields.photoFrameSprite,
        v14 = System_String__Concat_61645176(spriteName, (System_String_o *)StringLiteral_16341/*"_solo"*/, 0LL),
        MyRoomControl__SetPhotoFrameSprite(v12, photoFrameSprite, v14, 0LL),
        (v15 = v4->fields.__4__this) == 0LL) )
  {
LABEL_8:
    sub_1B86614(this, spriteName);
  }
  photoFrameWideSprite = v15->fields.photoFrameWideSprite;
  v17 = System_String__Concat_61645176(spriteName, (System_String_o *)StringLiteral_16303/*"_duo"*/, 0LL);
  MyRoomControl__SetPhotoFrameSprite(v15, photoFrameWideSprite, v17, 0LL);
  ActionExtensions__Call(v4->fields.decideCallback, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass409_0___ctor(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__0(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__1(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__10(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__11(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__2(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__3(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__4(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__5(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__6(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__7(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__8(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  this->fields.flag = 0;
}


bool __fastcall MyRoomControl___c__DisplayClass409_0___LoadPhotoTarget_b__9(
        MyRoomControl___c__DisplayClass409_0_o *this,
        const MethodInfo *method)
{
  return this->fields.flag;
}


void __fastcall MyRoomControl___c__DisplayClass411_0___ctor(
        MyRoomControl___c__DisplayClass411_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass411_0___CreatePhotoMasterFigure_b__0(
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
  if ( (byte_4A49A63 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass411_0_o *)sub_1B863B8(
                                                       &Method_GameObjectExtensions_SafeGetComponent_UIPanel___,
                                                       method);
    byte_4A49A63 = 1;
  }
  _4__this = v2->fields.__4__this;
  if ( !_4__this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)_4__this->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)UnityEngine_Component__get_transform(
                                                     (UnityEngine_Component_o *)this,
                                                     0LL);
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
                                                     0LL);
  if ( !v8 )
    goto LABEL_17;
  v9 = ((unsigned __int8)this & 1) != 0 ? 1300.0 : -1812.0;
  v18.fields.x = v5 + v9;
  v18.fields.y = v6 + 0.0;
  v18.fields.z = v7 + 0.0;
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v8, v18, 0LL);
  v10 = v2->fields.__4__this;
  if ( !v10 )
    goto LABEL_17;
  this = (MyRoomControl___c__DisplayClass411_0_o *)v10->fields.photoMasterTexture;
  if ( !this )
    goto LABEL_17;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  Component_object = GameObjectExtensions__SafeGetComponent_object_(
                       gameObject,
                       (const MethodInfo_2FC28D8 *)Method_GameObjectExtensions_SafeGetComponent_UIPanel___);
  v10->fields.photoMasterPanel = (struct UIPanel_o *)Component_object;
  sub_1B8635C((CGThumbnailListItem_o *)&v10->fields.photoMasterPanel, (int32_t)Component_object, v13, v14);
  v15 = v2->fields.__4__this;
  if ( !v15
    || (this = (MyRoomControl___c__DisplayClass411_0_o *)v15->fields.photoMasterPanel) == 0LL
    || (UIPanel__set_depth((UIPanel_o *)this, 15, 0LL), (v16 = v2->fields.__4__this) == 0LL)
    || (this = (MyRoomControl___c__DisplayClass411_0_o *)v16->fields.photoMasterTexture) == 0LL )
  {
LABEL_17:
    sub_1B86614(this, method);
  }
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  GameObjectExtensions__SetLocalScale_34384400(v17, 0.9, 0LL);
  ActionExtensions__Call(v2->fields.func, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass416_0___ctor(
        MyRoomControl___c__DisplayClass416_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass416_0___ChangePhotoCampaignServantFace_b__0(
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
    sub_1B86614(_4__this, method);
  }
  v12 = this->fields.figureIndex;
  if ( (unsigned int)v12 >= v11->max_length )
LABEL_14:
    sub_1B8661C(_4__this, method);
  _4__this = (struct MyRoomControl_o *)v11->m_Items[v12];
  if ( !_4__this )
    goto LABEL_13;
  v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)_4__this, 0LL);
  GameObjectExtensions__SetLocalScale_34384400(v13, scale, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass433_0___ctor(
        MyRoomControl___c__DisplayClass433_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__0(
        MyRoomControl___c__DisplayClass433_0_o *this,
        int32_t targetType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass433_0_o *v4; // x19
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
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_o *_9__3; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct MyRoomControl_o *v25; // x8
  System_Collections_Generic_List_T__o *photoTargetList; // x20
  int32_t Item; // w0
  struct MyRoomControl_o *v28; // x8
  __int64 v29; // x8
  __int64 v30; // x9
  __int64 v31; // x8
  struct MyRoomControl_o *v32; // x8
  int64_t v33; // x22
  struct PhotoStandFigureComponent_array *v34; // x9
  __int64 targetIndex; // x10
  PhotoStandFigureComponent_o *v36; // x9
  PhotoServantSelectMenu_o *photoServantSelectMenu; // x23
  System_Action_long__int__o *_9__1; // x25
  int32_t v39; // w2
  const MethodInfo *v40; // x3

  v4 = this;
  if ( (byte_4A49A64 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_long__int__TypeInfo, *(_QWORD *)&targetType);
    sub_1B863B8(&System_Action_int__int__TypeInfo, v5);
    sub_1B863B8(&System_Action_TypeInfo, v6);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__1__, v9);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__2__, v10);
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1B863B8(
                                                       &Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__3__,
                                                       v11);
    byte_4A49A64 = 1;
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
      this = (MyRoomControl___c__DisplayClass433_0_o *)_4__this->fields.photoTargetList;
      if ( !this )
        goto LABEL_46;
      this = (MyRoomControl___c__DisplayClass433_0_o *)System_Collections_Generic_List_Int32Enum___get_Item(
                                                         (System_Collections_Generic_List_T__o *)this,
                                                         v4->fields.targetIndex,
                                                         (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
      v32 = v4->fields.__4__this;
      if ( (_DWORD)this )
      {
        if ( !v32 )
          goto LABEL_46;
        v33 = -1LL;
        goto LABEL_42;
      }
      if ( !v32 )
        goto LABEL_46;
      v34 = v32->fields.photoStandFigures;
      if ( !v34 )
        goto LABEL_46;
      targetIndex = v4->fields.targetIndex;
      if ( (unsigned int)targetIndex >= v34->max_length )
        goto LABEL_47;
      v36 = v34->m_Items[targetIndex];
      if ( !v36 )
        goto LABEL_46;
      v33 = v36->fields._UserSvtId_k__BackingField;
LABEL_42:
      photoServantSelectMenu = v32->fields.photoServantSelectMenu;
      v32->fields.targetChangeAnotherTargetType = v4->fields.anotherTargetType;
      v32->fields.targetChangeIsLeft = v4->fields.isLeft;
      _9__1 = v4->fields.__9__1;
      if ( !_9__1 )
      {
        _9__1 = (System_Action_long__int__o *)sub_1B86604(System_Action_long__int__TypeInfo);
        System_Action_long__int____ctor(
          _9__1,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__1__,
          0LL);
        v4->fields.__9__1 = _9__1;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__1, (int32_t)_9__1, v39, v40);
      }
      if ( !photoServantSelectMenu )
LABEL_46:
        sub_1B86614(this, *(_QWORD *)&targetType);
      PhotoServantSelectMenu__Open(
        photoServantSelectMenu,
        _9__1,
        UserSvtId_k__BackingField,
        ImageLimitCount_k__BackingField,
        v33,
        0LL);
      return;
    case 1:
      _9__2 = v4->fields.__9__2;
      v19 = v4->fields.__4__this;
      if ( !_9__2 )
      {
        _9__2 = (System_Action_int__int__o *)sub_1B86604(System_Action_int__int__TypeInfo);
        System_Action_int__int____ctor(
          _9__2,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__2__,
          0LL);
        v4->fields.__9__2 = _9__2;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__2, (int32_t)_9__2, v20, v21);
      }
      _9__3 = v4->fields.__9__3;
      if ( !_9__3 )
      {
        _9__3 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
        System_Action___ctor(
          _9__3,
          (Il2CppObject *)v4,
          Method_MyRoomControl___c__DisplayClass433_0__OpenChangeTargetSelectDialog_b__3__,
          0LL);
        v4->fields.__9__3 = _9__3;
        sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__9__3, (int32_t)_9__3, v23, v24);
      }
      if ( !v19 )
        goto LABEL_46;
      MyRoomControl__OpenMasterEquipSettingDialog(v19, _9__2, _9__3, 0LL);
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
        0LL);
      return;
    case 3:
      v25 = v4->fields.__4__this;
      if ( !v25 )
        goto LABEL_46;
      photoTargetList = (System_Collections_Generic_List_T__o *)v25->fields.photoTargetList;
      if ( v4->fields.isLeft )
      {
        if ( !photoTargetList )
          goto LABEL_46;
        Item = System_Collections_Generic_List_Int32Enum___get_Item(
                 photoTargetList,
                 1,
                 (const MethodInfo_35E1E70 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__get_Item__);
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          0,
          Item,
          (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        v28 = v4->fields.__4__this;
        if ( !v28 )
          goto LABEL_46;
        this = (MyRoomControl___c__DisplayClass433_0_o *)v28->fields.photoTargetList;
        if ( !this )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          1,
          3,
          (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass433_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
        v29 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
        if ( !v29 )
          goto LABEL_46;
        if ( *(_DWORD *)(v29 + 24) < 2u )
LABEL_47:
          sub_1B8661C(this, *(_QWORD *)&targetType);
        v30 = *(_QWORD *)(v29 + 40);
        if ( !v30 )
          goto LABEL_46;
        v31 = *(_QWORD *)(v29 + 32);
        if ( !v31 )
          goto LABEL_46;
        *(_QWORD *)(v31 + 40) = *(_QWORD *)(v30 + 40);
        *(_QWORD *)(v31 + 48) = *(_QWORD *)(v30 + 48);
      }
      else
      {
        if ( !photoTargetList )
          goto LABEL_46;
        System_Collections_Generic_List_Int32Enum___set_Item(
          photoTargetList,
          1,
          3,
          (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
        this = (MyRoomControl___c__DisplayClass433_0_o *)v4->fields.__4__this;
        if ( !this )
          goto LABEL_46;
      }
      MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 1, 0LL);
      return;
    default:
      return;
  }
}


void __fastcall MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__1(
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
  if ( (byte_4A49A65 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1B863B8(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       userSvtId);
    byte_4A49A65 = 1;
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
    (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass433_0_o *)v6->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v8 = *(_QWORD *)&this[9].fields.isSelectedAnotherSvt;
  if ( !v8 )
    goto LABEL_10;
  targetIndex = v6->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v8 + 24) )
    sub_1B8661C(this, userSvtId);
  v10 = *(_QWORD *)(v8 + 8 * targetIndex + 32);
  if ( !v10 )
LABEL_10:
    sub_1B86614(this, userSvtId);
  *(_QWORD *)(v10 + 40) = userSvtId;
  *(_DWORD *)(v10 + 48) = limitCount;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__2(
        MyRoomControl___c__DisplayClass433_0_o *this,
        int32_t equipId,
        int32_t genderType,
        const MethodInfo *method)
{
  MyRoomControl___c__DisplayClass433_0_o *v6; // x21
  struct MyRoomControl_o *_4__this; // x8

  v6 = this;
  if ( (byte_4A49A66 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass433_0_o *)sub_1B863B8(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       *(_QWORD *)&equipId);
    byte_4A49A66 = 1;
  }
  _4__this = v6->fields.__4__this;
  if ( !_4__this
    || (this = (MyRoomControl___c__DisplayClass433_0_o *)_4__this->fields.photoTargetList) == 0LL
    || (System_Collections_Generic_List_Int32Enum___set_Item(
          (System_Collections_Generic_List_T__o *)this,
          v6->fields.targetIndex,
          1,
          (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__),
        (this = (MyRoomControl___c__DisplayClass433_0_o *)v6->fields.__4__this) == 0LL) )
  {
    sub_1B86614(this, *(_QWORD *)&equipId);
  }
  LODWORD(this[17].fields.cancelCallback) = equipId;
  HIDWORD(this[17].fields.cancelCallback) = genderType;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass433_0___OpenChangeTargetSelectDialog_b__3(
        MyRoomControl___c__DisplayClass433_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


void __fastcall MyRoomControl___c__DisplayClass434_0___ctor(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__0(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__OpenChangeTargetSelectDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__1(
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
  if ( (byte_4A49A67 & 1) == 0 )
  {
    this = (MyRoomControl___c__DisplayClass434_0_o *)sub_1B863B8(
                                                       &Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__,
                                                       *(_QWORD *)&imageId);
    byte_4A49A67 = 1;
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
    (const MethodInfo_35E1EC4 *)Method_System_Collections_Generic_List_PhotoUtility_TargetType__set_Item__);
  this = (MyRoomControl___c__DisplayClass434_0_o *)v4->fields.__4__this;
  if ( !this )
    goto LABEL_10;
  v6 = *(_QWORD *)&this[15].fields.anotherTargetType;
  if ( !v6 )
    goto LABEL_10;
  targetIndex = v4->fields.targetIndex;
  if ( (unsigned int)targetIndex >= *(_DWORD *)(v6 + 24) )
    sub_1B8661C(this, *(_QWORD *)&imageId);
  v8 = *(_QWORD *)(v6 + 8 * targetIndex + 32);
  if ( !v8 )
LABEL_10:
    sub_1B86614(this, *(_QWORD *)&imageId);
  *(_DWORD *)(v8 + 52) = imageId;
  MyRoomControl__DispPhotoCampaign((MyRoomControl_o *)this, 1, 0, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass434_0___OpenStaffChangeDialog_b__2(
        MyRoomControl___c__DisplayClass434_0_o *this,
        const MethodInfo *method)
{
  MyRoomControl_o *_4__this; // x0

  _4__this = this->fields.__4__this;
  if ( !_4__this )
    sub_1B86614(0LL, method);
  MyRoomControl__OpenStaffChangeDialog(
    _4__this,
    this->fields.anotherTargetType,
    this->fields.isLeft,
    this->fields.cancelCallback,
    0LL);
}


void __fastcall MyRoomControl___c__DisplayClass435_0___ctor(
        MyRoomControl___c__DisplayClass435_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass435_0___OpenStaffDialog_b__0(
        MyRoomControl___c__DisplayClass435_0_o *this,
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
  __int64 v17; // x21
  Il2CppObject *Item; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_List_object__o **v22; // x22
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_List_object__o *v25; // x23
  System_Action_T__o *staffCostumeSelectDecideAction; // x19
  struct System_Func_StaffPhotoCostumeEntity__bool__o *_9__1; // x25
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t klass_high; // w23
  struct MyRoomControl_o *_4__this; // x8
  PhotoCampaignStaffCostumeSelectDialog_o *photoStaffCostumeSelectDialog; // x20
  System_Action_bool__int__o *v33; // x24

  if ( (byte_4A49A68 & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_int___, isDecide);
    sub_1B863B8(&System_Action_bool__int__TypeInfo, v9);
    sub_1B863B8(&Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___, v10);
    sub_1B863B8(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Count__, v12);
    sub_1B863B8(&Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__, v13);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__1__, v14);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass435_1__OpenStaffDialog_b__2__, v15);
    sub_1B863B8(&MyRoomControl___c__DisplayClass435_1_TypeInfo, v16);
    byte_4A49A68 = 1;
  }
  v17 = sub_1B86604(MyRoomControl___c__DisplayClass435_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    goto LABEL_18;
  *(_QWORD *)(v17 + 24) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 24), (int32_t)this, v20, v21);
  *(_QWORD *)(v17 + 16) = staffPhotoCostumeEntityList;
  v22 = (System_Collections_Generic_List_object__o **)(v17 + 16);
  sub_1B8635C((CGThumbnailListItem_o *)(v17 + 16), (int32_t)staffPhotoCostumeEntityList, v23, v24);
  if ( isDecide )
  {
    v25 = *v22;
    if ( !*v22 )
      goto LABEL_18;
    if ( v25->fields._size == 1 )
    {
      staffCostumeSelectDecideAction = (System_Action_T__o *)this->fields.staffCostumeSelectDecideAction;
      Item = System_Collections_Generic_List_object___get_Item(
               *v22,
               0,
               (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_StaffPhotoCostumeEntity__get_Item__);
      if ( Item )
      {
        ActionExtensions__Call_int_(
          staffCostumeSelectDecideAction,
          (int32_t)Item[2].monitor,
          (const MethodInfo_2EBFB44 *)Method_ActionExtensions_Call_int___);
        return;
      }
LABEL_18:
      sub_1B86614(Item, v19);
    }
    _9__1 = this->fields.__9__1;
    if ( !_9__1 )
    {
      _9__1 = (struct System_Func_StaffPhotoCostumeEntity__bool__o *)sub_1B86604(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
      System_Func_object__bool____ctor(
        (System_Func_object__bool__o *)_9__1,
        (Il2CppObject *)this,
        Method_MyRoomControl___c__DisplayClass435_0__OpenStaffDialog_b__1__,
        0LL);
      this->fields.__9__1 = _9__1;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields.__9__1, (int32_t)_9__1, v28, v29);
    }
    Item = System_Linq_Enumerable__FirstOrDefault_object__49893388(
             (System_Collections_Generic_IEnumerable_TSource__o *)v25,
             (System_Func_TSource__bool__o *)_9__1,
             (const MethodInfo_2F9500C *)Method_System_Linq_Enumerable_FirstOrDefault_StaffPhotoCostumeEntity___);
    if ( Item )
      klass_high = HIDWORD(Item[1].klass);
    else
      klass_high = -1;
    _4__this = this->fields.__4__this;
    if ( !_4__this )
      goto LABEL_18;
    photoStaffCostumeSelectDialog = _4__this->fields.photoStaffCostumeSelectDialog;
    v33 = (System_Action_bool__int__o *)sub_1B86604(System_Action_bool__int__TypeInfo);
    System_Action_bool__int____ctor(
      v33,
      (Il2CppObject *)v17,
      Method_MyRoomControl___c__DisplayClass435_1__OpenStaffDialog_b__2__,
      0LL);
    if ( !photoStaffCostumeSelectDialog )
      goto LABEL_18;
    PhotoCampaignStaffCostumeSelectDialog__Open(
      photoStaffCostumeSelectDialog,
      v33,
      staffId,
      klass_high,
      (System_Collections_Generic_List_StaffPhotoCostumeEntity__o *)*v22,
      0LL);
  }
  else
  {
    ActionExtensions__Call(this->fields.staffSelectCancelAction, 0LL);
  }
}


bool __fastcall MyRoomControl___c__DisplayClass435_0___OpenStaffDialog_b__1(
        MyRoomControl___c__DisplayClass435_0_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.imageId == this->fields.baseStaffImageId;
}


void __fastcall MyRoomControl___c__DisplayClass435_1___ctor(
        MyRoomControl___c__DisplayClass435_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MyRoomControl___c__DisplayClass435_1___OpenStaffDialog_b__2(
        MyRoomControl___c__DisplayClass435_1_o *this,
        bool isCostumeDecide,
        int32_t idx,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x22
  Il2CppObject *object__49883040; // x0
  __int64 v13; // x1
  struct MyRoomControl___c__DisplayClass435_0_o *CS___8__locals1; // x8
  System_Action_T__o *staffCostumeSelectDecideAction; // x20
  struct System_Collections_Generic_List_StaffPhotoCostumeEntity__o *staffPhotoCostumeEntityList; // x19
  System_Func_object__bool__o *v17; // x21

  if ( (byte_4A49A69 & 1) == 0 )
  {
    sub_1B863B8(&Method_ActionExtensions_Call_int___, isCostumeDecide);
    sub_1B863B8(&Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____76125560, v7);
    sub_1B863B8(&System_Func_StaffPhotoCostumeEntity__bool__TypeInfo, v8);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass435_2__OpenStaffDialog_b__3__, v9);
    sub_1B863B8(&MyRoomControl___c__DisplayClass435_2_TypeInfo, v10);
    byte_4A49A69 = 1;
  }
  v11 = sub_1B86604(MyRoomControl___c__DisplayClass435_2_TypeInfo);
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
    v17 = (System_Func_object__bool__o *)sub_1B86604(System_Func_StaffPhotoCostumeEntity__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v17,
      (Il2CppObject *)v11,
      Method_MyRoomControl___c__DisplayClass435_2__OpenStaffDialog_b__3__,
      0LL);
    object__49883040 = System_Linq_Enumerable__First_object__49883040(
                         (System_Collections_Generic_IEnumerable_TSource__o *)staffPhotoCostumeEntityList,
                         (System_Func_TSource__bool__o *)v17,
                         (const MethodInfo_2F927A0 *)Method_System_Linq_Enumerable_First_StaffPhotoCostumeEntity____76125560);
    if ( object__49883040 )
    {
      ActionExtensions__Call_int_(
        staffCostumeSelectDecideAction,
        (int32_t)object__49883040[2].monitor,
        (const MethodInfo_2EBFB44 *)Method_ActionExtensions_Call_int___);
      return;
    }
LABEL_9:
    sub_1B86614(object__49883040, v13);
  }
  ActionExtensions__Call(CS___8__locals1->fields.staffCostumeSelectCancelAction, 0LL);
}


void __fastcall MyRoomControl___c__DisplayClass435_2___ctor(
        MyRoomControl___c__DisplayClass435_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass435_2___OpenStaffDialog_b__3(
        MyRoomControl___c__DisplayClass435_2_o *this,
        StaffPhotoCostumeEntity_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_1B86614(this, 0LL);
  return x->fields.idx == this->fields.idx;
}


void __fastcall MyRoomControl___c__DisplayClass455_0___ctor(
        MyRoomControl___c__DisplayClass455_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass455_0___GetDisplayBgGroupIndex_b__0(
        MyRoomControl___c__DisplayClass455_0_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B86614(this, 0LL);
  return saveData->fields.groupId == this->fields.displayGroupId;
}


void __fastcall MyRoomControl___c__DisplayClass455_1___ctor(
        MyRoomControl___c__DisplayClass455_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass455_1___GetDisplayBgGroupIndex_b__1(
        MyRoomControl___c__DisplayClass455_1_o *this,
        MyRoomControl_BackGroundSaveData_o *data,
        const MethodInfo *method)
{
  struct MyRoomControl___c__DisplayClass455_0_o *CS___8__locals1; // x8

  if ( !data || (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL )
    sub_1B86614(this, data);
  return data->fields.groupId == CS___8__locals1->fields.displayGroupId && data->fields.warId == this->fields.warId;
}


void __fastcall MyRoomControl___c__DisplayClass456_0___ctor(
        MyRoomControl___c__DisplayClass456_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MyRoomControl___c__DisplayClass456_0___SaveDisplayOverWriteIds_b__1(
        MyRoomControl___c__DisplayClass456_0_o *this,
        MyRoomControl_BackGroundSaveData_o *saveData,
        const MethodInfo *method)
{
  if ( !saveData )
    sub_1B86614(this, 0LL);
  return saveData->fields.warId == this->fields.mainGroupWarId;
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
  const MethodInfo *v16; // x3

  if ( (byte_4A49A71 & 1) == 0 )
  {
    sub_1B863B8(&System_Func_bool__TypeInfo, method);
    sub_1B863B8(&Method_MyRoomControl__initMaterial_b__287_0__, v3);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B863B8(&UnityEngine_WaitUntil_TypeInfo, v5);
    sub_1B863B8(&StringLiteral_6903/*"GO_NEXT"*/, v6);
    byte_4A49A71 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = (Il2CppObject *)this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance
      || (CommonUI__SetLoadMode((CommonUI_o *)Instance, 0, 0LL), !_4__this)
      || (Instance = (Il2CppObject *)_4__this[2].monitor) == 0LL )
    {
LABEL_13:
      sub_1B86614(Instance, v10);
    }
    PlayMakerFSM__SendEvent((PlayMakerFSM_o *)Instance, (System_String_o *)StringLiteral_6903/*"GO_NEXT"*/, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !Instance )
    goto LABEL_13;
  v11 = 1;
  CommonUI__SetLoadMode((CommonUI_o *)Instance, 1, 0LL);
  v12 = (System_Func_bool__o *)sub_1B86604(System_Func_bool__TypeInfo);
  System_Func_bool____ctor(v12, _4__this, Method_MyRoomControl__initMaterial_b__287_0__, 0LL);
  v13 = (UnityEngine_WaitUntil_o *)sub_1B86604(UnityEngine_WaitUntil_TypeInfo);
  UnityEngine_WaitUntil___ctor(v13, v12, 0LL);
  this->fields.__2__current = (Il2CppObject *)v13;
  p__2__current = &this->fields.__2__current;
  sub_1B8635C((CGThumbnailListItem_o *)p__2__current, (int32_t)v13, v15, v16);
  *((_DWORD *)p__2__current - 2) = 1;
  return v11;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__initMaterial_d__287_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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


void __fastcall MyRoomControl__svtVoicePlayAct_d__344___ctor(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall MyRoomControl__svtVoicePlayAct_d__344__MoveNext(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  MyRoomControl__svtVoicePlayAct_d__344_o *v4; // x19
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
  struct MyRoomControl_o *_4__this; // x20
  Il2CppObject *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  struct MyRoomControl_o *v25; // x1
  CommonUI_o *v26; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  CGThumbnailListItem_o *p__2__current; // x19
  bool result; // w0
  System_Collections_Generic_List_T__o *v31; // x21
  struct System_Object_array *items; // x8
  _QWORD *v33; // x9
  __int64 size; // x10
  int32_t *item; // x8
  ServantVoiceEntity_o *v36; // x22
  System_String_o *VoiceAssetName; // x0
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  Il2CppObject *v40; // x23
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  struct MaterialEventLogListViewItem_Info_o *v44; // x8
  System_String_o *v45; // x0
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  struct MaterialEventLogListViewItem_Info_o *v48; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40879976; // x0
  System_Collections_Generic_List_object__o **p_svtVoiceDataList_5__4; // x21
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  struct MaterialEventLogListViewItem_Info_o *v53; // x8
  System_Collections_Generic_List_ServantVoiceData____o *VoiceList_40879248; // x0
  int32_t v55; // w2
  const MethodInfo *v56; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *_8__1; // x22
  int32_t v58; // w2
  const MethodInfo *v59; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *v60; // x8
  struct MyRoomControl___c__DisplayClass344_0_o *v61; // x8
  struct MaterialEventLogListViewItem_Info_o *v62; // x8
  int32_t v63; // w22
  struct MyRoomControl_o *v64; // x8
  struct MyRoomControl_o *v65; // x8
  struct MaterialEventLogListViewItem_Info_o *v66; // x8
  int32_t svt_id; // w24
  StandFigureBack_o *bondsStandFigureBack; // x21
  int32_t v69; // w23
  Il2CppObject *v70; // x26
  System_Action_o *v71; // x25
  struct MyRoomControl___c__DisplayClass344_0_o *v72; // x8
  CGThumbnailListItem_o *v73; // x19
  int v74; // w8
  int32_t v75; // w21
  MyRoomControl__svtVoicePlayAct_d__344_o *v76; // x22
  struct MyRoomControl_o *v77; // x8
  CommonUI_o *v78; // x21
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  CommonUI_o *v83; // x21
  int32_t v84; // w2
  const MethodInfo *v85; // x3
  struct MyRoomControl___c__DisplayClass344_0_o *v86; // x8
  CommonUI_o *v87; // x20
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  __int16 v90; // [xsp+1Ch] [xbp-54h] BYREF
  int32_t formId[2]; // [xsp+28h] [xbp-48h] BYREF

  v4 = this;
  if ( (byte_4A49A72 & 1) == 0 )
  {
    sub_1B863B8(&System_Action_TypeInfo, method);
    sub_1B863B8(&AvalonSceneManager_TypeInfo, v5);
    sub_1B863B8(&char_TypeInfo, v6);
    sub_1B863B8(&Method_DataManager_GetMasterData_ServantVoiceMaster___, v7);
    sub_1B863B8(&Method_System_Collections_Generic_List_CondType_Kind__Add__, v8);
    sub_1B863B8(&Method_System_Collections_Generic_List_CondType_Kind___ctor__, v9);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Count__, v10);
    sub_1B863B8(&Method_System_Collections_Generic_List_int__get_Item__, v11);
    sub_1B863B8(&Method_System_Collections_Generic_List_ServantVoiceData____get_Item__, v12);
    sub_1B863B8(&System_Collections_Generic_List_CondType_Kind__TypeInfo, v13);
    sub_1B863B8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14);
    sub_1B863B8(&Method_SingletonMonoBehaviour_DataManager__get_Instance__, v15);
    sub_1B863B8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__, v16);
    sub_1B863B8(&Method_MyRoomControl___c__DisplayClass344_0__svtVoicePlayAct_b__0__, v17);
    this = (MyRoomControl__svtVoicePlayAct_d__344_o *)sub_1B863B8(&MyRoomControl___c__DisplayClass344_0_TypeInfo, v18);
    byte_4A49A72 = 1;
  }
  *(_QWORD *)formId = 0LL;
  _4__this = v4->fields.__4__this;
  switch ( v4->fields.__1__state )
  {
    case 0:
      v4->fields.__1__state = -1;
      v20 = (Il2CppObject *)sub_1B86604(MyRoomControl___c__DisplayClass344_0_TypeInfo);
      System_Object___ctor(v20, 0LL);
      v4->fields.__8__1 = (struct MyRoomControl___c__DisplayClass344_0_o *)v20;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields.__8__1, (int32_t)v20, v21, v22);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v4->fields.__8__1;
      if ( !this )
        goto LABEL_126;
      v25 = v4->fields.__4__this;
      *(_QWORD *)&this->fields.__1__state = v25;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields, (int32_t)v25, v23, v24);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v26 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v26 )
        goto LABEL_126;
      CommonUI__maskFadeout(v26, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_10:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(p__2__current, 0, v27, v28);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
      if ( !_4__this )
        goto LABEL_126;
      MyRoomControl__stopSvtVoice(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 0, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 0, 0LL);
      v31 = (System_Collections_Generic_List_T__o *)sub_1B86604(System_Collections_Generic_List_CondType_Kind__TypeInfo);
      System_Collections_Generic_List_Int32Enum____ctor(
        v31,
        (const MethodInfo_35E190C *)Method_System_Collections_Generic_List_CondType_Kind___ctor__);
      if ( !v31 )
        goto LABEL_126;
      items = v31->fields._items;
      v33 = Method_System_Collections_Generic_List_CondType_Kind__Add__;
      ++v31->fields._version;
      if ( !items )
        goto LABEL_126;
      size = v31->fields._size;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_Int32Enum___AddWithResize(
          v31,
          81,
          *(const MethodInfo_35E2160 **)(*(_QWORD *)(v33[4] + 192LL) + 112LL));
      }
      else
      {
        v31->fields._size = size + 1;
        *((_DWORD *)items->m_Items + size) = 81;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)DataManager__GetMasterData_object_(
                                                          (DataManager_o *)this,
                                                          (const MethodInfo_2F6DCB8 *)Method_DataManager_GetMasterData_ServantVoiceMaster___);
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
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      v36 = (ServantVoiceEntity_o *)this;
      VoiceAssetName = ServantVoiceEntity__getVoiceAssetName((ServantVoiceEntity_o *)this, 0LL);
      v4->fields._voiceAssetName_5__2 = VoiceAssetName;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._voiceAssetName_5__2, (int32_t)VoiceAssetName, v38, v39);
      v40 = (Il2CppObject *)System_Int32__ToString((int)v36 + 20, 0LL);
      v90 = 95;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)j_il2cpp_value_box_0(char_TypeInfo, &v90, v41, v42, v43);
      v44 = v4->fields.item;
      if ( !v44 )
        goto LABEL_126;
      v45 = System_String__Concat_61683176(v40, (Il2CppObject *)this, (Il2CppObject *)v44->fields.voiceId, 0LL);
      v4->fields._playSvtVoiceId_5__3 = v45;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._playSvtVoiceId_5__3, (int32_t)v45, v46, v47);
      v48 = v4->fields.item;
      if ( !v48 )
        goto LABEL_126;
      VoiceList_40879976 = ServantVoiceEntity__getVoiceList_40879976(
                             v36,
                             v48->fields.svtVoiceType,
                             v4->fields._playSvtVoiceId_5__3,
                             (System_Collections_Generic_List_CondType_Kind__o *)v31,
                             0,
                             0LL);
      v4->fields._svtVoiceDataList_5__4 = VoiceList_40879976;
      p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o **)&v4->fields._svtVoiceDataList_5__4;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._svtVoiceDataList_5__4, (int32_t)VoiceList_40879976, v51, v52);
      if ( v4->fields._svtVoiceDataList_5__4 && (*p_svtVoiceDataList_5__4)->fields._size )
        goto LABEL_42;
      v53 = v4->fields.item;
      if ( !v53 )
        goto LABEL_126;
      VoiceList_40879248 = ServantVoiceEntity__getVoiceList_40879248(
                             v36,
                             v53->fields.svtVoiceType,
                             3,
                             v53->fields.voiceCondValue,
                             0LL,
                             -1,
                             0LL);
      *p_svtVoiceDataList_5__4 = (System_Collections_Generic_List_object__o *)VoiceList_40879248;
      sub_1B8635C((CGThumbnailListItem_o *)&v4->fields._svtVoiceDataList_5__4, (int32_t)VoiceList_40879248, v55, v56);
LABEL_42:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      _8__1 = v4->fields.__8__1;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !_8__1 )
        goto LABEL_126;
      _8__1->fields.bondsSvtObj = (struct UnityEngine_GameObject_o *)this;
      sub_1B8635C((CGThumbnailListItem_o *)&_8__1->fields.bondsSvtObj, (int32_t)this, v58, v59);
      v60 = v4->fields.__8__1;
      if ( !v60 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v60->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v61 = v4->fields.__8__1;
      if ( !v61 )
        goto LABEL_126;
      v61->fields.createStandEnd = 0;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.materialImageIdList;
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_int___get_Item(
                                                          (System_Collections_Generic_List_int__o *)this,
                                                          _4__this->fields.materialFigureSvtDispIdx,
                                                          (const MethodInfo_35DF644 *)Method_System_Collections_Generic_List_int__get_Item__);
      v62 = v4->fields.item;
      if ( !v62 )
        goto LABEL_126;
      v63 = (int)this;
      MyRoomControl__SetImageIdAndFormId(_4__this, formId, &formId[1], v62->fields.svt_id, (int32_t)this, 0LL);
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                          *p_svtVoiceDataList_5__4,
                                                          0,
                                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
        goto LABEL_127;
      v64 = this->fields.__4__this;
      if ( !v64 )
        goto LABEL_126;
      if ( !HIDWORD(v64->fields.myRoomListCtr) )
        goto LABEL_59;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)*p_svtVoiceDataList_5__4;
      if ( !*p_svtVoiceDataList_5__4 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                          (System_Collections_Generic_List_object__o *)this,
                                                          0,
                                                          (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
      if ( !this )
        goto LABEL_126;
      if ( !LODWORD(this->fields.__2__current) )
LABEL_127:
        sub_1B8661C(this, method);
      v65 = this->fields.__4__this;
      if ( !v65 )
        goto LABEL_126;
      formId[1] = (int32_t)v65->fields.myRoomListCtr;
LABEL_59:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
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
      v71 = (System_Action_o *)sub_1B86604(System_Action_TypeInfo);
      System_Action___ctor(v71, v70, Method_MyRoomControl___c__DisplayClass344_0__svtVoicePlayAct_b__0__, 0LL);
      if ( !bondsStandFigureBack )
        goto LABEL_126;
      StandFigureBack__SetMyRoomStandFigure(bondsStandFigureBack, svt_id, v63, 1, 0, v69, 10, v71, 0, 0LL);
LABEL_63:
      v72 = v4->fields.__8__1;
      if ( !v72 )
        goto LABEL_126;
      if ( !v72->fields.createStandEnd )
      {
        v4->fields.__2__current = 0LL;
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v73, 0, v2, v3);
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
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v73, 0, v2, v3);
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
          this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_Collections_Generic_List_object___get_Item(
                                                              (System_Collections_Generic_List_object__o *)method,
                                                              v75,
                                                              (const MethodInfo_35FC688 *)Method_System_Collections_Generic_List_ServantVoiceData____get_Item__);
          if ( !this )
            goto LABEL_126;
          v76 = this;
          if ( !LODWORD(this->fields.__2__current) )
            goto LABEL_127;
          v77 = this->fields.__4__this;
          if ( !v77 )
            goto LABEL_126;
          this = (MyRoomControl__svtVoicePlayAct_d__344_o *)System_String__op_Equality(
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
        this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice_32136508(
          (MyRoomSvtControl_o *)this,
          (ServantVoiceData_array *)v76,
          v4->fields._voiceAssetName_5__2,
          0LL);
      }
      else
      {
        this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
        if ( !this )
          goto LABEL_126;
        MyRoomSvtControl__setSvtVoice(
          (MyRoomSvtControl_o *)this,
          (System_Collections_Generic_List_ServantVoiceData____o *)method,
          v4->fields._voiceAssetName_5__2,
          0LL);
      }
LABEL_84:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__SetVoiceData((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__playVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v78 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v78 )
        goto LABEL_126;
      CommonUI__maskFadein(v78, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_90:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v73, 0, v79, v80);
        v74 = 4;
        goto LABEL_125;
      }
LABEL_93:
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      if ( MyRoomSvtControl__isPlay((MyRoomSvtControl_o *)this, 0LL) && UnityEngine_Input__get_touchCount(0LL) <= 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v73, 0, v81, v82);
        v74 = 5;
        goto LABEL_125;
      }
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v83 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v83 )
        goto LABEL_126;
      CommonUI__maskFadeout(v83, 2, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_101:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v4->fields.__2__current = 0LL;
        v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1B8635C(v73, 0, v84, v85);
        v74 = 6;
        goto LABEL_125;
      }
      if ( !_4__this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsSvtCtr;
      if ( !this )
        goto LABEL_126;
      MyRoomSvtControl__stopVoice((MyRoomSvtControl_o *)this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( !this )
        goto LABEL_126;
      SoundManager__ReleaseAudioAssetStorage((SoundManager_o *)this, v4->fields._voiceAssetName_5__2, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.bondsStandFigureBack;
      if ( !this )
        goto LABEL_126;
      StandFigureBack__Init((StandFigureBack_o *)this, 0LL);
      v86 = v4->fields.__8__1;
      if ( !v86 )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)v86->fields.bondsSvtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.svtObj;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)MyRoomControl__getSvtStandFigure(_4__this, 0LL);
      if ( !this )
        goto LABEL_126;
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)this,
                                                          0LL);
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.multipleViewButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnableMultipleView, 0LL);
      MyRoomControl__SetMultipleViewButtonColor(_4__this, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.photoCampaignButton;
      if ( !this )
        goto LABEL_126;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, _4__this->fields.isEnablePhotoCampaign, 0LL);
      MyRoomControl__SetPhotoCampaignButtonColor(_4__this, 0LL);
      MyRoomControl__setDispMyRoomOptionBtn(_4__this, 1, 0LL);
      MyRoomControl__setMaterialUIMove(_4__this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)_4__this->fields.titleInfo;
      if ( !this )
        goto LABEL_126;
      TitleInfoControl__setDispHeader((TitleInfoControl_o *)this, 1, 0LL);
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v87 = (CommonUI_o *)this;
      if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
      if ( !v87 )
        goto LABEL_126;
      CommonUI__maskFadein(v87, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
LABEL_120:
      this = (MyRoomControl__svtVoicePlayAct_d__344_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( !this )
LABEL_126:
        sub_1B86614(this, method);
      if ( !CommonUI__maskFadeIsBusy((CommonUI_o *)this, 0LL) )
        return 0;
      v4->fields.__2__current = 0LL;
      v73 = (CGThumbnailListItem_o *)&v4->fields.__2__current;
      sub_1B8635C(v73, 0, v88, v89);
      v74 = 7;
LABEL_125:
      LODWORD(v73[-1].fields._ThumbnailSpritePath_k__BackingField) = v74;
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


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__344__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn MyRoomControl__svtVoicePlayAct_d__344__System_Collections_IEnumerator_Reset(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_MyRoomControl__svtVoicePlayAct_d__344_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
}


Il2CppObject *__fastcall MyRoomControl__svtVoicePlayAct_d__344__System_Collections_IEnumerator_get_Current(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall MyRoomControl__svtVoicePlayAct_d__344__System_IDisposable_Dispose(
        MyRoomControl__svtVoicePlayAct_d__344_o *this,
        const MethodInfo *method)
{
  ;
}