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
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w22
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *v9; // x21

  if ( (byte_4B1BE05 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__,
      kvpSystemTable);
    this = (OverwriteAssetSoundNameTable_o *)sub_1BCAFF8(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__,
                                               v6);
    byte_4B1BE05 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCB25C(this, kvpSystemTable, table);
      v9 = table->m_Items[v8];
      if ( !v9 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
      if ( !*kvpSystemTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                 (Il2CppObject *)v9->fields.UniqueKey,
                                                 (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
        if ( !*kvpSystemTable )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v9->fields.UniqueKey,
          (Il2CppObject *)v9,
          (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_1BCB254(this, kvpSystemTable);
  }
}


void __fastcall OverwriteAssetSoundNameTable__AddKvpTable(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  __int64 v6; // x1
  signed int max_length; // w8
  unsigned int v8; // w22
  OverwriteAssetSoundNameTable_SoundAssetData_o *v9; // x21

  if ( (byte_4B1BE04 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__,
      kvpTable);
    this = (OverwriteAssetSoundNameTable_o *)sub_1BCAFF8(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__,
                                               v6);
    byte_4B1BE04 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v8 = 0;
    while ( 1 )
    {
      if ( v8 >= max_length )
        sub_1BCB25C(this, kvpTable, table);
      v9 = table->m_Items[v8];
      if ( !v9 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
      if ( !*kvpTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_object__object___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                 (Il2CppObject *)v9->fields.UniqueKey,
                                                 (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
        if ( !*kvpTable )
          break;
        System_Collections_Generic_Dictionary_object__object___Add(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v9->fields.UniqueKey,
          (Il2CppObject *)v9,
          (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_1BCB254(this, kvpTable);
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
    sub_1BCB254(IsNullOrEmpty, v4);
  return playCommonTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlaySystemCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundSystemAssetData_array *playSystemTable; // x8

  playSystemTable = this->fields.playSystemTable;
  if ( !playSystemTable )
    sub_1BCB254(this, method);
  return playSystemTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlayTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *playTable; // x8

  playTable = this->fields.playTable;
  if ( !playTable )
    sub_1BCB254(this, method);
  return playTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetStopTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *stopTable; // x8

  stopTable = this->fields.stopTable;
  if ( !stopTable )
    sub_1BCB254(this, method);
  return stopTable->max_length;
}


void __fastcall OverwriteAssetSoundNameTable__Initialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  OverwriteAssetSoundNameTable_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4B1BE02 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__,
      kvpTable);
    sub_1BCAFF8(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo,
      v6);
    byte_4B1BE02 = 1;
  }
  if ( !*kvpTable )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__);
    *kvpTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o *)v7;
    sub_1BCAF9C((CGThumbnailListItem_o *)kvpTable, (int32_t)v7, v8, v9);
    OverwriteAssetSoundNameTable__AddKvpTable(v10, kvpTable, table, v11);
  }
}


void __fastcall OverwriteAssetSoundNameTable__SystemInitialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  OverwriteAssetSoundNameTable_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_4B1BE03 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__,
      kvpSystemTable);
    sub_1BCAFF8(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo,
      v6);
    byte_4B1BE03 = 1;
  }
  if ( !*kvpSystemTable )
  {
    v7 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v7,
      (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__);
    *kvpSystemTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o *)v7;
    sub_1BCAF9C((CGThumbnailListItem_o *)kvpSystemTable, (int32_t)v7, v8, v9);
    OverwriteAssetSoundNameTable__AddKvpSystemTable(v10, kvpSystemTable, table, v11);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *v14; // x0
  System_Collections_Generic_Dictionary_object__object__o *v15; // x23
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  __int64 v18; // x1
  __int64 v19; // x2
  signed int max_length; // w8
  unsigned int v21; // w24
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *v22; // x23

  if ( (byte_4B1BE01 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__,
      kvpCommonTable);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__,
      v10);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__,
      v11);
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__,
      v12);
    sub_1BCAFF8(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo,
      v13);
    byte_4B1BE01 = 1;
  }
  v14 = *kvpCommonTable;
  if ( !*kvpCommonTable )
  {
    v15 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1BCB244(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v15,
      (const MethodInfo_33853C8 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__);
    *kvpCommonTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)v15;
    sub_1BCAF9C((CGThumbnailListItem_o *)kvpCommonTable, (int32_t)v15, v16, v17);
    if ( !table )
      goto LABEL_16;
    max_length = table->max_length;
    if ( max_length >= 1 )
    {
      v21 = 0;
      while ( 1 )
      {
        if ( v21 >= max_length )
          sub_1BCB25C(v14, v18, v19);
        v22 = table->m_Items[v21];
        if ( !v22 )
          break;
        v14 = *kvpCommonTable;
        if ( !*kvpCommonTable )
          break;
        v14 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)System_Collections_Generic_Dictionary_object__object___ContainsKey((System_Collections_Generic_Dictionary_object__object__o *)v14, (Il2CppObject *)v22->fields.UniqueKey, (const MethodInfo_3385F6C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__);
        if ( ((unsigned __int8)v14 & 1) == 0 )
        {
          v14 = *kvpCommonTable;
          if ( !*kvpCommonTable )
            break;
          System_Collections_Generic_Dictionary_object__object___Add(
            (System_Collections_Generic_Dictionary_object__object__o *)v14,
            (Il2CppObject *)v22->fields.UniqueKey,
            (Il2CppObject *)v22,
            (const MethodInfo_3385D78 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__);
        }
        max_length = table->max_length;
        if ( (int)++v21 >= max_length )
          goto LABEL_14;
      }
LABEL_16:
      sub_1BCB254(v14, v18);
    }
LABEL_14:
    v14 = *kvpCommonTable;
    if ( !*kvpCommonTable )
      goto LABEL_16;
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v14,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__);
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

  if ( (byte_4B1BDFF & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__,
      kvpTable);
    byte_4B1BDFF = 1;
  }
  v11 = *kvpTable;
  if ( !*kvpTable )
  {
    OverwriteAssetSoundNameTable__Initialize(this, kvpTable, table, (const MethodInfo *)key);
    v11 = *kvpTable;
    if ( !*kvpTable )
      sub_1BCB254(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__);
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

  if ( (byte_4B1BE00 & 1) == 0 )
  {
    sub_1BCAFF8(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__,
      kvpSystemTable);
    byte_4B1BE00 = 1;
  }
  v11 = *kvpSystemTable;
  if ( !*kvpSystemTable )
  {
    OverwriteAssetSoundNameTable__SystemInitialize(this, kvpSystemTable, table, (const MethodInfo *)key);
    v11 = *kvpSystemTable;
    if ( !*kvpSystemTable )
      sub_1BCB254(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_object__object___TryGetValue(
           (System_Collections_Generic_Dictionary_object__object__o *)v11,
           (Il2CppObject *)key,
           (Il2CppObject **)data,
           (const MethodInfo_3387584 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__);
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