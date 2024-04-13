void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_1ADAD78 *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Random_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  Il2CppClass *_0_T; // x21
  int monitor; // w21
  Il2CppObject *v12; // x20
  __int64 v13; // x23
  _DWORD *v14; // x24
  __int64 v15; // x0
  char *v16; // x12
  __int64 v17; // x8
  char *v18; // x12
  __int64 v19; // t1
  int v20; // w9
  int v21; // w14
  __int64 v23; // x0
  System_Int32_array *v24; // x0
  const MethodInfo_1ADAEE4 *v25; // x1

  if ( (byte_42EA281 & 1) == 0 )
  {
    sub_B5D5C4(&System_Random_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA281 = 1;
  }
  v6 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
  System_Random___ctor(v6, 0LL);
  if ( !list )
    goto LABEL_17;
  v7 = System_Array__Clone((System_Array_o *)list, 0LL);
  v9 = v7;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppObject *)sub_AF52C4(method->rgctx_data->_0_T__);
  if ( !v9 )
    goto LABEL_17;
  v7 = (Il2CppObject *)sub_B5D684(v9, _0_T);
  if ( v7 )
  {
    monitor = (int)v7[1].monitor;
    v12 = v7;
    if ( monitor < 2 )
      return (UnityEngine_Vector3_array *)v12;
    if ( v6 )
    {
      v13 = monitor + 1LL;
      v14 = (_DWORD *)&v7[1].monitor + 3 * monitor + 1;
      do
      {
        v15 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._7_Next.method)(
                v6,
                (unsigned int)monitor,
                v6->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v15 >= (unsigned int)v12[1].monitor )
          goto LABEL_16;
        v16 = (char *)v12 + 12 * (int)v15;
        v19 = *((_QWORD *)v16 + 4);
        v18 = v16 + 32;
        v17 = v19;
        v20 = *((_DWORD *)v18 + 2);
        if ( v13 - 2 >= (unsigned __int64)(unsigned int)v12[1].monitor
          || (v21 = *v14,
              *(_QWORD *)v18 = *((_QWORD *)v14 - 1),
              *((_DWORD *)v18 + 2) = v21,
              v13 - 2 >= (unsigned __int64)LODWORD(v12[1].monitor)) )
        {
LABEL_16:
          v23 = sub_B5D6C8(v15);
          sub_B5D668(v23, 0LL);
        }
        --v13;
        *((_QWORD *)v14 - 1) = v17;
        *v14 = v20;
        v14 -= 3;
        --monitor;
      }
      while ( v13 > 2 );
      return (UnityEngine_Vector3_array *)v12;
    }
LABEL_17:
    sub_B5D69C(v7, v8);
  }
  v24 = (System_Int32_array *)sub_B5D990(v9);
  return (UnityEngine_Vector3_array *)BattleRandom__getShuffle_int_(v24, v25);
}


System_Object_array *__fastcall BattleLogicUtilities__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_1ADAC08 *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Random_o *v6; // x19
  Il2CppObject *v7; // x0
  __int64 v8; // x1
  Il2CppObject *v9; // x22
  Il2CppClass *_0_T; // x21
  int monitor; // w21
  Il2CppObject *v12; // x20
  __int64 v13; // x24
  BattleServantConfConponent_o *v14; // x22
  BattleServantConfConponent_o *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  Il2CppClass **v22; // x0
  System_Int32_array **v23; // x23
  System_Int32_array **v24; // t1
  System_Int32_array **klass; // x1
  System_String_array **v26; // x2
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  __int64 v33; // x0
  UnityEngine_Vector3_array *v34; // x0
  const MethodInfo_1ADAD78 *v35; // x1

  if ( (byte_42EA280 & 1) == 0 )
  {
    sub_B5D5C4(&System_Random_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA280 = 1;
  }
  v6 = (System_Random_o *)sub_B5D694(System_Random_TypeInfo);
  System_Random___ctor(v6, 0LL);
  if ( !list )
    goto LABEL_17;
  v7 = System_Array__Clone((System_Array_o *)list, 0LL);
  v9 = v7;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v7 = (Il2CppObject *)sub_AF52C4(method->rgctx_data->_0_T__);
  if ( !v9 )
    goto LABEL_17;
  v7 = (Il2CppObject *)sub_B5D684(v9, _0_T);
  if ( v7 )
  {
    monitor = (int)v7[1].monitor;
    v12 = v7;
    if ( monitor < 2 )
      return (System_Object_array *)v12;
    if ( v6 )
    {
      v13 = monitor + 1LL;
      v14 = (BattleServantConfConponent_o *)(&v7[1].monitor + monitor);
      do
      {
        v15 = (BattleServantConfConponent_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v6->klass->vtable._7_Next.method)(
                                                v6,
                                                (unsigned int)monitor,
                                                v6->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v15 >= (unsigned int)v12[1].monitor
          || (v22 = &v12->klass + (int)v15,
              v24 = (System_Int32_array **)v22[4],
              v15 = (BattleServantConfConponent_o *)(v22 + 4),
              v23 = v24,
              v13 - 2 >= (unsigned __int64)(unsigned int)v12[1].monitor)
          || (klass = (System_Int32_array **)v14->klass,
              v15->klass = v14->klass,
              sub_B5D560(v15, klass, v16, v17, v18, v19, v20, v21),
              v13 - 2 >= (unsigned __int64)LODWORD(v12[1].monitor)) )
        {
          v33 = sub_B5D6C8(v15);
          sub_B5D668(v33, 0LL);
        }
        v14->klass = (BattleServantConfConponent_c *)v23;
        sub_B5D560(v14, v23, v26, v27, v28, v29, v30, v31);
        --v13;
        --monitor;
        v14 = (BattleServantConfConponent_o *)((char *)v14 - 8);
      }
      while ( v13 > 2 );
      return (System_Object_array *)v12;
    }
LABEL_17:
    sub_B5D69C(v7, v8);
  }
  v34 = (UnityEngine_Vector3_array *)sub_B5D990(v9);
  return (System_Object_array *)BattleLogicUtilities__getShuffle_Vector3_(v34, v35);
}