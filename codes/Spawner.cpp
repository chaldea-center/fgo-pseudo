void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_40F9D7C & 1) == 0 )
  {
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner___ctor__, method);
    byte_40F9D7C = 1;
  }
  SingletonMonoBehaviour_WebViewManager____ctor(
    (SingletonMonoBehaviour_WebViewManager__o *)this,
    (const MethodInfo_2A552A4 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  Spawner_ResourcePrecacher_o *v10; // x20
  System_String_array **v11; // x2
  System_String_array **v12; // x3
  System_Boolean_array **v13; // x4
  System_Int32_array **v14; // x5
  System_Int32_array *v15; // x6
  System_Int32_array *v16; // x7
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x3
  __int64 v20; // x4
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v21; // x20
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  UnityEngine_Transform_o *transform; // x20
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x3
  __int64 v32; // x4
  Spawner_SpawnerImpl_o *v33; // x21
  System_String_array **v34; // x2
  System_String_array **v35; // x3
  System_Boolean_array **v36; // x4
  System_Int32_array **v37; // x5
  System_Int32_array *v38; // x6
  System_Int32_array *v39; // x7

  if ( (byte_40F9D79 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___66765112, method);
    sub_B16FFC(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo, v6);
    sub_B16FFC(&Spawner_ResourcePrecacher_TypeInfo, v7);
    sub_B16FFC(&Method_SingletonMonoBehaviour_Spawner__Awake__, v8);
    sub_B16FFC(&Spawner_SpawnerImpl_TypeInfo, v9);
    byte_40F9D79 = 1;
  }
  v10 = (Spawner_ResourcePrecacher_o *)sub_B170CC(Spawner_ResourcePrecacher_TypeInfo, method, v2, v3, v4);
  Spawner_ResourcePrecacher___ctor(v10, 0LL);
  this->fields.resourcePrecacher = v10;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.resourcePrecacher,
    (System_Int32_array **)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  v21 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_B170CC(
                                                                       System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo,
                                                                       v17,
                                                                       v18,
                                                                       v19,
                                                                       v20);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_45184880(
    v21,
    32,
    (const MethodInfo_2B17770 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor___66765112);
  this->fields.requestsByPath = v21;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.requestsByPath,
    (System_Int32_array **)v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v33 = (Spawner_SpawnerImpl_o *)sub_B170CC(Spawner_SpawnerImpl_TypeInfo, v29, v30, v31, v32);
  Spawner_SpawnerImpl___ctor(v33, transform, 0LL);
  this->fields.spawnerImpl = v33;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.spawnerImpl,
    (System_Int32_array **)v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39);
  SingletonMonoBehaviour_Spawner___Awake(
    (SingletonMonoBehaviour_Spawner__o *)this,
    (const MethodInfo_2A5516C *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B170D4();
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
    sub_B170D4();
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, 0LL);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  struct System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x0
  Spawner_RequestByPath_o v6; // kr00_16
  Spawner_ResourcePrecacher_o *v7; // x0
  UnityEngine_Object_o *Resource; // x0
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  if ( (byte_40F9D7B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__, method);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__, v3);
    byte_40F9D7B = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_14;
  if ( !Spawner_ResourcePrecacher__HasCached(resourcePrecacher, 0LL) )
    return 0;
  requestsByPath = this->fields.requestsByPath;
  if ( !requestsByPath )
    goto LABEL_14;
  while ( requestsByPath->fields._size > 0 )
  {
    v6 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           requestsByPath,
           (const MethodInfo_2B17F30 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    v7 = this->fields.resourcePrecacher;
    if ( v7 )
    {
      Resource = Spawner_ResourcePrecacher__GetResource(v7, v6.fields.path, 0LL);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          Resource,
          v6.fields.cacheSize,
          v6.fields.overflowPolicy,
          0LL);
        requestsByPath = this->fields.requestsByPath;
        if ( requestsByPath )
          continue;
      }
    }
    goto LABEL_14;
  }
  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
LABEL_14:
    sub_B170D4();
  return Spawner_SpawnerImpl__HasCached(spawnerImpl, 0LL);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_24901520(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_24901512(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_24901520(this, path, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_24901520(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_ResourcePrecacher_o *v10; // x0
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x22
  const MethodInfo *v12; // x5
  Spawner_RequestByPath_o v13; // [xsp+0h] [xbp-40h] BYREF
  Spawner_RequestByPath_o v14; // 0:x0.16

  if ( (byte_40F9D7A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__, path);
    byte_40F9D7A = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_9;
  if ( Spawner_ResourcePrecacher__HasElement(resourcePrecacher, path, 0LL) )
    return;
  v10 = this->fields.resourcePrecacher;
  if ( !v10
    || (Spawner_ResourcePrecacher__Precache(v10, path, 0LL),
        requestsByPath = this->fields.requestsByPath,
        v14.fields.path = (struct System_String_o *)&v13,
        *(_QWORD *)&v14.fields.cacheSize = path,
        v13.fields.path = 0LL,
        *(_QWORD *)&v13.fields.cacheSize = 0LL,
        Spawner_RequestByPath___ctor(v14, (System_String_o *)(unsigned int)cacheSize, overflowPolicy, 0, v12),
        !requestsByPath) )
  {
LABEL_9:
    sub_B170D4();
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v13,
    (const MethodInfo_2B17D14 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_24901724(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_24901732(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_24901732(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B170D4();
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, 0LL);
}


void __fastcall Spawner__Precache_24901764(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B170D4();
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, 0LL);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_B170D4();
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, 0LL);
  return Spawner__Spawn_24902092(this, Resource, v6);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_24902092(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x20
  float x; // s8
  float y; // s9
  float z; // s10
  float v8; // s0
  float v9; // s1
  float v10; // s2
  float v11; // s3
  float v12; // s4
  float v13; // s5
  float v14; // s6
  float v15; // s7
  UnityEngine_Vector3_o zero; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v18; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v19; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  spawnerImpl = this->fields.spawnerImpl;
  zero = UnityEngine_Vector3__get_zero(0LL);
  x = zero.fields.x;
  y = zero.fields.y;
  z = zero.fields.z;
  *(UnityEngine_Quaternion_o *)&v8 = UnityEngine_Quaternion__get_identity(0LL);
  if ( !spawnerImpl )
    sub_B170D4();
  v12 = v8;
  v13 = v9;
  v18.fields.x = x;
  v18.fields.y = y;
  v14 = v10;
  v15 = v11;
  v18.fields.z = z;
  v19.fields.x = v12;
  v19.fields.y = v13;
  v19.fields.z = v14;
  v19.fields.w = v15;
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, v18, v19, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_24902236(
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
    sub_B170D4();
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
  return Spawner__Spawn_24902380(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_24902380(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_B170D4();
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
  sub_B16F98(
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
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v7; // x20
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7

  if ( (byte_40F7A43 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__, method);
    sub_B16FFC(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo, v6);
    byte_40F7A43 = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B170CC(
                                                                                         System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo,
                                                                                         method,
                                                                                         v2,
                                                                                         v3,
                                                                                         v4);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v7,
    32,
    (const MethodInfo_2DA3094 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v7;
  sub_B16F98((BattleServantConfConponent_o *)&this->fields, (System_Int32_array **)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0
  struct System_String_o *sourceUri; // x20
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-18h] BYREF

  if ( (byte_40F7A41 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__,
      path);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7A41 = 1;
  }
  value = 0LL;
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_14;
  if ( !System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
          elements,
          (System_Xml_XmlQualifiedName_o *)path,
          &value,
          (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__) )
  {
    sourceUri = 0LL;
    goto LABEL_8;
  }
  if ( !value )
LABEL_14:
    sub_B170D4();
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v11; // x19
  System_Int32_array **asset; // x0
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  int v25; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v27; // [xsp+8h] [xbp-58h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v28; // [xsp+20h] [xbp-40h] BYREF

  if ( (byte_40F7A3F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v6);
    byte_40F7A3F = 1;
  }
  memset(&v28, 0, sizeof(v28));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   elements,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v27,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v28 = v27;
  while ( 1 )
  {
    do
    {
      if ( !System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
              &v28,
              (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__) )
      {
        v25 = 7;
        goto LABEL_14;
      }
      currentValue = v28.fields.currentValue;
      if ( !v28.fields.currentValue )
        sub_B170D4();
      v11 = (UnityEngine_ResourceRequest_o **)&v28.fields.currentValue[1];
      klass = v28.fields.currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v11 )
      sub_B170D4();
    asset = (System_Int32_array **)UnityEngine_ResourceRequest__get_asset(*v11, 0LL);
    currentValue[1].monitor = asset;
    sub_B16F98((BattleServantConfConponent_o *)&currentValue[1].monitor, asset, v13, v14, v15, v16, v17, v18);
    *v11 = 0LL;
    sub_B16F98((BattleServantConfConponent_o *)v11, 0LL, v19, v20, v21, v22, v23, v24);
  }
  v25 = 9;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v28,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v25 != 9;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_40F7A3D & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__,
      path);
    byte_40F7A3D = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           elements,
           (System_Xml_XmlQualifiedName_o *)path,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_40F7A3E & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__,
      method);
    byte_40F7A3E = 1;
  }
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !elements )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___get_Count(
           elements,
           (const MethodInfo_2DA3814 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  __int64 v8; // x3
  __int64 v9; // x4
  __int64 v10; // x21
  System_Int32_array **v11; // x0
  System_String_array **v12; // x2
  System_String_array **v13; // x3
  System_Boolean_array **v14; // x4
  System_Int32_array **v15; // x5
  System_Int32_array *v16; // x6
  System_Int32_array *v17; // x7
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *elements; // x0

  if ( (byte_40F7A3C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__, path);
    sub_B16FFC(&Spawner_ResourcePrecacher_Element_TypeInfo, v5);
    byte_40F7A3C = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v10 = sub_B170CC(Spawner_ResourcePrecacher_Element_TypeInfo, v6, v7, v8, v9);
    Spawner_ResourcePrecacher_Element___ctor((Spawner_ResourcePrecacher_Element_o *)v10, 0LL);
    v11 = (System_Int32_array **)UnityEngine_Resources__Load(path, 0LL);
    if ( !v10
      || (*(_QWORD *)(v10 + 24) = v11,
          sub_B16F98((BattleServantConfConponent_o *)(v10 + 24), v11, v12, v13, v14, v15, v16, v17),
          (elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements) == 0LL) )
    {
      sub_B170D4();
    }
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
      elements,
      (System_Xml_XmlQualifiedName_o *)path,
      (System_Xml_Schema_XmlSchemaObject_o *)v10,
      (const MethodInfo_2DA3C18 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
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
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  Il2CppObject *currentValue; // x23
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v13; // x0
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_40F7A42 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__, method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v6);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v7);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v8);
    byte_40F7A42 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  elements = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_16;
  Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
             elements,
             (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !Values )
    goto LABEL_16;
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v14,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v14,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__) )
  {
    currentValue = v14.fields.currentValue;
    if ( !v14.fields.currentValue )
      sub_B170D4();
    monitor = (UnityEngine_Object_o *)v14.fields.currentValue[1].monitor;
    if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v14,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  v13 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.elements;
  if ( !v13 )
LABEL_16:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Clear(
    v13,
    (const MethodInfo_2DA3DF4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_40F7A40 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__,
      method);
    byte_40F7A40 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_B170D4();
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___get_Keys(
                                                               elements,
                                                               (const MethodInfo_2DA3824 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v7; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7

  if ( (byte_40F7A50 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Transform___ctor__, v1);
    sub_B16FFC(&System_Collections_Generic_Queue_Transform__TypeInfo, v5);
    sub_B16FFC(&Spawner_SpawnerImpl_TypeInfo, v6);
    byte_40F7A50 = 1;
  }
  v7 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)sub_B170CC(
                                                                       System_Collections_Generic_Queue_Transform__TypeInfo,
                                                                       v1,
                                                                       v2,
                                                                       v3,
                                                                       v4);
  System_Collections_Generic_Queue_CFNetwork_GetProxyData____ctor(
    v7,
    (const MethodInfo_2B15EA4 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  static_fields = (BattleServantConfConponent_o *)Spawner_SpawnerImpl_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v7;
  sub_B16F98(static_fields, (System_Int32_array **)v7, v9, v10, v11, v12, v13, v14);
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
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *v23; // x20
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  System_Collections_Generic_Dictionary_TKey__TValue__o *v34; // x20
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x3
  __int64 v44; // x4
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *v45; // x20
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x3
  __int64 v55; // x4
  System_Collections_Generic_Dictionary_string__int__o *v56; // x20
  System_String_array **v57; // x2
  System_String_array **v58; // x3
  System_Boolean_array **v59; // x4
  System_Int32_array **v60; // x5
  System_Int32_array *v61; // x6
  System_Int32_array *v62; // x7

  if ( (byte_40F7A44 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__, parent);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__, v5);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo, v7);
    sub_B16FFC(&System_Collections_Generic_Dictionary_Object__int__TypeInfo, v8);
    sub_B16FFC(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo, v9);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_GameObject___ctor__, v10);
    sub_B16FFC(&System_Collections_Generic_HashSet_GameObject__TypeInfo, v11);
    byte_40F7A44 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  p_fields = &this->fields;
  sub_B16F98((BattleServantConfConponent_o *)p_fields, (System_Int32_array **)parent, v13, v14, v15, v16, v17, v18);
  v23 = (System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo__o *)sub_B170CC(
                                                                                          System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo,
                                                                                          v19,
                                                                                          v20,
                                                                                          v21,
                                                                                          v22);
  System_Collections_Generic_Dictionary_Type__MonoCustomAttrs_AttributeInfo____ctor(
    v23,
    32,
    (const MethodInfo_2DA3094 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  p_fields->caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v23;
  sub_B16F98(
    (BattleServantConfConponent_o *)&p_fields->caches,
    (System_Int32_array **)v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v34 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_B170CC(
                                                                   System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo,
                                                                   v30,
                                                                   v31,
                                                                   v32,
                                                                   v33);
  System_Collections_Generic_Dictionary_object__bool____ctor(
    v34,
    128,
    (const MethodInfo_2E197FC *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  p_fields->managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v34;
  sub_B16F98(
    (BattleServantConfConponent_o *)&p_fields->managedObjects,
    (System_Int32_array **)v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40);
  v45 = (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)sub_B170CC(
                                                                             System_Collections_Generic_HashSet_GameObject__TypeInfo,
                                                                             v41,
                                                                             v42,
                                                                             v43,
                                                                             v44);
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData____ctor(
    v45,
    (const MethodInfo_21DE95C *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  p_fields->destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v45;
  sub_B16F98(
    (BattleServantConfConponent_o *)&p_fields->destroyedUnmanagedObjects,
    (System_Int32_array **)v45,
    v46,
    v47,
    v48,
    v49,
    v50,
    v51);
  v56 = (System_Collections_Generic_Dictionary_string__int__o *)sub_B170CC(
                                                                  System_Collections_Generic_Dictionary_Object__int__TypeInfo,
                                                                  v52,
                                                                  v53,
                                                                  v54,
                                                                  v55);
  System_Collections_Generic_Dictionary_string__int____ctor(
    v56,
    32,
    (const MethodInfo_2D9B634 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  p_fields->serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v56;
  sub_B16F98(
    (BattleServantConfConponent_o *)&p_fields->serialNumbers,
    (System_Int32_array **)v56,
    v57,
    v58,
    v59,
    v60,
    v61,
    v62);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v13; // x19
  Spawner_SpawnerImpl_c *v14; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *q; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v16; // x8
  Mono_Net_CFNetwork_GetProxyData_o *ProxyData___Dequeue; // x0
  UnityEngine_Transform_o *v18; // x20
  int32_t v19; // w21
  Spawner_SpawnerImpl_c *v20; // x0
  System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *v21; // x22
  Mono_Net_CFNetwork_GetProxyData_o *Child; // x0
  Spawner_SpawnerImpl_c *v23; // x0

  if ( (byte_40F7A49 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform__Add__, method);
    sub_B16FFC(&Method_System_Collections_Generic_List_Transform___ctor__, v6);
    sub_B16FFC(&System_Collections_Generic_List_Transform__TypeInfo, v7);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Transform__Clear__, v8);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Transform__Dequeue__, v9);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Transform__Enqueue__, v10);
    sub_B16FFC(&Method_System_Collections_Generic_Queue_Transform__get_Count__, v11);
    sub_B16FFC(&Spawner_SpawnerImpl_TypeInfo, v12);
    byte_40F7A49 = 1;
  }
  v13 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B170CC(
                                                                                                  System_Collections_Generic_List_Transform__TypeInfo,
                                                                                                  method,
                                                                                                  v2,
                                                                                                  v3,
                                                                                                  v4);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v13,
    (const MethodInfo_2F25014 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v14 = Spawner_SpawnerImpl_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v14 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v14->static_fields->q;
  if ( !q )
    goto LABEL_29;
  System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
    q,
    (Mono_Net_CFNetwork_GetProxyData_o *)root,
    (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
  while ( 1 )
  {
LABEL_20:
    v23 = Spawner_SpawnerImpl_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
      v23 = Spawner_SpawnerImpl_TypeInfo;
    }
    v16 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v23->static_fields->q;
    if ( !v16 )
      goto LABEL_29;
    if ( v16->fields._size <= 0 )
      break;
    if ( (WORD1(v23->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v23->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v23);
      v16 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !v16 )
        goto LABEL_29;
    }
    ProxyData___Dequeue = System_Collections_Generic_Queue_CFNetwork_GetProxyData___Dequeue(
                            v16,
                            (const MethodInfo_2B166B0 *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v13 )
      goto LABEL_29;
    v18 = (UnityEngine_Transform_o *)ProxyData___Dequeue;
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
      v13,
      (EventMissionProgressRequest_Argument_ProgressData_o *)ProxyData___Dequeue,
      (const MethodInfo_2F25CD8 *)Method_System_Collections_Generic_List_Transform__Add__);
    if ( !v18 )
      goto LABEL_29;
    if ( UnityEngine_Transform__get_childCount(v18, 0LL) >= 1 )
    {
      v19 = 0;
      while ( 1 )
      {
        v20 = Spawner_SpawnerImpl_TypeInfo;
        if ( (BYTE3(Spawner_SpawnerImpl_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v20 = Spawner_SpawnerImpl_TypeInfo;
        }
        v21 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)v20->static_fields->q;
        Child = (Mono_Net_CFNetwork_GetProxyData_o *)UnityEngine_Transform__GetChild(v18, v19, 0LL);
        if ( !v21 )
          break;
        System_Collections_Generic_Queue_CFNetwork_GetProxyData___Enqueue(
          v21,
          Child,
          (const MethodInfo_2B16498 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v19 >= UnityEngine_Transform__get_childCount(v18, 0LL) )
          goto LABEL_20;
      }
LABEL_29:
      sub_B170D4();
    }
  }
  if ( (WORD1(v23->vtable._0_Equals.methodPtr) & 0x400) != 0 && !v23->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(v23);
    v16 = (System_Collections_Generic_Queue_CFNetwork_GetProxyData__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
    if ( !v16 )
      goto LABEL_29;
  }
  System_Collections_Generic_Queue_AssetManager_LoadWaitStatus___Clear(
    (System_Collections_Generic_Queue_AssetManager_LoadWaitStatus__o *)v16,
    (const MethodInfo_2B16138 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v13;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *caches; // x0

  if ( (byte_40F7A4F & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      obj);
    byte_40F7A4F = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
           caches,
           (System_Xml_XmlQualifiedName_o *)obj,
           (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0
  UnityEngine_Transform_o *transform; // x0

  if ( (byte_40F7A4B & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, obj);
    byte_40F7A4B = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_string__bool___set_Item(
          managedObjects,
          (System_String_o *)obj,
          0,
          (const MethodInfo_2E1A35C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (transform = UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_B170D4();
  }
  UnityEngine_Transform__set_parent(transform, this->fields.parent, 0LL);
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
  const MethodInfo *v24; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x3
  __int64 v30; // x4
  System_Collections_Generic_IEnumerable_TSource__o *v31; // x21
  Spawner_SpawnerImpl___c_c *v32; // x8
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x9
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *_9__17_0; // x22
  Il2CppObject *v35; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *v36; // x0
  System_String_array **v37; // x2
  System_String_array **v38; // x3
  System_Boolean_array **v39; // x4
  System_Int32_array **v40; // x5
  System_Int32_array *v41; // x6
  System_Int32_array *v42; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v43; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x3
  __int64 v47; // x4
  System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *v48; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v49; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v50; // x0
  System_Collections_Generic_IEnumerable_TSource__c *klass; // x8
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x21
  unsigned __int64 v53; // x10
  int32_t *p_offset; // x11
  __int64 p_method; // x0
  __int64 v56; // x21
  __int64 v57; // x8
  unsigned __int64 v58; // x10
  int *v59; // x11
  __int64 v60; // x0
  __int64 v61; // x8
  unsigned __int64 v62; // x10
  int *v63; // x11
  __int64 v64; // x0
  UnityEngine_GameObject_o *v65; // x1
  const MethodInfo *v66; // x2
  __int64 v67; // x8
  unsigned __int64 v68; // x10
  int *v69; // x11
  __int64 v70; // x0
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0
  const MethodInfo *v72; // x2

  if ( (byte_40F7A4A & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, objectToDespawn);
    sub_B16FFC(&Method_System_Linq_Enumerable_Reverse_GameObject___, v7);
    sub_B16FFC(&Method_System_Linq_Enumerable_Select_Transform__GameObject___, v8);
    sub_B16FFC(&Method_System_Linq_Enumerable_Skip_Transform___, v9);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_GameObject___, v10);
    sub_B16FFC(&Method_System_Func_GameObject__bool___ctor__, v11);
    sub_B16FFC(&Method_System_Func_Transform__GameObject___ctor__, v12);
    sub_B16FFC(&System_Func_Transform__GameObject__TypeInfo, v13);
    sub_B16FFC(&System_Func_GameObject__bool__TypeInfo, v14);
    sub_B16FFC(&System_IDisposable_TypeInfo, v15);
    sub_B16FFC(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v16);
    sub_B16FFC(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v17);
    sub_B16FFC(&System_Collections_IEnumerator_TypeInfo, v18);
    sub_B16FFC(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__, v19);
    sub_B16FFC(&Spawner_SpawnerImpl_TypeInfo, v20);
    sub_B16FFC(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, v21);
    sub_B16FFC(&Spawner_SpawnerImpl___c_TypeInfo, v22);
    sub_B16FFC(&StringLiteral_9954/*"OnDespawn"*/, v23);
    byte_40F7A4A = 1;
  }
  if ( Spawner_SpawnerImpl__IsAlive(this, objectToDespawn, (const MethodInfo *)sendsDespawn) )
  {
    if ( sendsDespawn )
    {
      if ( !objectToDespawn )
        goto LABEL_52;
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_9954/*"OnDespawn"*/, 1, 0LL);
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
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v24);
    v31 = System_Linq_Enumerable__Skip_Transform_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_19C3FD4 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v32 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v32 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    static_fields = v32->static_fields;
    _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( (BYTE3(v32->vtable._0_Equals.methodPtr) & 4) != 0 && !v32->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v32);
        static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      }
      v35 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData__o *)sub_B170CC(
                                                                                                   System_Func_Transform__GameObject__TypeInfo,
                                                                                                   v27,
                                                                                                   v28,
                                                                                                   v29,
                                                                                                   v30);
      System_Func_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData____ctor(
        _9__17_0,
        v35,
        Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__,
        (const MethodInfo_2B6C28C *)Method_System_Func_Transform__GameObject___ctor__);
      v36 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      v36->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_B16F98(
        (BattleServantConfConponent_o *)&v36->__9__17_0,
        (System_Int32_array **)_9__17_0,
        v37,
        v38,
        v39,
        v40,
        v41,
        v42);
    }
    v43 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_WarBoardManager_WarBoardOnboardSkillTarget__WarBoardPieceData_(
                                                                 v31,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_19C0B1C *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v48 = (System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool__o *)sub_B170CC(
                                                                               System_Func_GameObject__bool__TypeInfo,
                                                                               v44,
                                                                               v45,
                                                                               v46,
                                                                               v47);
    System_Func_WarBoardManager_WarBoardOnboardSkillTarget__bool____ctor(
      v48,
      (Il2CppObject *)this,
      Method_Spawner_SpawnerImpl__Despawn_b__17_1__,
      (const MethodInfo_2B6AB40 *)Method_System_Func_GameObject__bool___ctor__);
    v49 = System_Linq_Enumerable__Where_WarBoardManager_WarBoardOnboardSkillTarget_(
            v43,
            (System_Func_TSource__bool__o *)v48,
            (const MethodInfo_19C8FE8 *)Method_System_Linq_Enumerable_Where_GameObject___);
    v50 = System_Linq_Enumerable__Reverse_BattleActionData_BuffData_(
            v49,
            (const MethodInfo_19BDF90 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( v50 )
    {
      klass = v50->klass;
      v52 = v50;
      if ( *(_WORD *)&v50->klass->_2.bitflags1 )
      {
        v53 = 0LL;
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          ++v53;
          p_offset += 4;
          if ( v53 >= *(unsigned __int16 *)&v50->klass->_2.bitflags1 )
            goto LABEL_24;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_24:
        p_method = sub_AAFEF8(v50, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v56 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerable_TSource__o *, _QWORD))p_method)(
              v52,
              *(_QWORD *)(p_method + 8));
      if ( !v56 )
        sub_B170D4();
      while ( 1 )
      {
        v57 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v58 = 0LL;
          v59 = (int *)(*(_QWORD *)(v57 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v59 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            ++v58;
            v59 += 4;
            if ( v58 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_31;
          }
          v60 = v57 + 16LL * *v59 + 312;
        }
        else
        {
LABEL_31:
          v60 = sub_AAFEF8(v56, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v60)(v56, *(_QWORD *)(v60 + 8)) & 1) == 0 )
          break;
        v61 = *(_QWORD *)v56;
        if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
        {
          v62 = 0LL;
          v63 = (int *)(*(_QWORD *)(v61 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v63 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            ++v62;
            v63 += 4;
            if ( v62 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
              goto LABEL_38;
          }
          v64 = v61 + 16LL * *v63 + 312;
        }
        else
        {
LABEL_38:
          v64 = sub_AAFEF8(v56, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v65 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v64)(v56, *(_QWORD *)(v64 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v65, v66);
      }
      v67 = *(_QWORD *)v56;
      if ( *(_WORD *)(*(_QWORD *)v56 + 298LL) )
      {
        v68 = 0LL;
        v69 = (int *)(*(_QWORD *)(v67 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v69 - 1) != System_IDisposable_TypeInfo )
        {
          ++v68;
          v69 += 4;
          if ( v68 >= *(unsigned __int16 *)(*(_QWORD *)v56 + 298LL) )
            goto LABEL_45;
        }
        v70 = v67 + 16LL * *v69 + 312;
      }
      else
      {
LABEL_45:
        v70 = sub_AAFEF8(v56, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v70)(v56, *(_QWORD *)(v70 + 8));
      managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
      if ( managedObjects )
      {
        if ( System_Collections_Generic_Dictionary_string__bool___ContainsKey(
               managedObjects,
               (System_String_o *)objectToDespawn,
               (const MethodInfo_2E1A610 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v72);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v72);
        }
        return;
      }
    }
LABEL_52:
    sub_B170D4();
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

  if ( (byte_40F7A4C & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_GameObject__Add__, obj);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_40F7A4C = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__Destroy_34809464((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_B170D4();
  System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData___Add(
    (System_Collections_Generic_HashSet_WarBoardAIRoute_RouteData__o *)destroyedUnmanagedObjects,
    (WarBoardAIRoute_RouteData_o *)obj,
    (const MethodInfo_21DFB18 *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
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
  __int64 v3; // x3
  __int64 v4; // x4
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  Spawner_SpawnerImpl___c_c *v11; // x0
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x8
  System_Predicate_peRenderTexture_ChangeLayerObject__o *_9__20_0; // x20
  Il2CppObject *v14; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *v15; // x0
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7

  if ( (byte_40F7A4D & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__, method);
    sub_B16FFC(&Method_System_Predicate_GameObject___ctor__, v6);
    sub_B16FFC(&System_Predicate_GameObject__TypeInfo, v7);
    sub_B16FFC(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__, v8);
    sub_B16FFC(&Spawner_SpawnerImpl___c_TypeInfo, v9);
    byte_40F7A4D = 1;
  }
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  v11 = Spawner_SpawnerImpl___c_TypeInfo;
  if ( (BYTE3(Spawner_SpawnerImpl___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v11 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  static_fields = v11->static_fields;
  _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( (BYTE3(v11->vtable._0_Equals.methodPtr) & 4) != 0 && !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    }
    v14 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_peRenderTexture_ChangeLayerObject__o *)sub_B170CC(
                                                                          System_Predicate_GameObject__TypeInfo,
                                                                          method,
                                                                          v2,
                                                                          v3,
                                                                          v4);
    System_Predicate_peRenderTexture_ChangeLayerObject____ctor(
      _9__20_0,
      v14,
      Method_Spawner_SpawnerImpl___c__GC_b__20_0__,
      (const MethodInfo_2B0B204 *)Method_System_Predicate_GameObject___ctor__);
    v15 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    v15->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_B16F98(
      (BattleServantConfConponent_o *)&v15->__9__20_0,
      (System_Int32_array **)_9__20_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !destroyedUnmanagedObjects )
    sub_B170D4();
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_21E00B8 *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *caches; // x0
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *Values; // x0
  int v9; // w20
  Spawner_SpawnerImpl_ObjectCache_o *currentValue; // x19
  int v11; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v13; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_40F7A46 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__,
      method);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__,
      v3);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__,
      v4);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__,
      v5);
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__,
      v6);
    byte_40F7A46 = 1;
  }
  memset(&v13, 0, sizeof(v13));
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity__o *)this->fields.caches;
  if ( !caches
    || (Values = System_Collections_Generic_Dictionary_XmlQualifiedName__SchemaEntity___get_Values(
                   caches,
                   (const MethodInfo_2DA39BC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_B170D4();
  }
  System_Collections_Generic_Dictionary_ValueCollection_XmlQualifiedName__SchemaEntity___GetEnumerator(
    &v13,
    Values,
    (const MethodInfo_22866D8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v9 = 0;
  while ( System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___MoveNext(
            &v13,
            (const MethodInfo_26BE610 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__) )
  {
    currentValue = (Spawner_SpawnerImpl_ObjectCache_o *)v13.fields.currentValue;
    if ( !v13.fields.currentValue )
      sub_B170D4();
    if ( !Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
            (Spawner_SpawnerImpl_ObjectCache_o *)v13.fields.currentValue,
            0LL) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize(currentValue, 0LL);
      v9 += currentValue->fields.cacheSize;
    }
    if ( v9 >= 32 )
    {
      v11 = 8;
      goto LABEL_13;
    }
  }
  v11 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_XmlQualifiedName__SchemaEntity___Dispose(
    &v13,
    (const MethodInfo_26BE60C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
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
  struct System_Collections_Generic_HashSet_GameObject__o *destroyedUnmanagedObjects; // x0
  bool value; // [xsp+Ch] [xbp-14h] BYREF

  if ( (byte_40F7A4E & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__, obj);
    sub_B16FFC(&Method_System_Collections_Generic_HashSet_GameObject__Contains__, v5);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v6);
    byte_40F7A4E = 1;
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
             (const MethodInfo_2E1C15C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
      if ( destroyedUnmanagedObjects )
        return !System_Collections_Generic_HashSet_BattleBuffData_BuffData___Contains(
                  (System_Collections_Generic_HashSet_BattleBuffData_BuffData__o *)destroyedUnmanagedObjects,
                  (BattleBuffData_BuffData_o *)obj,
                  (const MethodInfo_21DEFE0 *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_B170D4();
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *v11; // x0
  int32_t v12; // w2
  Il2CppObject *name; // x20
  Il2CppObject *v14; // x0
  System_String_o *v15; // x0
  int32_t v16; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_40F7A48 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__, prefab);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__, v7);
    sub_B16FFC(&int_TypeInfo, v8);
    sub_B16FFC(&StringLiteral_23487/*"{0}({1})"*/, v9);
    byte_40F7A48 = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_UIPanel__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_UIPanel__int___TryGetValue(
    serialNumbers,
    (UIPanel_o *)prefab,
    &value,
    (const MethodInfo_2D9DF70 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  v11 = (System_Collections_Generic_Dictionary_XmlQualifiedName__int__o *)this->fields.serialNumbers;
  v12 = ++value;
  if ( !v11
    || (System_Collections_Generic_Dictionary_XmlQualifiedName__int___set_Item(
          v11,
          (System_Xml_XmlQualifiedName_o *)prefab,
          v12,
          (const MethodInfo_2D9C194 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v16 = value,
        v14 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v16),
        v15 = System_String__Format_43739268((System_String_o *)StringLiteral_23487/*"{0}({1})"*/, name, v14, 0LL),
        !obj) )
  {
LABEL_8:
    sub_B170D4();
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)obj, v15, 0LL);
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
  __int64 v14; // x3
  __int64 v15; // x4
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v16; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v17; // x24

  if ( (byte_40F7A45 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      prefab);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__, v9);
    sub_B16FFC(&Spawner_SpawnerImpl_ObjectCache_TypeInfo, v10);
    byte_40F7A45 = 1;
  }
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         (const MethodInfo_2DA3E8C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v16 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  v17 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B170CC(Spawner_SpawnerImpl_ObjectCache_TypeInfo, v12, v13, v14, v15);
  Spawner_SpawnerImpl_ObjectCache___ctor(v17, this, prefab, cacheSize, overflowPolicy, 0LL);
  if ( !v16 )
LABEL_7:
    sub_B170D4();
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___set_Item(
    v16,
    (System_Xml_XmlQualifiedName_o *)prefab,
    (System_Xml_Schema_XmlSchemaObject_o *)v17,
    (const MethodInfo_2DA3BF0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  UnityEngine_GameObject_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v22; // x0
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v25; // x0
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0
  UnityEngine_GameObject_o *result; // x0
  Spawner_SpawnerImpl_o *v28; // x0
  UnityEngine_Object_o *v29; // x1
  UnityEngine_GameObject_o *v30; // x2
  const MethodInfo *v31; // x3
  System_Xml_Schema_XmlSchemaObject_o *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v33; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v36; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_40F7A47 & 1) == 0 )
  {
    sub_B16FFC(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__,
      prefab);
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, v16);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v17);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v18);
    sub_B16FFC(&StringLiteral_10025/*"OnSpawn"*/, v19);
    byte_40F7A47 = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_32;
  if ( System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
         caches,
         (System_Xml_XmlQualifiedName_o *)prefab,
         &value,
         (const MethodInfo_2DA5A18 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
  {
    if ( !value )
      goto LABEL_32;
    NextObjectInCache = Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
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
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)NextObjectInCache, 0LL, 0LL) )
  {
    if ( overridesPositionAndRotation )
    {
      if ( !NextObjectInCache )
        goto LABEL_32;
      transform = UnityEngine_GameObject__get_transform(NextObjectInCache, 0LL);
      if ( !transform )
        goto LABEL_32;
      v34.fields.x = v13;
      v34.fields.y = v12;
      v34.fields.z = v11;
      UnityEngine_Transform__set_position(transform, v34, 0LL);
      v25 = UnityEngine_GameObject__get_transform(NextObjectInCache, 0LL);
      if ( !v25 )
        goto LABEL_32;
      v35.fields.x = x;
      v35.fields.y = y;
      v35.fields.z = z;
      v35.fields.w = w;
      UnityEngine_Transform__set_rotation(v25, v35, 0LL);
    }
    managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      System_Collections_Generic_Dictionary_string__bool___set_Item(
        managedObjects,
        (System_String_o *)NextObjectInCache,
        1,
        (const MethodInfo_2E1A35C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_26;
    }
LABEL_32:
    sub_B170D4();
  }
  if ( overridesPositionAndRotation )
  {
    if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    }
    v33.fields.x = v13;
    v33.fields.y = v12;
    v33.fields.z = v11;
    v36.fields.x = x;
    v36.fields.y = y;
    v36.fields.z = z;
    v36.fields.w = w;
    v22 = UnityEngine_Object__Instantiate(prefab, v33, v36, 0LL);
    if ( v22 )
      goto LABEL_17;
LABEL_31:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v23);
    sub_B170D4();
  }
  if ( (WORD1(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  v22 = UnityEngine_Object__Instantiate_34808612(prefab, 0LL);
  if ( !v22 )
    goto LABEL_31;
LABEL_17:
  NextObjectInCache = (UnityEngine_GameObject_o *)v22;
  if ( (UnityEngine_GameObject_c *)v22->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v22, v23);
LABEL_26:
    UnityEngine_GameObject__SetActive(NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(NextObjectInCache, (System_String_o *)StringLiteral_10025/*"OnSpawn"*/, 1, 0LL);
    return NextObjectInCache;
  }
  v28 = (Spawner_SpawnerImpl_o *)sub_B173C8(v22);
  Spawner_SpawnerImpl__Number(v28, v29, v30, v31);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0

  if ( (byte_40F7A51 & 1) == 0 )
  {
    sub_B16FFC(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, x);
    byte_40F7A51 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_B170D4();
  return System_Collections_Generic_Dictionary_string__bool___ContainsKey(
           managedObjects,
           (System_String_o *)x,
           (const MethodInfo_2E1A610 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  sub_B16F98(
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
  sub_B16F98((BattleServantConfConponent_o *)v10, (System_Int32_array **)prefab, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = cacheSize;
  HIDWORD(v10->monitor) = overflowPolicy;
}


UnityEngine_GameObject_o *__fastcall Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v3; // x19
  struct UnityEngine_GameObject_array *objects; // x8
  int cacheIndex; // w9
  int32_t v6; // w22
  struct Spawner_SpawnerImpl_o *spawnerImpl; // x10
  System_Collections_Generic_Dictionary_string__bool__o *managedObjects; // x0
  System_String_o *v9; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v11; // x8
  System_Collections_Generic_Dictionary_string__bool__o *v12; // x0
  Spawner_SpawnerImpl_o *v13; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v15; // x21

  v3 = this;
  if ( (byte_41066A0 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_B16FFC(
                                                  &Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__,
                                                  method);
    byte_41066A0 = 1;
  }
  objects = v3->fields.objects;
  if ( !objects || v3->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v3->fields.cacheIndex;
  v6 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
    {
      sub_B17100(this, method, v2);
      sub_B170A0();
    }
    spawnerImpl = v3->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_12;
    managedObjects = (System_Collections_Generic_Dictionary_string__bool__o *)spawnerImpl->fields.managedObjects;
    if ( !managedObjects )
      goto LABEL_12;
    v9 = (System_String_o *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_string__bool___get_Item(
                                                  managedObjects,
                                                  v9,
                                                  (const MethodInfo_2E1A2C0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    cacheSize = v3->fields.cacheSize;
    ++v6;
    cacheIndex = (v3->fields.cacheIndex + 1) % cacheSize;
    v3->fields.cacheIndex = cacheIndex;
    if ( v6 >= cacheSize )
      break;
    objects = v3->fields.objects;
    if ( !objects )
      goto LABEL_12;
  }
  v11 = v3->fields.spawnerImpl;
  if ( !v11 || (v12 = (System_Collections_Generic_Dictionary_string__bool__o *)v11->fields.managedObjects) == 0LL )
LABEL_12:
    sub_B170D4();
  if ( System_Collections_Generic_Dictionary_string__bool___get_Item(
         v12,
         v9,
         (const MethodInfo_2E1A2C0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__) )
  {
    if ( v3->fields.overflowPolicy == 1 )
    {
      v13 = v3->fields.spawnerImpl;
      if ( !v13 )
        goto LABEL_12;
      Spawner_SpawnerImpl__Despawn(v13, (UnityEngine_GameObject_o *)v9, 1, 0LL);
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  v3->fields.cacheIndex = (v3->fields.cacheIndex + 1) % v3->fields.cacheSize;
  if ( !v9 )
    goto LABEL_12;
  transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v9, 0LL);
  if ( !transform )
    goto LABEL_12;
  v15 = transform;
  UnityEngine_Transform__set_parent(transform, 0LL, 0LL);
  UnityEngine_Transform__set_localPosition(v15, v3->fields.defaultLocalPosition, 0LL);
  UnityEngine_Transform__set_localRotation(v15, v3->fields.defaultLocalRotation, 0LL);
  UnityEngine_Transform__set_localScale(v15, v3->fields.defaultLocalScale, 0LL);
  return (UnityEngine_GameObject_o *)v9;
}


void __fastcall Spawner_SpawnerImpl_ObjectCache__Initialize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  struct UnityEngine_GameObject_array *v6; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  unsigned __int64 v13; // x22
  __int64 i; // x23
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Object_o *v17; // x0
  UnityEngine_GameObject_c *v18; // x1
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v27; // x21
  Spawner_SpawnerImpl_o *spawnerImpl; // x0
  Spawner_SpawnerImpl_o *v29; // x0

  if ( (byte_410669F & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_GameObject___TypeInfo, method);
    sub_B16FFC(&UnityEngine_GameObject_TypeInfo, v4);
    sub_B16FFC(&UnityEngine_Object_TypeInfo, v5);
    byte_410669F = 1;
  }
  v6 = (struct UnityEngine_GameObject_array *)sub_B17014(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize,
                                                v2);
  this->fields.objects = v6;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.objects,
    (System_Int32_array **)v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( this->fields.cacheSize >= 1 )
  {
    v13 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      }
      v17 = UnityEngine_Object__Instantiate_34808612(prefab, 0LL);
      v25 = (System_Int32_array **)v17;
      if ( v17 )
      {
        v18 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)v17->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_22;
      if ( v17 )
      {
        v17 = (UnityEngine_Object_o *)sub_B170BC(v17, objects->obj.klass->_1.element_class);
        if ( !v17 )
          goto LABEL_25;
      }
      if ( v13 >= objects->max_length )
      {
        sub_B17100(v17, v18, v19);
        sub_B170A0();
      }
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)v25;
      sub_B16F98((BattleServantConfConponent_o *)((char *)objects + i), v25, v19, v20, v21, v22, v23, v24);
      if ( i == 32 )
      {
        if ( !v25 || (transform = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v25, 0LL)) == 0LL )
LABEL_22:
          sub_B170D4();
        v27 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v27, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v27, 0LL);
      }
      spawnerImpl = this->fields.spawnerImpl;
      if ( !spawnerImpl )
        goto LABEL_22;
      Spawner_SpawnerImpl__Number(spawnerImpl, this->fields.prefab, (UnityEngine_GameObject_o *)v25, 0LL);
      v29 = this->fields.spawnerImpl;
      if ( !v29 )
        goto LABEL_22;
      Spawner_SpawnerImpl__DeactivateCachedObject(v29, (UnityEngine_GameObject_o *)v25, 0LL);
      if ( (__int64)++v13 >= this->fields.cacheSize )
        return;
    }
    sub_B173C8(v17);
LABEL_25:
    sub_B170F4(v17);
    sub_B170A0();
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
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_410669D & 1) == 0 )
  {
    sub_B16FFC(&Spawner_SpawnerImpl___c_TypeInfo, v1);
    byte_410669D = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(Spawner_SpawnerImpl___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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
    sub_B170D4();
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_410669E & 1) == 0 )
  {
    sub_B16FFC(&UnityEngine_Object_TypeInfo, x);
    byte_410669E = 1;
  }
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}