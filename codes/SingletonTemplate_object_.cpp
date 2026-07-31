void SingletonTemplate_object____ctor(SingletonTemplate_CLASS__o *this, const MethodInfo_476EF14 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SingletonTemplate_object___Delete(const MethodInfo_476EF20 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_2237AF8();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8();
  if ( **(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
      v4 = sub_2237AF8();
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_2237AF8();
    **(_QWORD **)(v5 + 184) = 0;
  }
}


void SingletonTemplate_object___Destroy(SingletonTemplate_CLASS__o *this, const MethodInfo_476EF1C *method)
{
  ;
}


Il2CppObject *SingletonTemplate_object___get_Instance(const MethodInfo_476EDF8 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  _QWORD *v4; // x8
  __int64 v5; // x0
  Il2CppObject *Instance_object; // x0
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x8
  Il2CppObject *v14; // x20
  __int64 v15; // x0
  Il2CppObject **v16; // x8
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0

  klass = (__int64)method->klass;
  if ( (*(_WORD *)(klass + 309) & 1) == 0 )
    klass = sub_2237AF8();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8();
  v4 = *(_QWORD **)(v3 + 184);
  v5 = (__int64)method->klass;
  if ( !*v4 )
  {
    if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
      v5 = sub_2237AF8();
    Instance_object = System_Activator__CreateInstance_object_(*(const MethodInfo_36D05FC **)(*(_QWORD *)(v5 + 192)
                                                                                            + 24LL));
    v13 = (__int64)method->klass;
    v14 = Instance_object;
    if ( (*(_WORD *)(v13 + 309) & 1) == 0 )
      v13 = sub_2237AF8();
    v15 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
    if ( (*(_WORD *)(v15 + 309) & 1) == 0 )
      v15 = sub_2237AF8();
    v16 = *(Il2CppObject ***)(v15 + 184);
    v17 = (__int64)method->klass;
    *v16 = v14;
    if ( (*(_WORD *)(v17 + 309) & 1) == 0 )
      v17 = sub_2237AF8();
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
    if ( (*(_WORD *)(v18 + 309) & 1) == 0 )
      v18 = sub_2237AF8();
    sub_21FFBF4(*(MissionNaviTransitionBoardItem_o **)(v18 + 184), (int32_t)v14, v7, v8, v9, v10, v11, v12);
    v5 = (__int64)method->klass;
  }
  if ( (*(_WORD *)(v5 + 309) & 1) == 0 )
    v5 = sub_2237AF8();
  v19 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_WORD *)(v19 + 309) & 1) == 0 )
    v19 = sub_2237AF8();
  return **(Il2CppObject ***)(v19 + 184);
}