void __fastcall MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_HashSet_T__o *v4; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4A4F9D3 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string___ctor__, method);
    sub_1B863B8(&System_Collections_Generic_HashSet_string__TypeInfo, v3);
    byte_4A4F9D3 = 1;
  }
  v4 = (System_Collections_Generic_HashSet_T__o *)sub_1B86604(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v4,
    (const MethodInfo_34BDC34 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v4;
  sub_1B8635C((CGThumbnailListItem_o *)&this->fields.hash, (int32_t)v4, v5, v6);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0LL);
}


void __fastcall MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4A4F9D0 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string__Add__, key);
    byte_4A4F9D0 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1B86614(0LL, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_34BEE18 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool __fastcall MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4A4F9D2 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string__Contains__, key);
    byte_4A4F9D2 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1B86614(0LL, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_34BE328 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void __fastcall MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4A4F9D1 & 1) == 0 )
  {
    sub_1B863B8(&Method_System_Collections_Generic_HashSet_string__Remove__, key);
    byte_4A4F9D1 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1B86614(0LL, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_34BE4F4 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}