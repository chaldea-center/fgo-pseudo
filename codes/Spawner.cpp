void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_4352741 & 1) == 0 )
  {
    sub_B70694(&Method_SingletonMonoBehaviour_Spawner___ctor__);
    byte_4352741 = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2CE9C98 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v18; // x21
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7

  if ( (byte_435273E & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___69193656);
    sub_B70694(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
    sub_B70694(&Spawner_ResourcePrecacher_TypeInfo);
    sub_B70694(&Method_SingletonMonoBehaviour_Spawner__Awake__);
    sub_B70694(&Spawner_SpawnerImpl_TypeInfo);
    byte_435273E = 1;
  }
  v3 = (Spawner_ResourcePrecacher_o *)sub_B70764(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v3, 0LL);
  this->fields.resourcePrecacher = v3;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.resourcePrecacher,
    (System_Int32_array **)v3,
    v4,
    v5,
    v6,
    v7,
    v8,
    v9);
  v10 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_B70764(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_49248076(
    v10,
    32,
    (const MethodInfo_2EF774C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___69193656);
  this->fields.requestsByPath = v10;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.requestsByPath,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v18 = (Spawner_SpawnerImpl_o *)sub_B70764(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v18, transform, 0LL);
  this->fields.spawnerImpl = v18;
  sub_B70630(
    (BattleServantConfConponent_o *)&this->fields.spawnerImpl,
    (System_Int32_array **)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2CE9B60 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B7076C(0LL, obj);
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
    sub_B7076C(0LL, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, 0LL);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v4; // kr00_16

  if ( (byte_4352740 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    sub_B70694(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__);
    byte_4352740 = 1;
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
    v4 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_2EF7F0C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    method = *(const MethodInfo **)&v4.fields.cacheSize;
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v4.fields.path,
                                                           0LL);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v4.fields.cacheSize,
          v4.fields.overflowPolicy,
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
    sub_B7076C(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, 0LL);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_26326360(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_26326352(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_26326360(this, path, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_26326360(
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

  if ( (byte_435273F & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
    byte_435273F = 1;
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
    sub_B7076C(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v12,
    (const MethodInfo_2EF7CF0 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_26326564(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_26326572(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_26326572(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B7076C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, 0LL);
}


void __fastcall Spawner__Precache_26326604(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B7076C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, 0LL);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_B7076C(0LL, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, 0LL);
  return Spawner__Spawn_26326932(this, Resource, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26326932(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  __int64 v8; // x0
  __int64 v9; // x1
  float v10; // s0
  float v11; // s1
  float v12; // s2
  float v13; // s3
  float v14; // s4
  float v15; // s5
  float v16; // s6
  float v17; // s7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v20; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v21; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  spawnerImpl = this->fields.spawnerImpl;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v10 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawnerImpl )
    sub_B7076C(v8, v9);
  v14 = v10;
  v15 = v11;
  v20.fields.x = x;
  v20.fields.y = y;
  v16 = v12;
  v17 = v13;
  v20.fields.z = z;
  v21.fields.x = v14;
  v21.fields.y = v15;
  v21.fields.z = v16;
  v21.fields.w = v17;
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, v20, v21, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26327076(
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
    sub_B7076C(0LL, path);
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
  return Spawner__Spawn_26327220(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26327220(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B7076C(0LL, prefab);
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, position, rotation, 1, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner_RequestByPath___ctor(
        Spawner_RequestByPath_o this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  System_Int32_array *v5; // x6
  System_Int32_array *v6; // x7
  int v8; // w20
  struct System_String_o *v9; // x21

  v8 = (int)path;
  v9 = this.fields.path;
  this.fields.path->klass = *(System_String_c **)&this.fields.cacheSize;
  sub_B70630(
    (BattleServantConfConponent_o *)this.fields.path,
    *(System_Int32_array ***)&this.fields.cacheSize,
    (System_String_array **)path,
    *(System_String_array ***)&cacheSize,
    *(System_Boolean_array ***)&overflowPolicy,
    (System_Int32_array **)method,
    v5,
    v6);
  LODWORD(v9->monitor) = v8;
  HIDWORD(v9->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v3; // x20
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7

  if ( (byte_434F8E1 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
    byte_434F8E1 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B70764(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v3,
    32,
    (const MethodInfo_2F4EE64 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  struct System_String_o *sourceUri; // x20
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_434F8DF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F8DF = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_14;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue((System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements, (System_Xml_XmlQualifiedName_o *)path, &value, (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) == 0 )
  {
    sourceUri = 0LL;
    goto LABEL_8;
  }
  if ( !value )
LABEL_14:
    sub_B7076C(elements, path);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v8; // x19
  __int64 v9; // x1
  System_Int32_array **asset; // x0
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  int v23; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_434F8DD & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_434F8DD = 1;
  }
  memset(&v26, 0, sizeof(v26));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                elements,
                                                                                                (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_B7076C(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    do
    {
      v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
             &v26,
             (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v4 )
      {
        v23 = 7;
        goto LABEL_14;
      }
      currentValue = v26.fields.currentValue;
      if ( !v26.fields.currentValue )
        sub_B7076C(v4, v5);
      v8 = (UnityEngine_ResourceRequest_o **)&v26.fields.currentValue[1];
      klass = v26.fields.currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v8 )
      sub_B7076C(0LL, v9);
    asset = (System_Int32_array **)UnityEngine_ResourceRequest__get_asset(*v8, 0LL);
    currentValue[1].monitor = asset;
    sub_B70630((BattleServantConfConponent_o *)&currentValue[1].monitor, asset, v11, v12, v13, v14, v15, v16);
    *v8 = 0LL;
    sub_B70630((BattleServantConfConponent_o *)v8, 0LL, v17, v18, v19, v20, v21, v22);
  }
  v23 = 9;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v26,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v23 != 9;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_434F8DB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
    byte_434F8DB = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B7076C(0LL, path);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           elements,
           (System_Xml_XmlQualifiedName_o *)path,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_434F8DC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__);
    byte_434F8DC = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B7076C(0LL, method);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
           elements,
           (const MethodInfo_2F4F5E4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  __int64 v5; // x21
  System_Int32_array **elements; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_434F8DA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
    sub_B70694(&Spawner_ResourcePrecacher_Element_TypeInfo);
    byte_434F8DA = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v5 = sub_B70764(Spawner_ResourcePrecacher_Element_TypeInfo);
    Spawner_ResourcePrecacher_Element___ctor((Spawner_ResourcePrecacher_Element_o *)v5, 0LL);
    elements = (System_Int32_array **)UnityEngine_Resources__Load(path, 0LL);
    if ( !v5
      || (*(_QWORD *)(v5 + 24) = elements,
          sub_B70630((BattleServantConfConponent_o *)(v5 + 24), elements, v8, v9, v10, v11, v12, v13),
          (elements = (System_Int32_array **)this->fields.elements) == 0LL) )
    {
      sub_B7076C(elements, v7);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements,
      (System_Xml_XmlQualifiedName_o *)path,
      (System_Xml_Schema_XmlSchemaObject_o *)v5,
      (const MethodInfo_2F4F9E8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void __fastcall Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x23
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_434F8E0 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_434F8E0 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_16;
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          elements,
                                                                                          (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v8,
           (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v8.fields.currentValue;
    if ( !v8.fields.currentValue )
      sub_B7076C(v4, v5);
    monitor = (UnityEngine_Object_o *)v8.fields.currentValue[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v8,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
LABEL_16:
    sub_B7076C(elements, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements,
    (const MethodInfo_2F4FBC4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_434F8DE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
    byte_434F8DE = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_B7076C(0LL, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
                                                               elements,
                                                               (const MethodInfo_2F4F5F4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void __fastcall Spawner_ResourcePrecacher_Element___ctor(
        Spawner_ResourcePrecacher_Element_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_434F8EE & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Queue_Transform___ctor__);
    sub_B70694(&System_Collections_Generic_Queue_Transform__TypeInfo);
    sub_B70694(&Spawner_SpawnerImpl_TypeInfo);
    byte_434F8EE = 1;
  }
  v1 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B70764(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v1,
    (const MethodInfo_2EF5E80 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  static_fields = (BattleServantConfConponent_o *)Spawner_SpawnerImpl_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
}


void __fastcall Spawner_SpawnerImpl___ctor(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_Fields *p_fields; // x19
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v12; // x20
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v19; // x20
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v26; // x20
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  System_Collections_Generic_Dictionary_string__int__o *v33; // x20
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_434F8E2 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
    sub_B70694(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_Object__int__TypeInfo);
    sub_B70694(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_HashSet_GameObject___ctor__);
    sub_B70694(&System_Collections_Generic_HashSet_GameObject__TypeInfo);
    byte_434F8E2 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  p_fields = &this->fields;
  sub_B70630((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)parent, v6, v7, v8, v9, v10, v11);
  v12 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B70764(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v12,
    32,
    (const MethodInfo_2F4EE64 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  p_fields->caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v12;
  sub_B70630(
    (BattleServantConfConponent_o *)&p_fields->caches,
    (System_Int32_array **)v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
  v19 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B70764(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor(
    v19,
    128,
    (const MethodInfo_2FA703C *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  p_fields->managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v19;
  sub_B70630(
    (BattleServantConfConponent_o *)&p_fields->managedObjects,
    (System_Int32_array **)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  v26 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B70764(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v26,
    (const MethodInfo_2EB4850 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  p_fields->destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v26;
  sub_B70630(
    (BattleServantConfConponent_o *)&p_fields->destroyedUnmanagedObjects,
    (System_Int32_array **)v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v33 = (System_Collections_Generic_Dictionary_string__int__o *)sub_B70764(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_string__int____ctor(
    v33,
    32,
    (const MethodInfo_2FAEE30 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  p_fields->serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v33;
  sub_B70630(
    (BattleServantConfConponent_o *)&p_fields->serialNumbers,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v3; // x19
  __int64 v4; // x1
  Spawner_SpawnerImpl_c *v5; // x0
  void *q; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v7; // x8
  UnityEngine_Transform_o *v8; // x20
  int32_t v9; // w21
  Spawner_SpawnerImpl_c *v10; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v11; // x22

  if ( (byte_434F8E7 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_B70694(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_B70694(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_B70694(&Method_System_Collections_Generic_Queue_Transform__Clear__);
    sub_B70694(&Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    sub_B70694(&Method_System_Collections_Generic_Queue_Transform__Enqueue__);
    sub_B70694(&Method_System_Collections_Generic_Queue_Transform__get_Count__);
    sub_B70694(&Spawner_SpawnerImpl_TypeInfo);
    byte_434F8E7 = 1;
  }
  v3 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B70764(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v3,
    (const MethodInfo_30249C4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v5 = Spawner_SpawnerImpl_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v5 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = v5->static_fields->q;
  if ( !q )
    goto LABEL_29;
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)q,
    (Mono_Net_CFNetwork_GetProxyData_o *)root,
    (const MethodInfo_2EF6474 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
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
    v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)**((_QWORD **)q + 23);
    if ( !v7 )
      goto LABEL_29;
    if ( v7->fields._size <= 0 )
      break;
    if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
    {
      j_il2cpp_runtime_class_init_0(q);
      v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !v7 )
        goto LABEL_29;
    }
    q = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
          v7,
          (const MethodInfo_2EF668C *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v3 )
      goto LABEL_29;
    v8 = (UnityEngine_Transform_o *)q;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v3,
      (EventMissionProgressRequest_Argument_ProgressData_o *)q,
      (const MethodInfo_3025688 *)Method_System_Collections_Generic_List_Transform__Add__);
    if ( !v8 )
      goto LABEL_29;
    if ( UnityEngine_Transform__get_childCount(v8, 0LL) >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = Spawner_SpawnerImpl_TypeInfo;
        if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v10 = Spawner_SpawnerImpl_TypeInfo;
        }
        v11 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v10->static_fields->q;
        q = UnityEngine_Transform__GetChild(v8, v9, 0LL);
        if ( !v11 )
          break;
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          v11,
          (Mono_Net_CFNetwork_GetProxyData_o *)q,
          (const MethodInfo_2EF6474 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v9 >= UnityEngine_Transform__get_childCount(v8, 0LL) )
          goto LABEL_20;
      }
LABEL_29:
      sub_B7076C(q, v4);
    }
  }
  if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
  {
    j_il2cpp_runtime_class_init_0(q);
    v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
    if ( !v7 )
      goto LABEL_29;
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v7,
    (const MethodInfo_2EF6114 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v3;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0

  if ( (byte_434F8ED & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    byte_434F8ED = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    sub_B7076C(0LL, obj);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           caches,
           (System_Xml_XmlQualifiedName_o *)obj,
           (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_434F8E9 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    byte_434F8E9 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_string__bool___set_Item(
          (System_Collections_Generic_Dictionary_string__bool__o *)this,
          (System_String_o *)obj,
          0,
          (const MethodInfo_2FA7B9C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B7076C(this, obj);
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
  System_Collections_Generic_Dictionary_string__bool__o *IsAlive; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  Spawner_SpawnerImpl___c_c *v13; // x8
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__17_0; // x22
  Il2CppObject *v16; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *v17; // x0
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v24; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v25; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0
  System_Collections_Generic_Dictionary_string__bool__c *klass; // x8
  System_Collections_Generic_Dictionary_string__bool__o *v28; // x21
  unsigned __int64 v29; // x10
  int32_t *p_offset; // x11
  __int64 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x21
  __int64 v34; // x8
  unsigned __int64 v35; // x10
  int *v36; // x11
  __int64 v37; // x0
  __int64 v38; // x8
  unsigned __int64 v39; // x10
  int *v40; // x11
  __int64 v41; // x0
  UnityEngine_GameObject_o *v42; // x1
  const MethodInfo *v43; // x2
  __int64 v44; // x8
  unsigned __int64 v45; // x10
  int *v46; // x11
  __int64 v47; // x0
  const MethodInfo *v48; // x2

  if ( (byte_434F8E8 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    sub_B70694(&Method_System_Linq_Enumerable_Reverse_GameObject___);
    sub_B70694(&Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    sub_B70694(&Method_System_Linq_Enumerable_Skip_Transform___);
    sub_B70694(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_B70694(&Method_System_Func_GameObject__bool___ctor__);
    sub_B70694(&Method_System_Func_Transform__GameObject___ctor__);
    sub_B70694(&System_Func_Transform__GameObject__TypeInfo);
    sub_B70694(&System_Func_GameObject__bool__TypeInfo);
    sub_B70694(&System_IDisposable_TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_B70694(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_B70694(&System_Collections_IEnumerator_TypeInfo);
    sub_B70694(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__);
    sub_B70694(&Spawner_SpawnerImpl_TypeInfo);
    sub_B70694(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__);
    sub_B70694(&Spawner_SpawnerImpl___c_TypeInfo);
    sub_B70694(&StringLiteral_10109/*"OnDespawn"*/);
    byte_434F8E8 = 1;
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
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_10109/*"OnDespawn"*/, 1, 0LL);
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
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v9);
    v12 = System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_1CC7950 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v13 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v13 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    static_fields = v13->static_fields;
    _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v13->vtable._0_Equals.methodPtr) & 4) != 0 && !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      }
      v16 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B70764(System_Func_Transform__GameObject__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_0,
        v16,
        Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__,
        (const MethodInfo_29ADCC4 *)Method_System_Func_Transform__GameObject___ctor__);
      v17 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      v17->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_B70630(
        (BattleServantConfConponent_o *)&v17->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
    }
    v24 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_1CC4218 *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v25 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B70764(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v25,
      (Il2CppObject *)this,
      Method_Spawner_SpawnerImpl__Despawn_b__17_1__,
      (const MethodInfo_29AC578 *)Method_System_Func_GameObject__bool___ctor__);
    v26 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v24,
            (System_Func_TSource__bool__o *)v25,
            (const MethodInfo_1CCCE44 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)System_Linq_Enumerable__Reverse_BattleActionData_MasterBuffData_(
                                                                         v26,
                                                                         (const MethodInfo_1CC05A0 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v28 = IsAlive;
      if ( *(_WORD *)&IsAlive->klass->_2.bitflags1 )
      {
        v29 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          ++v29;
          p_offset += 4;
          if ( v29 >= *(unsigned __int16 *)&IsAlive->klass->_2.bitflags1 )
            goto LABEL_24;
        }
        v31 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_24:
        v31 = sub_B08590(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v33 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_string__bool__o *, _QWORD))v31)(
              v28,
              *(_QWORD *)(v31 + 8));
      if ( !v33 )
        sub_B7076C(0LL, v32);
      while ( 1 )
      {
        v34 = *(_QWORD *)v33;
        if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
        {
          v35 = 0LL;
          v36 = (int *)(*(_QWORD *)(v34 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v36 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v35;
            v36 += 4;
            if ( v35 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
              goto LABEL_31;
          }
          v37 = v34 + 16LL * *v36 + 312;
        }
        else
        {
LABEL_31:
          v37 = sub_B08590(v33, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v37)(v33, *(_QWORD *)(v37 + 8)) & 1) == 0 )
          break;
        v38 = *(_QWORD *)v33;
        if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
        {
          v39 = 0LL;
          v40 = (int *)(*(_QWORD *)(v38 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v40 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            ++v39;
            v40 += 4;
            if ( v39 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
              goto LABEL_38;
          }
          v41 = v38 + 16LL * *v40 + 312;
        }
        else
        {
LABEL_38:
          v41 = sub_B08590(v33, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v42 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v41)(v33, *(_QWORD *)(v41 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v42, v43);
      }
      v44 = *(_QWORD *)v33;
      if ( *(_WORD *)(*(_QWORD *)v33 + 298LL) )
      {
        v45 = 0LL;
        v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v46 - 1) != System_IDisposable_TypeInfo )
        {
          ++v45;
          v46 += 4;
          if ( v45 >= *(unsigned __int16 *)(*(_QWORD *)v33 + 298LL) )
            goto LABEL_45;
        }
        v47 = v44 + 16LL * *v46 + 312;
      }
      else
      {
LABEL_45:
        v47 = sub_B08590(v33, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v47)(v33, *(_QWORD *)(v47 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
               IsAlive,
               (System_String_o *)objectToDespawn,
               (const MethodInfo_2FA7E50 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v48);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v48);
        }
        return;
      }
    }
LABEL_52:
    sub_B7076C(IsAlive, v8);
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

  if ( (byte_434F8EA & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_GameObject__Add__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F8EA = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_36067208((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_B7076C(0LL, v5);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)destroyedUnmanagedObjects,
    (WarBoardAIRoute_RouteData_o *)obj,
    (const MethodInfo_2EB5A0C *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v7);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  Spawner_SpawnerImpl___c_c *v4; // x0
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x20
  Il2CppObject *v7; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *v8; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_434F8EB & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
    sub_B70694(&Method_System_Predicate_GameObject___ctor__);
    sub_B70694(&System_Predicate_GameObject__TypeInfo);
    sub_B70694(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__);
    sub_B70694(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_434F8EB = 1;
  }
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  v4 = Spawner_SpawnerImpl___c_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v4 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v4->vtable._0_Equals.methodPtr) & 4) != 0 && !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    }
    v7 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B70764(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v7,
      Method_Spawner_SpawnerImpl___c__GC_b__20_0__,
      (const MethodInfo_2BF23B8 *)Method_System_Predicate_GameObject___ctor__);
    v8 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    v8->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_B70630(
      (BattleServantConfConponent_o *)&v8->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
  }
  if ( !destroyedUnmanagedObjects )
    sub_B7076C(v4, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_2EB5FAC *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *caches; // x0
  int v4; // w20
  _BOOL8 v5; // x0
  __int64 v6; // x1
  Spawner_SpawnerImpl_ObjectCache_o *currentValue; // x19
  int v8; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_434F8E4 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
    byte_434F8E4 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                              caches,
                                                                                              (const MethodInfo_2F4F78C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_B7076C(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_26682B0 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v4 = 0;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
           &v10,
           (const MethodInfo_277CB58 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v5 )
      break;
    currentValue = (Spawner_SpawnerImpl_ObjectCache_o *)v10.fields.currentValue;
    if ( !v10.fields.currentValue )
      sub_B7076C(v5, v6);
    if ( !Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
            (Spawner_SpawnerImpl_ObjectCache_o *)v10.fields.currentValue,
            0LL) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize(currentValue, 0LL);
      v4 += currentValue->fields.cacheSize;
    }
    if ( v4 >= 32 )
    {
      v8 = 8;
      goto LABEL_13;
    }
  }
  v8 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v10,
    (const MethodInfo_277CB54 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v8 != 8;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_434F8EC & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_434F8EC = 1;
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
             (const MethodInfo_2FA999C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)managedObjects,
                  (BattleBuffData_BuffData_o *)obj,
                  (const MethodInfo_2EB4ED4 *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_B7076C(managedObjects, v5);
  }
  return 0;
}


void __fastcall Spawner_SpawnerImpl__Number(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_UIPanel__int__o *serialNumbers; // x0
  int32_t v8; // w2
  Il2CppObject *name; // x20
  __int64 v10; // x2
  Il2CppObject *v11; // x0
  int32_t v12; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_434F8E6 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__);
    sub_B70694(&int_TypeInfo);
    sub_B70694(&StringLiteral_23965/*"{0}({1})"*/);
    byte_434F8E6 = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
    serialNumbers,
    (UIPanel_o *)prefab,
    &value,
    (const MethodInfo_2FB176C *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  v8 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)serialNumbers,
          (System_Xml_XmlQualifiedName_o *)prefab,
          v8,
          (const MethodInfo_2FAF990 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v12 = value,
        v11 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v12, v10),
        serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)System_String__Format_44753704(
                                                                                   (System_String_o *)StringLiteral_23965/*"{0}({1})"*/,
                                                                                   name,
                                                                                   v11,
                                                                                   0LL),
        !obj) )
  {
LABEL_8:
    sub_B7076C(serialNumbers, prefab);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v10; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x24

  if ( (byte_434F8E3 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
    sub_B70694(&Spawner_SpawnerImpl_ObjectCache_TypeInfo);
    byte_434F8E3 = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         (const MethodInfo_2F4FC5C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v10 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  v11 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B70764(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v11, this, prefab, cacheSize, overflowPolicy, 0LL);
  if ( !v10 )
LABEL_7:
    sub_B7076C(caches, prefab);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v10,
    (System_Xml_XmlQualifiedName_o *)prefab,
    (System_Xml_Schema_XmlSchemaObject_o *)v11,
    (const MethodInfo_2F4F9C0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *result; // x0
  __int64 v21; // x0
  __int64 v22; // x1
  Spawner_SpawnerImpl_o *v23; // x0
  UnityEngine_Object_o *v24; // x1
  UnityEngine_GameObject_o *v25; // x2
  const MethodInfo *v26; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v28; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v29; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v31; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_434F8E5 & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__);
    sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    sub_B70694(&StringLiteral_10180/*"OnSpawn"*/);
    byte_434F8E5 = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         &value,
         (const MethodInfo_2F517E8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
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
      v29.fields.x = v13;
      v29.fields.y = v12;
      v29.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v29, 0LL);
      caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__get_transform(
                                                                                               (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                                               0LL);
      if ( !caches )
        goto LABEL_32;
      v30.fields.x = x;
      v30.fields.y = y;
      v30.fields.z = z;
      v30.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v30, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_string__bool___set_Item(
        (System_Collections_Generic_Dictionary_string__bool__o *)caches,
        (System_String_o *)NextObjectInCache,
        1,
        (const MethodInfo_2FA7B9C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_26;
    }
LABEL_32:
    sub_B7076C(caches, prefab);
  }
  if ( overridesPositionAndRotation )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v28.fields.x = v13;
    v28.fields.y = v12;
    v28.fields.z = v11;
    v31.fields.x = x;
    v31.fields.y = y;
    v31.fields.z = z;
    v31.fields.w = w;
    v18 = UnityEngine_Object__Instantiate(prefab, v28, v31, 0LL);
    if ( v18 )
      goto LABEL_17;
LABEL_31:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v19);
    sub_B7076C(v21, v22);
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v18 = UnityEngine_Object__Instantiate_36066356(prefab, 0LL);
  if ( !v18 )
    goto LABEL_31;
LABEL_17:
  NextObjectInCache = v18;
  if ( (UnityEngine_GameObject_c *)v18->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v18, v19);
LABEL_26:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_10180/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  v23 = (Spawner_SpawnerImpl_o *)sub_B70A60(v18);
  Spawner_SpawnerImpl__Number(v23, v24, v25, v26);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0

  if ( (byte_434F8EF & 1) == 0 )
  {
    sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    byte_434F8EF = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_B7076C(0LL, x);
  return System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           managedObjects,
           (System_String_o *)x,
           (const MethodInfo_2FA7E50 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_B70630(
    (BattleServantConfConponent_o *)&v10->fields,
    (System_Int32_array **)spawnerImpl,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_B70630((BattleServantConfConponent_o *)v10, (System_Int32_array **)prefab, v17, v18, v19, v20, v21, v22);
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
  if ( (byte_43515E6 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B70694(&Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    byte_43515E6 = 1;
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
      v12 = sub_B70798(this);
      sub_B70738(v12, 0LL);
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
                                                  (const MethodInfo_2FA7B00 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
    sub_B7076C(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_string__bool__o *)this,
                                                v7,
                                                (const MethodInfo_2FA7B00 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  unsigned __int64 v10; // x22
  __int64 i; // x23
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v15; // x1
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_Int32_array **v22; // x20
  UnityEngine_Transform_o *v23; // x21
  __int64 v24; // x0
  __int64 v25; // x0

  if ( (byte_43515E5 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_GameObject___TypeInfo);
    sub_B70694(&UnityEngine_GameObject_TypeInfo);
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43515E5 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_B706AC(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v3;
  sub_B70630((BattleServantConfConponent_o *)&this->fields.objects, (System_Int32_array **)v3, v4, v5, v6, v7, v8, v9);
  if ( this->fields.cacheSize >= 1 )
  {
    v10 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_36066356(prefab, 0LL);
      v22 = (System_Int32_array **)transform;
      if ( transform )
      {
        v15 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_22;
      if ( transform )
      {
        transform = (UnityEngine_Transform_o *)sub_B70754(transform, objects->obj.klass->_1.element_class);
        if ( !transform )
          goto LABEL_25;
      }
      if ( v10 >= objects->max_length )
      {
        v24 = sub_B70798(transform);
        sub_B70738(v24, 0LL);
      }
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)v22;
      sub_B70630((BattleServantConfConponent_o *)((char *)objects + i), v22, v16, v17, v18, v19, v20, v21);
      if ( i == 32 )
      {
        if ( !v22 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v22, 0LL)) == 0LL )
LABEL_22:
          sub_B7076C(transform, v15);
        v23 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v23, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v23, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__Number(
        (Spawner_SpawnerImpl_o *)transform,
        this->fields.prefab,
        (UnityEngine_GameObject_o *)v22,
        0LL);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__DeactivateCachedObject(
        (Spawner_SpawnerImpl_o *)transform,
        (UnityEngine_GameObject_o *)v22,
        0LL);
      if ( (__int64)++v10 >= this->fields.cacheSize )
        return;
    }
    transform = (UnityEngine_Transform_o *)sub_B70A60(transform);
LABEL_25:
    v25 = sub_B7078C(transform);
    sub_B70738(v25, 0LL);
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
  Il2CppObject *v1; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7

  if ( (byte_43515E3 & 1) == 0 )
  {
    sub_B70694(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_43515E3 = 1;
  }
  v1 = (Il2CppObject *)sub_B70764(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  static_fields = (BattleServantConfConponent_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v1;
  sub_B70630(static_fields, (System_Int32_array **)v1, v3, v4, v5, v6, v7, v8);
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
    sub_B7076C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_43515E4 & 1) == 0 )
  {
    sub_B70694(&UnityEngine_Object_TypeInfo);
    byte_43515E4 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}