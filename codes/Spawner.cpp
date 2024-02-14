void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_42152B9 & 1) == 0 )
  {
    sub_B0D8A4(&Method_SingletonMonoBehaviour_Spawner___ctor__, method);
    byte_42152B9 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A713D0 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  Spawner_ResourcePrecacher_o *v8; // x20
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  UnityEngine_Transform_o *transform; // x20
  __int64 v25; // x1
  __int64 v26; // x2
  Spawner_SpawnerImpl_o *v27; // x21
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7

  if ( (byte_42152B6 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___67913128, method);
    sub_B0D8A4(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo, v4);
    sub_B0D8A4(&Spawner_ResourcePrecacher_TypeInfo, v5);
    sub_B0D8A4(&Method_SingletonMonoBehaviour_Spawner__Awake__, v6);
    sub_B0D8A4(&Spawner_SpawnerImpl_TypeInfo, v7);
    byte_42152B6 = 1;
  }
  v8 = (Spawner_ResourcePrecacher_o *)sub_B0D974(Spawner_ResourcePrecacher_TypeInfo, method, v2);
  Spawner_ResourcePrecacher___ctor(v8, 0LL);
  this->fields.resourcePrecacher = v8;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.resourcePrecacher,
    (System_Int32_array **)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  v17 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_B0D974(
                                                                       System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo,
                                                                       v15,
                                                                       v16);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_45106076(
    v17,
    32,
    (const MethodInfo_2B0439C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___67913128);
  this->fields.requestsByPath = v17;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.requestsByPath,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v27 = (Spawner_SpawnerImpl_o *)sub_B0D974(Spawner_SpawnerImpl_TypeInfo, v25, v26);
  Spawner_SpawnerImpl___ctor(v27, transform, 0LL);
  this->fields.spawnerImpl = v27;
  sub_B0D840(
    (BattleServantConfConponent_o *)&this->fields.spawnerImpl,
    (System_Int32_array **)v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A71298 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B0D97C(0LL);
  return Spawner_SpawnerImpl__ContainCache(spawnerImpl, (UnityEngine_Object_o *)obj, 0LL);
}


void __fastcall Spawner__Despawn(
        Spawner_o *this,
        UnityEngine_GameObject_o *objectToDespawn,
        bool sendsDespawn,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B0D97C(0LL);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, 0LL);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v5; // kr00_16

  if ( (byte_42152B8 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__, v3);
    byte_42152B8 = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_14;
  if ( !Spawner_ResourcePrecacher__HasCached(resourcePrecacher, 0LL) )
    return 0;
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.requestsByPath;
  if ( !resourcePrecacher )
    goto LABEL_14;
  while ( SLODWORD(resourcePrecacher[1].monitor) > 0 )
  {
    v5 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_2B04B5C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v5.fields.path,
                                                           0LL);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v5.fields.cacheSize,
          v5.fields.overflowPolicy,
          0LL);
        resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.requestsByPath;
        if ( resourcePrecacher )
          continue;
      }
    }
    goto LABEL_14;
  }
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.spawnerImpl;
  if ( !resourcePrecacher )
LABEL_14:
    sub_B0D97C(resourcePrecacher);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, 0LL);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_25899568(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_25899560(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_25899568(this, path, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_25899568(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x22
  const MethodInfo *v11; // x5
  Spawner_RequestByPath_o v12; // [xsp+0h] [xbp-40h] BYREF
  Spawner_RequestByPath_o v13; // 0:x0.16

  if ( (byte_42152B7 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__, path);
    byte_42152B7 = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_9;
  if ( Spawner_ResourcePrecacher__HasElement(resourcePrecacher, path, 0LL) )
    return;
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher
    || (Spawner_ResourcePrecacher__Precache(resourcePrecacher, path, 0LL),
        requestsByPath = this->fields.requestsByPath,
        v13.fields.path = (struct System_String_o *)&v12,
        *(_QWORD *)&v13.fields.cacheSize = path,
        v12.fields.path = 0LL,
        *(_QWORD *)&v12.fields.cacheSize = 0LL,
        Spawner_RequestByPath___ctor(v13, (System_String_o *)(unsigned int)cacheSize, overflowPolicy, 0, v11),
        !requestsByPath) )
  {
LABEL_9:
    sub_B0D97C(resourcePrecacher);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v12,
    (const MethodInfo_2B04940 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_25899772(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_25899780(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_25899780(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B0D97C(0LL);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, 0LL);
}


void __fastcall Spawner__Precache_25899812(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B0D97C(0LL);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, 0LL);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_B0D97C(0LL);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, 0LL);
  return Spawner__Spawn_25900140(this, Resource, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_25900140(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v8; // x0
  float v9; // s0
  float v10; // s1
  float v11; // s2
  float v12; // s3
  float v13; // s4
  float v14; // s5
  float v15; // s6
  float v16; // s7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v19; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v20; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  spawnerImpl = this->fields.spawnerImpl;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v9 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawnerImpl )
    sub_B0D97C(v8);
  v13 = v9;
  v14 = v10;
  v19.fields.x = x;
  v19.fields.y = y;
  v15 = v11;
  v16 = v12;
  v19.fields.z = z;
  v20.fields.x = v13;
  v20.fields.y = v14;
  v20.fields.z = v15;
  v20.fields.w = v16;
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, v19, v20, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_25900284(
        Spawner_o *this,
        System_String_o *path,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s14
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v15; // x2
  UnityEngine_Vector3_o v17; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v18; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_B0D97C(0LL);
  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, 0LL);
  v17.fields.y = v12;
  v17.fields.z = v11;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  v18.fields.w = w;
  v17.fields.x = v13;
  return Spawner__Spawn_25900428(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_25900428(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B0D97C(0LL);
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, position, rotation, 1, 0LL);
}


void __fastcall Spawner_RequestByPath___ctor(
        Spawner_RequestByPath_o this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  int v6; // w20
  struct System_String_o *v7; // x21

  v6 = (int)path;
  v7 = this.fields.path;
  this.fields.path->klass = *(System_String_c **)&this.fields.cacheSize;
  sub_B0D840(this.fields.path, *(_QWORD *)&this.fields.cacheSize);
  LODWORD(v7->monitor) = v6;
  HIDWORD(v7->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v5; // x20

  if ( (byte_4211709 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__, method);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo, v4);
    byte_4211709 = 1;
  }
  v5 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B0D974(
                                                                                         System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo,
                                                                                         method,
                                                                                         v2);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v5,
    32,
    (const MethodInfo_2E4A0E4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v5;
  sub_B0D840(&this->fields, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  struct System_String_o *sourceUri; // x20
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_4211707 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__,
      path);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211707 = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_14;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue((System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements, (System_Xml_XmlQualifiedName_o *)path, &value, (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) == 0 )
  {
    sourceUri = 0LL;
    goto LABEL_8;
  }
  if ( !value )
LABEL_14:
    sub_B0D97C(elements);
  sourceUri = value->fields.sourceUri;
LABEL_8:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)sourceUri, 0LL, 0LL) )
    return UnityEngine_Resources__Load(path, 0LL);
  return (UnityEngine_Object_o *)sourceUri;
}


bool __fastcall Spawner_ResourcePrecacher__HasCached(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v8; // x0
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v11; // x19
  UnityEngine_Object_o *asset; // x0
  int v13; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v15; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v16; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_4211705 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v6);
    byte_4211705 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                elements,
                                                                                                (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_B0D97C(elements);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v15,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v16 = v15;
  while ( 1 )
  {
    do
    {
      v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
             &v16,
             (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v8 )
      {
        v13 = 7;
        goto LABEL_14;
      }
      currentValue = v16.fields.currentValue;
      if ( !v16.fields.currentValue )
        sub_B0D97C(v8);
      v11 = (UnityEngine_ResourceRequest_o **)&v16.fields.currentValue[1];
      klass = v16.fields.currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v11 )
      sub_B0D97C(0LL);
    asset = UnityEngine_ResourceRequest__get_asset(*v11, 0LL);
    currentValue[1].monitor = asset;
    sub_B0D840(&currentValue[1].monitor, asset);
    *v11 = 0LL;
    sub_B0D840(v11, 0LL);
  }
  v13 = 9;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v16,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v13 != 9;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_4211703 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__,
      path);
    byte_4211703 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           elements,
           (System_Xml_XmlQualifiedName_o *)path,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_4211704 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__,
      method);
    byte_4211704 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
           elements,
           (const MethodInfo_2E4A864 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
}


// attributes: thunk
void __fastcall Spawner_ResourcePrecacher__OnDestroy(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher__UnloadAndClear(this, method);
}


void __fastcall Spawner_ResourcePrecacher__Precache(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x2
  Spawner_ResourcePrecacher_Element_o *v8; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_4211702 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__, path);
    sub_B0D8A4(&Spawner_ResourcePrecacher_Element_TypeInfo, v5);
    byte_4211702 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v8 = (Spawner_ResourcePrecacher_Element_o *)sub_B0D974(Spawner_ResourcePrecacher_Element_TypeInfo, v6, v7);
    Spawner_ResourcePrecacher_Element___ctor(v8, 0LL);
    elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Resources__Load(
                                                                                               path,
                                                                                               0LL);
    if ( !v8
      || (v8->fields.asset = (struct UnityEngine_Object_o *)elements,
          sub_B0D840(&v8->fields.asset, elements),
          (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements) == 0LL) )
    {
      sub_B0D97C(elements);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      elements,
      (System_Xml_XmlQualifiedName_o *)path,
      (System_Xml_Schema_XmlSchemaObject_o *)v8,
      (const MethodInfo_2E4AC68 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void __fastcall Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v10; // x0
  Il2CppObject *currentValue; // x23
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4211708 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__, method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v6);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v7);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v8);
    byte_4211708 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_16;
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          elements,
                                                                                          (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v13,
            (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B0D97C(v10);
    monitor = (UnityEngine_Object_o *)v13.fields.currentValue[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
LABEL_16:
    sub_B0D97C(elements);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements,
    (const MethodInfo_2E4AE44 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4211706 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__,
      method);
    byte_4211706 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_B0D97C(0LL);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
                                                               elements,
                                                               (const MethodInfo_2E4A874 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void __fastcall Spawner_ResourcePrecacher_Element___ctor(
        Spawner_ResourcePrecacher_Element_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v5; // x19
  struct Spawner_SpawnerImpl_StaticFields *static_fields; // x0

  if ( (byte_4211716 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Transform___ctor__, v1);
    sub_B0D8A4(&System_Collections_Generic_Queue_Transform__TypeInfo, v3);
    sub_B0D8A4(&Spawner_SpawnerImpl_TypeInfo, v4);
    byte_4211716 = 1;
  }
  v5 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B0D974(
                                                                       System_Collections_Generic_Queue_Transform__TypeInfo,
                                                                       v1,
                                                                       v2);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v5,
    (const MethodInfo_2B02AD0 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  static_fields = Spawner_SpawnerImpl_TypeInfo->static_fields;
  static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v5;
  sub_B0D840(static_fields, v5);
}


void __fastcall Spawner_SpawnerImpl___ctor(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  Spawner_SpawnerImpl_Fields *p_fields; // x19
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v15; // x20
  __int64 v16; // x1
  __int64 v17; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  __int64 v19; // x1
  __int64 v20; // x2
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_string__int__o *v24; // x20

  if ( (byte_421170A & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__, parent);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__, v6);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo, v7);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_Object__int__TypeInfo, v8);
    sub_B0D8A4(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo, v9);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_GameObject___ctor__, v10);
    sub_B0D8A4(&System_Collections_Generic_HashSet_GameObject__TypeInfo, v11);
    byte_421170A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  p_fields = &this->fields;
  sub_B0D840(p_fields, parent);
  v15 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B0D974(
                                                                                          System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo,
                                                                                          v13,
                                                                                          v14);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v15,
    32,
    (const MethodInfo_2E4A0E4 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  p_fields->caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v15;
  sub_B0D840(&p_fields->caches, v15);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B0D974(
                                                                   System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo,
                                                                   v16,
                                                                   v17);
  System_Collections_Generic_Dictionary_object__bool____ctor(
    v18,
    128,
    (const MethodInfo_2E3A890 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  p_fields->managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v18;
  sub_B0D840(&p_fields->managedObjects, v18);
  v21 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B0D974(
                                                                             System_Collections_Generic_HashSet_GameObject__TypeInfo,
                                                                             v19,
                                                                             v20);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v21,
    (const MethodInfo_2C7B9D8 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  p_fields->destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v21;
  sub_B0D840(&p_fields->destroyedUnmanagedObjects, v21);
  v24 = (System_Collections_Generic_Dictionary_string__int__o *)sub_B0D974(
                                                                  System_Collections_Generic_Dictionary_Object__int__TypeInfo,
                                                                  v22,
                                                                  v23);
  System_Collections_Generic_Dictionary_string__int____ctor(
    v24,
    32,
    (const MethodInfo_2E42684 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  p_fields->serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v24;
  sub_B0D840(&p_fields->serialNumbers, v24);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x19
  Spawner_SpawnerImpl_c *v12; // x0
  void *q; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v14; // x8
  UnityEngine_Transform_o *v15; // x20
  int32_t v16; // w21
  Spawner_SpawnerImpl_c *v17; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v18; // x22

  if ( (byte_421170F & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform__Add__, method);
    sub_B0D8A4(&Method_System_Collections_Generic_List_Transform___ctor__, v4);
    sub_B0D8A4(&System_Collections_Generic_List_Transform__TypeInfo, v5);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Transform__Clear__, v6);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Transform__Dequeue__, v7);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Transform__Enqueue__, v8);
    sub_B0D8A4(&Method_System_Collections_Generic_Queue_Transform__get_Count__, v9);
    sub_B0D8A4(&Spawner_SpawnerImpl_TypeInfo, v10);
    byte_421170F = 1;
  }
  v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B0D974(
                                                                                                  System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                  method,
                                                                                                  v2);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v11,
    (const MethodInfo_2FC4A24 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v12 = Spawner_SpawnerImpl_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v12 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = v12->static_fields->q;
  if ( !q )
    goto LABEL_29;
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)q,
    (Mono_Net_CFNetwork_GetProxyData_o *)root,
    (const MethodInfo_2B030C4 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
  while ( 1 )
  {
LABEL_20:
    q = Spawner_SpawnerImpl_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
      q = Spawner_SpawnerImpl_TypeInfo;
    }
    v14 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)**((_QWORD **)q + 23);
    if ( !v14 )
      goto LABEL_29;
    if ( v14->fields._size <= 0 )
      break;
    if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
    {
      j_il2cpp_runtime_class_init_0(q);
      v14 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !v14 )
        goto LABEL_29;
    }
    q = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
          v14,
          (const MethodInfo_2B032DC *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v11 )
      goto LABEL_29;
    v15 = (UnityEngine_Transform_o *)q;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v11,
      (EventMissionProgressRequest_Argument_ProgressData_o *)q,
      (const MethodInfo_2FC56E8 *)Method_System_Collections_Generic_List_Transform__Add__);
    if ( !v15 )
      goto LABEL_29;
    if ( UnityEngine_Transform__get_childCount(v15, 0LL) >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = Spawner_SpawnerImpl_TypeInfo;
        if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v17 = Spawner_SpawnerImpl_TypeInfo;
        }
        v18 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v17->static_fields->q;
        q = UnityEngine_Transform__GetChild(v15, v16, 0LL);
        if ( !v18 )
          break;
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          v18,
          (Mono_Net_CFNetwork_GetProxyData_o *)q,
          (const MethodInfo_2B030C4 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v16 >= UnityEngine_Transform__get_childCount(v15, 0LL) )
          goto LABEL_20;
      }
LABEL_29:
      sub_B0D97C(q);
    }
  }
  if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
  {
    j_il2cpp_runtime_class_init_0(q);
    v14 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
    if ( !v14 )
      goto LABEL_29;
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v14,
    (const MethodInfo_2B02D64 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v11;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0

  if ( (byte_4211715 & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      obj);
    byte_4211715 = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           caches,
           (System_Xml_XmlQualifiedName_o *)obj,
           (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_4211711 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_B0D8A4(
                                      &Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__,
                                      obj);
    byte_4211711 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_string__bool___set_Item(
          (System_Collections_Generic_Dictionary_string__bool__o *)this,
          (System_String_o *)obj,
          0,
          (const MethodInfo_2E3B3F0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B0D97C(this);
  }
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.parent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner_SpawnerImpl__Despawn(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *objectToDespawn,
        bool sendsDespawn,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  System_Collections_Generic_Dictionary_string__bool__o *IsAlive; // x0
  const MethodInfo *v25; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v30; // x21
  Spawner_SpawnerImpl___c_c *v31; // x8
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__17_0; // x22
  Il2CppObject *v34; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *v35; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x21
  __int64 v37; // x1
  __int64 v38; // x2
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v39; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v40; // x0
  System_Collections_Generic_Dictionary_string__bool__c *klass; // x8
  System_Collections_Generic_Dictionary_string__bool__o *v42; // x21
  unsigned __int64 v43; // x10
  int32_t *p_offset; // x11
  __int64 v45; // x0
  __int64 v46; // x21
  __int64 v47; // x8
  unsigned __int64 v48; // x10
  int *v49; // x11
  __int64 v50; // x0
  __int64 v51; // x8
  unsigned __int64 v52; // x10
  int *v53; // x11
  __int64 v54; // x0
  UnityEngine_GameObject_o *v55; // x1
  const MethodInfo *v56; // x2
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  const MethodInfo *v61; // x2

  if ( (byte_4211710 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, objectToDespawn);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Reverse_GameObject___, v7);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Select_Transform__GameObject___, v8);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Skip_Transform___, v9);
    sub_B0D8A4(&Method_System_Linq_Enumerable_Where_GameObject___, v10);
    sub_B0D8A4(&Method_System_Func_GameObject__bool___ctor__, v11);
    sub_B0D8A4(&Method_System_Func_Transform__GameObject___ctor__, v12);
    sub_B0D8A4(&System_Func_Transform__GameObject__TypeInfo, v13);
    sub_B0D8A4(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_B0D8A4(&System_IDisposable_TypeInfo, v15);
    sub_B0D8A4(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v16);
    sub_B0D8A4(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v17);
    sub_B0D8A4(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B0D8A4(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__, v19);
    sub_B0D8A4(&Spawner_SpawnerImpl_TypeInfo, v20);
    sub_B0D8A4(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, v21);
    sub_B0D8A4(&Spawner_SpawnerImpl___c_TypeInfo, v22);
    sub_B0D8A4(&StringLiteral_10010/*"OnDespawn"*/, v23);
    byte_4211710 = 1;
  }
  IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)Spawner_SpawnerImpl__IsAlive(
                                                                       this,
                                                                       objectToDespawn,
                                                                       (const MethodInfo *)sendsDespawn);
  if ( ((unsigned __int8)IsAlive & 1) != 0 )
  {
    if ( sendsDespawn )
    {
      if ( !objectToDespawn )
        goto LABEL_52;
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_10010/*"OnDespawn"*/, 1, 0LL);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_52;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0LL);
    if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    }
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v25);
    v30 = System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_1B555BC *)Method_System_Linq_Enumerable_Skip_Transform___);
    v31 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v31 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    static_fields = v31->static_fields;
    _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v31->vtable._0_Equals.methodPtr) & 4) != 0 && !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      }
      v34 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B0D974(
                                                                                                   System_Func_Transform__GameObject__TypeInfo,
                                                                                                   v28,
                                                                                                   v29);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_0,
        v34,
        Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__,
        (const MethodInfo_261A104 *)Method_System_Func_Transform__GameObject___ctor__);
      v35 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      v35->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_B0D840(&v35->__9__17_0, _9__17_0);
    }
    v36 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v30,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_1B5200C *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v39 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B0D974(
                                                                               System_Func_GameObject__bool__TypeInfo,
                                                                               v37,
                                                                               v38);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v39,
      (Il2CppObject *)this,
      Method_Spawner_SpawnerImpl__Despawn_b__17_1__,
      (const MethodInfo_26189B8 *)Method_System_Func_GameObject__bool___ctor__);
    v40 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v36,
            (System_Func_TSource__bool__o *)v39,
            (const MethodInfo_1B5A6B0 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)System_Linq_Enumerable__Reverse_BattleActionData_BuffData_(
                                                                         v40,
                                                                         (const MethodInfo_1B4F1D4 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v42 = IsAlive;
      if ( *(_WORD *)&IsAlive->klass->_2.bitflags1 )
      {
        v43 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          ++v43;
          p_offset += 4;
          if ( v43 >= *(unsigned __int16 *)&IsAlive->klass->_2.bitflags1 )
            goto LABEL_24;
        }
        v45 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_24:
        v45 = sub_AA67A0(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v46 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_string__bool__o *, _QWORD))v45)(
              v42,
              *(_QWORD *)(v45 + 8));
      if ( !v46 )
        sub_B0D97C(0LL);
      while ( 1 )
      {
        v47 = *(_QWORD *)v46;
        if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
        {
          v48 = 0LL;
          v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v49 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v48;
            v49 += 4;
            if ( v48 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
              goto LABEL_31;
          }
          v50 = v47 + 16LL * *v49 + 312;
        }
        else
        {
LABEL_31:
          v50 = sub_AA67A0(v46, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v50)(v46, *(_QWORD *)(v50 + 8)) & 1) == 0 )
          break;
        v51 = *(_QWORD *)v46;
        if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
        {
          v52 = 0LL;
          v53 = (int *)(*(_QWORD *)(v51 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v53 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            ++v52;
            v53 += 4;
            if ( v52 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
              goto LABEL_38;
          }
          v54 = v51 + 16LL * *v53 + 312;
        }
        else
        {
LABEL_38:
          v54 = sub_AA67A0(v46, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v55 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v54)(v46, *(_QWORD *)(v54 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v55, v56);
      }
      v57 = *(_QWORD *)v46;
      if ( *(_WORD *)(*(_QWORD *)v46 + 298LL) )
      {
        v58 = 0LL;
        v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v59 - 1) != System_IDisposable_TypeInfo )
        {
          ++v58;
          v59 += 4;
          if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v46 + 298LL) )
            goto LABEL_45;
        }
        v60 = v57 + 16LL * *v59 + 312;
      }
      else
      {
LABEL_45:
        v60 = sub_AA67A0(v46, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v60)(v46, *(_QWORD *)(v60 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
               IsAlive,
               (System_String_o *)objectToDespawn,
               (const MethodInfo_2E3B6A4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v61);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v61);
        }
        return;
      }
    }
LABEL_52:
    sub_B0D97C(IsAlive);
  }
}


void __fastcall Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_GameObject__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v7; // x1
  float unscaledTime; // s0

  if ( (byte_4211712 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_GameObject__Add__, obj);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v5);
    byte_4211712 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34935276((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_B0D97C(0LL);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)destroyedUnmanagedObjects,
    (WarBoardAIRoute_RouteData_o *)obj,
    (const MethodInfo_2C7CB94 *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v7);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  Spawner_SpawnerImpl___c_c *v9; // x0
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x20
  Il2CppObject *v12; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *v13; // x0

  if ( (byte_4211713 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__, method);
    sub_B0D8A4(&Method_System_Predicate_GameObject___ctor__, v4);
    sub_B0D8A4(&System_Predicate_GameObject__TypeInfo, v5);
    sub_B0D8A4(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__, v6);
    sub_B0D8A4(&Spawner_SpawnerImpl___c_TypeInfo, v7);
    byte_4211713 = 1;
  }
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  v9 = Spawner_SpawnerImpl___c_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v9 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  static_fields = v9->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v9->vtable._0_Equals.methodPtr) & 4) != 0 && !v9->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v9);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    }
    v12 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B0D974(
                                                                          System_Predicate_GameObject__TypeInfo,
                                                                          method,
                                                                          v2);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v12,
      Method_Spawner_SpawnerImpl___c__GC_b__20_0__,
      (const MethodInfo_2AF7E30 *)Method_System_Predicate_GameObject___ctor__);
    v13 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    v13->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_B0D840(&v13->__9__20_0, _9__20_0);
  }
  if ( !destroyedUnmanagedObjects )
    sub_B0D97C(v9);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_2C7D134 *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *caches; // x0
  int v8; // w20
  _BOOL8 v9; // x0
  Spawner_SpawnerImpl_ObjectCache_o *currentValue; // x19
  int v11; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_421170C & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__,
      method);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__,
      v3);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__,
      v4);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__,
      v5);
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__,
      v6);
    byte_421170C = 1;
  }
  memset(&v13, 0, sizeof(v13));
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                              caches,
                                                                                              (const MethodInfo_2E4AA0C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_B0D97C(caches);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_22D9A80 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v13,
           (const MethodInfo_26CA940 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v9 )
      break;
    currentValue = (Spawner_SpawnerImpl_ObjectCache_o *)v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B0D97C(v9);
    if ( !Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
            (Spawner_SpawnerImpl_ObjectCache_o *)v13.fields.currentValue,
            0LL) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize(currentValue, 0LL);
      v8 += currentValue->fields.cacheSize;
    }
    if ( v8 >= 32 )
    {
      v11 = 8;
      goto LABEL_13;
    }
  }
  v11 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_26CA93C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v11 != 8;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_4211714 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__, obj);
    sub_B0D8A4(&Method_System_Collections_Generic_HashSet_GameObject__Contains__, v5);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v6);
    byte_4211714 = 1;
  }
  value = 0;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      if ( System_Collections_Generic_Dictionary_object__bool___TryGetValue(
             managedObjects,
             (Il2CppObject *)obj,
             &value,
             (const MethodInfo_2E3D1F0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)managedObjects,
                  (BattleBuffData_BuffData_o *)obj,
                  (const MethodInfo_2C7C05C *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_B0D97C(managedObjects);
  }
  return 0;
}


void __fastcall Spawner_SpawnerImpl__Number(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_UIPanel__int__o *serialNumbers; // x0
  int32_t v11; // w2
  Il2CppObject *name; // x20
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_421170E & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__, prefab);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__, v7);
    sub_B0D8A4(&int_TypeInfo, v8);
    sub_B0D8A4(&StringLiteral_23659/*"{0}({1})"*/, v9);
    byte_421170E = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
    serialNumbers,
    (UIPanel_o *)prefab,
    &value,
    (const MethodInfo_2E44FC0 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  v11 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)serialNumbers,
          (System_Xml_XmlQualifiedName_o *)prefab,
          v11,
          (const MethodInfo_2E431E4 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v14 = value,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14),
        serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)System_String__Format_43845440(
                                                                                   (System_String_o *)StringLiteral_23659/*"{0}({1})"*/,
                                                                                   name,
                                                                                   v13,
                                                                                   0LL),
        !obj) )
  {
LABEL_8:
    sub_B0D97C(serialNumbers);
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)obj, (System_String_o *)serialNumbers, 0LL);
}


void __fastcall Spawner_SpawnerImpl__Precache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v14; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v15; // x24

  if ( (byte_421170B & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      prefab);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__, v9);
    sub_B0D8A4(&Spawner_SpawnerImpl_ObjectCache_TypeInfo, v10);
    byte_421170B = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         (const MethodInfo_2E4AEDC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v14 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  v15 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B0D974(Spawner_SpawnerImpl_ObjectCache_TypeInfo, v12, v13);
  Spawner_SpawnerImpl_ObjectCache___ctor(v15, this, prefab, cacheSize, overflowPolicy, 0LL);
  if ( !v14 )
LABEL_7:
    sub_B0D97C(caches);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v14,
    (System_Xml_XmlQualifiedName_o *)prefab,
    (System_Xml_Schema_XmlSchemaObject_o *)v15,
    (const MethodInfo_2E4AC40 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner_SpawnerImpl__Spawn(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        bool overridesPositionAndRotation,
        const MethodInfo *method)
{
  float w; // s8
  float z; // s9
  float y; // s10
  float x; // s11
  float v11; // s12
  float v12; // s13
  float v13; // s14
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *result; // x0
  __int64 v25; // x0
  Spawner_SpawnerImpl_o *v26; // x0
  UnityEngine_Object_o *v27; // x1
  UnityEngine_GameObject_o *v28; // x2
  const MethodInfo *v29; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v33; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v34; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_421170D & 1) == 0 )
  {
    sub_B0D8A4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__,
      prefab);
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, v16);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v17);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v18);
    sub_B0D8A4(&StringLiteral_10081/*"OnSpawn"*/, v19);
    byte_421170D = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         &value,
         (const MethodInfo_2E4CA68 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
  {
    caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)value;
    if ( !value )
      goto LABEL_32;
    NextObjectInCache = (UnityEngine_Object_o *)Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
                                                  (Spawner_SpawnerImpl_ObjectCache_o *)value,
                                                  0LL);
  }
  else
  {
    NextObjectInCache = 0LL;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Object__op_Equality(
                                                                                           NextObjectInCache,
                                                                                           0LL,
                                                                                           0LL);
  if ( ((unsigned __int8)caches & 1) == 0 )
  {
    if ( overridesPositionAndRotation )
    {
      if ( !NextObjectInCache )
        goto LABEL_32;
      caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__get_transform(
                                                                                               (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                                               0LL);
      if ( !caches )
        goto LABEL_32;
      v32.fields.x = v13;
      v32.fields.y = v12;
      v32.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v32, 0LL);
      caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__get_transform(
                                                                                               (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                                               0LL);
      if ( !caches )
        goto LABEL_32;
      v33.fields.x = x;
      v33.fields.y = y;
      v33.fields.z = z;
      v33.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v33, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_string__bool___set_Item(
        (System_Collections_Generic_Dictionary_string__bool__o *)caches,
        (System_String_o *)NextObjectInCache,
        1,
        (const MethodInfo_2E3B3F0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_26;
    }
LABEL_32:
    sub_B0D97C(caches);
  }
  if ( overridesPositionAndRotation )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v31.fields.x = v13;
    v31.fields.y = v12;
    v31.fields.z = v11;
    v34.fields.x = x;
    v34.fields.y = y;
    v34.fields.z = z;
    v34.fields.w = w;
    v22 = UnityEngine_Object__Instantiate(prefab, v31, v34, 0LL);
    if ( v22 )
      goto LABEL_17;
LABEL_31:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v23);
    sub_B0D97C(v25);
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = UnityEngine_Object__Instantiate_34934424(prefab, 0LL);
  if ( !v22 )
    goto LABEL_31;
LABEL_17:
  NextObjectInCache = v22;
  if ( (UnityEngine_GameObject_c *)v22->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v22, v23);
LABEL_26:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_10081/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  v26 = (Spawner_SpawnerImpl_o *)sub_B0DC70(v22);
  Spawner_SpawnerImpl__Number(v26, v27, v28, v29);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0

  if ( (byte_4211717 & 1) == 0 )
  {
    sub_B0D8A4(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, x);
    byte_4211717 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_B0D97C(0LL);
  return System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           managedObjects,
           (System_String_o *)x,
           (const MethodInfo_2E3B6A4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl_ObjectCache___ctor(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        Spawner_SpawnerImpl_o *spawnerImpl,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_ObjectCache_o *v10; // x23

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_B0D840(&v10->fields, spawnerImpl);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_B0D840(v10, prefab);
  LODWORD(v10->monitor) = cacheSize;
  HIDWORD(v10->monitor) = overflowPolicy;
}


UnityEngine_GameObject_o *__fastcall Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_ObjectCache_o *v2; // x19
  struct UnityEngine_GameObject_array *objects; // x8
  int cacheIndex; // w9
  int32_t v5; // w22
  struct Spawner_SpawnerImpl_o *spawnerImpl; // x10
  System_String_o *v7; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v9; // x8
  UnityEngine_Transform_o *v10; // x21
  __int64 v12; // x0

  v2 = this;
  if ( (byte_4211FB8 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B0D8A4(
                                                  &Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__,
                                                  method);
    byte_4211FB8 = 1;
  }
  objects = v2->fields.objects;
  if ( !objects || v2->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v2->fields.cacheIndex;
  v5 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
    {
      v12 = sub_B0D9A8(this);
      sub_B0D948(v12, 0LL);
    }
    spawnerImpl = v2->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_12;
    this = (Spawner_SpawnerImpl_ObjectCache_o *)spawnerImpl->fields.managedObjects;
    if ( !this )
      goto LABEL_12;
    v7 = (System_String_o *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                  (System_Collections_Generic_Dictionary_string__bool__o *)this,
                                                  v7,
                                                  (const MethodInfo_2E3B354 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    cacheSize = v2->fields.cacheSize;
    ++v5;
    cacheIndex = (v2->fields.cacheIndex + 1) % cacheSize;
    v2->fields.cacheIndex = cacheIndex;
    if ( v5 >= cacheSize )
      break;
    objects = v2->fields.objects;
    if ( !objects )
      goto LABEL_12;
  }
  v9 = v2->fields.spawnerImpl;
  if ( !v9 || (this = (Spawner_SpawnerImpl_ObjectCache_o *)v9->fields.managedObjects) == 0LL )
LABEL_12:
    sub_B0D97C(this);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_string__bool__o *)this,
                                                v7,
                                                (const MethodInfo_2E3B354 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.overflowPolicy == 1 )
    {
      this = (Spawner_SpawnerImpl_ObjectCache_o *)v2->fields.spawnerImpl;
      if ( !this )
        goto LABEL_12;
      Spawner_SpawnerImpl__Despawn((Spawner_SpawnerImpl_o *)this, (UnityEngine_GameObject_o *)v7, 1, 0LL);
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  v2->fields.cacheIndex = (v2->fields.cacheIndex + 1) % v2->fields.cacheSize;
  if ( !v7 )
    goto LABEL_12;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
  if ( !this )
    goto LABEL_12;
  v10 = (UnityEngine_Transform_o *)this;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0LL, 0LL);
  UnityEngine_Transform__set_localPosition(v10, v2->fields.defaultLocalPosition, 0LL);
  UnityEngine_Transform__set_localRotation(v10, v2->fields.defaultLocalRotation, 0LL);
  UnityEngine_Transform__set_localScale(v10, v2->fields.defaultLocalScale, 0LL);
  return (UnityEngine_GameObject_o *)v7;
}


void __fastcall Spawner_SpawnerImpl_ObjectCache__Initialize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *v5; // x0
  unsigned __int64 v6; // x22
  __int64 i; // x23
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_o *v11; // x20
  UnityEngine_Transform_o *v12; // x21
  __int64 v13; // x0
  __int64 v14; // x0

  if ( (byte_4211FB7 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_GameObject___TypeInfo, method);
    sub_B0D8A4(&UnityEngine_GameObject_TypeInfo, v3);
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, v4);
    byte_4211FB7 = 1;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_B0D8BC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v5;
  sub_B0D840(&this->fields.objects, v5);
  if ( this->fields.cacheSize >= 1 )
  {
    v6 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_34934424(prefab, 0LL);
      v11 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_22;
      if ( transform )
      {
        transform = (UnityEngine_Transform_o *)sub_B0D964(transform, objects->obj.klass->_1.element_class);
        if ( !transform )
          goto LABEL_25;
      }
      if ( v6 >= objects->max_length )
      {
        v13 = sub_B0D9A8(transform);
        sub_B0D948(v13, 0LL);
      }
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)v11;
      sub_B0D840((char *)objects + i, v11);
      if ( i == 32 )
      {
        if ( !v11 || (transform = UnityEngine_GameObject__get_transform(v11, 0LL)) == 0LL )
LABEL_22:
          sub_B0D97C(transform);
        v12 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v12, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v12, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v11, 0LL);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v11, 0LL);
      if ( (__int64)++v6 >= this->fields.cacheSize )
        return;
    }
    sub_B0DC70(transform);
LABEL_25:
    v14 = sub_B0D99C();
    sub_B0D948(v14, 0LL);
  }
}


int32_t __fastcall Spawner_SpawnerImpl_ObjectCache__get_CacheSize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  return this->fields.cacheSize;
}


bool __fastcall Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  return this->fields.objects != 0LL;
}


void __fastcall Spawner_SpawnerImpl___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0

  if ( (byte_4211FB5 & 1) == 0 )
  {
    sub_B0D8A4(&Spawner_SpawnerImpl___c_TypeInfo, v1);
    byte_4211FB5 = 1;
  }
  v3 = (Il2CppObject *)sub_B0D974(Spawner_SpawnerImpl___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
  static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v3;
  sub_B0D840(static_fields, v3);
}


void __fastcall Spawner_SpawnerImpl___c___ctor(Spawner_SpawnerImpl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_GameObject_o *__fastcall Spawner_SpawnerImpl___c___Despawn_b__17_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_B0D97C(this);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4211FB6 & 1) == 0 )
  {
    sub_B0D8A4(&UnityEngine_Object_TypeInfo, x);
    byte_4211FB6 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}