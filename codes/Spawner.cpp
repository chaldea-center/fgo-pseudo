void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_4A5A459 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_Spawner___ctor__);
    byte_4A5A459 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739B30 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *v3; // x20
  const MethodInfo *v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v11; // x21
  const MethodInfo *v12; // x2
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_4A5A456 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
    sub_1B885B0(&Spawner_ResourcePrecacher_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_Spawner__Awake__);
    sub_1B885B0(&Spawner_SpawnerImpl_TypeInfo);
    byte_4A5A456 = 1;
  }
  v3 = (Spawner_ResourcePrecacher_o *)sub_1B887FC(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v3, v4);
  this->fields.resourcePrecacher = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.resourcePrecacher, (int32_t)v3, v5, v6);
  v7 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_1B887FC(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_57094188(
    v7,
    32,
    (const MethodInfo_367302C *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
  this->fields.requestsByPath = v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.requestsByPath, (int32_t)v7, v8, v9);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v11 = (Spawner_SpawnerImpl_o *)sub_1B887FC(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v11, transform, v12);
  this->fields.spawnerImpl = v11;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.spawnerImpl, (int32_t)v11, v13, v14);
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3739A3C *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B8880C(0LL, obj);
  return Spawner_SpawnerImpl__ContainCache(spawnerImpl, (UnityEngine_Object_o *)obj, method);
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
    sub_1B8880C(0LL, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, method);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v4; // kr00_16
  const MethodInfo *v5; // x4

  if ( (byte_4A5A458 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__);
    byte_4A5A458 = 1;
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
           (const MethodInfo_36736F8 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
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
    sub_1B8880C(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, method);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_37963400(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_37963392(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_37963400(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner__Precache_37963400(
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
  Spawner_RequestByPath_o v14; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4A5A457 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
    byte_4A5A457 = 1;
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
        v14.fields.path = path,
        *(_QWORD *)&v14.fields.cacheSize = 0LL,
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v14, (int32_t)path, v12, v13),
        *(_QWORD *)&v14.fields.cacheSize = __PAIR64__(overflowPolicy, cacheSize),
        !requestsByPath) )
  {
LABEL_9:
    sub_1B8880C(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v14,
    (const MethodInfo_3673570 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_37963900(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_37963908(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_37963908(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B8880C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_37963936(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B8880C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, method);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_1B8880C(0LL, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  return Spawner__Spawn_37965560(this, Resource, v6);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn_37965560(
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
  if ( !byte_4A55CE1 )
  {
    this = (Spawner_o *)sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
    byte_4A55CE1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4A55CE7 )
  {
    this = (Spawner_o *)sub_1B885B0(&UnityEngine_Quaternion_TypeInfo);
    byte_4A55CE7 = 1;
  }
  if ( !spawnerImpl )
    sub_1B8880C(this, prefab);
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


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_37965748(
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
    sub_1B8880C(0LL, path);
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
  return Spawner__Spawn_37965876(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_37965876(
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
    sub_1B8880C(0LL, prefab);
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, position, rotation, 1, v5);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)this.fields.path, this.fields.cacheSize, (int32_t)path, cacheSize);
  LODWORD(v7->monitor) = v6;
  HIDWORD(v7->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5A461 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
    byte_4A5A461 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52193328(
    v3,
    32,
    (const MethodInfo_31C6830 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v3, v4, v5);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5A45F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A45F = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_13;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue((System_Collections_Generic_Dictionary_object__object__o *)elements, (Il2CppObject *)path, &value, (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) != 0 )
  {
    if ( value )
    {
      monitor = (UnityEngine_Object_o *)value[1].monitor;
      goto LABEL_8;
    }
LABEL_13:
    sub_1B8880C(elements, path);
  }
  monitor = 0LL;
LABEL_8:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    return UnityEngine_Resources__Load(path, 0LL);
  return monitor;
}


bool __fastcall Spawner_ResourcePrecacher__HasCached(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
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
  int32_t v13; // w2
  int32_t v14; // w3
  int v15; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v17; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v18; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A5A45D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_4A5A45D = 1;
  }
  memset(&v18, 0, sizeof(v18));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                elements,
                                                                                (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_1B8880C(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v17,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v18 = v17;
  while ( 1 )
  {
    do
    {
      v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v18,
             (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v4 )
      {
        v15 = 6;
        goto LABEL_14;
      }
      currentValue = v18.fields._currentValue;
      if ( !v18.fields._currentValue )
        sub_1B8880C(v4, v5);
      v8 = (UnityEngine_ResourceRequest_o **)&v18.fields._currentValue[1];
      klass = v18.fields._currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v8 )
      sub_1B8880C(0LL, v9);
    asset = UnityEngine_ResourceRequest__get_asset(*v8, 0LL);
    currentValue[1].monitor = asset;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&currentValue[1].monitor, (int32_t)asset, v11, v12);
    *v8 = 0LL;
    sub_1B88554((ServantStatusBattleListViewItem_o *)v8, 0, v13, v14);
  }
  v15 = 5;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v18,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v15 != 5;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A5A45B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
    byte_4A5A45B = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B8880C(0LL, path);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (Il2CppObject *)path,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A5A45C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__);
    byte_4A5A45C = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B8880C(0LL, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (const MethodInfo_31C6E98 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A45A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
    sub_1B885B0(&Spawner_ResourcePrecacher_Element_TypeInfo);
    byte_4A5A45A = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v5 = sub_1B887FC(Spawner_ResourcePrecacher_Element_TypeInfo);
    System_Object___ctor((Il2CppObject *)v5, 0LL);
    elements = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Resources__Load(path, 0LL);
    if ( !v5
      || (*(_QWORD *)(v5 + 24) = elements,
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v5 + 24), (int32_t)elements, v8, v9),
          (elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements) == 0LL) )
    {
      sub_1B8880C(elements, v7);
    }
    System_Collections_Generic_Dictionary_object__object___Add(
      elements,
      (Il2CppObject *)path,
      (Il2CppObject *)v5,
      (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void __fastcall Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v4; // x0
  __int64 v5; // x1
  Il2CppObject *currentValue; // x25
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v8; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A5A460 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
    byte_4A5A460 = 1;
  }
  memset(&v8, 0, sizeof(v8));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_15;
  elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          elements,
                                                                          (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v8,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v4 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v8,
           (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v4 )
      break;
    currentValue = v8.fields._currentValue;
    if ( !v8.fields._currentValue )
      sub_1B8880C(v4, v5);
    monitor = (UnityEngine_Object_o *)v8.fields._currentValue[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v8,
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
LABEL_15:
    sub_1B8880C(elements, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    elements,
    (const MethodInfo_31C7350 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A5A45E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
    byte_4A5A45E = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B8880C(0LL, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)elements,
                                                               (const MethodInfo_31C6EA8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
}


void __fastcall Spawner_ResourcePrecacher_Element___ctor(
        Spawner_ResourcePrecacher_Element_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall Spawner_SpawnerImpl___cctor(const MethodInfo *method)
{
  System_Collections_Generic_Queue_T__o *v1; // x19
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A46E & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Transform___ctor__);
    sub_1B885B0(&System_Collections_Generic_Queue_Transform__TypeInfo);
    sub_1B885B0(&Spawner_SpawnerImpl_TypeInfo);
    byte_4A5A46E = 1;
  }
  v1 = (System_Collections_Generic_Queue_T__o *)sub_1B887FC(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v1,
    (const MethodInfo_366F2A4 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  Spawner_SpawnerImpl_TypeInfo->static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)Spawner_SpawnerImpl_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void __fastcall Spawner_SpawnerImpl___ctor(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  int32_t v5; // w2
  int32_t v6; // w3
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int32_t v8; // w2
  int32_t v9; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_Collections_Generic_HashSet_T__o *v13; // x20
  int32_t v14; // w2
  int32_t v15; // w3
  System_Collections_Generic_Dictionary_object__int__o *v16; // x20
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A5A462 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_Object__int__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_GameObject___ctor__);
    sub_1B885B0(&System_Collections_Generic_HashSet_GameObject__TypeInfo);
    byte_4A5A462 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)parent, v5, v6);
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52193328(
    v7,
    32,
    (const MethodInfo_31C6830 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  this->fields.caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v7;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.caches, (int32_t)v7, v8, v9);
  v10 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B887FC(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor_52119716(
    v10,
    128,
    (const MethodInfo_31B48A4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  this->fields.managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v10;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.managedObjects, (int32_t)v10, v11, v12);
  v13 = (System_Collections_Generic_HashSet_T__o *)sub_1B887FC(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v13,
    (const MethodInfo_33B9184 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  this->fields.destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v13;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.destroyedUnmanagedObjects, (int32_t)v13, v14, v15);
  v16 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B887FC(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor_52156740(
    v16,
    32,
    (const MethodInfo_31BD944 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  this->fields.serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v16;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.serialNumbers, (int32_t)v16, v17, v18);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
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
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 v13; // x10
  UnityEngine_Transform_o *v14; // x20
  Il2CppClass **v15; // x0
  int32_t v16; // w21
  Spawner_SpawnerImpl_c *v17; // x0
  System_Collections_Generic_Queue_T__o *v18; // x22

  if ( (byte_4A5A467 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Transform___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_Transform__TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Transform__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Transform__Enqueue__);
    sub_1B885B0(&Method_System_Collections_Generic_Queue_Transform__get_Count__);
    sub_1B885B0(&Spawner_SpawnerImpl_TypeInfo);
    byte_4A5A467 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_Transform___ctor__);
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
    (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
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
                                                   (const MethodInfo_366F9FC *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v3 )
      goto LABEL_27;
    items = v3->fields._items;
    v12 = Method_System_Collections_Generic_List_Transform__Add__;
    ++v3->fields._version;
    if ( !items )
      goto LABEL_27;
    v13 = v3->fields._size;
    v14 = (UnityEngine_Transform_o *)q;
    if ( (unsigned int)v13 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)q,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + v13;
      v3->fields._size = v13 + 1;
      v15[4] = (Il2CppClass *)v14;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v15 + 4), (int32_t)v14, v9, v10);
    }
    if ( !v14 )
      goto LABEL_27;
    if ( UnityEngine_Transform__get_childCount(v14, 0LL) >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        v17 = Spawner_SpawnerImpl_TypeInfo;
        if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v17 = Spawner_SpawnerImpl_TypeInfo;
        }
        v18 = (System_Collections_Generic_Queue_T__o *)v17->static_fields->q;
        q = (System_Collections_Generic_Queue_T__o *)UnityEngine_Transform__GetChild(v14, v16, 0LL);
        if ( !v18 )
          break;
        System_Collections_Generic_Queue_object___Enqueue(
          v18,
          (Il2CppObject *)q,
          (const MethodInfo_366F86C *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v16 >= UnityEngine_Transform__get_childCount(v14, 0LL) )
          goto LABEL_7;
      }
LABEL_27:
      sub_1B8880C(q, v4);
    }
  }
  System_Collections_Generic_Queue_object___Clear(
    klass,
    (const MethodInfo_366F52C *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v3;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0

  if ( (byte_4A5A46D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    byte_4A5A46D = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    sub_1B8880C(0LL, obj);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)caches,
           (Il2CppObject *)obj,
           (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_4A5A469 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    byte_4A5A469 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_object__bool___set_Item(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          (Il2CppObject *)obj,
          0,
          (const MethodInfo_31B5234 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_1B8880C(this, obj);
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
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x21
  System_Func_object__bool__o *v20; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v23; // x21
  __int64 v24; // x9
  int32_t *p_offset; // x10
  __int64 v26; // x0
  __int64 v27; // x1
  __int64 v28; // x21
  __int64 v29; // x8
  __int64 v30; // x9
  int *v31; // x10
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  UnityEngine_GameObject_o *v37; // x1
  const MethodInfo *v38; // x2
  __int64 v39; // x8
  __int64 v40; // x9
  int *v41; // x10
  __int64 v42; // x0
  const MethodInfo *v43; // x2

  if ( (byte_4A5A468 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    sub_1B885B0(&Method_System_Linq_Enumerable_Reverse_GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Skip_Transform___);
    sub_1B885B0(&Method_System_Linq_Enumerable_Where_GameObject___);
    sub_1B885B0(&System_Func_Transform__GameObject__TypeInfo);
    sub_1B885B0(&System_Func_GameObject__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__);
    sub_1B885B0(&Spawner_SpawnerImpl_TypeInfo);
    sub_1B885B0(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__);
    sub_1B885B0(&Spawner_SpawnerImpl___c_TypeInfo);
    sub_1B885B0(&StringLiteral_9882/*"OnDespawn"*/);
    byte_4A5A468 = 1;
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
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_9882/*"OnDespawn"*/, 1, 0LL);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_49;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0LL);
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v9);
    v12 = System_Linq_Enumerable__Skip_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_2EB6E60 *)Method_System_Linq_Enumerable_Skip_Transform___);
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
      _9__17_0 = (System_Func_object__object__o *)sub_1B887FC(System_Func_Transform__GameObject__TypeInfo);
      System_Func_object__object____ctor(_9__17_0, v15, Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, 0LL);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v17, v18);
    }
    v19 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v12,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_2EB040C *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v20 = (System_Func_object__bool__o *)sub_1B887FC(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(v20, (Il2CppObject *)this, Method_Spawner_SpawnerImpl__Despawn_b__17_1__, 0LL);
    v21 = System_Linq_Enumerable__Where_object_(
            v19,
            (System_Func_TSource__bool__o *)v20,
            (const MethodInfo_2EBE07C *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__Reverse_object_(
                                                                         v21,
                                                                         (const MethodInfo_2EAAE5C *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v23 = IsAlive;
      v24 = *(unsigned __int16 *)(&IsAlive->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsAlive->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          --v24;
          p_offset += 4;
          if ( !v24 )
            goto LABEL_21;
        }
        v26 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v26 = sub_1BDA590(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v28 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v26)(
              v23,
              *(_QWORD *)(v26 + 8));
      if ( !v28 )
        sub_1B8880C(0LL, v27);
      while ( 1 )
      {
        v29 = *(_QWORD *)v28;
        v30 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v31 = (int *)(*(_QWORD *)(v29 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v31 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v30;
            v31 += 4;
            if ( !v30 )
              goto LABEL_28;
          }
          v32 = v29 + 16LL * *v31 + 312;
        }
        else
        {
LABEL_28:
          v32 = sub_1BDA590(v28, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v32)(v28, *(_QWORD *)(v32 + 8)) & 1) == 0 )
          break;
        v33 = *(_QWORD *)v28;
        v34 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
        {
          v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v35 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            --v34;
            v35 += 4;
            if ( !v34 )
              goto LABEL_35;
          }
          v36 = v33 + 16LL * *v35 + 312;
        }
        else
        {
LABEL_35:
          v36 = sub_1BDA590(v28, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v37 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v28, *(_QWORD *)(v36 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v37, v38);
      }
      v39 = *(_QWORD *)v28;
      v40 = *(unsigned __int16 *)(*(_QWORD *)v28 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v28 + 302LL) )
      {
        v41 = (int *)(*(_QWORD *)(v39 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v41 - 1) != System_IDisposable_TypeInfo )
        {
          --v40;
          v41 += 4;
          if ( !v40 )
            goto LABEL_42;
        }
        v42 = v39 + 16LL * *v41 + 312;
      }
      else
      {
LABEL_42:
        v42 = sub_1BDA590(v28, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v42)(v28, *(_QWORD *)(v42 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
               IsAlive,
               (Il2CppObject *)objectToDespawn,
               (const MethodInfo_31B5454 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v43);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v43);
        }
        return;
      }
    }
LABEL_49:
    sub_1B8880C(IsAlive, v8);
  }
}


void __fastcall Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v7; // x1
  float unscaledTime; // s0

  if ( (byte_4A5A46A & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_GameObject__Add__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A46A = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69459380((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_1B8880C(0LL, v5);
  System_Collections_Generic_HashSet_object___Add(
    destroyedUnmanagedObjects,
    (Il2CppObject *)obj,
    (const MethodInfo_33BA368 *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v7);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  Spawner_SpawnerImpl___c_c *v3; // x0
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v6; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int32_t v8; // w2
  int32_t v9; // w3

  if ( (byte_4A5A46B & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
    sub_1B885B0(&System_Predicate_GameObject__TypeInfo);
    sub_1B885B0(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__);
    sub_1B885B0(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_4A5A46B = 1;
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
    _9__20_0 = (System_Predicate_object__o *)sub_1B887FC(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(_9__20_0, v6, Method_Spawner_SpawnerImpl___c__GC_b__20_0__, 0LL);
    static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v8, v9);
  }
  if ( !destroyedUnmanagedObjects )
    sub_1B8880C(v3, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_33BA8C8 *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  int v4; // w22
  _BOOL8 v5; // x0
  const MethodInfo *v6; // x1
  Il2CppObject *currentValue; // x19
  int v8; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A5A464 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
    byte_4A5A464 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                              caches,
                                                                              (const MethodInfo_31C6FF8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_1B8880C(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v10,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_382E608 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v4 = 0;
  while ( 1 )
  {
    v5 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v10,
           (const MethodInfo_32C5290 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v5 )
      break;
    currentValue = v10.fields._currentValue;
    if ( !v10.fields._currentValue )
      sub_1B8880C(v5, v6);
    if ( !v10.fields._currentValue[2].monitor )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize((Spawner_SpawnerImpl_ObjectCache_o *)v10.fields._currentValue, v6);
      v4 += LODWORD(currentValue[2].klass);
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
    (const MethodInfo_32C528C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v8 != 5;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A46C & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A46C = 1;
  }
  value = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      if ( System_Collections_Generic_Dictionary_object__bool___TryGetValue(
             managedObjects,
             (Il2CppObject *)obj,
             &value,
             (const MethodInfo_31B6A18 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_object___Contains(
                  (System_Collections_Generic_HashSet_T__o *)managedObjects,
                  (Il2CppObject *)obj,
                  (const MethodInfo_33B9878 *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_1B8880C(managedObjects, v5);
  }
  return 0;
}


void __fastcall Spawner_SpawnerImpl__Number(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *prefab,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *serialNumbers; // x0
  int32_t v8; // w2
  Il2CppObject *name; // x20
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  Il2CppObject *v13; // x0
  int32_t v14; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A5A466 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__);
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&StringLiteral_25025/*"{0}({1})"*/);
    byte_4A5A466 = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    serialNumbers,
    (Il2CppObject *)prefab,
    &value,
    (const MethodInfo_31BFA9C *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  v8 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          serialNumbers,
          (Il2CppObject *)prefab,
          v8,
          (const MethodInfo_31BE2CC *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v14 = value,
        v13 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v14, v10, v11, v12),
        serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)System_String__Format_61721404(
                                                                                  (System_String_o *)StringLiteral_25025/*"{0}({1})"*/,
                                                                                  name,
                                                                                  v13,
                                                                                  0LL),
        !obj) )
  {
LABEL_8:
    sub_1B8880C(serialNumbers, prefab);
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
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *v10; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x24
  const MethodInfo *v12; // x5

  if ( (byte_4A5A463 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
    sub_1B885B0(&Spawner_SpawnerImpl_ObjectCache_TypeInfo);
    byte_4A5A463 = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)caches,
         (Il2CppObject *)prefab,
         (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v10 = this->fields.caches;
  v11 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1B887FC(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v11, this, prefab, cacheSize, overflowPolicy, v12);
  if ( !v10 )
LABEL_7:
    sub_1B8880C(caches, prefab);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)v10,
    (Il2CppObject *)prefab,
    (Il2CppObject *)v11,
    (const MethodInfo_31C71B4 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  if ( (byte_4A5A465 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_9957/*"OnSpawn"*/);
    byte_4A5A465 = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         caches,
         (Il2CppObject *)prefab,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
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
    NextObjectInCache = 0LL;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Equality(
                                                                        NextObjectInCache,
                                                                        0LL,
                                                                        0LL);
  if ( ((unsigned __int8)caches & 1) == 0 )
  {
    if ( overridesPositionAndRotation )
    {
      if ( !NextObjectInCache )
        goto LABEL_27;
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0LL);
      if ( !caches )
        goto LABEL_27;
      v27.fields.x = v13;
      v27.fields.y = v12;
      v27.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v27, 0LL);
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0LL);
      if ( !caches )
        goto LABEL_27;
      v28.fields.x = x;
      v28.fields.y = y;
      v28.fields.z = z;
      v28.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v28, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_object__bool___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)caches,
        (Il2CppObject *)NextObjectInCache,
        1,
        (const MethodInfo_31B5234 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_24;
    }
LABEL_27:
    sub_1B8880C(caches, prefab);
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
    v18 = UnityEngine_Object__Instantiate(prefab, v26, v29, 0LL);
    if ( v18 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v18 = UnityEngine_Object__Instantiate_69458584(prefab, 0LL);
  if ( !v18 )
  {
LABEL_26:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v19);
    goto LABEL_27;
  }
LABEL_15:
  NextObjectInCache = v18;
  if ( (UnityEngine_GameObject_c *)v18->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v18, v19);
LABEL_24:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_9957/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  sub_1B88ACC(v18);
  Spawner__Despawn(v21, v22, v23, v24);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0

  if ( (byte_4A5A46F & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
    byte_4A5A46F = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_1B8880C(0LL, x);
  return System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           managedObjects,
           (Il2CppObject *)x,
           (const MethodInfo_31B5454 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  int32_t v11; // w2
  int32_t v12; // w3
  int32_t v13; // w2
  int32_t v14; // w3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)spawnerImpl, v11, v12);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_1B88554((ServantStatusBattleListViewItem_o *)v10, (int32_t)prefab, v13, v14);
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
  Il2CppObject *v7; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v9; // x8
  const MethodInfo *v10; // x3
  Spawner_SpawnerImpl_ObjectCache_o *v11; // x21

  v2 = this;
  if ( (byte_4A5A471 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
    byte_4A5A471 = 1;
  }
  objects = v2->fields.objects;
  if ( !objects || v2->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v2->fields.cacheIndex;
  v5 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
      sub_1B88814(this, method);
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
                                                  (const MethodInfo_31B51C0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
    sub_1B8880C(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                v7,
                                                (const MethodInfo_31B51C0 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
    return 0LL;
  }
LABEL_19:
  v2->fields.cacheIndex = (v2->fields.cacheIndex + 1) % v2->fields.cacheSize;
  if ( !v7 )
    goto LABEL_12;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v7, 0LL);
  if ( !this )
    goto LABEL_12;
  v11 = this;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0LL, 0LL);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalPosition, 0LL);
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalRotation, 0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v11, v2->fields.defaultLocalScale, 0LL);
  return (UnityEngine_GameObject_o *)v7;
}


void __fastcall Spawner_SpawnerImpl_ObjectCache__Initialize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  struct UnityEngine_GameObject_array *v3; // x0
  int32_t v4; // w2
  int32_t v5; // w3
  unsigned __int64 v6; // x22
  __int64 i; // x25
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v11; // x1
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *v14; // x20
  const MethodInfo *v15; // x3
  UnityEngine_Transform_o *v16; // x21
  const MethodInfo *v17; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v18; // x0
  const MethodInfo *v19; // x1

  if ( (byte_4A5A470 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_GameObject___TypeInfo);
    sub_1B885B0(&UnityEngine_GameObject_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A470 = 1;
  }
  v3 = (struct UnityEngine_GameObject_array *)sub_1B88658(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v3;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.objects, (int32_t)v3, v4, v5);
  if ( this->fields.cacheSize >= 1 )
  {
    v6 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_69458584(prefab, 0LL);
      v14 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        v11 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_19;
      if ( v6 >= objects->max_length )
        sub_1B88814(transform, v11);
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)transform;
      sub_1B88554((ServantStatusBattleListViewItem_o *)((char *)objects + i), (int32_t)transform, v12, v13);
      if ( i == 32 )
      {
        if ( !v14 || (transform = UnityEngine_GameObject__get_transform(v14, 0LL)) == 0LL )
LABEL_19:
          sub_1B8880C(transform, v11);
        v16 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v16, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v16, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v14, v15);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v14, v17);
      if ( (__int64)++v6 >= this->fields.cacheSize )
        return;
    }
    sub_1B88ACC(transform);
    Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(v18, v19);
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
  int32_t v2; // w2
  int32_t v3; // w3

  if ( (byte_4A5A472 & 1) == 0 )
  {
    sub_1B885B0(&Spawner_SpawnerImpl___c_TypeInfo);
    byte_4A5A472 = 1;
  }
  v1 = (Il2CppObject *)sub_1B887FC(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v1, 0LL);
  Spawner_SpawnerImpl___c_TypeInfo->static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v1;
  sub_1B88554((ServantStatusBattleListViewItem_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
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
    sub_1B8880C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A5A473 & 1) == 0 )
  {
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    byte_4A5A473 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}