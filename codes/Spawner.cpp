void Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_4D2BA50 & 1) == 0 )
  {
    sub_1C94098(&Method_SingletonMonoBehaviour_Spawner___ctor__);
    byte_4D2BA50 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABAA5C *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v19; // x21
  const MethodInfo *v20; // x2
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4D2BA4D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
    sub_1C94098(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
    sub_1C94098(&Spawner_ResourcePrecacher_TypeInfo);
    sub_1C94098(&Method_SingletonMonoBehaviour_Spawner__Awake__);
    sub_1C94098(&Spawner_SpawnerImpl_TypeInfo);
    byte_4D2BA4D = 1;
  }
  v3 = (Spawner_ResourcePrecacher_o *)sub_1C942E4(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v3, v4);
  this->fields.resourcePrecacher = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.resourcePrecacher, (int32_t)v3, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_1C942E4(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_60924132(
    v11,
    32,
    (const MethodInfo_3A1A0E4 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
  this->fields.requestsByPath = v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.requestsByPath, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
  v19 = (Spawner_SpawnerImpl_o *)sub_1C942E4(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v19, transform, v20);
  this->fields.spawnerImpl = v19;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.spawnerImpl, (int32_t)v19, v21, v22, v23, v24, v25, v26);
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3ABA898 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1C942F0(0, obj);
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
    sub_1C942F0(0, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, method);
}


bool Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v4; // kr00_16
  const MethodInfo *v5; // x4

  if ( (byte_4D2BA4F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__);
    byte_4D2BA4F = 1;
  }
  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    goto LABEL_14;
  if ( !Spawner_ResourcePrecacher__HasCached(resourcePrecacher, method) )
    return 0;
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.requestsByPath;
  if ( !resourcePrecacher )
    goto LABEL_14;
  while ( SLODWORD(resourcePrecacher[1].monitor) > 0 )
  {
    v4 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_3A1A7B0 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
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
    goto LABEL_14;
  }
  resourcePrecacher = (Spawner_ResourcePrecacher_o *)this->fields.spawnerImpl;
  if ( !resourcePrecacher )
LABEL_14:
    sub_1C942F0(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, method);
}


void Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_41472216(this, path, 0, 0, v3);
}


void Spawner__Precache_41472208(Spawner_o *this, System_String_o *path, int32_t cacheSize, const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_41472216(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void Spawner__Precache_41472216(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x22
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  Spawner_RequestByPath_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4D2BA4E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
    byte_4D2BA4E = 1;
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
        sub_1C9403C((GrandQuestFolderBoardItem_o *)&v18, (int32_t)path, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)&v18.fields.cacheSize = __PAIR64__(overflowPolicy, cacheSize),
        !requestsByPath) )
  {
LABEL_9:
    sub_1C942F0(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v18,
    (const MethodInfo_3A1A628 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void Spawner__Precache_41472716(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_41472724(this, prefab, 0, v3);
}


void Spawner__Precache_41472724(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1C942F0(0, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, v4);
}


void Spawner__Precache_41472752(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1C942F0(0, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, method);
}


UnityEngine_GameObject_o *Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_1C942F0(0, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  return Spawner__Spawn_41474376(this, Resource, v6);
}


UnityEngine_GameObject_o *Spawner__Spawn_41474376(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  Spawner_SpawnerImpl_o *spawnerImpl; // x20
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float y; // s9
  float x; // s10
  float z; // s8
  UnityEngine_Vector3_o v11; // 0:s0.4,4:s1.4,8:s2.4

  spawnerImpl = this->fields.spawnerImpl;
  if ( !byte_4D25F19 )
  {
    this = (Spawner_o *)sub_1C94098(&UnityEngine_Vector3_TypeInfo);
    byte_4D25F19 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4D25F1F )
  {
    this = (Spawner_o *)sub_1C94098(&UnityEngine_Quaternion_TypeInfo);
    byte_4D25F1F = 1;
  }
  if ( !spawnerImpl )
    sub_1C942F0(this, prefab);
  v11.fields.y = y;
  v11.fields.z = z;
  v11.fields.x = x;
  return Spawner_SpawnerImpl__Spawn(
           spawnerImpl,
           prefab,
           v11,
           UnityEngine_Quaternion_TypeInfo->static_fields->identityQuaternion,
           0,
           v3);
}


UnityEngine_GameObject_o *Spawner__Spawn_41474564(
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
    sub_1C942F0(0, path);
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
  return Spawner__Spawn_41474692(this, Resource, v17, v18, v15);
}


UnityEngine_GameObject_o *Spawner__Spawn_41474692(
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
    sub_1C942F0(0, prefab);
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
  int64_t v5; // x6
  System_String_o *v6; // x7
  int v8; // w20
  struct System_String_o *v9; // x21

  v8 = (int)path;
  v9 = this.fields.path;
  this.fields.path->klass = *(System_String_c **)&this.fields.cacheSize;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)this.fields.path,
    this.fields.cacheSize,
    (int32_t)path,
    cacheSize,
    *(System_String_o **)&overflowPolicy,
    (int32_t)method,
    v5,
    v6);
  LODWORD(v9->monitor) = v8;
  HIDWORD(v9->monitor) = cacheSize;
}


void Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7

  if ( (byte_4D2BA58 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
    byte_4D2BA58 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_55706204(
    v3,
    32,
    (const MethodInfo_352025C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  System_Object___ctor((Il2CppObject *)this, 0);
}


UnityEngine_Object_o *Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4D2BA56 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA56 = 1;
  }
  value = 0;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_13;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue((System_Collections_Generic_Dictionary_object__object__o *)elements, (Il2CppObject *)path, &value, (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) != 0 )
  {
    if ( value )
    {
      monitor = (UnityEngine_Object_o *)value[1].monitor;
      goto LABEL_8;
    }
LABEL_13:
    sub_1C942F0(elements, path);
  }
  monitor = 0;
LABEL_8:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0, 0) )
    return UnityEngine_Resources__Load(path, 0);
  return monitor;
}


bool Spawner_ResourcePrecacher__HasCached(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v8; // x19
  __int64 v9; // x1
  UnityEngine_Object_o *asset; // x0
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int v23; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v26; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4D2BA54 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_4D2BA54 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                elements,
                                                                                (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0 )
  {
    sub_1C942F0(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v26 = v25;
  while ( 1 )
  {
    do
    {
      v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v26,
             (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v4 )
      {
        v23 = 6;
        goto LABEL_14;
      }
      currentValue = v26.fields._currentValue;
      if ( !v26.fields._currentValue )
        sub_1C942F0(v4, v5);
      v8 = (UnityEngine_ResourceRequest_o **)&v26.fields._currentValue[1];
      klass = v26.fields._currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0) )
      break;
    if ( !*v8 )
      sub_1C942F0(0, v9);
    asset = UnityEngine_ResourceRequest__get_asset(*v8, 0);
    currentValue[1].monitor = asset;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&currentValue[1].monitor, (int32_t)asset, v11, v12, v13, v14, v15, v16);
    *v8 = 0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)v8, 0, v17, v18, v19, v20, v21, v22);
  }
  v23 = 5;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v26,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v23 != 5;
}


bool Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4D2BA52 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
    byte_4D2BA52 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1C942F0(0, path);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (Il2CppObject *)path,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4D2BA53 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__);
    byte_4D2BA53 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1C942F0(0, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (const MethodInfo_35208C4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2BA51 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
    sub_1C94098(&Spawner_ResourcePrecacher_Element_TypeInfo);
    byte_4D2BA51 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v5 = sub_1C942E4(Spawner_ResourcePrecacher_Element_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0);
    elements = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Resources__Load(path, 0);
    if ( !v5
      || (*(_QWORD *)(v5 + 24) = elements,
          sub_1C9403C((GrandQuestFolderBoardItem_o *)(v5 + 24), (int32_t)elements, v8, v9, v10, v11, v12, v13),
          (elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements) == 0) )
    {
      sub_1C942F0(elements, v7);
    }
    System_Collections_Generic_Dictionary_object__object___Add(
      elements,
      (Il2CppObject *)path,
      (Il2CppObject *)v5,
      (const MethodInfo_3520BF4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x25
  UnityEngine_Object_o *v7; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4D2BA57 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_4D2BA57 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_15;
  elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          elements,
                                                                          (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v8,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v8.fields._currentValue;
    if ( !v8.fields._currentValue )
      sub_1C942F0(v4, v5);
    v7 = *(UnityEngine_Object_o **)((char *)&v8.fields._currentValue->klass + (unsigned __int64)&off_18);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v7, 0, 0) )
      UnityEngine_Resources__UnloadAsset(*(UnityEngine_Object_o **)((char *)&off_18 + (_QWORD)currentValue), 0);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
LABEL_15:
    sub_1C942F0(elements, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    elements,
    (const MethodInfo_3520D7C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4D2BA55 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
    byte_4D2BA55 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1C942F0(0, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)elements,
                                                               (const MethodInfo_35208D4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void Spawner_ResourcePrecacher_Element___ctor(Spawner_ResourcePrecacher_Element_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BA65 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Queue_Transform___ctor__);
    sub_1C94098(&System_Collections_Generic_Queue_Transform__TypeInfo);
    sub_1C94098(&Spawner_SpawnerImpl_TypeInfo);
    byte_4D2BA65 = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1C942E4(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_3A15C30 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  Spawner_SpawnerImpl_TypeInfo->static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)Spawner_SpawnerImpl_TypeInfo->static_fields,
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
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  System_Collections_Generic_Dictionary_object__object__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  int32_t v19; // w2
  int32_t v20; // w3
  System_String_o *v21; // x4
  int32_t v22; // w5
  int64_t v23; // x6
  System_String_o *v24; // x7
  System_Collections_Generic_HashSet_T__o *v25; // x20
  int32_t v26; // w2
  int32_t v27; // w3
  System_String_o *v28; // x4
  int32_t v29; // w5
  int64_t v30; // x6
  System_String_o *v31; // x7
  System_Collections_Generic_Dictionary_object__int__o *v32; // x20
  int32_t v33; // w2
  int32_t v34; // w3
  System_String_o *v35; // x4
  int32_t v36; // w5
  int64_t v37; // x6
  System_String_o *v38; // x7

  if ( (byte_4D2BA59 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
    sub_1C94098(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
    sub_1C94098(&System_Collections_Generic_Dictionary_Object__int__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_GameObject___ctor__);
    sub_1C94098(&System_Collections_Generic_HashSet_GameObject__TypeInfo);
    byte_4D2BA59 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.parent = parent;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields, (int32_t)parent, v5, v6, v7, v8, v9, v10);
  v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C942E4(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_55706204(
    v11,
    32,
    (const MethodInfo_352025C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  this->fields.caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v11;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.caches, (int32_t)v11, v12, v13, v14, v15, v16, v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C942E4(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor_55620288(
    v18,
    128,
    (const MethodInfo_350B2C0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  this->fields.managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v18;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.managedObjects, (int32_t)v18, v19, v20, v21, v22, v23, v24);
  v25 = (System_Collections_Generic_HashSet_T__o *)sub_1C942E4(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v25,
    (const MethodInfo_371E7A8 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  this->fields.destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v25;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)&this->fields.destroyedUnmanagedObjects,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  v32 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C942E4(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor_55670056(
    v32,
    32,
    (const MethodInfo_3517528 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  this->fields.serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v32;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.serialNumbers, (int32_t)v32, v33, v34, v35, v36, v37, v38);
}


System_Collections_Generic_List_Transform__o *Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  __int64 v4; // x1
  Spawner_SpawnerImpl_c *v5; // x0
  System_Collections_Generic_Queue_T__o *q; // x0
  System_Collections_Generic_Queue_T__o *klass; // x8
  int size; // w20
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  UnityEngine_Transform_o *v18; // x20
  Il2CppClass **v19; // x0
  int32_t v20; // w21
  Spawner_SpawnerImpl_c *v21; // x0
  System_Collections_Generic_Queue_T__o *v22; // x22

  if ( (byte_4D2BA5E & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1C94098(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1C94098(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Transform__Clear__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Transform__Enqueue__);
    sub_1C94098(&Method_System_Collections_Generic_Queue_Transform__get_Count__);
    sub_1C94098(&Spawner_SpawnerImpl_TypeInfo);
    byte_4D2BA5E = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C942E4(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_386A600 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v5 = Spawner_SpawnerImpl_TypeInfo;
  if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v5 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = (System_Collections_Generic_Queue_T__o *)v5->static_fields->q;
  if ( !q )
    goto LABEL_27;
  System_Collections_Generic_Queue_object___Enqueue(
    q,
    (Il2CppObject *)root,
    (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
  while ( 1 )
  {
LABEL_7:
    q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
      q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    }
    klass = (System_Collections_Generic_Queue_T__o *)q[3].fields._syncRoot->klass;
    if ( !klass )
      goto LABEL_27;
    size = klass->fields._size;
    if ( !q[4].fields._size )
    {
      j_il2cpp_runtime_class_init_0(q);
      klass = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !klass )
        goto LABEL_27;
    }
    if ( size <= 0 )
      break;
    q = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                   klass,
                                                   (const MethodInfo_3A16388 *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v3 )
      goto LABEL_27;
    items = v3->fields._items;
    v16 = Method_System_Collections_Generic_List_Transform__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_27;
    v17 = v3->fields._size;
    v18 = (UnityEngine_Transform_o *)q;
    if ( (unsigned int)v17 >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)q,
        *(const MethodInfo_386AE34 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + v17;
      v3->fields._size = v17 + 1;
      v19[4] = (Il2CppClass *)v18;
      sub_1C9403C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
    }
    if ( !v18 )
      goto LABEL_27;
    if ( UnityEngine_Transform__get_childCount(v18, 0) >= 1 )
    {
      v20 = 0;
      while ( 1 )
      {
        v21 = Spawner_SpawnerImpl_TypeInfo;
        if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v21 = Spawner_SpawnerImpl_TypeInfo;
        }
        v22 = (System_Collections_Generic_Queue_T__o *)v21->static_fields->q;
        q = (System_Collections_Generic_Queue_T__o *)UnityEngine_Transform__GetChild(v18, v20, 0);
        if ( !v22 )
          break;
        System_Collections_Generic_Queue_object___Enqueue(
          v22,
          (Il2CppObject *)q,
          (const MethodInfo_3A161F8 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v20 >= UnityEngine_Transform__get_childCount(v18, 0) )
          goto LABEL_7;
      }
LABEL_27:
      sub_1C942F0(q, v4);
    }
  }
  System_Collections_Generic_Queue_object___Clear(
    klass,
    (const MethodInfo_3A15EB8 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v3;
}


bool Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0

  if ( (byte_4D2BA64 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    byte_4D2BA64 = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    sub_1C942F0(0, obj);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)caches,
           (Il2CppObject *)obj,
           (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_4D2BA60 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    byte_4D2BA60 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0), (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0)
    || (System_Collections_Generic_Dictionary_object__bool___set_Item(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          (Il2CppObject *)obj,
          0,
          (const MethodInfo_350BC50 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0)) == 0) )
  {
    sub_1C942F0(this, obj);
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
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x21
  Spawner_SpawnerImpl___c_c *v13; // x8
  System_Func_object__object__o *_9__17_0; // x22
  Il2CppObject *v15; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x21
  System_Func_object__bool__o *v24; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v25; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x21
  __int64 v28; // x9
  int32_t *p_offset; // x10
  __int64 v30; // x0
  __int64 v31; // x1
  __int64 v32; // x21
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  UnityEngine_GameObject_o *v41; // x1
  const MethodInfo *v42; // x2
  __int64 v43; // x8
  __int64 v44; // x9
  int *v45; // x10
  __int64 v46; // x0
  const MethodInfo *v47; // x2

  if ( (byte_4D2BA5F & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    sub_1C94098(&Method_System_Linq_Enumerable_Reverse_GameObject___);
    sub_1C94098(&Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    sub_1C94098(&Method_System_Linq_Enumerable_Skip_Transform___);
    sub_1C94098(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1C94098(&System_Func_Transform__GameObject__TypeInfo);
    sub_1C94098(&System_Func_GameObject__bool__TypeInfo);
    sub_1C94098(&System_IDisposable_TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_1C94098(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_1C94098(&System_Collections_IEnumerator_TypeInfo);
    sub_1C94098(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__);
    sub_1C94098(&Spawner_SpawnerImpl_TypeInfo);
    sub_1C94098(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__);
    sub_1C94098(&Spawner_SpawnerImpl___c_TypeInfo);
    sub_1C94098(&StringLiteral_9909/*"OnDespawn"*/);
    byte_4D2BA5F = 1;
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
        goto LABEL_49;
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_9909/*"OnDespawn"*/, 1, 0);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_49;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0);
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v9);
    v12 = System_Linq_Enumerable__Skip_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_31DAB18 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v13 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v13 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    _9__17_0 = (System_Func_object__object__o *)v13->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v13->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v13);
        v13 = Spawner_SpawnerImpl___c_TypeInfo;
      }
      v15 = (Il2CppObject *)v13->static_fields->__9;
      _9__17_0 = (System_Func_object__object__o *)sub_1C942E4(System_Func_Transform__GameObject__TypeInfo);
      System_Func_object__object____ctor(_9__17_0, v15, Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, 0);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)&static_fields->__9__17_0,
        (int32_t)_9__17_0,
        v17,
        v18,
        v19,
        v20,
        v21,
        v22);
    }
    v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_31D30EC *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v24 = (System_Func_object__bool__o *)sub_1C942E4(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(v24, (Il2CppObject *)this, Method_Spawner_SpawnerImpl__Despawn_b__17_1__, 0);
    v25 = System_Linq_Enumerable__Where_object_(
            v23,
            (System_Func_TSource__bool__o *)v24,
            (const MethodInfo_31E39C8 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__Reverse_object_(
                                                                         v25,
                                                                         (const MethodInfo_31CD1F0 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v27 = IsAlive;
      v28 = *(unsigned __int16 *)&IsAlive->klass->_2.rank;
      if ( *(_WORD *)&IsAlive->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          --v28;
          p_offset += 4;
          if ( !v28 )
            goto LABEL_21;
        }
        v30 = (__int64)&klass->vtable + 16 * *p_offset;
      }
      else
      {
LABEL_21:
        v30 = sub_1C6A420(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0);
      }
      v32 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v30)(
              v27,
              *(_QWORD *)(v30 + 8));
      if ( !v32 )
        sub_1C942F0(0, v31);
      while ( 1 )
      {
        v33 = *(_QWORD *)v32;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_28;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_28:
          v36 = sub_1C6A420(v32, System_Collections_IEnumerator_TypeInfo, 0);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v32, *(_QWORD *)(v36 + 8)) & 1) == 0 )
          break;
        v37 = *(_QWORD *)v32;
        v38 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
        {
          v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v39 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            --v38;
            v39 += 4;
            if ( !v38 )
              goto LABEL_35;
          }
          v40 = v37 + 16LL * *v39 + 312;
        }
        else
        {
LABEL_35:
          v40 = sub_1C6A420(v32, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0);
        }
        v41 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v32, *(_QWORD *)(v40 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v41, v42);
      }
      v43 = *(_QWORD *)v32;
      v44 = *(unsigned __int16 *)(*(_QWORD *)v32 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v32 + 302LL) )
      {
        v45 = (int *)(*(_QWORD *)(v43 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_42;
        }
        v46 = v43 + 16LL * *v45 + 312;
      }
      else
      {
LABEL_42:
        v46 = sub_1C6A420(v32, System_IDisposable_TypeInfo, 0);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v46)(v32, *(_QWORD *)(v46 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
               IsAlive,
               (Il2CppObject *)objectToDespawn,
               (const MethodInfo_350BE70 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v47);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v47);
        }
        return;
      }
    }
LABEL_49:
    sub_1C942F0(IsAlive, v8);
  }
}


void Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v7; // x1
  float unscaledTime; // s0

  if ( (byte_4D2BA61 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_GameObject__Add__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA61 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_72110972((UnityEngine_Object_o *)obj, 0);
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_1C942F0(0, v5);
  System_Collections_Generic_HashSet_object___Add(
    destroyedUnmanagedObjects,
    (Il2CppObject *)obj,
    (const MethodInfo_371F98C *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v7);
  }
}


void Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  Spawner_SpawnerImpl___c_c *v3; // x0
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v6; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7

  if ( (byte_4D2BA62 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
    sub_1C94098(&System_Predicate_GameObject__TypeInfo);
    sub_1C94098(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__);
    sub_1C94098(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_4D2BA62 = 1;
  }
  v3 = Spawner_SpawnerImpl___c_TypeInfo;
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v3 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v3->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v3->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v3);
      v3 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    v6 = (Il2CppObject *)v3->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1C942E4(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(_9__20_0, v6, Method_Spawner_SpawnerImpl___c__GC_b__20_0__, 0);
    static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_1C9403C((GrandQuestFolderBoardItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v8, v9, v10, v11, v12, v13);
  }
  if ( !destroyedUnmanagedObjects )
    sub_1C942F0(v3, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_371FEEC *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  int v4; // w22
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *currentValue; // x19
  int v8; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4D2BA5B & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
    byte_4D2BA5B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                              caches,
                                                                              (const MethodInfo_3520A24 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0 )
  {
    sub_1C942F0(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_3BB3594 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v4 = 0;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v10,
           (const MethodInfo_3620234 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v5 )
      break;
    currentValue = v10.fields._currentValue;
    if ( !v10.fields._currentValue )
      sub_1C942F0(v5, v6);
    if ( !*(Il2CppClass **)((char *)&v10.fields._currentValue->klass + (unsigned __int64)&qword_28) )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize((Spawner_SpawnerImpl_ObjectCache_o *)v10.fields._currentValue, v6);
      v4 += *(_DWORD *)((char *)&qword_20 + (_QWORD)currentValue);
    }
    if ( v4 >= 32 )
    {
      v8 = 5;
      goto LABEL_13;
    }
  }
  v8 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v10,
    (const MethodInfo_3620230 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v8 != 5;
}


bool Spawner_SpawnerImpl__IsAlive(Spawner_SpawnerImpl_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4D2BA63 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA63 = 1;
  }
  value = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0, 0) )
  {
    managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      if ( System_Collections_Generic_Dictionary_object__bool___TryGetValue(
             managedObjects,
             (Il2CppObject *)obj,
             &value,
             (const MethodInfo_350D434 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_object___Contains(
                  (System_Collections_Generic_HashSet_T__o *)managedObjects,
                  (Il2CppObject *)obj,
                  (const MethodInfo_371EE9C *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_1C942F0(managedObjects, v5);
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

  if ( (byte_4D2BA5D & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__);
    sub_1C94098(&int_TypeInfo);
    sub_1C94098(&StringLiteral_25394/*"{0}({1})"*/);
    byte_4D2BA5D = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    serialNumbers,
    (Il2CppObject *)prefab,
    &value,
    (const MethodInfo_3519680 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  v8 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          serialNumbers,
          (Il2CppObject *)prefab,
          v8,
          (const MethodInfo_3517EB0 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0),
        v11 = value,
        v10 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v11),
        serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)System_String__Format_64459052(
                                                                                  (System_String_o *)StringLiteral_25394/*"{0}({1})"*/,
                                                                                  name,
                                                                                  v10,
                                                                                  0),
        !obj) )
  {
LABEL_8:
    sub_1C942F0(serialNumbers, prefab);
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

  if ( (byte_4D2BA5A & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
    sub_1C94098(&Spawner_SpawnerImpl_ObjectCache_TypeInfo);
    byte_4D2BA5A = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)caches,
         (Il2CppObject *)prefab,
         (const MethodInfo_3520DE8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v10 = this->fields.caches;
  v11 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1C942E4(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v11, this, prefab, cacheSize, overflowPolicy, v12);
  if ( !v10 )
LABEL_7:
    sub_1C942F0(caches, prefab);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)v10,
    (Il2CppObject *)prefab,
    (Il2CppObject *)v11,
    (const MethodInfo_3520BE0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  float v11; // s12
  float v12; // s13
  float v13; // s14
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v18; // x0
  const MethodInfo *v19; // x3
  UnityEngine_GameObject_o *result; // x0
  Spawner_o *v21; // x0
  UnityEngine_GameObject_o *v22; // x1
  bool v23; // w2
  const MethodInfo *v24; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v28; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v29; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_4D2BA5C & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__);
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    sub_1C94098(&StringLiteral_9986/*"OnSpawn"*/);
    byte_4D2BA5C = 1;
  }
  value = 0;
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         caches,
         (Il2CppObject *)prefab,
         &value,
         (const MethodInfo_3522400 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
  {
    caches = (System_Collections_Generic_Dictionary_object__object__o *)value;
    if ( !value )
      goto LABEL_27;
    NextObjectInCache = (UnityEngine_Object_o *)Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
                                                  (Spawner_SpawnerImpl_ObjectCache_o *)value,
                                                  (const MethodInfo *)prefab);
  }
  else
  {
    NextObjectInCache = 0;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Equality(
                                                                        NextObjectInCache,
                                                                        0,
                                                                        0);
  if ( ((unsigned __int8)caches & 1) == 0 )
  {
    if ( overridesPositionAndRotation )
    {
      if ( !NextObjectInCache )
        goto LABEL_27;
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0);
      if ( !caches )
        goto LABEL_27;
      v27.fields.x = v13;
      v27.fields.y = v12;
      v27.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v27, 0);
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0);
      if ( !caches )
        goto LABEL_27;
      v28.fields.x = x;
      v28.fields.y = y;
      v28.fields.z = z;
      v28.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v28, 0);
    }
    caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_object__bool___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)caches,
        (Il2CppObject *)NextObjectInCache,
        1,
        (const MethodInfo_350BC50 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_24;
    }
LABEL_27:
    sub_1C942F0(caches, prefab);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( overridesPositionAndRotation )
  {
    v26.fields.x = v13;
    v26.fields.y = v12;
    v26.fields.z = v11;
    v29.fields.x = x;
    v29.fields.y = y;
    v29.fields.z = z;
    v29.fields.w = w;
    v18 = UnityEngine_Object__Instantiate(prefab, v26, v29, 0);
    if ( v18 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v18 = UnityEngine_Object__Instantiate_72110184(prefab, 0);
  if ( !v18 )
  {
LABEL_26:
    Spawner_SpawnerImpl__Number(this, prefab, 0, v19);
    goto LABEL_27;
  }
LABEL_15:
  NextObjectInCache = v18;
  if ( (UnityEngine_GameObject_c *)v18->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v18, v19);
LABEL_24:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_9986/*"OnSpawn"*/,
      1,
      0);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  sub_1C9468C(v18);
  Spawner__Despawn(v21, v22, v23, v24);
  return result;
}


bool Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0

  if ( (byte_4D2BA66 & 1) == 0 )
  {
    sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    byte_4D2BA66 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_1C942F0(0, x);
  return System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           managedObjects,
           (Il2CppObject *)x,
           (const MethodInfo_350BE70 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&v10->fields, (int32_t)spawnerImpl, v11, v12, v13, v14, v15, v16);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_1C9403C((GrandQuestFolderBoardItem_o *)v10, (int32_t)prefab, v17, v18, v19, v20, v21, v22);
  LODWORD(v10->monitor) = cacheSize;
  HIDWORD(v10->monitor) = overflowPolicy;
}


UnityEngine_GameObject_o *Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_ObjectCache_o *v2; // x19
  struct UnityEngine_GameObject_array *objects; // x8
  int cacheIndex; // w9
  int32_t v5; // w22
  struct Spawner_SpawnerImpl_o *spawnerImpl; // x10
  Il2CppObject *v7; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v9; // x8
  const MethodInfo *v10; // x3
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x21

  v2 = this;
  if ( (byte_4D2BA68 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1C94098(&Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    byte_4D2BA68 = 1;
  }
  objects = v2->fields.objects;
  if ( !objects || v2->fields.cacheSize < 1 )
    return 0;
  cacheIndex = v2->fields.cacheIndex;
  v5 = 0;
  while ( 1 )
  {
    if ( (unsigned int)cacheIndex >= LODWORD(objects->max_length) )
      sub_1C942F8(this);
    spawnerImpl = v2->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_12;
    this = (Spawner_SpawnerImpl_ObjectCache_o *)spawnerImpl->fields.managedObjects;
    if ( !this )
      goto LABEL_12;
    v7 = (Il2CppObject *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                  v7,
                                                  (const MethodInfo_350BBDC *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
  if ( !v9 || (this = (Spawner_SpawnerImpl_ObjectCache_o *)v9->fields.managedObjects) == 0 )
LABEL_12:
    sub_1C942F0(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                v7,
                                                (const MethodInfo_350BBDC *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v2->fields.overflowPolicy == 1 )
    {
      this = (Spawner_SpawnerImpl_ObjectCache_o *)v2->fields.spawnerImpl;
      if ( !this )
        goto LABEL_12;
      Spawner_SpawnerImpl__Despawn((Spawner_SpawnerImpl_o *)this, (UnityEngine_GameObject_o *)v7, 1, v10);
      goto LABEL_19;
    }
    return 0;
  }
LABEL_19:
  v2->fields.cacheIndex = (v2->fields.cacheIndex + 1) % v2->fields.cacheSize;
  if ( !v7 )
    goto LABEL_12;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0);
  if ( !this )
    goto LABEL_12;
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
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  unsigned __int64 v10; // x22
  __int64 i; // x25
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v15; // x1
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  UnityEngine_GameObject_o *v22; // x20
  const MethodInfo *v23; // x3
  UnityEngine_Transform_o *v24; // x21
  const MethodInfo *v25; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v26; // x0
  const MethodInfo *v27; // x1

  if ( (byte_4D2BA67 & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_GameObject___TypeInfo);
    sub_1C94098(&UnityEngine_GameObject_TypeInfo);
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA67 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1C94140(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v3;
  sub_1C9403C((GrandQuestFolderBoardItem_o *)&this->fields.objects, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  if ( this->fields.cacheSize >= 1 )
  {
    v10 = 0;
    for ( i = 32; ; i += 8 )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_72110184(prefab, 0);
      v22 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        v15 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_19;
      if ( v10 >= LODWORD(objects->max_length) )
        sub_1C942F8(transform);
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)transform;
      sub_1C9403C(
        (GrandQuestFolderBoardItem_o *)((char *)objects + i),
        (int32_t)transform,
        v16,
        v17,
        v18,
        v19,
        v20,
        v21);
      if ( i == 32 )
      {
        if ( !v22 || (transform = UnityEngine_GameObject__get_transform(v22, 0)) == 0 )
LABEL_19:
          sub_1C942F0(transform, v15);
        v24 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v24, 0);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v24, 0);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v22, v23);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v22, v25);
      if ( (__int64)++v10 >= this->fields.cacheSize )
        return;
    }
    sub_1C9468C(transform);
    Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(v26, v27);
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
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4D2BA69 & 1) == 0 )
  {
    sub_1C94098(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_4D2BA69 = 1;
  }
  v1 = (Il2CppObject *)sub_1C942E4(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v1, 0);
  Spawner_SpawnerImpl___c_TypeInfo->static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v1;
  sub_1C9403C(
    (GrandQuestFolderBoardItem_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields,
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
    sub_1C942F0(this, 0);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0);
}


bool Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4D2BA6A & 1) == 0 )
  {
    sub_1C94098(&UnityEngine_Object_TypeInfo);
    byte_4D2BA6A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0, 0);
}