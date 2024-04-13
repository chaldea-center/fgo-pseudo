void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E920A & 1) == 0 )
  {
    sub_B5D5C4(&Method_SingletonMonoBehaviour_Spawner___ctor__, (_DWORD)method, v2, v3);
    byte_42E920A = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A301CC *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  Spawner_ResourcePrecacher_o *v17; // x20
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v24; // x20
  System_String_array **v25; // x2
  System_String_array **v26; // x3
  System_Boolean_array **v27; // x4
  System_Int32_array **v28; // x5
  System_Int32_array *v29; // x6
  System_Int32_array *v30; // x7
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v32; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7

  if ( (byte_42E9207 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___68768736, (_DWORD)method, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo, v5, v6, v7);
    sub_B5D5C4(&Spawner_ResourcePrecacher_TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_SingletonMonoBehaviour_Spawner__Awake__, v11, v12, v13);
    sub_B5D5C4(&Spawner_SpawnerImpl_TypeInfo, v14, v15, v16);
    byte_42E9207 = 1;
  }
  v17 = (Spawner_ResourcePrecacher_o *)sub_B5D694(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v17, 0LL);
  this->fields.resourcePrecacher = v17;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.resourcePrecacher,
    (System_Int32_array **)v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v24 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_B5D694(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_45741944(
    v24,
    32,
    (const MethodInfo_2B9F778 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___68768736);
  this->fields.requestsByPath = v24;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.requestsByPath,
    (System_Int32_array **)v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v32 = (Spawner_SpawnerImpl_o *)sub_B5D694(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v32, transform, 0LL);
  this->fields.spawnerImpl = v32;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.spawnerImpl,
    (System_Int32_array **)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A30094 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B5D69C(0LL, obj);
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
    sub_B5D69C(0LL, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, 0LL);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v9; // kr00_16

  if ( (byte_42E9209 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__, v5, v6, v7);
    byte_42E9209 = 1;
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
    v9 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_2B9FF38 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    method = *(const MethodInfo **)&v9.fields.cacheSize;
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v9.fields.path,
                                                           0LL);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v9.fields.cacheSize,
          v9.fields.overflowPolicy,
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
    sub_B5D69C(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, 0LL);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_26157000(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_26156992(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_26157000(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner__Precache_26157000(
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

  if ( (byte_42E9208 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__,
      (_DWORD)path,
      cacheSize,
      *(_QWORD *)&overflowPolicy);
    byte_42E9208 = 1;
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
    sub_B5D69C(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v12,
    (const MethodInfo_2B9FD1C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_26157204(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_26157212(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_26157212(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B5D69C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, 0LL);
}


void __fastcall Spawner__Precache_26157244(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B5D69C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, 0LL);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_B5D69C(0LL, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, 0LL);
  return Spawner__Spawn_26157572(this, Resource, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26157572(
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
    sub_B5D69C(v8, v9);
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
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26157716(
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
    sub_B5D69C(0LL, path);
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
  return Spawner__Spawn_26157860(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_26157860(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B5D69C(0LL, prefab);
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
  sub_B5D560(this.fields.path);
  LODWORD(v7->monitor) = v6;
  HIDWORD(v7->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v8; // x20

  if ( (byte_42E642A & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo, v5, v6, v7);
    byte_42E642A = 1;
  }
  v8 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v8,
    32,
    (const MethodInfo_2F26038 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v8;
  sub_B5D560(&this->fields);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  struct System_String_o *sourceUri; // x20
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_42E6428 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6428 = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_14;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue((System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements, (System_Xml_XmlQualifiedName_o *)path, &value, (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) == 0 )
  {
    sourceUri = 0LL;
    goto LABEL_8;
  }
  if ( !value )
LABEL_14:
    sub_B5D69C(elements, path);
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
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v18; // x0
  __int64 v19; // x1
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v22; // x19
  __int64 v23; // x1
  int v24; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_42E6426 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E6426 = 1;
  }
  memset(&v27, 0, sizeof(v27));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                                elements,
                                                                                                (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_B5D69C(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v26,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v27 = v26;
  while ( 1 )
  {
    do
    {
      v18 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v27,
              (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v18 )
      {
        v24 = 7;
        goto LABEL_14;
      }
      currentValue = v27.fields.currentValue;
      if ( !v27.fields.currentValue )
        sub_B5D69C(v18, v19);
      v22 = (UnityEngine_ResourceRequest_o **)&v27.fields.currentValue[1];
      klass = v27.fields.currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v22 )
      sub_B5D69C(0LL, v23);
    currentValue[1].monitor = UnityEngine_ResourceRequest__get_asset(*v22, 0LL);
    sub_B5D560(&currentValue[1].monitor);
    *v22 = 0LL;
    sub_B5D560(v22);
  }
  v24 = 9;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v27,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v24 != 9;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_42E6424 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    byte_42E6424 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B5D69C(0LL, path);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           elements,
           (System_Xml_XmlQualifiedName_o *)path,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_42E6425 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6425 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B5D69C(0LL, method);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
           elements,
           (const MethodInfo_2F267B8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  Spawner_ResourcePrecacher_Element_o *v9; // x21
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0
  __int64 v11; // x1

  if ( (byte_42E6423 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__,
      (_DWORD)path,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Spawner_ResourcePrecacher_Element_TypeInfo, v6, v7, v8);
    byte_42E6423 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v9 = (Spawner_ResourcePrecacher_Element_o *)sub_B5D694(Spawner_ResourcePrecacher_Element_TypeInfo);
    Spawner_ResourcePrecacher_Element___ctor(v9, 0LL);
    elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_Resources__Load(
                                                                                               path,
                                                                                               0LL);
    if ( !v9
      || (v9->fields.asset = (struct UnityEngine_Object_o *)elements,
          sub_B5D560(&v9->fields.asset),
          (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements) == 0LL) )
    {
      sub_B5D69C(elements, v11);
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      elements,
      (System_Xml_XmlQualifiedName_o *)path,
      (System_Xml_Schema_XmlSchemaObject_o *)v9,
      (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void __fastcall Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *elements; // x0
  _BOOL8 v24; // x0
  __int64 v25; // x1
  Il2CppObject *currentValue; // x23
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_42E6429 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v14,
      v15,
      v16);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v17, v18, v19);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v20,
      v21,
      v22);
    byte_42E6429 = 1;
  }
  memset(&v28, 0, sizeof(v28));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_16;
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                          elements,
                                                                                          (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v28,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v24 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v28,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v24 )
      break;
    currentValue = v28.fields.currentValue;
    if ( !v28.fields.currentValue )
      sub_B5D69C(v24, v25);
    monitor = (UnityEngine_Object_o *)v28.fields.currentValue[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v28,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
LABEL_16:
    sub_B5D69C(elements, method);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)elements,
    (const MethodInfo_2F26D98 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_42E6427 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__,
      (_DWORD)method,
      v2,
      v3);
    byte_42E6427 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_B5D69C(0LL, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
                                                               elements,
                                                               (const MethodInfo_2F267C8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void __fastcall Spawner_ResourcePrecacher_Element___ctor(
        Spawner_ResourcePrecacher_Element_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  int v4; // w1
  int v5; // w2
  __int64 v6; // x3
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v10; // x19
  struct Spawner_SpawnerImpl_StaticFields *static_fields; // x0

  if ( (byte_42E6437 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Transform___ctor__, v1, v2, v3);
    sub_B5D5C4(&System_Collections_Generic_Queue_Transform__TypeInfo, v4, v5, v6);
    sub_B5D5C4(&Spawner_SpawnerImpl_TypeInfo, v7, v8, v9);
    byte_42E6437 = 1;
  }
  v10 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B5D694(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v10,
    (const MethodInfo_2B9DEAC *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  static_fields = Spawner_SpawnerImpl_TypeInfo->static_fields;
  static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v10;
  sub_B5D560(static_fields);
}


void __fastcall Spawner_SpawnerImpl___ctor(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  Spawner_SpawnerImpl_Fields *p_fields; // x19
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v28; // x20
  System_Collections_Generic_Dictionary_TKey__TValue__o *v29; // x20
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v30; // x20
  System_Collections_Generic_Dictionary_string__int__o *v31; // x20

  if ( (byte_42E642B & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__,
      (_DWORD)parent,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__, v6, v7, v8);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__, v9, v10, v11);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo, v12, v13, v14);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_Object__int__TypeInfo, v15, v16, v17);
    sub_B5D5C4(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_GameObject___ctor__, v21, v22, v23);
    sub_B5D5C4(&System_Collections_Generic_HashSet_GameObject__TypeInfo, v24, v25, v26);
    byte_42E642B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  p_fields = &this->fields;
  sub_B5D560(p_fields);
  v28 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B5D694(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v28,
    32,
    (const MethodInfo_2F26038 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  p_fields->caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v28;
  sub_B5D560(&p_fields->caches);
  v29 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B5D694(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor(
    v29,
    128,
    (const MethodInfo_2F12AC8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  p_fields->managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v29;
  sub_B5D560(&p_fields->managedObjects);
  v30 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B5D694(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v30,
    (const MethodInfo_2505E54 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  p_fields->destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v30;
  sub_B5D560(&p_fields->destroyedUnmanagedObjects);
  v31 = (System_Collections_Generic_Dictionary_string__int__o *)sub_B5D694(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_string__int____ctor(
    v31,
    32,
    (const MethodInfo_2F1A8BC *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  p_fields->serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v31;
  sub_B5D560(&p_fields->serialNumbers);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v26; // x19
  __int64 v27; // x1
  Spawner_SpawnerImpl_c *v28; // x0
  void *q; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v30; // x8
  UnityEngine_Transform_o *v31; // x20
  int32_t v32; // w21
  Spawner_SpawnerImpl_c *v33; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v34; // x22

  if ( (byte_42E6430 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform__Add__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Collections_Generic_List_Transform___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Collections_Generic_List_Transform__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Transform__Clear__, v11, v12, v13);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Transform__Dequeue__, v14, v15, v16);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Transform__Enqueue__, v17, v18, v19);
    sub_B5D5C4(&Method_System_Collections_Generic_Queue_Transform__get_Count__, v20, v21, v22);
    sub_B5D5C4(&Spawner_SpawnerImpl_TypeInfo, v23, v24, v25);
    byte_42E6430 = 1;
  }
  v26 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B5D694(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v26,
    (const MethodInfo_30562FC *)Method_System_Collections_Generic_List_Transform___ctor__);
  v28 = Spawner_SpawnerImpl_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v28 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = v28->static_fields->q;
  if ( !q )
    goto LABEL_29;
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)q,
    (Mono_Net_CFNetwork_GetProxyData_o *)root,
    (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
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
    v30 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)**((_QWORD **)q + 23);
    if ( !v30 )
      goto LABEL_29;
    if ( v30->fields._size <= 0 )
      break;
    if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
    {
      j_il2cpp_runtime_class_init_0(q);
      v30 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !v30 )
        goto LABEL_29;
    }
    q = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
          v30,
          (const MethodInfo_2B9E6B8 *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v26 )
      goto LABEL_29;
    v31 = (UnityEngine_Transform_o *)q;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v26,
      (EventMissionProgressRequest_Argument_ProgressData_o *)q,
      (const MethodInfo_3056FC0 *)Method_System_Collections_Generic_List_Transform__Add__);
    if ( !v31 )
      goto LABEL_29;
    if ( UnityEngine_Transform__get_childCount(v31, 0LL) >= 1 )
    {
      v32 = 0;
      while ( 1 )
      {
        v33 = Spawner_SpawnerImpl_TypeInfo;
        if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v33 = Spawner_SpawnerImpl_TypeInfo;
        }
        v34 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v33->static_fields->q;
        q = UnityEngine_Transform__GetChild(v31, v32, 0LL);
        if ( !v34 )
          break;
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          v34,
          (Mono_Net_CFNetwork_GetProxyData_o *)q,
          (const MethodInfo_2B9E4A0 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v32 >= UnityEngine_Transform__get_childCount(v31, 0LL) )
          goto LABEL_20;
      }
LABEL_29:
      sub_B5D69C(q, v27);
    }
  }
  if ( (*((_WORD *)q + 153) & 0x400) != 0 && !*((_DWORD *)q + 56) )
  {
    j_il2cpp_runtime_class_init_0(q);
    v30 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
    if ( !v30 )
      goto LABEL_29;
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v30,
    (const MethodInfo_2B9E140 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v26;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0

  if ( (byte_42E6436 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    byte_42E6436 = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    sub_B5D69C(0LL, obj);
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           caches,
           (System_Xml_XmlQualifiedName_o *)obj,
           (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  Spawner_SpawnerImpl_o *v5; // x19

  v5 = this;
  if ( (byte_42E6432 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_B5D5C4(
                                      &Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__,
                                      (_DWORD)obj,
                                      (_DWORD)method,
                                      v3);
    byte_42E6432 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v5->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_string__bool___set_Item(
          (System_Collections_Generic_Dictionary_string__bool__o *)this,
          (System_String_o *)obj,
          0,
          (const MethodInfo_2F13628 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B5D69C(this, obj);
  }
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v5->fields.parent, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner_SpawnerImpl__Despawn(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *objectToDespawn,
        bool sendsDespawn,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  int v22; // w1
  int v23; // w2
  __int64 v24; // x3
  int v25; // w1
  int v26; // w2
  __int64 v27; // x3
  int v28; // w1
  int v29; // w2
  __int64 v30; // x3
  int v31; // w1
  int v32; // w2
  __int64 v33; // x3
  int v34; // w1
  int v35; // w2
  __int64 v36; // x3
  int v37; // w1
  int v38; // w2
  __int64 v39; // x3
  int v40; // w1
  int v41; // w2
  __int64 v42; // x3
  int v43; // w1
  int v44; // w2
  __int64 v45; // x3
  int v46; // w1
  int v47; // w2
  __int64 v48; // x3
  int v49; // w1
  int v50; // w2
  __int64 v51; // x3
  int v52; // w1
  int v53; // w2
  __int64 v54; // x3
  int v55; // w1
  int v56; // w2
  __int64 v57; // x3
  System_Collections_Generic_Dictionary_string__bool__o *IsAlive; // x0
  __int64 v59; // x1
  const MethodInfo *v60; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v63; // x21
  Spawner_SpawnerImpl___c_c *v64; // x8
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__17_0; // x22
  Il2CppObject *v67; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *v68; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v69; // x21
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v70; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v71; // x0
  __int64 v72; // x3
  System_Collections_Generic_Dictionary_string__bool__c *klass; // x8
  System_Collections_Generic_Dictionary_string__bool__o *v74; // x21
  unsigned __int64 v75; // x10
  int32_t *p_offset; // x11
  __int64 v77; // x0
  __int64 v78; // x1
  __int64 v79; // x3
  __int64 v80; // x21
  __int64 v81; // x8
  unsigned __int64 v82; // x10
  int *v83; // x11
  __int64 v84; // x0
  __int64 v85; // x3
  __int64 v86; // x8
  unsigned __int64 v87; // x10
  int *v88; // x11
  __int64 v89; // x0
  UnityEngine_GameObject_o *v90; // x1
  const MethodInfo *v91; // x2
  __int64 v92; // x8
  unsigned __int64 v93; // x10
  int *v94; // x11
  __int64 v95; // x0
  const MethodInfo *v96; // x2

  if ( (byte_42E6431 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__,
      (_DWORD)objectToDespawn,
      sendsDespawn,
      method);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Reverse_GameObject___, v7, v8, v9);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Select_Transform__GameObject___, v10, v11, v12);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Skip_Transform___, v13, v14, v15);
    sub_B5D5C4(&Method_System_Linq_Enumerable_Where_GameObject___, v16, v17, v18);
    sub_B5D5C4(&Method_System_Func_GameObject__bool___ctor__, v19, v20, v21);
    sub_B5D5C4(&Method_System_Func_Transform__GameObject___ctor__, v22, v23, v24);
    sub_B5D5C4(&System_Func_Transform__GameObject__TypeInfo, v25, v26, v27);
    sub_B5D5C4(&System_Func_GameObject__bool__TypeInfo, v28, v29, v30);
    sub_B5D5C4(&System_IDisposable_TypeInfo, v31, v32, v33);
    sub_B5D5C4(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v34, v35, v36);
    sub_B5D5C4(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v37, v38, v39);
    sub_B5D5C4(&System_Collections_IEnumerator_TypeInfo, v40, v41, v42);
    sub_B5D5C4(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__, v43, v44, v45);
    sub_B5D5C4(&Spawner_SpawnerImpl_TypeInfo, v46, v47, v48);
    sub_B5D5C4(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, v49, v50, v51);
    sub_B5D5C4(&Spawner_SpawnerImpl___c_TypeInfo, v52, v53, v54);
    sub_B5D5C4(&StringLiteral_10092/*"OnDespawn"*/, v55, v56, v57);
    byte_42E6431 = 1;
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
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_10092/*"OnDespawn"*/, 1, 0LL);
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
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v60);
    v63 = System_Linq_Enumerable__Skip_BattleBuffData_CheckIndividualitiesData_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_1CB6AFC *)Method_System_Linq_Enumerable_Skip_Transform___);
    v64 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v64 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    static_fields = v64->static_fields;
    _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v64->vtable._0_Equals.methodPtr) & 4) != 0 && !v64->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v64);
        static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      }
      v67 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B5D694(System_Func_Transform__GameObject__TypeInfo);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_0,
        v67,
        Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__,
        (const MethodInfo_2C3041C *)Method_System_Func_Transform__GameObject___ctor__);
      v68 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      v68->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_B5D560(&v68->__9__17_0);
    }
    v69 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v63,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_1CB354C *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v70 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B5D694(System_Func_GameObject__bool__TypeInfo);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v70,
      (Il2CppObject *)this,
      Method_Spawner_SpawnerImpl__Despawn_b__17_1__,
      (const MethodInfo_2C2ECD0 *)Method_System_Func_GameObject__bool___ctor__);
    v71 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v69,
            (System_Func_TSource__bool__o *)v70,
            (const MethodInfo_1CBBF10 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)System_Linq_Enumerable__Reverse_BattleActionData_MasterBuffData_(
                                                                         v71,
                                                                         (const MethodInfo_1CAFBE8 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v74 = IsAlive;
      if ( *(_WORD *)&IsAlive->klass->_2.bitflags1 )
      {
        v75 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          ++v75;
          p_offset += 4;
          if ( v75 >= *(unsigned __int16 *)&IsAlive->klass->_2.bitflags1 )
            goto LABEL_24;
        }
        v77 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_24:
        v77 = sub_AF54C0(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL, v72);
      }
      v80 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_string__bool__o *, _QWORD))v77)(
              v74,
              *(_QWORD *)(v77 + 8));
      if ( !v80 )
        sub_B5D69C(0LL, v78);
      while ( 1 )
      {
        v81 = *(_QWORD *)v80;
        if ( *(_WORD *)(*(_QWORD *)v80 + 298LL) )
        {
          v82 = 0LL;
          v83 = (int *)(*(_QWORD *)(v81 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v83 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v82;
            v83 += 4;
            if ( v82 >= *(unsigned __int16 *)(*(_QWORD *)v80 + 298LL) )
              goto LABEL_31;
          }
          v84 = v81 + 16LL * *v83 + 312;
        }
        else
        {
LABEL_31:
          v84 = sub_AF54C0(v80, System_Collections_IEnumerator_TypeInfo, 0LL, v79);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v84)(v80, *(_QWORD *)(v84 + 8)) & 1) == 0 )
          break;
        v86 = *(_QWORD *)v80;
        if ( *(_WORD *)(*(_QWORD *)v80 + 298LL) )
        {
          v87 = 0LL;
          v88 = (int *)(*(_QWORD *)(v86 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v88 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            ++v87;
            v88 += 4;
            if ( v87 >= *(unsigned __int16 *)(*(_QWORD *)v80 + 298LL) )
              goto LABEL_38;
          }
          v89 = v86 + 16LL * *v88 + 312;
        }
        else
        {
LABEL_38:
          v89 = sub_AF54C0(v80, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL, v85);
        }
        v90 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v89)(v80, *(_QWORD *)(v89 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v90, v91);
      }
      v92 = *(_QWORD *)v80;
      if ( *(_WORD *)(*(_QWORD *)v80 + 298LL) )
      {
        v93 = 0LL;
        v94 = (int *)(*(_QWORD *)(v92 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v94 - 1) != System_IDisposable_TypeInfo )
        {
          ++v93;
          v94 += 4;
          if ( v93 >= *(unsigned __int16 *)(*(_QWORD *)v80 + 298LL) )
            goto LABEL_45;
        }
        v95 = v92 + 16LL * *v94 + 312;
      }
      else
      {
LABEL_45:
        v95 = sub_AF54C0(v80, System_IDisposable_TypeInfo, 0LL, v85);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v95)(v80, *(_QWORD *)(v95 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
               IsAlive,
               (System_String_o *)objectToDespawn,
               (const MethodInfo_2F138DC *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v96);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v96);
        }
        return;
      }
    }
LABEL_52:
    sub_B5D69C(IsAlive, v59);
  }
}


void __fastcall Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  __int64 v9; // x1
  struct System_Collections_Generic_HashSet_GameObject__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v11; // x1
  float unscaledTime; // s0

  if ( (byte_42E6433 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_GameObject__Add__, (_DWORD)obj, (_DWORD)method, v3);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v6, v7, v8);
    byte_42E6433 = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_35620236((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_B5D69C(0LL, v9);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)destroyedUnmanagedObjects,
    (WarBoardAIRoute_RouteData_o *)obj,
    (const MethodInfo_2507010 *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v11);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  Spawner_SpawnerImpl___c_c *v18; // x0
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x20
  Il2CppObject *v21; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *v22; // x0

  if ( (byte_42E6434 & 1) == 0 )
  {
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_System_Predicate_GameObject___ctor__, v5, v6, v7);
    sub_B5D5C4(&System_Predicate_GameObject__TypeInfo, v8, v9, v10);
    sub_B5D5C4(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__, v11, v12, v13);
    sub_B5D5C4(&Spawner_SpawnerImpl___c_TypeInfo, v14, v15, v16);
    byte_42E6434 = 1;
  }
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  v18 = Spawner_SpawnerImpl___c_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v18 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  static_fields = v18->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v18->vtable._0_Equals.methodPtr) & 4) != 0 && !v18->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v18);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    }
    v21 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B5D694(System_Predicate_GameObject__TypeInfo);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v21,
      Method_Spawner_SpawnerImpl___c__GC_b__20_0__,
      (const MethodInfo_2B9320C *)Method_System_Predicate_GameObject___ctor__);
    v22 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    v22->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_B5D560(&v22->__9__20_0);
  }
  if ( !destroyedUnmanagedObjects )
    sub_B5D69C(v18, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_25075B0 *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *caches; // x0
  int v18; // w20
  _BOOL8 v19; // x0
  __int64 v20; // x1
  Spawner_SpawnerImpl_ObjectCache_o *currentValue; // x19
  int v22; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v24; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_42E642D & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__,
      (_DWORD)method,
      v2,
      v3);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__,
      v5,
      v6,
      v7);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__,
      v8,
      v9,
      v10);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__,
      v11,
      v12,
      v13);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__,
      v14,
      v15,
      v16);
    byte_42E642D = 1;
  }
  memset(&v24, 0, sizeof(v24));
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                                                                                              caches,
                                                                                              (const MethodInfo_2F26960 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_B5D69C(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v24,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_23C48C4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v18 = 0;
  while ( 1 )
  {
    v19 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v24,
            (const MethodInfo_27693B8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v19 )
      break;
    currentValue = (Spawner_SpawnerImpl_ObjectCache_o *)v24.fields.currentValue;
    if ( !v24.fields.currentValue )
      sub_B5D69C(v19, v20);
    if ( !Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
            (Spawner_SpawnerImpl_ObjectCache_o *)v24.fields.currentValue,
            0LL) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize(currentValue, 0LL);
      v18 += currentValue->fields.cacheSize;
    }
    if ( v18 >= 32 )
    {
      v22 = 8;
      goto LABEL_13;
    }
  }
  v22 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v24,
    (const MethodInfo_27693B4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v22 != 8;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v3; // x3
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  __int64 v12; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_42E6435 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__,
      (_DWORD)obj,
      (_DWORD)method,
      v3);
    sub_B5D5C4(&Method_System_Collections_Generic_HashSet_GameObject__Contains__, v6, v7, v8);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v9, v10, v11);
    byte_42E6435 = 1;
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
             (const MethodInfo_2F15428 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)managedObjects,
                  (BattleBuffData_BuffData_o *)obj,
                  (const MethodInfo_25064D8 *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_B5D69C(managedObjects, v12);
  }
  return 0;
}


void __fastcall Spawner_SpawnerImpl__Number(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  System_Collections_Generic_Dictionary_UIPanel__int__o *serialNumbers; // x0
  int32_t v17; // w2
  Il2CppObject *name; // x20
  Il2CppObject *v19; // x0
  int32_t v20; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_42E642F & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__,
      (_DWORD)prefab,
      (_DWORD)obj,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__, v7, v8, v9);
    sub_B5D5C4(&int_TypeInfo, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_23893/*"{0}({1})"*/, v13, v14, v15);
    byte_42E642F = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
    serialNumbers,
    (UIPanel_o *)prefab,
    &value,
    (const MethodInfo_2F1D1F8 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  v17 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)serialNumbers,
          (System_Xml_XmlQualifiedName_o *)prefab,
          v17,
          (const MethodInfo_2F1B41C *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v20 = value,
        v19 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v20),
        serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)System_String__Format_44573324(
                                                                                   (System_String_o *)StringLiteral_23893/*"{0}({1})"*/,
                                                                                   name,
                                                                                   v19,
                                                                                   0LL),
        !obj) )
  {
LABEL_8:
    sub_B5D69C(serialNumbers, prefab);
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)obj, (System_String_o *)serialNumbers, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner_SpawnerImpl__Precache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  int v9; // w1
  int v10; // w2
  __int64 v11; // x3
  int v12; // w1
  int v13; // w2
  __int64 v14; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v16; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v17; // x24

  if ( (byte_42E642C & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      (_DWORD)prefab,
      cacheSize,
      *(_QWORD *)&overflowPolicy);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__,
      v9,
      v10,
      v11);
    sub_B5D5C4(&Spawner_SpawnerImpl_ObjectCache_TypeInfo, v12, v13, v14);
    byte_42E642C = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  v17 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B5D694(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v17, this, prefab, cacheSize, overflowPolicy, 0LL);
  if ( !v16 )
LABEL_7:
    sub_B5D69C(caches, prefab);
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v16,
    (System_Xml_XmlQualifiedName_o *)prefab,
    (System_Xml_Schema_XmlSchemaObject_o *)v17,
    (const MethodInfo_2F26B94 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  int v16; // w1
  char v17; // w2
  __int64 v18; // x3
  int v19; // w1
  char v20; // w2
  __int64 v21; // x3
  int v22; // w1
  char v23; // w2
  __int64 v24; // x3
  int v25; // w1
  char v26; // w2
  __int64 v27; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v30; // x0
  const MethodInfo *v31; // x3
  UnityEngine_GameObject_o *result; // x0
  __int64 v33; // x0
  __int64 v34; // x1
  Spawner_SpawnerImpl_o *v35; // x0
  UnityEngine_Object_o *v36; // x1
  UnityEngine_GameObject_o *v37; // x2
  const MethodInfo *v38; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v41; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v43; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_42E642E & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__,
      (_DWORD)prefab,
      overridesPositionAndRotation,
      method);
    sub_B5D5C4(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, v16, v17, v18);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v19, v20, v21);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v22, v23, v24);
    sub_B5D5C4(&StringLiteral_10163/*"OnSpawn"*/, v25, v26, v27);
    byte_42E642E = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         &value,
         (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
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
      v41.fields.x = v13;
      v41.fields.y = v12;
      v41.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v41, 0LL);
      caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)UnityEngine_GameObject__get_transform(
                                                                                               (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                                               0LL);
      if ( !caches )
        goto LABEL_32;
      v42.fields.x = x;
      v42.fields.y = y;
      v42.fields.z = z;
      v42.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v42, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_string__bool___set_Item(
        (System_Collections_Generic_Dictionary_string__bool__o *)caches,
        (System_String_o *)NextObjectInCache,
        1,
        (const MethodInfo_2F13628 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_26;
    }
LABEL_32:
    sub_B5D69C(caches, prefab);
  }
  if ( overridesPositionAndRotation )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v40.fields.x = v13;
    v40.fields.y = v12;
    v40.fields.z = v11;
    v43.fields.x = x;
    v43.fields.y = y;
    v43.fields.z = z;
    v43.fields.w = w;
    v30 = UnityEngine_Object__Instantiate(prefab, v40, v43, 0LL);
    if ( v30 )
      goto LABEL_17;
LABEL_31:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v31);
    sub_B5D69C(v33, v34);
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v30 = UnityEngine_Object__Instantiate_35619384(prefab, 0LL);
  if ( !v30 )
    goto LABEL_31;
LABEL_17:
  NextObjectInCache = v30;
  if ( (UnityEngine_GameObject_c *)v30->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v30, v31);
LABEL_26:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_10163/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  v35 = (Spawner_SpawnerImpl_o *)sub_B5D990(v30);
  Spawner_SpawnerImpl__Number(v35, v36, v37, v38);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0

  if ( (byte_42E6438 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__,
      (_DWORD)x,
      (_DWORD)method,
      v3);
    byte_42E6438 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_B5D69C(0LL, x);
  return System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           managedObjects,
           (System_String_o *)x,
           (const MethodInfo_2F138DC *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  sub_B5D560(
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
  sub_B5D560((BattleServantConfConponent_o *)v10, (System_Int32_array **)prefab, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = cacheSize;
  HIDWORD(v10->monitor) = overflowPolicy;
}


UnityEngine_GameObject_o *__fastcall Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  Spawner_SpawnerImpl_ObjectCache_o *v4; // x19
  struct UnityEngine_GameObject_array *objects; // x8
  int cacheIndex; // w9
  int32_t v7; // w22
  struct Spawner_SpawnerImpl_o *spawnerImpl; // x10
  System_String_o *v9; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v11; // x8
  UnityEngine_Transform_o *v12; // x21
  __int64 v14; // x0

  v4 = this;
  if ( (byte_42F5481 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B5D5C4(
                                                  &Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__,
                                                  (_DWORD)method,
                                                  v2,
                                                  v3);
    byte_42F5481 = 1;
  }
  objects = v4->fields.objects;
  if ( !objects || v4->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v4->fields.cacheIndex;
  v7 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
    {
      v14 = sub_B5D6C8(this);
      sub_B5D668(v14, 0LL);
    }
    spawnerImpl = v4->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_12;
    this = (Spawner_SpawnerImpl_ObjectCache_o *)spawnerImpl->fields.managedObjects;
    if ( !this )
      goto LABEL_12;
    v9 = (System_String_o *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                  (System_Collections_Generic_Dictionary_string__bool__o *)this,
                                                  v9,
                                                  (const MethodInfo_2F1358C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    cacheSize = v4->fields.cacheSize;
    ++v7;
    cacheIndex = (v4->fields.cacheIndex + 1) % cacheSize;
    v4->fields.cacheIndex = cacheIndex;
    if ( v7 >= cacheSize )
      break;
    objects = v4->fields.objects;
    if ( !objects )
      goto LABEL_12;
  }
  v11 = v4->fields.spawnerImpl;
  if ( !v11 || (this = (Spawner_SpawnerImpl_ObjectCache_o *)v11->fields.managedObjects) == 0LL )
LABEL_12:
    sub_B5D69C(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_string__bool__o *)this,
                                                v9,
                                                (const MethodInfo_2F1358C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v4->fields.overflowPolicy == 1 )
    {
      this = (Spawner_SpawnerImpl_ObjectCache_o *)v4->fields.spawnerImpl;
      if ( !this )
        goto LABEL_12;
      Spawner_SpawnerImpl__Despawn((Spawner_SpawnerImpl_o *)this, (UnityEngine_GameObject_o *)v9, 1, 0LL);
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  v4->fields.cacheIndex = (v4->fields.cacheIndex + 1) % v4->fields.cacheSize;
  if ( !v9 )
    goto LABEL_12;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  if ( !this )
    goto LABEL_12;
  v12 = (UnityEngine_Transform_o *)this;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0LL, 0LL);
  UnityEngine_Transform__set_localPosition(v12, v4->fields.defaultLocalPosition, 0LL);
  UnityEngine_Transform__set_localRotation(v12, v4->fields.defaultLocalRotation, 0LL);
  UnityEngine_Transform__set_localScale(v12, v4->fields.defaultLocalScale, 0LL);
  return (UnityEngine_GameObject_o *)v9;
}


void __fastcall Spawner_SpawnerImpl_ObjectCache__Initialize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int v8; // w1
  int v9; // w2
  __int64 v10; // x3
  struct UnityEngine_GameObject_array *v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  unsigned __int64 v18; // x22
  __int64 i; // x23
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_Int32_array **v30; // x20
  UnityEngine_Transform_o *v31; // x21
  __int64 v32; // x0
  __int64 v33; // x0

  if ( (byte_42F5480 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_GameObject___TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&UnityEngine_GameObject_TypeInfo, v5, v6, v7);
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, v8, v9, v10);
    byte_42F5480 = 1;
  }
  v11 = (struct UnityEngine_GameObject_array *)sub_B5D5DC(
                                                 UnityEngine_GameObject___TypeInfo,
                                                 (unsigned int)this->fields.cacheSize);
  this->fields.objects = v11;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.objects,
    (System_Int32_array **)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  if ( this->fields.cacheSize >= 1 )
  {
    v18 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_35619384(prefab, 0LL);
      v30 = (System_Int32_array **)transform;
      if ( transform )
      {
        v23 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_22;
      if ( transform )
      {
        transform = (UnityEngine_Transform_o *)sub_B5D684(transform, objects->obj.klass->_1.element_class);
        if ( !transform )
          goto LABEL_25;
      }
      if ( v18 >= objects->max_length )
      {
        v32 = sub_B5D6C8(transform);
        sub_B5D668(v32, 0LL);
      }
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)v30;
      sub_B5D560((BattleServantConfConponent_o *)((char *)objects + i), v30, v24, v25, v26, v27, v28, v29);
      if ( i == 32 )
      {
        if ( !v30 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v30, 0LL)) == 0LL )
LABEL_22:
          sub_B5D69C(transform, v23);
        v31 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v31, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v31, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__Number(
        (Spawner_SpawnerImpl_o *)transform,
        this->fields.prefab,
        (UnityEngine_GameObject_o *)v30,
        0LL);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_22;
      Spawner_SpawnerImpl__DeactivateCachedObject(
        (Spawner_SpawnerImpl_o *)transform,
        (UnityEngine_GameObject_o *)v30,
        0LL);
      if ( (__int64)++v18 >= this->fields.cacheSize )
        return;
    }
    sub_B5D990(transform);
LABEL_25:
    v33 = sub_B5D6BC(transform);
    sub_B5D668(v33, 0LL);
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
  int v1; // w1
  int v2; // w2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7

  if ( (byte_42F547E & 1) == 0 )
  {
    sub_B5D5C4(&Spawner_SpawnerImpl___c_TypeInfo, v1, v2, v3);
    byte_42F547E = 1;
  }
  v4 = (Il2CppObject *)sub_B5D694(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v4, 0LL);
  static_fields = (BattleServantConfConponent_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v4;
  sub_B5D560(static_fields, (System_Int32_array **)v4, v6, v7, v8, v9, v10, v11);
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
    sub_B5D69C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  __int64 v3; // x3

  if ( (byte_42F547F & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)x, (_DWORD)method, v3);
    byte_42F547F = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}