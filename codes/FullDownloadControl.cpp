void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  UILabel_o *infoDetailLb; // x20
  System_String_o *klass; // x0
  __int64 v13; // x1
  struct UnityEngine_GameObject_o *maskObj; // x20

  if ( (byte_42EB529 & 1) == 0 )
  {
    sub_B5D5C4(&LocalizationManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&StringLiteral_6611/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v5, v6, v7);
    sub_B5D5C4(&StringLiteral_6612/*"FULLDOWNLOAD_INFO_TXT"*/, v8, v9, v10);
    byte_42EB529 = 1;
  }
  infoDetailLb = this->fields.infoDetailLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  klass = LocalizationManager__Get((System_String_o *)StringLiteral_6612/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoDetailLb
    || (UILabel__set_text(infoDetailLb, klass, 0LL),
        maskObj = this->fields.maskObj,
        klass = LocalizationManager__Get((System_String_o *)StringLiteral_6611/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !maskObj)
    || (UILabel__set_text((UILabel_o *)maskObj, klass, 0LL), (klass = (System_String_o *)this[1].klass) == 0LL) )
  {
    sub_B5D69C(klass, v13);
  }
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))klass->klass->vtable._5_Clone.method)(
    klass,
    1LL,
    klass->klass->vtable._6_GetTypeCode.methodPtr);
}


void __fastcall FullDownloadControl__OnClickFullDl(FullDownloadControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  int v26; // w1
  int v27; // w2
  __int64 v28; // x3
  int v29; // w1
  int v30; // w2
  __int64 v31; // x3
  int v32; // w1
  int v33; // w2
  __int64 v34; // x3
  int v35; // w1
  int v36; // w2
  __int64 v37; // x3
  int v38; // w1
  int v39; // w2
  __int64 v40; // x3
  int v41; // w1
  int v42; // w2
  __int64 v43; // x3
  __int64 v44; // x1
  AssetManager_o *klass; // x0
  int64_t DownloadSize; // x0
  __int64 v47; // x21
  System_String_o *v48; // x20
  System_String_o *v49; // x22
  Il2CppObject *v50; // x0
  System_String_o *v51; // x21
  System_String_o *v52; // x22
  System_String_o *v53; // x23
  CommonUI_o *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v55; // x25
  CommonUI_o *v56; // x20
  System_String_o *v57; // x21
  System_Action_o *v58; // x22

  if ( (byte_42EB52A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&CommonConfirmDialog_ClickDelegate_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FullDownloadControl_closeDlg__, v8, v9, v10);
    sub_B5D5C4(&Method_FullDownloadControl_endDownLoad__, v11, v12, v13);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v14, v15, v16);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v17, v18, v19);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v20, v21, v22);
    sub_B5D5C4(&SoundManager_TypeInfo, v23, v24, v25);
    sub_B5D5C4(&StringLiteral_3414/*"CONNECT_LATEST_MESSAGE"*/, v26, v27, v28);
    sub_B5D5C4(&StringLiteral_6608/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v29, v30, v31);
    sub_B5D5C4(&StringLiteral_6609/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v32, v33, v34);
    sub_B5D5C4(&StringLiteral_6610/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v35, v36, v37);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v38, v39, v40);
    sub_B5D5C4(&StringLiteral_1/*""*/, v41, v42, v43);
    byte_42EB52A = 1;
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
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  AssetManager__SetupAssetStorageAll(klass, 0LL);
  klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !klass )
    goto LABEL_21;
  DownloadSize = AssetManager__GetDownloadSize(klass, 0LL);
  if ( DownloadSize >= 1 )
  {
    v47 = DownloadSize;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v48 = LocalizationManager__Get((System_String_o *)StringLiteral_6610/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v49 = LocalizationManager__Get((System_String_o *)StringLiteral_6609/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    klass = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( klass )
    {
      v50 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(klass, (double)v47, 0LL);
      v51 = System_String__Format(v49, v50, 0LL);
      v52 = LocalizationManager__Get((System_String_o *)StringLiteral_6608/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v53 = LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v55 = (CommonConfirmDialog_ClickDelegate_o *)sub_B5D694(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v55, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(Instance, v48, v51, v52, v53, v55, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 1, 0, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B5D69C(klass, v44);
  }
  v56 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v57 = LocalizationManager__Get((System_String_o *)StringLiteral_3414/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v58 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v58, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v56 )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog(v56, (System_String_o *)StringLiteral_1/*""*/, v57, v58, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_35615088((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v15; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_42EB52C & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    byte_42EB52C = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v15 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v15->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !Instance )
    sub_B5D69C(v18, v19);
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v3; // x3
  char v6; // w1
  int v7; // w2
  __int64 v8; // x3
  char v9; // w1
  int v10; // w2
  __int64 v11; // x3
  char v12; // w1
  int v13; // w2
  __int64 v14; // x3
  CommonUI_o *Instance; // x21
  System_Action_o *v16; // x0
  System_Action_o *v17; // x22
  __int64 *v18; // x8
  __int64 v19; // x0
  __int64 v20; // x1

  if ( (byte_42EB52B & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, isRes, (_DWORD)method, v3);
    sub_B5D5C4(&Method_FullDownloadControl_checkDownLoadData__, v6, v7, v8);
    sub_B5D5C4(&Method_FullDownloadControl_endDownLoad__, v9, v10, v11);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v12, v13, v14);
    byte_42EB52B = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v16 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  v17 = v16;
  if ( isRes )
    v18 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v18 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v16, (Il2CppObject *)this, *v18, 0LL);
  if ( !Instance )
    sub_B5D69C(v19, v20);
  CommonUI__CloseConfirmDialog_18202348(Instance, v17, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  __int64 v5; // x20
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_42EB52D & 1) == 0 )
  {
    sub_B5D5C4(&FullDownloadControl__downLoadAll_d__8_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB52D = 1;
  }
  v5 = sub_B5D694(FullDownloadControl__downLoadAll_d__8_TypeInfo);
  FullDownloadControl__downLoadAll_d__8___ctor((FullDownloadControl__downLoadAll_d__8_o *)v5, 0, 0LL);
  if ( !v5 )
    sub_B5D69C(v6, v7);
  *(_QWORD *)(v5 + 32) = this;
  sub_B5D560((BattleServantConfConponent_o *)(v5 + 32), (System_Int32_array **)this, v8, v9, v10, v11, v12, v13);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  AssetManager_o *Instance; // x0
  __int64 v6; // x1

  if ( (byte_42EB52E & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, (_DWORD)method, v2, v3);
    byte_42EB52E = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL), (Instance = (AssetManager_o *)this[1].klass) == 0LL) )
  {
    sub_B5D69C(Instance, v6);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int32_t _1__state; // w8
  AssetManager_o *v18; // x20
  CommonUI_o *Instance; // x0
  __int64 v20; // x1
  UnityEngine_WaitForEndOfFrame_o *v21; // x20
  struct FullDownloadControl_o *_4__this; // x21
  bool result; // w0
  CommonUI_o *v24; // x19

  if ( (byte_42E56EA & 1) == 0 )
  {
    sub_B5D5C4(&AvalonSceneManager_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&ManagementManager_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v11, v12, v13);
    sub_B5D5C4(&UnityEngine_WaitForEndOfFrame_TypeInfo, v14, v15, v16);
    byte_42E56EA = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_13;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v24 = Instance;
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v24 )
LABEL_23:
      sub_B5D69C(Instance, v20);
    CommonUI__maskFadein(v24, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v18 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v18 )
    {
      AssetManager__DownloadAssetStorageAll(v18, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A2FE60 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v21 = (UnityEngine_WaitForEndOfFrame_o *)sub_B5D694(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v21, 0LL);
        this->fields._wait_5__2 = v21;
        sub_B5D560(&this->fields._wait_5__2);
LABEL_13:
        this->fields.__2__current = (Il2CppObject *)this->fields._wait_5__2;
        sub_B5D560(&this->fields.__2__current);
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

  v2 = sub_B5D5C8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B5D694(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B5D5C8(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_B5D668(v3, v4);
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