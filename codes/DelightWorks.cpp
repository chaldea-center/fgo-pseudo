void DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  UnityEngine_MonoBehaviour_o *v15; // x21
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_4D2F287 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_4D2F287 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v5;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_1C93D2C(0, v13);
  v15 = (UnityEngine_MonoBehaviour_o *)Instance;
  v16 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v14);
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(v15, v16, 0);
}


void DelightWorks_Network_UnityWebRequestWWW___ctor_40398276(
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
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *Instance; // x0
  __int64 v20; // x1
  const MethodInfo *v21; // x5
  UnityEngine_MonoBehaviour_o *v22; // x23
  System_Collections_IEnumerator_o *v23; // x0
  System_Collections_Generic_Dictionary_object__object__o *v24; // x23
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  const MethodInfo *v31; // x5

  if ( (byte_4D2F288 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_1C93AD4(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_4D2F288 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( checkServerTimeFlag )
  {
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    if ( !byte_4D2F29C )
    {
      sub_1C93AD4(&NetworkManager_TypeInfo);
      byte_4D2F29C = 1;
    }
    v11 = NetworkManager_TypeInfo;
    if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
      v11 = NetworkManager_TypeInfo;
    }
    if ( !v11->static_fields->serverTimeChkMovie )
    {
      v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v24,
        (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v24;
      sub_1C93A78(
        (GrandQuestFolderBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
        (int32_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v22 = (UnityEngine_MonoBehaviour_o *)Instance;
        v23 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v31);
        goto LABEL_13;
      }
LABEL_16:
      sub_1C93D2C(Instance, v20);
    }
  }
  v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C93D20(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v12,
    (const MethodInfo_352E1F8 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v12;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3AC52FC *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72105100(v22, v23, 0);
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
  __int64 v4; // x1
  __int64 v5; // x0
  System_String_o *v6; // x19
  int v7; // w8
  System_String_o *v8; // x19
  int32_t v9; // w0
  Il2CppObject *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4D2F289 & 1) == 0 )
  {
    sub_1C93AD4(&char___TypeInfo);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C93AD4(&StringLiteral_1486/*";"*/);
    sub_1C93AD4(&StringLiteral_3822/*"CONTENT-TYPE"*/);
    sub_1C93AD4(&StringLiteral_18083/*"charset="*/);
    byte_4D2F289 = 1;
  }
  value = 0;
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3822/*"CONTENT-TYPE"*/,
          &value,
          (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0);
  }
  v5 = (__int64)value;
  if ( !value )
    goto LABEL_19;
  v5 = System_String__IndexOf_64482696((System_String_o *)value, (System_String_o *)StringLiteral_18083/*"charset="*/, 5, 0);
  if ( !StringLiteral_18083/*"charset="*/ )
    goto LABEL_19;
  if ( (v5 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0);
  if ( !value )
    goto LABEL_19;
  v5 = (__int64)System_String__Substring((System_String_o *)value, *((_DWORD *)StringLiteral_18083/*"charset="*/ + 4) + (int)v5, 0);
  if ( !v5 )
    goto LABEL_19;
  v6 = System_String__Trim((System_String_o *)v5, 0);
  v5 = sub_1C93B7C(char___TypeInfo, 2);
  if ( !v5 )
    goto LABEL_19;
  v7 = *(_DWORD *)(v5 + 24);
  v4 = v5;
  if ( !v7 || (*(_WORD *)(v5 + 32) = 39, v7 == 1) )
    sub_1C93D34(v5);
  *(_WORD *)(v5 + 34) = 34;
  if ( !v6
    || (v5 = (__int64)System_String__Trim_64482288(v6, (System_Char_array *)v5, 0)) == 0
    || (v5 = (__int64)System_String__Trim((System_String_o *)v5, 0)) == 0 )
  {
LABEL_19:
    sub_1C93D2C(v5, v4);
  }
  v8 = (System_String_o *)v5;
  v9 = System_String__IndexOf_64482696((System_String_o *)v5, (System_String_o *)StringLiteral_1486/*";"*/, 0, 0);
  if ( (v9 & 0x80000000) == 0 )
    v8 = System_String__Substring_64471664(v8, 0, v9, 0);
  return System_Text_Encoding__GetEncoding_64577268(v8, 0);
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
    v6 = sub_1C93AE8(&UnityEngine_UnityException_TypeInfo);
    v7 = (UnityEngine_UnityException_o *)sub_1C93D20(v6);
    v8 = (System_String_o *)sub_1C93AE8(&StringLiteral_15661/*"WWW is not ready downloading yet"*/);
    UnityEngine_UnityException___ctor_72113552(v7, v8, 0);
    v9 = sub_1C93AE8(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__);
    sub_1C93BFC(v7, v9);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_1C93D2C(TextEncoding, bytes_k__BackingField);
  return ((System_String_o *(__fastcall *)(System_Text_Encoding_o *, struct System_Byte_array *, _QWORD, _QWORD, const MethodInfo *))TextEncoding->klass->vtable._36_GetString.methodPtr)(
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._bytes_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._bytes_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DelightWorks_Network_UnityWebRequestWWW__set_error(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *value,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._error_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._error_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields._responseHeaders_k__BackingField = value;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)value,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void DelightWorks_Network_UnityWebRequestWWWSingleton___ctor(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        const MethodInfo *method)
{
  if ( (byte_4D2F27F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
    byte_4D2F27F = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3AC57E4 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
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
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v14; // x0
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v16; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x0
  System_Char_array *v25; // x0

  if ( (byte_4D2F27E & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Linq_Enumerable_Any_char___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_Select_char__char___);
    sub_1C93AD4(&Method_System_Linq_Enumerable_ToArray_char___);
    sub_1C93AD4(&System_Func_char__char__TypeInfo);
    sub_1C93AD4(&System_Func_char__bool__TypeInfo);
    sub_1C93AD4(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__);
    sub_1C93AD4(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__);
    sub_1C93AD4(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_4D2F27E = 1;
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
    _9__8_0 = (System_Func_char__bool__o *)sub_1C93D20(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__8_0,
      v6,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0);
    static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    static_fields->__9__8_0 = _9__8_0;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&static_fields->__9__8_0, (int32_t)_9__8_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_31B1F88 *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v14 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    v14 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  _9__8_1 = v14->static_fields->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !v14->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v14);
      v14 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v14->static_fields->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_1C93D20(System_Func_char__char__TypeInfo);
    System_Func_char__char____ctor(
      _9__8_1,
      v16,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0);
    v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v17->__9__8_1 = _9__8_1;
    sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->__9__8_1, (int32_t)_9__8_1, v18, v19, v20, v21, v22, v23);
  }
  v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_31D6EE0 *)Method_System_Linq_Enumerable_Select_char__char___);
  v25 = System_Linq_Enumerable__ToArray_char_(
          v24,
          (const MethodInfo_31E3AF8 *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_64456652(0, v25, 0);
}


System_Collections_IEnumerator_o *DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7

  if ( (byte_4D2F279 & 1) == 0 )
  {
    sub_1C93AD4(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
    byte_4D2F279 = 1;
  }
  v7 = sub_1C93D20(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = url;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)url, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)unityWebRequestWww, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v5; // x20
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  long double inited; // q0
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x21
  Il2CppObject *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int64_t v31; // x20
  NetworkManager_c *v32; // x0
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v33; // x1
  System_String_o *error; // x21
  System_String_o *v35; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_4D2F27D & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_byte___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&NetworkManager_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_12443/*"STATUS"*/);
    sub_1C93AD4(&StringLiteral_15800/*"X-Server-Time"*/);
    sub_1C93AD4(&StringLiteral_1/*""*/);
    sub_1C93AD4(&StringLiteral_7305/*"HTTP/1.1 {0} "*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C93AD4(&StringLiteral_11333/*"Redirect limit exceeded"*/);
    byte_4D2F27D = 1;
  }
  value = 0;
  result = 0;
  if ( !v5 )
    goto LABEL_38;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_result(v5, 0);
  if ( (_DWORD)this == 2 )
  {
    if ( UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0) == 303 )
    {
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_error(
                                                                     v5,
                                                                     0);
      if ( !this )
        goto LABEL_38;
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11333/*"Redirect limit exceeded"*/, 0) )
      {
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                       v5,
                                                                       0);
        if ( !this )
          goto LABEL_38;
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                       (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                       0);
        req = (UnityEngine_Networking_UnityWebRequest_o *)this;
        if ( !this )
        {
          v13 = Method_System_Array_Empty_byte___;
          v14 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
          if ( !v14 )
          {
            sub_1C69BC4(Method_System_Array_Empty_byte___);
            v14 = v13[7];
          }
          v15 = *(_QWORD *)(v14 + 16);
          if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
            v15 = sub_1C69B68(inited);
          if ( !*(_DWORD *)(v15 + 224) )
            inited = j_il2cpp_runtime_class_init_0(v15);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v13[7] + 16LL);
          if ( (*((_BYTE *)this + 309) & 1) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C69B68(inited);
          req = (UnityEngine_Networking_UnityWebRequest_o *)**((_QWORD **)this + 23);
        }
        if ( !unityWebRequestWww )
          goto LABEL_38;
        unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
          (int32_t)req,
          v6,
          v7,
          v8,
          v9,
          v10,
          v11);
        ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0);
        if ( ResponseHeaders )
        {
          v23 = (System_Collections_Generic_Dictionary_object__object__o *)ResponseHeaders;
          unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
          sub_1C93A78(
            (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (int32_t)ResponseHeaders,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0);
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7305/*"HTTP/1.1 {0} "*/,
                                                                         v24,
                                                                         0);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_38;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12443/*"STATUS"*/,
            (Il2CppObject *)this,
            (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v23,
                 (Il2CppObject *)StringLiteral_15800/*"X-Server-Time"*/,
                 &value,
                 (const MethodInfo_35303B4 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0) )
          {
            v31 = result;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
            if ( !byte_4D2F29B )
            {
              sub_1C93AD4(&NetworkManager_TypeInfo);
              byte_4D2F29B = 1;
            }
            v32 = NetworkManager_TypeInfo;
            if ( !NetworkManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
              v32 = NetworkManager_TypeInfo;
            }
            v32->static_fields->serverTimeChkMovie = v31;
            v33 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)StringLiteral_1/*""*/;
            goto LABEL_36;
          }
        }
      }
    }
    error = UnityEngine_Networking_UnityWebRequest__get_error(v5, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   v5,
                                                                   0);
    if ( this )
    {
      v35 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_64463988(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                                     v35,
                                                                     0);
      if ( unityWebRequestWww )
      {
        v33 = this;
LABEL_36:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v33;
        sub_1C93A78(
          (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._error_k__BackingField,
          (int32_t)v33,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30);
        goto LABEL_37;
      }
    }
LABEL_38:
    sub_1C93D2C(this, req);
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
  UnityEngine_Networking_UnityWebRequest_o *v5; // x20
  System_String_o *error; // x21
  System_String_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  long double inited; // q0
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  Il2CppObject *v31; // x0
  int64_t responseCode; // [xsp+8h] [xbp-38h] BYREF

  v5 = req;
  if ( (byte_4D2F27C & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Array_Empty_byte___);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_1C93AD4(&long_TypeInfo);
    sub_1C93AD4(&StringLiteral_113/*" "*/);
    sub_1C93AD4(&StringLiteral_12443/*"STATUS"*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C93AD4(&StringLiteral_7305/*"HTTP/1.1 {0} "*/);
    byte_4D2F27C = 1;
  }
  if ( !v5 )
    goto LABEL_24;
  if ( UnityEngine_Networking_UnityWebRequest__get_result(v5, 0) != 1 )
  {
    error = UnityEngine_Networking_UnityWebRequest__get_error(v5, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                   v5,
                                                                   0);
    if ( !this )
      goto LABEL_24;
    v7 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_64463988(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                                   v7,
                                                                   0);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._error_k__BackingField,
      (int32_t)this,
      v8,
      v9,
      v10,
      v11,
      v12,
      v13);
  }
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                 v5,
                                                                 0);
  if ( !this )
    goto LABEL_24;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                 (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                 0);
  req = (UnityEngine_Networking_UnityWebRequest_o *)this;
  if ( !this )
  {
    v21 = Method_System_Array_Empty_byte___;
    v22 = *((_QWORD *)Method_System_Array_Empty_byte___ + 7);
    if ( !v22 )
    {
      sub_1C69BC4(Method_System_Array_Empty_byte___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_BYTE *)(v23 + 309) & 1) == 0 )
      v23 = sub_1C69B68(inited);
    if ( !*(_DWORD *)(v23 + 224) )
      inited = j_il2cpp_runtime_class_init_0(v23);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v21[7] + 16LL);
    if ( (*((_BYTE *)this + 309) & 1) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_1C69B68(inited);
    req = (UnityEngine_Networking_UnityWebRequest_o *)**((_QWORD **)this + 23);
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_1C93D2C(this, req);
  unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
    (int32_t)req,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19);
  ResponseHeaders = UnityEngine_Networking_UnityWebRequest__GetResponseHeaders(v5, 0);
  if ( ResponseHeaders )
  {
    unityWebRequestWww->fields._responseHeaders_k__BackingField = ResponseHeaders;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
      (int32_t)ResponseHeaders,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0);
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(long_TypeInfo, &responseCode);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7305/*"HTTP/1.1 {0} "*/,
                                                                   v31,
                                                                   0);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12443/*"STATUS"*/,
        (Il2CppObject *)this,
        (const MethodInfo_352EBA8 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  if ( (byte_4D2F27A & 1) == 0 )
  {
    sub_1C93AD4(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
    byte_4D2F27A = 1;
  }
  v11 = sub_1C93D20(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  int32_t v36; // w2
  int32_t v37; // w3
  System_String_o *v38; // x4
  int32_t v39; // w5
  int64_t v40; // x6
  System_String_o *v41; // x7

  if ( (byte_4D2F27B & 1) == 0 )
  {
    sub_1C93AD4(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
    byte_4D2F27B = 1;
  }
  v11 = sub_1C93D20(DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 32), (int32_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 40), (int32_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 48), (int32_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_72105100((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
  struct UnityEngine_Networking_UnityWebRequest_o *_74652512; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v7; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  __int64 v14; // x1
  UnityEngine_Networking_UnityWebRequest_o *v15; // x0
  Il2CppObject *v16; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v17; // x0
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
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
  if ( (byte_4D2F281 & 1) == 0 )
  {
    sub_1C93AD4(&System_Uri_TypeInfo);
    byte_4D2F281 = 1;
  }
  v32 = &v33;
  _1__state = this->fields.__1__state;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C93D2C(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_1C93D2C(IsNullOrEmpty, v29);
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
  v5 = (System_Uri_o *)sub_1C93D20(System_Uri_TypeInfo);
  System_Uri___ctor(v5, url, 0);
  _74652512 = UnityEngine_Networking_UnityWebRequest__Get_74652512(v5, 0);
  v7 = v33;
  v33->fields._req_5__2 = _74652512;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v7->fields._req_5__2, (int32_t)_74652512, v8, v9, v10, v11, v12, v13);
  v15 = v33->fields._req_5__2;
  v33->fields.__1__state = -3;
  if ( !v15 )
    sub_1C93D2C(0, v14);
  v16 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v15, 0);
  v17 = v33;
  v33->fields.__2__current = v16;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v17->fields.__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  v33->fields.__1__state = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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

  if ( (byte_4D2F282 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2F282 = 1;
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
      v7 = sub_1C69E5C(req_5__2, System_IDisposable_TypeInfo, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  UnityEngine_Networking_UnityWebRequest_o *v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v24; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v25; // x20
  const MethodInfo *v26; // x2
  System_String_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  __int64 v31; // x1
  const MethodInfo *v32; // x3
  bool IsNullOrEmpty; // w8
  int64_t responseCode; // x0
  const MethodInfo *v35; // x1
  __int64 v36; // x1
  UnityEngine_Networking_UnityWebRequest_o *v37; // x0
  UnityEngine_Networking_UnityWebRequest_o *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  UnityEngine_Networking_UnityWebRequest_o *v42; // x0
  Il2CppObject *v43; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v44; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  System_String_o *v47; // x4
  int32_t v48; // w5
  int64_t v49; // x6
  System_String_o *v50; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v51; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v52; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v53; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v54; // [xsp+68h] [xbp-38h] BYREF

  v54 = this;
  if ( (byte_4D2F285 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C93AD4(&System_Uri_TypeInfo);
    sub_1C93AD4(&StringLiteral_11333/*"Redirect limit exceeded"*/);
    byte_4D2F285 = 1;
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
      sub_1C93D2C(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    responseCode = (int64_t)v54->fields._req_5__2;
    if ( IsNullOrEmpty )
    {
      if ( !_4__this )
        sub_1C93D2C(responseCode, v31);
    }
    else
    {
      if ( !responseCode )
        sub_1C93D2C(0, v31);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_result(
                       (UnityEngine_Networking_UnityWebRequest_o *)responseCode,
                       0);
      if ( (_DWORD)responseCode != 2 )
        goto LABEL_27;
      v37 = v54->fields._req_5__2;
      if ( !v37 )
        sub_1C93D2C(0, v36);
      responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v37, 0);
      if ( responseCode != 303 )
        goto LABEL_27;
      v38 = v54->fields._req_5__2;
      if ( !v38 )
        sub_1C93D2C(0, v36);
      v39 = UnityEngine_Networking_UnityWebRequest__get_error(v38, 0);
      if ( !v39 )
        sub_1C93D2C(0, v40);
      responseCode = System_String__Contains(v39, (System_String_o *)StringLiteral_11333/*"Redirect limit exceeded"*/, 0);
      if ( (responseCode & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_1C93D2C(responseCode, v36);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
          v54->fields._req_5__2,
          v54->fields.unityWebRequestWww,
          v32);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_1C93D2C(responseCode, v36);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)responseCode,
      v54->fields._req_5__2,
      v54->fields.unityWebRequestWww,
      v32);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v54, v35);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v6 = (System_Uri_o *)sub_1C93D20(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v54->fields.postData, 0);
  v8 = v54;
  v54->fields._req_5__2 = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v16 = v54->fields._req_5__2;
  v54->fields.__1__state = -3;
  if ( !v16 )
    sub_1C93D2C(0, v15);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v16, 0, 0);
  headers = v54->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_352E878 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v19 = v54->fields.headers;
    if ( !v19 )
      sub_1C93D2C(0, v17);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v51,
      (System_Collections_Generic_Dictionary_object__object__o *)v19,
      (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v53 = v51;
    while ( 1 )
    {
      v20 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v53,
              (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v20 )
        break;
      if ( !_4__this )
        sub_1C93D2C(v20, v21);
      value = v53.fields._current.fields.value;
      v24 = v54->fields._req_5__2;
      v25 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v20,
                                                                    (System_String_o *)v53.fields._current.fields.key,
                                                                    v22);
      v27 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v25, (System_String_o *)value, v26);
      if ( !v24 )
        sub_1C93D2C(v27, v28);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v24, (System_String_o *)v25, v27, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v53,
      (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v42 = v54->fields._req_5__2;
  if ( !v42 )
    sub_1C93D2C(0, v17);
  v43 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v42, 0);
  v44 = v54;
  v54->fields.__2__current = v43;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v44->fields.__2__current, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  v54->fields.__1__state = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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

  if ( (byte_4D2F286 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2F286 = 1;
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
      v7 = sub_1C69E5C(req_5__2, System_IDisposable_TypeInfo, 0);
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
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  Il2CppObject *value; // x21
  UnityEngine_Networking_UnityWebRequest_o *v22; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v23; // x20
  const MethodInfo *v24; // x2
  System_String_o *v25; // x0
  __int64 v26; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v30; // x1
  const MethodInfo *v31; // x3
  const MethodInfo *v32; // x1
  UnityEngine_Networking_UnityWebRequest_o *v34; // x0
  Il2CppObject *v35; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v36; // x0
  int32_t v37; // w2
  int32_t v38; // w3
  System_String_o *v39; // x4
  int32_t v40; // w5
  int64_t v41; // x6
  System_String_o *v42; // x7
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+8h] [xbp-98h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v44; // [xsp+38h] [xbp-68h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v46; // [xsp+68h] [xbp-38h] BYREF

  v46 = this;
  if ( (byte_4D2F283 & 1) == 0 )
  {
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_1C93AD4(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_1C93AD4(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_1C93AD4(&System_Uri_TypeInfo);
    byte_4D2F283 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  v44 = &v46;
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_1C93D2C(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_1C93D2C(IsNullOrEmpty, v30);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v46->fields._req_5__2,
      v46->fields.unityWebRequestWww,
      v31);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v46, v32);
    return 0;
  }
  if ( _1__state )
    return 0;
  this->fields.__1__state = -1;
  url = this->fields.url;
  v6 = (System_Uri_o *)sub_1C93D20(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v46->fields.postData, 0);
  v8 = v46;
  v46->fields._req_5__2 = v7;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  headers = v46->fields.headers;
  v46->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_352E878 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v17 = v46->fields.headers;
    if ( !v17 )
      sub_1C93D2C(0, v15);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v43,
      (System_Collections_Generic_Dictionary_object__object__o *)v17,
      (const MethodInfo_352EFD8 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v45 = v43;
    while ( 1 )
    {
      v18 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v45,
              (const MethodInfo_362E224 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v18 )
        break;
      if ( !_4__this )
        sub_1C93D2C(v18, v19);
      value = v45.fields._current.fields.value;
      v22 = v46->fields._req_5__2;
      v23 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v18,
                                                                    (System_String_o *)v45.fields._current.fields.key,
                                                                    v20);
      v25 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(v23, (System_String_o *)value, v24);
      if ( !v22 )
        sub_1C93D2C(v25, v26);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v22, (System_String_o *)v23, v25, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v45,
      (const MethodInfo_362E344 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v34 = v46->fields._req_5__2;
  if ( !v34 )
    sub_1C93D2C(0, v15);
  v35 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v34, 0);
  v36 = v46;
  v46->fields.__2__current = v35;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&v36->fields.__2__current, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  v46->fields.__1__state = 1;
  return 1;
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

  v2 = sub_1C93AE8(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C93D20(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C93AE8(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__);
  sub_1C93BFC(v3, v4);
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

  if ( (byte_4D2F284 & 1) == 0 )
  {
    sub_1C93AD4(&System_IDisposable_TypeInfo);
    byte_4D2F284 = 1;
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
      v7 = sub_1C69E5C(req_5__2, System_IDisposable_TypeInfo, 0);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2F280 & 1) == 0 )
  {
    sub_1C93AD4(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_4D2F280 = 1;
  }
  v1 = (Il2CppObject *)sub_1C93D20(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v1;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
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