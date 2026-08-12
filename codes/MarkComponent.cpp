void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5971F93 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_2213A60(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_5971F93 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_2213CCC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_42BA2CC *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.hash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5971F90 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_5971F90 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_2213CDC(0, key);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)hash,
    (Il2CppObject *)key,
    (const MethodInfo_42BB4C0 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5971F92 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_5971F92 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_2213CDC(0, key);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_object__o *)hash,
           (Il2CppObject *)key,
           (const MethodInfo_42BA9D0 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5971F91 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_5971F91 = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_2213CDC(0, key);
  System_Collections_Generic_HashSet_object___Remove(
    (System_Collections_Generic_HashSet_object__o *)hash,
    (Il2CppObject *)key,
    (const MethodInfo_42BABA0 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}