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
  struct UnityEngine_GameObject_o *maskObj; // x20

  if ( (byte_42171FE & 1) == 0 )
  {
    sub_B0D8A4(&LocalizationManager_TypeInfo, method);
    sub_B0D8A4(&StringLiteral_6549/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v3);
    sub_B0D8A4(&StringLiteral_6550/*"FULLDOWNLOAD_INFO_TXT"*/, v4);
    byte_42171FE = 1;
  }
  infoDetailLb = this->fields.infoDetailLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  klass = LocalizationManager__Get((System_String_o *)StringLiteral_6550/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoDetailLb
    || (UILabel__set_text(infoDetailLb, klass, 0LL),
        maskObj = this->fields.maskObj,
        klass = LocalizationManager__Get((System_String_o *)StringLiteral_6549/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !maskObj)
    || (UILabel__set_text((UILabel_o *)maskObj, klass, 0LL), (klass = (System_String_o *)this[1].klass) == 0LL) )
  {
    sub_B0D97C(klass);
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
  AssetManager_o *klass; // x0
  int64_t DownloadSize; // x0
  __int64 v18; // x21
  System_String_o *v19; // x20
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x21
  System_String_o *v23; // x22
  System_String_o *v24; // x23
  CommonUI_o *Instance; // x24
  __int64 v26; // x1
  __int64 v27; // x2
  CommonConfirmDialog_ClickDelegate_o *v28; // x25
  CommonUI_o *v29; // x20
  System_String_o *v30; // x21
  __int64 v31; // x1
  __int64 v32; // x2
  System_Action_o *v33; // x22

  if ( (byte_42171FF & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B0D8A4(&Method_FullDownloadControl_closeDlg__, v4);
    sub_B0D8A4(&Method_FullDownloadControl_endDownLoad__, v5);
    sub_B0D8A4(&LocalizationManager_TypeInfo, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B0D8A4(&SoundManager_TypeInfo, v9);
    sub_B0D8A4(&StringLiteral_3361/*"CONNECT_LATEST_MESSAGE"*/, v10);
    sub_B0D8A4(&StringLiteral_6546/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v11);
    sub_B0D8A4(&StringLiteral_6547/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v12);
    sub_B0D8A4(&StringLiteral_6548/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v13);
    sub_B0D8A4(&StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_B0D8A4(&StringLiteral_1/*""*/, v15);
    byte_42171FF = 1;
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
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  AssetManager__SetupAssetStorageAll(klass, 0LL);
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  DownloadSize = AssetManager__GetDownloadSize(klass, 0LL);
  if ( DownloadSize >= 1 )
  {
    v18 = DownloadSize;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v19 = LocalizationManager__Get((System_String_o *)StringLiteral_6548/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v20 = LocalizationManager__Get((System_String_o *)StringLiteral_6547/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( klass )
    {
      v21 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(klass, (double)v18, 0LL);
      v22 = System_String__Format(v20, v21, 0LL);
      v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6546/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v24 = LocalizationManager__Get((System_String_o *)StringLiteral_3273/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v28 = (CommonConfirmDialog_ClickDelegate_o *)sub_B0D974(CommonConfirmDialog_ClickDelegate_TypeInfo, v26, v27);
      CommonConfirmDialog_ClickDelegate___ctor(v28, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(Instance, v19, v22, v23, v24, v28, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B0D97C(klass);
  }
  v29 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v30 = LocalizationManager__Get((System_String_o *)StringLiteral_3361/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v33 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v31, v32);
  System_Action___ctor(v33, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v29 )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog(v29, (System_String_o *)StringLiteral_1/*""*/, v30, v33, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34930128((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v9; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_4217201 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, method);
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, v3);
    sub_B0D8A4(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4217201 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !Instance )
    sub_B0D97C(v12);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  CommonUI_o *Instance; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x0
  System_Action_o *v12; // x22
  __int64 *v13; // x8
  __int64 v14; // x0

  if ( (byte_4217200 & 1) == 0 )
  {
    sub_B0D8A4(&System_Action_TypeInfo, isRes);
    sub_B0D8A4(&Method_FullDownloadControl_checkDownLoadData__, v5);
    sub_B0D8A4(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4217200 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_B0D974(System_Action_TypeInfo, v9, v10);
  v12 = v11;
  if ( isRes )
    v13 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v13 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v11, (Il2CppObject *)this, *v13, 0LL);
  if ( !Instance )
    sub_B0D97C(v14);
  CommonUI__CloseConfirmDialog_17017160(Instance, v12, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  __int64 v5; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_4217202 & 1) == 0 )
  {
    sub_B0D8A4(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method);
    byte_4217202 = 1;
  }
  v4 = sub_B0D974(FullDownloadControl__downLoadAll_d__8_TypeInfo, method, v2);
  FullDownloadControl__downLoadAll_d__8___ctor((FullDownloadControl__downLoadAll_d__8_o *)v4, 0, 0LL);
  if ( !v4 )
    sub_B0D97C(v5);
  *(_QWORD *)(v4 + 32) = this;
  sub_B0D840((BattleServantConfConponent_o *)(v4 + 32), (System_Int32_array **)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0

  if ( (byte_4217203 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4217203 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL), (Instance = (AssetManager_o *)this[1].klass) == 0LL) )
  {
    sub_B0D97C(Instance);
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
  __int64 v11; // x2
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject *wait_5__2; // x1
  bool result; // w0
  CommonUI_o *v16; // x19

  if ( (byte_4210F66 & 1) == 0 )
  {
    sub_B0D8A4(&AvalonSceneManager_TypeInfo, method);
    sub_B0D8A4(&ManagementManager_TypeInfo, v3);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B0D8A4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_4210F66 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_13;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v16 )
LABEL_23:
      sub_B0D97C(Instance);
    CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v8 )
    {
      AssetManager__DownloadAssetStorageAll(v8, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A71064 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_B0D974(UnityEngine_WaitForEndOfFrame_TypeInfo, v10, v11);
        UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
        this->fields._wait_5__2 = v12;
        sub_B0D840(&this->fields._wait_5__2, v12);
LABEL_13:
        wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
        this->fields.__2__current = wait_5__2;
        sub_B0D840(&this->fields.__2__current, wait_5__2);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_B0D8A8(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_B0D974(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_B0D8A8(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_B0D948(v5, v6);
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