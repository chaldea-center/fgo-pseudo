void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4E060CA & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1CE6700(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4E060CA = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1CE694C(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_37B3998 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1CE66A4((GrandQuestFolderBoardItem_o *)&this->fields.hash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4E060C7 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4E060C7 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1CE6958(0, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_37B4B7C *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4E060C9 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_4E060C9 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1CE6958(0, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_37B408C *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4E060C8 & 1) == 0 )
  {
    sub_1CE6700(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_4E060C8 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1CE6958(0, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_37B4258 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}