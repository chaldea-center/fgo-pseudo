void CriAudioWriteStream___ctor(
        CriAudioWriteStream_o *this,
        intptr_t callbackFunction,
        intptr_t callbackPointer,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._callbackFunction_k__BackingField = callbackFunction;
  this->fields._callbackPointer_k__BackingField = callbackPointer;
}


void CriAudioWriteStream___ctor_30845388(
        CriAudioWriteStream_o *this,
        CriAudioWriteStream_Delegate_o *callback,
        int32_t numChannels,
        int32_t bufferSize,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x0
  unsigned __int64 v14; // x21
  __int64 v15; // x23
  __int64 v16; // x24
  CriAudioWriteStream_InternalDelegate_o *v17; // x21
  const MethodInfo *v18; // x3
  Il2CppObject *internalDelegate; // x20

  if ( (byte_4C50154 & 1) == 0 )
  {
    sub_1C3E564(&CriAudioWriteStream_InternalDelegate_TypeInfo);
    sub_1C3E564(&Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioWriteStream_InternalDelegate___);
    sub_1C3E564(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_1C3E564(&float_____TypeInfo);
    sub_1C3E564(&float___TypeInfo);
    sub_1C3E564(&Method_CriAudioWriteStream___c__DisplayClass12_0___ctor_b__0__);
    sub_1C3E564(&CriAudioWriteStream___c__DisplayClass12_0_TypeInfo);
    byte_4C50154 = 1;
  }
  v9 = sub_1C3E7B0(CriAudioWriteStream___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  *(_DWORD *)(v9 + 16) = bufferSize;
  *(_DWORD *)(v9 + 20) = numChannels;
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C3E508(v9 + 24, callback);
  System_Object___ctor((Il2CppObject *)this, 0);
  v13 = sub_1C3E60C(float_____TypeInfo, *(unsigned int *)(v9 + 20));
  *(_QWORD *)(v9 + 32) = v13;
  sub_1C3E508(v9 + 32, v13);
  if ( *(int *)(v9 + 20) >= 1 )
  {
    v14 = 0;
    v15 = 32;
    while ( 1 )
    {
      v16 = *(_QWORD *)(v9 + 32);
      v10 = sub_1C3E60C(float___TypeInfo, *(unsigned int *)(v9 + 16));
      if ( !v16 )
        break;
      if ( v14 >= *(unsigned int *)(v16 + 24) )
        sub_1C3E7C8(v10, v11, v12);
      *(_QWORD *)(v16 + v15) = v10;
      sub_1C3E508(v16 + v15, v10);
      ++v14;
      v15 += 8;
      if ( (__int64)v14 >= *(int *)(v9 + 20) )
        goto LABEL_9;
    }
LABEL_12:
    sub_1C3E7C0(v10, v11, v12);
  }
LABEL_9:
  v17 = (CriAudioWriteStream_InternalDelegate_o *)sub_1C3E7B0(CriAudioWriteStream_InternalDelegate_TypeInfo);
  CriAudioWriteStream_InternalDelegate___ctor(
    v17,
    (Il2CppObject *)v9,
    Method_CriAudioWriteStream___c__DisplayClass12_0___ctor_b__0__,
    v18);
  this->fields.internalDelegate = v17;
  sub_1C3E508(&this->fields, v17);
  internalDelegate = (Il2CppObject *)this->fields.internalDelegate;
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  this->fields._callbackFunction_k__BackingField = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_(
                                                     internalDelegate,
                                                     (const MethodInfo_317B674 *)Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioWriteStream_InternalDelegate___);
}


intptr_t CriAudioWriteStream__get_callbackFunction(CriAudioWriteStream_o *this, const MethodInfo *method)
{
  return this->fields._callbackFunction_k__BackingField;
}


intptr_t CriAudioWriteStream__get_callbackPointer(CriAudioWriteStream_o *this, const MethodInfo *method)
{
  return this->fields._callbackPointer_k__BackingField;
}


void CriAudioWriteStream__set_callbackFunction(CriAudioWriteStream_o *this, intptr_t value, const MethodInfo *method)
{
  this->fields._callbackFunction_k__BackingField = value;
}


void CriAudioWriteStream__set_callbackPointer(CriAudioWriteStream_o *this, intptr_t value, const MethodInfo *method)
{
  this->fields._callbackPointer_k__BackingField = value;
}


void CriAudioWriteStream_Delegate___ctor(
        CriAudioWriteStream_Delegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  __int64 (__fastcall *v9)(); // x8
  Il2CppObject *m_target; // x9
  __int64 v11; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A774F0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A77514;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A77490;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *CriAudioWriteStream_Delegate__BeginInvoke(
        CriAudioWriteStream_Delegate_o *this,
        System_Single_array_array *buffer,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  uint32_t v14; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = numSamples;
  if ( (byte_4C50156 & 1) == 0 )
  {
    sub_1C3E564(&uint_TypeInfo);
    byte_4C50156 = 1;
  }
  v13[2] = 0;
  v13[0] = buffer;
  v13[1] = j_il2cpp_value_box_0(uint_TypeInfo, &v14, *(_QWORD *)&numSamples, callback, object, method, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v13, callback, object);
}


uint32_t CriAudioWriteStream_Delegate__EndInvoke(
        CriAudioWriteStream_Delegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2

  if ( !sub_1C3E51C(result, 0, method) )
    sub_1C3E7C0(0, v3, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


uint32_t CriAudioWriteStream_Delegate__Invoke(
        CriAudioWriteStream_Delegate_o *this,
        System_Single_array_array *buffer,
        uint32_t numSamples,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, System_Single_array_array *, uint32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           buffer,
           numSamples,
           this->fields.method);
}


void CriAudioWriteStream_InternalDelegate___ctor(
        CriAudioWriteStream_InternalDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C3E508(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C3E624(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3E7DC(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3E68C(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 3 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A77464;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A773FC;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *CriAudioWriteStream_InternalDelegate__BeginInvoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v7; // x7
  __int64 v11; // x2
  __int64 v12; // x3
  __int64 v13; // x4
  __int64 v14; // x5
  __int64 v15; // x6
  __int64 v16; // x7
  __int64 v17; // x2
  __int64 v18; // x3
  __int64 v19; // x4
  __int64 v20; // x5
  __int64 v21; // x6
  __int64 v22; // x7
  _QWORD v24[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v25; // [xsp+10h] [xbp-60h]
  uint32_t v26; // [xsp+24h] [xbp-4Ch] BYREF
  intptr_t v27; // [xsp+28h] [xbp-48h] BYREF
  intptr_t v28; // [xsp+38h] [xbp-38h] BYREF

  v28 = cbobj;
  v27 = data;
  v26 = numSamples;
  if ( (byte_4C50155 & 1) == 0 )
  {
    sub_1C3E564(&IntPtr_TypeInfo);
    sub_1C3E564(&uint_TypeInfo);
    byte_4C50155 = 1;
  }
  v25 = 0u;
  v24[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v28, data, *(_QWORD *)&numSamples, callback, object, method, v7);
  v24[1] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v27, v11, v12, v13, v14, v15, v16);
  *(_QWORD *)&v25 = j_il2cpp_value_box_0(uint_TypeInfo, &v26, v17, v18, v19, v20, v21, v22);
  return (System_IAsyncResult_o *)sub_1C3E518(this, v24, callback, object);
}


uint32_t CriAudioWriteStream_InternalDelegate__EndInvoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2

  if ( !sub_1C3E51C(result, 0, method) )
    sub_1C3E7C0(0, v3, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


uint32_t CriAudioWriteStream_InternalDelegate__Invoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t, intptr_t, uint32_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           cbobj,
           data,
           numSamples,
           this->fields.method);
}


void CriAudioWriteStream___c__DisplayClass12_0___ctor(
        CriAudioWriteStream___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t CriAudioWriteStream___c__DisplayClass12_0____ctor_b__0(
        CriAudioWriteStream___c__DisplayClass12_0_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        const MethodInfo *method)
{
  CriAudioWriteStream___c__DisplayClass12_0_o *v7; // x19
  unsigned __int64 v8; // x23
  int32_t Size; // w22
  struct System_Single_array_array *buffer; // x8
  struct CriAudioWriteStream_Delegate_o *callback; // x8

  v7 = this;
  if ( (byte_4C50157 & 1) == 0 )
  {
    this = (CriAudioWriteStream___c__DisplayClass12_0_o *)sub_1C3E564(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4C50157 = 1;
  }
  if ( numSamples > (__int64)v7->fields.bufferSize )
    numSamples = v7->fields.bufferSize;
  if ( v7->fields.numChannels >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Size = System_IntPtr__get_Size(0);
      if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
      this = (CriAudioWriteStream___c__DisplayClass12_0_o *)System_Runtime_InteropServices_Marshal__ReadIntPtr(
                                                              data,
                                                              Size * (int)v8,
                                                              0);
      buffer = v7->fields.buffer;
      if ( !buffer )
        break;
      if ( v8 >= LODWORD(buffer->max_length) )
        sub_1C3E7C8(this, cbobj, data);
      System_Runtime_InteropServices_Marshal__Copy_64319428((intptr_t)this, buffer->m_Items[v8++], 0, numSamples, 0);
      if ( (__int64)v8 >= v7->fields.numChannels )
        goto LABEL_12;
    }
LABEL_15:
    sub_1C3E7C0(this, cbobj, data);
  }
LABEL_12:
  callback = v7->fields.callback;
  if ( !callback )
    goto LABEL_15;
  return ((__int64 (__fastcall *)(intptr_t, struct System_Single_array_array *, _QWORD, intptr_t))callback->fields.invoke_impl)(
           callback->fields.method_code,
           v7->fields.buffer,
           numSamples,
           callback->fields.method);
}