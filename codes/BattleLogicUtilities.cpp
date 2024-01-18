void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_172A6D0 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x22
  Il2CppClass *_0_T; // x21
  int monitor; // w21
  Il2CppObject *v10; // x20
  __int64 v11; // x23
  _DWORD *v12; // x24
  __int64 v13; // x0
  char *v14; // x12
  __int64 v15; // x8
  char *v16; // x12
  __int64 v17; // t1
  int v18; // w9
  int v19; // w14
  __int64 v21; // x0
  System_Int32_array *v22; // x0
  const MethodInfo_172A83C *v23; // x1

  if ( (byte_4187258 & 1) == 0 )
  {
    sub_B2C35C(&System_Random_TypeInfo, method);
    byte_4187258 = 1;
  }
  v4 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
  System_Random___ctor(v4, 0LL);
  if ( !list )
    goto LABEL_17;
  v5 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v5 = (Il2CppObject *)sub_AC505C(method->rgctx_data->_0_T__);
  if ( !v7 )
    goto LABEL_17;
  v5 = (Il2CppObject *)sub_B2C41C(v7, _0_T);
  if ( v5 )
  {
    monitor = (int)v5[1].monitor;
    v10 = v5;
    if ( monitor < 2 )
      return (UnityEngine_Vector3_array *)v10;
    if ( v4 )
    {
      v11 = monitor + 1LL;
      v12 = (_DWORD *)&v5[1].monitor + 3 * monitor + 1;
      do
      {
        v13 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                v4,
                (unsigned int)monitor,
                v4->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v13 >= (unsigned int)v10[1].monitor )
          goto LABEL_16;
        v14 = (char *)v10 + 12 * (int)v13;
        v17 = *((_QWORD *)v14 + 4);
        v16 = v14 + 32;
        v15 = v17;
        v18 = *((_DWORD *)v16 + 2);
        if ( v11 - 2 >= (unsigned __int64)(unsigned int)v10[1].monitor
          || (v19 = *v12,
              *(_QWORD *)v16 = *((_QWORD *)v12 - 1),
              *((_DWORD *)v16 + 2) = v19,
              v11 - 2 >= (unsigned __int64)LODWORD(v10[1].monitor)) )
        {
LABEL_16:
          v21 = sub_B2C460(v13);
          sub_B2C400(v21, 0LL);
        }
        --v11;
        *((_QWORD *)v12 - 1) = v15;
        *v12 = v18;
        v12 -= 3;
        --monitor;
      }
      while ( v11 > 2 );
      return (UnityEngine_Vector3_array *)v10;
    }
LABEL_17:
    sub_B2C434(v5, v6);
  }
  v22 = (System_Int32_array *)sub_B2C728(v7);
  return (UnityEngine_Vector3_array *)BattleRandom__getShuffle_int_(v22, v23);
}


System_Object_array *__fastcall BattleLogicUtilities__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_172A560 *method)
{
  System_Random_o *v4; // x19
  Il2CppObject *v5; // x0
  __int64 v6; // x1
  Il2CppObject *v7; // x22
  Il2CppClass *_0_T; // x21
  int monitor; // w21
  Il2CppObject *v10; // x20
  __int64 v11; // x24
  BattleServantConfConponent_o *v12; // x22
  BattleServantConfConponent_o *v13; // x0
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  Il2CppClass **v20; // x0
  System_Int32_array **v21; // x23
  System_Int32_array **v22; // t1
  System_Int32_array **klass; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v31; // x0
  UnityEngine_Vector3_array *v32; // x0
  const MethodInfo_172A6D0 *v33; // x1

  if ( (byte_4187257 & 1) == 0 )
  {
    sub_B2C35C(&System_Random_TypeInfo, method);
    byte_4187257 = 1;
  }
  v4 = (System_Random_o *)sub_B2C42C(System_Random_TypeInfo);
  System_Random___ctor(v4, 0LL);
  if ( !list )
    goto LABEL_17;
  v5 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v5;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v5 = (Il2CppObject *)sub_AC505C(method->rgctx_data->_0_T__);
  if ( !v7 )
    goto LABEL_17;
  v5 = (Il2CppObject *)sub_B2C41C(v7, _0_T);
  if ( v5 )
  {
    monitor = (int)v5[1].monitor;
    v10 = v5;
    if ( monitor < 2 )
      return (System_Object_array *)v10;
    if ( v4 )
    {
      v11 = monitor + 1LL;
      v12 = (BattleServantConfConponent_o *)(&v5[1].monitor + monitor);
      do
      {
        v13 = (BattleServantConfConponent_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v4->klass->vtable._7_Next.method)(
                                                v4,
                                                (unsigned int)monitor,
                                                v4->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v13 >= (unsigned int)v10[1].monitor
          || (v20 = &v10->klass + (int)v13,
              v22 = (System_Int32_array **)v20[4],
              v13 = (BattleServantConfConponent_o *)(v20 + 4),
              v21 = v22,
              v11 - 2 >= (unsigned __int64)(unsigned int)v10[1].monitor)
          || (klass = (System_Int32_array **)v12->klass,
              v13->klass = v12->klass,
              sub_B2C2F8(v13, klass, v14, v15, v16, v17, v18, v19),
              v11 - 2 >= (unsigned __int64)LODWORD(v10[1].monitor)) )
        {
          v31 = sub_B2C460(v13);
          sub_B2C400(v31, 0LL);
        }
        v12->klass = (BattleServantConfConponent_c *)v21;
        sub_B2C2F8(v12, v21, v24, v25, v26, v27, v28, v29);
        --v11;
        --monitor;
        v12 = (BattleServantConfConponent_o *)((char *)v12 - 8);
      }
      while ( v11 > 2 );
      return (System_Object_array *)v10;
    }
LABEL_17:
    sub_B2C434(v5, v6);
  }
  v32 = (UnityEngine_Vector3_array *)sub_B2C728(v7);
  return (System_Object_array *)BattleLogicUtilities__getShuffle_Vector3_(v32, v33);
}