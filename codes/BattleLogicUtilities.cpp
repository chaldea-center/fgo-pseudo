void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_170B17C *method)
{
  __int64 v2; // x2
  System_Random_o *v5; // x19
  Il2CppObject *v6; // x0
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
  const MethodInfo_170B2E8 *v23; // x1

  if ( (byte_4214311 & 1) == 0 )
  {
    sub_B0D8A4(&System_Random_TypeInfo, method);
    byte_4214311 = 1;
  }
  v5 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, method, v2);
  System_Random___ctor(v5, 0LL);
  if ( !list )
    goto LABEL_17;
  v6 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v6;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v6 = (Il2CppObject *)sub_AA65A4(method->rgctx_data->_0_T__);
  if ( !v7 )
    goto LABEL_17;
  v6 = (Il2CppObject *)sub_B0D964(v7, _0_T);
  if ( v6 )
  {
    monitor = (int)v6[1].monitor;
    v10 = v6;
    if ( monitor < 2 )
      return (UnityEngine_Vector3_array *)v10;
    if ( v5 )
    {
      v11 = monitor + 1LL;
      v12 = (_DWORD *)&v6[1].monitor + 3 * monitor + 1;
      do
      {
        v13 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._7_Next.method)(
                v5,
                (unsigned int)monitor,
                v5->klass->vtable._8_NextDouble.methodPtr);
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
          v21 = sub_B0D9A8(v13);
          sub_B0D948(v21, 0LL);
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
    sub_B0D97C(v6);
  }
  v22 = (System_Int32_array *)sub_B0DC70(v7);
  return (UnityEngine_Vector3_array *)BattleRandom__getShuffle_int_(v22, v23);
}


System_Object_array *__fastcall BattleLogicUtilities__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_170B00C *method)
{
  __int64 v2; // x2
  System_Random_o *v5; // x19
  Il2CppObject *v6; // x0
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
  const MethodInfo_170B17C *v33; // x1

  if ( (byte_4214310 & 1) == 0 )
  {
    sub_B0D8A4(&System_Random_TypeInfo, method);
    byte_4214310 = 1;
  }
  v5 = (System_Random_o *)sub_B0D974(System_Random_TypeInfo, method, v2);
  System_Random___ctor(v5, 0LL);
  if ( !list )
    goto LABEL_17;
  v6 = System_Array__Clone((System_Array_o *)list, 0LL);
  v7 = v6;
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    v6 = (Il2CppObject *)sub_AA65A4(method->rgctx_data->_0_T__);
  if ( !v7 )
    goto LABEL_17;
  v6 = (Il2CppObject *)sub_B0D964(v7, _0_T);
  if ( v6 )
  {
    monitor = (int)v6[1].monitor;
    v10 = v6;
    if ( monitor < 2 )
      return (System_Object_array *)v10;
    if ( v5 )
    {
      v11 = monitor + 1LL;
      v12 = (BattleServantConfConponent_o *)(&v6[1].monitor + monitor);
      do
      {
        v13 = (BattleServantConfConponent_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v5->klass->vtable._7_Next.method)(
                                                v5,
                                                (unsigned int)monitor,
                                                v5->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v13 >= (unsigned int)v10[1].monitor
          || (v20 = &v10->klass + (int)v13,
              v22 = (System_Int32_array **)v20[4],
              v13 = (BattleServantConfConponent_o *)(v20 + 4),
              v21 = v22,
              v11 - 2 >= (unsigned __int64)(unsigned int)v10[1].monitor)
          || (klass = (System_Int32_array **)v12->klass,
              v13->klass = v12->klass,
              sub_B0D840(v13, klass, v14, v15, v16, v17, v18, v19),
              v11 - 2 >= (unsigned __int64)LODWORD(v10[1].monitor)) )
        {
          v31 = sub_B0D9A8(v13);
          sub_B0D948(v31, 0LL);
        }
        v12->klass = (BattleServantConfConponent_c *)v21;
        sub_B0D840(v12, v21, v24, v25, v26, v27, v28, v29);
        --v11;
        --monitor;
        v12 = (BattleServantConfConponent_o *)((char *)v12 - 8);
      }
      while ( v11 > 2 );
      return (System_Object_array *)v10;
    }
LABEL_17:
    sub_B0D97C(v6);
  }
  v32 = (UnityEngine_Vector3_array *)sub_B0DC70(v7);
  return (System_Object_array *)BattleLogicUtilities__getShuffle_Vector3_(v32, v33);
}