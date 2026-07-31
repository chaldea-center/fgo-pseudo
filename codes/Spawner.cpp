void Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_5937862 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_Spawner___ctor__);
    byte_5937862 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *v3; // x20
  const MethodInfo *v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v19; // x21
  const MethodInfo *v20; // x2
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7

  if ( (byte_593785F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
    sub_21FFC50(&Spawner_ResourcePrecacher_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_Spawner__Awake__);
    sub_21FFC50(&Spawner_SpawnerImpl_TypeInfo);
    byte_593785F = 1;
  }
  v3 = (Spawner_ResourcePrecacher_o *)sub_21FFEBC(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v3, v4);
  this->fields.resourcePrecacher = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.resourcePrecacher, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_21FFEBC(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_74074132(
    v11,
    32,
    (const MethodInfo_46A4814 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
  this->fields.requestsByPath = v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.requestsByPath,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v19 = (Spawner_SpawnerImpl_o *)sub_21FFEBC(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v19, transform, v20);
  this->fields.spawnerImpl = v19;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.spawnerImpl, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EC1C *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_21FFECC(0, obj);
  return Spawner_SpawnerImpl__ContainCache(spawnerImpl, (UnityEngine_Object_o *)obj, method);
}


void Spawner__Despawn(
        Spawner_o *this,
        UnityEngine_GameObject_o *objectToDespawn,
        bool sendsDespawn,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_21FFECC(0, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, method);
}


bool Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v4; // kr00_16
  const MethodInfo *v5; // x4

  if ( (byte_5937861 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__);
    byte_5937861 = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_10;
  if ( !Spawner_ResourcePrecacher__HasCached(resourcePrecacher, method) )
    return 0;
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.requestsByPath;
  if ( !resourcePrecacher )
    goto LABEL_10;
  while ( SLODWORD(resourcePrecacher[1].monitor) > 0 )
  {
    v4 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_46A4ED8 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    method = *(const MethodInfo **)&v4.fields.cacheSize;
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v4.fields.path,
                                                           (const MethodInfo *)v4.fields.path);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v4.fields.cacheSize,
          v4.fields.overflowPolicy,
          v5);
        resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.requestsByPath;
        if ( resourcePrecacher )
          continue;
      }
    }
    goto LABEL_10;
  }
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.spawnerImpl;
  if ( !resourcePrecacher )
LABEL_10:
    sub_21FFECC(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, method);
}


void Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_47654076(this, path, 0, 0, v3);
}


void Spawner__Precache_47654068(Spawner_o *this, System_String_o *path, int32_t cacheSize, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_47654076(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void Spawner__Precache_47654076(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x22
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  Spawner_RequestByPath_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_5937860 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
    byte_5937860 = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_9;
  if ( Spawner_ResourcePrecacher__HasElement(resourcePrecacher, path, *(const MethodInfo **)&cacheSize) )
    return;
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher
    || (Spawner_ResourcePrecacher__Precache(resourcePrecacher, path, v10),
        requestsByPath = this->fields.requestsByPath,
        v18.fields.path = path,
        *(_QWORD *)&v18.fields.cacheSize = 0,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v18, (int32_t)path, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)&v18.fields.cacheSize = __PAIR64__(overflowPolicy, cacheSize),
        !requestsByPath) )
  {
LABEL_9:
    sub_21FFECC(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v18,
    (const MethodInfo_46A4D54 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void Spawner__Precache_47654576(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_47654584(this, prefab, 0, v3);
}


void Spawner__Precache_47654584(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_21FFECC(0, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, v4);
}


void Spawner__Precache_47654608(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_21FFECC(0, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, method);
}


UnityEngine_GameObject_o *Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_21FFECC(0, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  return Spawner__Spawn_47656152(this, Resource, v6);
}


UnityEngine_GameObject_o *Spawner__Spawn_47656152(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Spawner_SpawnerImpl_o *spawnerImpl; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s8
  float y; // s9
  float z; // s10
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  spawnerImpl = this->fields.spawnerImpl;
  if ( !byte_5931940 )
  {
    this = (Spawner_o *)sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
    byte_5931940 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_5931946 )
  {
    this = (Spawner_o *)sub_21FFC50(&UnityEngine_Quaternion_TypeInfo);
    byte_5931946 = 1;
  }
  if ( !spawnerImpl )
    sub_21FFECC(this, prefab);
  v11.fields.x = x;
  v11.fields.y = y;
  v11.fields.z = z;
  return Spawner_SpawnerImpl__Spawn(
           spawnerImpl,
           prefab,
           v11,
           UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
           0,
           v3);
}


UnityEngine_GameObject_o *Spawner__Spawn_47656340(
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
    sub_21FFECC(0, path);
  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  v17.fields.y = v12;
  v17.fields.z = v11;
  v18.fields.x = x;
  v18.fields.y = y;
  v18.fields.z = z;
  v18.fields.w = w;
  v17.fields.x = v13;
  return Spawner__Spawn_47656468(this, Resource, v17, v18, v15);
}


UnityEngine_GameObject_o *Spawner__Spawn_47656468(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_Vector3_o position,
        UnityEngine_Quaternion_o rotation,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_21FFECC(0, prefab);
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, position, rotation, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void Spawner_RequestByPath___ctor(
        Spawner_RequestByPath_o this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  bool v5; // w6
  bool v6; // w7
  int v8; // w20
  struct System_String_o *v9; // x21

  v8 = (int)path;
  v9 = this.fields.path;
  this.fields.path->klass = *(System_String_c **)&this.fields.cacheSize;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)this.fields.path,
    this.fields.cacheSize,
    path,
    *(System_String_o **)&cacheSize,
    overflowPolicy,
    (int32_t)method,
    v5,
    v6);
  LODWORD(v9->monitor) = v8;
  HIDWORD(v9->monitor) = cacheSize;
}


void Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7

  if ( (byte_593786A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
    byte_593786A = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_66886384(
    v3,
    32,
    (const MethodInfo_3FC9AF0 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Object_o *Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  __int64 v6; // x2
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5937868 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937868 = 1;
  }
  elements = this->fields.elements;
  value = 0;
  if ( !elements )
    goto LABEL_13;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue((System_Collections_Generic_Dictionary_object__object__o *)elements, (Il2CppObject *)path, &value, (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) != 0 )
  {
    if ( value )
    {
      monitor = (UnityEngine_Object_o *)value[1].monitor;
      goto LABEL_8;
    }
LABEL_13:
    sub_21FFECC(elements, path);
  }
  monitor = 0;
LABEL_8:
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, path, v6);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return UnityEngine_Resources__Load(path, 0);
  return monitor;
}


bool Spawner_ResourcePrecacher__HasCached(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  bool v6; // w21
  Il2CppObject *currentValue; // x20
  UnityEngine_AsyncOperation_o *v8; // x0
  UnityEngine_ResourceRequest_o **v9; // x19
  __int64 v10; // x1
  int *asset; // x0
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_5937866 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_5937866 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  memset(&v25, 0, sizeof(v25));
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                elements,
                                                                                (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0 )
  {
    sub_21FFECC(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v25,
           (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    v6 = v4;
    if ( !v4 )
      break;
    currentValue = v25.fields._currentValue;
    if ( !v25.fields._currentValue )
      sub_21FFECC(v4, v5);
    v9 = (UnityEngine_ResourceRequest_o **)((char *)v25.fields._currentValue + (unsigned __int64)&word_10);
    v8 = *(UnityEngine_AsyncOperation_o **)((char *)&v25.fields._currentValue->klass + (unsigned __int64)&word_10);
    if ( v8 )
    {
      if ( !UnityEngine_AsyncOperation__get_isDone(v8, 0) )
        break;
      if ( !*v9 )
        sub_21FFECC(0, v10);
      asset = (int *)UnityEngine_ResourceRequest__get_asset(*v9, 0);
      *(int **)((char *)off_18 + (_QWORD)currentValue) = asset;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)((char *)off_18 + (_QWORD)currentValue),
        (int32_t)asset,
        v12,
        v13,
        v14,
        v15,
        v16,
        v17);
      *v9 = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v9, 0, v18, v19, v20, v21, v22, v23);
    }
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v25,
    (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return !v6;
}


bool Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_5937864 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
    byte_5937864 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_21FFECC(0, path);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (Il2CppObject *)path,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_5937865 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__);
    byte_5937865 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_21FFECC(0, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (const MethodInfo_3FCA120 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
}


// attributes: thunk
void Spawner_ResourcePrecacher__OnDestroy(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher__UnloadAndClear(this, method);
}


void Spawner_ResourcePrecacher__Precache(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7

  if ( (byte_5937863 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
    sub_21FFC50(&Spawner_ResourcePrecacher_Element_TypeInfo);
    byte_5937863 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v5 = sub_21FFEBC(Spawner_ResourcePrecacher_Element_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    elements = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Resources__Load(path, 0);
    if ( !v5
      || (*(_QWORD *)(v5 + 24) = elements,
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 24), (int32_t)elements, v8, v9, v10, v11, v12, v13),
          (elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements) == 0) )
    {
      sub_21FFECC(elements, v7);
    }
    System_Collections_Generic_Dictionary_object__object___Add(
      elements,
      (Il2CppObject *)path,
      (Il2CppObject *)v5,
      (const MethodInfo_3FCA468 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  __int64 v6; // x2
  Il2CppObject *currentValue; // x25
  UnityEngine_Object_o *v8; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v9; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5937869 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_5937869 = 1;
  }
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  memset(&v9, 0, sizeof(v9));
  if ( !elements )
    goto LABEL_15;
  elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          elements,
                                                                          (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v9,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v9,
           (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v9.fields._currentValue;
    if ( !v9.fields._currentValue )
      sub_21FFECC(v4, v5);
    v8 = *(UnityEngine_Object_o **)((char *)&v9.fields._currentValue->klass + (unsigned __int64)off_18);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
    if ( UnityEngine_Object__op_Inequality(v8, 0, 0) )
      UnityEngine_Resources__UnloadAsset(*(UnityEngine_Object_o **)((char *)off_18 + (_QWORD)currentValue), 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v9,
    (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
LABEL_15:
    sub_21FFECC(elements, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    elements,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_5937867 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
    byte_5937867 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_21FFECC(0, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)elements,
                                                               (const MethodInfo_3FCA130 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void Spawner_ResourcePrecacher_Element___ctor(Spawner_ResourcePrecacher_Element_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5937877 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Transform___ctor__);
    sub_21FFC50(&System_Collections_Generic_Queue_Transform__TypeInfo);
    sub_21FFC50(&Spawner_SpawnerImpl_TypeInfo);
    byte_5937877 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_21FFEBC(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_469F6A0 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  Spawner_SpawnerImpl_TypeInfo->static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)Spawner_SpawnerImpl_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Spawner_SpawnerImpl___ctor(Spawner_SpawnerImpl_o *this, UnityEngine_Transform_o *parent, const MethodInfo *method)
{
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  System_Collections_Generic_HashSet_object__o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  System_Collections_Generic_Dictionary_object__int__o *v32; // x20
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7

  if ( (byte_593786B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_Object__int__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_GameObject___ctor__);
    sub_21FFC50(&System_Collections_Generic_HashSet_GameObject__TypeInfo);
    byte_593786B = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.parent = parent;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields, (int32_t)parent, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_66886384(
    v11,
    32,
    (const MethodInfo_3FC9AF0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  this->fields.caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v11;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.caches, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor_66778808(
    v18,
    128,
    (const MethodInfo_3FAF6B8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  this->fields.managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v18;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.managedObjects,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (System_Collections_Generic_HashSet_object__o *)sub_21FFEBC(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v25,
    (const MethodInfo_4286740 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  this->fields.destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v25;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.destroyedUnmanagedObjects,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor_66846584(
    v32,
    32,
    (const MethodInfo_3FBFF78 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  this->fields.serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v32;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.serialNumbers,
    (int32_t)v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38);
}


System_Collections_Generic_List_Transform__o *Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  Spawner_SpawnerImpl_c *v6; // x0
  System_Collections_Generic_Queue_T__o *q; // x0
  __int64 v8; // x2
  System_Collections_Generic_Queue_T__o *klass; // x8
  int32_t version; // w9
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  UnityEngine_Transform_o *v20; // x20
  Il2CppClass **v21; // x0
  int32_t v22; // w21
  Spawner_SpawnerImpl_c *v23; // x0
  System_Collections_Generic_Queue_T__o *v24; // x22

  if ( (byte_5937870 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Transform__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Transform__Enqueue__);
    sub_21FFC50(&Method_System_Collections_Generic_Queue_Transform__get_Count__);
    sub_21FFC50(&Spawner_SpawnerImpl_TypeInfo);
    byte_5937870 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v6 = Spawner_SpawnerImpl_TypeInfo;
  if ( !*(&Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v4, v5);
    v6 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = (System_Collections_Generic_Queue_T__o *)v6->static_fields->q;
  if ( !q )
    goto LABEL_29;
  System_Collections_Generic_Queue_object___Enqueue(
    q,
    (Il2CppObject *)root,
    (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
  while ( 1 )
  {
LABEL_7:
    q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    if ( !*(&Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v4, v8);
      q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    }
    klass = (System_Collections_Generic_Queue_T__o *)q[3].fields._syncRoot->klass;
    if ( !klass )
      goto LABEL_29;
    version = q[4].fields._version;
    if ( klass->fields._size <= 0 )
      break;
    if ( !version )
    {
      j_il2cpp_runtime_class_init_0(q, v4, v8);
      klass = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !klass )
        goto LABEL_29;
    }
    q = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                   klass,
                                                   (const MethodInfo_469FDFC *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v3 )
      goto LABEL_29;
    items = v3->fields._items;
    v18 = Method_System_Collections_Generic_List_Transform__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_29;
    size = v3->fields._size;
    v20 = (UnityEngine_Transform_o *)q;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)q,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v21 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v21[4] = (Il2CppClass *)v20;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v21 + 4), (int32_t)v20, v11, v12, v13, v14, v15, v16);
    }
    if ( !v20 )
      goto LABEL_29;
    if ( UnityEngine_Transform__get_childCount(v20, 0) >= 1 )
    {
      v22 = 0;
      while ( 1 )
      {
        v23 = Spawner_SpawnerImpl_TypeInfo;
        if ( !*(&Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v4, v8);
          v23 = Spawner_SpawnerImpl_TypeInfo;
        }
        v24 = (System_Collections_Generic_Queue_T__o *)v23->static_fields->q;
        q = (System_Collections_Generic_Queue_T__o *)UnityEngine_Transform__GetChild(v20, v22, 0);
        if ( !v24 )
          break;
        System_Collections_Generic_Queue_object___Enqueue(
          v24,
          (Il2CppObject *)q,
          (const MethodInfo_469FC6C *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v22 >= UnityEngine_Transform__get_childCount(v20, 0) )
          goto LABEL_7;
      }
LABEL_29:
      sub_21FFECC(q, v4);
    }
  }
  if ( !version )
  {
    j_il2cpp_runtime_class_init_0(q, v4, v8);
    klass = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
    if ( !klass )
      goto LABEL_29;
  }
  System_Collections_Generic_Queue_object___Clear(
    klass,
    (const MethodInfo_469F934 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v3;
}


bool Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0

  if ( (byte_5937876 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    byte_5937876 = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    sub_21FFECC(0, obj);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)caches,
           (Il2CppObject *)obj,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_5937872 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    byte_5937872 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0), (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0)
    || (System_Collections_Generic_Dictionary_object__bool___set_Item(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          (Il2CppObject *)obj,
          0,
          (const MethodInfo_3FB0028 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0) )
  {
    sub_21FFECC(this, obj);
  }
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, v4->fields.parent, 0);
}


// local variable allocation has failed, the output may be wrong!
void Spawner_SpawnerImpl__Despawn(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *objectToDespawn,
        bool sendsDespawn,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *IsAlive; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x1
  __int64 v10; // x2
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  __int64 v13; // x1
  __int64 v14; // x2
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x21
  Spawner_SpawnerImpl___c_c *v16; // x8
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x9
  System_Func_object__object__o *_9__17_0; // x22
  Il2CppObject *v19; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  System_Func_object__bool__o *v28; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v29; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v31; // x21
  __int64 v32; // x9
  int32_t *p_offset; // x10
  __int64 v34; // x0
  __int64 v35; // x0
  __int64 v36; // x1
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  __int64 v41; // x8
  __int64 v42; // x9
  int *v43; // x10
  __int64 v44; // x0
  UnityEngine_GameObject_o *v45; // x1
  const MethodInfo *v46; // x2
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  const MethodInfo *v51; // x2
  __int64 v52; // [xsp+18h] [xbp-38h]

  if ( (byte_5937871 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    sub_21FFC50(&Method_System_Linq_Enumerable_Reverse_GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Skip_Transform___);
    sub_21FFC50(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_21FFC50(&System_Func_Transform__GameObject__TypeInfo);
    sub_21FFC50(&System_Func_GameObject__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__);
    sub_21FFC50(&Spawner_SpawnerImpl_TypeInfo);
    sub_21FFC50(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__);
    sub_21FFC50(&Spawner_SpawnerImpl___c_TypeInfo);
    sub_21FFC50(&StringLiteral_10276/*"OnDespawn"*/);
    byte_5937871 = 1;
  }
  IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)Spawner_SpawnerImpl__IsAlive(
                                                                       this,
                                                                       objectToDespawn,
                                                                       (const MethodInfo *)sendsDespawn);
  if ( ((unsigned __int8)IsAlive & 1) != 0 )
  {
    if ( sendsDespawn )
    {
      if ( !objectToDespawn )
        goto LABEL_51;
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_10276/*"OnDespawn"*/, 1, 0);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_51;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0);
    if ( !*(&Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v9, v10);
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v9);
    v15 = System_Linq_Enumerable__Skip_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_3866684 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v16 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( !*(&Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo, v13, v14);
      v16 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    static_fields = v16->static_fields;
    _9__17_0 = (System_Func_object__object__o *)static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !*(&v16->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v16, v13, v14);
        static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      }
      v19 = (Il2CppObject *)static_fields->__9;
      _9__17_0 = (System_Func_object__object__o *)sub_21FFEBC(System_Func_Transform__GameObject__TypeInfo);
      System_Func_object__object____ctor(_9__17_0, v19, Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, 0);
      v20 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      v20->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v20->__9__17_0, (int32_t)_9__17_0, v21, v22, v23, v24, v25, v26);
    }
    v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v15,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_385DD00 *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v28 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(v28, (Il2CppObject *)this, Method_Spawner_SpawnerImpl__Despawn_b__17_1__, 0);
    v29 = System_Linq_Enumerable__Where_object_(
            v27,
            (System_Func_TSource__bool__o *)v28,
            (const MethodInfo_386FFB0 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__Reverse_object_(
                                                                         v29,
                                                                         (const MethodInfo_38568D4 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v31 = IsAlive;
      v32 = *(unsigned __int16 *)&IsAlive->klass->_2.rank;
      if ( *(_WORD *)&IsAlive->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          --v32;
          p_offset += 4;
          if ( !v32 )
            goto LABEL_21;
        }
        v34 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_21:
        v34 = sub_2237E2C(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0);
      }
      v35 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v34)(
              v31,
              *(_QWORD *)(v34 + 8));
      v52 = v35;
      while ( 1 )
      {
        if ( !v52 )
          sub_21FFECC(v35, v36);
        v37 = *(_QWORD *)v52;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v39 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_29;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_29:
          v40 = sub_2237E2C(v52, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v52, *(_QWORD *)(v40 + 8)) & 1) == 0 )
          break;
        v41 = *(_QWORD *)v52;
        v42 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
        {
          v43 = (int *)(*(_QWORD *)(v41 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v43 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            --v42;
            v43 += 4;
            if ( !v42 )
              goto LABEL_36;
          }
          v44 = v41 + 16LL * *v43 + 312;
        }
        else
        {
LABEL_36:
          v44 = sub_2237E2C(v52, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0);
        }
        v45 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v44)(v52, *(_QWORD *)(v44 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v45, v46);
      }
      v47 = *(_QWORD *)v52;
      v48 = *(unsigned __int16 *)(*(_QWORD *)v52 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v52 + 302LL) )
      {
        v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
        {
          --v48;
          v49 += 4;
          if ( !v48 )
            goto LABEL_43;
        }
        v50 = v47 + 16LL * *v49 + 312;
      }
      else
      {
LABEL_43:
        v50 = sub_2237E2C(v52, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v50)(v52, *(_QWORD *)(v50 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
               IsAlive,
               (Il2CppObject *)objectToDespawn,
               (const MethodInfo_3FB0240 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v51);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v51);
        }
        return;
      }
    }
LABEL_51:
    sub_21FFECC(IsAlive, v8);
  }
}


void Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_HashSet_GameObject__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v7; // x1
  float unscaledTime; // s0

  if ( (byte_5937873 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_GameObject__Add__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937873 = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  UnityEngine_Object__Destroy_83246496((UnityEngine_Object_o *)obj, 0);
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_21FFECC(0, v5);
  System_Collections_Generic_HashSet_object___Add(
    (System_Collections_Generic_HashSet_object__o *)destroyedUnmanagedObjects,
    (Il2CppObject *)obj,
    (const MethodInfo_4287934 *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v7);
  }
}


void Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Spawner_SpawnerImpl___c_c *v4; // x0
  struct System_Collections_Generic_HashSet_GameObject__o *destroyedUnmanagedObjects; // x19
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x8
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v8; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *v9; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7

  if ( (byte_5937874 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
    sub_21FFC50(&System_Predicate_GameObject__TypeInfo);
    sub_21FFC50(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__);
    sub_21FFC50(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_5937874 = 1;
  }
  v4 = Spawner_SpawnerImpl___c_TypeInfo;
  destroyedUnmanagedObjects = this->fields.destroyedUnmanagedObjects;
  if ( !*(&Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo, method, v2);
    v4 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  static_fields = v4->static_fields;
  _9__20_0 = (System_Predicate_object__o *)static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !*(&v4->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v4, method, v2);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    }
    v8 = (Il2CppObject *)static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_21FFEBC(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(_9__20_0, v8, Method_Spawner_SpawnerImpl___c__GC_b__20_0__, 0);
    v9 = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    v9->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v9->__9__20_0, (int32_t)_9__20_0, v10, v11, v12, v13, v14, v15);
  }
  if ( !destroyedUnmanagedObjects )
    sub_21FFECC(v4, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    (System_Collections_Generic_HashSet_object__o *)destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_4287E70 *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  int v4; // w23
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  bool v7; // w19
  Il2CppObject *currentValue; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+18h] [xbp-48h] BYREF

  if ( (byte_593786D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
    byte_593786D = 1;
  }
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  memset(&v10, 0, sizeof(v10));
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                              caches,
                                                                              (const MethodInfo_3FCA28C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0 )
  {
    sub_21FFECC(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_3C9BB94 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v4 = 0;
  do
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v10,
           (const MethodInfo_413634C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    v7 = v5;
    if ( !v5 )
      break;
    currentValue = v10.fields._currentValue;
    if ( !v10.fields._currentValue )
      sub_21FFECC(v5, v6);
    if ( !*(Il2CppClass **)((char *)&v10.fields._currentValue->klass + (unsigned __int64)&qword_28) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize((Spawner_SpawnerImpl_ObjectCache_o *)v10.fields._currentValue, v6);
      v4 += *(_DWORD *)((char *)&qword_20 + (_QWORD)currentValue);
    }
  }
  while ( v4 < 32 );
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v10,
    (const MethodInfo_4136348 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return !v7;
}


bool Spawner_SpawnerImpl__IsAlive(Spawner_SpawnerImpl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5937875 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937875 = 1;
  }
  value = 0;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj, method);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      if ( System_Collections_Generic_Dictionary_object__bool___TryGetValue(
             managedObjects,
             (Il2CppObject *)obj,
             &value,
             (const MethodInfo_3FB1B78 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_object___Contains(
                  (System_Collections_Generic_HashSet_object__o *)managedObjects,
                  (Il2CppObject *)obj,
                  (const MethodInfo_4286E44 *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_21FFECC(managedObjects, v5);
  }
  return 0;
}


void Spawner_SpawnerImpl__Number(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *serialNumbers; // x0
  int32_t v8; // w2
  Il2CppObject *name; // x20
  Il2CppObject *v10; // x0
  int32_t v11; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_593786F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__);
    sub_21FFC50(&StringLiteral_26481/*"{0}({1})"*/);
    byte_593786F = 1;
  }
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  value = 0;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    serialNumbers,
    (Il2CppObject *)prefab,
    &value,
    (const MethodInfo_3FC241C *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  v8 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          serialNumbers,
          (Il2CppObject *)prefab,
          v8,
          (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0),
        v11 = value,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(qword_594C070, &v11),
        serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)System_String__Format_75484576(
                                                                                  (System_String_o *)StringLiteral_26481/*"{0}({1})"*/,
                                                                                  name,
                                                                                  v10,
                                                                                  0),
        !obj) )
  {
LABEL_8:
    sub_21FFECC(serialNumbers, prefab);
  }
  UnityEngine_Object__set_name((UnityEngine_Object_o *)obj, (System_String_o *)serialNumbers, 0);
}


void Spawner_SpawnerImpl__Precache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *v10; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x24
  const MethodInfo *v12; // x5

  if ( (byte_593786C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
    sub_21FFC50(&Spawner_SpawnerImpl_ObjectCache_TypeInfo);
    byte_593786C = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)caches,
         (Il2CppObject *)prefab,
         (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v10 = this->fields.caches;
  v11 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_21FFEBC(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v11, this, prefab, cacheSize, overflowPolicy, v12);
  if ( !v10 )
LABEL_7:
    sub_21FFECC(caches, prefab);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)v10,
    (Il2CppObject *)prefab,
    (Il2CppObject *)v11,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
}


UnityEngine_GameObject_o *Spawner_SpawnerImpl__Spawn(
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
  float v10; // s12
  float v11; // s13
  float v13; // s14
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  __int64 v17; // x2
  UnityEngine_Object_o *NextObjectInCache; // x21
  __int64 v19; // x2
  int v20; // w8
  UnityEngine_Object_o *v21; // x0
  __int64 v22; // x2
  const MethodInfo *v23; // x3
  UnityEngine_GameObject_o *result; // x0
  Spawner_o *v25; // x0
  UnityEngine_GameObject_o *v26; // x1
  bool v27; // w2
  const MethodInfo *v28; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v30; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v31; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v32; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v33; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v10 = position.fields.z;
  v11 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_593786E & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_10354/*"OnSpawn"*/);
    byte_593786E = 1;
  }
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  value = 0;
  if ( !caches )
    goto LABEL_29;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         caches,
         (Il2CppObject *)prefab,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
  {
    caches = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( !value )
      goto LABEL_29;
    NextObjectInCache = (UnityEngine_Object_o *)Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
                                                  (Spawner_SpawnerImpl_ObjectCache_o *)value,
                                                  (const MethodInfo *)prefab);
  }
  else
  {
    NextObjectInCache = 0;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, v17);
  caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Equality(
                                                                        NextObjectInCache,
                                                                        0,
                                                                        0);
  if ( ((unsigned __int8)caches & 1) == 0 )
  {
    if ( overridesPositionAndRotation )
    {
      if ( !NextObjectInCache )
        goto LABEL_29;
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0);
      if ( !caches )
        goto LABEL_29;
      v31.fields.x = v13;
      v31.fields.y = v11;
      v31.fields.z = v10;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v31, 0);
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0);
      if ( !caches )
        goto LABEL_29;
      v32.fields.x = x;
      v32.fields.y = y;
      v32.fields.z = z;
      v32.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v32, 0);
    }
    caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_object__bool___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)caches,
        (Il2CppObject *)NextObjectInCache,
        1,
        (const MethodInfo_3FB0028 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_24;
    }
LABEL_29:
    sub_21FFECC(caches, prefab);
  }
  v20 = *(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1);
  if ( overridesPositionAndRotation )
  {
    if ( !v20 )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, v19);
    v30.fields.x = v13;
    v30.fields.y = v11;
    v30.fields.z = v10;
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    v33.fields.w = w;
    v21 = UnityEngine_Object__Instantiate(prefab, v30, v33, 0);
    if ( v21 )
      goto LABEL_15;
    goto LABEL_28;
  }
  if ( !v20 )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab, v19);
  v21 = UnityEngine_Object__Instantiate_83245144(prefab, 0);
  if ( !v21 )
  {
LABEL_28:
    Spawner_SpawnerImpl__Number(this, prefab, 0, v23);
    goto LABEL_29;
  }
LABEL_15:
  NextObjectInCache = v21;
  if ( (UnityEngine_GameObject_c *)v21->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v21, v23);
LABEL_24:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_10354/*"OnSpawn"*/,
      1,
      0);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  sub_220024C(v21, UnityEngine_GameObject_TypeInfo, v22, v23);
  Spawner__Despawn(v25, v26, v27, v28);
  return result;
}


bool Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0

  if ( (byte_5937878 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    byte_5937878 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_21FFECC(0, x);
  return System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           managedObjects,
           (Il2CppObject *)x,
           (const MethodInfo_3FB0240 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
}


void Spawner_SpawnerImpl_ObjectCache___ctor(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        Spawner_SpawnerImpl_o *spawnerImpl,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_ObjectCache_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)spawnerImpl, v11, v12, v13, v14, v15, v16);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)prefab, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = cacheSize;
  HIDWORD(v10->monitor) = overflowPolicy;
}


UnityEngine_GameObject_o *Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_ObjectCache_o *v2; // x19
  int32_t v3; // w22
  struct UnityEngine_GameObject_array *objects; // x8
  __int64 cacheIndex; // x9
  struct Spawner_SpawnerImpl_o *spawnerImpl; // x10
  Il2CppObject *v7; // x20
  int32_t cacheSize; // w9
  struct Spawner_SpawnerImpl_o *v9; // x8
  const MethodInfo *v10; // x3
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x21

  v2 = this;
  if ( (byte_593787A & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    byte_593787A = 1;
  }
  if ( !v2->fields.objects || v2->fields.cacheSize < 1 )
    return 0;
  v3 = 0;
  do
  {
    objects = v2->fields.objects;
    if ( !objects )
      goto LABEL_23;
    cacheIndex = v2->fields.cacheIndex;
    if ( (unsigned int)cacheIndex >= LODWORD(objects->max_length) )
      sub_21FFED4(this);
    spawnerImpl = v2->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_23;
    this = (Spawner_SpawnerImpl_ObjectCache_o *)spawnerImpl->fields.managedObjects;
    if ( !this )
      goto LABEL_23;
    v7 = (Il2CppObject *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                  v7,
                                                  (const MethodInfo_3FAFFB4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    if ( ((unsigned __int8)this & 1) == 0 )
      break;
    cacheSize = v2->fields.cacheSize;
    ++v3;
    v2->fields.cacheIndex = (v2->fields.cacheIndex + 1) % cacheSize;
  }
  while ( v3 < cacheSize );
  v9 = v2->fields.spawnerImpl;
  if ( !v9 || (this = (Spawner_SpawnerImpl_ObjectCache_o *)v9->fields.managedObjects) == 0 )
LABEL_23:
    sub_21FFECC(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                v7,
                                                (const MethodInfo_3FAFFB4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.overflowPolicy == 1 )
    {
      this = (Spawner_SpawnerImpl_ObjectCache_o *)v2->fields.spawnerImpl;
      if ( !this )
        goto LABEL_23;
      Spawner_SpawnerImpl__Despawn((Spawner_SpawnerImpl_o *)this, (UnityEngine_GameObject_o *)v7, 1, v10);
      goto LABEL_18;
    }
    return 0;
  }
LABEL_18:
  v2->fields.cacheIndex = (v2->fields.cacheIndex + 1) % v2->fields.cacheSize;
  if ( !v7 )
    goto LABEL_23;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  if ( !this )
    goto LABEL_23;
  v11 = this;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0, 0);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalPosition, 0);
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalRotation, 0);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalScale, 0);
  return (UnityEngine_GameObject_o *)v7;
}


void Spawner_SpawnerImpl_ObjectCache__Initialize(Spawner_SpawnerImpl_ObjectCache_o *this, const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x1
  __int64 v11; // x2
  unsigned __int64 v12; // x22
  __int64 i; // x25
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  UnityEngine_GameObject_o *v24; // x20
  const MethodInfo *v25; // x3
  UnityEngine_Transform_o *v26; // x21
  const MethodInfo *v27; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v28; // x0
  const MethodInfo *v29; // x1

  if ( (byte_5937879 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_GameObject___TypeInfo);
    sub_21FFC50(&UnityEngine_GameObject_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5937879 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_21FFD10(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.objects, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( this->fields.cacheSize >= 1 )
  {
    v12 = 0;
    for ( i = 32; ; i += 8 )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10, v11);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_83245144(prefab, 0);
      v24 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        v17 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_19;
      if ( v12 >= LODWORD(objects->max_length) )
        sub_21FFED4(transform);
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)transform;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)((char *)objects + i),
        (int32_t)transform,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      if ( i == 32 )
      {
        if ( !v24 || (transform = UnityEngine_GameObject__get_transform(v24, 0)) == 0 )
LABEL_19:
          sub_21FFECC(transform, v17);
        v26 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v26, 0);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v26, 0);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v24, v25);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v24, v27);
      if ( (__int64)++v12 >= this->fields.cacheSize )
        return;
    }
    sub_220024C(transform, UnityEngine_GameObject_TypeInfo, v18, v19);
    Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(v28, v29);
  }
}


int32_t Spawner_SpawnerImpl_ObjectCache__get_CacheSize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  return this->fields.cacheSize;
}


bool Spawner_SpawnerImpl_ObjectCache__get_IsInitialized(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  return this->fields.objects != 0;
}


void Spawner_SpawnerImpl___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_593787B & 1) == 0 )
  {
    sub_21FFC50(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_593787B = 1;
  }
  v1 = (Il2CppObject *)sub_21FFEBC(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Spawner_SpawnerImpl___c_TypeInfo->static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v1;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void Spawner_SpawnerImpl___c___ctor(Spawner_SpawnerImpl___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_GameObject_o *Spawner_SpawnerImpl___c___Despawn_b__17_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  if ( !x )
    sub_21FFECC(this, 0);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


bool Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_593787C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593787C = 1;
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x, method);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0, 0);
}