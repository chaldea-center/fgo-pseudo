void __fastcall SingletonTemplate_object____ctor(SingletonTemplate_CLASS__o *this, const MethodInfo_38C8C4C *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall SingletonTemplate_object___Delete(const MethodInfo_38C8C58 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  if ( **(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C8D640();
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 192) + 16LL);
    if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
      v5 = sub_1C8D640();
    **(_QWORD **)(v5 + 184) = 0LL;
  }
}


void __fastcall SingletonTemplate_object___Destroy(SingletonTemplate_CLASS__o *this, const MethodInfo_38C8C54 *method)
{
  ;
}


Il2CppObject *__fastcall SingletonTemplate_object___get_Instance(const MethodInfo_38C8B54 *method)
{
  __int64 klass; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *Instance_object; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x8
  int64_t v13; // x20
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0

  klass = (__int64)method->klass;
  if ( (*(_BYTE *)(klass + 309) & 1) == 0 )
    klass = sub_1C8D640();
  v3 = *(_QWORD *)(*(_QWORD *)(klass + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C8D640();
  if ( !**(_QWORD **)(v3 + 184) )
  {
    v4 = (__int64)method->klass;
    if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
      v4 = sub_1C8D640();
    Instance_object = System_Activator__CreateInstance_object_(*(const MethodInfo_2F435FC **)(*(_QWORD *)(v4 + 192)
                                                                                            + 24LL));
    v12 = (__int64)method->klass;
    v13 = (int64_t)Instance_object;
    if ( (*(_BYTE *)(v12 + 309) & 1) == 0 )
      v12 = sub_1C8D640();
    v14 = *(_QWORD *)(*(_QWORD *)(v12 + 192) + 16LL);
    if ( (*(_BYTE *)(v14 + 309) & 1) == 0 )
      v14 = sub_1C8D640();
    **(_QWORD **)(v14 + 184) = v13;
    v15 = (__int64)method->klass;
    if ( (*(_BYTE *)(v15 + 309) & 1) == 0 )
      v15 = sub_1C8D640();
    v16 = *(_QWORD *)(*(_QWORD *)(v15 + 192) + 16LL);
    if ( (*(_BYTE *)(v16 + 309) & 1) == 0 )
      v16 = sub_1C8D640();
    sub_1C3B708(*(PartyOrganizationUtility_o **)(v16 + 184), v13, v6, v7, v8, v9, v10, v11);
  }
  v17 = (__int64)method->klass;
  if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
    v17 = sub_1C8D640();
  v18 = *(_QWORD *)(*(_QWORD *)(v17 + 192) + 16LL);
  if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
    v18 = sub_1C8D640();
  return **(Il2CppObject ***)(v18 + 184);
}