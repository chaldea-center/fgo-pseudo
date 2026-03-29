void BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_array *BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_3195098 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  long double v7; // q0
  Il2CppObject *v8; // x22
  Il2CppClass *_0_T; // x21
  void *monitor; // x21
  Il2CppObject *v11; // x20
  __int64 v12; // x22
  __int64 v13; // x0
  unsigned int v14; // w10
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
  const MethodInfo_31951F4 *v26; // x1

  if ( !method->rgctx_data )
  {
    sub_1C93AD4(&System_Random_TypeInfo);
    if ( !method->rgctx_data )
      sub_1C69BC4(method);
  }
  v4 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
  System_Random___ctor(v4, 0);
  if ( !list )
    goto LABEL_18;
  v5 = System_Array__Clone((System_Array_o *)list, 0);
  v8 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v5 = (Il2CppObject *)sub_1C69B68(v7);
    _0_T = (Il2CppClass *)v5;
  }
  if ( !v8 )
    goto LABEL_18;
  v5 = (Il2CppObject *)sub_1C93C10(v8, _0_T);
  if ( v5 )
  {
    monitor = v5[1].monitor;
    v11 = v5;
    if ( (int)monitor < 2 )
      return (UnityEngine_Vector3_array *)v11;
    if ( v4 )
    {
      v12 = (unsigned int)v5[1].monitor + 1LL;
      do
      {
        v13 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v4->klass->vtable._7_Next.methodPtr)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._7_Next.method);
        v14 = (unsigned int)v11[1].monitor;
        if ( (unsigned int)v13 >= v14 )
          goto LABEL_17;
        v15 = (char *)v11 + 12 * (int)v13;
        v17 = *((_QWORD *)v15 + 4);
        v16 = v15 + 32;
        v18 = v17;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        v19 = *((_DWORD *)v16 + 2);
        if ( (unsigned int)monitor >= v14
          || (v20 = (char *)v11 + 12 * (unsigned int)monitor,
              v22 = *((_QWORD *)v20 + 4),
              v21 = v20 + 32,
              v23 = *((_DWORD *)v21 + 2),
              *(_QWORD *)v16 = v22,
              *((_DWORD *)v16 + 2) = v23,
              (unsigned int)monitor >= LODWORD(v11[1].monitor)) )
        {
LABEL_17:
          sub_1C93D34(v13);
        }
        --v12;
        *(_QWORD *)v21 = v18;
        *((_DWORD *)v21 + 2) = v19;
      }
      while ( v12 > 2 );
      return (UnityEngine_Vector3_array *)v11;
    }
LABEL_18:
    sub_1C93D2C(v5, v6);
  }
  sub_1C940C8(v8);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v25, v26);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_31951F4 *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_31951F4_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
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
  unsigned int max_length; // w19
  char *v19; // x22
  __int64 v20; // x21
  __int64 native_size; // x24
  long double v22; // q0
  void *v23; // x23
  unsigned int v24; // w21
  long double v25; // q0
  _QWORD v27[2]; // [xsp+0h] [xbp-40h] BYREF
  char *v28; // [xsp+10h] [xbp-30h]
  char *v29; // [xsp+18h] [xbp-28h]
  System_Random_o *v30; // [xsp+20h] [xbp-20h]
  __int64 v31; // [xsp+28h] [xbp-18h]
  void *v32; // [xsp+30h] [xbp-10h]
  __int64 v33; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v33 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_1C93AD4(&System_Random_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_1C69BC4(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v29 = (char *)v27 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v29;
  v32 = v29;
  memset(v29, 0, actualSize);
  v30 = (System_Random_o *)sub_1C93D20(System_Random_TypeInfo);
  System_Random___ctor(v30, 0);
  if ( !list )
    goto LABEL_25;
  v8 = System_Array__Clone((System_Array_o *)list, 0);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
  {
    v8 = (Il2CppObject *)sub_1C69B68(v10);
    _0_T = (Il2CppClass *)v8;
  }
  v27[1] = StatusReg;
  if ( !v11 )
    goto LABEL_25;
  v8 = (Il2CppObject *)sub_1C93C10(v11, _0_T);
  if ( !v8 )
    sub_1C940C8(v11);
  monitor = v8[1].monitor;
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v8;
  if ( (int)monitor >= 2 )
  {
    if ( v30 )
    {
      v15 = (unsigned int)v8[1].monitor + 1LL;
      v28 = (char *)v27 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      do
      {
        v31 = v15;
        v16 = v7;
        _1_T = (_BYTE *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v30->klass->vtable._7_Next.methodPtr)(
                          v30,
                          (unsigned int)monitor,
                          v30->klass->vtable._7_Next.method);
        max_length = v14->max_length;
        if ( (unsigned int)_1_T >= max_length )
          goto LABEL_24;
        v19 = v29;
        v20 = (int)_1_T;
        native_size = (unsigned int)v14->obj.klass->_2.native_size;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        memcpy(v29, (char *)v14->m_Items + native_size * (int)_1_T, actualSize);
        _1_T = memcpy(v32, v19, actualSize);
        if ( (unsigned int)monitor >= max_length )
          goto LABEL_24;
        v7 = v16;
        _1_T = memcpy(v16, (char *)v14->m_Items + native_size * (unsigned int)monitor, actualSize);
        if ( (unsigned int)v20 >= LODWORD(v14->max_length) )
          goto LABEL_24;
        memcpy((char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * v20, v16, actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
          _1_T = (_BYTE *)sub_1C69B68(v22);
        v23 = v28;
        if ( (unsigned int)v20 >= LODWORD(v14->max_length) )
          goto LABEL_24;
        sub_1C93A7C(_1_T, (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * v20, v7);
        _1_T = memcpy(v23, v32, actualSize);
        v24 = v14->max_length;
        if ( (unsigned int)monitor >= v24 )
          goto LABEL_24;
        memcpy(
          (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)monitor,
          v23,
          actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (_1_T[309] & 1) == 0 )
        {
          _1_T = (_BYTE *)sub_1C69B68(v25);
          v24 = v14->max_length;
        }
        if ( (unsigned int)monitor >= v24 )
LABEL_24:
          sub_1C93D34(_1_T);
        sub_1C93A7C(
          _1_T,
          (char *)v14->m_Items + (unsigned int)v14->obj.klass->_2.native_size * (unsigned __int64)(unsigned int)monitor,
          v23);
        v15 = v31 - 1;
      }
      while ( v31 - 1 > 2 );
      return v14;
    }
LABEL_25:
    sub_1C93D2C(v8, v9);
  }
  return v14;
}