void __fastcall Spawner___ctor(Spawner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B154C5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_Spawner___ctor__, method, v2);
    byte_4B154C5 = 1;
  }
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEF2C *)Method_SingletonMonoBehaviour_Spawner___ctor__);
}


void __fastcall Spawner__Awake(Spawner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  Spawner_ResourcePrecacher_o *v13; // x20
  const MethodInfo *v14; // x1
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x3
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *v24; // x20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  UnityEngine_Transform_o *transform; // x20
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  Spawner_SpawnerImpl_o *v35; // x21
  const MethodInfo *v36; // x2
  int64_t v37; // x2
  int32_t v38; // w3
  System_String_o *v39; // x4
  BattleSetupInfo_o *v40; // x5
  FollowerInfo_o *v41; // x6
  PartyListViewItem_o *v42; // x7

  if ( (byte_4B154C2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo, v5, v6);
    sub_1BCA7E0(&Spawner_ResourcePrecacher_TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_Spawner__Awake__, v9, v10);
    sub_1BCA7E0(&Spawner_SpawnerImpl_TypeInfo, v11, v12);
    byte_4B154C2 = 1;
  }
  v13 = (Spawner_ResourcePrecacher_o *)sub_1BCAA2C(Spawner_ResourcePrecacher_TypeInfo, method, v2, v3);
  Spawner_ResourcePrecacher___ctor(v13, v14);
  this->fields.resourcePrecacher = v13;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.resourcePrecacher, (int64_t)v13, v15, v16, v17, v18, v19, v20);
  v24 = (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)sub_1BCAA2C(
                                                                       System_Collections_Generic_Queue_Spawner_RequestByPath__TypeInfo,
                                                                       v21,
                                                                       v22,
                                                                       v23);
  System_Collections_Generic_Queue_Spawner_RequestByPath____ctor_57768824(
    v24,
    32,
    (const MethodInfo_3717B78 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath___ctor__);
  this->fields.requestsByPath = v24;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.requestsByPath, (int64_t)v24, v25, v26, v27, v28, v29, v30);
  transform = UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
  v35 = (Spawner_SpawnerImpl_o *)sub_1BCAA2C(Spawner_SpawnerImpl_TypeInfo, v32, v33, v34);
  Spawner_SpawnerImpl___ctor(v35, transform, v36);
  this->fields.spawnerImpl = v35;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.spawnerImpl, (int64_t)v35, v37, v38, v39, v40, v41, v42);
  SingletonMonoBehaviour_object___Awake(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_37DEE38 *)Method_SingletonMonoBehaviour_Spawner__Awake__);
}


bool __fastcall Spawner__ContainCache(Spawner_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1BCAA3C(0LL, obj);
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
    sub_1BCAA3C(0LL, objectToDespawn);
  Spawner_SpawnerImpl__Despawn(spawnerImpl, objectToDespawn, sendsDespawn, method);
}


bool __fastcall Spawner__HasCached(Spawner_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  Spawner_RequestByPath_o v7; // kr00_16
  const MethodInfo *v8; // x4

  if ( (byte_4B154C4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__get_Count__, v4, v5);
    byte_4B154C4 = 1;
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
    v7 = System_Collections_Generic_Queue_Spawner_RequestByPath___Dequeue(
           (System_Collections_Generic_Queue_Spawner_RequestByPath__o *)resourcePrecacher,
           (const MethodInfo_3718244 *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Dequeue__);
    method = *(const MethodInfo **)&v7.fields.cacheSize;
    resourcePrecacher = this->fields.resourcePrecacher;
    if ( resourcePrecacher )
    {
      resourcePrecacher = (Spawner_ResourcePrecacher_o *)Spawner_ResourcePrecacher__GetResource(
                                                           resourcePrecacher,
                                                           v7.fields.path,
                                                           (const MethodInfo *)v7.fields.path);
      if ( this->fields.spawnerImpl )
      {
        Spawner_SpawnerImpl__Precache(
          this->fields.spawnerImpl,
          (UnityEngine_Object_o *)resourcePrecacher,
          v7.fields.cacheSize,
          v7.fields.overflowPolicy,
          v8);
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
    sub_1BCAA3C(resourcePrecacher, method);
  return Spawner_SpawnerImpl__HasCached((Spawner_SpawnerImpl_o *)resourcePrecacher, method);
}


void __fastcall Spawner__Precache(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  Spawner__Precache_38679304(this, path, 0, 0, v3);
}


void __fastcall Spawner__Precache_38679296(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  Spawner__Precache_38679304(this, path, cacheSize, 0, v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner__Precache_38679304(
        Spawner_o *this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  const MethodInfo *v10; // x2
  System_Collections_Generic_Queue_Spawner_RequestByPath__o *requestsByPath; // x22
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  Spawner_RequestByPath_o v18; // [xsp+0h] [xbp-40h] BYREF

  if ( (byte_4B154C3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__, path, *(_QWORD *)&cacheSize);
    byte_4B154C3 = 1;
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
        *(_QWORD *)&v18.fields.cacheSize = 0LL,
        sub_1BCA784((PartyOrganizationUtility_o *)&v18, (int64_t)path, v12, v13, v14, v15, v16, v17),
        *(_QWORD *)&v18.fields.cacheSize = __PAIR64__(overflowPolicy, cacheSize),
        !requestsByPath) )
  {
LABEL_9:
    sub_1BCAA3C(resourcePrecacher, path);
  }
  System_Collections_Generic_Queue_Spawner_RequestByPath___Enqueue(
    requestsByPath,
    v18,
    (const MethodInfo_37180BC *)Method_System_Collections_Generic_Queue_Spawner_RequestByPath__Enqueue__);
}


void __fastcall Spawner__Precache_38679804(Spawner_o *this, UnityEngine_Object_o *prefab, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  Spawner__Precache_38679812(this, prefab, 0, v3);
}


void __fastcall Spawner__Precache_38679812(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1BCAA3C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, 0, v4);
}


void __fastcall Spawner__Precache_38679840(
        Spawner_o *this,
        UnityEngine_Object_o *prefab,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *spawnerImpl; // x0

  spawnerImpl = this->fields.spawnerImpl;
  if ( !spawnerImpl )
    sub_1BCAA3C(0LL, prefab);
  Spawner_SpawnerImpl__Precache(spawnerImpl, prefab, cacheSize, overflowPolicy, method);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn(Spawner_o *this, System_String_o *path, const MethodInfo *method)
{
  Spawner_ResourcePrecacher_o *resourcePrecacher; // x0
  UnityEngine_Object_o *Resource; // x1
  const MethodInfo *v6; // x2

  resourcePrecacher = this->fields.resourcePrecacher;
  if ( !resourcePrecacher )
    sub_1BCAA3C(0LL, path);
  Resource = Spawner_ResourcePrecacher__GetResource(resourcePrecacher, path, method);
  return Spawner__Spawn_38681464(this, Resource, v6);
}


UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38681464(
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
  if ( !byte_4B109C1 )
  {
    this = (Spawner_o *)sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, prefab, method);
    byte_4B109C1 = 1;
  }
  static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
  x = static_fields->zeroVector.fields.x;
  y = static_fields->zeroVector.fields.y;
  z = static_fields->zeroVector.fields.z;
  if ( !byte_4B109C7 )
  {
    this = (Spawner_o *)sub_1BCA7E0(&UnityEngine_Quaternion_TypeInfo, prefab, method);
    byte_4B109C7 = 1;
  }
  if ( !spawnerImpl )
    sub_1BCAA3C(this, prefab);
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
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38681652(
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
    sub_1BCAA3C(0LL, path);
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
  return Spawner__Spawn_38681780(this, Resource, v17, v18, v15);
}


// local variable allocation has failed, the output may be wrong!
UnityEngine_GameObject_o *__fastcall Spawner__Spawn_38681780(
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
    sub_1BCAA3C(0LL, prefab);
  return Spawner_SpawnerImpl__Spawn(spawnerImpl, prefab, position, rotation, 1, v5);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall Spawner_RequestByPath___ctor(
        Spawner_RequestByPath_o this,
        System_String_o *path,
        int32_t cacheSize,
        int32_t overflowPolicy,
        const MethodInfo *method)
{
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int v8; // w20
  struct System_String_o *v9; // x21

  v8 = (int)path;
  v9 = this.fields.path;
  this.fields.path->klass = *(System_String_c **)&this.fields.cacheSize;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)this.fields.path,
    *(int64_t *)&this.fields.cacheSize,
    (int64_t)path,
    cacheSize,
    *(System_String_o **)&overflowPolicy,
    (BattleSetupInfo_o *)method,
    v5,
    v6);
  LODWORD(v9->monitor) = v8;
  HIDWORD(v9->monitor) = cacheSize;
}


void __fastcall Spawner_ResourcePrecacher___ctor(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Collections_Generic_Dictionary_object__object__o *v7; // x20
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7

  if ( (byte_4B154CD & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__,
      method,
      v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo, v5, v6);
    byte_4B154CD = 1;
  }
  v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                    System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TypeInfo,
                                                                    method,
                                                                    v2,
                                                                    v3);
  System_Collections_Generic_Dictionary_object__object____ctor_52840648(
    v7,
    32,
    (const MethodInfo_32648C8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element___ctor__);
  this->fields.elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)v7;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)v7, v8, v9, v10, v11, v12, v13);
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


UnityEngine_Object_o *__fastcall Spawner_ResourcePrecacher__GetResource(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0
  UnityEngine_Object_o *monitor; // x20
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B154CB & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__,
      path,
      method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B154CB = 1;
  }
  value = 0LL;
  elements = this->fields.elements;
  if ( !elements )
    goto LABEL_13;
  elements = (struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *)System_Collections_Generic_Dictionary_object__object___TryGetValue((System_Collections_Generic_Dictionary_object__object__o *)elements, (Il2CppObject *)path, &value, (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__TryGetValue__);
  if ( ((unsigned __int8)elements & 1) != 0 )
  {
    if ( value )
    {
      monitor = (UnityEngine_Object_o *)value[1].monitor;
      goto LABEL_8;
    }
LABEL_13:
    sub_1BCAA3C(elements, path);
  }
  monitor = 0LL;
LABEL_8:
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, path);
  if ( UnityEngine_Object__op_Equality(monitor, 0LL, 0LL) )
    return UnityEngine_Resources__Load(path, 0LL);
  return monitor;
}


bool __fastcall Spawner_ResourcePrecacher__HasCached(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v13; // x0
  __int64 v14; // x1
  Il2CppObject *currentValue; // x20
  Il2CppClass *klass; // x0
  UnityEngine_ResourceRequest_o **v17; // x19
  __int64 v18; // x1
  UnityEngine_Object_o *asset; // x0
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  int64_t v26; // x2
  int32_t v27; // w3
  System_String_o *v28; // x4
  BattleSetupInfo_o *v29; // x5
  FollowerInfo_o *v30; // x6
  PartyListViewItem_o *v31; // x7
  int v32; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v34; // [xsp+8h] [xbp-68h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v35; // [xsp+20h] [xbp-50h] BYREF

  if ( (byte_4B154C9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v10,
      v11);
    byte_4B154C9 = 1;
  }
  memset(&v35, 0, sizeof(v35));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements
    || (elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                                elements,
                                                                                (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(elements, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v34,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  v35 = v34;
  while ( 1 )
  {
    do
    {
      v13 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
              &v35,
              (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
      if ( !v13 )
      {
        v32 = 6;
        goto LABEL_14;
      }
      currentValue = v35.fields._currentValue;
      if ( !v35.fields._currentValue )
        sub_1BCAA3C(v13, v14);
      v17 = (UnityEngine_ResourceRequest_o **)&v35.fields._currentValue[1];
      klass = v35.fields._currentValue[1].klass;
    }
    while ( !klass );
    if ( !UnityEngine_AsyncOperation__get_isDone((UnityEngine_AsyncOperation_o *)klass, 0LL) )
      break;
    if ( !*v17 )
      sub_1BCAA3C(0LL, v18);
    asset = UnityEngine_ResourceRequest__get_asset(*v17, 0LL);
    currentValue[1].monitor = asset;
    sub_1BCA784((PartyOrganizationUtility_o *)&currentValue[1].monitor, (int64_t)asset, v20, v21, v22, v23, v24, v25);
    *v17 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)v17, 0LL, v26, v27, v28, v29, v30, v31);
  }
  v32 = 5;
LABEL_14:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v35,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  return v32 != 5;
}


bool __fastcall Spawner_ResourcePrecacher__HasElement(
        Spawner_ResourcePrecacher_o *this,
        System_String_o *path,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4B154C7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__,
      path,
      method);
    byte_4B154C7 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1BCAA3C(0LL, path);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (Il2CppObject *)path,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__ContainsKey__);
}


bool __fastcall Spawner_ResourcePrecacher__HasElements(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4B154C8 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__,
      method,
      v2);
    byte_4B154C8 = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1BCAA3C(0LL, method);
  return System_Collections_Generic_Dictionary_object__object___get_Count(
           (System_Collections_Generic_Dictionary_object__object__o *)elements,
           (const MethodInfo_3264F30 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Count__) > 0;
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
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x21
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7

  if ( (byte_4B154C6 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__,
      path,
      method);
    sub_1BCA7E0(&Spawner_ResourcePrecacher_Element_TypeInfo, v5, v6);
    byte_4B154C6 = 1;
  }
  if ( !Spawner_ResourcePrecacher__HasElement(this, path, method) )
  {
    v10 = sub_1BCAA2C(Spawner_ResourcePrecacher_Element_TypeInfo, v7, v8, v9);
    System_Object___ctor((Il2CppObject *)v10, 0LL);
    elements = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Resources__Load(path, 0LL);
    if ( !v10
      || (*(_QWORD *)(v10 + 24) = elements,
          sub_1BCA784((PartyOrganizationUtility_o *)(v10 + 24), (int64_t)elements, v13, v14, v15, v16, v17, v18),
          (elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements) == 0LL) )
    {
      sub_1BCAA3C(elements, v12);
    }
    System_Collections_Generic_Dictionary_object__object___Add(
      elements,
      (Il2CppObject *)path,
      (Il2CppObject *)v10,
      (const MethodInfo_3265260 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Add__);
  }
}


void __fastcall Spawner_ResourcePrecacher__UnloadAndClear(Spawner_ResourcePrecacher_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  System_Collections_Generic_Dictionary_object__object__o *elements; // x0
  _BOOL8 v17; // x0
  __int64 v18; // x1
  Il2CppObject *currentValue; // x25
  UnityEngine_Object_o *monitor; // x20
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v21; // [xsp+8h] [xbp-58h] BYREF

  if ( (byte_4B154CC & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__get_Current__,
      v10,
      v11);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v12, v13);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__,
      v14,
      v15);
    byte_4B154CC = 1;
  }
  memset(&v21, 0, sizeof(v21));
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
    goto LABEL_15;
  elements = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                          elements,
                                                                          (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Values__);
  if ( !elements )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v21,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)elements,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_string__Spawner_ResourcePrecacher_Element__GetEnumerator__);
  while ( 1 )
  {
    v17 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v21,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__MoveNext__);
    if ( !v17 )
      break;
    currentValue = v21.fields._currentValue;
    if ( !v21.fields._currentValue )
      sub_1BCAA3C(v17, v18);
    monitor = (UnityEngine_Object_o *)v21.fields._currentValue[1].monitor;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
    if ( UnityEngine_Object__op_Inequality(monitor, 0LL, 0LL) )
      UnityEngine_Resources__UnloadAsset((UnityEngine_Object_o *)currentValue[1].monitor, 0LL);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v21,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string__Spawner_ResourcePrecacher_Element__Dispose__);
  elements = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.elements;
  if ( !elements )
LABEL_15:
    sub_1BCAA3C(elements, method);
  System_Collections_Generic_Dictionary_object__object___Clear(
    elements,
    (const MethodInfo_32653E8 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__Clear__);
}


System_Collections_Generic_ICollection_string__o *__fastcall Spawner_ResourcePrecacher__get_Paths(
        Spawner_ResourcePrecacher_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  struct System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__o *elements; // x0

  if ( (byte_4B154CA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__,
      method,
      v2);
    byte_4B154CA = 1;
  }
  elements = this->fields.elements;
  if ( !elements )
    sub_1BCAA3C(0LL, method);
  return (System_Collections_Generic_ICollection_string__o *)System_Collections_Generic_Dictionary_object__object___get_Keys(
                                                               (System_Collections_Generic_Dictionary_object__object__o *)elements,
                                                               (const MethodInfo_3264F40 *)Method_System_Collections_Generic_Dictionary_string__Spawner_ResourcePrecacher_Element__get_Keys__);
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
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_Collections_Generic_Queue_T__o *v8; // x19
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7

  if ( (byte_4B154DA & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Transform___ctor__, v1, v2);
    sub_1BCA7E0(&System_Collections_Generic_Queue_Transform__TypeInfo, v4, v5);
    sub_1BCA7E0(&Spawner_SpawnerImpl_TypeInfo, v6, v7);
    byte_4B154DA = 1;
  }
  v8 = (System_Collections_Generic_Queue_T__o *)sub_1BCAA2C(
                                                  System_Collections_Generic_Queue_Transform__TypeInfo,
                                                  v1,
                                                  v2,
                                                  v3);
  System_Collections_Generic_Queue_object____ctor(
    v8,
    (const MethodInfo_3713DF0 *)Method_System_Collections_Generic_Queue_Transform___ctor__);
  Spawner_SpawnerImpl_TypeInfo->static_fields->q = (struct System_Collections_Generic_Queue_Transform__o *)v8;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Spawner_SpawnerImpl_TypeInfo->static_fields,
    (int64_t)v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
}


void __fastcall Spawner_SpawnerImpl___ctor(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Transform_o *parent,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x3
  System_Collections_Generic_Dictionary_object__object__o *v28; // x20
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v38; // x20
  int64_t v39; // x2
  int32_t v40; // w3
  System_String_o *v41; // x4
  BattleSetupInfo_o *v42; // x5
  FollowerInfo_o *v43; // x6
  PartyListViewItem_o *v44; // x7
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x3
  System_Collections_Generic_HashSet_T__o *v48; // x20
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x3
  System_Collections_Generic_Dictionary_object__int__o *v58; // x20
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7

  if ( (byte_4B154CE & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__,
      parent,
      method);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Object__int___ctor__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo, v9, v10);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_Object__int__TypeInfo, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_GameObject___ctor__, v15, v16);
    sub_1BCA7E0(&System_Collections_Generic_HashSet_GameObject__TypeInfo, v17, v18);
    byte_4B154CE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.parent = parent;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields, (int64_t)parent, v19, v20, v21, v22, v23, v24);
  v28 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCAA2C(
                                                                     System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TypeInfo,
                                                                     v25,
                                                                     v26,
                                                                     v27);
  System_Collections_Generic_Dictionary_object__object____ctor_52840648(
    v28,
    32,
    (const MethodInfo_32648C8 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache___ctor__);
  this->fields.caches = (struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *)v28;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.caches, (int64_t)v28, v29, v30, v31, v32, v33, v34);
  v38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1BCAA2C(
                                                                   System_Collections_Generic_Dictionary_GameObject__bool__TypeInfo,
                                                                   v35,
                                                                   v36,
                                                                   v37);
  System_Collections_Generic_Dictionary_object__bool____ctor_52754676(
    v38,
    128,
    (const MethodInfo_324F8F4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool___ctor__);
  this->fields.managedObjects = (struct System_Collections_Generic_Dictionary_GameObject__bool__o *)v38;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.managedObjects, (int64_t)v38, v39, v40, v41, v42, v43, v44);
  v48 = (System_Collections_Generic_HashSet_T__o *)sub_1BCAA2C(
                                                     System_Collections_Generic_HashSet_GameObject__TypeInfo,
                                                     v45,
                                                     v46,
                                                     v47);
  System_Collections_Generic_HashSet_object____ctor(
    v48,
    (const MethodInfo_345AFC8 *)Method_System_Collections_Generic_HashSet_GameObject___ctor__);
  this->fields.destroyedUnmanagedObjects = (struct System_Collections_Generic_HashSet_GameObject__o *)v48;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.destroyedUnmanagedObjects,
    (int64_t)v48,
    v49,
    v50,
    v51,
    v52,
    v53,
    v54);
  v58 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1BCAA2C(
                                                                  System_Collections_Generic_Dictionary_Object__int__TypeInfo,
                                                                  v55,
                                                                  v56,
                                                                  v57);
  System_Collections_Generic_Dictionary_object__int____ctor_52804476(
    v58,
    32,
    (const MethodInfo_325BB7C *)Method_System_Collections_Generic_Dictionary_Object__int___ctor__);
  this->fields.serialNumbers = (struct System_Collections_Generic_Dictionary_Object__int__o *)v58;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.serialNumbers, (int64_t)v58, v59, v60, v61, v62, v63, v64);
}


System_Collections_Generic_List_Transform__o *__fastcall Spawner_SpawnerImpl__BreadthFirstSearch(
        UnityEngine_Transform_o *root,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  System_Collections_Generic_List_object__o *v19; // x19
  __int64 v20; // x1
  Spawner_SpawnerImpl_c *v21; // x0
  System_Collections_Generic_Queue_T__o *q; // x0
  System_Collections_Generic_Queue_T__o *klass; // x8
  int size; // w20
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 v33; // x10
  UnityEngine_Transform_o *v34; // x20
  Il2CppClass **v35; // x0
  int32_t v36; // w21
  Spawner_SpawnerImpl_c *v37; // x0
  System_Collections_Generic_Queue_T__o *v38; // x22

  if ( (byte_4B154D3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Transform___ctor__, v5, v6);
    sub_1BCA7E0(&System_Collections_Generic_List_Transform__TypeInfo, v7, v8);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Transform__Clear__, v9, v10);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Transform__Dequeue__, v11, v12);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Transform__Enqueue__, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_Queue_Transform__get_Count__, v15, v16);
    sub_1BCA7E0(&Spawner_SpawnerImpl_TypeInfo, v17, v18);
    byte_4B154D3 = 1;
  }
  v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_Transform__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v19,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Transform___ctor__);
  v21 = Spawner_SpawnerImpl_TypeInfo;
  if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v20);
    v21 = Spawner_SpawnerImpl_TypeInfo;
  }
  q = (System_Collections_Generic_Queue_T__o *)v21->static_fields->q;
  if ( !q )
    goto LABEL_27;
  System_Collections_Generic_Queue_object___Enqueue(
    q,
    (Il2CppObject *)root,
    (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
  while ( 1 )
  {
LABEL_7:
    q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v20);
      q = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo;
    }
    klass = (System_Collections_Generic_Queue_T__o *)q[3].fields._syncRoot->klass;
    if ( !klass )
      goto LABEL_27;
    size = klass->fields._size;
    if ( !q[4].fields._size )
    {
      j_il2cpp_runtime_class_init_0(q, v20);
      klass = (System_Collections_Generic_Queue_T__o *)Spawner_SpawnerImpl_TypeInfo->static_fields->q;
      if ( !klass )
        goto LABEL_27;
    }
    if ( size <= 0 )
      break;
    q = (System_Collections_Generic_Queue_T__o *)System_Collections_Generic_Queue_object___Dequeue(
                                                   klass,
                                                   (const MethodInfo_3714548 *)Method_System_Collections_Generic_Queue_Transform__Dequeue__);
    if ( !v19 )
      goto LABEL_27;
    items = v19->fields._items;
    v32 = Method_System_Collections_Generic_List_Transform__Add__;
    ++v19->fields._version;
    if ( !items )
      goto LABEL_27;
    v33 = v19->fields._size;
    v34 = (UnityEngine_Transform_o *)q;
    if ( (unsigned int)v33 >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v19,
        (Il2CppObject *)q,
        *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
    }
    else
    {
      v35 = &items->obj.klass + v33;
      v19->fields._size = v33 + 1;
      v35[4] = (Il2CppClass *)v34;
      sub_1BCA784((PartyOrganizationUtility_o *)(v35 + 4), (int64_t)v34, v25, v26, v27, v28, v29, v30);
    }
    if ( !v34 )
      goto LABEL_27;
    if ( UnityEngine_Transform__get_childCount(v34, 0LL) >= 1 )
    {
      v36 = 0;
      while ( 1 )
      {
        v37 = Spawner_SpawnerImpl_TypeInfo;
        if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v20);
          v37 = Spawner_SpawnerImpl_TypeInfo;
        }
        v38 = (System_Collections_Generic_Queue_T__o *)v37->static_fields->q;
        q = (System_Collections_Generic_Queue_T__o *)UnityEngine_Transform__GetChild(v34, v36, 0LL);
        if ( !v38 )
          break;
        System_Collections_Generic_Queue_object___Enqueue(
          v38,
          (Il2CppObject *)q,
          (const MethodInfo_37143B8 *)Method_System_Collections_Generic_Queue_Transform__Enqueue__);
        if ( ++v36 >= UnityEngine_Transform__get_childCount(v34, 0LL) )
          goto LABEL_7;
      }
LABEL_27:
      sub_1BCAA3C(q, v20);
    }
  }
  System_Collections_Generic_Queue_object___Clear(
    klass,
    (const MethodInfo_3714078 *)Method_System_Collections_Generic_Queue_Transform__Clear__);
  return (System_Collections_Generic_List_Transform__o *)v19;
}


bool __fastcall Spawner_SpawnerImpl__ContainCache(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_Object_o *obj,
        const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0

  if ( (byte_4B154D9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      obj,
      method);
    byte_4B154D9 = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    sub_1BCAA3C(0LL, obj);
  return System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)caches,
           (Il2CppObject *)obj,
           (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__);
}


void __fastcall Spawner_SpawnerImpl__DeactivateCachedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  Spawner_SpawnerImpl_o *v4; // x19

  v4 = this;
  if ( (byte_4B154D5 & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_o *)sub_1BCA7E0(
                                      &Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__,
                                      obj,
                                      method);
    byte_4B154D5 = 1;
  }
  if ( !obj
    || (UnityEngine_GameObject__SetActive(obj, 0, 0LL),
        (this = (Spawner_SpawnerImpl_o *)v4->fields.managedObjects) == 0LL)
    || (System_Collections_Generic_Dictionary_object__bool___set_Item(
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
          (Il2CppObject *)obj,
          0,
          (const MethodInfo_3250284 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__),
        (this = (Spawner_SpawnerImpl_o *)UnityEngine_GameObject__get_transform(obj, 0LL)) == 0LL) )
  {
    sub_1BCAA3C(this, obj);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  System_Collections_Generic_Dictionary_TKey__TValue__o *IsAlive; // x0
  __int64 v38; // x1
  const MethodInfo *v39; // x1
  UnityEngine_Transform_o *transform; // x21
  System_Collections_Generic_List_Transform__o *Search; // x0
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v45; // x21
  Spawner_SpawnerImpl___c_c *v46; // x8
  System_Func_object__object__o *_9__17_0; // x22
  Il2CppObject *v48; // x23
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int64_t v50; // x2
  int32_t v51; // w3
  System_String_o *v52; // x4
  BattleSetupInfo_o *v53; // x5
  FollowerInfo_o *v54; // x6
  PartyListViewItem_o *v55; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v56; // x21
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x3
  System_Func_object__bool__o *v60; // x22
  System_Collections_Generic_IEnumerable_TSource__o *v61; // x0
  System_Collections_Generic_Dictionary_TKey__TValue__c *klass; // x8
  System_Collections_Generic_Dictionary_TKey__TValue__o *v63; // x21
  __int64 v64; // x9
  int32_t *p_offset; // x10
  __int64 v66; // x0
  __int64 v67; // x1
  __int64 v68; // x21
  __int64 v69; // x8
  __int64 v70; // x9
  int *v71; // x10
  __int64 v72; // x0
  __int64 v73; // x8
  __int64 v74; // x9
  int *v75; // x10
  __int64 v76; // x0
  UnityEngine_GameObject_o *v77; // x1
  const MethodInfo *v78; // x2
  __int64 v79; // x8
  __int64 v80; // x9
  int *v81; // x10
  __int64 v82; // x0
  const MethodInfo *v83; // x2

  if ( (byte_4B154D4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__,
      objectToDespawn,
      sendsDespawn);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Reverse_GameObject___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Select_Transform__GameObject___, v9, v10);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Skip_Transform___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_GameObject___, v13, v14);
    sub_1BCA7E0(&System_Func_Transform__GameObject__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_GameObject__bool__TypeInfo, v17, v18);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v19, v20);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerable_GameObject__TypeInfo, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_GameObject__TypeInfo, v23, v24);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v25, v26);
    sub_1BCA7E0(&Method_Spawner_SpawnerImpl__Despawn_b__17_1__, v27, v28);
    sub_1BCA7E0(&Spawner_SpawnerImpl_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, v31, v32);
    sub_1BCA7E0(&Spawner_SpawnerImpl___c_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_10015/*"OnDespawn"*/, v35, v36);
    byte_4B154D4 = 1;
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
      UnityEngine_GameObject__BroadcastMessage(objectToDespawn, (System_String_o *)StringLiteral_10015/*"OnDespawn"*/, 1, 0LL);
    }
    else if ( !objectToDespawn )
    {
      goto LABEL_49;
    }
    transform = UnityEngine_GameObject__get_transform(objectToDespawn, 0LL);
    if ( !Spawner_SpawnerImpl_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl_TypeInfo, v39);
    Search = Spawner_SpawnerImpl__BreadthFirstSearch(transform, v39);
    v45 = System_Linq_Enumerable__Skip_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)Search,
            1,
            (const MethodInfo_2F4A184 *)Method_System_Linq_Enumerable_Skip_Transform___);
    v46 = Spawner_SpawnerImpl___c_TypeInfo;
    if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo, v42);
      v46 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    _9__17_0 = (System_Func_object__object__o *)v46->static_fields->__9__17_0;
    if ( !_9__17_0 )
    {
      if ( !v46->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v46, v42);
        v46 = Spawner_SpawnerImpl___c_TypeInfo;
      }
      v48 = (Il2CppObject *)v46->static_fields->__9;
      _9__17_0 = (System_Func_object__object__o *)sub_1BCAA2C(
                                                    System_Func_Transform__GameObject__TypeInfo,
                                                    v42,
                                                    v43,
                                                    v44);
      System_Func_object__object____ctor(_9__17_0, v48, Method_Spawner_SpawnerImpl___c__Despawn_b__17_0__, 0LL);
      static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
      static_fields->__9__17_0 = (struct System_Func_Transform__GameObject__o *)_9__17_0;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__17_0,
        (int64_t)_9__17_0,
        v50,
        v51,
        v52,
        v53,
        v54,
        v55);
    }
    v56 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                                 v45,
                                                                 (System_Func_TSource__TResult__o *)_9__17_0,
                                                                 (const MethodInfo_2F43A70 *)Method_System_Linq_Enumerable_Select_Transform__GameObject___);
    v60 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_GameObject__bool__TypeInfo, v57, v58, v59);
    System_Func_object__bool____ctor(v60, (Il2CppObject *)this, Method_Spawner_SpawnerImpl__Despawn_b__17_1__, 0LL);
    v61 = System_Linq_Enumerable__Where_object_(
            v56,
            (System_Func_TSource__bool__o *)v60,
            (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_GameObject___);
    IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)System_Linq_Enumerable__Reverse_object_(
                                                                         v61,
                                                                         (const MethodInfo_2F3C430 *)Method_System_Linq_Enumerable_Reverse_GameObject___);
    if ( IsAlive )
    {
      klass = IsAlive->klass;
      v63 = IsAlive;
      v64 = *(unsigned __int16 *)(&IsAlive->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&IsAlive->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerable_GameObject__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_GameObject__TypeInfo )
        {
          --v64;
          p_offset += 4;
          if ( !v64 )
            goto LABEL_21;
        }
        v66 = (__int64)(&klass->vtable._0_Equals.method + 2 * *p_offset);
      }
      else
      {
LABEL_21:
        v66 = sub_1C1C7C0(IsAlive, System_Collections_Generic_IEnumerable_GameObject__TypeInfo, 0LL);
      }
      v68 = (*(__int64 (__fastcall **)(System_Collections_Generic_Dictionary_TKey__TValue__o *, _QWORD))v66)(
              v63,
              *(_QWORD *)(v66 + 8));
      if ( !v68 )
        sub_1BCAA3C(0LL, v67);
      while ( 1 )
      {
        v69 = *(_QWORD *)v68;
        v70 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
        {
          v71 = (int *)(*(_QWORD *)(v69 + 176) + 8LL);
          while ( *((System_Collections_IEnumerator_c **)v71 - 1) != System_Collections_IEnumerator_TypeInfo )
          {
            --v70;
            v71 += 4;
            if ( !v70 )
              goto LABEL_28;
          }
          v72 = v69 + 16LL * *v71 + 312;
        }
        else
        {
LABEL_28:
          v72 = sub_1C1C7C0(v68, System_Collections_IEnumerator_TypeInfo, 0LL);
        }
        if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v72)(v68, *(_QWORD *)(v72 + 8)) & 1) == 0 )
          break;
        v73 = *(_QWORD *)v68;
        v74 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
        if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
        {
          v75 = (int *)(*(_QWORD *)(v73 + 176) + 8LL);
          while ( *((System_Collections_Generic_IEnumerator_GameObject__c **)v75 - 1) != System_Collections_Generic_IEnumerator_GameObject__TypeInfo )
          {
            --v74;
            v75 += 4;
            if ( !v74 )
              goto LABEL_35;
          }
          v76 = v73 + 16LL * *v75 + 312;
        }
        else
        {
LABEL_35:
          v76 = sub_1C1C7C0(v68, System_Collections_Generic_IEnumerator_GameObject__TypeInfo, 0LL);
        }
        v77 = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v76)(v68, *(_QWORD *)(v76 + 8));
        Spawner_SpawnerImpl__DeactivateCachedObject(this, v77, v78);
      }
      v79 = *(_QWORD *)v68;
      v80 = *(unsigned __int16 *)(*(_QWORD *)v68 + 302LL);
      if ( *(_WORD *)(*(_QWORD *)v68 + 302LL) )
      {
        v81 = (int *)(*(_QWORD *)(v79 + 176) + 8LL);
        while ( *((System_IDisposable_c **)v81 - 1) != System_IDisposable_TypeInfo )
        {
          --v80;
          v81 += 4;
          if ( !v80 )
            goto LABEL_42;
        }
        v82 = v79 + 16LL * *v81 + 312;
      }
      else
      {
LABEL_42:
        v82 = sub_1C1C7C0(v68, System_IDisposable_TypeInfo, 0LL);
      }
      (*(void (__fastcall **)(__int64, _QWORD))v82)(v68, *(_QWORD *)(v82 + 8));
      IsAlive = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
      if ( IsAlive )
      {
        if ( System_Collections_Generic_Dictionary_object__bool___ContainsKey(
               IsAlive,
               (Il2CppObject *)objectToDespawn,
               (const MethodInfo_32504A4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__) )
        {
          Spawner_SpawnerImpl__DeactivateCachedObject(this, objectToDespawn, v83);
        }
        else
        {
          Spawner_SpawnerImpl__DestroyUnmanagedObject(this, objectToDespawn, v83);
        }
        return;
      }
    }
LABEL_49:
    sub_1BCAA3C(IsAlive, v38);
  }
}


void __fastcall Spawner_SpawnerImpl__DestroyUnmanagedObject(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x0
  const MethodInfo *v9; // x1
  float unscaledTime; // s0

  if ( (byte_4B154D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_GameObject__Add__, obj, method);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v5, v6);
    byte_4B154D6 = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  UnityEngine_Object__Destroy_70154244((UnityEngine_Object_o *)obj, 0LL);
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !destroyedUnmanagedObjects )
    sub_1BCAA3C(0LL, v7);
  System_Collections_Generic_HashSet_object___Add(
    destroyedUnmanagedObjects,
    (Il2CppObject *)obj,
    (const MethodInfo_345C1AC *)Method_System_Collections_Generic_HashSet_GameObject__Add__);
  unscaledTime = UnityEngine_Time__get_unscaledTime(0LL);
  if ( (float)(unscaledTime - this->fields.lastGCAt) > 59.0 )
  {
    this->fields.lastGCAt = unscaledTime;
    Spawner_SpawnerImpl__GC(this, v9);
  }
}


void __fastcall Spawner_SpawnerImpl__GC(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  Spawner_SpawnerImpl___c_c *v11; // x0
  System_Collections_Generic_HashSet_T__o *destroyedUnmanagedObjects; // x19
  System_Predicate_object__o *_9__20_0; // x20
  Il2CppObject *v14; // x21
  struct Spawner_SpawnerImpl___c_StaticFields *static_fields; // x0
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7

  if ( (byte_4B154D7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__, method, v2);
    sub_1BCA7E0(&System_Predicate_GameObject__TypeInfo, v5, v6);
    sub_1BCA7E0(&Method_Spawner_SpawnerImpl___c__GC_b__20_0__, v7, v8);
    sub_1BCA7E0(&Spawner_SpawnerImpl___c_TypeInfo, v9, v10);
    byte_4B154D7 = 1;
  }
  v11 = Spawner_SpawnerImpl___c_TypeInfo;
  destroyedUnmanagedObjects = (System_Collections_Generic_HashSet_T__o *)this->fields.destroyedUnmanagedObjects;
  if ( !Spawner_SpawnerImpl___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(Spawner_SpawnerImpl___c_TypeInfo, method);
    v11 = Spawner_SpawnerImpl___c_TypeInfo;
  }
  _9__20_0 = (System_Predicate_object__o *)v11->static_fields->__9__20_0;
  if ( !_9__20_0 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11, method);
      v11 = Spawner_SpawnerImpl___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__20_0 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GameObject__TypeInfo, method, v2, v3);
    System_Predicate_object____ctor(_9__20_0, v14, Method_Spawner_SpawnerImpl___c__GC_b__20_0__, 0LL);
    static_fields = Spawner_SpawnerImpl___c_TypeInfo->static_fields;
    static_fields->__9__20_0 = (struct System_Predicate_GameObject__o *)_9__20_0;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__20_0,
      (int64_t)_9__20_0,
      v16,
      v17,
      v18,
      v19,
      v20,
      v21);
  }
  if ( !destroyedUnmanagedObjects )
    sub_1BCAA3C(v11, method);
  System_Collections_Generic_HashSet_object___RemoveWhere(
    destroyedUnmanagedObjects,
    (System_Predicate_T__o *)_9__20_0,
    (const MethodInfo_345C70C *)Method_System_Collections_Generic_HashSet_GameObject__RemoveWhere__);
}


bool __fastcall Spawner_SpawnerImpl__HasCached(Spawner_SpawnerImpl_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  int v13; // w22
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x1
  Il2CppObject *currentValue; // x19
  int v17; // w19
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v19; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4B154D0 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__,
      method,
      v2);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__,
      v4,
      v5);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__,
      v6,
      v7);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__get_Current__,
      v8,
      v9);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__,
      v10,
      v11);
    byte_4B154D0 = 1;
  }
  memset(&v19, 0, sizeof(v19));
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches
    || (caches = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Values(
                                                                              caches,
                                                                              (const MethodInfo_3265090 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__get_Values__)) == 0LL )
  {
    sub_1BCAA3C(caches, method);
  }
  System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator(
    &v19,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)caches,
    (const MethodInfo_38D7DB4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Object__Spawner_SpawnerImpl_ObjectCache__GetEnumerator__);
  v13 = 0;
  while ( 1 )
  {
    v14 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext(
            &v19,
            (const MethodInfo_3365640 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__MoveNext__);
    if ( !v14 )
      break;
    currentValue = v19.fields._currentValue;
    if ( !v19.fields._currentValue )
      sub_1BCAA3C(v14, v15);
    if ( !v19.fields._currentValue[2].monitor )
    {
      Spawner_SpawnerImpl_ObjectCache__Initialize((Spawner_SpawnerImpl_ObjectCache_o *)v19.fields._currentValue, v15);
      v13 += LODWORD(currentValue[2].klass);
    }
    if ( v13 >= 32 )
    {
      v17 = 5;
      goto LABEL_13;
    }
  }
  v17 = 6;
LABEL_13:
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose(
    &v19,
    (const MethodInfo_336563C *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Object__Spawner_SpawnerImpl_ObjectCache__Dispose__);
  return v17 != 5;
}


bool __fastcall Spawner_SpawnerImpl__IsAlive(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0
  bool value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B154D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__, obj, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_HashSet_GameObject__Contains__, v5, v6);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v7, v8);
    byte_4B154D8 = 1;
  }
  value = 0;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, obj);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)obj, 0LL, 0LL) )
  {
    managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
    if ( managedObjects )
    {
      if ( System_Collections_Generic_Dictionary_object__bool___TryGetValue(
             managedObjects,
             (Il2CppObject *)obj,
             &value,
             (const MethodInfo_3251A68 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__TryGetValue__) )
      {
        return value;
      }
      managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.destroyedUnmanagedObjects;
      if ( managedObjects )
        return !System_Collections_Generic_HashSet_object___Contains(
                  (System_Collections_Generic_HashSet_T__o *)managedObjects,
                  (Il2CppObject *)obj,
                  (const MethodInfo_345B6BC *)Method_System_Collections_Generic_HashSet_GameObject__Contains__);
    }
    sub_1BCAA3C(managedObjects, v9);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  System_Collections_Generic_Dictionary_object__int__o *serialNumbers; // x0
  int32_t v14; // w2
  Il2CppObject *name; // x20
  Il2CppObject *v16; // x0
  int32_t v17; // [xsp+8h] [xbp-28h] BYREF
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_4B154D2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__, prefab, obj);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_Object__int__set_Item__, v7, v8);
    sub_1BCA7E0(&int_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_25280/*"{0}({1})"*/, v11, v12);
    byte_4B154D2 = 1;
  }
  value = 0;
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  if ( !serialNumbers )
    goto LABEL_8;
  System_Collections_Generic_Dictionary_object__int___TryGetValue(
    serialNumbers,
    (Il2CppObject *)prefab,
    &value,
    (const MethodInfo_325DCD4 *)Method_System_Collections_Generic_Dictionary_Object__int__TryGetValue__);
  serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.serialNumbers;
  v14 = ++value;
  if ( !serialNumbers
    || (System_Collections_Generic_Dictionary_object__int___set_Item(
          serialNumbers,
          (Il2CppObject *)prefab,
          v14,
          (const MethodInfo_325C504 *)Method_System_Collections_Generic_Dictionary_Object__int__set_Item__),
        !prefab)
    || (name = (Il2CppObject *)UnityEngine_Object__get_name(prefab, 0LL),
        v17 = value,
        v16 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v17),
        serialNumbers = (System_Collections_Generic_Dictionary_object__int__o *)System_String__Format_62415592(
                                                                                  (System_String_o *)StringLiteral_25280/*"{0}({1})"*/,
                                                                                  name,
                                                                                  v16,
                                                                                  0LL),
        !obj) )
  {
LABEL_8:
    sub_1BCAA3C(serialNumbers, prefab);
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *caches; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x3
  struct System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__o *v17; // x23
  Spawner_SpawnerImpl_ObjectCache_o *v18; // x24
  const MethodInfo *v19; // x5

  if ( (byte_4B154CF & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__,
      prefab,
      *(_QWORD *)&cacheSize);
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__,
      v9,
      v10);
    sub_1BCA7E0(&Spawner_SpawnerImpl_ObjectCache_TypeInfo, v11, v12);
    byte_4B154CF = 1;
  }
  caches = this->fields.caches;
  if ( !caches )
    goto LABEL_7;
  if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
         (System_Collections_Generic_Dictionary_object__object__o *)caches,
         (Il2CppObject *)prefab,
         (const MethodInfo_3265454 *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__ContainsKey__) )
  {
    return;
  }
  v17 = this->fields.caches;
  v18 = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1BCAA2C(Spawner_SpawnerImpl_ObjectCache_TypeInfo, v14, v15, v16);
  Spawner_SpawnerImpl_ObjectCache___ctor(v18, this, prefab, cacheSize, overflowPolicy, v19);
  if ( !v17 )
LABEL_7:
    sub_1BCAA3C(caches, prefab);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)v17,
    (Il2CppObject *)prefab,
    (Il2CppObject *)v18,
    (const MethodInfo_326524C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__set_Item__);
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
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  System_Collections_Generic_Dictionary_object__object__o *caches; // x0
  UnityEngine_Object_o *NextObjectInCache; // x21
  UnityEngine_Object_o *v26; // x0
  const MethodInfo *v27; // x3
  UnityEngine_GameObject_o *result; // x0
  Spawner_o *v29; // x0
  UnityEngine_GameObject_o *v30; // x1
  bool v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-68h] BYREF
  UnityEngine_Vector3_o v34; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Quaternion_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Quaternion_o v37; // 0:s3.4,4:s4.4,8:s5.4,12:s6.4

  w = rotation.fields.w;
  z = rotation.fields.z;
  y = rotation.fields.y;
  x = rotation.fields.x;
  v11 = position.fields.z;
  v12 = position.fields.y;
  v13 = position.fields.x;
  if ( (byte_4B154D1 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__,
      prefab,
      overridesPositionAndRotation);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__, v16, v17);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v18, v19);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v20, v21);
    sub_1BCA7E0(&StringLiteral_10090/*"OnSpawn"*/, v22, v23);
    byte_4B154D1 = 1;
  }
  value = 0LL;
  caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.caches;
  if ( !caches )
    goto LABEL_27;
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         caches,
         (Il2CppObject *)prefab,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_Object__Spawner_SpawnerImpl_ObjectCache__TryGetValue__) )
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
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
      v35.fields.x = v13;
      v35.fields.y = v12;
      v35.fields.z = v11;
      UnityEngine_Transform__set_position((UnityEngine_Transform_o *)caches, v35, 0LL);
      caches = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_GameObject__get_transform(
                                                                            (UnityEngine_GameObject_o *)NextObjectInCache,
                                                                            0LL);
      if ( !caches )
        goto LABEL_27;
      v36.fields.x = x;
      v36.fields.y = y;
      v36.fields.z = z;
      v36.fields.w = w;
      UnityEngine_Transform__set_rotation((UnityEngine_Transform_o *)caches, v36, 0LL);
    }
    caches = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.managedObjects;
    if ( caches )
    {
      System_Collections_Generic_Dictionary_object__bool___set_Item(
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)caches,
        (Il2CppObject *)NextObjectInCache,
        1,
        (const MethodInfo_3250284 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__set_Item__);
      if ( NextObjectInCache )
        goto LABEL_24;
    }
LABEL_27:
    sub_1BCAA3C(caches, prefab);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, prefab);
  if ( overridesPositionAndRotation )
  {
    v34.fields.x = v13;
    v34.fields.y = v12;
    v34.fields.z = v11;
    v37.fields.x = x;
    v37.fields.y = y;
    v37.fields.z = z;
    v37.fields.w = w;
    v26 = UnityEngine_Object__Instantiate(prefab, v34, v37, 0LL);
    if ( v26 )
      goto LABEL_15;
    goto LABEL_26;
  }
  v26 = UnityEngine_Object__Instantiate_70153448(prefab, 0LL);
  if ( !v26 )
  {
LABEL_26:
    Spawner_SpawnerImpl__Number(this, prefab, 0LL, v27);
    goto LABEL_27;
  }
LABEL_15:
  NextObjectInCache = v26;
  if ( (UnityEngine_GameObject_c *)v26->klass == UnityEngine_GameObject_TypeInfo )
  {
    Spawner_SpawnerImpl__Number(this, prefab, (UnityEngine_GameObject_o *)v26, v27);
LABEL_24:
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)NextObjectInCache, 1, 0LL);
    UnityEngine_GameObject__BroadcastMessage(
      (UnityEngine_GameObject_o *)NextObjectInCache,
      (System_String_o *)StringLiteral_10090/*"OnSpawn"*/,
      1,
      0LL);
    return (UnityEngine_GameObject_o *)NextObjectInCache;
  }
  sub_1BCACFC(v26);
  Spawner__Despawn(v29, v30, v31, v32);
  return result;
}


bool __fastcall Spawner_SpawnerImpl___Despawn_b__17_1(
        Spawner_SpawnerImpl_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_TKey__TValue__o *managedObjects; // x0

  if ( (byte_4B154DB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__, x, method);
    byte_4B154DB = 1;
  }
  managedObjects = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.managedObjects;
  if ( !managedObjects )
    sub_1BCAA3C(0LL, x);
  return System_Collections_Generic_Dictionary_object__bool___ContainsKey(
           managedObjects,
           (Il2CppObject *)x,
           (const MethodInfo_32504A4 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__ContainsKey__);
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
  int64_t v11; // x2
  int32_t v12; // w3
  System_String_o *v13; // x4
  BattleSetupInfo_o *v14; // x5
  FollowerInfo_o *v15; // x6
  PartyListViewItem_o *v16; // x7
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v10->fields.spawnerImpl = spawnerImpl;
  sub_1BCA784((PartyOrganizationUtility_o *)&v10->fields, (int64_t)spawnerImpl, v11, v12, v13, v14, v15, v16);
  v10->fields.prefab = prefab;
  v10 = (Spawner_SpawnerImpl_ObjectCache_o *)((char *)v10 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)v10, (int64_t)prefab, v17, v18, v19, v20, v21, v22);
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
  Il2CppObject *v8; // x20
  int32_t cacheSize; // w10
  struct Spawner_SpawnerImpl_o *v10; // x8
  const MethodInfo *v11; // x3
  Spawner_SpawnerImpl_ObjectCache_o *v12; // x21

  v3 = this;
  if ( (byte_4B154DD & 1) == 0 )
  {
    this = (Spawner_SpawnerImpl_ObjectCache_o *)sub_1BCA7E0(
                                                  &Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__,
                                                  method,
                                                  v2);
    byte_4B154DD = 1;
  }
  objects = v3->fields.objects;
  if ( !objects || v3->fields.cacheSize < 1 )
    return 0LL;
  cacheIndex = v3->fields.cacheIndex;
  v6 = 0;
  while ( 1 )
  {
    if ( cacheIndex >= objects->max_length )
      sub_1BCAA44(this, method);
    spawnerImpl = v3->fields.spawnerImpl;
    if ( !spawnerImpl )
      goto LABEL_12;
    this = (Spawner_SpawnerImpl_ObjectCache_o *)spawnerImpl->fields.managedObjects;
    if ( !this )
      goto LABEL_12;
    v8 = (Il2CppObject *)objects->m_Items[cacheIndex];
    this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                  (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                  v8,
                                                  (const MethodInfo_3250210 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
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
  v10 = v3->fields.spawnerImpl;
  if ( !v10 || (this = (Spawner_SpawnerImpl_ObjectCache_o *)v10->fields.managedObjects) == 0LL )
LABEL_12:
    sub_1BCAA3C(this, method);
  this = (Spawner_SpawnerImpl_ObjectCache_o *)System_Collections_Generic_Dictionary_object__bool___get_Item(
                                                (System_Collections_Generic_Dictionary_TKey__TValue__o *)this,
                                                v8,
                                                (const MethodInfo_3250210 *)Method_System_Collections_Generic_Dictionary_GameObject__bool__get_Item__);
  if ( ((unsigned __int8)this & 1) != 0 )
  {
    if ( v3->fields.overflowPolicy == 1 )
    {
      this = (Spawner_SpawnerImpl_ObjectCache_o *)v3->fields.spawnerImpl;
      if ( !this )
        goto LABEL_12;
      Spawner_SpawnerImpl__Despawn((Spawner_SpawnerImpl_o *)this, (UnityEngine_GameObject_o *)v8, 1, v11);
      goto LABEL_19;
    }
    return 0LL;
  }
LABEL_19:
  v3->fields.cacheIndex = (v3->fields.cacheIndex + 1) % v3->fields.cacheSize;
  if ( !v8 )
    goto LABEL_12;
  this = (Spawner_SpawnerImpl_ObjectCache_o *)UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)v8, 0LL);
  if ( !this )
    goto LABEL_12;
  v12 = this;
  UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)this, 0LL, 0LL);
  UnityEngine_Transform__set_localPosition((UnityEngine_Transform_o *)v12, v3->fields.defaultLocalPosition, 0LL);
  UnityEngine_Transform__set_localRotation((UnityEngine_Transform_o *)v12, v3->fields.defaultLocalRotation, 0LL);
  UnityEngine_Transform__set_localScale((UnityEngine_Transform_o *)v12, v3->fields.defaultLocalScale, 0LL);
  return (UnityEngine_GameObject_o *)v8;
}


void __fastcall Spawner_SpawnerImpl_ObjectCache__Initialize(
        Spawner_SpawnerImpl_ObjectCache_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  struct UnityEngine_GameObject_array *v8; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  __int64 v15; // x1
  unsigned __int64 v16; // x22
  __int64 i; // x25
  struct UnityEngine_GameObject_array *objects; // x21
  UnityEngine_Object_o *prefab; // x20
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_GameObject_c *v21; // x1
  int64_t v22; // x2
  int32_t v23; // w3
  System_String_o *v24; // x4
  BattleSetupInfo_o *v25; // x5
  FollowerInfo_o *v26; // x6
  PartyListViewItem_o *v27; // x7
  UnityEngine_GameObject_o *v28; // x20
  const MethodInfo *v29; // x3
  UnityEngine_Transform_o *v30; // x21
  const MethodInfo *v31; // x2
  Spawner_SpawnerImpl_ObjectCache_o *v32; // x0
  const MethodInfo *v33; // x1

  if ( (byte_4B154DC & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_GameObject___TypeInfo, method, v2);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v4, v5);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v6, v7);
    byte_4B154DC = 1;
  }
  v8 = (struct UnityEngine_GameObject_array *)sub_1BCA888(
                                                UnityEngine_GameObject___TypeInfo,
                                                (unsigned int)this->fields.cacheSize);
  this->fields.objects = v8;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objects, (int64_t)v8, v9, v10, v11, v12, v13, v14);
  if ( this->fields.cacheSize >= 1 )
  {
    v16 = 0LL;
    for ( i = 32LL; ; i += 8LL )
    {
      objects = this->fields.objects;
      prefab = this->fields.prefab;
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v15);
      transform = (UnityEngine_Transform_o *)UnityEngine_Object__Instantiate_70153448(prefab, 0LL);
      v28 = (UnityEngine_GameObject_o *)transform;
      if ( transform )
      {
        v21 = UnityEngine_GameObject_TypeInfo;
        if ( (UnityEngine_GameObject_c *)transform->klass != UnityEngine_GameObject_TypeInfo )
          break;
      }
      if ( !objects )
        goto LABEL_19;
      if ( v16 >= objects->max_length )
        sub_1BCAA44(transform, v21);
      *(Il2CppClass **)((char *)&objects->obj.klass + i) = (Il2CppClass *)transform;
      sub_1BCA784((PartyOrganizationUtility_o *)((char *)objects + i), (int64_t)transform, v22, v23, v24, v25, v26, v27);
      if ( i == 32 )
      {
        if ( !v28 || (transform = UnityEngine_GameObject__get_transform(v28, 0LL)) == 0LL )
LABEL_19:
          sub_1BCAA3C(transform, v21);
        v30 = transform;
        this->fields.defaultLocalPosition = UnityEngine_Transform__get_localPosition(transform, 0LL);
        this->fields.defaultLocalRotation = UnityEngine_Transform__get_localRotation(v30, 0LL);
        this->fields.defaultLocalScale = UnityEngine_Transform__get_localScale(v30, 0LL);
      }
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__Number((Spawner_SpawnerImpl_o *)transform, this->fields.prefab, v28, v29);
      transform = (UnityEngine_Transform_o *)this->fields.spawnerImpl;
      if ( !transform )
        goto LABEL_19;
      Spawner_SpawnerImpl__DeactivateCachedObject((Spawner_SpawnerImpl_o *)transform, v28, v31);
      if ( (__int64)++v16 >= this->fields.cacheSize )
        return;
    }
    sub_1BCACFC(transform);
    Spawner_SpawnerImpl_ObjectCache__GetNextObjectInCache(v32, v33);
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
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B154DE & 1) == 0 )
  {
    sub_1BCA7E0(&Spawner_SpawnerImpl___c_TypeInfo, v1, v2);
    byte_4B154DE = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(Spawner_SpawnerImpl___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  Spawner_SpawnerImpl___c_TypeInfo->static_fields->__9 = (struct Spawner_SpawnerImpl___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)Spawner_SpawnerImpl___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
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
    sub_1BCAA3C(this, 0LL);
  return UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x, 0LL);
}


bool __fastcall Spawner_SpawnerImpl___c___GC_b__20_0(
        Spawner_SpawnerImpl___c_o *this,
        UnityEngine_GameObject_o *x,
        const MethodInfo *method)
{
  if ( (byte_4B154DF & 1) == 0 )
  {
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, x, method);
    byte_4B154DF = 1;
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, x);
  return UnityEngine_Object__op_Equality((UnityEngine_Object_o *)x, 0LL, 0LL);
}