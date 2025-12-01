void MarkComponent___ctor(MarkComponent_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4CC8AF4 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_HashSet_string__TypeInfo);
    byte_4CC8AF4 = 1;
  }
  v3 = (System_Collections_Generic_HashSet_T__o *)sub_1C715FC(System_Collections_Generic_HashSet_string__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v3,
    (const MethodInfo_36C7184 *)Method_System_Collections_Generic_HashSet_string___ctor__);
  this->fields.hash = (struct System_Collections_Generic_HashSet_string__o *)v3;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&this->fields.hash, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)this, 0);
}


void MarkComponent__Add(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4CC8AF1 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_string__Add__);
    byte_4CC8AF1 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C71608(0, key);
  System_Collections_Generic_HashSet_object___Add(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_36C8368 *)Method_System_Collections_Generic_HashSet_string__Add__);
}


bool MarkComponent__Contains(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4CC8AF3 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_string__Contains__);
    byte_4CC8AF3 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C71608(0, key);
  return System_Collections_Generic_HashSet_object___Contains(
           hash,
           (Il2CppObject *)key,
           (const MethodInfo_36C7878 *)Method_System_Collections_Generic_HashSet_string__Contains__);
}


void MarkComponent__Remove(MarkComponent_o *this, System_String_o *key, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *hash; // x0

  if ( (byte_4CC8AF2 & 1) == 0 )
  {
    sub_1C713B0(&Method_System_Collections_Generic_HashSet_string__Remove__);
    byte_4CC8AF2 = 1;
  }
  hash = (System_Collections_Generic_HashSet_T__o *)this->fields.hash;
  if ( !hash )
    sub_1C71608(0, key);
  System_Collections_Generic_HashSet_object___Remove(
    hash,
    (Il2CppObject *)key,
    (const MethodInfo_36C7A44 *)Method_System_Collections_Generic_HashSet_string__Remove__);
}