void __fastcall MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_T__o *v4; // x20
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4C23419 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_string___ctor__, method);
    sub_1C3B764(&System_Collections_Generic_HashSet_string__TypeInfo, v3);
    byte_4C23419 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1C3B9B0(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_3547A20 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v4;
  sub_1C3B708((PartyOrganizationUtility_o *)&this->fields.hash, (int64_t)v4, v5, v6, v7, v8, v9, v10);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C23416 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_string__Add__, key);
    byte_4C23416 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C3B9C0(0LL, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_3548C04 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool __fastcall MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C23418 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_string__Contains__, key);
    byte_4C23418 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C3B9C0(0LL, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_3548114 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void __fastcall MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C23417 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_HashSet_string__Remove__, key);
    byte_4C23417 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C3B9C0(0LL, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_35482E0 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}