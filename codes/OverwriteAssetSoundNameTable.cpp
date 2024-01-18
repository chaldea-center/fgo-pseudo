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
  __int64 v10; // x0

  if ( (byte_4185201 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__,
      kvpSystemTable);
    this = (OverwriteAssetSoundNameTable_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__,
                                               v6);
    byte_4185201 = 1;
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
      {
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      v9 = table->m_Items[v8];
      if ( !v9 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
      if ( !*kvpSystemTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                 (System_Xml_XmlQualifiedName_o *)v9->fields.UniqueKey,
                                                 (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpSystemTable;
        if ( !*kvpSystemTable )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)v9->fields.UniqueKey,
          (System_Xml_Schema_XmlSchemaObject_o *)v9,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_B2C434(this, kvpSystemTable);
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
  __int64 v10; // x0

  if ( (byte_4185200 & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__,
      kvpTable);
    this = (OverwriteAssetSoundNameTable_o *)sub_B2C35C(
                                               &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__,
                                               v6);
    byte_4185200 = 1;
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
      {
        v10 = sub_B2C460(this);
        sub_B2C400(v10, 0LL);
      }
      v9 = table->m_Items[v8];
      if ( !v9 )
        break;
      this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
      if ( !*kvpTable )
        break;
      this = (OverwriteAssetSoundNameTable_o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey(
                                                 (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
                                                 (System_Xml_XmlQualifiedName_o *)v9->fields.UniqueKey,
                                                 (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__ContainsKey__);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        this = (OverwriteAssetSoundNameTable_o *)*kvpTable;
        if ( !*kvpTable )
          break;
        System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
          (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)this,
          (System_Xml_XmlQualifiedName_o *)v9->fields.UniqueKey,
          (System_Xml_Schema_XmlSchemaObject_o *)v9,
          (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__Add__);
      }
      max_length = table->max_length;
      if ( (int)++v8 >= max_length )
        return;
    }
LABEL_14:
    sub_B2C434(this, kvpTable);
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
    sub_B2C434(IsNullOrEmpty, v4);
  return playCommonTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlaySystemCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundSystemAssetData_array *playSystemTable; // x8

  playSystemTable = this->fields.playSystemTable;
  if ( !playSystemTable )
    sub_B2C434(this, method);
  return playSystemTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetPlayTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *playTable; // x8

  playTable = this->fields.playTable;
  if ( !playTable )
    sub_B2C434(this, method);
  return playTable->max_length;
}


int32_t __fastcall OverwriteAssetSoundNameTable__GetStopTableCount(
        OverwriteAssetSoundNameTable_o *this,
        const MethodInfo *method)
{
  struct OverwriteAssetSoundNameTable_SoundAssetData_array *stopTable; // x8

  stopTable = this->fields.stopTable;
  if ( !stopTable )
    sub_B2C434(this, method);
  return stopTable->max_length;
}


void __fastcall OverwriteAssetSoundNameTable__Initialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o **kvpTable,
        OverwriteAssetSoundNameTable_SoundAssetData_array *table,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x21
  OverwriteAssetSoundNameTable_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_41851FE & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__,
      kvpTable);
    sub_B2C35C(&System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo, v6);
    byte_41851FE = 1;
  }
  if ( !*kvpTable )
  {
    v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v7,
      (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData___ctor__);
    *kvpTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__o *)v7;
    sub_B2C2F8(kvpTable, v7);
    OverwriteAssetSoundNameTable__AddKvpTable(v8, kvpTable, table, v9);
  }
}


void __fastcall OverwriteAssetSoundNameTable__SystemInitialize(
        OverwriteAssetSoundNameTable_o *this,
        System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o **kvpSystemTable,
        OverwriteAssetSoundNameTable_SoundSystemAssetData_array *table,
        const MethodInfo *method)
{
  __int64 v6; // x1
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v7; // x21
  OverwriteAssetSoundNameTable_o *v8; // x0
  const MethodInfo *v9; // x3

  if ( (byte_41851FF & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__,
      kvpSystemTable);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo,
      v6);
    byte_41851FF = 1;
  }
  if ( !*kvpSystemTable )
  {
    v7 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v7,
      (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData___ctor__);
    *kvpSystemTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__o *)v7;
    sub_B2C2F8(kvpSystemTable, v7);
    OverwriteAssetSoundNameTable__AddKvpSystemTable(v8, kvpSystemTable, table, v9);
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
  System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *v15; // x23
  __int64 v16; // x1
  signed int max_length; // w8
  unsigned int v18; // w24
  OverwriteAssetSoundNameTable_SoundCommonAssetData_o *v19; // x23
  __int64 v21; // x0

  if ( (byte_41851FD & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__,
      kvpCommonTable);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__,
      v10);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__,
      v11);
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__,
      v12);
    sub_B2C35C(
      &System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo,
      v13);
    byte_41851FD = 1;
  }
  v14 = *kvpCommonTable;
  if ( !*kvpCommonTable )
  {
    v15 = (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)sub_B2C42C(System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TypeInfo);
    System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject____ctor(
      v15,
      (const MethodInfo_2DB1110 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData___ctor__);
    *kvpCommonTable = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)v15;
    sub_B2C2F8(kvpCommonTable, v15);
    if ( !table )
      goto LABEL_16;
    max_length = table->max_length;
    if ( max_length >= 1 )
    {
      v18 = 0;
      while ( 1 )
      {
        if ( v18 >= max_length )
        {
          v21 = sub_B2C460(v14);
          sub_B2C400(v21, 0LL);
        }
        v19 = table->m_Items[v18];
        if ( !v19 )
          break;
        v14 = *kvpCommonTable;
        if ( !*kvpCommonTable )
          break;
        v14 = (System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__o *)System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___ContainsKey((System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14, (System_Xml_XmlQualifiedName_o *)v19->fields.UniqueKey, (const MethodInfo_2DB1F34 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__ContainsKey__);
        if ( ((unsigned __int8)v14 & 1) == 0 )
        {
          v14 = *kvpCommonTable;
          if ( !*kvpCommonTable )
            break;
          System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___Add(
            (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14,
            (System_Xml_XmlQualifiedName_o *)v19->fields.UniqueKey,
            (System_Xml_Schema_XmlSchemaObject_o *)v19,
            (const MethodInfo_2DB1CC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__Add__);
        }
        max_length = table->max_length;
        if ( (int)++v18 >= max_length )
          goto LABEL_14;
      }
LABEL_16:
      sub_B2C434(v14, v16);
    }
LABEL_14:
    v14 = *kvpCommonTable;
    if ( !*kvpCommonTable )
      goto LABEL_16;
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v14,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundCommonAssetData__TryGetValue__);
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

  if ( (byte_41851FB & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__,
      kvpTable);
    byte_41851FB = 1;
  }
  v11 = *kvpTable;
  if ( !*kvpTable )
  {
    OverwriteAssetSoundNameTable__Initialize(this, kvpTable, table, (const MethodInfo *)key);
    v11 = *kvpTable;
    if ( !*kvpTable )
      sub_B2C434(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundAssetData__TryGetValue__);
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

  if ( (byte_41851FC & 1) == 0 )
  {
    sub_B2C35C(
      &Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__,
      kvpSystemTable);
    byte_41851FC = 1;
  }
  v11 = *kvpSystemTable;
  if ( !*kvpSystemTable )
  {
    OverwriteAssetSoundNameTable__SystemInitialize(this, kvpSystemTable, table, (const MethodInfo *)key);
    v11 = *kvpSystemTable;
    if ( !*kvpSystemTable )
      sub_B2C434(0LL, v12);
  }
  return System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject___TryGetValue(
           (System_Collections_Generic_Dictionary_XmlQualifiedName__XmlSchemaObject__o *)v11,
           (System_Xml_XmlQualifiedName_o *)key,
           (System_Xml_Schema_XmlSchemaObject_o **)data,
           (const MethodInfo_2DB3AC0 *)Method_System_Collections_Generic_Dictionary_string__OverwriteAssetSoundNameTable_SoundSystemAssetData__TryGetValue__);
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