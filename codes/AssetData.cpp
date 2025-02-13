void __fastcall AssetData___cctor(const MethodInfo *method)
{
  if ( (byte_4BDB594 & 1) == 0 )
  {
    sub_1C21E38(&AssetData_TypeInfo);
    byte_4BDB594 = 1;
  }
  *AssetData_TypeInfo->static_fields = *(struct AssetData_StaticFields *)asc_BFCB30;
}


void __fastcall AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  int64_t v7; // x2
  int32_t v8; // w3
  System_String_o *v9; // x4
  BattleSetupInfo_o *v10; // x5
  FollowerInfo_o *v11; // x6
  PartyListViewItem_o *v12; // x7
  void *v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct System_String_o **p_keyType; // x19
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BDB58A & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB58A = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
  this->fields.name = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.attrib, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0LL;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0LL;
  *(p_keyType - 1) = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)p_keyType, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall AssetData___ctor_39008364(
        AssetData_o *this,
        int32_t type,
        System_String_o *name,
        int32_t version,
        System_String_o *attrib,
        int32_t size,
        uint32_t crc,
        System_String_o *keyType,
        const MethodInfo *method)
{
  AssetData_o *v16; // x26
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16->fields.type = type;
  v16->fields.name = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.name, (int64_t)name, v17, v18, v19, v20, v21, v22);
  v16->fields.attrib = attrib;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->fields.attrib, (int64_t)attrib, v23, v24, v25, v26, v27, v28);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  LODWORD(v16[-1].fields.objectList) = version;
  HIDWORD(v16[-1].fields.objectList) = version;
  *(_DWORD *)&v16[-1].fields.isLoadResources = size;
  v16[-1].fields.entryCount = crc;
  sub_1C21DDC((PartyOrganizationUtility_o *)v16, (int64_t)keyType, v29, v30, v31, v32, v33, v34);
}


void __fastcall AssetData___ctor_39008504(
        AssetData_o *this,
        int32_t type,
        System_String_o *name,
        int32_t nowVersion,
        int32_t newVersion,
        System_String_o *attrib,
        int32_t size,
        uint32_t crc,
        System_String_o *keyType,
        const MethodInfo *method)
{
  AssetData_o *v17; // x27
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  int64_t v30; // x2
  int32_t v31; // w3
  System_String_o *v32; // x4
  BattleSetupInfo_o *v33; // x5
  FollowerInfo_o *v34; // x6
  PartyListViewItem_o *v35; // x7

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v17->fields.name, (int64_t)name, v18, v19, v20, v21, v22, v23);
  v17->fields.attrib = attrib;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v17->fields.attrib, (int64_t)attrib, v24, v25, v26, v27, v28, v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  LODWORD(v17[-1].fields.objectList) = nowVersion;
  HIDWORD(v17[-1].fields.objectList) = newVersion;
  *(_DWORD *)&v17[-1].fields.isLoadResources = size;
  v17[-1].fields.entryCount = crc;
  sub_1C21DDC((PartyOrganizationUtility_o *)v17, (int64_t)keyType, v30, v31, v32, v33, v34, v35);
}


void __fastcall AssetData__AddEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8

  entryCount = this->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    this->fields.entryCount = entryCount + 1;
}


System_String_o *__fastcall AssetData__GetBaseName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *IndexOf; // x0
  __int64 v5; // x1
  int v6; // w20
  struct System_String_o *v7; // x8
  int32_t v8; // w2

  name = this->fields.name;
  if ( name )
  {
    IndexOf = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0LL);
    if ( !this->fields.name )
      goto LABEL_13;
    v6 = (int)IndexOf;
    IndexOf = (System_String_o *)System_String__LastIndexOf(this->fields.name, 0x2Eu, 0LL);
    if ( v6 >= 0 )
      v5 = (unsigned int)(v6 + 1);
    else
      v5 = 0LL;
    if ( ((unsigned int)IndexOf & 0x80000000) != 0 )
    {
      v7 = this->fields.name;
      if ( !v7 )
        goto LABEL_13;
      LODWORD(IndexOf) = v7->fields._stringLength;
    }
    v8 = (_DWORD)IndexOf - v5;
    if ( (int)IndexOf > (int)v5 )
    {
      IndexOf = this->fields.name;
      if ( IndexOf )
        return System_String__Substring_63134480(IndexOf, v5, v8, 0LL);
LABEL_13:
      sub_1C22094(IndexOf, v5);
    }
  }
  return 0LL;
}


System_String_o *__fastcall AssetData__GetDecryptObjectText(
        AssetData_o *this,
        System_String_o *name,
        System_String_o *key,
        const MethodInfo *method)
{
  AssetData_o *v6; // x21
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v8; // x10
  __int64 v9; // x23
  UnityEngine_TextAsset_o *v10; // x21
  UnityEngine_TextAsset_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v13; // x11
  __int64 v14; // x11
  __int64 v15; // x10
  UnityEngine_TextAsset_o **i; // x11
  UnityEngine_TextAsset_o *v17; // x0
  UnityEngine_TextAsset_c *v18; // x12
  __int64 v19; // x14
  unsigned int v20; // w13
  __int64 v21; // x14
  System_String_o *monitor; // x20
  CatAndMouseGame_c *v24; // x0

  v6 = this;
  if ( (byte_4BDB592 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    sub_1C21E38(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C21E38(&UnityEngine_TextAsset_TypeInfo);
    byte_4BDB592 = 1;
  }
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0LL;
  v8 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v8 >= 1 )
    {
      v9 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)v8 )
          sub_1C2209C(this, name);
        v10 = (UnityEngine_TextAsset_o *)objectList->m_Items[v9];
        if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0LL)) == 0LL )
          sub_1C22094(this, name);
        this = (AssetData_o *)System_String__Equals_63123792((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = v10->klass;
          methodPtr_low = LOBYTE(v10->klass->vtable._0_Equals.methodPtr);
          v13 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v13
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[v13 - 1] == UnityEngine_TextAsset_TypeInfo )
          {
            v17 = v10;
            goto LABEL_28;
          }
          v14 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v14
            && (DataAsset_c *)klass->_2.typeHierarchy[v14 - 1] == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(v8) = objectList->max_length;
        if ( (int)++v9 >= (int)v8 )
          return 0LL;
      }
      monitor = (System_String_o *)v10[1].monitor;
      v24 = CatAndMouseGame_TypeInfo;
      if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
        return CatAndMouseGame__MouseGame3_39605464(monitor, key, 0LL);
      goto LABEL_34;
    }
    return 0LL;
  }
  if ( !v8 || (int)v8 < 1 )
    return 0LL;
  v15 = (unsigned int)*(_QWORD *)&objectList->max_length;
  for ( i = (UnityEngine_TextAsset_o **)objectList->m_Items; ; ++i )
  {
    v17 = *i;
    if ( *i )
    {
      v18 = v17->klass;
      v19 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
      v20 = LOBYTE(v17->klass->vtable._0_Equals.methodPtr);
      if ( v20 >= (unsigned int)v19
        && (UnityEngine_TextAsset_c *)v18->_2.typeHierarchy[v19 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
LABEL_28:
        monitor = UnityEngine_TextAsset__get_text(v17, 0LL);
        goto LABEL_32;
      }
      v21 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
      if ( v20 >= (unsigned int)v21 && (DataAsset_c *)v18->_2.typeHierarchy[v21 - 1] == DataAsset_TypeInfo )
        break;
    }
    if ( !--v15 )
      return 0LL;
  }
  monitor = (System_String_o *)v17[1].monitor;
LABEL_32:
  if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
    return CatAndMouseGame__MouseGame3_39605464(monitor, key, 0LL);
  v24 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v24);
  return CatAndMouseGame__MouseGame3_39605464(monitor, key, 0LL);
}


System_String_o *__fastcall AssetData__GetExt(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 IndexOf; // x0
  __int64 v5; // x1
  struct System_String_o *v6; // x8

  name = this->fields.name;
  if ( !name )
    return 0LL;
  IndexOf = System_String__LastIndexOf(name, 0x2Eu, 0LL);
  if ( (IndexOf & 0x80000000) != 0 )
    return 0LL;
  v6 = this->fields.name;
  if ( !v6 )
    sub_1C22094(IndexOf, v5);
  if ( v6->fields._stringLength <= (int)IndexOf )
    return 0LL;
  else
    return System_String__Substring(this->fields.name, (int)IndexOf + 1, 0LL);
}


UnityEngine_Networking_UnityWebRequest_o *__fastcall AssetData__GetLoadRequest(
        AssetData_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  System_String_o *Ext; // x20
  NetworkManager_c *v6; // x8
  System_String_o *FILE_URL_SCHEME; // x19
  System_String_o *Path; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x19
  uint32_t v11; // w0
  int32_t v12; // w1
  System_String_o *Key; // x1
  __int64 *v14; // x8
  __int64 *v15; // x8

  if ( (byte_4BDB58C & 1) == 0 )
  {
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&StringLiteral_24542/*"txt"*/);
    sub_1C21E38(&StringLiteral_22974/*"png"*/);
    sub_1C21E38(&StringLiteral_21332/*"jpeg"*/);
    sub_1C21E38(&StringLiteral_20338/*"htm"*/);
    sub_1C21E38(&StringLiteral_17981/*"bytes"*/);
    sub_1C21E38(&StringLiteral_21333/*"jpg"*/);
    sub_1C21E38(&StringLiteral_25105/*"wav"*/);
    sub_1C21E38(&StringLiteral_25265/*"xml"*/);
    sub_1C21E38(&StringLiteral_24918/*"usm"*/);
    sub_1C21E38(&StringLiteral_22628/*"ogg"*/);
    sub_1C21E38(&StringLiteral_20339/*"html"*/);
    byte_4BDB58C = 1;
  }
  if ( this->fields.type )
    return 0LL;
  Ext = AssetData__GetExt(this, method);
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v6->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v4);
  v10 = System_String__Concat_63115476(FILE_URL_SCHEME, Path, 0LL);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v9);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v10, Key, 0LL);
  }
  v11 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
  if ( v11 <= 0x6835C29C )
  {
    if ( v11 <= 0x13E2BD39 )
    {
      if ( v11 != 126868124 )
      {
        if ( v11 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_25105/*"wav"*/, 0LL) )
        {
          v12 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0LL);
        }
        return 0LL;
      }
      v15 = &StringLiteral_20338/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v11 )
    {
      case 0x4F91B85Cu:
        v15 = &StringLiteral_24918/*"usm"*/;
        break;
      case 0x65B1D004u:
        v15 = &StringLiteral_17981/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v14 = &StringLiteral_22974/*"png"*/;
        goto LABEL_33;
      default:
        return 0LL;
    }
LABEL_39:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v15, 0LL) )
      return 0LL;
    return UnityEngine_Networking_UnityWebRequest__Get(v10, 0LL);
  }
  if ( v11 <= 0xCC3CFC94 )
  {
    if ( v11 != -1523209745 )
    {
      if ( v11 != -1092644061 )
      {
        if ( v11 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22628/*"ogg"*/, 0LL) )
        {
          v12 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0LL);
        }
        return 0LL;
      }
      v14 = &StringLiteral_21332/*"jpeg"*/;
      goto LABEL_33;
    }
    v15 = &StringLiteral_24542/*"txt"*/;
    goto LABEL_39;
  }
  if ( v11 == -680155184 )
  {
    v15 = &StringLiteral_20339/*"html"*/;
    goto LABEL_39;
  }
  if ( v11 == -630165834 )
  {
    v15 = &StringLiteral_25265/*"xml"*/;
    goto LABEL_39;
  }
  if ( v11 != -624468176 )
    return 0LL;
  v14 = &StringLiteral_21333/*"jpg"*/;
LABEL_33:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v14, 0LL) )
    return 0LL;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v10, 0LL);
}


UnityEngine_Object_o *__fastcall AssetData__GetObject(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x8
  __int64 v3; // x9

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0LL;
  v3 = *(_QWORD *)&objectList->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
    sub_1C2209C(this, method);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *__fastcall AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *__fastcall AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_2F92080 *method)
{
  long double v2; // q0
  const MethodInfo_2F92080 *v3; // x19
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x23
  __int64 v6; // x8
  unsigned __int64 v7; // x24
  unsigned int v8; // w21
  UnityEngine_Object_o *v9; // x22
  __int64 _0_T; // x1
  __int64 _1_T; // x0
  long double v12; // q0
  struct UnityEngine_Object_array *v13; // x23
  __int64 v14; // x8
  System_Object_array *v15; // x20
  il2cpp_array_size_t v16; // w26
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v18; // x21
  __int64 v19; // x1
  __int64 v20; // x1
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  long double v27; // q0
  AssetData_o *v28; // x22
  AssetData_o *v29; // x21
  Il2CppClass **v30; // x0
  Il2CppObject **v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x2
  const MethodInfo_2F92268 *v34; // x3

  v3 = method;
  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C73D70(method);
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0LL;
  v6 = *(_QWORD *)&objectList->max_length;
  if ( (int)v6 < 1 )
    return 0LL;
  v7 = 0LL;
  v8 = 0;
  do
  {
    if ( v7 >= (unsigned int)v6 )
LABEL_37:
      sub_1C2209C(this, method);
    v9 = objectList->m_Items[v7];
    _0_T = (__int64)v3->rgctx_data->_0_T;
    if ( (*(_BYTE *)(_0_T + 309) & 1) == 0 )
      _0_T = sub_1C73D14(v2);
    this = (AssetData_o *)sub_1C21F74(v9, _0_T);
    LODWORD(v6) = objectList->max_length;
    ++v7;
    if ( this )
      ++v8;
  }
  while ( (__int64)v7 < (int)v6 );
  if ( !v8 )
    return 0LL;
  _1_T = (__int64)v3->rgctx_data->_1_T__;
  if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_1C73D14(v2);
  this = (AssetData_o *)sub_1C21EE0(_1_T, v8);
  v13 = v4->fields.objectList;
  if ( !v13 )
LABEL_38:
    sub_1C22094(this, method);
  v14 = *(_QWORD *)&v13->max_length;
  v15 = (System_Object_array *)this;
  if ( (int)v14 >= 1 )
  {
    v16 = 0;
    for ( i = 0LL; (__int64)i < (int)v14; ++i )
    {
      if ( i >= (unsigned int)v14 )
        goto LABEL_37;
      v18 = v13->m_Items[i];
      v19 = (__int64)v3->rgctx_data->_0_T;
      if ( (*(_BYTE *)(v19 + 309) & 1) == 0 )
        v19 = sub_1C73D14(v12);
      this = (AssetData_o *)sub_1C21F74(v18, v19);
      if ( this )
      {
        if ( !v15 )
          goto LABEL_38;
        v20 = (__int64)v3->rgctx_data->_0_T;
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1C73D14(v12);
        this = (AssetData_o *)sub_1C21F74(v18, v20);
        v28 = this;
        v29 = (AssetData_o *)v3->rgctx_data->_0_T;
        if ( (v29[3].fields.newVersion & 0x100) == 0 )
        {
          this = (AssetData_o *)sub_1C73D14(v27);
          v29 = this;
        }
        if ( v28 )
        {
          this = (AssetData_o *)sub_1C21F74(v28, v29);
          method = (const MethodInfo_2F92080 *)this;
          if ( !this )
          {
            sub_1C22354(v28);
            return (System_Object_array *)AssetManager__TryGetAssetObject_object_(v31, v32, v33, v34);
          }
        }
        else
        {
          method = 0LL;
        }
        if ( v16 >= v15->max_length )
          goto LABEL_37;
        v30 = &v15->obj.klass + (int)v16;
        v30[4] = (Il2CppClass *)method;
        sub_1C21DDC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)method, v21, v22, v23, v24, v25, v26);
        ++v16;
      }
      LODWORD(v14) = v13->max_length;
    }
  }
  return v15;
}


System_String_array *__fastcall AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  UnityEngine_Object_o *name; // x0
  __int64 v5; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v8; // x21
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  int64_t v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4BDB591 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BDB591 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C2209C(name, v5);
        name = objectList->m_Items[v8];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v18 = (int64_t)name;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)name,
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v19 + 4), v18, v9, v10, v11, v12, v13, v14);
        }
        max_length = objectList->max_length;
        if ( (int)++v8 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1C22094(name, v5);
    }
  }
  if ( !v3 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AssetData__GetObjectText(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v6; // x10
  __int64 v7; // x22
  System_String_o **v8; // x20
  System_String_o *v9; // x8
  unsigned int stringLength_low; // w9
  __int64 methodPtr_low; // x11
  __int64 v12; // x11
  System_String_o *result; // x0
  __int64 v14; // x10
  System_String_o ***i; // x11
  System_String_o **v16; // x0
  System_String_o *v17; // x12
  __int64 v18; // x14
  unsigned int v19; // w13
  __int64 v20; // x14

  v4 = this;
  if ( (byte_4BDB593 & 1) == 0 )
  {
    sub_1C21E38(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C21E38(&UnityEngine_TextAsset_TypeInfo);
    byte_4BDB593 = 1;
  }
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0LL;
  v6 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= (unsigned int)v6 )
          sub_1C2209C(this, name);
        v8 = (System_String_o **)objectList->m_Items[v7];
        if ( !v8 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v7], 0LL)) == 0LL )
          sub_1C22094(this, name);
        this = (AssetData_o *)System_String__Equals_63123792((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v9 = *v8;
          stringLength_low = LOBYTE((*v8)[12].fields._stringLength);
          methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)methodPtr_low
            && *((UnityEngine_TextAsset_c **)v9[8].monitor + methodPtr_low - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v16 = v8;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0LL);
          }
          v12 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)v12 && *((DataAsset_c **)v9[8].monitor + v12 - 1) == DataAsset_TypeInfo )
            break;
        }
        LODWORD(v6) = objectList->max_length;
        if ( (int)++v7 >= (int)v6 )
          return 0LL;
      }
      return v8[4];
    }
    return 0LL;
  }
  result = 0LL;
  if ( v6 && (int)v6 >= 1 )
  {
    v14 = (unsigned int)*(_QWORD *)&objectList->max_length;
    for ( i = (System_String_o ***)objectList->m_Items; ; ++i )
    {
      v16 = *i;
      if ( *i )
      {
        v17 = *v16;
        v18 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
        v19 = LOBYTE((*v16)[12].fields._stringLength);
        if ( v19 >= (unsigned int)v18
          && *((UnityEngine_TextAsset_c **)v17[8].monitor + v18 - 1) == UnityEngine_TextAsset_TypeInfo )
        {
          return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0LL);
        }
        v20 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
        if ( v19 >= (unsigned int)v20 && *((DataAsset_c **)v17[8].monitor + v20 - 1) == DataAsset_TypeInfo )
          break;
      }
      if ( !--v14 )
        return 0LL;
    }
    return v16[4];
  }
  return result;
}


UnityEngine_Object_o *__fastcall AssetData__GetObject_39013000(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v4; // x8
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0LL;
  v4 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v4 >= 1 )
    {
      v6 = 0LL;
      while ( (unsigned int)v6 < (unsigned int)v4 )
      {
        v7 = objectList->m_Items[v6];
        if ( !v7 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v6], 0LL)) == 0LL )
          sub_1C22094(this, name);
        this = (AssetData_o *)System_String__Equals_63123792((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(v4) = objectList->max_length;
        if ( (int)++v6 >= (int)v4 )
          return 0LL;
      }
LABEL_17:
      sub_1C2209C(this, name);
    }
    return 0LL;
  }
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *__fastcall AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_2F91DC0 *method)
{
  long double v2; // q0
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20
  Il2CppClass *_0_T; // x1
  Il2CppClass *v10; // x1
  __int64 v11; // x20
  long double v12; // q0
  Il2CppClass *v13; // x19
  Il2CppObject *result; // x0

  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C73D70(method);
  objectList = v4->fields.objectList;
  if ( objectList )
  {
    v6 = *(_QWORD *)&objectList->max_length;
    if ( (int)v6 >= 1 )
    {
      v7 = 0LL;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)v6 )
          sub_1C2209C(this, method);
        v8 = objectList->m_Items[v7];
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C73D14(v2);
        this = (AssetData_o *)sub_1C21F74(v8, _0_T);
        if ( this )
          break;
        LODWORD(v6) = objectList->max_length;
        if ( (__int64)++v7 >= (int)v6 )
          return 0LL;
      }
      v10 = method->rgctx_data->_0_T;
      if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
        v10 = (Il2CppClass *)sub_1C73D14(v2);
      v11 = sub_1C21F74(v8, v10);
      v13 = method->rgctx_data->_0_T;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C73D14(v12);
      if ( v11 )
      {
        result = (Il2CppObject *)sub_1C21F74(v11, v13);
        if ( result )
          return result;
        sub_1C22354(v11);
      }
    }
  }
  return 0LL;
}


Il2CppObject *__fastcall AssetData__GetObject_object__49880776(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_2F91EC8 *method)
{
  long double v3; // q0
  AssetData_o *v6; // x21
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v8; // x8
  __int64 v9; // x23
  UnityEngine_Object_o *v10; // x21
  long double v11; // q0
  Il2CppClass *_0_T; // x1
  long double v13; // q0
  unsigned __int64 v14; // x21
  UnityEngine_Object_o *v15; // x20
  Il2CppClass *v16; // x1
  Il2CppClass *v17; // x1
  UnityEngine_Object_o *v18; // x0
  __int64 v19; // x20
  long double v20; // q0
  Il2CppClass *v21; // x19
  Il2CppObject *result; // x0

  v6 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C73D70(method);
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0LL;
  v8 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v8 < 1 )
      return 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)v8 )
        goto LABEL_38;
      v10 = objectList->m_Items[v9];
      if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0LL)) == 0LL )
        sub_1C22094(this, name);
      this = (AssetData_o *)System_String__Equals_63123792((System_String_o *)this, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C73D14(v11);
        this = (AssetData_o *)sub_1C21F74(v10, _0_T);
        if ( this )
          break;
      }
      LODWORD(v8) = objectList->max_length;
      if ( (int)++v9 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C73D14(v13);
    v18 = v10;
  }
  else
  {
    if ( (int)v8 < 1 )
      return 0LL;
    v14 = 0LL;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)v8 )
LABEL_38:
        sub_1C2209C(this, name);
      v15 = objectList->m_Items[v14];
      v16 = method->rgctx_data->_0_T;
      if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C73D14(v3);
      this = (AssetData_o *)sub_1C21F74(v15, v16);
      if ( this )
        break;
      LODWORD(v8) = objectList->max_length;
      if ( (__int64)++v14 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C73D14(v3);
    v18 = v15;
  }
  v19 = sub_1C21F74(v18, v17);
  v21 = method->rgctx_data->_0_T;
  if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
    v21 = (Il2CppClass *)sub_1C73D14(v20);
  if ( v19 )
  {
    result = (Il2CppObject *)sub_1C21F74(v19, v21);
    if ( result )
      return result;
    sub_1C22354(v19);
  }
  return 0LL;
}


bool __fastcall AssetData__IsDownloadOldVersion(AssetData_o *this, const MethodInfo *method)
{
  int32_t nowVersion; // w8

  nowVersion = this->fields.nowVersion;
  return nowVersion >= 1 && nowVersion != this->fields.newVersion;
}


bool __fastcall AssetData__IsNeedUpdateVersion(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.nowVersion != this->fields.newVersion;
}


bool __fastcall AssetData__IsSame(AssetData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1C22094(0LL, name);
  return System_String__Equals_63123792(v3, name, 0LL);
}


bool __fastcall AssetData__IsSame_39008676(
        AssetData_o *this,
        int32_t type,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( this->fields.type != type )
    return 0;
  v4 = this->fields.name;
  if ( !v4 )
    sub_1C22094(0LL, type);
  return System_String__Equals_63123792(v4, name, 0LL);
}


bool __fastcall AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_objectList; // x0
  struct UnityEngine_Object_array *objectList; // x10
  char isSavedMemoryMode; // w20
  __int64 v12; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v14; // x11
  __int64 methodPtr_low; // x13
  struct UnityEngine_AssetBundle_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7
  int64_t v24; // x2
  int32_t v25; // w3
  System_String_o *v26; // x4
  BattleSetupInfo_o *v27; // x5
  FollowerInfo_o *v28; // x6
  PartyListViewItem_o *v29; // x7
  struct UnityEngine_Object_array *v30; // x24
  __int64 v31; // x8
  unsigned __int64 v32; // x25
  UnityEngine_GameObject_c **v33; // x8
  UnityEngine_Object_o *v34; // x21
  Il2CppObject *Component_object; // x22
  struct FollowerInfo_o *normalFollowerInfo; // x8
  PartyOrganizationUtility_o *v37; // x21
  unsigned __int64 v38; // x29
  UnityEngine_Object_o *v39; // x22
  bool result; // w0

  if ( (byte_4BDB590 & 1) == 0 )
  {
    sub_1C21E38(&DataAsset_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____77697032);
    sub_1C21E38(&UnityEngine_GameObject_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&OptionManager_TypeInfo);
    byte_4BDB590 = 1;
  }
  if ( this->fields.type == 1 )
  {
    p_objectList = (PartyOrganizationUtility_o *)&this->fields.objectList;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      isSavedMemoryMode = 0;
      if ( (int)*(_QWORD *)&objectList->max_length >= 1 )
      {
        v12 = (unsigned int)*(_QWORD *)&objectList->max_length;
        isSavedMemoryMode = 0;
        m_Items = objectList->m_Items;
        do
        {
          v14 = *m_Items;
          if ( *m_Items )
          {
            methodPtr_low = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v14->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
            {
              if ( (DataAsset_c *)v14->klass->_2.typeHierarchy[methodPtr_low - 1] != DataAsset_TypeInfo )
                v14 = 0LL;
            }
            else
            {
              v14 = 0LL;
            }
          }
          --v12;
          isSavedMemoryMode |= v14 == 0LL;
          ++m_Items;
        }
        while ( v12 );
      }
      p_objectList->klass = 0LL;
      sub_1C21DDC(p_objectList, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_51;
    }
LABEL_53:
    sub_1C22094(p_objectList, method);
  }
  p_assetBundle = &this->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)this->fields.assetBundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Inequality(assetBundle, 0LL, 0LL);
  if ( ((unsigned __int8)p_objectList & 1) != 0 )
  {
    p_objectList = (PartyOrganizationUtility_o *)*p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_53;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)p_objectList, 0, 0LL);
    *p_assetBundle = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.assetBundle, 0LL, v24, v25, v26, v27, v28, v29);
  }
  v30 = this->fields.objectList;
  if ( v30 )
  {
    v31 = *(_QWORD *)&v30->max_length;
    if ( (int)v31 >= 1 )
    {
      v32 = 0LL;
      while ( 1 )
      {
        if ( v32 >= (unsigned int)v31 )
          goto LABEL_52;
        v33 = (UnityEngine_GameObject_c **)v30->m_Items[v32];
        if ( v33 )
        {
          if ( *v33 == UnityEngine_GameObject_TypeInfo )
            v34 = v30->m_Items[v32];
          else
            v34 = 0LL;
        }
        else
        {
          v34 = 0LL;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v34, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v34 )
            goto LABEL_53;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v34,
                               (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Inequality(
                                                         (UnityEngine_Object_o *)Component_object,
                                                         0LL,
                                                         0LL);
          if ( ((unsigned __int8)p_objectList & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_53;
            UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)Component_object, 0LL, 0LL);
          }
          p_objectList = (PartyOrganizationUtility_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                         (UnityEngine_GameObject_o *)v34,
                                                         1,
                                                         (const MethodInfo_30011D4 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____77697032);
          if ( p_objectList )
          {
            normalFollowerInfo = p_objectList->fields._normalFollowerInfo;
            v37 = p_objectList;
            if ( (int)normalFollowerInfo >= 1 )
              break;
          }
        }
LABEL_47:
        LODWORD(v31) = v30->max_length;
        if ( (__int64)++v32 >= (int)v31 )
          goto LABEL_48;
      }
      v38 = 0LL;
      while ( v38 < (unsigned int)normalFollowerInfo )
      {
        v39 = (UnityEngine_Object_o *)*((_QWORD *)&v37->fields._SelectedNormalFollowerClassId_k__BackingField + v38);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v39 )
            goto LABEL_53;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v39, 0LL, 0LL);
        }
        LODWORD(normalFollowerInfo) = v37->fields._normalFollowerInfo;
        if ( (__int64)++v38 >= (int)normalFollowerInfo )
          goto LABEL_47;
      }
LABEL_52:
      sub_1C2209C(p_objectList, method);
    }
  }
LABEL_48:
  this->fields.objectList = 0LL;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectList, 0LL, v18, v19, v20, v21, v22, v23);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
LABEL_51:
  this->fields.entryCount = 0;
  result = isSavedMemoryMode & 1;
  this->fields.isLoadResources = 0;
  return result;
}


bool __fastcall AssetData__RemoveEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_4BDB58E & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB58E = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C22094(0LL, v8);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v9);
  return 1;
}


bool __fastcall AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4BDB58F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4BDB58F = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v5);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v6);
  }
  return entryCount > 0;
}


void __fastcall AssetData__ResetVersion(AssetData_o *this, const MethodInfo *method)
{
  this->fields.nowVersion = 0;
}


System_Collections_IEnumerator_o *__fastcall AssetData__SetAssetBundleData(
        AssetData_o *this,
        UnityEngine_AssetBundle_o *bundle,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v7; // x22
  int64_t v8; // x2
  int32_t v9; // w3
  System_String_o *v10; // x4
  BattleSetupInfo_o *v11; // x5
  FollowerInfo_o *v12; // x6
  PartyListViewItem_o *v13; // x7
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7

  if ( (byte_4BDB58B & 1) == 0 )
  {
    sub_1C21E38(&AssetData__SetAssetBundleData_d__61_TypeInfo);
    byte_4BDB58B = 1;
  }
  v7 = sub_1C22084(AssetData__SetAssetBundleData_d__61_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)bundle, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)resourceNames, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall AssetData__SetData(
        AssetData_o *this,
        UnityEngine_Networking_DownloadHandler_o *handler,
        const MethodInfo *method)
{
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_o *Ext; // x0
  System_String_o *v7; // x22
  uint32_t v8; // w0
  __int64 *v9; // x8
  bool v10; // w0
  DataAsset_o *audioClip; // x22
  __int64 *v12; // x8
  __int64 *v13; // x8
  bool v14; // w0
  bool v15; // w0
  System_Byte_array *data; // x21
  bool v17; // w0
  System_String_o *text; // x21
  UnityEngine_Texture2D_o *texture; // x0
  __int64 v20; // x1
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t format; // w25
  System_Byte_array *v24; // x0
  const MethodInfo *v25; // x1
  int64_t v26; // x0
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  struct UnityEngine_Object_array *v33; // x19
  __int64 v34; // x0
  __int64 v35; // x1
  int64_t v36; // x2
  int32_t v37; // w3
  System_String_o *v38; // x4
  BattleSetupInfo_o *v39; // x5
  FollowerInfo_o *v40; // x6
  PartyListViewItem_o *v41; // x7
  __int64 v42; // x0

  if ( (byte_4BDB58D & 1) == 0 )
  {
    sub_1C21E38(&DataAsset_TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C21E38(&UnityEngine_Object___TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&StringLiteral_24542/*"txt"*/);
    sub_1C21E38(&StringLiteral_22974/*"png"*/);
    sub_1C21E38(&StringLiteral_21332/*"jpeg"*/);
    sub_1C21E38(&StringLiteral_20338/*"htm"*/);
    sub_1C21E38(&StringLiteral_17981/*"bytes"*/);
    sub_1C21E38(&StringLiteral_21333/*"jpg"*/);
    sub_1C21E38(&StringLiteral_25105/*"wav"*/);
    sub_1C21E38(&StringLiteral_25265/*"xml"*/);
    sub_1C21E38(&StringLiteral_22628/*"ogg"*/);
    sub_1C21E38(&StringLiteral_20339/*"html"*/);
    byte_4BDB58D = 1;
  }
  p_objectList = &this->fields.objectList;
  if ( this->fields.objectList )
    goto LABEL_4;
  LOBYTE(Ext) = 0;
  if ( handler )
  {
    if ( !this->fields.type )
    {
      Ext = AssetData__GetExt(this, (const MethodInfo *)handler);
      if ( Ext )
      {
        v7 = Ext;
        v8 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
        if ( v8 > 0xA535A9EF )
        {
          if ( v8 <= 0xCC3CFC94 )
          {
            if ( v8 != -1092644061 )
            {
              if ( v8 == -868418412 )
              {
                v9 = &StringLiteral_22628/*"ogg"*/;
LABEL_18:
                v10 = System_String__op_Equality(v7, (System_String_o *)*v9, 0LL);
                audioClip = 0LL;
                if ( !v10 )
                  goto LABEL_45;
                if ( (UnityEngine_Networking_DownloadHandlerAudioClip_c *)handler->klass == UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo )
                {
                  audioClip = (DataAsset_o *)UnityEngine_Networking_DownloadHandlerAudioClip__get_audioClip(
                                               (UnityEngine_Networking_DownloadHandlerAudioClip_o *)handler,
                                               0LL);
                  goto LABEL_45;
                }
              }
LABEL_33:
              audioClip = 0LL;
              goto LABEL_45;
            }
            v12 = &StringLiteral_21332/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v8 )
          {
            case 0xD775A7D0:
              v13 = &StringLiteral_20339/*"html"*/;
              break;
            case 0xDA706EB6:
              v13 = &StringLiteral_25265/*"xml"*/;
              break;
            case 0xDAC75F30:
              v12 = &StringLiteral_21333/*"jpg"*/;
              goto LABEL_31;
            default:
              goto LABEL_33;
          }
        }
        else
        {
          if ( v8 <= 0x13E2BD39 )
          {
            if ( v8 != 126868124 )
            {
              if ( v8 == 333626681 )
              {
                v9 = &StringLiteral_25105/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v13 = &StringLiteral_20338/*"htm"*/;
            goto LABEL_39;
          }
          if ( v8 != -1523209745 )
          {
            if ( v8 == 1706151940 )
            {
              v15 = System_String__op_Equality(v7, (System_String_o *)StringLiteral_17981/*"bytes"*/, 0LL);
              audioClip = 0LL;
              if ( v15 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
                audioClip = (DataAsset_o *)sub_1C22084(DataAsset_TypeInfo);
                DataAsset___ctor(audioClip, data, 0LL);
              }
              goto LABEL_45;
            }
            if ( v8 != 1748353692 )
              goto LABEL_33;
            v12 = &StringLiteral_22974/*"png"*/;
LABEL_31:
            v14 = System_String__op_Equality(v7, (System_String_o *)*v12, 0LL);
            audioClip = 0LL;
            if ( !v14 )
              goto LABEL_45;
            if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass != UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
              goto LABEL_33;
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                    texture,
                    texture->klass->vtable._5_set_width.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                    texture,
                    texture->klass->vtable._7_set_height.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0LL);
            audioClip = (DataAsset_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
            UnityEngine_Texture2D___ctor_70757788((UnityEngine_Texture2D_o *)audioClip, v21, v22, format, 0, 0LL);
            v24 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
            UnityEngine_ImageConversion__LoadImage_70974788((UnityEngine_Texture2D_o *)audioClip, v24, 0LL);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0LL, 0LL) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v25);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0LL);
              v26 = sub_1C21EE0(UnityEngine_Object___TypeInfo, 1LL);
              *p_objectList = (struct UnityEngine_Object_array *)v26;
              sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.objectList, v26, v27, v28, v29, v30, v31, v32);
              v33 = *p_objectList;
              if ( *p_objectList )
              {
                v34 = sub_1C21F74(audioClip, v33->obj.klass->_1.element_class);
                if ( !v34 )
                {
                  v42 = sub_1C220B8(0LL);
                  sub_1C21F60(v42, 0LL);
                }
                if ( !v33->max_length )
                  sub_1C2209C(v34, v35);
                v33->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1C21DDC(
                  (PartyOrganizationUtility_o *)v33->m_Items,
                  (int64_t)audioClip,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40,
                  v41);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1C22094(texture, v20);
          }
          v13 = &StringLiteral_24542/*"txt"*/;
        }
LABEL_39:
        v17 = System_String__op_Equality(v7, (System_String_o *)*v13, 0LL);
        audioClip = 0LL;
        if ( v17 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0LL);
          audioClip = (DataAsset_o *)sub_1C22084(DataAsset_TypeInfo);
          DataAsset___ctor_39159728(audioClip, text, 0LL);
        }
        goto LABEL_45;
      }
    }
  }
  return (char)Ext;
}


bool __fastcall AssetData__SetResource(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array **p_objectList; // x19
  System_String_o *Path; // x0
  struct UnityEngine_Object_array *All_70831044; // x0
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int64_t v14; // x2
  int32_t v15; // w3
  System_String_o *v16; // x4
  BattleSetupInfo_o *v17; // x5
  FollowerInfo_o *v18; // x6
  PartyListViewItem_o *v19; // x7
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_70831044 = UnityEngine_Resources__LoadAll_70831044(Path, 0LL);
    this->fields.objectList = All_70831044;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_objectList, (int64_t)All_70831044, v6, v7, v8, v9, v10, v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C22094(v12, v13);
    if ( *(_QWORD *)&objectList->max_length )
      return 1;
    *p_objectList = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_objectList, 0LL, v14, v15, v16, v17, v18, v19);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetData__SetUpdateInfo(
        AssetData_o *this,
        int32_t version,
        System_String_o *attrib,
        int32_t size,
        uint32_t crc,
        System_String_o *keyType,
        const MethodInfo *method)
{
  PartyListViewItem_o *v7; // x7
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.attrib,
    (int64_t)attrib,
    (int64_t)attrib,
    size,
    *(System_String_o **)&crc,
    (BattleSetupInfo_o *)keyType,
    (FollowerInfo_o *)method,
    v7);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.keyType, (int64_t)keyType, v13, v14, v15, v16, v17, v18);
  if ( this->fields.crc == crc )
  {
    nowVersion = this->fields.nowVersion;
  }
  else
  {
    nowVersion = 0;
    this->fields.crc = crc;
    this->fields.nowVersion = 0;
  }
  return nowVersion < version;
}


bool __fastcall AssetData__UpdateVersion(AssetData_o *this, const MethodInfo *method)
{
  int32_t newVersion; // w9
  bool v3; // w8

  newVersion = this->fields.newVersion;
  v3 = this->fields.nowVersion != newVersion;
  this->fields.nowVersion = newVersion;
  return v3;
}


System_String_o *__fastcall AssetData__get_Attrib(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.attrib;
}


System_String_o *__fastcall AssetData__get_CacheName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *Ext; // x0
  __int64 v4; // x1
  AssetData_c *v5; // x8
  System_String_o *name; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  const MethodInfo *v11; // x1
  System_String_o *v12; // x19

  if ( (byte_4BDB587 & 1) == 0 )
  {
    sub_1C21E38(&AndroidUtil_TypeInfo);
    sub_1C21E38(&AssetData_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1120/*".unity3d"*/);
    byte_4BDB587 = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v5 = AssetData_TypeInfo;
  name = this->fields.name;
  v7 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v5 = AssetData_TypeInfo;
  }
  if ( !name )
    sub_1C22094(Ext, v4);
  v8 = System_String__Replace(
         name,
         v5->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
         v5->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
         0LL);
  v9 = v8;
  if ( v7 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    return AndroidUtil__ConvertFileNameIfNeed(v9, 0LL);
  }
  else
  {
    v12 = System_String__Concat_63115476(v8, (System_String_o *)StringLiteral_1120/*".unity3d"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__getShaName(v12, v11);
  }
}


uint32_t __fastcall AssetData__get_Crc(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.crc;
}


int32_t __fastcall AssetData__get_DataType(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *__fastcall AssetData__get_DownloadName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *Ext; // x0
  AssetData_c *v4; // x8
  System_String_o *name; // x19
  System_String_o *v6; // x20
  struct AssetData_StaticFields *static_fields; // x8
  __int64 ASSETBUNDLE_SPLIT_BASE_CHAR; // x1
  System_String_o *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x19

  if ( (byte_4BDB586 & 1) == 0 )
  {
    sub_1C21E38(&AssetData_TypeInfo);
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1120/*".unity3d"*/);
    byte_4BDB586 = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v4 = AssetData_TypeInfo;
  name = this->fields.name;
  v6 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v4 = AssetData_TypeInfo;
  }
  static_fields = v4->static_fields;
  ASSETBUNDLE_SPLIT_BASE_CHAR = static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR;
  if ( v6 )
  {
    if ( name )
      return System_String__Replace(
               name,
               ASSETBUNDLE_SPLIT_BASE_CHAR,
               static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR,
               0LL);
LABEL_12:
    sub_1C22094(Ext, ASSETBUNDLE_SPLIT_BASE_CHAR);
  }
  if ( !name )
    goto LABEL_12;
  v10 = System_String__Replace(name, ASSETBUNDLE_SPLIT_BASE_CHAR, static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR, 0LL);
  v12 = System_String__Concat_63115476(v10, (System_String_o *)StringLiteral_1120/*".unity3d"*/, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getShaName(v12, v11);
}


int32_t __fastcall AssetData__get_EntryCount(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.entryCount;
}


bool __fastcall AssetData__get_IsAssetBundle(AssetData_o *this, const MethodInfo *method)
{
  return !this->fields.type && AssetData__GetExt(this, method) == 0LL;
}


bool __fastcall AssetData__get_IsEmpty(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList == 0LL;
}


bool __fastcall AssetData__get_IsLoadResources(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.isLoadResources;
}


System_String_o *__fastcall AssetData__get_Key(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *keyType; // x19

  if ( (byte_4BDB589 & 1) == 0 )
  {
    sub_1C21E38(&CatAndMouseGame_TypeInfo);
    byte_4BDB589 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.keyType, 0LL) )
    return 0LL;
  keyType = this->fields.keyType;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__GetAssetbundleKey(keyType, 0LL);
}


System_String_o *__fastcall AssetData__get_LastName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0

  name = this->fields.name;
  if ( !name )
    goto LABEL_6;
  name = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0LL);
  if ( ((unsigned int)name & 0x80000000) == 0 )
  {
    if ( this->fields.name )
      return System_String__Substring(this->fields.name, (int)name + 1, 0LL);
LABEL_6:
    sub_1C22094(name, method);
  }
  return this->fields.name;
}


System_String_o *__fastcall AssetData__get_Name(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t __fastcall AssetData__get_NowVersion(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.nowVersion;
}


System_String_o *__fastcall AssetData__get_Path(AssetData_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  AssetManager_c *v4; // x0
  System_String_o *cachePathName; // x20
  System_String_o *CacheName; // x1

  if ( (byte_4BDB588 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB588 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4BDB611 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    byte_4BDB611 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  cachePathName = v4->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_63115476(cachePathName, CacheName, 0LL);
}


int32_t __fastcall AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *__fastcall AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  int32_t nowVersion; // w8

  if ( (byte_4BDB585 & 1) == 0 )
  {
    sub_1C21E38(&AssetManager_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BDB585 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( (nowVersion & 0x80000000) != 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_39005812(this, method);
}


void __fastcall AssetData__SetAssetBundleData_d__61___ctor(
        AssetData__SetAssetBundleData_d__61_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall AssetData__SetAssetBundleData_d__61__MoveNext(
        AssetData__SetAssetBundleData_d__61_o *this,
        const MethodInfo *method)
{
  AssetData__SetAssetBundleData_d__61_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *bundle; // x21
  const MethodInfo *v7; // x1
  System_Collections_Generic_List_object__o *v8; // x22
  AssetData__SetAssetBundleData_d__61_o **p_list_5__3; // x21
  int64_t v10; // x2
  int32_t v11; // w3
  System_String_o *v12; // x4
  BattleSetupInfo_o *v13; // x5
  FollowerInfo_o *v14; // x6
  PartyListViewItem_o *v15; // x7
  int64_t v16; // x2
  int32_t v17; // w3
  System_String_o *v18; // x4
  BattleSetupInfo_o *v19; // x5
  FollowerInfo_o *v20; // x6
  PartyListViewItem_o *v21; // x7
  int64_t v22; // x1
  int64_t v23; // x2
  int32_t v24; // w3
  System_String_o *v25; // x4
  BattleSetupInfo_o *v26; // x5
  FollowerInfo_o *v27; // x6
  PartyListViewItem_o *v28; // x7
  int v29; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  int64_t asyncRep_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v48; // x2
  int32_t v49; // w3
  System_String_o *v50; // x4
  BattleSetupInfo_o *v51; // x5
  FollowerInfo_o *v52; // x6
  PartyListViewItem_o *v53; // x7
  bool result; // w0
  PartyOrganizationUtility_o *p_asyncRep_5__2; // x21
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  struct UnityEngine_Object_array **p_objectList; // x20
  int64_t v63; // x2
  int32_t v64; // w3
  System_String_o *v65; // x4
  BattleSetupInfo_o *v66; // x5
  FollowerInfo_o *v67; // x6
  PartyListViewItem_o *v68; // x7
  int64_t v69; // x2
  int32_t v70; // w3
  System_String_o *v71; // x4
  BattleSetupInfo_o *v72; // x5
  FollowerInfo_o *v73; // x6
  PartyListViewItem_o *v74; // x7
  struct UnityEngine_Object_array **v75; // x20
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int64_t v77; // x2
  int32_t v78; // w3
  System_String_o *v79; // x4
  BattleSetupInfo_o *v80; // x5
  FollowerInfo_o *v81; // x6
  PartyListViewItem_o *v82; // x7
  int64_t v83; // x1
  PartyOrganizationUtility_o *v84; // x19
  int64_t v85; // x2
  int32_t v86; // w3
  System_String_o *v87; // x4
  BattleSetupInfo_o *v88; // x5
  FollowerInfo_o *v89; // x6
  PartyListViewItem_o *v90; // x7

  v2 = this;
  if ( (byte_4BDB595 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_Object__AddRange__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_Object__TypeInfo);
    this = (AssetData__SetAssetBundleData_d__61_o *)sub_1C21E38(&UnityEngine_Object_TypeInfo);
    byte_4BDB595 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_40;
    list_5__3 = (System_Collections_Generic_List_object__o *)v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !list_5__3 )
      goto LABEL_40;
    System_Collections_Generic_List_object___AddRange(
      list_5__3,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2, 0LL, v31, v32, v33, v34, v35, v36);
    v29 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v29;
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    p_objectList = &_4__this->fields.objectList;
    sub_1C21DDC((PartyOrganizationUtility_o *)p_objectList, (int64_t)this, v56, v57, v58, v59, v60, v61);
    *((_BYTE *)p_objectList + 8) = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0LL;
    sub_1C21DDC(p_asyncRep_5__2, 0LL, v63, v64, v65, v66, v67, v68);
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
    if ( !this )
      goto LABEL_40;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)this, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  resourceNames = v2->fields.resourceNames;
  v2->fields.__1__state = -1;
  if ( resourceNames )
  {
    if ( !_4__this )
      goto LABEL_40;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_40;
    if ( _4__this->fields.objectList )
      return 0;
  }
  if ( _4__this->fields.type )
    return 0;
  bundle = (UnityEngine_Object_o *)v2->fields.bundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bundle, 0LL, 0LL) || AssetData__GetExt(_4__this, v7) )
    return 0;
  if ( v2->fields.resourceNames )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_Object___ctor__);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v8;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__61_o **)&v2->fields._list_5__3;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields._list_5__3, (int64_t)v8, v10, v11, v12, v13, v14, v15);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_40;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_364F2C0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v22 = (int64_t)v2->fields.resourceNames;
    v2->fields.__7__wrap3 = (struct System_String_array *)v22;
    sub_1C21DDC((PartyOrganizationUtility_o *)&v2->fields.__7__wrap3, v22, v16, v17, v18, v19, v20, v21);
    v29 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__61_o *)&v2->fields.__7__wrap3;
    _7__wrap3 = v2->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_40;
    max_length = _7__wrap3->max_length;
    if ( v29 < max_length )
    {
      if ( v29 >= (unsigned int)max_length )
        sub_1C2209C(this, method);
      this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v29],
                       0LL);
        v2->fields._asyncRep_5__2 = AssetAsync;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2,
          (int64_t)AssetAsync,
          v40,
          v41,
          v42,
          v43,
          v44,
          v45);
        asyncRep_5__2 = (int64_t)v2->fields._asyncRep_5__2;
        v2->fields.__2__current = (Il2CppObject *)asyncRep_5__2;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1C21DDC(p__2__current, asyncRep_5__2, v48, v49, v50, v51, v52, v53);
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
        return 1;
      }
LABEL_40:
      sub_1C22094(this, method);
    }
    v2->fields.__7__wrap3 = 0LL;
    sub_1C21DDC((PartyOrganizationUtility_o *)this, 0LL, v23, v24, v25, v26, v27, v28);
    p_asyncRep_5__2 = (PartyOrganizationUtility_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    v75 = &_4__this->fields.objectList;
    sub_1C21DDC((PartyOrganizationUtility_o *)v75, (int64_t)this, v69, v70, v71, v72, v73, v74);
    *((_BYTE *)v75 + 8) = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_40;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0LL);
  v2->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2,
    (int64_t)AllAssetsAsync,
    v77,
    v78,
    v79,
    v80,
    v81,
    v82);
  v83 = (int64_t)v2->fields._asyncRep_5__2;
  v2->fields.__2__current = (Il2CppObject *)v83;
  v84 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1C21DDC(v84, v83, v85, v86, v87, v88, v89, v90);
  result = 1;
  *(_DWORD *)&v84[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
  return result;
}


Il2CppObject *__fastcall AssetData__SetAssetBundleData_d__61__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetData__SetAssetBundleData_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn AssetData__SetAssetBundleData_d__61__System_Collections_IEnumerator_Reset(
        AssetData__SetAssetBundleData_d__61_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_AssetData__SetAssetBundleData_d__61_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
}


Il2CppObject *__fastcall AssetData__SetAssetBundleData_d__61__System_Collections_IEnumerator_get_Current(
        AssetData__SetAssetBundleData_d__61_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall AssetData__SetAssetBundleData_d__61__System_IDisposable_Dispose(
        AssetData__SetAssetBundleData_d__61_o *this,
        const MethodInfo *method)
{
  ;
}