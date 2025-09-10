void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4C2898E & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C2D490(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4C2898E = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C2D6DC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_3640D88 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.hash, (int32_t)v3, v4, v5);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C2898B & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4C2898B = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C2D6EC(0, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_3641F6C *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C2898D & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_4C2898D = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C2D6EC(0, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_364147C *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4C2898C & 1) == 0 )
  {
    sub_1C2D490(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_4C2898C = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C2D6EC(0, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_3641648 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}