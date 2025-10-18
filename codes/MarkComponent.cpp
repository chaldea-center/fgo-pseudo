void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C44690 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C37058(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4C44690 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C372A4(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_365A090 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.hash, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C4468D & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4C4468D = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_365B274 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C4468F & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_4C4468F = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C372B4(0);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_365A784 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C4468E & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_4C4468E = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C372B4(0);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_365A950 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}