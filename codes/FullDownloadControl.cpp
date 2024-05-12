void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  UILabel_o *infoDetailLb; // x20
  System_String_o *klass; // x0
  __int64 v5; // x1
  struct UnityEngine_GameObject_o *maskObj; // x20

  if ( (byte_438D8F3 & 1) == 0 )
  {
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&StringLiteral_6680/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/);
    sub_B775C4(&StringLiteral_6681/*"FULLDOWNLOAD_INFO_TXT"*/);
    byte_438D8F3 = 1;
  }
  infoDetailLb = this->fields.infoDetailLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  klass = LocalizationManager__Get((System_String_o *)StringLiteral_6681/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoDetailLb
    || (UILabel__set_text(infoDetailLb, klass, 0LL),
        maskObj = this->fields.maskObj,
        klass = LocalizationManager__Get((System_String_o *)StringLiteral_6680/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !maskObj)
    || (UILabel__set_text((UILabel_o *)maskObj, klass, 0LL), (klass = (System_String_o *)this[1].klass) == 0LL) )
  {
    sub_B7769C(klass, v5);
  }
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))klass->klass->vtable._5_Clone.method)(
    klass,
    1LL,
    klass->klass->vtable._6_GetTypeCode.methodPtr);
}


void __fastcall FullDownloadControl__OnClickFullDl(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  AssetManager_o *klass; // x0
  int64_t DownloadSize; // x0
  __int64 v6; // x21
  System_String_o *v7; // x20
  System_String_o *v8; // x22
  Il2CppObject *v9; // x0
  System_String_o *v10; // x21
  System_String_o *v11; // x22
  System_String_o *v12; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v14; // x25
  CommonUI_o *v15; // x20
  System_String_o *v16; // x21
  System_Action_o *v17; // x22

  if ( (byte_438D8F4 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&CommonConfirmDialog_ClickDelegate_TypeInfo);
    sub_B775C4(&Method_FullDownloadControl_closeDlg__);
    sub_B775C4(&Method_FullDownloadControl_endDownLoad__);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&SoundManager_TypeInfo);
    sub_B775C4(&StringLiteral_3474/*"CONNECT_LATEST_MESSAGE"*/);
    sub_B775C4(&StringLiteral_6677/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/);
    sub_B775C4(&StringLiteral_6678/*"FULLDOWNLOAD_CONFIRM_MSG"*/);
    sub_B775C4(&StringLiteral_6679/*"FULLDOWNLOAD_CONFIRM_TITLE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438D8F4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  klass = (AssetManager_o *)this[1].klass;
  if ( !klass )
    goto LABEL_21;
  ((void (__fastcall *)(AssetManager_o *, _QWORD, void *))klass->klass[1]._1.namespaze)(
    klass,
    0LL,
    klass->klass[1]._1.byval_arg.data);
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  AssetManager__SetupAssetStorageAll(klass, 0LL);
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  DownloadSize = AssetManager__GetDownloadSize(klass, 0LL);
  if ( DownloadSize >= 1 )
  {
    v6 = DownloadSize;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v7 = LocalizationManager__Get((System_String_o *)StringLiteral_6679/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6678/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( klass )
    {
      v9 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(klass, (double)v6, 0LL);
      v10 = System_String__Format(v8, v9, 0LL);
      v11 = LocalizationManager__Get((System_String_o *)StringLiteral_6677/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v12 = LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v14 = (CommonConfirmDialog_ClickDelegate_o *)sub_B77694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v14, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(Instance, v7, v10, v11, v12, v14, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B7769C(klass, v3);
  }
  v15 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3474/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v17 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v15 )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog(v15, (System_String_o *)StringLiteral_1/*""*/, v16, v17, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_36304832((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v4; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1

  if ( (byte_438D8F6 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&Method_FullDownloadControl__checkDownLoadData_b__7_0__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D8F6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v4 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v4->static_fields->DEFAULT_FADE_TIME;
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !Instance )
    sub_B7769C(v7, v8);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v6, 0LL);
}


void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  CommonUI_o *Instance; // x21
  System_Action_o *v6; // x0
  System_Action_o *v7; // x22
  __int64 *v8; // x8
  __int64 v9; // x0
  __int64 v10; // x1

  if ( (byte_438D8F5 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_FullDownloadControl_checkDownLoadData__);
    sub_B775C4(&Method_FullDownloadControl_endDownLoad__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_438D8F5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  v7 = v6;
  if ( isRes )
    v8 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v8 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v6, (Il2CppObject *)this, *v8, 0LL);
  if ( !Instance )
    sub_B7769C(v9, v10);
  CommonUI__CloseConfirmDialog_18056328(Instance, v7, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_438D8F7 & 1) == 0 )
  {
    sub_B775C4(&FullDownloadControl__downLoadAll_d__8_TypeInfo);
    byte_438D8F7 = 1;
  }
  v3 = sub_B77694(FullDownloadControl__downLoadAll_d__8_TypeInfo);
  FullDownloadControl__downLoadAll_d__8___ctor((FullDownloadControl__downLoadAll_d__8_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B7769C(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B77560((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_438D8F8 & 1) == 0 )
  {
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_438D8F8 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL), (Instance = (AssetManager_o *)this[1].klass) == 0LL) )
  {
    sub_B7769C(Instance, v4);
  }
  ((void (__fastcall *)(AssetManager_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
    Instance,
    1LL,
    Instance->klass[1]._1.byval_arg.data);
}


void __fastcall FullDownloadControl__downLoadAll_d__8___ctor(
        FullDownloadControl__downLoadAll_d__8_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall FullDownloadControl__downLoadAll_d__8__MoveNext(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  AssetManager_o *v4; // x20
  CommonUI_o *Instance; // x0
  __int64 v6; // x1
  UnityEngine_WaitForEndOfFrame_o *v7; // x20
  struct FullDownloadControl_o *_4__this; // x21
  bool result; // w0
  CommonUI_o *v10; // x19

  if ( (byte_43880A3 & 1) == 0 )
  {
    sub_B775C4(&AvalonSceneManager_TypeInfo);
    sub_B775C4(&ManagementManager_TypeInfo);
    sub_B775C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    sub_B775C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_B775C4(&UnityEngine_WaitForEndOfFrame_TypeInfo);
    byte_43880A3 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_13;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_23;
    Instance = (CommonUI_o *)_4__this[1].klass;
    if ( !Instance )
      goto LABEL_23;
    ((void (__fastcall *)(CommonUI_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v10 = Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v10 )
LABEL_23:
      sub_B7769C(Instance, v6);
    CommonUI__maskFadein(v10, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v4 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v4 )
    {
      AssetManager__DownloadAssetStorageAll(v4, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2D1653C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v7 = (UnityEngine_WaitForEndOfFrame_o *)sub_B77694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v7, 0LL);
        this->fields._wait_5__2 = v7;
        sub_B77560(&this->fields._wait_5__2);
LABEL_13:
        this->fields.__2__current = (Il2CppObject *)this->fields._wait_5__2;
        sub_B77560(&this->fields.__2__current);
        result = 1;
        this->fields.__1__state = 1;
        return result;
      }
    }
    goto LABEL_23;
  }
  return 0;
}


Il2CppObject *__fastcall FullDownloadControl__downLoadAll_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn FullDownloadControl__downLoadAll_d__8__System_Collections_IEnumerator_Reset(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_B775C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B77694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B775C8(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_B77668(v3, v4);
}


Il2CppObject *__fastcall FullDownloadControl__downLoadAll_d__8__System_Collections_IEnumerator_get_Current(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall FullDownloadControl__downLoadAll_d__8__System_IDisposable_Dispose(
        FullDownloadControl__downLoadAll_d__8_o *this,
        const MethodInfo *method)
{
  ;
}