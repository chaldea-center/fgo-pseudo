void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_5939DC0 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_5939DC0 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.hash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5939DBD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_5939DBD = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_21FFECC(0, key);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)hash,
    (Il2CppObject *)key,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5939DBF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_5939DBF = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_21FFECC(0, key);
  return System_Collections_Generic_HashSet_object___Contains(
           (System_Collections_Generic_HashSet_object__o *)hash,
           (Il2CppObject *)key,
           (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  struct System_Collections_Generic_HashSet_string__o *hash; // x0

  if ( (byte_5939DBE & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_5939DBE = 1;
  }
  hash = this->fields.hash;
  if ( !hash )
    sub_21FFECC(0, key);
  System_Collections_Generic_HashSet_object___Remove(
    (System_Collections_Generic_HashSet_object__o *)hash,
    (Il2CppObject *)key,
    (const MethodInfo_4287014 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}