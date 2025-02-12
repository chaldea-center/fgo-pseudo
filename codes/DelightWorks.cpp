void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  Il2CppObject *Instance; // x0
  __int64 v15; // x1
  const MethodInfo *v16; // x3
  UnityEngine_MonoBehaviour_o *v17; // x21
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4BB30C4 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1C13D24(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v6);
    byte_4BB30C4 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v7;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._responseHeaders_k__BackingField,
    (int64_t)v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_1C13F80(0LL, v15);
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  v18 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260(v17, v18, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor_38149352(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        bool checkServerTimeFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  NetworkManager_c *v15; // x0
  System_Collections_Generic_Dictionary_object__object__o *v16; // x23
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  Il2CppObject *Instance; // x0
  __int64 v24; // x1
  const MethodInfo *v25; // x5
  UnityEngine_MonoBehaviour_o *v26; // x23
  System_Collections_IEnumerator_o *v27; // x0
  System_Collections_Generic_Dictionary_object__object__o *v28; // x23
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  const MethodInfo *v35; // x5

  if ( (byte_4BB30C5 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url);
    sub_1C13D24(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11);
    sub_1C13D24(&NetworkManager_TypeInfo, v12);
    sub_1C13D24(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v13);
    byte_4BB30C5 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( checkServerTimeFlag )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4BB30EF )
    {
      sub_1C13D24(&NetworkManager_TypeInfo, v14);
      byte_4BB30EF = 1;
    }
    v15 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v15 = NetworkManager_TypeInfo;
    }
    if ( !v15->static_fields->serverTimeChkMovie )
    {
      v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v28,
        (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v28;
      sub_1C13CC8(
        (PartyOrganizationUtility_o *)&this->fields._responseHeaders_k__BackingField,
        (int64_t)v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v26 = (UnityEngine_MonoBehaviour_o *)Instance;
        v27 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v35);
        goto LABEL_13;
      }
LABEL_16:
      sub_1C13F80(Instance, v24);
    }
  }
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C13F70(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_32F2000 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v16;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._responseHeaders_k__BackingField,
    (int64_t)v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3869BD8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v26 = (UnityEngine_MonoBehaviour_o *)Instance;
  v27 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          postData,
          headers,
          this,
          v25);
LABEL_13:
  UnityEngine_MonoBehaviour__StartCoroutine_70707260(v26, v27, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__Dispose(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  ;
}


System_Text_Encoding_o *__fastcall DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *responseHeaders_k__BackingField; // x0
  __int64 v8; // x1
  __int64 v9; // x0
  System_String_o *v10; // x19
  int v11; // w8
  System_String_o *v12; // x19
  int32_t v13; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4BB30C6 & 1) == 0 )
  {
    sub_1C13D24(&char___TypeInfo, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v3);
    sub_1C13D24(&StringLiteral_1580/*":{0}:{1}"*/, v4);
    sub_1C13D24(&StringLiteral_3903/*"CONSUME_STORMPOD_SPOT_ID"*/, v5);
    sub_1C13D24(&StringLiteral_18210/*"charaShakeStop"*/, v6);
    byte_4BB30C6 = 1;
  }
  value = 0LL;
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3903/*"CONSUME_STORMPOD_SPOT_ID"*/,
          &value,
          (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0LL);
  }
  v9 = (__int64)value;
  if ( !value )
    goto LABEL_19;
  v9 = System_String__IndexOf_62998100((System_String_o *)value, (System_String_o *)StringLiteral_18210/*"charaShakeStop"*/, 5, 0LL);
  if ( !StringLiteral_18210/*"charaShakeStop"*/ )
    goto LABEL_19;
  if ( (v9 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0LL);
  if ( !value )
    goto LABEL_19;
  v9 = (__int64)System_String__Substring((System_String_o *)value, *((_DWORD *)StringLiteral_18210/*"charaShakeStop"*/ + 4) + (int)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v10 = System_String__Trim((System_String_o *)v9, 0LL);
  v9 = sub_1C13DCC(char___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_19;
  v11 = *(_DWORD *)(v9 + 24);
  v8 = v9;
  if ( !v11 || (*(_WORD *)(v9 + 32) = 39, v11 == 1) )
    sub_1C13F88(v9, v9);
  *(_WORD *)(v9 + 34) = 34;
  if ( !v10
    || (v9 = (__int64)System_String__Trim_62997692(v10, (System_Char_array *)v9, 0LL)) == 0
    || (v9 = (__int64)System_String__Trim((System_String_o *)v9, 0LL)) == 0 )
  {
LABEL_19:
    sub_1C13F80(v9, v8);
  }
  v12 = (System_String_o *)v9;
  v13 = System_String__IndexOf_62998100((System_String_o *)v9, (System_String_o *)StringLiteral_1580/*":{0}:{1}"*/, 0, 0LL);
  if ( (v13 & 0x80000000) == 0 )
    v12 = System_String__Substring_62986948(v12, 0, v13, 0LL);
  return System_Text_Encoding__GetEncoding_62197048(v12, 0LL);
}


System_Byte_array *__fastcall DelightWorks_Network_UnityWebRequestWWW__get_bytes(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._bytes_k__BackingField;
}


System_String_o *__fastcall DelightWorks_Network_UnityWebRequestWWW__get_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._error_k__BackingField;
}


bool __fastcall DelightWorks_Network_UnityWebRequestWWW__get_isDone(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._isDone_k__BackingField;
}


float __fastcall DelightWorks_Network_UnityWebRequestWWW__get_progress(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._progress_k__BackingField;
}


System_Collections_Generic_Dictionary_string__string__o *__fastcall DelightWorks_Network_UnityWebRequestWWW__get_responseHeaders(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._responseHeaders_k__BackingField;
}


System_String_o *__fastcall DelightWorks_Network_UnityWebRequestWWW__get_text(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  System_Text_Encoding_o *TextEncoding; // x0
  struct System_Byte_array *bytes_k__BackingField; // x1
  __int64 v6; // x0
  UnityEngine_UnityException_o *v7; // x19
  System_String_o *v8; // x0
  __int64 v9; // x0

  if ( !this->fields._isDone_k__BackingField )
  {
    v6 = sub_1C13D38(&UnityEngine_UnityException_TypeInfo);
    v7 = (UnityEngine_UnityException_o *)sub_1C13F70(v6);
    v8 = (System_String_o *)sub_1C13D38(&StringLiteral_15803/*"WEB_VIEW_TITLE_CONTACT_US"*/);
    UnityEngine_UnityException___ctor_70706448(v7, v8, 0LL);
    v9 = sub_1C13D38(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__);
    sub_1C13E4C(v7, v9);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_1C13F80(TextEncoding, bytes_k__BackingField);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))TextEncoding->klass->vtable._37_GetString.method)(
                              TextEncoding,
                              bytes_k__BackingField,
                              0LL,
                              bytes_k__BackingField->max_length,
                              TextEncoding->klass->vtable._38_GetBestFitUnicodeToBytesData.methodPtr);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_bytes(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_Byte_array *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._bytes_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._bytes_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._error_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._error_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_isDone(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDone_k__BackingField = value;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_progress(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._progress_k__BackingField = value;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_responseHeaders(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_Collections_Generic_Dictionary_string__string__o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7

  this->fields._responseHeaders_k__BackingField = value;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&this->fields._responseHeaders_k__BackingField,
    (int64_t)value,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        const MethodInfo *method)
{
  if ( (byte_4BB30BC & 1) == 0 )
  {
    sub_1C13D24(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__, method);
    byte_4BB30BC = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3869FF0 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
}


System_String_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *inStr,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v11; // x0
  System_Func_char__bool__o *_9__8_0; // x20
  Il2CppObject *v13; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *static_fields; // x0
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v21; // x0
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v23; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v24; // x0
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x0
  System_Char_array *v32; // x0

  if ( (byte_4BB30BB & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Linq_Enumerable_Any_char___, inStr);
    sub_1C13D24(&Method_System_Linq_Enumerable_Select_char__char___, v4);
    sub_1C13D24(&Method_System_Linq_Enumerable_ToArray_char___, v5);
    sub_1C13D24(&System_Func_char__char__TypeInfo, v6);
    sub_1C13D24(&System_Func_char__bool__TypeInfo, v7);
    sub_1C13D24(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__, v8);
    sub_1C13D24(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__, v9);
    sub_1C13D24(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v10);
    byte_4BB30BB = 1;
  }
  v11 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v11 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_0 = v11->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v13 = (Il2CppObject *)v11->static_fields->__9;
    _9__8_0 = (System_Func_char__bool__o *)sub_1C13F70(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__8_0,
      v13,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0LL);
    static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1C13CC8((PartyOrganizationUtility_o *)&static_fields->__9__8_0, (int64_t)_9__8_0, v15, v16, v17, v18, v19, v20);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_2F9C180 *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v21 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v21 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_1 = v21->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_1C13F70(System_Func_char__char__TypeInfo);
    System_Func_char__char____ctor(
      _9__8_1,
      v23,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0LL);
    v24 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v24->__9__8_1 = _9__8_1;
    sub_1C13CC8((PartyOrganizationUtility_o *)&v24->__9__8_1, (int64_t)_9__8_1, v25, v26, v27, v28, v29, v30);
  }
  v31 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_2FBB470 *)Method_System_Linq_Enumerable_Select_char__char___);
  v32 = System_Linq_Enumerable__ToArray_char_(
          v31,
          (const MethodInfo_2FC8B14 *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_62971808(0LL, v32, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BB30B6 & 1) == 0 )
  {
    sub_1C13D24(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo, url);
    byte_4BB30B6 = 1;
  }
  v7 = sub_1C13F70(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = url;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)url, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)unityWebRequestWww, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v5; // x20
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
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  long double inited; // q0
  _QWORD *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  System_Collections_Generic_Dictionary_object__object__o *v33; // x21
  __int64 v34; // x2
  __int64 v35; // x3
  __int64 v36; // x4
  Il2CppObject *v37; // x0
  __int64 v38; // x1
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  int64_t v45; // x20
  NetworkManager_c *v46; // x0
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v47; // x1
  System_String_o *error; // x21
  System_String_o *v49; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_4BB30BA & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_byte___, req);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v7);
    sub_1C13D24(&long_TypeInfo, v8);
    sub_1C13D24(&NetworkManager_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_117/*" "*/, v10);
    sub_1C13D24(&StringLiteral_12476/*"START_NP_PLAYER"*/, v11);
    sub_1C13D24(&StringLiteral_15947/*"Writeback"*/, v12);
    sub_1C13D24(&StringLiteral_1/*""*/, v13);
    sub_1C13D24(&StringLiteral_7333/*"HTTP/1.1 100 Continue\r\n\r\n"*/, v14);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C13D24(&StringLiteral_11412/*"RecoveryFatigue"*/, v15);
    byte_4BB30BA = 1;
  }
  value = 0LL;
  result = 0LL;
  if ( !v5 )
    goto LABEL_38;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_result(
                                                                 v5,
                                                                 0LL);
  if ( (_DWORD)this == 2 )
  {
    if ( UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL) == 303 )
    {
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_error(
                                                                     v5,
                                                                     0LL);
      if ( !this )
        goto LABEL_38;
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11412/*"RecoveryFatigue"*/, 0LL) )
      {
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                       v5,
                                                                       0LL);
        if ( !this )
          goto LABEL_38;
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                       (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                       0LL);
        req = (UnityEngine_Networking_UnityWebRequest_o *)this;
        if ( !this )
        {
          v23 = Method_System_Array_Empty_byte___;
          v24 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
          if ( !v24 )
          {
            sub_1C65C5C(Method_System_Array_Empty_byte___);
            v24 = v23[7];
          }
          v25 = *(_QWORD *)(v24 + 16);
          if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
            v25 = sub_1C65C00(inited);
          if ( !*(_DWORD *)(v25 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v25);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v23[7] + 16LL);
          if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C65C00(inited);
          req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
        }
        if ( !unityWebRequestWww )
          goto LABEL_38;
        unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
          (int64_t)req,
          v16,
          v17,
          v18,
          v19,
          v20,
          v21);
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
        if ( ResponseHeaders )
        {
          v33 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
          unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
          sub_1C13CC8(
            (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (int64_t)ResponseHeaders,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
          v37 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v34, v35, v36);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7333/*"HTTP/1.1 100 Continue\r\n\r\n"*/,
                                                                         v37,
                                                                         0LL);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_38;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12476/*"START_NP_PLAYER"*/,
            (Il2CppObject *)this,
            (const MethodInfo_32F29B0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v33,
                 (Il2CppObject *)StringLiteral_15947/*"Writeback"*/,
                 &value,
                 (const MethodInfo_32F41BC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0LL) )
          {
            v45 = result;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4BB30EE )
            {
              sub_1C13D24(&NetworkManager_TypeInfo, v38);
              byte_4BB30EE = 1;
            }
            v46 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v46 = NetworkManager_TypeInfo;
            }
            v46->static_fields->serverTimeChkMovie = v45;
            v47 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)StringLiteral_1/*""*/;
            goto LABEL_36;
          }
        }
      }
    }
    error = UnityEngine_Networking_UnityWebRequest__get_error(v5, 0LL);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   v5,
                                                                   0LL);
    if ( this )
    {
      v49 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_62979204(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_117/*" "*/,
                                                                     v49,
                                                                     0LL);
      if ( unityWebRequestWww )
      {
        v47 = this;
LABEL_36:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v47;
        sub_1C13CC8(
          (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._error_k__BackingField,
          (int64_t)v47,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        goto LABEL_37;
      }
    }
LABEL_38:
    sub_1C13F80(this, req);
  }
  if ( !unityWebRequestWww )
    goto LABEL_38;
LABEL_37:
  unityWebRequestWww->fields._isDone_k__BackingField = 1;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v5; // x20
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_String_o *error; // x21
  System_String_o *v12; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  long double inited; // q0
  _QWORD *v26; // x21
  __int64 v27; // x8
  __int64 v28; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  Il2CppObject *v39; // x0
  int64_t responseCode; // [xsp+8h] [xbp-38h] BYREF

  v5 = req;
  if ( (byte_4BB30B9 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Array_Empty_byte___, req);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1C13D24(&long_TypeInfo, v7);
    sub_1C13D24(&StringLiteral_117/*" "*/, v8);
    sub_1C13D24(&StringLiteral_12476/*"START_NP_PLAYER"*/, v9);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C13D24(&StringLiteral_7333/*"HTTP/1.1 100 Continue\r\n\r\n"*/, v10);
    byte_4BB30B9 = 1;
  }
  if ( !v5 )
    goto LABEL_24;
  if ( UnityEngine_Networking_UnityWebRequest__get_result(v5, 0LL) != 1 )
  {
    error = UnityEngine_Networking_UnityWebRequest__get_error(v5, 0LL);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   v5,
                                                                   0LL);
    if ( !this )
      goto LABEL_24;
    v12 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_62979204(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_117/*" "*/,
                                                                   v12,
                                                                   0LL);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._error_k__BackingField,
      (int64_t)this,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
  }
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                 v5,
                                                                 0LL);
  if ( !this )
    goto LABEL_24;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0LL);
  req = (UnityEngine_Networking_UnityWebRequest_o *)this;
  if ( !this )
  {
    v26 = Method_System_Array_Empty_byte___;
    v27 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v27 )
    {
      sub_1C65C5C(Method_System_Array_Empty_byte___);
      v27 = v26[7];
    }
    v28 = *(_QWORD *)(v27 + 16);
    if ( (*(_BYTE *)(v28 + 309) & 1) == 0 )
      v28 = sub_1C65C00(inited);
    if ( !*(_DWORD *)(v28 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v28);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v26[7] + 16LL);
    if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C65C00(inited);
    req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_1C13F80(this, req);
  unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
    (int64_t)req,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
  if ( ResponseHeaders )
  {
    unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
    sub_1C13CC8(
      (PartyOrganizationUtility_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
      (int64_t)ResponseHeaders,
      v30,
      v31,
      v32,
      v33,
      v34,
      v35);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
    v39 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v36, v37, v38);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7333/*"HTTP/1.1 100 Continue\r\n\r\n"*/,
                                                                   v39,
                                                                   0LL);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12476/*"START_NP_PLAYER"*/,
        (Il2CppObject *)this,
        (const MethodInfo_32F29B0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
LABEL_23:
  unityWebRequestWww->fields._isDone_k__BackingField = 1;
}


System_Collections_IEnumerator_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v11; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB30B7 & 1) == 0 )
  {
    sub_1C13D24(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo, url);
    byte_4BB30B7 = 1;
  }
  v11 = sub_1C13F70(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 56), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 48), (int64_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 64), (int64_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
  return (System_Collections_IEnumerator_o *)v11;
}


System_Collections_IEnumerator_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v11; // x24
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7

  if ( (byte_4BB30B8 & 1) == 0 )
  {
    sub_1C13D24(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo, url);
    byte_4BB30B8 = 1;
  }
  v11 = sub_1C13F70(DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 56), (int64_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 32), (int64_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 40), (int64_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 48), (int64_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C13CC8((PartyOrganizationUtility_o *)(v11 + 64), (int64_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
  return (System_Collections_IEnumerator_o *)v11;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__StartGet(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(this, url, unityWebRequestWww, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__StartNoRedirectPost(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v7; // x1

  v7 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
         this,
         url,
         postData,
         headers,
         unityWebRequestWww,
         method);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__StartPost(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v7; // x1

  v7 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(this, url, postData, headers, unityWebRequestWww, method);
  UnityEngine_MonoBehaviour__StartCoroutine_70707260((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  System_String_o *url; // x20
  System_Uri_o *v5; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *_73237856; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v7; // x0
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Networking_UnityWebRequest_o *v15; // x0
  Il2CppObject *v16; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v17; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x20
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o **v32; // [xsp+8h] [xbp-28h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v33; // [xsp+18h] [xbp-18h] BYREF

  v33 = this;
  if ( (byte_4BB30BE & 1) == 0 )
  {
    sub_1C13D24(&System_Uri_TypeInfo, method);
    byte_4BB30BE = 1;
  }
  v32 = &v33;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C13F80(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1C13F80(IsNullOrEmpty, v29);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v33->fields._req_5__2,
      v33->fields.unityWebRequestWww,
      v30);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(v33, v31);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v5 = (System_Uri_o *)sub_1C13F70(System_Uri_TypeInfo);
  System_Uri___ctor(v5, url, 0LL);
  _73237856 = UnityEngine_Networking_UnityWebRequest__Get_73237856(v5, 0LL);
  v7 = v33;
  v33->fields._req_5__2 = _73237856;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v7->fields._req_5__2, (int64_t)_73237856, v8, v9, v10, v11, v12, v13);
  v15 = v33->fields._req_5__2;
  v33->fields.__1__state = -3;
  if ( !v15 )
    sub_1C13F80(0LL, v14);
  v16 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v15, 0LL);
  v17 = v33;
  v33->fields.__2__current = v16;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v17->fields.__2__current, (int64_t)v16, v18, v19, v20, v21, v22, v23);
  result = 1;
  v33->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(this, method);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4BB30BF & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB30BF = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v14; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v15; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  __int64 v23; // x1
  UnityEngine_Networking_UnityWebRequest_o *v24; // x0
  __int64 v25; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v27; // x0
  _BOOL8 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v32; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v33; // x20
  const MethodInfo *v34; // x2
  System_String_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  __int64 v39; // x1
  const MethodInfo *v40; // x3
  bool IsNullOrEmpty; // w8
  int64_t responseCode; // x0
  const MethodInfo *v43; // x1
  __int64 v44; // x1
  UnityEngine_Networking_UnityWebRequest_o *v45; // x0
  UnityEngine_Networking_UnityWebRequest_o *v46; // x0
  System_String_o *v47; // x0
  __int64 v48; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v50; // x0
  Il2CppObject *v51; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v52; // x0
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v59; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v60; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v61; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v62; // [xsp+68h] [xbp-38h] BYREF

  v62 = this;
  if ( (byte_4BB30C2 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v8);
    sub_1C13D24(&System_Uri_TypeInfo, v9);
    sub_1C13D24(&StringLiteral_11412/*"RecoveryFatigue"*/, v10);
    byte_4BB30C2 = 1;
  }
  memset(&v61, 0, sizeof(v61));
  v60 = &v62;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C13F80(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    responseCode = (int64_t)v62->fields._req_5__2;
    if ( IsNullOrEmpty )
    {
      if ( !_4__this )
        sub_1C13F80(responseCode, v39);
    }
    else
    {
      if ( !responseCode )
        sub_1C13F80(0LL, v39);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_result(
                       (UnityEngine_Networking_UnityWebRequest_o *)responseCode,
                       0LL);
      if ( (_DWORD)responseCode != 2 )
        goto LABEL_27;
      v45 = v62->fields._req_5__2;
      if ( !v45 )
        sub_1C13F80(0LL, v44);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v45, 0LL);
      if ( responseCode != 303 )
        goto LABEL_27;
      v46 = v62->fields._req_5__2;
      if ( !v46 )
        sub_1C13F80(0LL, v44);
      v47 = UnityEngine_Networking_UnityWebRequest__get_error(v46, 0LL);
      if ( !v47 )
        sub_1C13F80(0LL, v48);
      responseCode = System_String__Contains(v47, (System_String_o *)StringLiteral_11412/*"RecoveryFatigue"*/, 0LL);
      if ( (responseCode & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_1C13F80(responseCode, v44);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
          v62->fields._req_5__2,
          v62->fields.unityWebRequestWww,
          v40);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_1C13F80(responseCode, v44);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
      v62->fields._req_5__2,
      v62->fields.unityWebRequestWww,
      v40);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v62, v43);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v14 = (System_Uri_o *)sub_1C13F70(System_Uri_TypeInfo);
  System_Uri___ctor(v14, url, 0LL);
  v15 = UnityEngine_Networking_UnityWebRequest__Post(v14, v62->fields.postData, 0LL);
  v16 = v62;
  v62->fields._req_5__2 = v15;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v16->fields._req_5__2, (int64_t)v15, v17, v18, v19, v20, v21, v22);
  v24 = v62->fields._req_5__2;
  v62->fields.__1__state = -3;
  if ( !v24 )
    sub_1C13F80(0LL, v23);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v24, 0, 0LL);
  headers = v62->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_32F2680 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v27 = v62->fields.headers;
    if ( !v27 )
      sub_1C13F80(0LL, v25);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v59,
      (System_Collections_Generic_Dictionary_object__object__o *)v27,
      (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v61 = v59;
    while ( 1 )
    {
      v28 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v61,
              (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v28 )
        break;
      if ( !_4__this )
        sub_1C13F80(v28, v29);
      value = v61.fields._current.fields.value;
      v32 = v62->fields._req_5__2;
      v33 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v28,
                                                                    (System_String_o *)v61.fields._current.fields.key,
                                                                    v30);
      v35 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v33, (System_String_o *)value, v34);
      if ( !v32 )
        sub_1C13F80(v35, v36);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v32, (System_String_o *)v33, v35, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v61,
      (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v50 = v62->fields._req_5__2;
  if ( !v50 )
    sub_1C13F80(0LL, v25);
  v51 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v50, 0LL);
  v52 = v62;
  v62->fields.__2__current = v51;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v52->fields.__2__current, (int64_t)v51, v53, v54, v55, v56, v57, v58);
  result = 1;
  v62->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(this, method);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4BB30C3 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB30C3 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v13; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v14; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v15; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  __int64 v22; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v24; // x0
  _BOOL8 v25; // x0
  __int64 v26; // x1
  const MethodInfo *v27; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v29; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v30; // x20
  const MethodInfo *v31; // x2
  System_String_o *v32; // x0
  __int64 v33; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x3
  const MethodInfo *v39; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v41; // x0
  Il2CppObject *v42; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v43; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v50; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v51; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v53; // [xsp+68h] [xbp-38h] BYREF

  v53 = this;
  if ( (byte_4BB30C0 & 1) == 0 )
  {
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v4);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v5);
    sub_1C13D24(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v6);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v7);
    sub_1C13D24(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v8);
    sub_1C13D24(&System_Uri_TypeInfo, v9);
    byte_4BB30C0 = 1;
  }
  memset(&v52, 0, sizeof(v52));
  v51 = &v53;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C13F80(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1C13F80(IsNullOrEmpty, v37);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v53->fields._req_5__2,
      v53->fields.unityWebRequestWww,
      v38);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v53, v39);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v13 = (System_Uri_o *)sub_1C13F70(System_Uri_TypeInfo);
  System_Uri___ctor(v13, url, 0LL);
  v14 = UnityEngine_Networking_UnityWebRequest__Post(v13, v53->fields.postData, 0LL);
  v15 = v53;
  v53->fields._req_5__2 = v14;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v15->fields._req_5__2, (int64_t)v14, v16, v17, v18, v19, v20, v21);
  headers = v53->fields.headers;
  v53->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_32F2680 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v24 = v53->fields.headers;
    if ( !v24 )
      sub_1C13F80(0LL, v22);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v50,
      (System_Collections_Generic_Dictionary_object__object__o *)v24,
      (const MethodInfo_32F2DE0 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v52 = v50;
    while ( 1 )
    {
      v25 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v52,
              (const MethodInfo_33EFDF0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v25 )
        break;
      if ( !_4__this )
        sub_1C13F80(v25, v26);
      value = v52.fields._current.fields.value;
      v29 = v53->fields._req_5__2;
      v30 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v25,
                                                                    (System_String_o *)v52.fields._current.fields.key,
                                                                    v27);
      v32 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v30, (System_String_o *)value, v31);
      if ( !v29 )
        sub_1C13F80(v32, v33);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v29, (System_String_o *)v30, v32, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v52,
      (const MethodInfo_33EFF10 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v41 = v53->fields._req_5__2;
  if ( !v41 )
    sub_1C13F80(0LL, v22);
  v42 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v41, 0LL);
  v43 = v53;
  v53->fields.__2__current = v42;
  sub_1C13CC8((PartyOrganizationUtility_o *)&v43->fields.__2__current, (int64_t)v42, v44, v45, v46, v47, v48, v49);
  result = 1;
  v53->fields.__1__state = 1;
  return result;
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C13D38(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C13F70(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C13D38(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C13E4C(v3, v4);
}


Il2CppObject *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(this, method);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4BB30C1 & 1) == 0 )
  {
    sub_1C13D24(&System_IDisposable_TypeInfo, method);
    byte_4BB30C1 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v7 = sub_1C65D04(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7

  if ( (byte_4BB30BD & 1) == 0 )
  {
    sub_1C13D24(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v1);
    byte_4BB30BD = 1;
  }
  v2 = (Il2CppObject *)sub_1C13F70(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v2;
  sub_1C13CC8(
    (PartyOrganizationUtility_o *)DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields,
    (int64_t)v2,
    v3,
    v4,
    v5,
    v6,
    v7,
    v8);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___c___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___c___FilterNonAsciiChar_b__8_0(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        uint16_t ch,
        const MethodInfo *method)
{
  return ch > 0x7Fu;
}


uint16_t __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___c___FilterNonAsciiChar_b__8_1(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        uint16_t ch,
        const MethodInfo *method)
{
  if ( ch >= 0x80u )
    return 63;
  else
    return ch;
}