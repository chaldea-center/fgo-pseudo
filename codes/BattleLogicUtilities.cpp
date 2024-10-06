void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_2E7F5B8 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
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
  const MethodInfo_2E7F714 *v26; // x1

  if ( !method->rgctx_data )
  {
    sub_1B90010(&System_Random_TypeInfo, method);
    if ( !method->rgctx_data )
      sub_1BE1F48(method);
  }
  v4 = (System_Random_o *)sub_1B9025C(System_Random_TypeInfo);
  System_Random___ctor(v4, 0LL);
  if ( !list )
    goto LABEL_18;
  v5 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v5 = (Il2CppObject *)sub_1BE1EEC(method->rgctx_data->_0_T__);
    _0_T = (Il2CppClass *)v5;
  }
  if ( !v7 )
    goto LABEL_18;
  v5 = (Il2CppObject *)sub_1B9014C(v7, _0_T);
  if ( v5 )
  {
    monitor = v5[1].monitor;
    v10 = (UnityEngine_Vector3_array *)v5;
    if ( (int)monitor < 2 )
      return v10;
    if ( v4 )
    {
      v11 = (unsigned int)v5[1].monitor + 1LL;
      do
      {
        v12 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._8_NextDouble.methodPtr);
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
          sub_1B90274(v12, v13);
        }
        --v11;
        *(_QWORD *)v21 = v18;
        *((_DWORD *)v21 + 2) = v19;
      }
      while ( v11 > 2 );
      return v10;
    }
LABEL_18:
    sub_1B9026C(v5, v6);
  }
  sub_1B9052C(v7);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v25, v26);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2E7F714 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2E7F714_RGCTXs *rgctx_data; // x8
  __int64 native_size; // x20
  char *v7; // x22
  Il2CppObject *v8; // x0
  __int64 v9; // x1
  Il2CppObject *v10; // x28
  Il2CppClass *_0_T; // x27
  void *monitor; // x27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v13; // x26
  __int64 v14; // x8
  char *v15; // x23
  _BYTE *_1_T; // x0
  __int64 v17; // x1
  unsigned int max_length; // w19
  char *v19; // x22
  __int64 v20; // x21
  __int64 thread_static_fields_size; // x24
  void *v22; // x23
  unsigned int v23; // w21
  _QWORD v25[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v26; // [xsp+10h] [xbp-30h]
  char *v27; // [xsp+18h] [xbp-28h]
  System_Random_o *v28; // [xsp+20h] [xbp-20h]
  __int64 v29; // [xsp+28h] [xbp-18h]
  void *v30; // [xsp+30h] [xbp-10h]
  __int64 v31; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v31 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1B90010(&System_Random_TypeInfo, method);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1BE1F48(method);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v27 = (char *)v25 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v7 = v27;
  v30 = v27;
  memset(v27, 0, native_size);
  v28 = (System_Random_o *)sub_1B9025C(System_Random_TypeInfo);
  System_Random___ctor(v28, 0LL);
  if ( !list )
    goto LABEL_25;
  v8 = System_Array__Clone((System_Array_o *)list, 0LL);
  v10 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v8 = (Il2CppObject *)sub_1BE1EEC(method->rgctx_data->_0_T__);
    _0_T = (Il2CppClass *)v8;
  }
  v25[1] = StatusReg;
  if ( !v10 )
    goto LABEL_25;
  v8 = (Il2CppObject *)sub_1B9014C(v10, _0_T);
  if ( !v8 )
    sub_1B9052C(v10);
  monitor = v8[1].monitor;
  v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v8;
  if ( (int)monitor >= 2 )
  {
    if ( v28 )
    {
      v14 = (unsigned int)v8[1].monitor + 1LL;
      v26 = (char *)v25 - ((native_size + 15) & 0x1FFFFFFF0LL);
      do
      {
        v29 = v14;
        v15 = v7;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v28->klass->vtable._7_Next.method)(
                          v28,
                          (unsigned int)monitor,
                          v28->klass->vtable._8_NextDouble.methodPtr);
        max_length = v13->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v19 = v27;
        v20 = (int)_1_T;
        thread_static_fields_size = v13->obj.klass->_2.thread_static_fields_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v27, (char *)v13->m_Items + thread_static_fields_size * (int)_1_T, native_size);
        _1_T = memcpy(v30, v19, native_size);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v7 = v15;
        _1_T = memcpy(v15, (char *)v13->m_Items + thread_static_fields_size * (unsigned int)monitor, native_size);
        if ( (unsigned int)v20 >= v13->max_length )
          goto LABEL_24;
        memcpy((char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * v20, v15, native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1BE1EEC(_1_T);
        v22 = v26;
        if ( (unsigned int)v20 >= v13->max_length )
          goto LABEL_24;
        sub_1B8FFB8(_1_T, (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * v20, v7);
        _1_T = memcpy(v22, v30, native_size);
        v23 = v13->max_length;
        if ( (unsigned int)monitor >= v23 )
          goto LABEL_24;
        memcpy(
          (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v22,
          native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1BE1EEC(_1_T);
          v23 = v13->max_length;
        }
        if ( (unsigned int)monitor >= v23 )
LABEL_24:
          sub_1B90274(_1_T, v17);
        sub_1B8FFB8(
          _1_T,
          (char *)v13->m_Items + v13->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v22);
        v14 = v29 - 1;
      }
      while ( v29 - 1 > 2 );
      return v13;
    }
LABEL_25:
    sub_1B9026C(v8, v9);
  }
  return v13;
}