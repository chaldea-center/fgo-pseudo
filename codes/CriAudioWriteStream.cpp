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


void CriAudioWriteStream___ctor_36987440(
        CriAudioWriteStream_o *this,
        CriAudioWriteStream_Delegate_o *callback,
        int32_t numChannels,
        int32_t bufferSize,
        const MethodInfo *method)
{
  __int64 v9; // x20
  __int64 v10; // x0
  __int64 v11; // x1
  __int64 v12; // x0
  unsigned __int64 v13; // x21
  __int64 v14; // x23
  __int64 v15; // x24
  CriAudioWriteStream_InternalDelegate_o *v16; // x21
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  Il2CppObject *internalDelegate; // x20

  if ( (byte_5969572 & 1) == 0 )
  {
    sub_2213A60(&CriAudioWriteStream_InternalDelegate_TypeInfo);
    sub_2213A60(&Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioWriteStream_InternalDelegate___);
    sub_2213A60(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_2213A60(&float_____TypeInfo);
    sub_2213A60(&float___TypeInfo);
    sub_2213A60(&Method_CriAudioWriteStream___c__DisplayClass12_0___ctor_b__0__);
    sub_2213A60(&CriAudioWriteStream___c__DisplayClass12_0_TypeInfo);
    byte_5969572 = 1;
  }
  v9 = sub_2213CCC(CriAudioWriteStream___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  *(_DWORD *)(v9 + 16) = bufferSize;
  *(_DWORD *)(v9 + 20) = numChannels;
  *(_QWORD *)(v9 + 24) = callback;
  sub_2213A04(v9 + 24, callback);
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = sub_2213B20(float_____TypeInfo, *(unsigned int *)(v9 + 20));
  *(_QWORD *)(v9 + 32) = v12;
  sub_2213A04(v9 + 32, v12);
  if ( *(int *)(v9 + 20) >= 1 )
  {
    v13 = 0;
    v14 = 32;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v9 + 32);
      v10 = sub_2213B20(float___TypeInfo, *(unsigned int *)(v9 + 16));
      if ( !v15 )
        break;
      if ( v13 >= *(unsigned int *)(v15 + 24) )
        sub_2213CE4(v10);
      *(_QWORD *)(v15 + v14) = v10;
      sub_2213A04(v15 + v14, v10);
      ++v13;
      v14 += 8;
      if ( (__int64)v13 >= *(int *)(v9 + 20) )
        goto LABEL_9;
    }
LABEL_12:
    sub_2213CDC(v10, v11);
  }
LABEL_9:
  v16 = (CriAudioWriteStream_InternalDelegate_o *)sub_2213CCC(CriAudioWriteStream_InternalDelegate_TypeInfo);
  CriAudioWriteStream_InternalDelegate___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_CriAudioWriteStream___c__DisplayClass12_0___ctor_b__0__,
    v17);
  this->fields.internalDelegate = v16;
  sub_2213A04(&this->fields, v16);
  internalDelegate = (Il2CppObject *)this->fields.internalDelegate;
  if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v18, v19);
  this->fields._callbackFunction_k__BackingField = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_(
                                                     internalDelegate,
                                                     (const MethodInfo_38E7DEC *)Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioWriteStream_InternalDelegate___);
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1FFC1A0;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1FFC1C0;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1FFC140;
}


System_IAsyncResult_o *CriAudioWriteStream_Delegate__BeginInvoke(
        CriAudioWriteStream_Delegate_o *this,
        System_Single_array_array *buffer,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-40h] BYREF
  uint32_t v11; // [xsp+1Ch] [xbp-24h] BYREF

  v11 = numSamples;
  v10[0] = buffer;
  v10[2] = 0;
  v10[1] = j_il2cpp_value_box_0(qword_5984350, &v11);
  return sub_2213A14(this, v10, callback, object);
}


uint32_t CriAudioWriteStream_Delegate__EndInvoke(
        CriAudioWriteStream_Delegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


uint32_t CriAudioWriteStream_Delegate__Invoke(
        CriAudioWriteStream_Delegate_o *this,
        System_Single_array_array *buffer,
        uint32_t numSamples,
        const MethodInfo *method)
{
  return ((uint32_t (__fastcall *)(intptr_t, System_Single_array_array *, uint32_t, intptr_t))this->fields.invoke_impl)(
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
  sub_2213A04(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FFC114;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FFC0AC;
}


System_IAsyncResult_o *CriAudioWriteStream_InternalDelegate__BeginInvoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-60h] BYREF
  __int128 v12; // [xsp+10h] [xbp-50h]
  uint32_t v13; // [xsp+24h] [xbp-3Ch] BYREF
  intptr_t v14; // [xsp+28h] [xbp-38h] BYREF
  intptr_t v15; // [xsp+38h] [xbp-28h] BYREF

  v15 = cbobj;
  v14 = data;
  v13 = numSamples;
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(qword_5984358, &v15);
  v11[1] = j_il2cpp_value_box_0(qword_5984358, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(qword_5984350, &v13);
  return sub_2213A14(this, v11, callback, object);
}


uint32_t CriAudioWriteStream_InternalDelegate__EndInvoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x3

  v3 = sub_2213A18(result, 0, method);
  if ( !v3 )
    sub_2213CDC(0, v4);
  return *(_DWORD *)j_il2cpp_object_unbox_0(v3, v4, v5, v6);
}


uint32_t CriAudioWriteStream_InternalDelegate__Invoke(
        CriAudioWriteStream_InternalDelegate_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        const MethodInfo *method)
{
  return ((uint32_t (__fastcall *)(intptr_t, intptr_t, intptr_t, uint32_t, intptr_t))this->fields.invoke_impl)(
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
  unsigned __int64 v8; // x24
  __int64 v9; // x1
  __int64 v10; // x2
  int32_t Size; // w22
  struct System_Single_array_array *buffer; // x8
  struct CriAudioWriteStream_Delegate_o *callback; // x8

  v7 = this;
  if ( (byte_5969573 & 1) == 0 )
  {
    this = (CriAudioWriteStream___c__DisplayClass12_0_o *)sub_2213A60(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_5969573 = 1;
  }
  if ( numSamples > (__int64)v7->fields.bufferSize )
    numSamples = v7->fields.bufferSize;
  if ( v7->fields.numChannels >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      Size = System_IntPtr__get_Size(0);
      if ( !*(&System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo, v9, v10);
      this = (CriAudioWriteStream___c__DisplayClass12_0_o *)System_Runtime_InteropServices_Marshal__ReadIntPtr(
                                                              data,
                                                              Size * (int)v8,
                                                              0);
      buffer = v7->fields.buffer;
      if ( !buffer )
        break;
      if ( v8 >= LODWORD(buffer->max_length) )
        sub_2213CE4(this);
      System_Runtime_InteropServices_Marshal__Copy_76323184((intptr_t)this, buffer->m_Items[v8++], 0, numSamples, 0);
      if ( (__int64)v8 >= v7->fields.numChannels )
        goto LABEL_12;
    }
LABEL_14:
    sub_2213CDC(this, cbobj);
  }
LABEL_12:
  callback = v7->fields.callback;
  if ( !callback )
    goto LABEL_14;
  return ((uint32_t (__fastcall *)(intptr_t, struct System_Single_array_array *, _QWORD, intptr_t))callback->fields.invoke_impl)(
           callback->fields.method_code,
           v7->fields.buffer,
           numSamples,
           callback->fields.method);
}