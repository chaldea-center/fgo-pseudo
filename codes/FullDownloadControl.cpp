void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *infoDetailLb; // x20
  System_String_o *klass; // x0
  __int64 v7; // x1
  struct UnityEngine_GameObject_o *maskObj; // x20

  if ( (byte_418A4D7 & 1) == 0 )
  {
    sub_B2C35C(&LocalizationManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_6532/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v3);
    sub_B2C35C(&StringLiteral_6533/*"FULLDOWNLOAD_INFO_TXT"*/, v4);
    byte_418A4D7 = 1;
  }
  infoDetailLb = this->fields.infoDetailLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  klass = LocalizationManager__Get((System_String_o *)StringLiteral_6533/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoDetailLb
    || (UILabel__set_text(infoDetailLb, klass, 0LL),
        maskObj = this->fields.maskObj,
        klass = LocalizationManager__Get((System_String_o *)StringLiteral_6532/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !maskObj)
    || (UILabel__set_text((UILabel_o *)maskObj, klass, 0LL), (klass = (System_String_o *)this[1].klass) == 0LL) )
  {
    sub_B2C434(klass, v7);
  }
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))klass->klass->vtable._5_Clone.method)(
    klass,
    1LL,
    klass->klass->vtable._6_GetTypeCode.methodPtr);
}


void __fastcall FullDownloadControl__OnClickFullDl(FullDownloadControl_o *this, const MethodInfo *method)
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
  AssetManager_o *klass; // x0
  int64_t DownloadSize; // x0
  __int64 v19; // x21
  System_String_o *v20; // x20
  System_String_o *v21; // x22
  Il2CppObject *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x22
  System_String_o *v25; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v27; // x25
  CommonUI_o *v28; // x20
  System_String_o *v29; // x21
  System_Action_o *v30; // x22

  if ( (byte_418A4D8 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B2C35C(&Method_FullDownloadControl_closeDlg__, v4);
    sub_B2C35C(&Method_FullDownloadControl_endDownLoad__, v5);
    sub_B2C35C(&LocalizationManager_TypeInfo, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B2C35C(&SoundManager_TypeInfo, v9);
    sub_B2C35C(&StringLiteral_3348/*"CONNECT_LATEST_MESSAGE"*/, v10);
    sub_B2C35C(&StringLiteral_6529/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v11);
    sub_B2C35C(&StringLiteral_6530/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v12);
    sub_B2C35C(&StringLiteral_6531/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v13);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_1/*""*/, v15);
    byte_418A4D8 = 1;
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
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  AssetManager__SetupAssetStorageAll(klass, 0LL);
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  DownloadSize = AssetManager__GetDownloadSize(klass, 0LL);
  if ( DownloadSize >= 1 )
  {
    v19 = DownloadSize;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6531/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6530/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( klass )
    {
      v22 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(klass, (double)v19, 0LL);
      v23 = System_String__Format(v21, v22, 0LL);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_6529/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v27 = (CommonConfirmDialog_ClickDelegate_o *)sub_B2C42C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v27, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(Instance, v20, v23, v24, v25, v27, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B2C434(klass, v16);
  }
  v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v29 = LocalizationManager__Get((System_String_o *)StringLiteral_3348/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v28 )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog(v28, (System_String_o *)StringLiteral_1/*""*/, v29, v30, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35309748((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v7; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1

  if ( (byte_418A4DA & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&AvalonSceneManager_TypeInfo, v3);
    sub_B2C35C(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_418A4DA = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !Instance )
    sub_B2C434(v10, v11);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v9, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x21
  System_Action_o *v9; // x0
  System_Action_o *v10; // x22
  __int64 *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_418A4D9 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, isRes);
    sub_B2C35C(&Method_FullDownloadControl_checkDownLoadData__, v5);
    sub_B2C35C(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_418A4D9 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  v10 = v9;
  if ( isRes )
    v11 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v11 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v9, (Il2CppObject *)this, *v11, 0LL);
  if ( !Instance )
    sub_B2C434(v12, v13);
  CommonUI__CloseConfirmDialog_17971588(Instance, v10, 0LL);
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

  if ( (byte_418A4DB & 1) == 0 )
  {
    sub_B2C35C(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method);
    byte_418A4DB = 1;
  }
  v3 = sub_B2C42C(FullDownloadControl__downLoadAll_d__8_TypeInfo);
  FullDownloadControl__downLoadAll_d__8___ctor((FullDownloadControl__downLoadAll_d__8_o *)v3, 0, 0LL);
  if ( !v3 )
    sub_B2C434(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v3 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_418A4DC & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_418A4DC = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL), (Instance = (AssetManager_o *)this[1].klass) == 0LL) )
  {
    sub_B2C434(Instance, v4);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  AssetManager_o *v8; // x20
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject *wait_5__2; // x1
  bool result; // w0
  CommonUI_o *v15; // x19

  if ( (byte_41841E7 & 1) == 0 )
  {
    sub_B2C35C(&AvalonSceneManager_TypeInfo, method);
    sub_B2C35C(&ManagementManager_TypeInfo, v3);
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    sub_B2C35C(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B2C35C(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_41841E7 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_13;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v15 )
LABEL_23:
      sub_B2C434(Instance, v10);
    CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v8 )
    {
      AssetManager__DownloadAssetStorageAll(v8, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_B2C42C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
        this->fields._wait_5__2 = v11;
        sub_B2C2F8(&this->fields._wait_5__2, v11);
LABEL_13:
        wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
        this->fields.__2__current = wait_5__2;
        sub_B2C2F8(&this->fields.__2__current, wait_5__2);
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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