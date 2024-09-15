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
  __int64 v7; // x1
  UILabel_o *infoDetailLb; // x20

  if ( (byte_4A294D9 & 1) == 0 )
  {
    sub_1B761C0(&LocalizationManager_TypeInfo, method);
    sub_1B761C0(&StringLiteral_6548/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v3);
    sub_1B761C0(&StringLiteral_6549/*"FULLDOWNLOAD_INFO_TXT"*/, v4);
    byte_4A294D9 = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6549/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoLb
    || (UILabel__set_text(infoLb, downLoadBtn, 0LL),
        infoDetailLb = this->fields.infoDetailLb,
        downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6548/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !infoDetailLb)
    || (UILabel__set_text(infoDetailLb, downLoadBtn, 0LL),
        (downLoadBtn = (System_String_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1B7641C(downLoadBtn, v7);
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
  __int64 v18; // x1
  AssetManager_o *downLoadBtn; // x0
  int64_t DownloadSize; // x0
  __int64 v21; // x21
  System_String_o *v22; // x20
  System_String_o *v23; // x22
  Il2CppObject *v24; // x0
  System_String_o *v25; // x21
  System_String_o *v26; // x22
  System_String_o *v27; // x23
  Il2CppObject *Instance; // x24
  CommonConfirmDialog_ClickDelegate_o *v29; // x25
  Il2CppObject *v30; // x20
  System_String_o *v31; // x21
  System_Action_o *v32; // x22

  if ( (byte_4A294DA & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v3);
    sub_1B761C0(&Method_FullDownloadControl_OnClickFullDl__, v4);
    sub_1B761C0(&Method_FullDownloadControl_closeDlg__, v5);
    sub_1B761C0(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_1B761C0(&LocalizationManager_TypeInfo, v7);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v9);
    sub_1B761C0(&StringLiteral_3844/*"CONNECT_LATEST_MESSAGE"*/, v10);
    sub_1B761C0(&StringLiteral_6545/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v11);
    sub_1B761C0(&StringLiteral_6546/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v12);
    sub_1B761C0(&StringLiteral_6547/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v13);
    sub_1B761C0(&StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, v14);
    sub_1B761C0(&StringLiteral_1/*""*/, v15);
    byte_4A294DA = 1;
  }
  v16 = Method_FullDownloadControl_OnClickFullDl__;
  if ( (*((_BYTE *)Method_FullDownloadControl_OnClickFullDl__ + 83) & 2) != 0 )
    v16 = (_QWORD *)sub_1B761D8(Method_FullDownloadControl_OnClickFullDl__);
  v17 = (System_Reflection_MethodBase_o *)sub_1B761A4(v16, v16[4]);
  OverwriteAssetSoundName__PlaySystemSe(v17, 0, 0LL);
  downLoadBtn = (AssetManager_o *)this->fields.downLoadBtn;
  if ( !downLoadBtn )
    goto LABEL_18;
  ((void (__fastcall *)(AssetManager_o *, _QWORD, void *))downLoadBtn->klass[1]._1.namespaze)(
    downLoadBtn,
    0LL,
    downLoadBtn->klass[1]._1.byval_arg.data);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  AssetManager__SetupAssetStorageAll(downLoadBtn, 0LL);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  DownloadSize = AssetManager__GetDownloadSize(downLoadBtn, 0LL);
  if ( DownloadSize >= 1 )
  {
    v21 = DownloadSize;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_6547/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v23 = LocalizationManager__Get((System_String_o *)StringLiteral_6546/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( downLoadBtn )
    {
      v24 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(downLoadBtn, (double)v21, 0LL);
      v25 = System_String__Format(v23, v24, 0LL);
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_6545/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v27 = LocalizationManager__Get((System_String_o *)StringLiteral_3754/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v29 = (CommonConfirmDialog_ClickDelegate_o *)sub_1B7640C(CommonConfirmDialog_ClickDelegate_TypeInfo);
      CommonConfirmDialog_ClickDelegate___ctor(v29, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v22,
          v25,
          v26,
          v27,
          v29,
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
    sub_1B7641C(downLoadBtn, v18);
  }
  v30 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v31 = LocalizationManager__Get((System_String_o *)StringLiteral_3844/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v32 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v32, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v30 )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v30,
    (System_String_o *)StringLiteral_1/*""*/,
    v31,
    v32,
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
  UnityEngine_MonoBehaviour__StartCoroutine_69272680((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
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

  if ( (byte_4A294DC & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, method);
    sub_1B761C0(&AvalonSceneManager_TypeInfo, v3);
    sub_1B761C0(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v5);
    byte_4A294DC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v7 = AvalonSceneManager_TypeInfo;
  v8 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    v7 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v7->static_fields->DEFAULT_FADE_TIME;
  v10 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !v8 )
    sub_1B7641C(v11, v12);
  CommonUI__maskFadeout(v8, 1, DEFAULT_FADE_TIME, v10, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *Instance; // x21
  System_Action_o *v9; // x0
  System_Action_o *v10; // x22
  __int64 *v11; // x8
  __int64 v12; // x0
  __int64 v13; // x1

  if ( (byte_4A294DB & 1) == 0 )
  {
    sub_1B761C0(&System_Action_TypeInfo, isRes);
    sub_1B761C0(&Method_FullDownloadControl_checkDownLoadData__, v5);
    sub_1B761C0(&Method_FullDownloadControl_endDownLoad__, v6);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v7);
    byte_4A294DB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v9 = (System_Action_o *)sub_1B7640C(System_Action_TypeInfo);
  v10 = v9;
  if ( isRes )
    v11 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v11 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v9, (Il2CppObject *)this, *v11, 0LL);
  if ( !Instance )
    sub_1B7641C(v12, v13);
  CommonUI__CloseConfirmDialog_30419608((CommonUI_o *)Instance, v10, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20

  if ( (byte_4A294DD & 1) == 0 )
  {
    sub_1B761C0(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method);
    byte_4A294DD = 1;
  }
  v3 = sub_1B7640C(FullDownloadControl__downLoadAll_d__8_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B76164(v3 + 32);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4A294DE & 1) == 0 )
  {
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4A294DE = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL),
        (Instance = (AssetManager_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1B7641C(Instance, v4);
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
  UnityEngine_WaitForEndOfFrame_o *v11; // x20
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  CommonUI_o *v15; // x19

  if ( (byte_4A294DF & 1) == 0 )
  {
    sub_1B761C0(&AvalonSceneManager_TypeInfo, method);
    sub_1B761C0(&ManagementManager_TypeInfo, v3);
    sub_1B761C0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    sub_1B761C0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v5);
    sub_1B761C0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v6);
    byte_4A294DF = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_12;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v15 = Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo);
    if ( !v15 )
LABEL_21:
      sub_1B7641C(Instance, v10);
    CommonUI__maskFadein(v15, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo);
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v8 )
    {
      AssetManager__DownloadAssetStorageAll((AssetManager_o *)v8, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_371257C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v11 = (UnityEngine_WaitForEndOfFrame_o *)sub_1B7640C(UnityEngine_WaitForEndOfFrame_TypeInfo);
        UnityEngine_WaitForEndOfFrame___ctor(v11, 0LL);
        this->fields._wait_5__2 = v11;
        sub_1B76164(&this->fields._wait_5__2);
LABEL_12:
        this->fields.__2__current = (Il2CppObject *)this->fields._wait_5__2;
        p__2__current = &this->fields.__2__current;
        sub_1B76164(p__2__current);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B761D4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B7640C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B761D4(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__);
  sub_1B762E8(v3, v4);
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