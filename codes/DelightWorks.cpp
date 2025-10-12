void DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  Il2CppObject *Instance; // x0
  const MethodInfo *v9; // x3
  UnityEngine_MonoBehaviour_o *v10; // x21
  System_Collections_IEnumerator_o *v11; // x1

  if ( (byte_4C36289 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_4C36289 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v5;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v5, v6, v7);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  v10 = (UnityEngine_MonoBehaviour_o *)Instance;
  v11 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v9);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(v10, v11, 0);
}


void DelightWorks_Network_UnityWebRequestWWW___ctor_39606044(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        bool checkServerTimeFlag,
        const MethodInfo *method)
{
  NetworkManager_c *v11; // x0
  System_Collections_Generic_Dictionary_object__object__o *v12; // x23
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  Il2CppObject *Instance; // x0
  const MethodInfo *v16; // x5
  UnityEngine_MonoBehaviour_o *v17; // x23
  System_Collections_IEnumerator_o *v18; // x0
  System_Collections_Generic_Dictionary_object__object__o *v19; // x23
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x5

  if ( (byte_4C3628A & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C32C20(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_4C3628A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( checkServerTimeFlag )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4C362B4 )
    {
      sub_1C32C20(&NetworkManager_TypeInfo);
      byte_4C362B4 = 1;
    }
    v11 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v11 = NetworkManager_TypeInfo;
    }
    if ( !v11->static_fields->serverTimeChkMovie )
    {
      v19 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v19,
        (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v19;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v19, v20, v21);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v17 = (UnityEngine_MonoBehaviour_o *)Instance;
        v18 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v22);
        goto LABEL_13;
      }
LABEL_16:
      sub_1C32E7C(Instance);
    }
  }
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C32E6C(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_3458418 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField, (int32_t)v12, v13, v14);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  v18 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          postData,
          headers,
          this,
          v16);
LABEL_13:
  UnityEngine_MonoBehaviour__StartCoroutine_71209212(v17, v18, 0);
}


void DelightWorks_Network_UnityWebRequestWWW__Dispose(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  ;
}


void DelightWorks_Network_UnityWebRequestWWW__ExceptionLog(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  ;
}


System_Text_Encoding_o *DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__string__o *responseHeaders_k__BackingField; // x0
  __int64 v4; // x0
  System_String_o *v5; // x19
  int v6; // w8
  System_String_o *v7; // x19
  int32_t v8; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4C3628B & 1) == 0 )
  {
    sub_1C32C20(&char___TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C32C20(&StringLiteral_1492/*";"*/);
    sub_1C32C20(&StringLiteral_3800/*"CONTENT-TYPE"*/);
    sub_1C32C20(&StringLiteral_17940/*"charset="*/);
    byte_4C3628B = 1;
  }
  value = 0;
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3800/*"CONTENT-TYPE"*/,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0);
  }
  v4 = (__int64)value;
  if ( !value )
    goto LABEL_19;
  v4 = System_String__IndexOf_63575500((System_String_o *)value, (System_String_o *)StringLiteral_17940/*"charset="*/, 5, 0);
  if ( !StringLiteral_17940/*"charset="*/ )
    goto LABEL_19;
  if ( (v4 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0);
  if ( !value )
    goto LABEL_19;
  v4 = (__int64)System_String__Substring((System_String_o *)value, *((_DWORD *)StringLiteral_17940/*"charset="*/ + 4) + (int)v4, 0);
  if ( !v4 )
    goto LABEL_19;
  v5 = System_String__Trim((System_String_o *)v4, 0);
  v4 = sub_1C32CC8(char___TypeInfo, 2);
  if ( !v4 )
    goto LABEL_19;
  v6 = *(_DWORD *)(v4 + 24);
  if ( !v6 || (*(_WORD *)(v4 + 32) = 39, v6 == 1) )
    sub_1C32E84(v4);
  *(_WORD *)(v4 + 34) = 34;
  if ( !v5
    || (v4 = (__int64)System_String__Trim_63575092(v5, (System_Char_array *)v4, 0)) == 0
    || (v4 = (__int64)System_String__Trim((System_String_o *)v4, 0)) == 0 )
  {
LABEL_19:
    sub_1C32E7C(v4);
  }
  v7 = (System_String_o *)v4;
  v8 = System_String__IndexOf_63575500((System_String_o *)v4, (System_String_o *)StringLiteral_1492/*";"*/, 0, 0);
  if ( (v8 & 0x80000000) == 0 )
    v7 = System_String__Substring_63564468(v7, 0, v8, 0);
  return System_Text_Encoding__GetEncoding_63671176(v7, 0);
}


System_Byte_array *DelightWorks_Network_UnityWebRequestWWW__get_bytes(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._bytes_k__BackingField;
}


System_String_o *DelightWorks_Network_UnityWebRequestWWW__get_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._error_k__BackingField;
}


bool DelightWorks_Network_UnityWebRequestWWW__get_isDone(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._isDone_k__BackingField;
}


float DelightWorks_Network_UnityWebRequestWWW__get_progress(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._progress_k__BackingField;
}


System_Collections_Generic_Dictionary_string__string__o *DelightWorks_Network_UnityWebRequestWWW__get_responseHeaders(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        const MethodInfo *method)
{
  return this->fields._responseHeaders_k__BackingField;
}


System_String_o *DelightWorks_Network_UnityWebRequestWWW__get_text(
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
    v6 = sub_1C32C34(&UnityEngine_UnityException_TypeInfo);
    v7 = (UnityEngine_UnityException_o *)sub_1C32E6C(v6);
    v8 = (System_String_o *)sub_1C32C34(&StringLiteral_15559/*"WWW is not ready downloading yet"*/);
    UnityEngine_UnityException___ctor_71217664(v7, v8, 0);
    v9 = sub_1C32C34(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__);
    sub_1C32D48(v7, v9);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_1C32E7C(TextEncoding);
  return (System_String_o *)((__int64 (__fastcall *)(System_Text_Encoding_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))TextEncoding->klass->vtable._36_GetString.methodPtr)(
                              TextEncoding,
                              bytes_k__BackingField,
                              0,
                              LODWORD(bytes_k__BackingField->max_length),
                              TextEncoding->klass->vtable._36_GetString.method);
}


void DelightWorks_Network_UnityWebRequestWWW__set_bytes(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_Byte_array *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._bytes_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._bytes_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void DelightWorks_Network_UnityWebRequestWWW__set_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._error_k__BackingField = value;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields._error_k__BackingField, (int32_t)value, (int32_t)method, v3);
}


void DelightWorks_Network_UnityWebRequestWWW__set_isDone(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        bool value,
        const MethodInfo *method)
{
  this->fields._isDone_k__BackingField = value;
}


void DelightWorks_Network_UnityWebRequestWWW__set_progress(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        float value,
        const MethodInfo *method)
{
  this->fields._progress_k__BackingField = value;
}


void DelightWorks_Network_UnityWebRequestWWW__set_responseHeaders(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_Collections_Generic_Dictionary_string__string__o *value,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  this->fields._responseHeaders_k__BackingField = value;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C36281 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
    byte_4C36281 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_39E2DEC *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
}


System_String_o *DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *inStr,
        const MethodInfo *method)
{
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v4; // x0
  System_Func_char__bool__o *_9__8_0; // x20
  Il2CppObject *v6; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v10; // x0
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v12; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Char_array *v17; // x0

  if ( (byte_4C36280 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Linq_Enumerable_Any_char___);
    sub_1C32C20(&Method_System_Linq_Enumerable_Select_char__char___);
    sub_1C32C20(&Method_System_Linq_Enumerable_ToArray_char___);
    sub_1C32C20(&System_Func_char__char__TypeInfo);
    sub_1C32C20(&System_Func_char__bool__TypeInfo);
    sub_1C32C20(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__);
    sub_1C32C20(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__);
    sub_1C32C20(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_4C36280 = 1;
  }
  v4 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v4 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_0 = v4->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v4->static_fields->__9;
    _9__8_0 = (System_Func_char__bool__o *)sub_1C32E6C(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__8_0,
      v6,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0);
    static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_30EA7DC *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v10 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v10 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_1 = v10->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_1C32E6C(System_Func_char__char__TypeInfo);
    System_Func_char__char____ctor(
      _9__8_1,
      v12,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0);
    v13 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v13->__9__8_1 = _9__8_1;
    sub_1C32BC4((CGThumbnailListItem_o *)&v13->__9__8_1, (int32_t)_9__8_1, v14, v15);
  }
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_310FECC *)Method_System_Linq_Enumerable_Select_char__char___);
  v17 = System_Linq_Enumerable__ToArray_char_(
          v16,
          (const MethodInfo_311C86C *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_63549456(0, v17, 0);
}


System_Collections_IEnumerator_o *DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
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

  if ( (byte_4C3627B & 1) == 0 )
  {
    sub_1C32C20(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
    byte_4C3627B = 1;
  }
  v7 = sub_1C32E6C(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 32) = url;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 32), (int32_t)url, v10, v11);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_1C32BC4((CGThumbnailListItem_o *)(v7 + 48), (int32_t)unityWebRequestWww, v12, v13);
  return (System_Collections_IEnumerator_o *)v7;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  long double inited; // q0
  struct System_Byte_array *klass; // x1
  _QWORD *v10; // x21
  __int64 v11; // x8
  __int64 v12; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_Dictionary_object__object__o *v16; // x21
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  Il2CppObject *v23; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  int64_t v26; // x20
  NetworkManager_c *v27; // x0
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v28; // x1
  System_String_o *error; // x21
  System_String_o *v30; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  if ( (byte_4C3627F & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_byte___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&NetworkManager_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_12350/*"STATUS"*/);
    sub_1C32C20(&StringLiteral_15698/*"X-Server-Time"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_7265/*"HTTP/1.1 {0} "*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C32C20(&StringLiteral_11246/*"Redirect limit exceeded"*/);
    byte_4C3627F = 1;
  }
  value = 0;
  result = 0;
  if ( !req )
    goto LABEL_38;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_result(
                                                                 req,
                                                                 0);
  if ( (_DWORD)this == 2 )
  {
    if ( UnityEngine_Networking_UnityWebRequest__get_responseCode(req, 0) == 303 )
    {
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_error(
                                                                     req,
                                                                     0);
      if ( !this )
        goto LABEL_38;
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11246/*"Redirect limit exceeded"*/, 0) )
      {
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                       req,
                                                                       0);
        if ( !this )
          goto LABEL_38;
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                       (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                       0);
        klass = (struct System_Byte_array *)this;
        if ( !this )
        {
          v10 = Method_System_Array_Empty_byte___;
          v11 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
          if ( !v11 )
          {
            sub_1C83390(Method_System_Array_Empty_byte___);
            v11 = v10[7];
          }
          v12 = *(_QWORD *)(v11 + 16);
          if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
            v12 = sub_1C83334(inited);
          if ( !*(_DWORD *)(v12 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v12);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v10[7] + 16LL);
          if ( (this[9].fields.m_CachedPtr & 0x10000000000LL) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C83334(inited);
          klass = (struct System_Byte_array *)this[5].fields.m_CancellationTokenSource->klass;
        }
        if ( !unityWebRequestWww )
          goto LABEL_38;
        unityWebRequestWww->fields._bytes_k__BackingField = klass;
        sub_1C32BC4((CGThumbnailListItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField, (int32_t)klass, v6, v7);
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(req, 0);
        if ( ResponseHeaders )
        {
          v16 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
          unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
          sub_1C32BC4(
            (CGThumbnailListItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (int32_t)ResponseHeaders,
            v14,
            v15);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(req, 0);
          v23 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v17, v18, v19, v20, v21, v22);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7265/*"HTTP/1.1 {0} "*/,
                                                                         v23,
                                                                         0);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_38;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12350/*"STATUS"*/,
            (Il2CppObject *)this,
            (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v16,
                 (Il2CppObject *)StringLiteral_15698/*"X-Server-Time"*/,
                 &value,
                 (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0) )
          {
            v26 = result;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4C362B3 )
            {
              sub_1C32C20(&NetworkManager_TypeInfo);
              byte_4C362B3 = 1;
            }
            v27 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v27 = NetworkManager_TypeInfo;
            }
            v27->static_fields->serverTimeChkMovie = v26;
            v28 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)StringLiteral_1/*""*/;
            goto LABEL_36;
          }
        }
      }
    }
    error = UnityEngine_Networking_UnityWebRequest__get_error(req, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   req,
                                                                   0);
    if ( this )
    {
      v30 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_63556792(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                                     v30,
                                                                     0);
      if ( unityWebRequestWww )
      {
        v28 = this;
LABEL_36:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v28;
        sub_1C32BC4((CGThumbnailListItem_o *)&unityWebRequestWww->fields._error_k__BackingField, (int32_t)v28, v24, v25);
        goto LABEL_37;
      }
    }
LABEL_38:
    sub_1C32E7C(this);
  }
  if ( !unityWebRequestWww )
    goto LABEL_38;
LABEL_37:
  unityWebRequestWww->fields._isDone_k__BackingField = 1;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_String_o *error; // x21
  System_String_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  long double inited; // q0
  struct System_Byte_array *klass; // x1
  _QWORD *v14; // x21
  __int64 v15; // x8
  __int64 v16; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  __int64 v23; // x5
  __int64 v24; // x6
  __int64 v25; // x7
  Il2CppObject *v26; // x0
  int64_t responseCode; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4C3627E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Array_Empty_byte___);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C32C20(&long_TypeInfo);
    sub_1C32C20(&StringLiteral_113/*" "*/);
    sub_1C32C20(&StringLiteral_12350/*"STATUS"*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C32C20(&StringLiteral_7265/*"HTTP/1.1 {0} "*/);
    byte_4C3627E = 1;
  }
  if ( !req )
    goto LABEL_24;
  if ( UnityEngine_Networking_UnityWebRequest__get_result(req, 0) != 1 )
  {
    error = UnityEngine_Networking_UnityWebRequest__get_error(req, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   req,
                                                                   0);
    if ( !this )
      goto LABEL_24;
    v7 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_63556792(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                                   v7,
                                                                   0);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_1C32BC4((CGThumbnailListItem_o *)&unityWebRequestWww->fields._error_k__BackingField, (int32_t)this, v8, v9);
  }
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                 req,
                                                                 0);
  if ( !this )
    goto LABEL_24;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0);
  klass = (struct System_Byte_array *)this;
  if ( !this )
  {
    v14 = Method_System_Array_Empty_byte___;
    v15 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v15 )
    {
      sub_1C83390(Method_System_Array_Empty_byte___);
      v15 = v14[7];
    }
    v16 = *(_QWORD *)(v15 + 16);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C83334(inited);
    if ( !*(_DWORD *)(v16 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v16);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v14[7] + 16LL);
    if ( (this[9].fields.m_CachedPtr & 0x10000000000LL) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C83334(inited);
    klass = (struct System_Byte_array *)this[5].fields.m_CancellationTokenSource->klass;
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_1C32E7C(this);
  unityWebRequestWww->fields._bytes_k__BackingField = klass;
  sub_1C32BC4((CGThumbnailListItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField, (int32_t)klass, v10, v11);
  ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(req, 0);
  if ( ResponseHeaders )
  {
    unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
    sub_1C32BC4(
      (CGThumbnailListItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
      (int32_t)ResponseHeaders,
      v18,
      v19);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(req, 0);
    v26 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode, v20, v21, v22, v23, v24, v25);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7265/*"HTTP/1.1 {0} "*/,
                                                                   v26,
                                                                   0);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12350/*"STATUS"*/,
        (Il2CppObject *)this,
        (const MethodInfo_3458DC8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
      goto LABEL_23;
    }
    goto LABEL_24;
  }
LABEL_23:
  unityWebRequestWww->fields._isDone_k__BackingField = 1;
}


System_Collections_IEnumerator_o *DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
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

  if ( (byte_4C3627C & 1) == 0 )
  {
    sub_1C32C20(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
    byte_4C3627C = 1;
  }
  v11 = sub_1C32E6C(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 56), (int32_t)this, v12, v13);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)url, v14, v15);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), (int32_t)postData, v16, v17);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 48), (int32_t)headers, v18, v19);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v20, v21);
  return (System_Collections_IEnumerator_o *)v11;
}


System_Collections_IEnumerator_o *DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
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

  if ( (byte_4C3627D & 1) == 0 )
  {
    sub_1C32C20(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
    byte_4C3627D = 1;
  }
  v11 = sub_1C32E6C(DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 56), (int32_t)this, v12, v13);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 32), (int32_t)url, v14, v15);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 40), (int32_t)postData, v16, v17);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 48), (int32_t)headers, v18, v19);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C32BC4((CGThumbnailListItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v20, v21);
  return (System_Collections_IEnumerator_o *)v11;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__StartGet(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v5; // x1

  v5 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(this, url, unityWebRequestWww, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v5, 0);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__StartNoRedirectPost(
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
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__StartPost(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v7; // x1

  v7 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(this, url, postData, headers, unityWebRequestWww, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71209212((UnityEngine_MonoBehaviour_o *)this, v7, 0);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  System_String_o *url; // x20
  System_Uri_o *v5; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *_73740588; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v7; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Networking_UnityWebRequest_o *v10; // x0
  Il2CppObject *v11; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x20
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o **v22; // [xsp+8h] [xbp-28h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v23; // [xsp+18h] [xbp-18h] BYREF

  v23 = this;
  if ( (byte_4C36283 & 1) == 0 )
  {
    sub_1C32C20(&System_Uri_TypeInfo);
    byte_4C36283 = 1;
  }
  v22 = &v23;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C32E7C(0);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_1C32E7C(IsNullOrEmpty);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v23->fields._req_5__2,
      v23->fields.unityWebRequestWww,
      v20);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(v23, v21);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v5 = (System_Uri_o *)sub_1C32E6C(System_Uri_TypeInfo);
  System_Uri___ctor(v5, url, 0);
  _73740588 = UnityEngine_Networking_UnityWebRequest__Get_73740588(v5, 0);
  v7 = v23;
  v23->fields._req_5__2 = _73740588;
  sub_1C32BC4((CGThumbnailListItem_o *)&v7->fields._req_5__2, (int32_t)_73740588, v8, v9);
  v10 = v23->fields._req_5__2;
  v23->fields.__1__state = -3;
  if ( !v10 )
    sub_1C32E7C(0);
  v11 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v10, 0);
  v12 = v23;
  v23->fields.__2__current = v11;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->fields.__2__current, (int32_t)v11, v13, v14);
  result = 1;
  v23->fields.__1__state = 1;
  return result;
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(this, method);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C36284 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C36284 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)&req_5__2->klass->_2.rank;
    if ( *(_WORD *)&req_5__2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C83438(req_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v6; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v7; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UnityEngine_Networking_UnityWebRequest_o *v11; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v13; // x0
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x2
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_Networking_UnityWebRequest_o *v17; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v18; // x20
  const MethodInfo *v19; // x2
  System_String_o *v20; // x0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  const MethodInfo *v23; // x3
  bool IsNullOrEmpty; // w8
  int64_t responseCode; // x0
  const MethodInfo *v26; // x1
  UnityEngine_Networking_UnityWebRequest_o *v27; // x0
  UnityEngine_Networking_UnityWebRequest_o *v28; // x0
  System_String_o *v29; // x0
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v31; // x0
  Il2CppObject *v32; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v33; // x0
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v36; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v37; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v38; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v39; // [xsp+68h] [xbp-38h] BYREF

  v39 = this;
  if ( (byte_4C36287 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C32C20(&System_Uri_TypeInfo);
    sub_1C32C20(&StringLiteral_11246/*"Redirect limit exceeded"*/);
    byte_4C36287 = 1;
  }
  memset(&v38, 0, sizeof(v38));
  v37 = &v39;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C32E7C(0);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    responseCode = (int64_t)v39->fields._req_5__2;
    if ( IsNullOrEmpty )
    {
      if ( !_4__this )
        sub_1C32E7C(responseCode);
    }
    else
    {
      if ( !responseCode )
        sub_1C32E7C(0);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_result(
                       (UnityEngine_Networking_UnityWebRequest_o *)responseCode,
                       0);
      if ( (_DWORD)responseCode != 2 )
        goto LABEL_27;
      v27 = v39->fields._req_5__2;
      if ( !v27 )
        sub_1C32E7C(0);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v27, 0);
      if ( responseCode != 303 )
        goto LABEL_27;
      v28 = v39->fields._req_5__2;
      if ( !v28 )
        sub_1C32E7C(0);
      v29 = UnityEngine_Networking_UnityWebRequest__get_error(v28, 0);
      if ( !v29 )
        sub_1C32E7C(0);
      responseCode = System_String__Contains(v29, (System_String_o *)StringLiteral_11246/*"Redirect limit exceeded"*/, 0);
      if ( (responseCode & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_1C32E7C(responseCode);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
          v39->fields._req_5__2,
          v39->fields.unityWebRequestWww,
          v23);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_1C32E7C(responseCode);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
      v39->fields._req_5__2,
      v39->fields.unityWebRequestWww,
      v23);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v39, v26);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v6 = (System_Uri_o *)sub_1C32E6C(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v39->fields.postData, 0);
  v8 = v39;
  v39->fields._req_5__2 = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10);
  v11 = v39->fields._req_5__2;
  v39->fields.__1__state = -3;
  if ( !v11 )
    sub_1C32E7C(0);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v11, 0, 0);
  headers = v39->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3458A98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v13 = v39->fields.headers;
    if ( !v13 )
      sub_1C32E7C(0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v36,
      (System_Collections_Generic_Dictionary_object__object__o *)v13,
      (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v38 = v36;
    while ( 1 )
    {
      v14 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v38,
              (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v14 )
        break;
      if ( !_4__this )
        sub_1C32E7C(v14);
      current = v38.fields._current;
      v17 = v39->fields._req_5__2;
      v18 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v14,
                                                                    (System_String_o *)v38.fields._current.fields.key,
                                                                    v15);
      v20 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
              v18,
              (System_String_o *)current.fields.value,
              v19);
      if ( !v17 )
        sub_1C32E7C(v20);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v17, (System_String_o *)v18, v20, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v38,
      (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v31 = v39->fields._req_5__2;
  if ( !v31 )
    sub_1C32E7C(0);
  v32 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v31, 0);
  v33 = v39;
  v39->fields.__2__current = v32;
  sub_1C32BC4((CGThumbnailListItem_o *)&v33->fields.__2__current, (int32_t)v32, v34, v35);
  result = 1;
  v39->fields.__1__state = 1;
  return result;
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(this, method);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C36288 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C36288 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)&req_5__2->klass->_2.rank;
    if ( *(_WORD *)&req_5__2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C83438(req_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__MoveNext(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v6; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v7; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v12; // x0
  _BOOL8 v13; // x0
  const MethodInfo *v14; // x2
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_Networking_UnityWebRequest_o *v16; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v17; // x20
  const MethodInfo *v18; // x2
  System_String_o *v19; // x0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v26; // x0
  Il2CppObject *v27; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v28; // x0
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v31; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v32; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v33; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v34; // [xsp+68h] [xbp-38h] BYREF

  v34 = this;
  if ( (byte_4C36285 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C32C20(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C32C20(&System_Uri_TypeInfo);
    byte_4C36285 = 1;
  }
  memset(&v33, 0, sizeof(v33));
  v32 = &v34;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C32E7C(0);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_1C32E7C(IsNullOrEmpty);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v34->fields._req_5__2,
      v34->fields.unityWebRequestWww,
      v23);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v34, v24);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v6 = (System_Uri_o *)sub_1C32E6C(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v34->fields.postData, 0);
  v8 = v34;
  v34->fields._req_5__2 = v7;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10);
  headers = v34->fields.headers;
  v34->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3458A98 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v12 = v34->fields.headers;
    if ( !v12 )
      sub_1C32E7C(0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v31,
      (System_Collections_Generic_Dictionary_object__object__o *)v12,
      (const MethodInfo_34591F8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v33 = v31;
    while ( 1 )
    {
      v13 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v33,
              (const MethodInfo_3555874 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v13 )
        break;
      if ( !_4__this )
        sub_1C32E7C(v13);
      current = v33.fields._current;
      v16 = v34->fields._req_5__2;
      v17 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v13,
                                                                    (System_String_o *)v33.fields._current.fields.key,
                                                                    v14);
      v19 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
              v17,
              (System_String_o *)current.fields.value,
              v18);
      if ( !v16 )
        sub_1C32E7C(v19);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v16, (System_String_o *)v17, v19, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v33,
      (const MethodInfo_3555994 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v26 = v34->fields._req_5__2;
  if ( !v26 )
    sub_1C32E7C(0);
  v27 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v26, 0);
  v28 = v34;
  v34->fields.__2__current = v27;
  sub_1C32BC4((CGThumbnailListItem_o *)&v28->fields.__2__current, (int32_t)v27, v29, v30);
  result = 1;
  v34->fields.__1__state = 1;
  return result;
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_IEnumerator_Reset(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C32C34(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C32E6C(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C32C34(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C32D48(v3, v4);
}


Il2CppObject *DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_Collections_IEnumerator_get_Current(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4__System_IDisposable_Dispose(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  int32_t _1__state; // w8

  _1__state = this->fields.__1__state;
  if ( _1__state == 1 || _1__state == -3 )
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(this, method);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(
        DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v5; // x9
  int32_t *p_offset; // x10
  __int64 v7; // x0

  if ( (byte_4C36286 & 1) == 0 )
  {
    sub_1C32C20(&System_IDisposable_TypeInfo);
    byte_4C36286 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v5 = *(unsigned __int16 *)&req_5__2->klass->_2.rank;
    if ( *(_WORD *)&req_5__2->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v5;
        p_offset += 4;
        if ( !v5 )
          goto LABEL_8;
      }
      v7 = (__int64)&klass->vtable + 16 * *p_offset;
    }
    else
    {
LABEL_8:
      v7 = sub_1C83438(req_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void DelightWorks_Network_UnityWebRequestWWWSingleton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C36282 & 1) == 0 )
  {
    sub_1C32C20(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_4C36282 = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton___c___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool DelightWorks_Network_UnityWebRequestWWWSingleton___c___FilterNonAsciiChar_b__8_0(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        uint16_t ch,
        const MethodInfo *method)
{
  return ch > 0x7Fu;
}


uint16_t DelightWorks_Network_UnityWebRequestWWWSingleton___c___FilterNonAsciiChar_b__8_1(
        DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *this,
        uint16_t ch,
        const MethodInfo *method)
{
  if ( ch >= 0x80u )
    return 63;
  else
    return ch;
}