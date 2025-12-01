void FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  UILabel_o *infoLb; // x20
  System_String_o *downLoadBtn; // x0
  __int64 v5; // x1
  UILabel_o *infoDetailLb; // x20

  if ( (byte_4CC23B0 & 1) == 0 )
  {
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&StringLiteral_6577/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/);
    sub_1C713B0(&StringLiteral_6578/*"FULLDOWNLOAD_INFO_TXT"*/);
    byte_4CC23B0 = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6578/*"FULLDOWNLOAD_INFO_TXT"*/, 0);
  if ( !infoLb
    || (UILabel__set_text(infoLb, downLoadBtn, 0),
        infoDetailLb = this->fields.infoDetailLb,
        downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6577/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0),
        !infoDetailLb)
    || (UILabel__set_text(infoDetailLb, downLoadBtn, 0), (downLoadBtn = (System_String_o *)this->fields.downLoadBtn) == 0) )
  {
    sub_1C71608(downLoadBtn, v5);
  }
  ((void (__fastcall *)(System_String_o *, __int64, const MethodInfo *))downLoadBtn->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    downLoadBtn,
    1,
    downLoadBtn->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
}


void FullDownloadControl__OnClickFullDl(FullDownloadControl_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  AssetManager_o *downLoadBtn; // x0
  int64_t DownloadSize; // x0
  __int64 v8; // x21
  System_String_o *v9; // x20
  System_String_o *v10; // x22
  Il2CppObject *v11; // x0
  System_String_o *v12; // x21
  System_String_o *v13; // x22
  System_String_o *v14; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v16; // x25
  Il2CppObject *v17; // x20
  System_String_o *v18; // x21
  System_Action_o *v19; // x22

  if ( (byte_4CC23B1 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C713B0(&Method_FullDownloadControl_OnClickFullDl__);
    sub_1C713B0(&Method_FullDownloadControl_closeDlg__);
    sub_1C713B0(&Method_FullDownloadControl_endDownLoad__);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C713B0(&StringLiteral_3783/*"CONNECT_LATEST_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_6574/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/);
    sub_1C713B0(&StringLiteral_6575/*"FULLDOWNLOAD_CONFIRM_MSG"*/);
    sub_1C713B0(&StringLiteral_6576/*"FULLDOWNLOAD_CONFIRM_TITLE"*/);
    sub_1C713B0(&StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC23B1 = 1;
  }
  v3 = Method_FullDownloadControl_OnClickFullDl__;
  if ( (*((_BYTE *)Method_FullDownloadControl_OnClickFullDl__ + 83) & 2) != 0 )
    v3 = (_QWORD *)sub_1C713C8(Method_FullDownloadControl_OnClickFullDl__);
  v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
  OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
  downLoadBtn = (AssetManager_o *)this->fields.downLoadBtn;
  if ( !downLoadBtn )
    goto LABEL_18;
  ((void (__fastcall *)(AssetManager_o *, _QWORD, const char *))downLoadBtn->klass[1]._1.name)(
    downLoadBtn,
    0,
    downLoadBtn->klass[1]._1.namespaze);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  AssetManager__SetupAssetStorageAll(downLoadBtn, 0);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  DownloadSize = AssetManager__GetDownloadSize(downLoadBtn, 0);
  if ( DownloadSize >= 1 )
  {
    v8 = DownloadSize;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v9 = LocalizationManager__Get((System_String_o *)StringLiteral_6576/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0);
    v10 = LocalizationManager__Get((System_String_o *)StringLiteral_6575/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0);
    downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( downLoadBtn )
    {
      v11 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(downLoadBtn, (double)v8, 0);
      v12 = System_String__Format(v10, v11, 0);
      v13 = LocalizationManager__Get((System_String_o *)StringLiteral_6574/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0);
      v14 = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_CANCEL"*/, 0);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v16 = (CommonConfirmDialog_ClickDelegate_o *)sub_1C715FC(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v16, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v9,
          v12,
          v13,
          v14,
          v16,
          0,
          0.0,
          15.0,
          0,
          0,
          0,
          240,
          0,
          1,
          0,
          0,
          0);
        return;
      }
    }
LABEL_18:
    sub_1C71608(downLoadBtn, v5);
  }
  v17 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3783/*"CONNECT_LATEST_MESSAGE"*/, 0);
  v19 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v19, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0);
  if ( !v17 )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v17,
    (System_String_o *)StringLiteral_1/*""*/,
    v18,
    v19,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0.0,
    0,
    0);
}


void FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71709800((UnityEngine_MonoBehaviour_o *)this, All, 0);
}


void FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  AvalonSceneManager_c *v4; // x8
  CommonUI_o *v5; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v7; // x21
  __int64 v8; // x0
  __int64 v9; // x1

  if ( (byte_4CC23B3 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&Method_FullDownloadControl__checkDownLoadData_b__7_0__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC23B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v7 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0);
  if ( !v5 )
    sub_1C71608(v8, v9);
  CommonUI__maskFadeout(v5, 1, DEFAULT_FADE_TIME, v7, 0);
}


void FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  Il2CppObject *Instance; // x21
  System_Action_o *v6; // x0
  System_Action_o *v7; // x22
  intptr_t *v8; // x8
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_4CC23B2 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_FullDownloadControl_checkDownLoadData__);
    sub_1C713B0(&Method_FullDownloadControl_endDownLoad__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4CC23B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
  v7 = v6;
  if ( isRes )
    v8 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v8 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v6, (Il2CppObject *)this, *v8, 0);
  if ( !Instance )
    sub_1C71608(v9, v10);
  CommonUI__CloseConfirmDialog_31440904((CommonUI_o *)Instance, v7, 0);
}


System_Collections_IEnumerator_o *FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC23B4 & 1) == 0 )
  {
    sub_1C713B0(&FullDownloadControl__downLoadAll_d__8_TypeInfo);
    byte_4CC23B4 = 1;
  }
  v3 = sub_1C715FC(FullDownloadControl__downLoadAll_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C71354((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4CC23B5 & 1) == 0 )
  {
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CC23B5 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0),
        (Instance = (AssetManager_o *)this->fields.downLoadBtn) == 0) )
  {
    sub_1C71608(Instance, v4);
  }
  ((void (__fastcall *)(AssetManager_o *, __int64, const char *))Instance->klass[1]._1.name)(
    Instance,
    1,
    Instance->klass[1]._1.namespaze);
}


void FullDownloadControl__downLoadAll_d__8___ctor(
        FullDownloadControl__downLoadAll_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool FullDownloadControl__downLoadAll_d__8__MoveNext(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  Il2CppObject *v4; // x20
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  CommonUI_o *v24; // x19

  if ( (byte_4CC23B6 & 1) == 0 )
  {
    sub_1C713B0(&AvalonSceneManager_TypeInfo);
    sub_1C713B0(&ManagementManager_TypeInfo);
    sub_1C713B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C713B0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_1C713B0(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_4CC23B6 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    if ( CommonUI__IsBusyLoad(Instance, 0) )
      goto LABEL_12;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 0, 0);
    if ( !_4__this )
      goto LABEL_21;
    Instance = (CommonUI_o *)_4__this->fields.downLoadBtn;
    if ( !Instance )
      goto LABEL_21;
    ((void (__fastcall *)(CommonUI_o *, __int64, const char *))Instance->klass[1]._1.name)(
      Instance,
      1,
      Instance->klass[1]._1.namespaze);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v24 )
LABEL_21:
      sub_1C71608(Instance, v6);
    CommonUI__maskFadein(v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0, 0);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0);
    if ( v4 )
    {
      AssetManager__DownloadAssetStorageAll((AssetManager_o *)v4, (int32_t)Instance, 0);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A5F158 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0);
        v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_1C715FC(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v7, 0);
        this->fields._wait_5__2 = v7;
        sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields._wait_5__2, (int32_t)v7, v8, v9, v10, v11, v12, v13);
LABEL_12:
        wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
        this->fields.__2__current = wait_5__2;
        p__2__current = &this->fields.__2__current;
        sub_1C71354((GrandQuestFolderBoardItem_o *)p__2__current, (int32_t)wait_5__2, v14, v15, v16, v17, v18, v19);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    goto LABEL_21;
  }
  return 0;
}


Il2CppObject *FullDownloadControl__downLoadAll_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn FullDownloadControl__downLoadAll_d__8__System_Collections_IEnumerator_Reset(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C713C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C715FC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C713C4(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_1C714D8(v3, v4);
}


Il2CppObject *FullDownloadControl__downLoadAll_d__8__System_Collections_IEnumerator_get_Current(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void FullDownloadControl__downLoadAll_d__8__System_IDisposable_Dispose(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  ;
}