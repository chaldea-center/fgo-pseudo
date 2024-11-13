void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_2F03DA8 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  System_Random_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  long double v9; // q0
  Il2CppObject *v10; // x22
  Il2CppClass *_0_T; // x21
  void *monitor; // x21
  UnityEngine_Vector3_array *v13; // x20
  __int64 v14; // x22
  __int64 v15; // x0
  __int64 v16; // x1
  unsigned int max_length; // w10
  char *v18; // x8
  char *v19; // x8
  __int64 v20; // t1
  __int64 v21; // d1
  int v22; // s0
  char *v23; // x11
  char *v24; // x11
  __int64 v25; // t1
  int v26; // s3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v28; // x0
  const MethodInfo_2F03F04 *v29; // x1

  if ( !method->rgctx_data )
  {
    sub_1BCA7E0(&System_Random_TypeInfo, method, v2);
    if ( !method->rgctx_data )
      sub_1C1C718(method, method);
  }
  v6 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, method, v2, v3);
  System_Random___ctor(v6, 0LL);
  if ( !list )
    goto LABEL_18;
  v7 = System_Array__Clone((System_Array_o *)list, 0LL);
  v10 = v7;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v7 = (Il2CppObject *)sub_1C1C6BC(v9);
    _0_T = (Il2CppClass *)v7;
  }
  if ( !v10 )
    goto LABEL_18;
  v7 = (Il2CppObject *)sub_1BCA91C(v10, _0_T);
  if ( v7 )
  {
    monitor = v7[1].monitor;
    v13 = (UnityEngine_Vector3_array *)v7;
    if ( (int)monitor < 2 )
      return v13;
    if ( v6 )
    {
      v14 = (unsigned int)v7[1].monitor + 1LL;
      do
      {
        v15 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._7_Next.method)(
                v6,
                (unsigned int)monitor,
                v6->klass->vtable._8_NextDouble.methodPtr);
        max_length = v13->max_length;
        if ( (unsigned int)v15 >= max_length )
          goto LABEL_17;
        v18 = (char *)v13 + 12 * (int)v15;
        v20 = *((_QWORD *)v18 + 4);
        v19 = v18 + 32;
        v21 = v20;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        v22 = *((_DWORD *)v19 + 2);
        if ( (unsigned int)monitor >= max_length
          || (v23 = (char *)v13 + 12 * (unsigned int)monitor,
              v25 = *((_QWORD *)v23 + 4),
              v24 = v23 + 32,
              v26 = *((_DWORD *)v24 + 2),
              *(_QWORD *)v19 = v25,
              *((_DWORD *)v19 + 2) = v26,
              (unsigned int)monitor >= v13->max_length) )
        {
LABEL_17:
          sub_1BCAA44(v15, v16);
        }
        --v14;
        *(_QWORD *)v24 = v21;
        *((_DWORD *)v24 + 2) = v22;
      }
      while ( v14 > 2 );
      return v13;
    }
LABEL_18:
    sub_1BCAA3C(v7, v8);
  }
  sub_1BCACFC(v10);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v28, v29);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *__fastcall BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_2F03F04 *method)
{
  __int64 v2; // x2
  unsigned __int64 StatusReg; // x19
  const MethodInfo_2F03F04_RGCTXs *rgctx_data; // x8
  __int64 v7; // x1
  __int64 native_size; // x20
  char *v9; // x22
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  Il2CppObject *v13; // x0
  __int64 v14; // x1
  long double v15; // q0
  Il2CppObject *v16; // x28
  Il2CppClass *_0_T; // x27
  void *monitor; // x27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v19; // x26
  __int64 v20; // x8
  char *v21; // x23
  _BYTE *_1_T; // x0
  __int64 v23; // x1
  unsigned int max_length; // w19
  char *v25; // x22
  __int64 v26; // x21
  __int64 thread_static_fields_size; // x24
  long double v28; // q0
  void *v29; // x23
  unsigned int v30; // w21
  long double v31; // q0
  _QWORD v33[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v34; // [xsp+10h] [xbp-30h]
  char *v35; // [xsp+18h] [xbp-28h]
  System_Random_o *v36; // [xsp+20h] [xbp-20h]
  __int64 v37; // [xsp+28h] [xbp-18h]
  void *v38; // [xsp+30h] [xbp-10h]
  __int64 v39; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(ARM64_SYSREG(3, 3, 13, 0, 2));
  v39 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1BCA7E0(&System_Random_TypeInfo, method, v2);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C1C718(method, v7);
      rgctx_data = method->rgctx_data;
    }
  }
  native_size = (unsigned int)rgctx_data->_1_T->_2.native_size;
  v35 = (char *)v33 - ((native_size + 15) & 0x1FFFFFFF0LL);
  v9 = v35;
  v38 = v35;
  memset(v35, 0, native_size);
  v36 = (System_Random_o *)sub_1BCAA2C(System_Random_TypeInfo, v10, v11, v12);
  System_Random___ctor(v36, 0LL);
  if ( !list )
    goto LABEL_25;
  v13 = System_Array__Clone((System_Array_o *)list, 0LL);
  v16 = v13;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
  {
    v13 = (Il2CppObject *)sub_1C1C6BC(v15);
    _0_T = (Il2CppClass *)v13;
  }
  v33[1] = StatusReg;
  if ( !v16 )
    goto LABEL_25;
  v13 = (Il2CppObject *)sub_1BCA91C(v16, _0_T);
  if ( !v13 )
    sub_1BCACFC(v16);
  monitor = v13[1].monitor;
  v19 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v13;
  if ( (int)monitor >= 2 )
  {
    if ( v36 )
    {
      v20 = (unsigned int)v13[1].monitor + 1LL;
      v34 = (char *)v33 - ((native_size + 15) & 0x1FFFFFFF0LL);
      do
      {
        v37 = v20;
        v21 = v9;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v36->klass->vtable._7_Next.method)(
                          v36,
                          (unsigned int)monitor,
                          v36->klass->vtable._8_NextDouble.methodPtr);
        max_length = v19->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v25 = v35;
        v26 = (int)_1_T;
        thread_static_fields_size = v19->obj.klass->_2.thread_static_fields_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v35, (char *)v19->m_Items + thread_static_fields_size * (int)_1_T, native_size);
        _1_T = memcpy(v38, v25, native_size);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v9 = v21;
        _1_T = memcpy(v21, (char *)v19->m_Items + thread_static_fields_size * (unsigned int)monitor, native_size);
        if ( (unsigned int)v26 >= v19->max_length )
          goto LABEL_24;
        memcpy((char *)v19->m_Items + v19->obj.klass->_2.thread_static_fields_size * v26, v21, native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1C1C6BC(v28);
        v29 = v34;
        if ( (unsigned int)v26 >= v19->max_length )
          goto LABEL_24;
        sub_1BCA788(_1_T, (char *)v19->m_Items + v19->obj.klass->_2.thread_static_fields_size * v26, v9);
        _1_T = memcpy(v29, v38, native_size);
        v30 = v19->max_length;
        if ( (unsigned int)monitor >= v30 )
          goto LABEL_24;
        memcpy(
          (char *)v19->m_Items + v19->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v29,
          native_size);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1C1C6BC(v31);
          v30 = v19->max_length;
        }
        if ( (unsigned int)monitor >= v30 )
LABEL_24:
          sub_1BCAA44(_1_T, v23);
        sub_1BCA788(
          _1_T,
          (char *)v19->m_Items + v19->obj.klass->_2.thread_static_fields_size * (unsigned __int64)(unsigned int)monitor,
          v29);
        v20 = v37 - 1;
      }
      while ( v37 - 1 > 2 );
      return v19;
    }
LABEL_25:
    sub_1BCAA3C(v13, v14);
  }
  return v19;
}