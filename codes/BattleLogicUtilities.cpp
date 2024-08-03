void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_2E2A788 *method)
{
  __int64 v2; // x2
  System_Random_o *v5; // x19
  Il2CppObject *v6; // x0
  Il2CppObject *v7; // x22
  Il2CppClass *_0_T; // x21
  void *monitor; // x21
  UnityEngine_Vector3_array *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x0
  __int64 v13; // x1
  unsigned int max_length; // w10
  char *v15; // x8
  char *v16; // x8
  __int64 v17; // t1
  __int64 v18; // d1
  int v19; // s0
  char *v20; // x11
  char *v21; // x11
  __int64 v22; // t1
  int v23; // s3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v25; // x0
  const MethodInfo_2E2A8E4 *v26; // x1

  if ( !method->rgctx_data )
  {
    sub_1B640C8(&System_Random_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BB6000(method);
  }
  v5 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, method, v2);
  System_Random___ctor(v5, 0LL);
  if ( !list )
    goto LABEL_18;
  v6 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v6;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v6 = (Il2CppObject *)sub_1BB5FA4(method->rgctx_data->_0_T__);
    _0_T = (Il2CppClass *)v6;
  }
  if ( !v7 )
    goto LABEL_18;
  v6 = (Il2CppObject *)sub_1B64204(v7, _0_T);
  if ( v6 )
  {
    monitor = v6[1].monitor;
    v10 = (UnityEngine_Vector3_array *)v6;
    if ( (int)monitor < 2 )
      return v10;
    if ( v5 )
    {
      v11 = (unsigned int)v6[1].monitor + 1LL;
      do
      {
        v12 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._7_Next.method)(
                v5,
                (unsigned int)monitor,
                v5->klass->vtable._8_NextDouble.methodPtr);
        max_length = v10->max_length;
        if ( (unsigned int)v12 >= max_length )
          goto LABEL_17;
        v15 = (char *)v10 + 12 * (int)v12;
        v17 = *((_QWORD *)v15 + 4);
        v16 = v15 + 32;
        v18 = v17;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        v19 = *((_DWORD *)v16 + 2);
        if ( (unsigned int)monitor >= max_length
          || (v20 = (char *)v10 + 12 * (unsigned int)monitor,
              v22 = *((_QWORD *)v20 + 4),
              v21 = v20 + 32,
              v23 = *((_DWORD *)v21 + 2),
              *(_QWORD *)v16 = v22,
              *((_DWORD *)v16 + 2) = v23,
              (unsigned int)monitor >= v10->max_length) )
        {
LABEL_17:
          sub_1B6432C(v12, v13);
        }
        --v11;
        *(_QWORD *)v21 = v18;
        *((_DWORD *)v21 + 2) = v19;
      }
      while ( v11 > 2 );
      return v10;
    }
LABEL_18:
    sub_1B64324(v6);
  }
  sub_1B645E4(v7);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v25, v26);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2E2A8E4 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2E2A8E4_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *v10; // x0
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
  void *v23; // x23
  unsigned int v24; // w21
  _QWORD v26[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v27; // [xsp+10h] [xbp-30h]
  char *v28; // [xsp+18h] [xbp-28h]
  System_Random_o *v29; // [xsp+20h] [xbp-20h]
  __int64 v30; // [xsp+28h] [xbp-18h]
  void *v31; // [xsp+30h] [xbp-10h]
  __int64 v32; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v32 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B640C8(&System_Random_TypeInfo, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BB6000(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v28 = (char *)v26 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v28;
  v31 = v28;
  memset(v28, 0, native_size);
  v29 = (System_Random_o *)sub_1B64314(System_Random_TypeInfo, v8, v9);
  System_Random___ctor(v29, 0LL);
  if ( !list )
    goto LABEL_25;
  v10 = System_Array__Clone((System_Array_o *)list, 0LL);
  v11 = v10;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v10 = (Il2CppObject *)sub_1BB5FA4(method->rgctx_data->_0_T__);
    _0_T = (Il2CppClass *)v10;
  }
  v26[1] = StatusReg;
  if ( !v11 )
    goto LABEL_25;
  v10 = (Il2CppObject *)sub_1B64204(v11, _0_T);
  if ( !v10 )
    sub_1B645E4(v11);
  monitor = v10[1].monitor;
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v10;
  if ( (int)monitor >= 2 )
  {
    if ( v29 )
    {
      v15 = (unsigned int)v10[1].monitor + 1LL;
      v27 = (char *)v26 - ((native_size + 15) & 0x1FFFFFFF0LL);
      do
      {
        v30 = v15;
        v16 = v7;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v29->klass->vtable._7_Next.method)(
                          v29,
                          (unsigned int)monitor,
                          v29->klass->vtable._8_NextDouble.methodPtr);
        max_length = v14->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v20 = v28;
        v21 = (int)_1_T;
        thread_static_fields_size = v14->obj.klass->_2.thread_static_fields_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v28, (char *)v14->m_Items + thread_static_fields_size * (int)_1_T, native_size);
        _1_T = memcpy(v31, v20, native_size);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v7 = v16;
        _1_T = memcpy(v16, (char *)v14->m_Items + thread_static_fields_size * (unsigned int)monitor, native_size);
        if ( (unsigned int)v21 >= v14->max_length )
          goto LABEL_24;
        memcpy((char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v16, native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1BB5FA4(_1_T);
        v23 = v27;
        if ( (unsigned int)v21 >= v14->max_length )
          goto LABEL_24;
        sub_1B64070(_1_T, (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * v21, v7);
        _1_T = memcpy(v23, v31, native_size);
        v24 = v14->max_length;
        if ( (unsigned int)monitor >= v24 )
          goto LABEL_24;
        memcpy(
          (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v23,
          native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1BB5FA4(_1_T);
          v24 = v14->max_length;
        }
        if ( (unsigned int)monitor >= v24 )
LABEL_24:
          sub_1B6432C(_1_T, v18);
        sub_1B64070(
          _1_T,
          (char *)v14->m_Items + v14->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v23);
        v15 = v30 - 1;
      }
      while ( v30 - 1 > 2 );
      return v14;
    }
LABEL_25:
    sub_1B64324(v10);
  }
  return v14;
}