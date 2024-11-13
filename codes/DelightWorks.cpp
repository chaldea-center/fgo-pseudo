void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x21
  Il2CppObject *Instance; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  const MethodInfo *v16; // x3
  UnityEngine_MonoBehaviour_o *v17; // x21
  System_Collections_IEnumerator_o *v18; // x1

  if ( (byte_4B14C19 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url, method);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v7, v8);
    byte_4B14C19 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v9,
                                                                     v10,
                                                                     v11);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1BCA784(&this->fields._responseHeaders_k__BackingField, v12);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v14, v15, v16);
  v17 = (UnityEngine_MonoBehaviour_o *)Instance;
  v18 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v16);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v17, v18, 0LL);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW___ctor_37745356(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        bool checkServerTimeFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  NetworkManager_c *v20; // x0
  System_Collections_Generic_Dictionary_object__object__o *v21; // x23
  Il2CppObject *Instance; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  const MethodInfo *v26; // x5
  UnityEngine_MonoBehaviour_o *v27; // x23
  System_Collections_IEnumerator_o *v28; // x0
  System_Collections_Generic_Dictionary_object__object__o *v29; // x23
  const MethodInfo *v30; // x5

  if ( (byte_4B14C1A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string___ctor__, url, postData);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__string__TypeInfo, v11, v12);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__, v15, v16);
    byte_4B14C1A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  if ( checkServerTimeFlag )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
    if ( !byte_4B14C45 )
    {
      sub_1BCA7E0(&NetworkManager_TypeInfo, v17, v18);
      byte_4B14C45 = 1;
    }
    v20 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v17);
      v20 = NetworkManager_TypeInfo;
    }
    if ( !v20->static_fields->serverTimeChkMovie )
    {
      v29 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                         System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                         v17,
                                                                         v18,
                                                                         v19);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v29,
        (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v29;
      sub_1BCA784(&this->fields._responseHeaders_k__BackingField, v29);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v27 = (UnityEngine_MonoBehaviour_o *)Instance;
        v28 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v30);
        goto LABEL_13;
      }
LABEL_16:
      sub_1BCAA3C(Instance, v23, v24, v25);
    }
  }
  v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_string__string__TypeInfo,
                                                                     v17,
                                                                     v18,
                                                                     v19);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v21,
    (const MethodInfo_32648B0 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v21;
  sub_1BCA784(&this->fields._responseHeaders_k__BackingField, v21);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v27 = (UnityEngine_MonoBehaviour_o *)Instance;
  v28 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          postData,
          headers,
          this,
          v26);
LABEL_13:
  UnityEngine_MonoBehaviour__StartCoroutine_70139516(v27, v28, 0LL);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  struct System_Collections_Generic_Dictionary_string__string__o *responseHeaders_k__BackingField; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x3
  __int64 v16; // x0
  System_String_o *v17; // x19
  int v18; // w8
  System_String_o *v19; // x19
  int32_t v20; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4B14C1B & 1) == 0 )
  {
    sub_1BCA7E0(&char___TypeInfo, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v4, v5);
    sub_1BCA7E0(&StringLiteral_1576/*";"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_3890/*"CONTENT-TYPE"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_18116/*"charset="*/, v10, v11);
    byte_4B14C1B = 1;
  }
  value = 0LL;
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3890/*"CONTENT-TYPE"*/,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0LL);
  }
  v16 = (__int64)value;
  if ( !value )
    goto LABEL_19;
  v16 = System_String__IndexOf_62431376((System_String_o *)value, (System_String_o *)StringLiteral_18116/*"charset="*/, 5, 0LL);
  if ( !StringLiteral_18116/*"charset="*/ )
    goto LABEL_19;
  if ( (v16 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0LL);
  if ( !value )
    goto LABEL_19;
  v16 = (__int64)System_String__Substring(
                   (System_String_o *)value,
                   *((_DWORD *)StringLiteral_18116/*"charset="*/ + 4) + (int)v16,
                   0LL);
  if ( !v16 )
    goto LABEL_19;
  v17 = System_String__Trim((System_String_o *)v16, 0LL);
  v16 = sub_1BCA888(char___TypeInfo, 2LL);
  if ( !v16 )
    goto LABEL_19;
  v18 = *(_DWORD *)(v16 + 24);
  v13 = v16;
  if ( !v18 || (*(_WORD *)(v16 + 32) = 39, v18 == 1) )
    sub_1BCAA44(v16, v16);
  *(_WORD *)(v16 + 34) = 34;
  if ( !v17
    || (v16 = (__int64)System_String__Trim_62430968(v17, (System_Char_array *)v16, 0LL)) == 0
    || (v16 = (__int64)System_String__Trim((System_String_o *)v16, 0LL)) == 0 )
  {
LABEL_19:
    sub_1BCAA3C(v16, v13, v14, v15);
  }
  v19 = (System_String_o *)v16;
  v20 = System_String__IndexOf_62431376((System_String_o *)v16, (System_String_o *)StringLiteral_1576/*";"*/, 0, 0LL);
  if ( (v20 & 0x80000000) == 0 )
    v19 = System_String__Substring_62420224(v19, 0, v20, 0LL);
  return System_Text_Encoding__GetEncoding_61631068(v19, 0LL);
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
  __int64 v4; // x2
  __int64 v5; // x3
  struct System_Byte_array *bytes_k__BackingField; // x1
  __int64 v8; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  UnityEngine_UnityException_o *v12; // x19
  __int64 v13; // x1
  System_String_o *v14; // x0
  __int64 v15; // x1
  __int64 v16; // x0

  if ( !this->fields._isDone_k__BackingField )
  {
    v8 = sub_1BCA7F4(&UnityEngine_UnityException_TypeInfo, method);
    v12 = (UnityEngine_UnityException_o *)sub_1BCAA2C(v8, v9, v10, v11);
    v14 = (System_String_o *)sub_1BCA7F4(&StringLiteral_15727/*"WWW is not ready downloading yet"*/, v13);
    UnityEngine_UnityException___ctor_70138704(v12, v14, 0LL);
    v16 = sub_1BCA7F4(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__, v15);
    sub_1BCA908(v12, v16);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_1BCAA3C(TextEncoding, bytes_k__BackingField, v4, v5);
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
  this->fields._bytes_k__BackingField = value;
  sub_1BCA784(&this->fields._bytes_k__BackingField, value);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWW__set_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  this->fields._error_k__BackingField = value;
  sub_1BCA784(&this->fields._error_k__BackingField, value);
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
  this->fields._responseHeaders_k__BackingField = value;
  sub_1BCA784(&this->fields._responseHeaders_k__BackingField, value);
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B14C11 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__, method, v2);
    byte_4B14C11 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
}


System_String_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *inStr,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v19; // x0
  System_Func_char__bool__o *_9__8_0; // x20
  Il2CppObject *v21; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *static_fields; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v26; // x0
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v28; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v29; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x0
  System_Char_array *v31; // x0

  if ( (byte_4B14C10 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Any_char___, inStr, method);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_char__char___, v5, v6);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_char___, v7, v8);
    sub_1BCA7E0(&System_Func_char__char__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Func_char__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__, v13, v14);
    sub_1BCA7E0(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__, v15, v16);
    sub_1BCA7E0(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v17, v18);
    byte_4B14C10 = 1;
  }
  v19 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, inStr);
    v19 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_0 = v19->static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !v19->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v19, inStr);
      v19 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v21 = (Il2CppObject *)v19->static_fields->__9;
    _9__8_0 = (System_Func_char__bool__o *)sub_1BCAA2C(System_Func_char__bool__TypeInfo, inStr, method, v3);
    System_Func_char__bool____ctor(
      _9__8_0,
      v21,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0LL);
    static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1BCA784(&static_fields->__9__8_0, _9__8_0);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_2F200B8 *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v26 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v23);
    v26 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_1 = v26->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v26->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v26, v23);
      v26 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v28 = (Il2CppObject *)v26->static_fields->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_1BCAA2C(System_Func_char__char__TypeInfo, v23, v24, v25);
    System_Func_char__char____ctor(
      _9__8_1,
      v28,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0LL);
    v29 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v29->__9__8_1 = _9__8_1;
    sub_1BCA784(&v29->__9__8_1, _9__8_1);
  }
  v30 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_2F3E3D8 *)Method_System_Linq_Enumerable_Select_char__char___);
  v31 = System_Linq_Enumerable__ToArray_char_(
          v30,
          (const MethodInfo_2F4B7E8 *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_62405084(0LL, v31, 0LL);
}


System_Collections_IEnumerator_o *__fastcall DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v7; // x22

  if ( (byte_4B14C0B & 1) == 0 )
  {
    sub_1BCA7E0(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo, url, unityWebRequestWww, method);
    byte_4B14C0B = 1;
  }
  v7 = sub_1BCAA2C(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo, url, unityWebRequestWww, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784(v7 + 40, this);
  *(_QWORD *)(v7 + 32) = url;
  sub_1BCA784(v7 + 32, url);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_1BCA784(v7 + 48, unityWebRequestWww);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x3
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  _QWORD *v36; // x21
  __int64 v37; // x8
  __int64 v38; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_Collections_Generic_Dictionary_object__object__o *v40; // x21
  Il2CppObject *v41; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  int64_t v45; // x20
  NetworkManager_c *v46; // x0
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v47; // x1
  System_String_o *error; // x21
  System_String_o *v49; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_4B14C0F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_byte___, req, unityWebRequestWww, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__, v9, v10, v11);
    sub_1BCA7E0(&long_TypeInfo, v12, v13, v14);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v15, v16, v17);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v18, v19, v20);
    sub_1BCA7E0(&StringLiteral_12416/*"STATUS"*/, v21, v22, v23);
    sub_1BCA7E0(&StringLiteral_15864/*"X-Server-Time"*/, v24, v25, v26);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v27, v28, v29);
    sub_1BCA7E0(&StringLiteral_7294/*"HTTP/1.1 {0} "*/, v30, v31, v32);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1BCA7E0(&StringLiteral_11355/*"Redirect limit exceeded"*/, v33, v34, v35);
    byte_4B14C0F = 1;
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
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11355/*"Redirect limit exceeded"*/, 0LL) )
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
          v36 = Method_System_Array_Empty_byte___;
          v37 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
          if ( !v37 )
          {
            sub_1C1C718(Method_System_Array_Empty_byte___, 0LL);
            v37 = v36[7];
          }
          v38 = *(_QWORD *)(v37 + 16);
          if ( (*(_BYTE *)(v38 + 309) & 1) == 0 )
            v38 = sub_1C1C6BC();
          if ( !*(_DWORD *)(v38 + 224) )
            j_il2cpp_runtime_class_init_0(v38, req);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v36[7] + 16LL);
          if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C1C6BC();
          req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
        }
        if ( !unityWebRequestWww )
          goto LABEL_38;
        unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
        sub_1BCA784(&unityWebRequestWww->fields._bytes_k__BackingField, req);
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
        if ( ResponseHeaders )
        {
          v40 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
          unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
          sub_1BCA784(&unityWebRequestWww->fields._responseHeaders_k__BackingField, ResponseHeaders);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
          v41 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7294/*"HTTP/1.1 {0} "*/,
                                                                         v41,
                                                                         0LL);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_38;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12416/*"STATUS"*/,
            (Il2CppObject *)this,
            (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v40,
                 (Il2CppObject *)StringLiteral_15864/*"X-Server-Time"*/,
                 &value,
                 (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0LL) )
          {
            v45 = result;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
            if ( !byte_4B14C44 )
            {
              sub_1BCA7E0(&NetworkManager_TypeInfo, v42, v43, v44);
              byte_4B14C44 = 1;
            }
            v46 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v42);
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
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_62412480(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_116/*" "*/,
                                                                     v49,
                                                                     0LL);
      if ( unityWebRequestWww )
      {
        v47 = this;
LABEL_36:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v47;
        sub_1BCA784(&unityWebRequestWww->fields._error_k__BackingField, v47);
        goto LABEL_37;
      }
    }
LABEL_38:
    sub_1BCAA3C(this, req, unityWebRequestWww, method);
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
  __int64 v7; // x2
  __int64 v8; // x3
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x3
  System_String_o *error; // x21
  System_String_o *v22; // x0
  _QWORD *v23; // x21
  __int64 v24; // x8
  __int64 v25; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  Il2CppObject *v27; // x0
  int64_t responseCode; // [xsp+8h] [xbp-38h] BYREF

  v5 = req;
  if ( (byte_4B14C0E & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Array_Empty_byte___, req, unityWebRequestWww, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__Add__, v6, v7, v8);
    sub_1BCA7E0(&long_TypeInfo, v9, v10, v11);
    sub_1BCA7E0(&StringLiteral_116/*" "*/, v12, v13, v14);
    sub_1BCA7E0(&StringLiteral_12416/*"STATUS"*/, v15, v16, v17);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1BCA7E0(&StringLiteral_7294/*"HTTP/1.1 {0} "*/, v18, v19, v20);
    byte_4B14C0E = 1;
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
    v22 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_62412480(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_116/*" "*/,
                                                                   v22,
                                                                   0LL);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_1BCA784(&unityWebRequestWww->fields._error_k__BackingField, this);
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
    v23 = Method_System_Array_Empty_byte___;
    v24 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v24 )
    {
      sub_1C1C718(Method_System_Array_Empty_byte___, 0LL);
      v24 = v23[7];
    }
    v25 = *(_QWORD *)(v24 + 16);
    if ( (*(_BYTE *)(v25 + 309) & 1) == 0 )
      v25 = sub_1C1C6BC();
    if ( !*(_DWORD *)(v25 + 224) )
      j_il2cpp_runtime_class_init_0(v25, req);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v23[7] + 16LL);
    if ( (*((_BYTE *)&this[9].fields.UnityEngine_Behaviour_Fields + 5) & 1) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C1C6BC();
    req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_1BCAA3C(this, req, unityWebRequestWww, method);
  unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
  sub_1BCA784(&unityWebRequestWww->fields._bytes_k__BackingField, req);
  ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0LL);
  if ( ResponseHeaders )
  {
    unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
    sub_1BCA784(&unityWebRequestWww->fields._responseHeaders_k__BackingField, ResponseHeaders);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0LL);
    v27 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7294/*"HTTP/1.1 {0} "*/,
                                                                   v27,
                                                                   0LL);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12416/*"STATUS"*/,
        (Il2CppObject *)this,
        (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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

  if ( (byte_4B14C0C & 1) == 0 )
  {
    sub_1BCA7E0(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo, url, postData, headers);
    byte_4B14C0C = 1;
  }
  v11 = sub_1BCAA2C(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo, url, postData, headers);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1BCA784(v11 + 56, this);
  *(_QWORD *)(v11 + 32) = url;
  sub_1BCA784(v11 + 32, url);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1BCA784(v11 + 40, postData);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1BCA784(v11 + 48, headers);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1BCA784(v11 + 64, unityWebRequestWww);
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

  if ( (byte_4B14C0D & 1) == 0 )
  {
    sub_1BCA7E0(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo, url, postData, headers);
    byte_4B14C0D = 1;
  }
  v11 = sub_1BCAA2C(
          DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo,
          url,
          postData,
          headers);
  System_Object___ctor((Il2CppObject *)v11, 0LL);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1BCA784(v11 + 56, this);
  *(_QWORD *)(v11 + 32) = url;
  sub_1BCA784(v11 + 32, url);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1BCA784(v11 + 40, postData);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1BCA784(v11 + 48, headers);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1BCA784(v11 + 64, unityWebRequestWww);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v5, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, v7, 0LL);
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
  __int64 v2; // x2
  __int64 v3; // x3
  int32_t _1__state; // w8
  System_String_o *url; // x20
  System_Uri_o *v7; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *_72669944; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v9; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  UnityEngine_Networking_UnityWebRequest_o *v13; // x0
  Il2CppObject *v14; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v15; // x0
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x20
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v21; // x1
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  const MethodInfo *v24; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o **v25; // [xsp+8h] [xbp-28h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v26; // [xsp+18h] [xbp-18h] BYREF

  v26 = this;
  if ( (byte_4B14C13 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Uri_TypeInfo, method, v2);
    byte_4B14C13 = 1;
  }
  v25 = &v26;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1BCAA3C(0LL, method, v2, v3);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1BCAA3C(IsNullOrEmpty, v21, v22, v23);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v26->fields._req_5__2,
      v26->fields.unityWebRequestWww,
      v23);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(v26, v24);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v7 = (System_Uri_o *)sub_1BCAA2C(System_Uri_TypeInfo, method, v2, v3);
  System_Uri___ctor(v7, url, 0LL);
  _72669944 = UnityEngine_Networking_UnityWebRequest__Get_72669944(v7, 0LL);
  v9 = v26;
  v26->fields._req_5__2 = _72669944;
  sub_1BCA784(&v9->fields._req_5__2, _72669944);
  v13 = v26->fields._req_5__2;
  v26->fields.__1__state = -3;
  if ( !v13 )
    sub_1BCAA3C(0LL, v10, v11, v12);
  v14 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v13, 0LL);
  v15 = v26;
  v26->fields.__2__current = v14;
  sub_1BCA784(&v15->fields.__2__current, v14);
  result = 1;
  v26->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B14C14 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B14C14 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v6 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v8)(
      req_5__2,
      *(_QWORD *)(v8 + 8));
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v24; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v25; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  UnityEngine_Networking_UnityWebRequest_o *v30; // x0
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v35; // x0
  _BOOL8 v36; // x0
  __int64 v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x3
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v41; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v42; // x20
  const MethodInfo *v43; // x2
  System_String_o *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  __int64 v50; // x1
  __int64 v51; // x2
  const MethodInfo *v52; // x3
  bool IsNullOrEmpty; // w8
  int64_t responseCode; // x0
  const MethodInfo *v55; // x1
  __int64 v56; // x1
  __int64 v57; // x2
  UnityEngine_Networking_UnityWebRequest_o *v58; // x0
  UnityEngine_Networking_UnityWebRequest_o *v59; // x0
  System_String_o *v60; // x0
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v65; // x0
  Il2CppObject *v66; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v67; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v68; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v69; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v70; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v71; // [xsp+68h] [xbp-38h] BYREF

  v71 = this;
  if ( (byte_4B14C17 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v15, v16);
    sub_1BCA7E0(&System_Uri_TypeInfo, v17, v18);
    sub_1BCA7E0(&StringLiteral_11355/*"Redirect limit exceeded"*/, v19, v20);
    byte_4B14C17 = 1;
  }
  memset(&v70, 0, sizeof(v70));
  v69 = &v71;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1BCAA3C(0LL, method, v2, v3);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    responseCode = (int64_t)v71->fields._req_5__2;
    if ( IsNullOrEmpty )
    {
      if ( !_4__this )
        sub_1BCAA3C(responseCode, v50, v51, v52);
    }
    else
    {
      if ( !responseCode )
        sub_1BCAA3C(0LL, v50, v51, v52);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_result(
                       (UnityEngine_Networking_UnityWebRequest_o *)responseCode,
                       0LL);
      if ( (_DWORD)responseCode != 2 )
        goto LABEL_27;
      v58 = v71->fields._req_5__2;
      if ( !v58 )
        sub_1BCAA3C(0LL, v56, v57, v52);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v58, 0LL);
      if ( responseCode != 303 )
        goto LABEL_27;
      v59 = v71->fields._req_5__2;
      if ( !v59 )
        sub_1BCAA3C(0LL, v56, v57, v52);
      v60 = UnityEngine_Networking_UnityWebRequest__get_error(v59, 0LL);
      if ( !v60 )
        sub_1BCAA3C(0LL, v61, v62, v63);
      responseCode = System_String__Contains(v60, (System_String_o *)StringLiteral_11355/*"Redirect limit exceeded"*/, 0LL);
      if ( (responseCode & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_1BCAA3C(responseCode, v56, v57, v52);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
          v71->fields._req_5__2,
          v71->fields.unityWebRequestWww,
          v52);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_1BCAA3C(responseCode, v56, v57, v52);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
      v71->fields._req_5__2,
      v71->fields.unityWebRequestWww,
      v52);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v71, v55);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v24 = (System_Uri_o *)sub_1BCAA2C(System_Uri_TypeInfo, method, v2, v3);
  System_Uri___ctor(v24, url, 0LL);
  v25 = UnityEngine_Networking_UnityWebRequest__Post(v24, v71->fields.postData, 0LL);
  v26 = v71;
  v71->fields._req_5__2 = v25;
  sub_1BCA784(&v26->fields._req_5__2, v25);
  v30 = v71->fields._req_5__2;
  v71->fields.__1__state = -3;
  if ( !v30 )
    sub_1BCAA3C(0LL, v27, v28, v29);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v30, 0, 0LL);
  headers = v71->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v35 = v71->fields.headers;
    if ( !v35 )
      sub_1BCAA3C(0LL, v31, v32, v33);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v68,
      (System_Collections_Generic_Dictionary_object__object__o *)v35,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v70 = v68;
    while ( 1 )
    {
      v36 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v70,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v36 )
        break;
      if ( !_4__this )
        sub_1BCAA3C(v36, v37, v38, v39);
      value = v70.fields._current.fields.value;
      v41 = v71->fields._req_5__2;
      v42 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v36,
                                                                    (System_String_o *)v70.fields._current.fields.key,
                                                                    v38);
      v44 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v42, (System_String_o *)value, v43);
      if ( !v41 )
        sub_1BCAA3C(v44, v45, v46, v47);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v41, (System_String_o *)v42, v44, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v70,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v65 = v71->fields._req_5__2;
  if ( !v65 )
    sub_1BCAA3C(0LL, v31, v32, v33);
  v66 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v65, 0LL);
  v67 = v71;
  v71->fields.__2__current = v66;
  sub_1BCA784(&v67->fields.__2__current, v66);
  result = 1;
  v71->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B14C18 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B14C18 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v6 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v8)(
      req_5__2,
      *(_QWORD *)(v8 + 8));
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int32_t _1__state; // w8
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x22
  System_String_o *url; // x20
  System_Uri_o *v22; // x19
  struct UnityEngine_Networking_UnityWebRequest_o *v23; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x2
  __int64 v33; // x3
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v35; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v36; // x20
  const MethodInfo *v37; // x2
  System_String_o *v38; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v45; // x1
  __int64 v46; // x2
  const MethodInfo *v47; // x3
  const MethodInfo *v48; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v50; // x0
  Il2CppObject *v51; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v52; // x0
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v54; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v56; // [xsp+68h] [xbp-38h] BYREF

  v56 = this;
  if ( (byte_4B14C15 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__, v15, v16);
    sub_1BCA7E0(&System_Uri_TypeInfo, v17, v18);
    byte_4B14C15 = 1;
  }
  memset(&v55, 0, sizeof(v55));
  v54 = &v56;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1BCAA3C(0LL, method, v2, v3);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0LL);
    if ( !_4__this )
      sub_1BCAA3C(IsNullOrEmpty, v45, v46, v47);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v56->fields._req_5__2,
      v56->fields.unityWebRequestWww,
      v47);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v56, v48);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v22 = (System_Uri_o *)sub_1BCAA2C(System_Uri_TypeInfo, method, v2, v3);
  System_Uri___ctor(v22, url, 0LL);
  v23 = UnityEngine_Networking_UnityWebRequest__Post(v22, v56->fields.postData, 0LL);
  v24 = v56;
  v56->fields._req_5__2 = v23;
  sub_1BCA784(&v24->fields._req_5__2, v23);
  headers = v56->fields.headers;
  v56->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v29 = v56->fields.headers;
    if ( !v29 )
      sub_1BCAA3C(0LL, v25, v26, v27);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v53,
      (System_Collections_Generic_Dictionary_object__object__o *)v29,
      (const MethodInfo_3265690 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v55 = v53;
    while ( 1 )
    {
      v30 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v55,
              (const MethodInfo_3364380 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v30 )
        break;
      if ( !_4__this )
        sub_1BCAA3C(v30, v31, v32, v33);
      value = v55.fields._current.fields.value;
      v35 = v56->fields._req_5__2;
      v36 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v30,
                                                                    (System_String_o *)v55.fields._current.fields.key,
                                                                    v32);
      v38 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v36, (System_String_o *)value, v37);
      if ( !v35 )
        sub_1BCAA3C(v38, v39, v40, v41);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v35, (System_String_o *)v36, v38, 0LL);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v55,
      (const MethodInfo_33644A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v50 = v56->fields._req_5__2;
  if ( !v50 )
    sub_1BCAA3C(0LL, v25, v26, v27);
  v51 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v50, 0LL);
  v52 = v56;
  v56->fields.__2__current = v51;
  sub_1BCA784(&v52->fields.__2__current, v51);
  result = 1;
  v56->fields.__1__state = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(
         &Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__,
         v7);
  sub_1BCA908(v6, v8);
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
  __int64 v2; // x2
  struct UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x19
  UnityEngine_Networking_UnityWebRequest_c *klass; // x8
  __int64 v6; // x9
  int32_t *p_offset; // x10
  __int64 v8; // x0

  if ( (byte_4B14C16 & 1) == 0 )
  {
    sub_1BCA7E0(&System_IDisposable_TypeInfo, method, v2);
    byte_4B14C16 = 1;
  }
  req_5__2 = this->fields._req_5__2;
  this->fields.__1__state = -1;
  if ( req_5__2 )
  {
    klass = req_5__2->klass;
    v6 = *(unsigned __int16 *)(&req_5__2->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&req_5__2->klass->_2.bitflags2 + 3) )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)p_offset - 1) != System_IDisposable_TypeInfo )
      {
        --v6;
        p_offset += 4;
        if ( !v6 )
          goto LABEL_8;
      }
      v8 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
    }
    else
    {
LABEL_8:
      v8 = sub_1C1C7C0(req_5__2, System_IDisposable_TypeInfo, 0LL);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v8)(
      req_5__2,
      *(_QWORD *)(v8 + 8));
  }
}


void __fastcall DelightWorks_Network_UnityWebRequestWWWSingleton___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19

  if ( (byte_4B14C12 & 1) == 0 )
  {
    sub_1BCA7E0(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v1, v2);
    byte_4B14C12 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v4;
  sub_1BCA784(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields, v4);
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