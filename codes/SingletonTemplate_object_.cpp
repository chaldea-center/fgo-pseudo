void SingletonTemplate_object____ctor(SingletonTemplate_CLASS__o *this, const MethodInfo_39FFB90 *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SingletonTemplate_object___Delete(const MethodInfo_39FFB9C *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8EC78();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8EC78();
  if ( **(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C8EC78();
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C8EC78();
    **(_QWORD **)(v5 + 184) = 0;
  }
}


void SingletonTemplate_object___Destroy(SingletonTemplate_CLASS__o *this, const MethodInfo_39FFB98 *method)
{
  ;
}


Il2CppObject *SingletonTemplate_object___get_Instance(const MethodInfo_39FFA98 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *Instance_object; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x8
  Il2CppObject *v9; // x20
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8EC78();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8EC78();
  if ( !**(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C8EC78();
    Instance_object = System_Activator__CreateInstance_object_(*(const MethodInfo_304765C **)(*(_QWORD *)(v4 + 192)
                                                                                            + 24LL));
    v8 = (__int64)method->klass;
    v9 = Instance_object;
    if ( (*(_BYTE *)(v8 + 309) & 1) == 0 )
      v8 = sub_1C8EC78();
    v10 = *(_QWORD *)(*(_QWORD *)(v8 + 192) + 16LL);
    if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
      v10 = sub_1C8EC78();
    **(_QWORD **)(v10 + 184) = v9;
    v11 = (__int64)method->klass;
    if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
      v11 = sub_1C8EC78();
    v12 = *(_QWORD *)(*(_QWORD *)(v11 + 192) + 16LL);
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8EC78();
    sub_1C3E508(*(CGThumbnailListItem_o **)(v12 + 184), (int32_t)v9, v6, v7);
  }
  v13 = (__int64)method->klass;
  if ( (*(_BYTE *)(v13 + 309) & 1) == 0 )
    v13 = sub_1C8EC78();
  v14 = *(_QWORD *)(*(_QWORD *)(v13 + 192) + 16LL);
  if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
    v14 = sub_1C8EC78();
  return **(Il2CppObject ***)(v14 + 184);
}