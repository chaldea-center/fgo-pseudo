void __fastcall OverwriteAssetSoundNameTable___ctor(OverwriteAssetSoundNameTable_o *this, const MethodInfo *method)
{
  UnityEngine_ScriptableObject___ctor((UnityEngine_ScriptableObject_o *)this, 0LL);
}


void __fastcall OverwriteAssetSoundNameTable__AddKvpSystemTable(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v7; // w22
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *v8; // x21

  if ( (byte_4A5A9F5 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__);
    this = (OverwriteAssetSoundNameTable_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__);
    byte_4A5A9F5 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B88814(this, kvpSystemTable);
      v8 = table->m_Items[v7];
      if ( !v8 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
      if ( !*kvpSystemTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                 (Il2CppObject *)v8->fields.UniqueKey,
                                                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
        if ( !*kvpSystemTable )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v8->fields.UniqueKey,
          (Il2CppObject *)v8,
          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_1B8880C(this, kvpSystemTable);
  }
}


void __fastcall OverwriteAssetSoundNameTable__AddKvpTable(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  signed int max_length; // w8
  unsigned int v7; // w22
  OverwriteAssetSoundNameTable_SoundAssetData_o *v8; // x21

  if ( (byte_4A5A9F4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__);
    this = (OverwriteAssetSoundNameTable_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__);
    byte_4A5A9F4 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v7 = 0;
    while ( 1 )
    {
      if ( v7 >= max_length )
        sub_1B88814(this, kvpTable);
      v8 = table->m_Items[v7];
      if ( !v8 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
      if ( !*kvpTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                 (Il2CppObject *)v8->fields.UniqueKey,
                                                 (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
        if ( !*kvpTable )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v8->fields.UniqueKey,
          (Il2CppObject *)v8,
          (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v7 >= max_length )
        return;
    }
LABEL_14:
    sub_1B8880C(this, kvpTable);
  }
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlayCommonCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1
  struct OverwriteAssetSoundNameTable_SoundCommonAssetData_array *playCommonTable; // x8

  IsNullOrEmpty = BasicHelper__IsNullOrEmpty((System_Collections_ICollection_o *)this->fields.playCommonTable, 0LL);
  if ( IsNullOrEmpty )
    return 0;
  playCommonTable = this->fields.playCommonTable;
  if ( !playCommonTable )
    sub_1B8880C(IsNullOrEmpty, v4);
  return playCommonTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlaySystemCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundSystemAssetData_array *playSystemTable; // x8

  playSystemTable = this->fields.playSystemTable;
  if ( !playSystemTable )
    sub_1B8880C(this, method);
  return playSystemTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlayTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *playTable; // x8

  playTable = this->fields.playTable;
  if ( !playTable )
    sub_1B8880C(this, method);
  return playTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetStopTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *stopTable; // x8

  stopTable = this->fields.stopTable;
  if ( !stopTable )
    sub_1B8880C(this, method);
  return stopTable->max_length;
}


void __fastcall OverwriteAssetSoundNameTable__Initialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  OverwriteAssetSoundNameTable_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4A5A9F2 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo);
    byte_4A5A9F2 = 1;
  }
  if ( !*kvpTable )
  {
    v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v6,
      (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__);
    *kvpTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)kvpTable, (int32_t)v6, v7, v8);
    OverwriteAssetSoundNameTable__AddKvpTable(v9, kvpTable, table, v10);
  }
}


void __fastcall OverwriteAssetSoundNameTable__SystemInitialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  int32_t v7; // w2
  int32_t v8; // w3
  OverwriteAssetSoundNameTable_o *v9; // x0
  const MethodInfo *v10; // x3

  if ( (byte_4A5A9F3 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo);
    byte_4A5A9F3 = 1;
  }
  if ( !*kvpSystemTable )
  {
    v6 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v6,
      (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__);
    *kvpSystemTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o *)v6;
    sub_1B88554((ServantStatusBattleListViewItem_o *)kvpSystemTable, (int32_t)v6, v7, v8);
    OverwriteAssetSoundNameTable__AddKvpSystemTable(v9, kvpSystemTable, table, v10);
  }
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetCommonData(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o **kvpCommonTable,
        OverwriteAssetSoundNameTable_SoundCommonAssetData_array *table,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundCommonAssetData_o **data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *v10; // x0
  System_Collections_Generic_Dictionary_object__object__o *v11; // x23
  int32_t v12; // w2
  int32_t v13; // w3
  __int64 v14; // x1
  signed int max_length; // w8
  unsigned int v16; // w24
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *v17; // x23

  if ( (byte_4A5A9F1 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo);
    byte_4A5A9F1 = 1;
  }
  v10 = *kvpCommonTable;
  if ( !*kvpCommonTable )
  {
    v11 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1B887FC(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v11,
      (const MethodInfo_31C6818 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__);
    *kvpCommonTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)v11;
    sub_1B88554((ServantStatusBattleListViewItem_o *)kvpCommonTable, (int32_t)v11, v12, v13);
    if ( !table )
      goto LABEL_16;
    max_length = table->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0;
      while ( 1 )
      {
        if ( v16 >= max_length )
          sub_1B88814(v10, v14);
        v17 = table->m_Items[v16];
        if ( !v17 )
          break;
        v10 = *kvpCommonTable;
        if ( !*kvpCommonTable )
          break;
        v10 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey((System_Collections_Generic_Dictionary_object__object__o *)v10, (Il2CppObject *)v17->fields.UniqueKey, (const MethodInfo_31C73BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__);
        if ( ((unsigned __int8)v10 & 1) == 0 )
        {
          v10 = *kvpCommonTable;
          if ( !*kvpCommonTable )
            break;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)v10,
            (Il2CppObject *)v17->fields.UniqueKey,
            (Il2CppObject *)v17,
            (const MethodInfo_31C71C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__);
        }
        max_length = table->max_length;
        if ( (int)++v16 >= max_length )
          goto LABEL_14;
      }
LABEL_16:
      sub_1B8880C(v10, v14);
    }
LABEL_14:
    v10 = *kvpCommonTable;
    if ( !*kvpCommonTable )
      goto LABEL_16;
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v10,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetData(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundAssetData_o **data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5A9EF & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__);
    byte_4A5A9EF = 1;
  }
  v11 = *kvpTable;
  if ( !*kvpTable )
  {
    OverwriteAssetSoundNameTable__Initialize(this, kvpTable, table, (const MethodInfo *)key);
    v11 = *kvpTable;
    if ( !*kvpTable )
      sub_1B8880C(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetPlayCommonData(
        OverwriteAssetSoundNameTable_o *this,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundCommonAssetData_o **data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return OverwriteAssetSoundNameTable__TryGetCommonData(
           this,
           &this->fields.kvpPlayCommonTable,
           this->fields.playCommonTable,
           key,
           data,
           v4);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetPlayData(
        OverwriteAssetSoundNameTable_o *this,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundAssetData_o **data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return OverwriteAssetSoundNameTable__TryGetData(
           this,
           &this->fields.kvpPlayTable,
           this->fields.playTable,
           key,
           data,
           v4);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetPlaySystemData(
        OverwriteAssetSoundNameTable_o *this,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_o **data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return OverwriteAssetSoundNameTable__TryGetSystemData(
           this,
           &this->fields.kvpPlaySystemTable,
           this->fields.playSystemTable,
           key,
           data,
           v4);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetStopData(
        OverwriteAssetSoundNameTable_o *this,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundAssetData_o **data,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  return OverwriteAssetSoundNameTable__TryGetData(
           this,
           &this->fields.kvpStopTable,
           this->fields.stopTable,
           key,
           data,
           v4);
}


bool __fastcall OverwriteAssetSoundNameTable__TryGetSystemData(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        System_String_o *key,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_o **data,
        const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o *v11; // x0
  __int64 v12; // x1

  if ( (byte_4A5A9F0 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__);
    byte_4A5A9F0 = 1;
  }
  v11 = *kvpSystemTable;
  if ( !*kvpSystemTable )
  {
    OverwriteAssetSoundNameTable__SystemInitialize(this, kvpSystemTable, table, (const MethodInfo *)key);
    v11 = *kvpSystemTable;
    if ( !*kvpSystemTable )
      sub_1B8880C(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__);
}


void __fastcall OverwriteAssetSoundNameTable_SoundAssetData___ctor(
        OverwriteAssetSoundNameTable_SoundAssetData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor(
        OverwriteAssetSoundNameTable_SoundCommonAssetData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor(
        OverwriteAssetSoundNameTable_SoundSystemAssetData_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}