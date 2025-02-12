void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_2F905A8 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  long double v7; // q0
  Il2CppObject *v8; // x22
  Il2CppClass *_0_T; // x21
  void *monitor; // x21
  UnityEngine_Vector3_array *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x0
  __int64 v14; // x1
  unsigned int max_length; // w10
  char *v16; // x8
  char *v17; // x8
  __int64 v18; // t1
  __int64 v19; // d1
  int v20; // s0
  char *v21; // x11
  char *v22; // x11
  __int64 v23; // t1
  int v24; // s3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v26; // x0
  const MethodInfo_2F90704 *v27; // x1

  if ( !method->rgctx_data )
  {
    sub_1C1ABD4(&System_Random_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1C6CB0C(method);
  }
  v4 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
  System_Random___ctor(v4, 0LL);
  if ( !list )
    goto LABEL_18;
  v5 = System_Array__Clone((System_Array_o *)list, 0LL);
  v8 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v5 = (Il2CppObject *)sub_1C6CAB0(v7);
    _0_T = (Il2CppClass *)v5;
  }
  if ( !v8 )
    goto LABEL_18;
  v5 = (Il2CppObject *)sub_1C1AD10(v8, _0_T);
  if ( v5 )
  {
    monitor = v5[1].monitor;
    v11 = (UnityEngine_Vector3_array *)v5;
    if ( (int)monitor < 2 )
      return v11;
    if ( v4 )
    {
      v12 = (unsigned int)v5[1].monitor + 1LL;
      do
      {
        v13 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._8_NextDouble.methodPtr);
        max_length = v11->max_length;
        if ( (unsigned int)v13 >= max_length )
          goto LABEL_17;
        v16 = (char *)v11 + 12 * (int)v13;
        v18 = *((_QWORD *)v16 + 4);
        v17 = v16 + 32;
        v19 = v18;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        v20 = *((_DWORD *)v17 + 2);
        if ( (unsigned int)monitor >= max_length
          || (v21 = (char *)v11 + 12 * (unsigned int)monitor,
              v23 = *((_QWORD *)v21 + 4),
              v22 = v21 + 32,
              v24 = *((_DWORD *)v22 + 2),
              *(_QWORD *)v17 = v23,
              *((_DWORD *)v17 + 2) = v24,
              (unsigned int)monitor >= v11->max_length) )
        {
LABEL_17:
          sub_1C1AE38(v13, v14);
        }
        --v12;
        *(_QWORD *)v22 = v19;
        *((_DWORD *)v22 + 2) = v20;
      }
      while ( v12 > 2 );
      return v11;
    }
LABEL_18:
    sub_1C1AE30(v5, v6);
  }
  sub_1C1B0F0(v8);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v26, v27);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2F90704 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2F90704_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  long double v10; // q0
  Il2CppObject *v11; // x28
  Il2CppClass *_0_T; // x27
  void *monitor; // x27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v14; // x26
  __int64 v15; // x8
  char *v16; // x23
  _BYTE *_1_T; // x0
  __int64 v18; // x1
  unsigned int max_length; // w19
  char *v20; // x22
  __int64 v21; // x21
  __int64 thread_static_fields_size; // x24
  long double v23; // q0
  void *v24; // x23
  unsigned int v25; // w21
  long double v26; // q0
  _QWORD v28[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v29; // [xsp+10h] [xbp-30h]
  char *v30; // [xsp+18h] [xbp-28h]
  System_Random_o *v31; // [xsp+20h] [xbp-20h]
  __int64 v32; // [xsp+28h] [xbp-18h]
  void *v33; // [xsp+30h] [xbp-10h]
  __int64 v34; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v34 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C1ABD4(&System_Random_TypeInfo, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C6CB0C(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v30 = (char *)v28 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v30;
  v33 = v30;
  memset(v30, 0, native_size);
  v31 = (System_Random_o *)sub_1C1AE20(System_Random_TypeInfo);
  System_Random___ctor(v31, 0LL);
  if ( !list )
    goto LABEL_25;
  v8 = System_Array__Clone((System_Array_o *)list, 0LL);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppObject *)sub_1C6CAB0(v10);
    _0_T = (Il2CppClass *)v8;
  }
  v28[1] = StatusReg;
  if ( !v11 )
    goto LABEL_25;
  v8 = (Il2CppObject *)sub_1C1AD10(v11, _0_T);
  if ( !v8 )
    sub_1C1B0F0(v11);
  monitor = v8[1].monitor;
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v8;
  if ( (int)monitor >= 2 )
  {
    if ( v31 )
    {
      v15 = (unsigned int)v8[1].monitor + 1LL;
      v29 = (char *)v28 - ((native_size + 15) & 0x1FFFFFFF0LL);
      do
      {
        v32 = v15;
        v16 = v7;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v31->klass->vtable._7_Next.method)(
                          v31,
                          (unsigned int)monitor,
                          v31->klass->vtable._8_NextDouble.methodPtr);
        max_length = v14->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v20 = v30;
        v21 = (int)_1_T;
        thread_static_fields_size = v14->obj.klass->_2.thread_static_fields_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v30, (char *)v14->m_Items + thread_static_fields_size * (int)_1_T, native_size);
        _1_T = memcpy(v33, v20, native_size);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v7 = v16;
        _1_T = memcpy(v16, (char *)v14->m_Items + thread_static_fields_size * (unsigned int)monitor, native_size);
        if ( (unsigned int)v21 >= v14->max_length )
          goto LABEL_24;
        memcpy((char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v16, native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1C6CAB0(v23);
        v24 = v29;
        if ( (unsigned int)v21 >= v14->max_length )
          goto LABEL_24;
        sub_1C1AB7C(_1_T, (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v7);
        _1_T = memcpy(v24, v33, native_size);
        v25 = v14->max_length;
        if ( (unsigned int)monitor >= v25 )
          goto LABEL_24;
        memcpy(
          (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v24,
          native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1C6CAB0(v26);
          v25 = v14->max_length;
        }
        if ( (unsigned int)monitor >= v25 )
LABEL_24:
          sub_1C1AE38(_1_T, v18);
        sub_1C1AB7C(
          _1_T,
          (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v24);
        v15 = v32 - 1;
      }
      while ( v32 - 1 > 2 );
      return v14;
    }
LABEL_25:
    sub_1C1AE30(v8, v9);
  }
  return v14;
}