void __fastcall BattleLogicUtilities___ctor(BattleLogicUtilities_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Vector3_array *__fastcall BattleLogicUtilities__getShuffle_Vector3_(
        UnityEngine_Vector3_array *list,
        const MethodInfo_18B9F68 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Random_o *v7; // x19
  Il2CppObject *v8; // x22
  Il2CppClass *_0_T; // x21
  __int64 v10; // x0
  int v11; // w21
  __int64 v12; // x20
  __int64 v13; // x23
  _DWORD *v14; // x24
  __int64 v15; // x0
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x12
  __int64 v19; // x8
  __int64 v20; // x12
  __int64 v21; // t1
  int v22; // w9
  int v23; // w14
  System_Int32_array *v25; // x0
  const MethodInfo_18BA0D4 *v26; // x1

  if ( (byte_40FA64A & 1) == 0 )
  {
    sub_B16FFC(&System_Random_TypeInfo, method);
    byte_40FA64A = 1;
  }
  v7 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, method, v2, v3, v4);
  System_Random___ctor(v7, 0LL);
  if ( !list )
    goto LABEL_17;
  v8 = System_Array__Clone((System_Array_o *)list, 0LL);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T__);
  if ( !v8 )
    goto LABEL_17;
  v10 = sub_B170BC(v8, _0_T);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    v12 = v10;
    if ( v11 < 2 )
      return (UnityEngine_Vector3_array *)v12;
    if ( v7 )
    {
      v13 = v11 + 1LL;
      v14 = (_DWORD *)(v10 + 12LL * v11 + 28);
      do
      {
        v15 = ((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._7_Next.method)(
                v7,
                (unsigned int)v11,
                v7->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v15 >= (unsigned int)*(_QWORD *)(v12 + 24) )
          goto LABEL_16;
        v18 = v12 + 12LL * (int)v15;
        v21 = *(_QWORD *)(v18 + 32);
        v20 = v18 + 32;
        v19 = v21;
        v22 = *(_DWORD *)(v20 + 8);
        if ( v13 - 2 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v12 + 24)
          || (v23 = *v14,
              *(_QWORD *)v20 = *((_QWORD *)v14 - 1),
              *(_DWORD *)(v20 + 8) = v23,
              v13 - 2 >= (unsigned __int64)*(unsigned int *)(v12 + 24)) )
        {
LABEL_16:
          sub_B17100(v15, v16, v17);
          sub_B170A0();
        }
        --v13;
        *((_QWORD *)v14 - 1) = v19;
        *v14 = v22;
        v14 -= 3;
        --v11;
      }
      while ( v13 > 2 );
      return (UnityEngine_Vector3_array *)v12;
    }
LABEL_17:
    sub_B170D4();
  }
  v25 = (System_Int32_array *)sub_B173C8(v8);
  return (UnityEngine_Vector3_array *)BattleRandom__getShuffle_int_(v25, v26);
}


System_Object_array *__fastcall BattleLogicUtilities__getShuffle_object_(
        System_Object_array *list,
        const MethodInfo_18B9DF8 *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  System_Random_o *v7; // x19
  Il2CppObject *v8; // x22
  Il2CppClass *_0_T; // x21
  __int64 v10; // x0
  int v11; // w21
  __int64 v12; // x20
  __int64 v13; // x24
  BattleServantConfConponent_o *v14; // x22
  BattleServantConfConponent_o *v15; // x0
  __int64 v16; // x1
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  __int64 v23; // x0
  System_Int32_array **v24; // x23
  System_Int32_array **v25; // t1
  System_Int32_array **klass; // x1
  System_String_array **v27; // x3
  System_Boolean_array **v28; // x4
  System_Int32_array **v29; // x5
  System_Int32_array *v30; // x6
  System_Int32_array *v31; // x7
  UnityEngine_Vector3_array *v33; // x0
  const MethodInfo_18B9F68 *v34; // x1

  if ( (byte_40FA649 & 1) == 0 )
  {
    sub_B16FFC(&System_Random_TypeInfo, method);
    byte_40FA649 = 1;
  }
  v7 = (System_Random_o *)sub_B170CC(System_Random_TypeInfo, method, v2, v3, v4);
  System_Random___ctor(v7, 0LL);
  if ( !list )
    goto LABEL_17;
  v8 = System_Array__Clone((System_Array_o *)list, 0LL);
  _0_T = method->rgctx_data->_0_T__;
  if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AAFCFC(method->rgctx_data->_0_T__);
  if ( !v8 )
    goto LABEL_17;
  v10 = sub_B170BC(v8, _0_T);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 24);
    v12 = v10;
    if ( v11 < 2 )
      return (System_Object_array *)v12;
    if ( v7 )
    {
      v13 = v11 + 1LL;
      v14 = (BattleServantConfConponent_o *)(v10 + 8LL * v11 + 24);
      do
      {
        v15 = (BattleServantConfConponent_o *)((__int64 (__fastcall *)(System_Random_o *, _QWORD, Il2CppMethodPointer))v7->klass->vtable._7_Next.method)(
                                                v7,
                                                (unsigned int)v11,
                                                v7->klass->vtable._8_NextDouble.methodPtr);
        if ( (unsigned int)v15 >= (unsigned int)*(_QWORD *)(v12 + 24)
          || (v23 = v12 + 8LL * (int)v15,
              v25 = *(System_Int32_array ***)(v23 + 32),
              v15 = (BattleServantConfConponent_o *)(v23 + 32),
              v24 = v25,
              v13 - 2 >= (unsigned __int64)(unsigned int)*(_QWORD *)(v12 + 24))
          || (klass = (System_Int32_array **)v14->klass,
              v15->klass = v14->klass,
              sub_B16F98(v15, klass, v17, v18, v19, v20, v21, v22),
              v13 - 2 >= (unsigned __int64)*(unsigned int *)(v12 + 24)) )
        {
          sub_B17100(v15, v16, v17);
          sub_B170A0();
        }
        v14->klass = (BattleServantConfConponent_c *)v24;
        sub_B16F98(v14, v24, v17, v27, v28, v29, v30, v31);
        --v13;
        --v11;
        v14 = (BattleServantConfConponent_o *)((char *)v14 - 8);
      }
      while ( v13 > 2 );
      return (System_Object_array *)v12;
    }
LABEL_17:
    sub_B170D4();
  }
  v33 = (UnityEngine_Vector3_array *)sub_B173C8(v8);
  return (System_Object_array *)BattleLogicUtilities__getShuffle_Vector3_(v33, v34);
}