void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  Il2CppObject *Instance; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3
  UnityEngine_MonoBehaviour_o *v13; // x21
  System_Collections_IEnumerator_o *v14; // x1

  if ( (byte_4A4CDB2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5);
    sub_1B863B8(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v6);
    byte_4A4CDB2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v7,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v7;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v7, v8, v9);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_1B86614(0LL, v11);
  v13 = (UnityEngine_MonoBehaviour_o *)Instance;
  v14 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v12);
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(v13, v14, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor_37870740(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  UnityEngine_MonoBehaviour_o *v22; // x23
  System_Collections_IEnumerator_o *v23; // x0
  System_Collections_Generic_Dictionary_object__object__o *v24; // x23
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // x5

  if ( (byte_4A4CDB3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url);
    sub_1B863B8(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11);
    sub_1B863B8(&NetworkManager_TypeInfo, v12);
    sub_1B863B8(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v13);
    byte_4A4CDB3 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( checkServerTimeFlag )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4A4CDDD )
    {
      sub_1B863B8(&NetworkManager_TypeInfo, v14);
      byte_4A4CDDD = 1;
    }
    v15 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v15 = NetworkManager_TypeInfo;
    }
    if ( !v15->static_fields->serverTimeChkMovie )
    {
      v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v24,
        (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v24;
      sub_1B8635C((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v24, v25, v26);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v22 = (UnityEngine_MonoBehaviour_o *)Instance;
        v23 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v27);
        goto LABEL_13;
      }
LABEL_16:
      sub_1B86614(Instance, v20);
    }
  }
  v16 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B86604(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v16,
    (const MethodInfo_32CDD30 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v16;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v16, v17, v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3839680 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v22 = (UnityEngine_MonoBehaviour_o *)Instance;
  v23 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          postData,
          headers,
          this,
          v21);
LABEL_13:
  UnityEngine_MonoBehaviour__StartCoroutine_69341456(v22, v23, 0LL);
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

  if ( (byte_4A4CDB4 & 1) == 0 )
  {
    sub_1B863B8(&char___TypeInfo, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v3);
    sub_1B863B8(&StringLiteral_1503/*";"*/, v4);
    sub_1B863B8(&StringLiteral_3781/*"CONTENT-TYPE"*/, v5);
    sub_1B863B8(&StringLiteral_17710/*"charset="*/, v6);
    byte_4A4CDB4 = 1;
  }
  value = 0LL;
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3781/*"CONTENT-TYPE"*/,
          &value,
          (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0LL);
  }
  v9 = (__int64)value;
  if ( !value )
    goto LABEL_19;
  v9 = System_String__IndexOf_61702252((System_String_o *)value, (System_String_o *)StringLiteral_17710/*"charset="*/, 5, 0LL);
  if ( !StringLiteral_17710/*"charset="*/ )
    goto LABEL_19;
  if ( (v9 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0LL);
  if ( !value )
    goto LABEL_19;
  v9 = (__int64)System_String__Substring((System_String_o *)value, *((_DWORD *)StringLiteral_17710/*"charset="*/ + 4) + (int)v9, 0LL);
  if ( !v9 )
    goto LABEL_19;
  v10 = System_String__Trim((System_String_o *)v9, 0LL);
  v9 = sub_1B86460(char___TypeInfo, 2LL);
  if ( !v9 )
    goto LABEL_19;
  v11 = *(_DWORD *)(v9 + 24);
  v8 = v9;
  if ( !v11 || (*(_WORD *)(v9 + 32) = 39, v11 == 1) )
    sub_1B8661C(v9, v9);
  *(_WORD *)(v9 + 34) = 34;
  if ( !v10
    || (v9 = (__int64)System_String__Trim_61701844(v10, (System_Char_array *)v9, 0LL)) == 0
    || (v9 = (__int64)System_String__Trim((System_String_o *)v9, 0LL)) == 0 )
  {
LABEL_19:
    sub_1B86614(v9, v8);
  }
  v12 = (System_String_o *)v9;
  v13 = System_String__IndexOf_61702252((System_String_o *)v9, (System_String_o *)StringLiteral_1503/*";"*/, 0, 0LL);
  if ( (v13 & 0x80000000) == 0 )
    v12 = System_String__Substring_61691100(v12, 0, v13, 0LL);
  return System_Text_Encoding__GetEncoding_61797928(v12, 0LL);
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
    v6 = sub_1B863CC(&UnityEngine_UnityException_TypeInfo);
    v7 = (UnityEngine_UnityException_o *)sub_1B86604(v6);
    v8 = (System_String_o *)sub_1B863CC(&StringLiteral_15334/*"WWW is not ready downloading yet"*/);
    UnityEngine_UnityException___ctor_69350316(v7, v8, 0LL);
    v9 = sub_1B863CC(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__);
    sub_1B864E0(v7, v9);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_1B86614(TextEncoding, bytes_k__BackingField);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, struct System_Byte_array *, _QWORD, _QWORD, Il2CppMethodPointer))TextEncoding->klass->vtable._36_GetString.method)(
                              TextEncoding,
                              bytes_k__BackingField,
                              0LL,
                              bytes_k__BackingField->max_length,
                              TextEncoding->klass->vtable._37_GetBestFitUnicodeToBytesData.methodPtr);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_bytes(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_Byte_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._bytes_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._bytes_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._error_k__BackingField = value;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields._error_k__BackingField, (int32_t)value, (int32_t)method, v3);
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
  const MethodInfo *v3; // x3

  this->fields._responseHeaders_k__BackingField = value;
  sub_1B8635C(
    (CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A4CDAA & 1) == 0 )
  {
    sub_1B863B8(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__, method);
    byte_4A4CDAA = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3839A98 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
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
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v17; // x0
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v19; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v20; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x0
  System_Char_array *v24; // x0

  if ( (byte_4A4CDA9 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Linq_Enumerable_Any_char___, inStr);
    sub_1B863B8(&Method_System_Linq_Enumerable_Select_char__char___, v4);
    sub_1B863B8(&Method_System_Linq_Enumerable_ToArray_char___, v5);
    sub_1B863B8(&System_Func_char__char__TypeInfo, v6);
    sub_1B863B8(&System_Func_char__bool__TypeInfo, v7);
    sub_1B863B8(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__, v8);
    sub_1B863B8(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__, v9);
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v10);
    byte_4A4CDA9 = 1;
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
    _9__8_0 = (System_Func_char__bool__o *)sub_1B86604(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__8_0,
      v13,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0LL);
    static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1B8635C((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v15, v16);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_2F7D150 *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_1 = v17->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v19 = (Il2CppObject *)v17->static_fields->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_1B86604(System_Func_char__char__TypeInfo);
    System_Func_char__char____ctor(
      _9__8_1,
      v19,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0LL);
    v20 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v20->__9__8_1 = _9__8_1;
    sub_1B8635C((CGThumbnailListItem_o *)&v20->__9__8_1, (int32_t)_9__8_1, v21, v22);
  }
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_2F9DC6C *)Method_System_Linq_Enumerable_Select_char__char___);
  v24 = System_Linq_Enumerable__ToArray_char_(
          v23,
          (const MethodInfo_2FA96B8 *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_61676088(0LL, v24, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4A4CDA4 & 1) == 0 )
  {
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo, url);
    byte_4A4CDA4 = 1;
  }
  v7 = sub_1B86604(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = url;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 32), (int32_t)url, v10, v11);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_1B8635C((CGThumbnailListItem_o *)(v7 + 48), (int32_t)unityWebRequestWww, v12, v13);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  long double inited; // q0
  _QWORD *v19; // x21
  __int64 v20; // x8
  __int64 v21; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v23; // w2
  const MethodInfo *v24; // x3
  System_Collections_Generic_Dictionary_object__object__o *v25; // x21
  __int64 v26; // x2
  __int64 v27; // x3
  __int64 v28; // x4
  Il2CppObject *v29; // x0
  __int64 v30; // x1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int64_t v33; // x20
  NetworkManager_c *v34; // x0
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v35; // x1
  System_String_o *error; // x21
  System_String_o *v37; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_4A4CDA8 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_byte___, req);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v7);
    sub_1B863B8(&long_TypeInfo, v8);
    sub_1B863B8(&NetworkManager_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_115/*" "*/, v10);
    sub_1B863B8(&StringLiteral_12132/*"STATUS"*/, v11);
    sub_1B863B8(&StringLiteral_15475/*"X-Server-Time"*/, v12);
    sub_1B863B8(&StringLiteral_1/*""*/, v13);
    sub_1B863B8(&StringLiteral_7125/*"HTTP/1.1 {0} "*/, v14);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1B863B8(&StringLiteral_11059/*"Redirect limit exceeded"*/, v15);
    byte_4A4CDA8 = 1;
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
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11059/*"Redirect limit exceeded"*/, 0LL) )
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
          v19 = Method_System_Array_Empty_byte___;
          v20 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
          if ( !v20 )
          {
            sub_1BD6AA4(Method_System_Array_Empty_byte___);
            v20 = v19[7];
          }
          v21 = *(_QWORD *)(v20 + 16);
          if ( (*(_BYTE *)(v21 + 309) & 1) == 0 )
            v21 = sub_1BD6A48(inited);
          if ( !*(_DWORD *)(v21 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v21);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v19[7] + 16LL);
          if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1BD6A48(inited);
          req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
        }
        if ( !unityWebRequestWww )
          goto LABEL_38;
        unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
        sub_1B8635C((CGThumbnailListItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField, (int32_t)req, v16, v17);
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
        if ( ResponseHeaders )
        {
          v25 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
          unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
          sub_1B8635C(
            (CGThumbnailListItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (int32_t)ResponseHeaders,
            v23,
            v24);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
          v29 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v26, v27, v28);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7125/*"HTTP/1.1 {0} "*/,
                                                                         v29,
                                                                         0LL);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_38;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12132/*"STATUS"*/,
            (Il2CppObject *)this,
            (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v25,
                 (Il2CppObject *)StringLiteral_15475/*"X-Server-Time"*/,
                 &value,
                 (const MethodInfo_32CFEEC *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0LL) )
          {
            v33 = result;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4A4CDDC )
            {
              sub_1B863B8(&NetworkManager_TypeInfo, v30);
              byte_4A4CDDC = 1;
            }
            v34 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v34 = NetworkManager_TypeInfo;
            }
            v34->static_fields->serverTimeChkMovie = v33;
            v35 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)StringLiteral_1/*""*/;
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
      v37 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_61683424(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_115/*" "*/,
                                                                     v37,
                                                                     0LL);
      if ( unityWebRequestWww )
      {
        v35 = this;
LABEL_36:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v35;
        sub_1B8635C((CGThumbnailListItem_o *)&unityWebRequestWww->fields._error_k__BackingField, (int32_t)v35, v31, v32);
        goto LABEL_37;
      }
    }
LABEL_38:
    sub_1B86614(this, req);
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
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  long double inited; // q0
  _QWORD *v18; // x21
  __int64 v19; // x8
  __int64 v20; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  __int64 v24; // x2
  __int64 v25; // x3
  __int64 v26; // x4
  Il2CppObject *v27; // x0
  int64_t responseCode; // [xsp+8h] [xbp-38h] BYREF

  v5 = req;
  if ( (byte_4A4CDA7 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Array_Empty_byte___, req);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6);
    sub_1B863B8(&long_TypeInfo, v7);
    sub_1B863B8(&StringLiteral_115/*" "*/, v8);
    sub_1B863B8(&StringLiteral_12132/*"STATUS"*/, v9);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1B863B8(&StringLiteral_7125/*"HTTP/1.1 {0} "*/, v10);
    byte_4A4CDA7 = 1;
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
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_61683424(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_115/*" "*/,
                                                                   v12,
                                                                   0LL);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_1B8635C((CGThumbnailListItem_o *)&unityWebRequestWww->fields._error_k__BackingField, (int32_t)this, v13, v14);
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
    v18 = Method_System_Array_Empty_byte___;
    v19 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v19 )
    {
      sub_1BD6AA4(Method_System_Array_Empty_byte___);
      v19 = v18[7];
    }
    v20 = *(_QWORD *)(v19 + 16);
    if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
      v20 = sub_1BD6A48(inited);
    if ( !*(_DWORD *)(v20 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v20);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v18[7] + 16LL);
    if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1BD6A48(inited);
    req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_1B86614(this, req);
  unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
  sub_1B8635C((CGThumbnailListItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField, (int32_t)req, v15, v16);
  ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
  if ( ResponseHeaders )
  {
    unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
    sub_1B8635C(
      (CGThumbnailListItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
      (int32_t)ResponseHeaders,
      v22,
      v23);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v24, v25, v26);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7125/*"HTTP/1.1 {0} "*/,
                                                                   v27,
                                                                   0LL);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12132/*"STATUS"*/,
        (Il2CppObject *)this,
        (const MethodInfo_32CE6E0 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A4CDA5 & 1) == 0 )
  {
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo, url);
    byte_4A4CDA5 = 1;
  }
  v11 = sub_1B86604(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 56), (int32_t)this, v12, v13);
  *(_QWORD *)(v11 + 32) = url;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)url, v14, v15);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 40), (int32_t)postData, v16, v17);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 48), (int32_t)headers, v18, v19);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v20, v21);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3

  if ( (byte_4A4CDA6 & 1) == 0 )
  {
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo, url);
    byte_4A4CDA6 = 1;
  }
  v11 = sub_1B86604(DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 56), (int32_t)this, v12, v13);
  *(_QWORD *)(v11 + 32) = url;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 32), (int32_t)url, v14, v15);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 40), (int32_t)postData, v16, v17);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 48), (int32_t)headers, v18, v19);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1B8635C((CGThumbnailListItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v20, v21);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_69341456((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  struct UnityEngine_Networking_UnityWebRequest_o *_71874304; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  __int64 v10; // x1
  UnityEngine_Networking_UnityWebRequest_o *v11; // x0
  Il2CppObject *v12; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x20
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o **v24; // [xsp+8h] [xbp-28h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v25; // [xsp+18h] [xbp-18h] BYREF

  v25 = this;
  if ( (byte_4A4CDAC & 1) == 0 )
  {
    sub_1B863B8(&System_Uri_TypeInfo, method);
    byte_4A4CDAC = 1;
  }
  v24 = &v25;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1B86614(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1B86614(IsNullOrEmpty, v21);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v25->fields._req_5__2,
      v25->fields.unityWebRequestWww,
      v22);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(v25, v23);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v5 = (System_Uri_o *)sub_1B86604(System_Uri_TypeInfo);
  System_Uri___ctor(v5, url, 0LL);
  _71874304 = UnityEngine_Networking_UnityWebRequest__Get_71874304(v5, 0LL);
  v7 = v25;
  v25->fields._req_5__2 = _71874304;
  sub_1B8635C((CGThumbnailListItem_o *)&v7->fields._req_5__2, (int32_t)_71874304, v8, v9);
  v11 = v25->fields._req_5__2;
  v25->fields.__1__state = -3;
  if ( !v11 )
    sub_1B86614(0LL, v10);
  v12 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v11, 0LL);
  v13 = v25;
  v25->fields.__2__current = v12;
  sub_1B8635C((CGThumbnailListItem_o *)&v13->fields.__2__current, (int32_t)v12, v14, v15);
  result = 1;
  v25->fields.__1__state = 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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

  if ( (byte_4A4CDAD & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    byte_4A4CDAD = 1;
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
      v7 = sub_1BD6B4C(req_5__2, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  __int64 v19; // x1
  UnityEngine_Networking_UnityWebRequest_o *v20; // x0
  __int64 v21; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v23; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  const MethodInfo *v26; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v28; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v29; // x20
  const MethodInfo *v30; // x2
  System_String_o *v31; // x0
  __int64 v32; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  __int64 v35; // x1
  const MethodInfo *v36; // x3
  bool IsNullOrEmpty; // w8
  int64_t responseCode; // x0
  const MethodInfo *v39; // x1
  __int64 v40; // x1
  UnityEngine_Networking_UnityWebRequest_o *v41; // x0
  UnityEngine_Networking_UnityWebRequest_o *v42; // x0
  System_String_o *v43; // x0
  __int64 v44; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v46; // x0
  Il2CppObject *v47; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v48; // x0
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v52; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v54; // [xsp+68h] [xbp-38h] BYREF

  v54 = this;
  if ( (byte_4A4CDB0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v8);
    sub_1B863B8(&System_Uri_TypeInfo, v9);
    sub_1B863B8(&StringLiteral_11059/*"Redirect limit exceeded"*/, v10);
    byte_4A4CDB0 = 1;
  }
  memset(&v53, 0, sizeof(v53));
  v52 = &v54;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1B86614(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    responseCode = (int64_t)v54->fields._req_5__2;
    if ( IsNullOrEmpty )
    {
      if ( !_4__this )
        sub_1B86614(responseCode, v35);
    }
    else
    {
      if ( !responseCode )
        sub_1B86614(0LL, v35);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_result(
                       (UnityEngine_Networking_UnityWebRequest_o *)responseCode,
                       0LL);
      if ( (_DWORD)responseCode != 2 )
        goto LABEL_27;
      v41 = v54->fields._req_5__2;
      if ( !v41 )
        sub_1B86614(0LL, v40);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v41, 0LL);
      if ( responseCode != 303 )
        goto LABEL_27;
      v42 = v54->fields._req_5__2;
      if ( !v42 )
        sub_1B86614(0LL, v40);
      v43 = UnityEngine_Networking_UnityWebRequest__get_error(v42, 0LL);
      if ( !v43 )
        sub_1B86614(0LL, v44);
      responseCode = System_String__Contains(v43, (System_String_o *)StringLiteral_11059/*"Redirect limit exceeded"*/, 0LL);
      if ( (responseCode & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_1B86614(responseCode, v40);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
          v54->fields._req_5__2,
          v54->fields.unityWebRequestWww,
          v36);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_1B86614(responseCode, v40);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
      v54->fields._req_5__2,
      v54->fields.unityWebRequestWww,
      v36);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v54, v39);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v14 = (System_Uri_o *)sub_1B86604(System_Uri_TypeInfo);
  System_Uri___ctor(v14, url, 0LL);
  v15 = UnityEngine_Networking_UnityWebRequest__Post(v14, v54->fields.postData, 0LL);
  v16 = v54;
  v54->fields._req_5__2 = v15;
  sub_1B8635C((CGThumbnailListItem_o *)&v16->fields._req_5__2, (int32_t)v15, v17, v18);
  v20 = v54->fields._req_5__2;
  v54->fields.__1__state = -3;
  if ( !v20 )
    sub_1B86614(0LL, v19);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v20, 0, 0LL);
  headers = v54->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v23 = v54->fields.headers;
    if ( !v23 )
      sub_1B86614(0LL, v21);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v51,
      (System_Collections_Generic_Dictionary_object__object__o *)v23,
      (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v53 = v51;
    while ( 1 )
    {
      v24 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v53,
              (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v24 )
        break;
      if ( !_4__this )
        sub_1B86614(v24, v25);
      value = v53.fields._current.fields.value;
      v28 = v54->fields._req_5__2;
      v29 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v24,
                                                                    (System_String_o *)v53.fields._current.fields.key,
                                                                    v26);
      v31 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v29, (System_String_o *)value, v30);
      if ( !v28 )
        sub_1B86614(v31, v32);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v28, (System_String_o *)v29, v31, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v53,
      (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v46 = v54->fields._req_5__2;
  if ( !v46 )
    sub_1B86614(0LL, v21);
  v47 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v46, 0LL);
  v48 = v54;
  v54->fields.__2__current = v47;
  sub_1B8635C((CGThumbnailListItem_o *)&v48->fields.__2__current, (int32_t)v47, v49, v50);
  result = 1;
  v54->fields.__1__state = 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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

  if ( (byte_4A4CDB1 & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    byte_4A4CDB1 = 1;
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
      v7 = sub_1BD6B4C(req_5__2, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v20; // x0
  _BOOL8 v21; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v25; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v26; // x20
  const MethodInfo *v27; // x2
  System_String_o *v28; // x0
  __int64 v29; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  const MethodInfo *v35; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v37; // x0
  Il2CppObject *v38; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v43; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v45; // [xsp+68h] [xbp-38h] BYREF

  v45 = this;
  if ( (byte_4A4CDAE & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v3);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v4);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v5);
    sub_1B863B8(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v6);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v7);
    sub_1B863B8(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v8);
    sub_1B863B8(&System_Uri_TypeInfo, v9);
    byte_4A4CDAE = 1;
  }
  memset(&v44, 0, sizeof(v44));
  v43 = &v45;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1B86614(0LL, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1B86614(IsNullOrEmpty, v33);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v45->fields._req_5__2,
      v45->fields.unityWebRequestWww,
      v34);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v45, v35);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v13 = (System_Uri_o *)sub_1B86604(System_Uri_TypeInfo);
  System_Uri___ctor(v13, url, 0LL);
  v14 = UnityEngine_Networking_UnityWebRequest__Post(v13, v45->fields.postData, 0LL);
  v15 = v45;
  v45->fields._req_5__2 = v14;
  sub_1B8635C((CGThumbnailListItem_o *)&v15->fields._req_5__2, (int32_t)v14, v16, v17);
  headers = v45->fields.headers;
  v45->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_32CE3B0 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v20 = v45->fields.headers;
    if ( !v20 )
      sub_1B86614(0LL, v18);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v42,
      (System_Collections_Generic_Dictionary_object__object__o *)v20,
      (const MethodInfo_32CEB10 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v44 = v42;
    while ( 1 )
    {
      v21 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v44,
              (const MethodInfo_33C9A8C *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v21 )
        break;
      if ( !_4__this )
        sub_1B86614(v21, v22);
      value = v44.fields._current.fields.value;
      v25 = v45->fields._req_5__2;
      v26 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v21,
                                                                    (System_String_o *)v44.fields._current.fields.key,
                                                                    v23);
      v28 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v26, (System_String_o *)value, v27);
      if ( !v25 )
        sub_1B86614(v28, v29);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v25, (System_String_o *)v26, v28, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v44,
      (const MethodInfo_33C9BAC *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v37 = v45->fields._req_5__2;
  if ( !v37 )
    sub_1B86614(0LL, v18);
  v38 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v37, 0LL);
  v39 = v45;
  v45->fields.__2__current = v38;
  sub_1B8635C((CGThumbnailListItem_o *)&v39->fields.__2__current, (int32_t)v38, v40, v41);
  result = 1;
  v45->fields.__1__state = 1;
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

  v2 = sub_1B863CC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B86604(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B863CC(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__);
  sub_1B864E0(v3, v4);
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

  if ( (byte_4A4CDAF & 1) == 0 )
  {
    sub_1B863B8(&System_IDisposable_TypeInfo, method);
    byte_4A4CDAF = 1;
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
      v7 = sub_1BD6B4C(req_5__2, System_IDisposable_TypeInfo, 0LL);
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
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4A4CDAB & 1) == 0 )
  {
    sub_1B863B8(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v1);
    byte_4A4CDAB = 1;
  }
  v2 = (Il2CppObject *)sub_1B86604(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v2;
  sub_1B8635C(
    (CGThumbnailListItem_o *)DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
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