void DelightWorks_Network_UnityWebRequestWWW___ctor(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  Il2CppObject *Instance; // x0
  __int64 v13; // x1
  const MethodInfo *v14; // x3
  UnityEngine_MonoBehaviour_o *v15; // x21
  System_Collections_IEnumerator_o *v16; // x1

  if ( (byte_596F03A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_596F03A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  v5 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v5,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v13);
  v15 = (UnityEngine_MonoBehaviour_o *)Instance;
  v16 = DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          this,
          v14);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v15, v16, 0);
}


void DelightWorks_Network_UnityWebRequestWWW___ctor_46634804(
        DelightWorks_Network_UnityWebRequestWWW_o *this,
        System_String_o *url,
        UnityEngine_WWWForm_o *postData,
        System_Collections_Generic_Dictionary_string__string__o *headers,
        bool checkServerTimeFlag,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  NetworkManager_c *v13; // x0
  System_Collections_Generic_Dictionary_object__object__o *v14; // x23
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  Il2CppObject *Instance; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x5
  UnityEngine_MonoBehaviour_o *v24; // x23
  System_Collections_IEnumerator_o *v25; // x0
  System_Collections_Generic_Dictionary_object__object__o *v26; // x23
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  const MethodInfo *v33; // x5

  if ( (byte_596F03B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__string__TypeInfo);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
    byte_596F03B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  if ( checkServerTimeFlag )
  {
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
    if ( !byte_596F064 )
    {
      sub_2213A60(&NetworkManager_TypeInfo);
      byte_596F064 = 1;
    }
    v13 = NetworkManager_TypeInfo;
    if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v11, v12);
      v13 = NetworkManager_TypeInfo;
    }
    if ( !v13->static_fields->serverTimeChkMovie )
    {
      v26 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
      System_Collections_Generic_Dictionary_object__object____ctor(
        v26,
        (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
      this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v26;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
        (int32_t)v26,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
      if ( Instance )
      {
        v24 = (UnityEngine_MonoBehaviour_o *)Instance;
        v25 = DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect(
                (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
                url,
                postData,
                headers,
                this,
                v33);
        goto LABEL_13;
      }
LABEL_16:
      sub_2213CDC(Instance, v22);
    }
  }
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__string__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor(
    v14,
    (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__string___ctor__);
  this->fields._responseHeaders_k__BackingField = (struct System_Collections_Generic_Dictionary_string__string__o *)v14;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton__get_Instance__);
  if ( !Instance )
    goto LABEL_16;
  v24 = (UnityEngine_MonoBehaviour_o *)Instance;
  v25 = DelightWorks_Network_UnityWebRequestWWWSingleton__Post(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)Instance,
          url,
          postData,
          headers,
          this,
          v23);
LABEL_13:
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v24, v25, 0);
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
  int v11; // [xsp+8h] [xbp-28h]
  Il2CppObject *value; // [xsp+18h] [xbp-18h] BYREF

  if ( (byte_596F03C & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&StringLiteral_1568/*";"*/);
    sub_2213A60(&StringLiteral_3944/*"CONTENT-TYPE"*/);
    sub_2213A60(&StringLiteral_18733/*"charset="*/);
    byte_596F03C = 1;
  }
  responseHeaders_k__BackingField = this->fields._responseHeaders_k__BackingField;
  value = 0;
  v11 = 0;
  if ( !responseHeaders_k__BackingField
    || !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)responseHeaders_k__BackingField,
          (Il2CppObject *)StringLiteral_3944/*"CONTENT-TYPE"*/,
          &value,
          (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__) )
  {
    return System_Text_Encoding__get_UTF8(0);
  }
  v5 = (__int64)value;
  if ( !value )
    goto LABEL_21;
  v5 = System_String__IndexOf_75713748((System_String_o *)value, (System_String_o *)StringLiteral_18733/*"charset="*/, 5, 0);
  if ( !StringLiteral_18733/*"charset="*/ )
    goto LABEL_21;
  if ( (v5 & 0x80000000) != 0 )
    return System_Text_Encoding__get_UTF8(0);
  if ( !value )
    goto LABEL_21;
  v5 = (__int64)System_String__Substring((System_String_o *)value, *((_DWORD *)StringLiteral_18733/*"charset="*/ + 4) + (int)v5, 0);
  if ( !v5 )
    goto LABEL_21;
  v6 = System_String__Trim((System_String_o *)v5, 0);
  v5 = sub_2213B20(char___TypeInfo, 2);
  if ( !v5 )
    goto LABEL_21;
  v7 = *(_DWORD *)(v5 + 24);
  v4 = v5;
  if ( !v7 || (*(_WORD *)(v5 + 32) = 39, v7 == 1) )
    sub_2213CE4(v5);
  *(_WORD *)(v5 + 34) = 34;
  if ( !v6
    || (v5 = (__int64)System_String__Trim_75713456(v6, (System_Char_array *)v5, 0)) == 0
    || (v5 = (__int64)System_String__Trim((System_String_o *)v5, 0)) == 0 )
  {
LABEL_21:
    sub_2213CDC(v5, v4);
  }
  v8 = (System_String_o *)v5;
  v9 = System_String__IndexOf_75713748((System_String_o *)v5, (System_String_o *)StringLiteral_1568/*";"*/, 0, 0);
  if ( (v9 & 0x80000000) == 0 )
    v8 = System_String__Substring_75702848(v8, 0, v9, 0);
  return System_Text_Encoding__GetEncoding_75802088(v8, 0);
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
    v6 = sub_2213A74(&UnityEngine_UnityException_TypeInfo);
    v7 = (UnityEngine_UnityException_o *)sub_2213CCC(v6);
    v8 = (System_String_o *)sub_2213A74(&StringLiteral_16173/*"WWW is not ready downloading yet"*/);
    UnityEngine_UnityException___ctor_83442876(v7, v8, 0);
    v9 = sub_2213A74(&Method_DelightWorks_Network_UnityWebRequestWWW_get_text__);
    sub_2213BA0(v7, v9);
  }
  TextEncoding = DelightWorks_Network_UnityWebRequestWWW__GetTextEncoding(this, method);
  bytes_k__BackingField = this->fields._bytes_k__BackingField;
  if ( !bytes_k__BackingField || !TextEncoding )
    sub_2213CDC(TextEncoding, bytes_k__BackingField);
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._bytes_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._bytes_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._error_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._error_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  this->fields._responseHeaders_k__BackingField = value;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields._responseHeaders_k__BackingField,
    (int32_t)value,
    (System_String_o *)method,
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
  if ( (byte_596F032 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
    byte_596F032 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_UnityWebRequestWWWSingleton___ctor__);
}


System_String_o *DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *inStr,
        const MethodInfo *method)
{
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v4; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *static_fields; // x8
  System_Func_char__bool__o *_9__8_0; // x20
  Il2CppObject *v7; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v8; // x0
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  __int64 v16; // x2
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_c *v17; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v18; // x8
  System_Func_char__char__o *_9__8_1; // x20
  Il2CppObject *v20; // x21
  struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_StaticFields *v21; // x0
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Char_array *v29; // x0

  if ( (byte_596F031 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_Any_char___);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_char__char___);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_char___);
    sub_2213A60(&System_Func_char__char__TypeInfo);
    sub_2213A60(&System_Func_char__bool__TypeInfo);
    sub_2213A60(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__);
    sub_2213A60(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__);
    sub_2213A60(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_596F031 = 1;
  }
  v4 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !*(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, inStr, method);
    v4 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__8_0 = static_fields->__9__8_0;
  if ( !_9__8_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, inStr, method);
      static_fields = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__8_0 = (System_Func_char__bool__o *)sub_2213CCC(System_Func_char__bool__TypeInfo);
    System_Func_char__bool____ctor(
      _9__8_0,
      v7,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_0__,
      0);
    v8 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v8->__9__8_0 = _9__8_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->__9__8_0, (int32_t)_9__8_0, v9, v10, v11, v12, v13, v14);
  }
  if ( !System_Linq_Enumerable__Any_char_(
          (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
          (System_Func_TSource__bool__o *)_9__8_0,
          (const MethodInfo_3867760 *)Method_System_Linq_Enumerable_Any_char___) )
    return inStr;
  v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  if ( !*(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo, v15, v16);
    v17 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo;
  }
  v18 = v17->static_fields;
  _9__8_1 = v18->__9__8_1;
  if ( !_9__8_1 )
  {
    if ( !*(&v17->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v17, v15, v16);
      v18 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)v18->__9;
    _9__8_1 = (System_Func_char__char__o *)sub_2213CCC(System_Func_char__char__TypeInfo);
    System_Func_char__char____ctor(
      _9__8_1,
      v20,
      Method_DelightWorks_Network_UnityWebRequestWWWSingleton___c__FilterNonAsciiChar_b__8_1__,
      0);
    v21 = DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields;
    v21->__9__8_1 = _9__8_1;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v21->__9__8_1, (int32_t)_9__8_1, v22, v23, v24, v25, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_char__char_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)inStr,
                                                               (System_Func_TSource__TResult__o *)_9__8_1,
                                                               (const MethodInfo_388CE84 *)Method_System_Linq_Enumerable_Select_char__char___);
  v29 = System_Linq_Enumerable__ToArray_char_(
          v28,
          (const MethodInfo_389B90C *)Method_System_Linq_Enumerable_ToArray_char___);
  return System_String__CreateString_75682240(0, v29, 0);
}


System_Collections_IEnumerator_o *DelightWorks_Network_UnityWebRequestWWWSingleton__Get(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        System_String_o *url,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F02C & 1) == 0 )
  {
    sub_2213A60(&DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
    byte_596F02C = 1;
  }
  v7 = sub_2213CCC(DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 32) = url;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)url, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = unityWebRequestWww;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)unityWebRequestWww, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
        DelightWorks_Network_UnityWebRequestWWWSingleton_o *this,
        UnityEngine_Networking_UnityWebRequest_o *req,
        DelightWorks_Network_UnityWebRequestWWW_o *unityWebRequestWww,
        const MethodInfo *method)
{
  UnityEngine_Networking_UnityWebRequest_o *v5; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  long double v12; // q0
  _QWORD *v13; // x21
  __int64 v14; // x8
  __int64 v15; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Collections_Generic_Dictionary_object__object__o *v23; // x21
  Il2CppObject *v24; // x0
  __int64 v25; // x1
  __int64 v26; // x2
  long double v27; // q0
  int64_t v28; // x20
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v35; // x1
  System_String_o *error; // x21
  System_String_o *v37; // x0
  int64_t responseCode; // [xsp+0h] [xbp-40h] BYREF
  int64_t result; // [xsp+8h] [xbp-38h] BYREF
  Il2CppObject *value; // [xsp+18h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_596F030 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_byte___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__);
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_12872/*"STATUS"*/);
    sub_2213A60(&StringLiteral_16318/*"X-Server-Time"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    sub_2213A60(&StringLiteral_7566/*"HTTP/1.1 {0} "*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_2213A60(&StringLiteral_11736/*"Redirect limit exceeded"*/);
    byte_596F030 = 1;
  }
  value = 0;
  result = 0;
  if ( !v5 )
    goto LABEL_34;
  this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_result(v5, 0);
  if ( (_DWORD)this == 2 )
  {
    if ( UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0) == 303 )
    {
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_error(
                                                                     v5,
                                                                     0);
      if ( !this )
        goto LABEL_34;
      if ( System_String__Contains((System_String_o *)this, (System_String_o *)StringLiteral_11736/*"Redirect limit exceeded"*/, 0) )
      {
        this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)UnityEngine_Networking_UnityWebRequest__get_downloadHandler(
                                                                       v5,
                                                                       0);
        if ( !this )
          goto LABEL_34;
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
            sub_224B964(Method_System_Array_Empty_byte___);
            v14 = v13[7];
          }
          v15 = *(_QWORD *)(v14 + 16);
          if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
            v15 = sub_224B908(v12);
          if ( !*(_DWORD *)(v15 + 228) )
            *(__n128 *)&v12 = j_il2cpp_runtime_class_init_0(v15, req, v6);
          this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v13[7] + 16LL);
          if ( (*(_WORD *)((_BYTE *)&this[9].fields.m_CachedPtr + 5) & 1) == 0 )
            this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_224B908(v12);
          req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
        }
        if ( !unityWebRequestWww )
          goto LABEL_34;
        unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
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
          sub_2213A04(
            (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (int32_t)ResponseHeaders,
            v17,
            v18,
            v19,
            v20,
            v21,
            v22);
          responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0);
          v24 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &responseCode);
          this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                         (System_String_o *)StringLiteral_7566/*"HTTP/1.1 {0} "*/,
                                                                         v24,
                                                                         0);
          if ( !unityWebRequestWww->fields._responseHeaders_k__BackingField )
            goto LABEL_34;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
            (Il2CppObject *)StringLiteral_12872/*"STATUS"*/,
            (Il2CppObject *)this,
            (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
          if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
                 v23,
                 (Il2CppObject *)StringLiteral_16318/*"X-Server-Time"*/,
                 &value,
                 (const MethodInfo_3FFF778 *)Method_System_Collections_Generic_Dictionary_string__string__TryGetValue__)
            && System_Int64__TryParse((System_String_o *)value, &result, 0) )
          {
            v28 = result;
            if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
              *(__n128 *)&v27 = j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v25, v26);
            sub_2C82328(v28, 0, v27);
            v35 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)StringLiteral_1/*""*/;
            goto LABEL_32;
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
      v37 = UnityEngine_Networking_DownloadHandler__get_error((UnityEngine_Networking_DownloadHandler_o *)this, 0);
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_75694928(
                                                                     error,
                                                                     (System_String_o *)StringLiteral_113/*" "*/,
                                                                     v37,
                                                                     0);
      if ( unityWebRequestWww )
      {
        v35 = this;
LABEL_32:
        unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)v35;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._error_k__BackingField,
          (int32_t)v35,
          v29,
          v30,
          v31,
          v32,
          v33,
          v34);
        goto LABEL_33;
      }
    }
LABEL_34:
    sub_2213CDC(this, req);
  }
  if ( !unityWebRequestWww )
    goto LABEL_34;
LABEL_33:
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
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  long double v20; // q0
  _QWORD *v21; // x21
  __int64 v22; // x8
  __int64 v23; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *ResponseHeaders; // x0
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  Il2CppObject *v31; // x0
  int64_t responseCode; // [xsp+8h] [xbp-28h] BYREF

  v5 = req;
  if ( (byte_596F02F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_byte___);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__Add__);
    sub_2213A60(&StringLiteral_113/*" "*/);
    sub_2213A60(&StringLiteral_12872/*"STATUS"*/);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_2213A60(&StringLiteral_7566/*"HTTP/1.1 {0} "*/);
    byte_596F02F = 1;
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
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Concat_75694928(
                                                                   error,
                                                                   (System_String_o *)StringLiteral_113/*" "*/,
                                                                   v7,
                                                                   0);
    if ( !unityWebRequestWww )
      goto LABEL_24;
    unityWebRequestWww->fields._error_k__BackingField = (struct System_String_o *)this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._error_k__BackingField,
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
      sub_224B964(Method_System_Array_Empty_byte___);
      v22 = v21[7];
    }
    v23 = *(_QWORD *)(v22 + 16);
    if ( (*(_WORD *)(v23 + 309) & 1) == 0 )
      v23 = sub_224B908(v20);
    if ( !*(_DWORD *)(v23 + 228) )
      *(__n128 *)&v20 = j_il2cpp_runtime_class_init_0(v23, req, v14);
    this = *(DelightWorks_Network_UnityWebRequestWWWSingleton_o **)(v21[7] + 16LL);
    if ( (*(_WORD *)((_BYTE *)&this[9].fields.m_CachedPtr + 5) & 1) == 0 )
      this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)sub_224B908(v20);
    req = (UnityEngine_Networking_UnityWebRequest_o *)this[5].fields.m_CancellationTokenSource->klass;
  }
  if ( !unityWebRequestWww )
LABEL_24:
    sub_2213CDC(this, req);
  unityWebRequestWww->fields._bytes_k__BackingField = (struct System_Byte_array *)req;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._bytes_k__BackingField,
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
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&unityWebRequestWww->fields._responseHeaders_k__BackingField,
      (int32_t)ResponseHeaders,
      v25,
      v26,
      v27,
      v28,
      v29,
      v30);
    responseCode = UnityEngine_Networking_UnityWebRequest__get_responseCode(v5, 0);
    v31 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984368, &responseCode);
    this = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)System_String__Format(
                                                                   (System_String_o *)StringLiteral_7566/*"HTTP/1.1 {0} "*/,
                                                                   v31,
                                                                   0);
    if ( unityWebRequestWww->fields._responseHeaders_k__BackingField )
    {
      System_Collections_Generic_Dictionary_object__object___Add(
        (System_Collections_Generic_Dictionary_object__object__o *)unityWebRequestWww->fields._responseHeaders_k__BackingField,
        (Il2CppObject *)StringLiteral_12872/*"STATUS"*/,
        (Il2CppObject *)this,
        (const MethodInfo_3FFDC10 *)Method_System_Collections_Generic_Dictionary_string__string__Add__);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_596F02D & 1) == 0 )
  {
    sub_2213A60(&DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
    byte_596F02D = 1;
  }
  v11 = sub_2213CCC(DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
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
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7

  if ( (byte_596F02E & 1) == 0 )
  {
    sub_2213A60(&DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
    byte_596F02E = 1;
  }
  v11 = sub_2213CCC(DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  *(_DWORD *)(v11 + 16) = 0;
  *(_QWORD *)(v11 + 56) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 56), (int32_t)this, v12, v13, v14, v15, v16, v17);
  *(_QWORD *)(v11 + 32) = url;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 32), (int32_t)url, v18, v19, v20, v21, v22, v23);
  *(_QWORD *)(v11 + 40) = postData;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 40), (int32_t)postData, v24, v25, v26, v27, v28, v29);
  *(_QWORD *)(v11 + 48) = headers;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 48), (int32_t)headers, v30, v31, v32, v33, v34, v35);
  *(_QWORD *)(v11 + 64) = unityWebRequestWww;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v11 + 64), (int32_t)unityWebRequestWww, v36, v37, v38, v39, v40, v41);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v5, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
  UnityEngine_MonoBehaviour__StartCoroutine_83444756((UnityEngine_MonoBehaviour_o *)this, v7, 0);
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
  struct UnityEngine_Networking_UnityWebRequest_o *_86744428; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v7; // x0
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UnityEngine_Networking_UnityWebRequest_o *v15; // x0
  Il2CppObject *v16; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  struct DelightWorks_Network_UnityWebRequestWWWSingleton_o *_4__this; // x20
  System_String_o *error; // x0
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  __int64 v32; // [xsp+0h] [xbp-30h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o **v33; // [xsp+8h] [xbp-28h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_o *v34; // [xsp+18h] [xbp-18h] BYREF

  v34 = this;
  if ( (byte_596F034 & 1) == 0 )
  {
    sub_2213A60(&System_Uri_TypeInfo);
    byte_596F034 = 1;
  }
  _1__state = this->fields.__1__state;
  v32 = 0;
  v33 = &v34;
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    _4__this = this->fields.__4__this;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_2213CDC(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_2213CDC(IsNullOrEmpty, v29);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v34->fields._req_5__2,
      v34->fields.unityWebRequestWww,
      v30);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3____m__Finally1(v34, v31);
    return 0;
  }
  if ( _1__state )
    return 0;
  url = this->fields.url;
  this->fields.__1__state = -1;
  v5 = (System_Uri_o *)sub_2213CCC(System_Uri_TypeInfo);
  System_Uri___ctor(v5, url, 0);
  _86744428 = UnityEngine_Networking_UnityWebRequest__Get_86744428(v5, 0);
  v7 = v34;
  v34->fields._req_5__2 = _86744428;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v7->fields._req_5__2, (int32_t)_86744428, v8, v9, v10, v11, v12, v13);
  v15 = v34->fields._req_5__2;
  v34->fields.__1__state = -3;
  if ( !v15 )
    sub_2213CDC(0, v14);
  v16 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v15, 0);
  v17 = v34;
  v34->fields.__2__current = v16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->fields.__2__current, (int32_t)v16, v18, v19, v20, v21, v22, v23);
  result = 1;
  v34->fields.__1__state = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Get_d__3_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F035 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596F035 = 1;
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
      v7 = sub_224BC3C(req_5__2, System_IDisposable_TypeInfo, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  UnityEngine_Networking_UnityWebRequest_o *v16; // x0
  __int64 v17; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v19; // x0
  _BOOL8 v20; // x0
  __int64 v21; // x1
  const MethodInfo *v22; // x2
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  UnityEngine_Networking_UnityWebRequest_o *v24; // x19
  DelightWorks_Network_UnityWebRequestWWWSingleton_o *v25; // x20
  const MethodInfo *v26; // x2
  System_String_o *v27; // x0
  __int64 v28; // x1
  UnityEngine_Networking_UnityWebRequest_o *req_5__2; // x0
  System_String_o *error; // x0
  int64_t IsNullOrEmpty; // x0
  __int64 v32; // x1
  const MethodInfo *v33; // x3
  const MethodInfo *v34; // x1
  UnityEngine_Networking_UnityWebRequest_o *v35; // x0
  __int64 v36; // x1
  UnityEngine_Networking_UnityWebRequest_o *v37; // x0
  UnityEngine_Networking_UnityWebRequest_o *v38; // x0
  System_String_o *v39; // x0
  __int64 v40; // x1
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v42; // x0
  Il2CppObject *v43; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v44; // x0
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  __int64 v51; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v52; // [xsp+8h] [xbp-98h] BYREF
  __int64 v53; // [xsp+30h] [xbp-70h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o **v54; // [xsp+38h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v55; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_o *v56; // [xsp+68h] [xbp-38h] BYREF

  v56 = this;
  if ( (byte_596F038 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_2213A60(&System_Uri_TypeInfo);
    sub_2213A60(&StringLiteral_11736/*"Redirect limit exceeded"*/);
    byte_596F038 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v53 = 0;
  v54 = &v56;
  memset(&v55, 0, sizeof(v55));
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_2213CDC(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( (IsNullOrEmpty & 1) != 0 )
    {
      if ( !_4__this )
        sub_2213CDC(IsNullOrEmpty, v32);
    }
    else
    {
      v35 = v56->fields._req_5__2;
      if ( !v35 )
        sub_2213CDC(0, v32);
      IsNullOrEmpty = UnityEngine_Networking_UnityWebRequest__get_result(v35, 0);
      if ( (_DWORD)IsNullOrEmpty != 2 )
        goto LABEL_27;
      v37 = v56->fields._req_5__2;
      if ( !v37 )
        sub_2213CDC(0, v36);
      IsNullOrEmpty = UnityEngine_Networking_UnityWebRequest__get_responseCode(v37, 0);
      if ( IsNullOrEmpty != 303 )
        goto LABEL_27;
      v38 = v56->fields._req_5__2;
      if ( !v38 )
        sub_2213CDC(0, v36);
      v39 = UnityEngine_Networking_UnityWebRequest__get_error(v38, 0);
      if ( !v39 )
        sub_2213CDC(0, v40);
      IsNullOrEmpty = System_String__Contains(v39, (System_String_o *)StringLiteral_11736/*"Redirect limit exceeded"*/, 0);
      if ( (IsNullOrEmpty & 1) == 0 )
      {
LABEL_27:
        if ( !_4__this )
          sub_2213CDC(IsNullOrEmpty, v36);
        DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
          (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
          v56->fields._req_5__2,
          v56->fields.unityWebRequestWww,
          v33);
        goto LABEL_29;
      }
      if ( !_4__this )
        sub_2213CDC(IsNullOrEmpty, v36);
    }
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleNoRedirectRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v56->fields._req_5__2,
      v56->fields.unityWebRequestWww,
      v33);
LABEL_29:
    DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5____m__Finally1(v56, v34);
    goto LABEL_30;
  }
  if ( _1__state )
  {
LABEL_30:
    result = 0;
    goto LABEL_34;
  }
  url = this->fields.url;
  this->fields.__1__state = -1;
  v6 = (System_Uri_o *)sub_2213CCC(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v56->fields.postData, 0);
  v8 = v56;
  v56->fields._req_5__2 = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  v16 = v56->fields._req_5__2;
  v56->fields.__1__state = -3;
  if ( !v16 )
    sub_2213CDC(0, v15);
  UnityEngine_Networking_UnityWebRequest__set_redirectLimit(v16, 0, 0);
  headers = v56->fields.headers;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v19 = v56->fields.headers;
    if ( !v19 )
      sub_2213CDC(0, v17);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v52,
      (System_Collections_Generic_Dictionary_object__object__o *)v19,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v55 = v52;
    v52.fields._dictionary = 0;
    *(_QWORD *)&v52.fields._version = &v55;
    while ( 1 )
    {
      v20 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v55,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v20 )
        break;
      if ( !_4__this )
        sub_2213CDC(v20, v21);
      current = v55.fields._current;
      v24 = v56->fields._req_5__2;
      v25 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v20,
                                                                    (System_String_o *)v55.fields._current.fields.key,
                                                                    v22);
      v27 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
              v25,
              (System_String_o *)current.fields.value,
              v26);
      if ( !v24 )
        sub_2213CDC(v27, v28);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v24, (System_String_o *)v25, v27, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v55,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v42 = v56->fields._req_5__2;
  if ( !v42 )
    sub_2213CDC(0, v17);
  v43 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v42, 0);
  v44 = v56;
  v56->fields.__2__current = v43;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v44->fields.__2__current, (int32_t)v43, v45, v46, v47, v48, v49, v50);
  result = 1;
  v56->fields.__1__state = 1;
LABEL_34:
  v51 = v53;
  if ( v53 )
  {
    sub_200B7BC(&v54, method);
    sub_2213CD4(v51);
  }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__PostNoRedirect_d__5_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F039 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596F039 = 1;
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
      v7 = sub_224BC3C(req_5__2, System_IDisposable_TypeInfo, 0);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  __int64 v15; // x1
  struct System_Collections_Generic_Dictionary_string__string__o *headers; // x0
  struct System_Collections_Generic_Dictionary_string__string__o *v17; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  const MethodInfo *v20; // x2
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
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
  bool result; // w0
  UnityEngine_Networking_UnityWebRequest_o *v34; // x0
  Il2CppObject *v35; // x1
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v36; // x0
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  __int64 v43; // x19
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v44; // [xsp+8h] [xbp-98h] BYREF
  __int64 v45; // [xsp+30h] [xbp-70h]
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o **v46; // [xsp+38h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v47; // [xsp+40h] [xbp-60h] BYREF
  DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_o *v48; // [xsp+68h] [xbp-38h] BYREF

  v48 = this;
  if ( (byte_596F036 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__string__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_Enumerator_string__string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Key__);
    sub_2213A60(&Method_System_Collections_Generic_KeyValuePair_string__string__get_Value__);
    sub_2213A60(&System_Uri_TypeInfo);
    byte_596F036 = 1;
  }
  _1__state = this->fields.__1__state;
  _4__this = this->fields.__4__this;
  v45 = 0;
  v46 = &v48;
  memset(&v47, 0, sizeof(v47));
  if ( _1__state == 1 )
  {
    req_5__2 = this->fields._req_5__2;
    this->fields.__1__state = -3;
    if ( !req_5__2 )
      sub_2213CDC(0, method);
    error = UnityEngine_Networking_UnityWebRequest__get_error(req_5__2, 0);
    IsNullOrEmpty = System_String__IsNullOrEmpty(error, 0);
    if ( !_4__this )
      sub_2213CDC(IsNullOrEmpty, v30);
    DelightWorks_Network_UnityWebRequestWWWSingleton__HandleRequestResult(
      (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)IsNullOrEmpty,
      v48->fields._req_5__2,
      v48->fields.unityWebRequestWww,
      v31);
    DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4____m__Finally1(v48, v32);
    goto LABEL_16;
  }
  if ( _1__state )
  {
LABEL_16:
    result = 0;
    goto LABEL_20;
  }
  url = this->fields.url;
  this->fields.__1__state = -1;
  v6 = (System_Uri_o *)sub_2213CCC(System_Uri_TypeInfo);
  System_Uri___ctor(v6, url, 0);
  v7 = UnityEngine_Networking_UnityWebRequest__Post(v6, v48->fields.postData, 0);
  v8 = v48;
  v48->fields._req_5__2 = v7;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields._req_5__2, (int32_t)v7, v9, v10, v11, v12, v13, v14);
  headers = v48->fields.headers;
  v48->fields.__1__state = -3;
  if ( headers
    && System_Collections_Generic_Dictionary_object__object___get_Count(
         (System_Collections_Generic_Dictionary_object__object__o *)headers,
         (const MethodInfo_3FFD8C8 *)Method_System_Collections_Generic_Dictionary_string__string__get_Count__) >= 1 )
  {
    v17 = v48->fields.headers;
    if ( !v17 )
      sub_2213CDC(0, v15);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v44,
      (System_Collections_Generic_Dictionary_object__object__o *)v17,
      (const MethodInfo_3FFE044 *)Method_System_Collections_Generic_Dictionary_string__string__GetEnumerator__);
    v47 = v44;
    v44.fields._dictionary = 0;
    *(_QWORD *)&v44.fields._version = &v47;
    while ( 1 )
    {
      v18 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v47,
              (const MethodInfo_41690A0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__MoveNext__);
      if ( !v18 )
        break;
      if ( !_4__this )
        sub_2213CDC(v18, v19);
      current = v47.fields._current;
      v22 = v48->fields._req_5__2;
      v23 = (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
                                                                    (DelightWorks_Network_UnityWebRequestWWWSingleton_o *)v18,
                                                                    (System_String_o *)v47.fields._current.fields.key,
                                                                    v20);
      v25 = DelightWorks_Network_UnityWebRequestWWWSingleton__FilterNonAsciiChar(
              v23,
              (System_String_o *)current.fields.value,
              v24);
      if ( !v22 )
        sub_2213CDC(v25, v26);
      UnityEngine_Networking_UnityWebRequest__SetRequestHeader(v22, (System_String_o *)v23, v25, 0);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v47,
      (const MethodInfo_41691C0 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__string__Dispose__);
  }
  v34 = v48->fields._req_5__2;
  if ( !v34 )
    sub_2213CDC(0, v15);
  v35 = (Il2CppObject *)UnityEngine_Networking_UnityWebRequest__SendWebRequest(v34, 0);
  v36 = v48;
  v48->fields.__2__current = v35;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v36->fields.__2__current, (int32_t)v35, v37, v38, v39, v40, v41, v42);
  result = 1;
  v48->fields.__1__state = 1;
LABEL_20:
  v43 = v45;
  if ( v45 )
  {
    sub_200B79C(&v46, method);
    sub_2213CD4(v43);
  }
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_DelightWorks_Network_UnityWebRequestWWWSingleton__Post_d__4_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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

  if ( (byte_596F037 & 1) == 0 )
  {
    sub_2213A60(&System_IDisposable_TypeInfo);
    byte_596F037 = 1;
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
      v7 = sub_224BC3C(req_5__2, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(struct UnityEngine_Networking_UnityWebRequest_o *, _QWORD))v7)(
      req_5__2,
      *(_QWORD *)(v7 + 8));
  }
}


void DelightWorks_Network_UnityWebRequestWWWSingleton___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F033 & 1) == 0 )
  {
    sub_2213A60(&DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
    byte_596F033 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo);
  System_Object___ctor(v1, 0);
  DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields->__9 = (struct DelightWorks_Network_UnityWebRequestWWWSingleton___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)DelightWorks_Network_UnityWebRequestWWWSingleton___c_TypeInfo->static_fields,
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
  if ( (ch & 0xFF80) != 0 )
    return 63;
  else
    return ch;
}