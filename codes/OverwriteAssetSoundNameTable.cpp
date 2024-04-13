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
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  signed int max_length; // w8
  unsigned int v10; // w22
  OverwriteAssetSoundNameTable_SoundSystemAssetData_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42E6388 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__,
      (_DWORD)kvpSystemTable,
      (_DWORD)table,
      method);
    this = (OverwriteAssetSoundNameTable_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__,
                                               v6,
                                               v7,
                                               v8);
    byte_42E6388 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v11 = table->m_Items[v10];
      if ( !v11 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
      if ( !*kvpSystemTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                 (System_Xml_XmlQualifiedName_o *)v11->fields.UniqueKey,
                                                 (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
        if ( !*kvpSystemTable )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)v11->fields.UniqueKey,
          (System_Xml_Schema_XmlSchemaObject_o *)v11,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_14:
    sub_B5D69C(this, kvpSystemTable);
  }
}


void __fastcall OverwriteAssetSoundNameTable__AddKvpTable(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  signed int max_length; // w8
  unsigned int v10; // w22
  OverwriteAssetSoundNameTable_SoundAssetData_o *v11; // x21
  __int64 v12; // x0

  if ( (byte_42E6387 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__,
      (_DWORD)kvpTable,
      (_DWORD)table,
      method);
    this = (OverwriteAssetSoundNameTable_o *)sub_B5D5C4(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__,
                                               v6,
                                               v7,
                                               v8);
    byte_42E6387 = 1;
  }
  if ( !table )
    goto LABEL_14;
  max_length = table->max_length;
  if ( max_length >= 1 )
  {
    v10 = 0;
    while ( 1 )
    {
      if ( v10 >= max_length )
      {
        v12 = sub_B5D6C8(this);
        sub_B5D668(v12, 0LL);
      }
      v11 = table->m_Items[v10];
      if ( !v11 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
      if ( !*kvpTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                 (System_Xml_XmlQualifiedName_o *)v11->fields.UniqueKey,
                                                 (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
        if ( !*kvpTable )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)v11->fields.UniqueKey,
          (System_Xml_Schema_XmlSchemaObject_o *)v11,
          (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v10 >= max_length )
        return;
    }
LABEL_14:
    sub_B5D69C(this, kvpTable);
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
    sub_B5D69C(IsNullOrEmpty, v4);
  return playCommonTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlaySystemCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundSystemAssetData_array *playSystemTable; // x8

  playSystemTable = this->fields.playSystemTable;
  if ( !playSystemTable )
    sub_B5D69C(this, method);
  return playSystemTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlayTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *playTable; // x8

  playTable = this->fields.playTable;
  if ( !playTable )
    sub_B5D69C(this, method);
  return playTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetStopTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *stopTable; // x8

  stopTable = this->fields.stopTable;
  if ( !stopTable )
    sub_B5D69C(this, method);
  return stopTable->max_length;
}


void __fastcall OverwriteAssetSoundNameTable__Initialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v9; // x21
  OverwriteAssetSoundNameTable_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42E6385 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__,
      (_DWORD)kvpTable,
      (_DWORD)table,
      method);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo,
      v6,
      v7,
      v8);
    byte_42E6385 = 1;
  }
  if ( !*kvpTable )
  {
    v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v9,
      (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__);
    *kvpTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o *)v9;
    sub_B5D560(kvpTable);
    OverwriteAssetSoundNameTable__AddKvpTable(v10, kvpTable, table, v11);
  }
}


void __fastcall OverwriteAssetSoundNameTable__SystemInitialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        const MethodInfo *method)
{
  int v6; // w1
  int v7; // w2
  __int64 v8; // x3
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v9; // x21
  OverwriteAssetSoundNameTable_o *v10; // x0
  const MethodInfo *v11; // x3

  if ( (byte_42E6386 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__,
      (_DWORD)kvpSystemTable,
      (_DWORD)table,
      method);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo,
      v6,
      v7,
      v8);
    byte_42E6386 = 1;
  }
  if ( !*kvpSystemTable )
  {
    v9 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v9,
      (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__);
    *kvpSystemTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o *)v9;
    sub_B5D560(kvpSystemTable);
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
  System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *v22; // x0
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v23; // x23
  __int64 v24; // x1
  signed int max_length; // w8
  unsigned int v26; // w24
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *v27; // x23
  __int64 v29; // x0

  if ( (byte_42E6384 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__,
      (_DWORD)kvpCommonTable,
      (_DWORD)table,
      key);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__,
      v10,
      v11,
      v12);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__,
      v13,
      v14,
      v15);
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__,
      v16,
      v17,
      v18);
    sub_B5D5C4(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo,
      v19,
      v20,
      v21);
    byte_42E6384 = 1;
  }
  v22 = *kvpCommonTable;
  if ( !*kvpCommonTable )
  {
    v23 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B5D694(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v23,
      (const MethodInfo_2F2600C *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__);
    *kvpCommonTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)v23;
    sub_B5D560(kvpCommonTable);
    if ( !table )
      goto LABEL_16;
    max_length = table->max_length;
    if ( max_length >= 1 )
    {
      v26 = 0;
      while ( 1 )
      {
        if ( v26 >= max_length )
        {
          v29 = sub_B5D6C8(v22);
          sub_B5D668(v29, 0LL);
        }
        v27 = table->m_Items[v26];
        if ( !v27 )
          break;
        v22 = *kvpCommonTable;
        if ( !*kvpCommonTable )
          break;
        v22 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey((System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22, (System_Xml_XmlQualifiedName_o *)v27->fields.UniqueKey, (const MethodInfo_2F26E30 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__);
        if ( ((unsigned __int8)v22 & 1) == 0 )
        {
          v22 = *kvpCommonTable;
          if ( !*kvpCommonTable )
            break;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22,
            (System_Xml_XmlQualifiedName_o *)v27->fields.UniqueKey,
            (System_Xml_Schema_XmlSchemaObject_o *)v27,
            (const MethodInfo_2F26BBC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__);
        }
        max_length = table->max_length;
        if ( (int)++v26 >= max_length )
          goto LABEL_14;
      }
LABEL_16:
      sub_B5D69C(v22, v24);
    }
LABEL_14:
    v22 = *kvpCommonTable;
    if ( !*kvpCommonTable )
      goto LABEL_16;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v22,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__);
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

  if ( (byte_42E6382 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__,
      (_DWORD)kvpTable,
      (_DWORD)table,
      key);
    byte_42E6382 = 1;
  }
  v11 = *kvpTable;
  if ( !*kvpTable )
  {
    OverwriteAssetSoundNameTable__Initialize(this, kvpTable, table, (const MethodInfo *)key);
    v11 = *kvpTable;
    if ( !*kvpTable )
      sub_B5D69C(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__);
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

  if ( (byte_42E6383 & 1) == 0 )
  {
    sub_B5D5C4(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__,
      (_DWORD)kvpSystemTable,
      (_DWORD)table,
      key);
    byte_42E6383 = 1;
  }
  v11 = *kvpSystemTable;
  if ( !*kvpSystemTable )
  {
    OverwriteAssetSoundNameTable__SystemInitialize(this, kvpSystemTable, table, (const MethodInfo *)key);
    v11 = *kvpSystemTable;
    if ( !*kvpSystemTable )
      sub_B5D69C(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2F289BC *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__);
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