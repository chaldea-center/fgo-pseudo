void __fastcall FullDownloadControl___ctor(FullDownloadControl_o *this, const MethodInfo *method)
{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall FullDownloadControl__Init(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UILabel_o *infoLb; // x20
  System_String_o *downLoadBtn; // x0
  __int64 v10; // x1
  UILabel_o *infoDetailLb; // x20

  if ( (byte_4B11607 & 1) == 0 )
  {
    sub_1BCA7E0(&LocalizationManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_6668/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_6669/*"FULLDOWNLOAD_INFO_TXT"*/, v6, v7);
    byte_4B11607 = 1;
  }
  infoLb = this->fields.infoLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method);
  downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6669/*"FULLDOWNLOAD_INFO_TXT"*/, 0LL);
  if ( !infoLb
    || (UILabel__set_text(infoLb, downLoadBtn, 0LL),
        infoDetailLb = this->fields.infoDetailLb,
        downLoadBtn = LocalizationManager__Get((System_String_o *)StringLiteral_6668/*"FULLDOWNLOAD_INFO_DETAIL_TXT"*/, 0LL),
        !infoDetailLb)
    || (UILabel__set_text(infoDetailLb, downLoadBtn, 0LL),
        (downLoadBtn = (System_String_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1BCAA3C(downLoadBtn, v10);
  }
  ((void (__fastcall *)(System_String_o *, __int64, Il2CppMethodPointer))downLoadBtn->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
    downLoadBtn,
    1LL,
    downLoadBtn->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
}


void __fastcall FullDownloadControl__OnClickFullDl(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  _QWORD *v30; // x0
  System_Reflection_MethodBase_o *v31; // x0
  __int64 v32; // x1
  AssetManager_o *downLoadBtn; // x0
  int64_t DownloadSize; // x0
  __int64 v35; // x1
  __int64 v36; // x21
  System_String_o *v37; // x20
  System_String_o *v38; // x22
  Il2CppObject *v39; // x0
  System_String_o *v40; // x21
  System_String_o *v41; // x22
  System_String_o *v42; // x23
  Il2CppObject *Instance; // x24
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  CommonConfirmDialog_ClickDelegate_o *v47; // x25
  __int64 v48; // x1
  Il2CppObject *v49; // x20
  System_String_o *v50; // x21
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  System_Action_o *v54; // x22

  if ( (byte_4B11608 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&CommonConfirmDialog_ClickDelegate_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FullDownloadControl_OnClickFullDl__, v6, v7);
    sub_1BCA7E0(&Method_FullDownloadControl_closeDlg__, v8, v9);
    sub_1BCA7E0(&Method_FullDownloadControl_endDownLoad__, v10, v11);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v14, v15);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v16, v17);
    sub_1BCA7E0(&StringLiteral_3878/*"CONNECT_LATEST_MESSAGE"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_6665/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_6666/*"FULLDOWNLOAD_CONFIRM_MSG"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_6667/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, v24, v25);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v26, v27);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v28, v29);
    byte_4B11608 = 1;
  }
  v30 = Method_FullDownloadControl_OnClickFullDl__;
  if ( (*((_BYTE *)Method_FullDownloadControl_OnClickFullDl__ + 83) & 2) != 0 )
    v30 = (_QWORD *)sub_1BCA7F8(Method_FullDownloadControl_OnClickFullDl__);
  v31 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v30, v30[4]);
  OverwriteAssetSoundName__PlaySystemSe(v31, 0, 0LL);
  downLoadBtn = (AssetManager_o *)this->fields.downLoadBtn;
  if ( !downLoadBtn )
    goto LABEL_18;
  ((void (__fastcall *)(AssetManager_o *, _QWORD, void *))downLoadBtn->klass[1]._1.namespaze)(
    downLoadBtn,
    0LL,
    downLoadBtn->klass[1]._1.byval_arg.data);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  AssetManager__SetupAssetStorageAll(downLoadBtn, 0LL);
  downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !downLoadBtn )
    goto LABEL_18;
  DownloadSize = AssetManager__GetDownloadSize(downLoadBtn, 0LL);
  if ( DownloadSize >= 1 )
  {
    v36 = DownloadSize;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v35);
    v37 = LocalizationManager__Get((System_String_o *)StringLiteral_6667/*"FULLDOWNLOAD_CONFIRM_TITLE"*/, 0LL);
    v38 = LocalizationManager__Get((System_String_o *)StringLiteral_6666/*"FULLDOWNLOAD_CONFIRM_MSG"*/, 0LL);
    downLoadBtn = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( downLoadBtn )
    {
      v39 = (Il2CppObject *)AssetManager__ConvertDownloadSizeToString(downLoadBtn, (double)v36, 0LL);
      v40 = System_String__Format(v38, v39, 0LL);
      v41 = LocalizationManager__Get((System_String_o *)StringLiteral_6665/*"FULLDOWNLOAD_CONFIRM_DECIDE"*/, 0LL);
      v42 = LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      v47 = (CommonConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                     CommonConfirmDialog_ClickDelegate_TypeInfo,
                                                     v44,
                                                     v45,
                                                     v46);
      CommonConfirmDialog_ClickDelegate___ctor(v47, (Il2CppObject *)this, Method_FullDownloadControl_closeDlg__, 0LL);
      if ( Instance )
      {
        CommonUI__OpenConfirmDecideDlg(
          (CommonUI_o *)Instance,
          v37,
          v40,
          v41,
          v42,
          v47,
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
          0LL);
        return;
      }
    }
LABEL_18:
    sub_1BCAA3C(downLoadBtn, v32);
  }
  v49 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v48);
  v50 = LocalizationManager__Get((System_String_o *)StringLiteral_3878/*"CONNECT_LATEST_MESSAGE"*/, 0LL);
  v54 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v51, v52, v53);
  System_Action___ctor(v54, (Il2CppObject *)this, Method_FullDownloadControl_endDownLoad__, 0LL);
  if ( !v49 )
    goto LABEL_18;
  CommonUI__OpenNotificationDialog(
    (CommonUI_o *)v49,
    (System_String_o *)StringLiteral_1/*""*/,
    v50,
    v54,
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, All, 0LL);
}


void __fastcall FullDownloadControl__checkDownLoadData(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  AvalonSceneManager_c *v14; // x8
  CommonUI_o *v15; // x20
  float DEFAULT_FADE_TIME; // s8
  System_Action_o *v17; // x21
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B1160A & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_FullDownloadControl__checkDownLoadData_b__7_0__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v8, v9);
    byte_4B1160A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v14 = AvalonSceneManager_TypeInfo;
  v15 = (CommonUI_o *)Instance;
  if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v11);
    v14 = AvalonSceneManager_TypeInfo;
  }
  DEFAULT_FADE_TIME = v14->static_fields->DEFAULT_FADE_TIME;
  v17 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v11, v12, v13);
  System_Action___ctor(v17, (Il2CppObject *)this, Method_FullDownloadControl__checkDownLoadData_b__7_0__, 0LL);
  if ( !v15 )
    sub_1BCAA3C(v18, v19);
  CommonUI__maskFadeout(v15, 1, DEFAULT_FADE_TIME, v17, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall FullDownloadControl__closeDlg(FullDownloadControl_o *this, bool isRes, const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Il2CppObject *Instance; // x21
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x0
  System_Action_o *v16; // x22
  __int64 *v17; // x8
  __int64 v18; // x0
  __int64 v19; // x1

  if ( (byte_4B11609 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isRes, method);
    sub_1BCA7E0(&Method_FullDownloadControl_checkDownLoadData__, v5, v6);
    sub_1BCA7E0(&Method_FullDownloadControl_endDownLoad__, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v9, v10);
    byte_4B11609 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  v16 = v15;
  if ( isRes )
    v17 = &Method_FullDownloadControl_checkDownLoadData__;
  else
    v17 = &Method_FullDownloadControl_endDownLoad__;
  System_Action___ctor(v15, (Il2CppObject *)this, *v17, 0LL);
  if ( !Instance )
    sub_1BCAA3C(v18, v19);
  CommonUI__CloseConfirmDialog_30766896((CommonUI_o *)Instance, v16, 0LL);
}


System_Collections_IEnumerator_o *__fastcall FullDownloadControl__downLoadAll(
        FullDownloadControl_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20

  if ( (byte_4B1160B & 1) == 0 )
  {
    sub_1BCA7E0(&FullDownloadControl__downLoadAll_d__8_TypeInfo, method, v2);
    byte_4B1160B = 1;
  }
  v5 = sub_1BCAA2C(FullDownloadControl__downLoadAll_d__8_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784(v5 + 32, this);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall FullDownloadControl__endDownLoad(FullDownloadControl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  AssetManager_o *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B1160C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method, v2);
    byte_4B1160C = 1;
  }
  Instance = (AssetManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance
    || (AssetManager__CancelDownloadAssetStorageAll(Instance, 0LL),
        (Instance = (AssetManager_o *)this->fields.downLoadBtn) == 0LL) )
  {
    sub_1BCAA3C(Instance, v5);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  __int64 v13; // x1
  Il2CppObject *v14; // x20
  CommonUI_o *Instance; // x0
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  UnityEngine_WaitForEndOfFrame_o *v20; // x20
  struct FullDownloadControl_o *_4__this; // x21
  Il2CppObject *wait_5__2; // x1
  Il2CppObject **p__2__current; // x19
  bool result; // w0
  CommonUI_o *v25; // x19

  if ( (byte_4B1160D & 1) == 0 )
  {
    sub_1BCA7E0(&AvalonSceneManager_TypeInfo, method, v2);
    sub_1BCA7E0(&ManagementManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&UnityEngine_WaitForEndOfFrame_TypeInfo, v10, v11);
    byte_4B1160D = 1;
  }
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    _4__this = this->fields.__4__this;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !Instance )
      goto LABEL_21;
    if ( CommonUI__IsBusyLoad(Instance, 0LL) )
      goto LABEL_12;
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v25 = Instance;
    if ( !AvalonSceneManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AvalonSceneManager_TypeInfo, v16);
    if ( !v25 )
LABEL_21:
      sub_1BCAA3C(Instance, v16);
    CommonUI__maskFadein(v25, AvalonSceneManager_TypeInfo->static_fields->DEFAULT_FADE_TIME, 0LL, 0LL);
  }
  else if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v14 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !ManagementManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(ManagementManager_TypeInfo, v13);
    Instance = (CommonUI_o *)ManagementManager__get_DownloadParallelMax(0LL);
    if ( v14 )
    {
      AssetManager__DownloadAssetStorageAll((AssetManager_o *)v14, (int32_t)Instance, 0LL);
      Instance = (CommonUI_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
      if ( Instance )
      {
        CommonUI__SetLoadMode(Instance, 5, 0LL);
        v20 = (UnityEngine_WaitForEndOfFrame_o *)sub_1BCAA2C(UnityEngine_WaitForEndOfFrame_TypeInfo, v17, v18, v19);
        UnityEngine_WaitForEndOfFrame___ctor(v20, 0LL);
        this->fields._wait_5__2 = v20;
        sub_1BCA784(&this->fields._wait_5__2, v20);
LABEL_12:
        wait_5__2 = (Il2CppObject *)this->fields._wait_5__2;
        this->fields.__2__current = wait_5__2;
        p__2__current = &this->fields.__2__current;
        sub_1BCA784(p__2__current, wait_5__2);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_FullDownloadControl__downLoadAll_d__8_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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