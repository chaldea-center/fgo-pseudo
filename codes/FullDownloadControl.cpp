void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  GameOptionContentBase___ctor((GameOptionContentBase_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *infoDetailLb; // x20
  System_String_o *v6; // x0
  struct UnityEngine_GameObject_o *maskObj; // x20
  System_String_o *v8; // x0
  FullDownloadControl_c *klass; // x0

  if ( (byte_40FB2E3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_6508, v3);
    sub_B16FFC(&StringLiteral_6509, v4);
    byte_40FB2E3 = 1;
  }
  infoDetailLb = this->fields.infoDetailLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_6509, 0LL);
  if ( !infoDetailLb
    || (UILabel__set_text(infoDetailLb, v6, 0LL),
        maskObj = this->fields.maskObj,
        v8 = LocalizationManager__Get((System_String_o *)StringLiteral_6508, 0LL),
        !maskObj)
    || (UILabel__set_text((UILabel_o *)maskObj, v8, 0LL), (klass = this[1].klass) == 0LL) )
  {
    sub_B170D4();
  }
  (*((void (__fastcall **)(FullDownloadControl_c *, __int64, _QWORD))klass->_1.image + 49))(
    klass,
    1LL,
    *((_QWORD *)klass->_1.image + 50));
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
  FullDownloadControl_c *klass; // x0
  AssetManager_o *Instance; // x0
  AssetManager_o *v18; // x0
  int64_t DownloadSize; // x0
  __int64 v20; // x21
  System_String_o *v21; // x20
  System_String_o *v22; // x22
  AssetManager_o *v23; // x0
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  CommonUI_o *v28; // x24
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  CommonConfirmDialog_ClickDelegate_o *v33; // x25
  CommonUI_o *v34; // x20
  System_String_o *v35; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x3
  __int64 v39; // x4
  System_Action_o *v40; // x22

  if ( (byte_40FB2E4 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_B16FFC(&Method_FullDownloadControl_closeDlg__, v4);
    sub_B16FFC(&Method_FullDownloadControl_endDownLoad__, v5);
    sub_B16FFC(&LocalizationManager_TypeInfo, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_B16FFC(&SoundManager_TypeInfo, v9);
    sub_B16FFC(&StringLiteral_3339, v10);
    sub_B16FFC(&StringLiteral_6505, v11);
    sub_B16FFC(&StringLiteral_6506, v12);
    sub_B16FFC(&StringLiteral_6507, v13);
    sub_B16FFC(&StringLiteral_3251, v14);
    sub_B16FFC(&StringLiteral_1, v15);
    byte_40FB2E4 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(0, 0LL);
  klass = this[1].klass;
  if ( !klass )
    goto LABEL_21;
  (*((void (__fastcall **)(FullDownloadControl_c *, _QWORD, _QWORD))klass->_1.image + 49))(
    klass,
    0LL,
    *((_QWORD *)klass->_1.image + 50));
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    goto LABEL_21;
  AssetManager__SetupAssetStorageAll(Instance, 0LL);
  v18 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !v18 )
    goto LABEL_21;
  DownloadSize = AssetManager__GetDownloadSize(v18, 0LL);
  if ( DownloadSize >= 1 )
  {
    v20 = DownloadSize;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6507, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6506, 0LL);
    v23 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( v23 )
    {
      v24 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(v23, (double)v20, 0LL);
      v25 = System_String__Format(v22, v24, 0LL);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6505, 0LL);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL);
      v28 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v33 = (CommonConfirmDialog_ClickDelegate_o *)sub_B170CC(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v29,
                                                     v30,
                                                     v31,
                                                     v32);
      CommonConfirmDialog_ClickDelegate___ctor(v33, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( v28 )
      {
        CommonUI__OpenConfirmDecideDlg(v28, v21, v25, v26, v27, v33, 0, 0.0, 15.0, 0, 0, 0, 240, 0, 0LL);
        return;
      }
    }
LABEL_21:
    sub_B170D4();
  }
  v34 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v35 = LocalizationManager__Get((System_String_o *)StringLiteral_3339, 0LL);
  v40 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v36, v37, v38, v39);
  System_Action___ctor(v40, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v34 )
    goto LABEL_21;
  CommonUI__OpenNotificationDialog(v34, (System_String_o *)StringLiteral_1, v35, v40, -1, 0, 0, 0, 0, 0, 0, 0, 0LL, 0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_34804316((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x4
  CommonUI_o *Instance; // x20
  AvalonSceneManager_c *v11; // x8
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v13; // x21

  if ( (byte_40FB2E6 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, method);
    sub_B16FFC(&AvalonSceneManager_TypeInfo, v3);
    sub_B16FFC(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_40FB2E6 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = AvalonSceneManager_TypeInfo;
  if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v11 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v11->static_fields->DEFAULT_FADE_TIME;
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v6, v7, v8, v9);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__maskFadeout(Instance, 1, DEFAULT_FADE_TIME, v13, 0LL);
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
  __int64 v11; // x3
  __int64 v12; // x4
  System_Action_o *v13; // x0
  System_Action_o *v14; // x22
  __int64 *v15; // x8

  if ( (byte_40FB2E5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, isRes);
    sub_B16FFC(&Method_FullDownloadControl_checkDownLoadData__, v5);
    sub_B16FFC(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_40FB2E5 = 1;
  }
  Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v9, v10, v11, v12);
  v14 = v13;
  if ( isRes )
    v15 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v15 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v13, (Il2CppObject *)this, *v15, 0LL);
  if ( !Instance )
    sub_B170D4();
  CommonUI__CloseConfirmDialog_18237824(Instance, v14, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x20
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40FB2E7 & 1) == 0 )
  {
    sub_B16FFC(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method);
    byte_40FB2E7 = 1;
  }
  v6 = sub_B170CC(FullDownloadControl__downLoadAll_d__8_TypeInfo, method, v2, v3, v4);
  FullDownloadControl__downLoadAll_d__8___ctor((FullDownloadControl__downLoadAll_d__8_o *)v6, 0, 0LL);
  if ( !v6 )
    sub_B170D4();
  *(_QWORD *)(v6 + 32) = this;
  sub_B16F98((BattleServantConfConponent_o *)(v6 + 32), (System_Int32_array **)this, v7, v8, v9, v10, v11, v12);
  return (System_Collections_IEnumerator_o *)v6;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  FullDownloadControl_c *klass; // x0

  if ( (byte_40FB2E8 & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_40FB2E8 = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL), (klass = this[1].klass) == 0LL) )
    sub_B170D4();
  (*((void (__fastcall **)(FullDownloadControl_c *, __int64, _QWORD))klass->_1.image + 49))(
    klass,
    1LL,
    *((_QWORD *)klass->_1.image + 50));
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
  int32_t DownloadParallelMax; // w0
  CommonUI_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  UnityEngine_WaitForEndOfFrame_o *v15; // x20
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  struct FullDownloadControl_o *_4__this; // x21
  CommonUI_o *Instance; // x0
  Il2CppObject *wait_5__2; // x1
  bool result; // w0
  CommonUI_o *v32; // x0
  FullDownloadControl_c *klass; // x0
  CommonUI_o *v34; // x19

  if ( (byte_40F68D1 & 1) == 0 )
  {
    sub_B16FFC(&AvalonSceneManager_TypeInfo, method);
    sub_B16FFC(&ManagementManager_TypeInfo, v3);
    sub_B16FFC(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v4);
    sub_B16FFC(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    sub_B16FFC(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_40F68D1 = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_23;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_13;
    v32 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !v32 )
      goto LABEL_23;
    CommonUI__SetLoadMode(v32, 0, 0LL);
    if ( !_4__this )
      goto LABEL_23;
    klass = _4__this[1].klass;
    if ( !klass )
      goto LABEL_23;
    (*((void (__fastcall **)(FullDownloadControl_c *, __int64, _QWORD))klass->_1.image + 49))(
      klass,
      1LL,
      *((_QWORD *)klass->_1.image + 50));
    v34 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( (BYTE3(AvalonSceneManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AvalonSceneManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    }
    if ( !v34 )
LABEL_23:
      sub_B170D4();
    CommonUI__maskFadein(v34, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( (BYTE3(ManagementManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !ManagementManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    }
    DownloadParallelMax = ManagementManager__get_DownloadParallelMax(0LL);
    if ( v8 )
    {
      AssetManager__DownloadAssetStorageAll(v8, DownloadParallelMax, 0LL);
      v10 = (CommonUI_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2A54F38 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( v10 )
      {
        CommonUI__SetLoadMode(v10, 5, 0LL);
        v15 = (UnityEngine_WaitForEndOfFrame_o *)sub_B170CC(UnityEngine_WaitForEndOfFrame_TypeInfo, v11, v12, v13, v14);
        UnityEngine_WaitForEndOfFrame___ctor(v15, 0LL);
        this->fields._wait_5__2 = v15;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields._wait_5__2,
          (System_Int32_array **)v15,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
LABEL_13:
        wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
        this->fields.__2__current = wait_5__2;
        sub_B16F98(
          (BattleServantConfConponent_o *)&this->fields.__2__current,
          (System_Int32_array **)wait_5__2,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
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
  __int64 v5; // x3
  __int64 v6; // x4
  System_NotSupportedException_o *v7; // x0

  v2 = sub_B17000(&System_NotSupportedException_TypeInfo);
  v7 = (System_NotSupportedException_o *)sub_B170CC(v2, v3, v4, v5, v6);
  System_NotSupportedException___ctor(v7, 0LL);
  sub_B17000(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_B170A0();
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