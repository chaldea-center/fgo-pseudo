void BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_array *BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_30D8748 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  long double v6; // q0
  Il2CppObject *v7; // x22
  Il2CppClass *_0_T; // x21
  void *monitor; // x21
  Il2CppObject *v10; // x20
  __int64 v11; // x22
  __int64 v12; // x0
  unsigned int v13; // w10
  char *v14; // x8
  char *v15; // x8
  __int64 v16; // t1
  __int64 v17; // d1
  int v18; // s0
  char *v19; // x11
  char *v20; // x11
  __int64 v21; // t1
  int v22; // s3
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v24; // x0
  const MethodInfo_30D88A4 *v25; // x1

  if ( !method->rgctx_data )
  {
    sub_1C37058(&System_Random_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C877C8(method);
  }
  v4 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
  System_Random___ctor(v4, 0);
  if ( !list )
    goto LABEL_18;
  v5 = System_Array__Clone((System_Array_o *)list, 0);
  v7 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v5 = (Il2CppObject *)sub_1C8776C(v6);
    _0_T = (Il2CppClass *)v5;
  }
  if ( !v7 )
    goto LABEL_18;
  v5 = (Il2CppObject *)sub_1C37194(v7, _0_T);
  if ( v5 )
  {
    monitor = v5[1].monitor;
    v10 = v5;
    if ( (int)monitor < 2 )
      return (UnityEngine_Vector3_array *)v10;
    if ( v4 )
    {
      v11 = (unsigned int)v5[1].monitor + 1LL;
      do
      {
        v12 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v4->klass->vtable._7_Next.methodPtr)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._7_Next.method);
        v13 = (unsigned int)v10[1].monitor;
        if ( (unsigned int)v12 >= v13 )
          goto LABEL_17;
        v14 = (char *)v10 + 12 * (int)v12;
        v16 = *((_QWORD *)v14 + 4);
        v15 = v14 + 32;
        v17 = v16;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        v18 = *((_DWORD *)v15 + 2);
        if ( (unsigned int)monitor >= v13
          || (v19 = (char *)v10 + 12 * (unsigned int)monitor,
              v21 = *((_QWORD *)v19 + 4),
              v20 = v19 + 32,
              v22 = *((_DWORD *)v20 + 2),
              *(_QWORD *)v15 = v21,
              *((_DWORD *)v15 + 2) = v22,
              (unsigned int)monitor >= LODWORD(v10[1].monitor)) )
        {
LABEL_17:
          sub_1C372BC(v12);
        }
        --v11;
        *(_QWORD *)v20 = v17;
        *((_DWORD *)v20 + 2) = v18;
      }
      while ( v11 > 2 );
      return (UnityEngine_Vector3_array *)v10;
    }
LABEL_18:
    sub_1C372B4(v5);
  }
  sub_1C37574(v7);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v24, v25);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_30D88A4 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_30D88A4_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  char *v7; // x22
  Il2CppObject *v8; // x0
  long double v9; // q0
  Il2CppObject *v10; // x28
  Il2CppClass *_0_T; // x27
  void *monitor; // x27
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v13; // x26
  __int64 v14; // x8
  char *v15; // x23
  _BYTE *_1_T; // x0
  unsigned int max_length; // w19
  char *v18; // x22
  __int64 v19; // x21
  __int64 native_size; // x24
  long double v21; // q0
  void *v22; // x23
  unsigned int v23; // w21
  long double v24; // q0
  _QWORD v26[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v27; // [xsp+10h] [xbp-30h]
  char *v28; // [xsp+18h] [xbp-28h]
  System_Random_o *v29; // [xsp+20h] [xbp-20h]
  __int64 v30; // [xsp+28h] [xbp-18h]
  void *v31; // [xsp+30h] [xbp-10h]
  __int64 v32; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v32 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C37058(&System_Random_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C877C8(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v28 = (char *)v26 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v28;
  v31 = v28;
  memset(v28, 0, actualSize);
  v29 = (System_Random_o *)sub_1C372A4(System_Random_TypeInfo);
  System_Random___ctor(v29, 0);
  if ( !list )
    goto LABEL_25;
  v8 = System_Array__Clone((System_Array_o *)list, 0);
  v10 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v8 = (Il2CppObject *)sub_1C8776C(v9);
    _0_T = (Il2CppClass *)v8;
  }
  v26[1] = StatusReg;
  if ( !v10 )
    goto LABEL_25;
  v8 = (Il2CppObject *)sub_1C37194(v10, _0_T);
  if ( !v8 )
    sub_1C37574(v10);
  monitor = v8[1].monitor;
  v13 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v8;
  if ( (int)monitor >= 2 )
  {
    if ( v29 )
    {
      v14 = (unsigned int)v8[1].monitor + 1LL;
      v27 = (char *)v26 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      do
      {
        v30 = v14;
        v15 = v7;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v29->klass->vtable._7_Next.methodPtr)(
                          v29,
                          (unsigned int)monitor,
                          v29->klass->vtable._7_Next.method);
        max_length = v13->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v18 = v28;
        v19 = (int)_1_T;
        native_size = (unsigned int)v13->obj.klass->_2.native_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v28, (char *)v13->m_Items + native_size * (int)_1_T, actualSize);
        _1_T = memcpy(v31, v18, actualSize);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v7 = v15;
        _1_T = memcpy(v15, (char *)v13->m_Items + native_size * (unsigned int)monitor, actualSize);
        if ( (unsigned int)v19 >= LODWORD(v13->max_length) )
          goto LABEL_24;
        memcpy((char *)v13->m_Items + (unsigned int)v13->obj.klass->_2.native_size * v19, v15, actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1C8776C(v21);
        v22 = v27;
        if ( (unsigned int)v19 >= LODWORD(v13->max_length) )
          goto LABEL_24;
        sub_1C37000(_1_T, (char *)v13->m_Items + (unsigned int)v13->obj.klass->_2.native_size * v19, v7);
        _1_T = memcpy(v22, v31, actualSize);
        v23 = v13->max_length;
        if ( (unsigned int)monitor >= v23 )
          goto LABEL_24;
        memcpy(
          (char *)v13->m_Items + (unsigned int)v13->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)monitor,
          v22,
          actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1C8776C(v24);
          v23 = v13->max_length;
        }
        if ( (unsigned int)monitor >= v23 )
LABEL_24:
          sub_1C372BC(_1_T);
        sub_1C37000(
          _1_T,
          (char *)v13->m_Items + (unsigned int)v13->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)monitor,
          v22);
        v14 = v30 - 1;
      }
      while ( v30 - 1 > 2 );
      return v13;
    }
LABEL_25:
    sub_1C372B4(v8);
  }
  return v13;
}