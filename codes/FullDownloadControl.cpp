void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILabel_o *infoLb; // x20
  System_String_o *downLoadBtn; // x0
  UILabel_o *infoDetailLb; // x20

  if ( (byte_49F7A28 & 1) == 0 )
  {
    sub_1B640C8(&LocalizationManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_6521/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v3);
    sub_1B640C8(&StringLiteral_6522/*"FULLDOWNLOAD_INFO_TXT"*/, v4);
    byte_49F7A28 = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6522/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoLb
    || (UILabel__set_text(infoLb, downLoadBtn, 0LL),
        infoDetailLb = this->fields.infoDetailLb,
        downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6521/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !infoDetailLb)
    || (UILabel__set_text(infoDetailLb, downLoadBtn, 0LL),
        (downLoadBtn = (System_String_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1B64324(downLoadBtn);
  }
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))downLoadBtn->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
    downLoadBtn,
    1LL,
    downLoadBtn->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
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
  _QWORD *v16; // x0
  System_Reflection_MethodBase_o *v17; // x0
  AssetManager_o *downLoadBtn; // x0
  int64_t DownloadSize; // x0
  __int64 v20; // x21
  System_String_o *v21; // x20
  System_String_o *v22; // x22
  Il2CppObject *v23; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x22
  System_String_o *v26; // x23
  Il2CppObject *Instance; // x24
  __int64 v28; // x1
  __int64 v29; // x2
  CommonConfirmDialog_ClickDelegate_o *v30; // x25
  Il2CppObject *v31; // x20
  System_String_o *v32; // x21
  __int64 v33; // x1
  __int64 v34; // x2
  System_Action_o *v35; // x22

  if ( (byte_49F7A29 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B640C8(&Method_FullDownloadControl_OnClickFullDl__, v4);
    sub_1B640C8(&Method_FullDownloadControl_closeDlg__, v5);
    sub_1B640C8(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_1B640C8(&LocalizationManager_TypeInfo, v7);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_1B640C8(&StringLiteral_3822/*"CONNECT_LATEST_MESSAGE"*/, v10);
    sub_1B640C8(&StringLiteral_6518/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v11);
    sub_1B640C8(&StringLiteral_6519/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v12);
    sub_1B640C8(&StringLiteral_6520/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v13);
    sub_1B640C8(&StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_1B640C8(&StringLiteral_1/*""*/, v15);
    byte_49F7A29 = 1;
  }
  v16 = Method_FullDownloadControl_OnClickFullDl__;
  if ( (*((_BYTE *)Method_FullDownloadControl_OnClickFullDl__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B640E0(Method_FullDownloadControl_OnClickFullDl__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B640AC(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  downLoadBtn = (AssetManager_o *)this->fields.downLoadBtn;
  if ( !downLoadBtn )
    goto LABEL_18;
  ((void (__fastcall *)(AssetManager_o *, _QWORD, void *))downLoadBtn->klass[1]._1.namespaze)(
    downLoadBtn,
    0LL,
    downLoadBtn->klass[1]._1.byval_arg.data);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  AssetManager__SetupAssetStorageAll(downLoadBtn, 0LL);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  DownloadSize = AssetManager__GetDownloadSize(downLoadBtn, 0LL);
  if ( DownloadSize >= 1 )
  {
    v20 = DownloadSize;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v21 = LocalizationManager__Get((System_String_o *)StringLiteral_6520/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6519/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( downLoadBtn )
    {
      v23 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(downLoadBtn, (double)v20, 0LL);
      v24 = System_String__Format(v22, v23, 0LL);
      v25 = LocalizationManager__Get((System_String_o *)StringLiteral_6518/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_3733/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v30 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B64314(CommonConfirmDialog_ClickDelegate_TypeInfo, v28, v29);
      CommonConfirmDialog_ClickDelegate___ctor(v30, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v21,
          v24,
          v25,
          v26,
          v30,
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
          0LL);
        return;
      }
    }
LABEL_18:
    sub_1B64324(downLoadBtn);
  }
  v31 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v32 = LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v35 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v33, v34);
  System_Action___ctor(v35, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v31 )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v31,
    (System_String_o *)StringLiteral_1/*""*/,
    v32,
    v35,
    -1,
    0,
    0,
    0,
    0,
    0,
    0,
    0,
    0LL,
    0.0,
    0LL);
}


void __fastcall FullDownloadControl___checkDownLoadData_b__7_0(FullDownloadControl_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *All; // x1

  All = FullDownloadControl__downLoadAll(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  __int64 v8; // x2
  AvalonSceneManager_c *v9; // x8
  CommonUI_o *v10; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v12; // x21
  __int64 v13; // x0

  if ( (byte_49F7A2B & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&AvalonSceneManager_TypeInfo, v3);
    sub_1B640C8(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_49F7A2B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = AvalonSceneManager_TypeInfo;
  v10 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v9 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v9->static_fields->DEFAULT_FADE_TIME;
  v12 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !v10 )
    sub_1B64324(v13);
  CommonUI__maskFadeout(v10, 1, DEFAULT_FADE_TIME, v12, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *v11; // x0
  System_Action_o *v12; // x22
  __int64 *v13; // x8
  __int64 v14; // x0

  if ( (byte_49F7A2A & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, isRes);
    sub_1B640C8(&Method_FullDownloadControl_checkDownLoadData__, v5);
    sub_1B640C8(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_49F7A2A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v11 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v9, v10);
  v12 = v11;
  if ( isRes )
    v13 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v13 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v11, (Il2CppObject *)this, *v13, 0LL);
  if ( !Instance )
    sub_1B64324(v14);
  CommonUI__CloseConfirmDialog_30345628((CommonUI_o *)Instance, v12, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20

  if ( (byte_49F7A2C & 1) == 0 )
  {
    sub_1B640C8(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method);
    byte_49F7A2C = 1;
  }
  v4 = sub_1B64314(FullDownloadControl__downLoadAll_d__8_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C(v4 + 32);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0

  if ( (byte_49F7A2D & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_49F7A2D = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL),
        (Instance = (AssetManager_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1B64324(Instance);
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
  Il2CppObject *v8; // x20
  CommonUI_o *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  UnityEngine_WaitForEndOfFrame_o *v12; // x20
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  CommonUI_o *v16; // x19

  if ( (byte_49F7A2E & 1) == 0 )
  {
    sub_1B640C8(&AvalonSceneManager_TypeInfo, method);
    sub_1B640C8(&ManagementManager_TypeInfo, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    sub_1B640C8(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_49F7A2E = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_12;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    CommonUI__SetLoadMode(Instance, 0, 0LL);
    if ( !_4__this )
      goto LABEL_21;
    Instance = (CommonUI_o *)_4__this->fields.downLoadBtn;
    if ( !Instance )
      goto LABEL_21;
    ((void (__fastcall *)(CommonUI_o *, __int64, void *))Instance->klass[1]._1.namespaze)(
      Instance,
      1LL,
      Instance->klass[1]._1.byval_arg.data);
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v16 = Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v16 )
LABEL_21:
      sub_1B64324(Instance);
    CommonUI__maskFadein(v16, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v8 )
    {
      AssetManager__DownloadAssetStorageAll((AssetManager_o *)v8, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v12 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B64314(UnityEngine_WaitForEndOfFrame_TypeInfo, v10, v11);
        UnityEngine_WaitForEndOfFrame___ctor(v12, 0LL);
        this->fields._wait_5__2 = v12;
        sub_1B6406C(&this->fields._wait_5__2);
LABEL_12:
        this->fields.__2__current = (Il2CppObject *)this->fields._wait_5__2;
        p__2__current = &this->fields.__2__current;
        sub_1B6406C(p__2__current);
        result = 1;
        *((_DWORD *)p__2__current - 2) = 1;
        return result;
      }
    }
    goto LABEL_21;
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

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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