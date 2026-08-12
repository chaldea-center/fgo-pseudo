void BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Vector3_array *BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_3817068 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  long double v7; // q0
  Il2CppObject *v8; // x22
  Il2CppClass *_0_T; // x21
  __int64 v10; // x2
  void *monitor; // x21
  UnityEngine_Vector3_array *v12; // x20
  unsigned __int64 v13; // x23
  _DWORD *v14; // x24
  __int64 v15; // x0
  char *v16; // x9
  int v17; // s2
  __int64 v18; // t1
  __int64 v19; // d1
  int v20; // s0
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v22; // x0
  const MethodInfo_38171CC *v23; // x1

  if ( !method->rgctx_data )
  {
    sub_2213A60(&System_Random_TypeInfo);
    if ( !method->rgctx_data )
      sub_224B964(method);
  }
  v4 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
  System_Random___ctor(v4, 0);
  if ( !list )
    goto LABEL_18;
  v5 = System_Array__Clone((System_Array_o *)list, 0);
  v8 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    v5 = (Il2CppObject *)sub_224B908(v7);
    _0_T = (Il2CppClass *)v5;
  }
  if ( !v8 )
    goto LABEL_18;
  v5 = (Il2CppObject *)sub_2213BB4(v8, _0_T);
  if ( v5 )
  {
    monitor = v5[1].monitor;
    v12 = (UnityEngine_Vector3_array *)v5;
    if ( (int)monitor < 2 )
      return v12;
    if ( v4 )
    {
      v13 = (unsigned int)v5[1].monitor + 1LL;
      v14 = (_DWORD *)&v5[1].monitor + 3 * (unsigned int)monitor + 1;
      do
      {
        v15 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, const MethodInfo *))v4->klass->vtable._7_Next.methodPtr)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._7_Next.method);
        if ( (unsigned int)v15 >= (unsigned int)v12->max_length )
          goto LABEL_17;
        if ( v13 - 2 >= (unsigned int)v12->max_length )
          goto LABEL_17;
        v16 = (char *)v12 + 12 * (int)v15;
        v17 = *v14;
        v18 = *((_QWORD *)v16 + 4);
        v16 += 32;
        v19 = v18;
        *(_QWORD *)v16 = *((_QWORD *)v14 - 1);
        v20 = *((_DWORD *)v16 + 2);
        *((_DWORD *)v16 + 2) = v17;
        if ( v13 - 2 >= LODWORD(v12->max_length) )
LABEL_17:
          sub_2213CE4(v15);
        --v13;
        LODWORD(monitor) = (_DWORD)monitor - 1;
        *((_QWORD *)v14 - 1) = v19;
        *v14 = v20;
        v14 -= 3;
      }
      while ( v13 > 2 );
      return v12;
    }
LABEL_18:
    sub_2213CDC(v5, v6);
  }
  sub_221405C(v8, _0_T, v10);
  return (UnityEngine_Vector3_array *)BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(v22, v23);
}


Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *BattleLogicUtilities__getShuffle___Il2CppFullySharedGenericType_(
        Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *list,
        const MethodInfo_38171CC *method)
{
  unsigned __int64 StatusReg; // x19
  const MethodInfo_38171CC_RGCTXs *rgctx_data; // x8
  size_t actualSize; // x20
  char *v7; // x24
  Il2CppObject *v8; // x0
  unsigned __int64 monitor; // x1
  long double v10; // q0
  Il2CppObject *v11; // x27
  Il2CppClass *_0_T; // x26
  __int64 v13; // x2
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v14; // x25
  __int64 v15; // x21
  char *v16; // x26
  void *_1_T; // x0
  il2cpp_array_size_t max_length; // x8
  Il2CppClass *klass; // x24
  __int64 v20; // x22
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *v21; // x19
  Il2CppObject *v22; // x25
  __int64 native_size; // x27
  unsigned __int64 v24; // x21
  unsigned __int64 v25; // x23
  char *v26; // x27
  long double v27; // q0
  unsigned int v28; // w8
  Il2CppObject *v29; // x19
  char *v30; // x22
  long double v31; // q0
  unsigned __int64 v33; // [xsp+0h] [xbp-40h] BYREF
  char *v34; // [xsp+8h] [xbp-38h]
  System_Random_o *v35; // [xsp+10h] [xbp-30h]
  __int64 v36; // [xsp+18h] [xbp-28h]
  unsigned __int64 v37; // [xsp+20h] [xbp-20h]
  Il2CppObject *v38; // [xsp+28h] [xbp-18h]
  char *v39; // [xsp+30h] [xbp-10h]
  __int64 v40; // [xsp+38h] [xbp-8h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v40 = *(_QWORD *)(StatusReg + 40);
  rgctx_data = method->rgctx_data;
  if ( !rgctx_data )
  {
    sub_2213A60(&System_Random_TypeInfo);
    rgctx_data = method->rgctx_data;
    if ( !rgctx_data )
    {
      sub_224B964(method);
      rgctx_data = method->rgctx_data;
    }
  }
  actualSize = rgctx_data->_1_T->_2.actualSize;
  v39 = (char *)&v33 - ((actualSize + 15) & 0x1FFFFFFF0LL);
  v7 = v39;
  memset(v39, 0, actualSize);
  v35 = (System_Random_o *)sub_2213CCC(System_Random_TypeInfo);
  System_Random___ctor(v35, 0);
  if ( !list )
    goto LABEL_24;
  v8 = System_Array__Clone((System_Array_o *)list, 0);
  v11 = v8;
  _0_T = method->rgctx_data->_0_T__;
  if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
  {
    v8 = (Il2CppObject *)sub_224B908(v10);
    _0_T = (Il2CppClass *)v8;
  }
  if ( !v11 )
    goto LABEL_24;
  v33 = StatusReg;
  v8 = (Il2CppObject *)sub_2213BB4(v11, _0_T);
  if ( !v8 )
    sub_221405C(v11, _0_T, v13);
  monitor = (unsigned __int64)v8[1].monitor;
  v14 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)v8;
  if ( (int)monitor >= 2 )
  {
    if ( v35 )
    {
      v34 = (char *)&v33 - ((actualSize + 15) & 0x1FFFFFFF0LL);
      v15 = (unsigned int)monitor + 1LL;
      v38 = v8 + 2;
      do
      {
        v16 = v7;
        v37 = monitor;
        _1_T = (void *)((__int64 (__fastcall *)(System_Random_o *))v35->klass->vtable._7_Next.methodPtr)(v35);
        max_length = v14->max_length;
        if ( (unsigned int)_1_T >= (unsigned int)max_length )
          goto LABEL_23;
        klass = v14->obj.klass;
        v20 = (int)_1_T;
        v21 = v14;
        v22 = v38;
        native_size = (unsigned int)klass->_2.native_size;
        v36 = v15;
        v24 = v15 - 2;
        v25 = (unsigned int)max_length;
        _1_T = memcpy(v16, (char *)v38 + native_size * (int)_1_T, actualSize);
        if ( v24 >= v25 )
          goto LABEL_23;
        v26 = (char *)v22 + v24 * native_size;
        memcpy(v39, v26, actualSize);
        memmove((char *)v22 + (unsigned int)klass->_2.native_size * v20, v26, actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (*(_WORD *)((_BYTE *)_1_T + 309) & 1) == 0 )
          _1_T = (void *)sub_224B908(v27);
        v28 = v21->max_length;
        v14 = v21;
        v29 = v38;
        v7 = v16;
        if ( (unsigned int)v20 >= v28 )
          goto LABEL_23;
        sub_2213A08(_1_T, (char *)v38 + (unsigned int)v14->obj.klass->_2.native_size * v20, v39);
        v30 = v34;
        _1_T = memcpy(v34, v16, actualSize);
        if ( v24 >= LODWORD(v14->max_length) )
          goto LABEL_23;
        memcpy((char *)v29 + v24 * (unsigned int)v14->obj.klass->_2.native_size, v16, actualSize);
        _1_T = method->rgctx_data->_1_T;
        if ( (*(_WORD *)((_BYTE *)_1_T + 309) & 1) == 0 )
          _1_T = (void *)sub_224B908(v31);
        if ( v24 >= LODWORD(v14->max_length) )
LABEL_23:
          sub_2213CE4(_1_T);
        sub_2213A08(_1_T, (char *)v29 + v24 * (unsigned int)v14->obj.klass->_2.native_size, v30);
        v15 = v36 - 1;
        monitor = (unsigned int)(v37 - 1);
      }
      while ( (unsigned __int64)(v36 - 1) > 2 );
      return v14;
    }
LABEL_24:
    sub_2213CDC(v8, monitor);
  }
  return v14;
}