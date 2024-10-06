void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  if ( (byte_4A6F161 & 1) == 0 )
  {
    sub_1B90010(&Method_SingletonMonoBehaviour_Spawner___ctor__, method);
    byte_4A6F161 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CCA8 *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  Spawner_ResourcePrecacher_o *v7; // x20
  const MethodInfo *v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v11; // x20
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_Transform_o *transform; // x20
  Spawner_SpawnerImpl_o *v15; // x21
  const MethodInfo *v16; // x2
  int32_t v17; // w2
  int32_t v18; // w3

  if ( (byte_4A6F15E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__, method);
    sub_1B90010(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo, v3);
    sub_1B90010(&Spawner_ResourcePrecacher_TypeInfo, v4);
    sub_1B90010(&Method_SingletonMonoBehaviour_Spawner__Awake__, v5);
    sub_1B90010(&Spawner_SpawnerImpl_TypeInfo, v6);
    byte_4A6F15E = 1;
  }
  v7 = (Spawner_ResourcePrecacher_o *)sub_1B9025C(Spawner_ResourcePrecacher_TypeInfo);
  Spawner_ResourcePrecacher___ctor(v7, v8);
  this->fields.resourcePrecacher = v7;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.resourcePrecacher, (int32_t)v7, v9, v10);
  v11 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_1B9025C(System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_57172388(
    v11,
    32,
    (const MethodInfo_36861A4 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
  this->fields.requestsByPath = v11;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.requestsByPath, (int32_t)v11, v12, v13);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v15 = (Spawner_SpawnerImpl_o *)sub_1B9025C(Spawner_SpawnerImpl_TypeInfo);
  Spawner_SpawnerImpl___ctor(v15, transform, v16);
  this->fields.spawnerImpl = v15;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.spawnerImpl, (int32_t)v15, v17, v18);
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_374CBB4 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B9026C(0LL, obj);
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
    sub_1B9026C(0LL, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, method);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v5; // kr00_16
  const MethodInfo *v6; // x4

  if ( (byte_4A6F160 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__, method);
    sub_1B90010(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__, v3);
    byte_4A6F160 = 1;
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
    v5 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_3686870 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    method = *(const MethodInfo **)&v5.fields.cacheSize;
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v5.fields.path,
                                                           (const MethodInfo *)v5.fields.path);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v5.fields.cacheSize,
          v5.fields.overflowPolicy,
          v6);
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
    sub_1B9026C(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, method);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_38015520(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_38015512(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_38015520(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner__Precache_38015520(
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

  if ( (byte_4A6F15F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__, path);
    byte_4A6F15F = 1;
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
        sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v14, (int32_t)path, v12, v13),
        *(_QWORD *)&v14.fields.cacheSize = __PAIR64__(overflowPolicy, cacheSize),
        !requestsByPath) )
  {
LABEL_9:
    sub_1B9026C(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v14,
    (const MethodInfo_36866E8 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_38016020(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_38016028(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_38016028(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B9026C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_38016056(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1B9026C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, method);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_1B9026C(0LL, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  return Spawner__Spawn_38017680(this, Resource, v6);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38017680(
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
  if ( !byte_4A6A9C1 )
  {
    this = (Spawner_o *)sub_1B90010(&UnityEngine_Vector3_TypeInfo, prefab);
    byte_4A6A9C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4A6A9C7 )
  {
    this = (Spawner_o *)sub_1B90010(&UnityEngine_Quaternion_TypeInfo, prefab);
    byte_4A6A9C7 = 1;
  }
  if ( !spawnerImpl )
    sub_1B9026C(this, prefab);
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
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38017868(
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
    sub_1B9026C(0LL, path);
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
  return Spawner__Spawn_38017996(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38017996(
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
    sub_1B9026C(0LL, prefab);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)this.fields.path, this.fields.cacheSize, (int32_t)path, cacheSize);
  LODWORD(v7->monitor) = v6;
  HIDWORD(v7->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  System_Collections_Generic_Dictionary_object__object__o *v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6F169 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__,
      method);
    sub_1B90010(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo, v3);
    byte_4A6F169 = 1;
  }
  v4 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52266012(
    v4,
    32,
    (const MethodInfo_31D841C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)v4, v5, v6);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A6F167 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__,
      path);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A6F167 = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_13;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue((System_Collections_Generic_Dictionary_object__object__o *)elements, (Il2CppObject *)path, &value, (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) != 0 )
  {
    if ( value )
    {
      monitor = (UnityEngine_Object_o *)value[1].monitor;
      goto LABEL_8;
    }
LABEL_13:
    sub_1B9026C(elements, path);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v8; // x0
  __int64 v9; // x1
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v12; // x19
  __int64 v13; // x1
  UnityEngine_Object_o *asset; // x0
  int32_t v15; // w2
  int32_t v16; // w3
  int32_t v17; // w2
  int32_t v18; // w3
  int v19; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v22; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4A6F165 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v4);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v6);
    byte_4A6F165 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                elements,
                                                                                (const MethodInfo_31D8BE4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_1B9026C(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3841EC4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v22 = v21;
  while ( 1 )
  {
    do
    {
      v8 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
             &v22,
             (const MethodInfo_32D790C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v8 )
      {
        v19 = 6;
        goto LABEL_14;
      }
      currentValue = v22.fields._currentValue;
      if ( !v22.fields._currentValue )
        sub_1B9026C(v8, v9);
      v12 = (UnityEngine_ResourceRequest_o **)&v22.fields._currentValue[1];
      klass = v22.fields._currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v12 )
      sub_1B9026C(0LL, v13);
    asset = UnityEngine_ResourceRequest__get_asset(*v12, 0LL);
    currentValue[1].monitor = asset;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&currentValue[1].monitor, (int32_t)asset, v15, v16);
    *v12 = 0LL;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v12, 0, v17, v18);
  }
  v19 = 5;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v22,
    (const MethodInfo_32D7908 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v19 != 5;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A6F163 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__,
      path);
    byte_4A6F163 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B9026C(0LL, path);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (Il2CppObject *)path,
           (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A6F164 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__,
      method);
    byte_4A6F164 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B9026C(0LL, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (const MethodInfo_31D8A84 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  __int64 v6; // x21
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A6F162 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__, path);
    sub_1B90010(&Spawner_ResourcePrecacher_Element_TypeInfo, v5);
    byte_4A6F162 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v6 = sub_1B9025C(Spawner_ResourcePrecacher_Element_TypeInfo);
    System_Object___ctor((Il2CppObject *)v6, 0LL);
    elements = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Resources__Load(path, 0LL);
    if ( !v6
      || (*(_QWORD *)(v6 + 24) = elements,
          sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v6 + 24), (int32_t)elements, v9, v10),
          (elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements) == 0LL) )
    {
      sub_1B9026C(elements, v8);
    }
    System_Collections_Generic_Dictionary_object__object___Add(
      elements,
      (Il2CppObject *)path,
      (Il2CppObject *)v6,
      (const MethodInfo_31D8DB4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
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
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v10; // x0
  __int64 v11; // x1
  Il2CppObject *currentValue; // x25
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4A6F168 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v4);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v6);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v7);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v8);
    byte_4A6F168 = 1;
  }
  memset(&v14, 0, sizeof(v14));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_15;
  elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          elements,
                                                                          (const MethodInfo_31D8BE4 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_3841EC4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v10 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v14,
            (const MethodInfo_32D790C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v10 )
      break;
    currentValue = v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1B9026C(v10, v11);
    monitor = (UnityEngine_Object_o *)v14.fields._currentValue[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v14,
    (const MethodInfo_32D7908 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
LABEL_15:
    sub_1B9026C(elements, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    elements,
    (const MethodInfo_31D8F3C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4A6F166 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__,
      method);
    byte_4A6F166 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1B9026C(0LL, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)elements,
                                                               (const MethodInfo_31D8A94 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
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
  __int64 v2; // x1
  __int64 v3; // x1
  System_Collections_Generic_Queue_T__o *v4; // x19
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_4A6F176 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Queue_Transform___ctor__, v1);
    sub_1B90010(&System_Collections_Generic_Queue_Transform__TypeInfo, v2);
    sub_1B90010(&Spawner_SpawnerImpl_TypeInfo, v3);
    byte_4A6F176 = 1;
  }
  v4 = (System_Collections_Generic_Queue_T__o *)sub_1B9025C(System_Collections_Generic_Queue_Transform__TypeInfo);
  System_Collections_Generic_Queue_object____ctor(
    v4,
    (const MethodInfo_368241C *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  Spawner_SpawnerImpl_TypeInfo->static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v4;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)Spawner_SpawnerImpl_TypeInfo->static_fields, (int32_t)v4, v5, v6);
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
  int32_t v12; // w2
  int32_t v13; // w3
  System_Collections_Generic_Dictionary_object__object__o *v14; // x20
  int32_t v15; // w2
  int32_t v16; // w3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v17; // x20
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_HashSet_T__o *v20; // x20
  int32_t v21; // w2
  int32_t v22; // w3
  System_Collections_Generic_Dictionary_object__int__o *v23; // x20
  int32_t v24; // w2
  int32_t v25; // w3

  if ( (byte_4A6F16A & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__, parent);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__, v6);
    sub_1B90010(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo, v7);
    sub_1B90010(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo, v8);
    sub_1B90010(&System_Collections_Generic_Dictionary_Object__int__TypeInfo, v9);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_GameObject___ctor__, v10);
    sub_1B90010(&System_Collections_Generic_HashSet_GameObject__TypeInfo, v11);
    byte_4A6F16A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields, (int32_t)parent, v12, v13);
  v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B9025C(System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo);
  System_Collections_Generic_Dictionary_object__object____ctor_52266012(
    v14,
    32,
    (const MethodInfo_31D841C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  this->fields.caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v14;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.caches, (int32_t)v14, v15, v16);
  v17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1B9025C(System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo);
  System_Collections_Generic_Dictionary_object__bool____ctor_52180248(
    v17,
    128,
    (const MethodInfo_31C3518 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  this->fields.managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v17;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.managedObjects, (int32_t)v17, v18, v19);
  v20 = (System_Collections_Generic_HashSet_T__o *)sub_1B9025C(System_Collections_Generic_HashSet_GameObject__TypeInfo);
  System_Collections_Generic_HashSet_object____ctor(
    v20,
    (const MethodInfo_33CB7E8 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  this->fields.destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v20;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.destroyedUnmanagedObjects, (int32_t)v20, v21, v22);
  v23 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1B9025C(System_Collections_Generic_Dictionary_Object__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor_52229424(
    v23,
    32,
    (const MethodInfo_31CF530 *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  this->fields.serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v23;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.serialNumbers, (int32_t)v23, v24, v25);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  System_Collections_Generic_List_object__o *v10; // x19
  __int64 v11; // x1
  Spawner_SpawnerImpl_c *v12; // x0
  System_Collections_Generic_Queue_T__o *q; // x0
  System_Collections_Generic_Queue_T__o *klass; // x8
  int size; // w20
  int32_t v16; // w2
  int32_t v17; // w3
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 v20; // x10
  UnityEngine_Transform_o *v21; // x20
  Il2CppClass **v22; // x0
  int32_t v23; // w21
  Spawner_SpawnerImpl_c *v24; // x0
  System_Collections_Generic_Queue_T__o *v25; // x22

  if ( (byte_4A6F16F & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_List_Transform__Add__, method);
    sub_1B90010(&Method_System_Collections_Generic_List_Transform___ctor__, v3);
    sub_1B90010(&System_Collections_Generic_List_Transform__TypeInfo, v4);
    sub_1B90010(&Method_System_Collections_Generic_Queue_Transform__Clear__, v5);
    sub_1B90010(&Method_System_Collections_Generic_Queue_Transform__Dequeue__, v6);
    sub_1B90010(&Method_System_Collections_Generic_Queue_Transform__Enqueue__, v7);
    sub_1B90010(&Method_System_Collections_Generic_Queue_Transform__get_Count__, v8);
    sub_1B90010(&Spawner_SpawnerImpl_TypeInfo, v9);
    byte_4A6F16F = 1;
  }
  v10 = (System_Collections_Generic_List_object__o *)sub_1B9025C(System_Collections_Generic_List_Transform__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_351018C *)Method_System_Collections_Generic_List_Transform___ctor__);
  v12 = Spawner_SpawnerImpl_TypeInfo;
  if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    v12 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = (System_Collections_Generic_Queue_T__o *)v12->static_fields->q;
  if ( !q )
    goto LABEL_27;
  System_Collections_Generic_Queue_object___Enqueue(
    q,
    (Il2CppObject *)root,
    (const MethodInfo_36829E4 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
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
                                                   (const MethodInfo_3682B74 *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v10 )
      goto LABEL_27;
    items = v10->fields._items;
    v19 = Method_System_Collections_Generic_List_Transform__Add__;
    ++v10->fields._version;
    if ( !items )
      goto LABEL_27;
    v20 = v10->fields._size;
    v21 = (UnityEngine_Transform_o *)q;
    if ( (unsigned int)v20 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v10,
        (Il2CppObject *)q,
        *(const MethodInfo_35109C0 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &items->obj.klass + v20;
      v10->fields._size = v20 + 1;
      v22[4] = (Il2CppClass *)v21;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)(v22 + 4), (int32_t)v21, v16, v17);
    }
    if ( !v21 )
      goto LABEL_27;
    if ( UnityEngine_Transform__get_childCount(v21, 0LL) >= 1 )
    {
      v23 = 0;
      while ( 1 )
      {
        v24 = Spawner_SpawnerImpl_TypeInfo;
        if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
          v24 = Spawner_SpawnerImpl_TypeInfo;
        }
        v25 = (System_Collections_Generic_Queue_T__o *)v24->static_fields->q;
        q = (System_Collections_Generic_Queue_T__o *)UnityEngine_Transform__GetChild(v21, v23, 0LL);
        if ( !v25 )
          break;
        System_Collections_Generic_Queue_object___Enqueue(
          v25,
          (Il2CppObject *)q,
          (const MethodInfo_36829E4 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v23 >= UnityEngine_Transform__get_childCount(v21, 0LL) )
          goto LABEL_7;
      }
LABEL_27:
      sub_1B9026C(q, v11);
    }
  }
  System_Collections_Generic_Queue_object___Clear(
    klass,
    (const MethodInfo_36826A4 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v10;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0

  if ( (byte_4A6F175 & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      obj);
    byte_4A6F175 = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    sub_1B9026C(0LL, obj);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)caches,
           (Il2CppObject *)obj,
           (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_4A6F171 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_1B90010(
                                      &Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__,
                                      obj);
    byte_4A6F171 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_object__bool___set_Item(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          (Il2CppObject *)obj,
          0,
          (const MethodInfo_31C3EA8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_1B9026C(this, obj);
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
  System_Collections_Generic_Dictionary_TKey__TValue__o *IsAlive; // x0
  __int64 v23; // x1
  const MethodInfo *v24; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x21
  Spawner_SpawnerImpl___c_c *v28; // x8
  System_Func_object__object__o *_9__17_0; // x22
  Il2CppObject *v30; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v34; // x21
  System_Func_object__bool__o *v35; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v36; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x21
  __int64 v39; // x9
  int32_t *p_offset; // x10
  __int64 v41; // x0
  __int64 v42; // x1
  __int64 v43; // x21
  __int64 v44; // x8
  __int64 v45; // x9
  int *v46; // x10
  __int64 v47; // x0
  __int64 v48; // x8
  __int64 v49; // x9
  int *v50; // x10
  __int64 v51; // x0
  UnityEngine_GameObject_o *v52; // x1
  const MethodInfo *v53; // x2
  __int64 v54; // x8
  __int64 v55; // x9
  int *v56; // x10
  __int64 v57; // x0
  const MethodInfo *v58; // x2

  if ( (byte_4A6F170 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, objectToDespawn);
    sub_1B90010(&Method_System_Linq_Enumerable_Reverse_GameObject___, v7);
    sub_1B90010(&Method_System_Linq_Enumerable_Select_Transform__GameObject___, v8);
    sub_1B90010(&Method_System_Linq_Enumerable_Skip_Transform___, v9);
    sub_1B90010(&Method_System_Linq_Enumerable_Where_GameObject___, v10);
    sub_1B90010(&System_Func_Transform__GameObject__TypeInfo, v11);
    sub_1B90010(&System_Func_GameObject__bool__TypeInfo, v12);
    sub_1B90010(&System_IDisposable_TypeInfo, v13);
    sub_1B90010(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v14);
    sub_1B90010(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v15);
    sub_1B90010(&System_Collections_IEnumerator_TypeInfo, v16);
    sub_1B90010(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__, v17);
    sub_1B90010(&Spawner_SpawnerImpl_TypeInfo, v18);
    sub_1B90010(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, v19);
    sub_1B90010(&Spawner_SpawnerImpl___c_TypeInfo, v20);
    sub_1B90010(&StringLiteral_9888/*"OnDespawn"*/, v21);
    byte_4A6F170 = 1;
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
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_9888/*"OnDespawn"*/, 1, 0LL);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_49;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0LL);
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo);
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v24);
    v27 = System_Linq_Enumerable__Skip_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_2EC5710 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v28 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
      v28 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    _9__17_0 = (System_Func_object__object__o *)v28->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v28->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v28);
        v28 = Spawner_SpawnerImpl___c_TypeInfo;
      }
      v30 = (Il2CppObject *)v28->static_fields->__9;
      _9__17_0 = (System_Func_object__object__o *)sub_1B9025C(System_Func_Transform__GameObject__TypeInfo);
      System_Func_object__object____ctor(_9__17_0, v30, Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, 0LL);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__17_0, (int32_t)_9__17_0, v32, v33);
    }
    v34 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v27,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_2EBED8C *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v35 = (System_Func_object__bool__o *)sub_1B9025C(System_Func_GameObject__bool__TypeInfo);
    System_Func_object__bool____ctor(v35, (Il2CppObject *)this, Method_Spawner_SpawnerImpl__Despawn_b__17_1__, 0LL);
    v36 = System_Linq_Enumerable__Where_object_(
            v34,
            (System_Func_TSource__bool__o *)v35,
            (const MethodInfo_2ECC92C *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__Reverse_object_(
                                                                         v36,
                                                                         (const MethodInfo_2EB97DC *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v38 = IsAlive;
      v39 = *(unsigned __int16 *)(&IsAlive->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsAlive->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          --v39;
          p_offset += 4;
          if ( !v39 )
            goto LABEL_21;
        }
        v41 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v41 = sub_1BE1FF0(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v43 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v41)(
              v38,
              *(_QWORD *)(v41 + 8));
      if ( !v43 )
        sub_1B9026C(0LL, v42);
      while ( 1 )
      {
        v44 = *(_QWORD *)v43;
        v45 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v46 = (int *)(*(_QWORD *)(v44 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v46 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v45;
            v46 += 4;
            if ( !v45 )
              goto LABEL_28;
          }
          v47 = v44 + 16LL * *v46 + 312;
        }
        else
        {
LABEL_28:
          v47 = sub_1BE1FF0(v43, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v47)(v43, *(_QWORD *)(v47 + 8)) & 1) == 0 )
          break;
        v48 = *(_QWORD *)v43;
        v49 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
        {
          v50 = (int *)(*(_QWORD *)(v48 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v50 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            --v49;
            v50 += 4;
            if ( !v49 )
              goto LABEL_35;
          }
          v51 = v48 + 16LL * *v50 + 312;
        }
        else
        {
LABEL_35:
          v51 = sub_1BE1FF0(v43, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v52 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v51)(v43, *(_QWORD *)(v51 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v52, v53);
      }
      v54 = *(_QWORD *)v43;
      v55 = *(unsigned __int16 *)(*(_QWORD *)v43 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v43 + 302LL) )
      {
        v56 = (int *)(*(_QWORD *)(v54 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v56 - 1) != System_IDisposable_TypeInfo )
        {
          --v55;
          v56 += 4;
          if ( !v55 )
            goto LABEL_42;
        }
        v57 = v54 + 16LL * *v56 + 312;
      }
      else
      {
LABEL_42:
        v57 = sub_1BE1FF0(v43, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v57)(v43, *(_QWORD *)(v57 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
               IsAlive,
               (Il2CppObject *)objectToDespawn,
               (const MethodInfo_31C40C8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v58);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v58);
        }
        return;
      }
    }
LABEL_49:
    sub_1B9026C(IsAlive, v23);
  }
}


void __fastcall Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v8; // x1
  float unscaledTime; // s0

  if ( (byte_4A6F172 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_HashSet_GameObject__Add__, obj);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v5);
    byte_4A6F172 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  UnityEngine_Object__Destroy_69539440((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_1B9026C(0LL, v6);
  System_Collections_Generic_HashSet_object___Add(
    destroyedUnmanagedObjects,
    (Il2CppObject *)obj,
    (const MethodInfo_33CC9CC *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v8);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Spawner_SpawnerImpl___c_c *v6; // x0
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v9; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int32_t v11; // w2
  int32_t v12; // w3

  if ( (byte_4A6F173 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__, method);
    sub_1B90010(&System_Predicate_GameObject__TypeInfo, v3);
    sub_1B90010(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__, v4);
    sub_1B90010(&Spawner_SpawnerImpl___c_TypeInfo, v5);
    byte_4A6F173 = 1;
  }
  v6 = Spawner_SpawnerImpl___c_TypeInfo;
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo);
    v6 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v6->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v6->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v6);
      v6 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    v9 = (Il2CppObject *)v6->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1B9025C(System_Predicate_GameObject__TypeInfo);
    System_Predicate_object____ctor(_9__20_0, v9, Method_Spawner_SpawnerImpl___c__GC_b__20_0__, 0LL);
    static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&static_fields->__9__20_0, (int32_t)_9__20_0, v11, v12);
  }
  if ( !destroyedUnmanagedObjects )
    sub_1B9026C(v6, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_33CCF2C *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  int v8; // w22
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x1
  Il2CppObject *currentValue; // x19
  int v12; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v14; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4A6F16C & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__,
      method);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__,
      v3);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__,
      v4);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__,
      v5);
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__,
      v6);
    byte_4A6F16C = 1;
  }
  memset(&v14, 0, sizeof(v14));
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                              caches,
                                                                              (const MethodInfo_31D8BE4 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_1B9026C(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v14,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_3841EC4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v8 = 0;
  while ( 1 )
  {
    v9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
           &v14,
           (const MethodInfo_32D790C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v9 )
      break;
    currentValue = v14.fields._currentValue;
    if ( !v14.fields._currentValue )
      sub_1B9026C(v9, v10);
    if ( !v14.fields._currentValue[2].monitor )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize((Spawner_SpawnerImpl_ObjectCache_o *)v14.fields._currentValue, v10);
      v8 += LODWORD(currentValue[2].klass);
    }
    if ( v8 >= 32 )
    {
      v12 = 5;
      goto LABEL_13;
    }
  }
  v12 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v14,
    (const MethodInfo_32D7908 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v12 != 5;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A6F174 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__, obj);
    sub_1B90010(&Method_System_Collections_Generic_HashSet_GameObject__Contains__, v5);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v6);
    byte_4A6F174 = 1;
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
             (const MethodInfo_31C568C *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_object___Contains(
                  (System_Collections_Generic_HashSet_T__o *)managedObjects,
                  (Il2CppObject *)obj,
                  (const MethodInfo_33CBEDC *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_1B9026C(managedObjects, v7);
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
  System_Collections_Generic_Dictionary_object__int__o *serialNumbers; // x0
  int32_t v11; // w2
  Il2CppObject *name; // x20
  __int64 v13; // x2
  __int64 v14; // x3
  __int64 v15; // x4
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4A6F16E & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__, prefab);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__, v7);
    sub_1B90010(&int_TypeInfo, v8);
    sub_1B90010(&StringLiteral_25065/*"{0}({1})"*/, v9);
    byte_4A6F16E = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    serialNumbers,
    (Il2CppObject *)prefab,
    &value,
    (const MethodInfo_31D1688 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  v11 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          serialNumbers,
          (Il2CppObject *)prefab,
          v11,
          (const MethodInfo_31CFEB8 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v17 = value,
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17, v13, v14, v15),
        serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)System_String__Format_61801464(
                                                                                  (System_String_o *)StringLiteral_25065/*"{0}({1})"*/,
                                                                                  name,
                                                                                  v16,
                                                                                  0LL),
        !obj) )
  {
LABEL_8:
    sub_1B9026C(serialNumbers, prefab);
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
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *v12; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v13; // x24
  const MethodInfo *v14; // x5

  if ( (byte_4A6F16B & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      prefab);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__, v9);
    sub_1B90010(&Spawner_SpawnerImpl_ObjectCache_TypeInfo, v10);
    byte_4A6F16B = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)caches,
         (Il2CppObject *)prefab,
         (const MethodInfo_31D8FA8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v12 = this->fields.caches;
  v13 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1B9025C(Spawner_SpawnerImpl_ObjectCache_TypeInfo);
  Spawner_SpawnerImpl_ObjectCache___ctor(v13, this, prefab, cacheSize, overflowPolicy, v14);
  if ( !v12 )
LABEL_7:
    sub_1B9026C(caches, prefab);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)v12,
    (Il2CppObject *)prefab,
    (Il2CppObject *)v13,
    (const MethodInfo_31D8DA0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v22; // x0
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
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_4A6F16D & 1) == 0 )
  {
    sub_1B90010(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__,
      prefab);
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, v16);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v17);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v18);
    sub_1B90010(&StringLiteral_9963/*"OnSpawn"*/, v19);
    byte_4A6F16D = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         caches,
         (Il2CppObject *)prefab,
         &value,
         (const MethodInfo_31DA5C0 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
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
      v31.fields.x = v13;
      v31.fields.y = v12;
      v31.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v31, 0LL);
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0LL);
      if ( !caches )
        goto LABEL_27;
      v32.fields.x = x;
      v32.fields.y = y;
      v32.fields.z = z;
      v32.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v32, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_object__bool___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)caches,
        (Il2CppObject *)NextObjectInCache,
        1,
        (const MethodInfo_31C3EA8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_24;
    }
LABEL_27:
    sub_1B9026C(caches, prefab);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( overridesPositionAndRotation )
  {
    v30.fields.x = v13;
    v30.fields.y = v12;
    v30.fields.z = v11;
    v33.fields.x = x;
    v33.fields.y = y;
    v33.fields.z = z;
    v33.fields.w = w;
    v22 = UnityEngine_Object__Instantiate(prefab, v30, v33, 0LL);
    if ( v22 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v22 = UnityEngine_Object__Instantiate_69538644(prefab, 0LL);
  if ( !v22 )
  {
LABEL_26:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v23);
    goto LABEL_27;
  }
LABEL_15:
  NextObjectInCache = v22;
  if ( (UnityEngine_GameObject_c *)v22->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v22, v23);
LABEL_24:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_9963/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  sub_1B9052C(v22);
  Spawner__Despawn(v25, v26, v27, v28);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0

  if ( (byte_4A6F177 & 1) == 0 )
  {
    sub_1B90010(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, x);
    byte_4A6F177 = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_1B9026C(0LL, x);
  return System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           managedObjects,
           (Il2CppObject *)x,
           (const MethodInfo_31C40C8 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&v10->fields, (int32_t)spawnerImpl, v11, v12);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)v10, (int32_t)prefab, v13, v14);
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
  if ( (byte_4A6F179 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1B90010(
                                                  &Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__,
                                                  method);
    byte_4A6F179 = 1;
  }
  objects = v2->fields.objects;
  if ( !objects || v2->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v2->fields.cacheIndex;
  v5 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
      sub_1B90274(this, method);
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
                                                  (const MethodInfo_31C3E34 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
    sub_1B9026C(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                v7,
                                                (const MethodInfo_31C3E34 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
  __int64 v3; // x1
  __int64 v4; // x1
  struct UnityEngine_GameObject_array *v5; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  unsigned __int64 v8; // x22
  __int64 i; // x25
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  UnityEngine_GameObject_o *v16; // x20
  const MethodInfo *v17; // x3
  UnityEngine_Transform_o *v18; // x21
  const MethodInfo *v19; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v20; // x0
  const MethodInfo *v21; // x1

  if ( (byte_4A6F178 & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_GameObject___TypeInfo, method);
    sub_1B90010(&UnityEngine_GameObject_TypeInfo, v3);
    sub_1B90010(&UnityEngine_Object_TypeInfo, v4);
    byte_4A6F178 = 1;
  }
  v5 = (struct UnityEngine_GameObject_array *)sub_1B900B8(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v5;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)&this->fields.objects, (int32_t)v5, v6, v7);
  if ( this->fields.cacheSize >= 1 )
  {
    v8 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_69538644(prefab, 0LL);
      v16 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        v13 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_19;
      if ( v8 >= objects->max_length )
        sub_1B90274(transform, v13);
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)transform;
      sub_1B8FFB4((ServantStatusBattleListViewItem_o *)((char *)objects + i), (int32_t)transform, v14, v15);
      if ( i == 32 )
      {
        if ( !v16 || (transform = UnityEngine_GameObject__get_transform(v16, 0LL)) == 0LL )
LABEL_19:
          sub_1B9026C(transform, v13);
        v18 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v18, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v18, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v16, v17);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v16, v19);
      if ( (__int64)++v8 >= this->fields.cacheSize )
        return;
    }
    sub_1B9052C(transform);
    Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(v20, v21);
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
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  int32_t v4; // w3

  if ( (byte_4A6F17A & 1) == 0 )
  {
    sub_1B90010(&Spawner_SpawnerImpl___c_TypeInfo, v1);
    byte_4A6F17A = 1;
  }
  v2 = (Il2CppObject *)sub_1B9025C(Spawner_SpawnerImpl___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  Spawner_SpawnerImpl___c_TypeInfo->static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v2;
  sub_1B8FFB4((ServantStatusBattleListViewItem_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1B9026C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4A6F17B & 1) == 0 )
  {
    sub_1B90010(&UnityEngine_Object_TypeInfo, x);
    byte_4A6F17B = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}