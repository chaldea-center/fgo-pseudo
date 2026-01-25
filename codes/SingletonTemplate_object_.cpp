void SingletonTemplate_object____ctor(SingletonTemplate_CLASS__o *this, const MethodInfo_3A8CB90 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SingletonTemplate_object___Delete(const MethodInfo_3A8CB9C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  if ( **(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C51B7C();
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C51B7C();
    **(_QWORD **)(v5 + 184) = 0;
  }
}


void SingletonTemplate_object___Destroy(SingletonTemplate_CLASS__o *this, const MethodInfo_3A8CB98 *method)
{
  ;
}


Il2CppObject *SingletonTemplate_object___get_Instance(const MethodInfo_3A8CA98 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *Instance_object; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x8
  Il2CppObject *v13; // x20
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C51B7C();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C51B7C();
  if ( !**(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C51B7C();
    Instance_object = System_Activator__CreateInstance_object_(*(const MethodInfo_30BA6E4 **)(*(_QWORD *)(v4 + 192)
                                                                                            + 24LL));
    v12 = (__int64)method->klass;
    v13 = Instance_object;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C51B7C();
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C51B7C();
    **(_QWORD **)(v14 + 184) = v13;
    v15 = (__int64)method->klass;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C51B7C();
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C51B7C();
    sub_1C7BA8C(*(GrandQuestFolderBoardItem_o **)(v16 + 184), (int32_t)v13, v6, v7, v8, v9, v10, v11);
  }
  v17 = (__int64)method->klass;
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C51B7C();
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C51B7C();
  return **(Il2CppObject ***)(v18 + 184);
}