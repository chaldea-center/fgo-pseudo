void CriAudioReadStream___ctor(
        CriAudioReadStream_o *this,
        intptr_t callbackFunction,
        intptr_t callbackPointer,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields._callbackFunction_k__BackingField = callbackFunction;
  this->fields._callbackPointer_k__BackingField = callbackPointer;
}


void CriAudioReadStream___ctor_31046296(
        CriAudioReadStream_o *this,
        CriAudioReadStream_Delegate_o *callback,
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
  CriAudioReadStream_InternalDelegate_o *v16; // x21
  const MethodInfo *v17; // x3
  Il2CppObject *internalDelegate; // x20

  if ( (byte_4CC0790 & 1) == 0 )
  {
    sub_1C713B0(&CriAudioReadStream_InternalDelegate_TypeInfo);
    sub_1C713B0(&Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioReadStream_InternalDelegate___);
    sub_1C713B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    sub_1C713B0(&float_____TypeInfo);
    sub_1C713B0(&float___TypeInfo);
    sub_1C713B0(&Method_CriAudioReadStream___c__DisplayClass12_0___ctor_b__0__);
    sub_1C713B0(&CriAudioReadStream___c__DisplayClass12_0_TypeInfo);
    byte_4CC0790 = 1;
  }
  v9 = sub_1C715FC(CriAudioReadStream___c__DisplayClass12_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    goto LABEL_12;
  *(_DWORD *)(v9 + 16) = bufferSize;
  *(_QWORD *)(v9 + 24) = callback;
  sub_1C71354(v9 + 24, callback);
  *(_DWORD *)(v9 + 32) = numChannels;
  System_Object___ctor((Il2CppObject *)this, 0);
  v12 = sub_1C71458(float_____TypeInfo, *(unsigned int *)(v9 + 32));
  *(_QWORD *)(v9 + 40) = v12;
  sub_1C71354(v9 + 40, v12);
  if ( *(int *)(v9 + 32) >= 1 )
  {
    v13 = 0;
    v14 = 32;
    while ( 1 )
    {
      v15 = *(_QWORD *)(v9 + 40);
      v10 = sub_1C71458(float___TypeInfo, *(unsigned int *)(v9 + 16));
      if ( !v15 )
        break;
      if ( v13 >= *(unsigned int *)(v15 + 24) )
        sub_1C71610(v10);
      *(_QWORD *)(v15 + v14) = v10;
      sub_1C71354(v15 + v14, v10);
      ++v13;
      v14 += 8;
      if ( (__int64)v13 >= *(int *)(v9 + 32) )
        goto LABEL_9;
    }
LABEL_12:
    sub_1C71608(v10, v11);
  }
LABEL_9:
  v16 = (CriAudioReadStream_InternalDelegate_o *)sub_1C715FC(CriAudioReadStream_InternalDelegate_TypeInfo);
  CriAudioReadStream_InternalDelegate___ctor(
    v16,
    (Il2CppObject *)v9,
    Method_CriAudioReadStream___c__DisplayClass12_0___ctor_b__0__,
    v17);
  this->fields.internalDelegate = v16;
  sub_1C71354(&this->fields, v16);
  internalDelegate = (Il2CppObject *)this->fields.internalDelegate;
  if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
  this->fields._callbackFunction_k__BackingField = System_Runtime_InteropServices_Marshal__GetFunctionPointerForDelegate_object_(
                                                     internalDelegate,
                                                     (const MethodInfo_31CD478 *)Method_System_Runtime_InteropServices_Marshal_GetFunctionPointerForDelegate_CriAudioReadStream_InternalDelegate___);
}


intptr_t CriAudioReadStream__get_callbackFunction(CriAudioReadStream_o *this, const MethodInfo *method)
{
  return this->fields._callbackFunction_k__BackingField;
}


intptr_t CriAudioReadStream__get_callbackPointer(CriAudioReadStream_o *this, const MethodInfo *method)
{
  return this->fields._callbackPointer_k__BackingField;
}


void CriAudioReadStream__set_callbackFunction(CriAudioReadStream_o *this, intptr_t value, const MethodInfo *method)
{
  this->fields._callbackFunction_k__BackingField = value;
}


void CriAudioReadStream__set_callbackPointer(CriAudioReadStream_o *this, intptr_t value, const MethodInfo *method)
{
  this->fields._callbackPointer_k__BackingField = value;
}


void CriAudioReadStream_Delegate___ctor(
        CriAudioReadStream_Delegate_o *this,
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( v8 == 1 )
    {
      v9 = sub_1A9B2B4;
      goto LABEL_6;
    }
    if ( !object )
    {
      v11 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v11, 0);
    }
LABEL_8:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_9;
  }
  if ( v8 != 2 )
    goto LABEL_8;
  v9 = sub_1A9B2D8;
LABEL_6:
  this->fields.invoke_impl = (intptr_t)v9;
LABEL_9:
  this->fields.extra_arg = (intptr_t)sub_1A9B254;
}


System_IAsyncResult_o *CriAudioReadStream_Delegate__BeginInvoke(
        CriAudioReadStream_Delegate_o *this,
        System_Single_array_array *buffer,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  uint32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v12 = numSamples;
  if ( (byte_4CC0792 & 1) == 0 )
  {
    sub_1C713B0(&uint_TypeInfo);
    byte_4CC0792 = 1;
  }
  v11[2] = 0;
  v11[0] = buffer;
  v11[1] = j_il2cpp_value_box_0(uint_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


uint32_t CriAudioReadStream_Delegate__EndInvoke(
        CriAudioReadStream_Delegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C71368(result, 0, method) )
    sub_1C71608(0, v3);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


uint32_t CriAudioReadStream_Delegate__Invoke(
        CriAudioReadStream_Delegate_o *this,
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


void CriAudioReadStream_InternalDelegate___ctor(
        CriAudioReadStream_InternalDelegate_o *this,
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
  sub_1C71354(&this->fields.m_target, object);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C71470(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C71624(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C714D8(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A9B228;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9B1C0;
}


System_IAsyncResult_o *CriAudioReadStream_InternalDelegate__BeginInvoke(
        CriAudioReadStream_InternalDelegate_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[2]; // [xsp+0h] [xbp-70h] BYREF
  __int128 v12; // [xsp+10h] [xbp-60h]
  uint32_t v13; // [xsp+24h] [xbp-4Ch] BYREF
  intptr_t v14; // [xsp+28h] [xbp-48h] BYREF
  intptr_t v15; // [xsp+38h] [xbp-38h] BYREF

  v15 = cbobj;
  v14 = data;
  v13 = numSamples;
  if ( (byte_4CC0791 & 1) == 0 )
  {
    sub_1C713B0(&IntPtr_TypeInfo);
    sub_1C713B0(&uint_TypeInfo);
    byte_4CC0791 = 1;
  }
  v12 = 0u;
  v11[0] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v15);
  v11[1] = j_il2cpp_value_box_0(IntPtr_TypeInfo, &v14);
  *(_QWORD *)&v12 = j_il2cpp_value_box_0(uint_TypeInfo, &v13);
  return (System_IAsyncResult_o *)sub_1C71364(this, v11, callback, object);
}


uint32_t CriAudioReadStream_InternalDelegate__EndInvoke(
        CriAudioReadStream_InternalDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C71368(result, 0, method) )
    sub_1C71608(0, v3);
  return *(_DWORD *)j_il2cpp_object_unbox_0();
}


uint32_t CriAudioReadStream_InternalDelegate__Invoke(
        CriAudioReadStream_InternalDelegate_o *this,
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


void CriAudioReadStream___c__DisplayClass12_0___ctor(
        CriAudioReadStream___c__DisplayClass12_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


uint32_t CriAudioReadStream___c__DisplayClass12_0____ctor_b__0(
        CriAudioReadStream___c__DisplayClass12_0_o *this,
        intptr_t cbobj,
        intptr_t data,
        uint32_t numSamples,
        const MethodInfo *method)
{
  CriAudioReadStream___c__DisplayClass12_0_o *v7; // x20
  struct CriAudioReadStream_Delegate_o *callback; // x8
  __int64 bufferSize; // x9
  __int64 v10; // x2
  uint32_t v11; // w21
  unsigned __int64 v12; // x24
  struct System_Single_array_array *buffer; // x8
  System_Single_array *v14; // x22
  int32_t Size; // w23
  intptr_t IntPtr; // x0

  v7 = this;
  if ( (byte_4CC0793 & 1) == 0 )
  {
    this = (CriAudioReadStream___c__DisplayClass12_0_o *)sub_1C713B0(&System_Runtime_InteropServices_Marshal_TypeInfo);
    byte_4CC0793 = 1;
  }
  callback = v7->fields.callback;
  if ( !callback )
    goto LABEL_15;
  bufferSize = v7->fields.bufferSize;
  if ( numSamples <= bufferSize )
    v10 = numSamples;
  else
    v10 = (unsigned int)bufferSize;
  this = (CriAudioReadStream___c__DisplayClass12_0_o *)((__int64 (__fastcall *)(intptr_t, struct System_Single_array_array *, __int64, intptr_t, const MethodInfo *))callback->fields.invoke_impl)(
                                                         callback->fields.method_code,
                                                         v7->fields.buffer,
                                                         v10,
                                                         callback->fields.method,
                                                         method);
  v11 = (unsigned int)this;
  if ( v7->fields.numChannels >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      buffer = v7->fields.buffer;
      if ( !buffer )
        break;
      if ( v12 >= LODWORD(buffer->max_length) )
        sub_1C71610(this);
      v14 = buffer->m_Items[v12];
      Size = System_IntPtr__get_Size(0);
      if ( !System_Runtime_InteropServices_Marshal_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_Runtime_InteropServices_Marshal_TypeInfo);
      IntPtr = System_Runtime_InteropServices_Marshal__ReadIntPtr(data, Size * (int)v12, 0);
      System_Runtime_InteropServices_Marshal__Copy_64712848(v14, 0, IntPtr, v11, 0);
      if ( (__int64)++v12 >= v7->fields.numChannels )
        return v11;
    }
LABEL_15:
    sub_1C71608(this, cbobj);
  }
  return v11;
}