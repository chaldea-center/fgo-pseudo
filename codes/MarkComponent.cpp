void __fastcall MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BDD9B2 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4BDD9B2 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C22084(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3508BA4 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.hash, (int64_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4BDD9AF & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4BDD9AF = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C22094(0LL, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_3509D88 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool __fastcall MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4BDD9B1 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_4BDD9B1 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C22094(0LL, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_3509298 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void __fastcall MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4BDD9B0 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_4BDD9B0 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C22094(0LL, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_3509464 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}