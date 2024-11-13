void __fastcall AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B1525E & 1) == 0 )
  {
    sub_1BCA7E0(&AssetData_TypeInfo, v1, v2);
    byte_4B1525E = 1;
  }
  *AssetData_TypeInfo->static_fields = *(struct AssetData_StaticFields *)asc_BD11A8;
}


// local variable allocation has failed, the output may be wrong!
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

  if ( (byte_4B15254 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, *(_QWORD *)&type, name);
    byte_4B15254 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
  this->fields.name = name;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.attrib, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0LL;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0LL;
  *(p_keyType - 1) = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)p_keyType, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall AssetData___ctor_38479196(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.name, (int64_t)name, v17, v18, v19, v20, v21, v22);
  v16->fields.attrib = attrib;
  sub_1BCA784((PartyOrganizationUtility_o *)&v16->fields.attrib, (int64_t)attrib, v23, v24, v25, v26, v27, v28);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  LODWORD(v16[-1].fields.objectList) = version;
  HIDWORD(v16[-1].fields.objectList) = version;
  *(_DWORD *)&v16[-1].fields.isLoadResources = size;
  v16[-1].fields.entryCount = crc;
  sub_1BCA784((PartyOrganizationUtility_o *)v16, (int64_t)keyType, v29, v30, v31, v32, v33, v34);
}


void __fastcall AssetData___ctor_38479336(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.name, (int64_t)name, v18, v19, v20, v21, v22, v23);
  v17->fields.attrib = attrib;
  sub_1BCA784((PartyOrganizationUtility_o *)&v17->fields.attrib, (int64_t)attrib, v24, v25, v26, v27, v28, v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  LODWORD(v17[-1].fields.objectList) = nowVersion;
  HIDWORD(v17[-1].fields.objectList) = newVersion;
  *(_DWORD *)&v17[-1].fields.isLoadResources = size;
  v17[-1].fields.entryCount = crc;
  sub_1BCA784((PartyOrganizationUtility_o *)v17, (int64_t)keyType, v30, v31, v32, v33, v34, v35);
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
        return System_String__Substring_62420224(IndexOf, v5, v8, 0LL);
LABEL_13:
      sub_1BCAA3C(IndexOf, v5);
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
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v12; // x10
  __int64 v13; // x23
  UnityEngine_TextAsset_o *v14; // x21
  UnityEngine_TextAsset_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v17; // x11
  __int64 v18; // x11
  __int64 v19; // x10
  UnityEngine_TextAsset_o **i; // x11
  UnityEngine_TextAsset_o *v21; // x0
  UnityEngine_TextAsset_c *v22; // x12
  __int64 v23; // x14
  unsigned int v24; // w13
  __int64 v25; // x14
  System_String_o *monitor; // x20
  CatAndMouseGame_c *v28; // x0

  v6 = this;
  if ( (byte_4B1525C & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, name, key);
    sub_1BCA7E0(&DataAsset_TypeInfo, v7, v8);
    this = (AssetData_o *)sub_1BCA7E0(&UnityEngine_TextAsset_TypeInfo, v9, v10);
    byte_4B1525C = 1;
  }
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0LL;
  v12 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v12 >= 1 )
    {
      v13 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v13 >= (unsigned int)v12 )
          sub_1BCAA44(this, name);
        v14 = (UnityEngine_TextAsset_o *)objectList->m_Items[v13];
        if ( !v14 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v13], 0LL)) == 0LL )
          sub_1BCAA3C(this, name);
        this = (AssetData_o *)System_String__Equals_62409536((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = v14->klass;
          methodPtr_low = LOBYTE(v14->klass->vtable._0_Equals.methodPtr);
          v17 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v17
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[v17 - 1] == UnityEngine_TextAsset_TypeInfo )
          {
            v21 = v14;
            goto LABEL_28;
          }
          v18 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v18
            && (DataAsset_c *)klass->_2.typeHierarchy[v18 - 1] == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(v12) = objectList->max_length;
        if ( (int)++v13 >= (int)v12 )
          return 0LL;
      }
      monitor = (System_String_o *)v14[1].monitor;
      v28 = CatAndMouseGame_TypeInfo;
      if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
        return CatAndMouseGame__MouseGame3_39071320(monitor, key, 0LL);
      goto LABEL_34;
    }
    return 0LL;
  }
  if ( !v12 || (int)v12 < 1 )
    return 0LL;
  v19 = (unsigned int)*(_QWORD *)&objectList->max_length;
  for ( i = (UnityEngine_TextAsset_o **)objectList->m_Items; ; ++i )
  {
    v21 = *i;
    if ( *i )
    {
      v22 = v21->klass;
      v23 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
      v24 = LOBYTE(v21->klass->vtable._0_Equals.methodPtr);
      if ( v24 >= (unsigned int)v23
        && (UnityEngine_TextAsset_c *)v22->_2.typeHierarchy[v23 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
LABEL_28:
        monitor = UnityEngine_TextAsset__get_text(v21, 0LL);
        goto LABEL_32;
      }
      v25 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
      if ( v24 >= (unsigned int)v25 && (DataAsset_c *)v22->_2.typeHierarchy[v25 - 1] == DataAsset_TypeInfo )
        break;
    }
    if ( !--v19 )
      return 0LL;
  }
  monitor = (System_String_o *)v21[1].monitor;
LABEL_32:
  if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
    return CatAndMouseGame__MouseGame3_39071320(monitor, key, 0LL);
  v28 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v28, name);
  return CatAndMouseGame__MouseGame3_39071320(monitor, key, 0LL);
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
    sub_1BCAA3C(IndexOf, v5);
  if ( v6->fields._stringLength <= (int)IndexOf )
    return 0LL;
  else
    return System_String__Substring(this->fields.name, (int)IndexOf + 1, 0LL);
}


UnityEngine_Networking_UnityWebRequest_o *__fastcall AssetData__GetLoadRequest(
        AssetData_o *this,
        const MethodInfo *method)
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
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  const MethodInfo *v27; // x1
  System_String_o *Ext; // x20
  NetworkManager_c *v29; // x8
  System_String_o *FILE_URL_SCHEME; // x19
  System_String_o *Path; // x0
  const MethodInfo *v32; // x1
  System_String_o *v33; // x19
  uint32_t v34; // w0
  int32_t v35; // w1
  System_String_o *Key; // x1
  __int64 *v37; // x8
  __int64 *v38; // x8

  if ( (byte_4B15256 & 1) == 0 )
  {
    sub_1BCA7E0(&NetworkManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_24360/*"txt"*/, v4, v5);
    sub_1BCA7E0(&StringLiteral_22805/*"png"*/, v6, v7);
    sub_1BCA7E0(&StringLiteral_21181/*"jpeg"*/, v8, v9);
    sub_1BCA7E0(&StringLiteral_20197/*"htm"*/, v10, v11);
    sub_1BCA7E0(&StringLiteral_17862/*"bytes"*/, v12, v13);
    sub_1BCA7E0(&StringLiteral_21182/*"jpg"*/, v14, v15);
    sub_1BCA7E0(&StringLiteral_24918/*"wav"*/, v16, v17);
    sub_1BCA7E0(&StringLiteral_25077/*"xml"*/, v18, v19);
    sub_1BCA7E0(&StringLiteral_24731/*"usm"*/, v20, v21);
    sub_1BCA7E0(&StringLiteral_22461/*"ogg"*/, v22, v23);
    sub_1BCA7E0(&StringLiteral_20198/*"html"*/, v24, v25);
    byte_4B15256 = 1;
  }
  if ( this->fields.type )
    return 0LL;
  Ext = AssetData__GetExt(this, method);
  v29 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v27);
    v29 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v29->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v27);
  v33 = System_String__Concat_62401220(FILE_URL_SCHEME, Path, 0LL);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v32);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v33, Key, 0LL);
  }
  v34 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
  if ( v34 <= 0x6835C29C )
  {
    if ( v34 <= 0x13E2BD39 )
    {
      if ( v34 != 126868124 )
      {
        if ( v34 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_24918/*"wav"*/, 0LL) )
        {
          v35 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v33, v35, 0LL);
        }
        return 0LL;
      }
      v38 = &StringLiteral_20197/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v34 )
    {
      case 0x4F91B85Cu:
        v38 = &StringLiteral_24731/*"usm"*/;
        break;
      case 0x65B1D004u:
        v38 = &StringLiteral_17862/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v37 = &StringLiteral_22805/*"png"*/;
        goto LABEL_33;
      default:
        return 0LL;
    }
LABEL_39:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v38, 0LL) )
      return 0LL;
    return UnityEngine_Networking_UnityWebRequest__Get(v33, 0LL);
  }
  if ( v34 <= 0xCC3CFC94 )
  {
    if ( v34 != -1523209745 )
    {
      if ( v34 != -1092644061 )
      {
        if ( v34 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22461/*"ogg"*/, 0LL) )
        {
          v35 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v33, v35, 0LL);
        }
        return 0LL;
      }
      v37 = &StringLiteral_21181/*"jpeg"*/;
      goto LABEL_33;
    }
    v38 = &StringLiteral_24360/*"txt"*/;
    goto LABEL_39;
  }
  if ( v34 == -680155184 )
  {
    v38 = &StringLiteral_20198/*"html"*/;
    goto LABEL_39;
  }
  if ( v34 == -630165834 )
  {
    v38 = &StringLiteral_25077/*"xml"*/;
    goto LABEL_39;
  }
  if ( v34 != -624468176 )
    return 0LL;
  v37 = &StringLiteral_21182/*"jpg"*/;
LABEL_33:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v37, 0LL) )
    return 0LL;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v33, 0LL);
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
    sub_1BCAA44(this, method);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *__fastcall AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *__fastcall AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_2EF4FF8 *method)
{
  long double v2; // q0
  const MethodInfo_2EF4FF8 *v3; // x19
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
  const MethodInfo_2EF51E0 *v34; // x3

  v3 = method;
  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C1C718(method, method);
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
      sub_1BCAA44(this, method);
    v9 = objectList->m_Items[v7];
    _0_T = (__int64)v3->rgctx_data->_0_T;
    if ( (*(_BYTE *)(_0_T + 309) & 1) == 0 )
      _0_T = sub_1C1C6BC(v2);
    this = (AssetData_o *)sub_1BCA91C(v9, _0_T);
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
    _1_T = sub_1C1C6BC(v2);
  this = (AssetData_o *)sub_1BCA888(_1_T, v8);
  v13 = v4->fields.objectList;
  if ( !v13 )
LABEL_38:
    sub_1BCAA3C(this, method);
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
        v19 = sub_1C1C6BC(v12);
      this = (AssetData_o *)sub_1BCA91C(v18, v19);
      if ( this )
      {
        if ( !v15 )
          goto LABEL_38;
        v20 = (__int64)v3->rgctx_data->_0_T;
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1C1C6BC(v12);
        this = (AssetData_o *)sub_1BCA91C(v18, v20);
        v28 = this;
        v29 = (AssetData_o *)v3->rgctx_data->_0_T;
        if ( (v29[3].fields.newVersion & 0x100) == 0 )
        {
          this = (AssetData_o *)sub_1C1C6BC(v27);
          v29 = this;
        }
        if ( v28 )
        {
          this = (AssetData_o *)sub_1BCA91C(v28, v29);
          method = (const MethodInfo_2EF4FF8 *)this;
          if ( !this )
          {
            sub_1BCACFC(v28);
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
        sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)method, v21, v22, v23, v24, v25, v26);
        ++v16;
      }
      LODWORD(v14) = v13->max_length;
    }
  }
  return v15;
}


System_String_array *__fastcall AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  System_Collections_Generic_List_object__o *v11; // x19
  UnityEngine_Object_o *name; // x0
  __int64 v13; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v16; // x21
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  int64_t v26; // x1
  Il2CppClass **v27; // x0

  if ( (byte_4B1525B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__Add__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string__ToArray__, v5, v6);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_string___ctor__, v7, v8);
    sub_1BCA7E0(&System_Collections_Generic_List_string__TypeInfo, v9, v10);
    byte_4B1525B = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_string__TypeInfo,
                                                       method,
                                                       v2,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v16 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v16 >= max_length )
          sub_1BCAA44(name, v13);
        name = objectList->m_Items[v16];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( !v11 )
          break;
        items = v11->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++v11->fields._version;
        if ( !items )
          break;
        size = v11->fields._size;
        v26 = (int64_t)name;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v11,
            (Il2CppObject *)name,
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v27 = &items->obj.klass + size;
          v11->fields._size = size + 1;
          v27[4] = (Il2CppClass *)v26;
          sub_1BCA784((PartyOrganizationUtility_o *)(v27 + 4), v26, v17, v18, v19, v20, v21, v22);
        }
        max_length = objectList->max_length;
        if ( (int)++v16 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v11,
                                          (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1BCAA3C(name, v13);
    }
  }
  if ( !v11 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v11,
                                  (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AssetData__GetObjectText(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v8; // x10
  __int64 v9; // x22
  System_String_o **v10; // x20
  System_String_o *v11; // x8
  unsigned int stringLength_low; // w9
  __int64 methodPtr_low; // x11
  __int64 v14; // x11
  System_String_o *result; // x0
  __int64 v16; // x10
  System_String_o ***i; // x11
  System_String_o **v18; // x0
  System_String_o *v19; // x12
  __int64 v20; // x14
  unsigned int v21; // w13
  __int64 v22; // x14

  v4 = this;
  if ( (byte_4B1525D & 1) == 0 )
  {
    sub_1BCA7E0(&DataAsset_TypeInfo, name, method);
    this = (AssetData_o *)sub_1BCA7E0(&UnityEngine_TextAsset_TypeInfo, v5, v6);
    byte_4B1525D = 1;
  }
  objectList = v4->fields.objectList;
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
          sub_1BCAA44(this, name);
        v10 = (System_String_o **)objectList->m_Items[v9];
        if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0LL)) == 0LL )
          sub_1BCAA3C(this, name);
        this = (AssetData_o *)System_String__Equals_62409536((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v11 = *v10;
          stringLength_low = LOBYTE((*v10)[12].fields._stringLength);
          methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)methodPtr_low
            && *((UnityEngine_TextAsset_c **)v11[8].monitor + methodPtr_low - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v18 = v10;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v18, 0LL);
          }
          v14 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)v14
            && *((DataAsset_c **)v11[8].monitor + v14 - 1) == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(v8) = objectList->max_length;
        if ( (int)++v9 >= (int)v8 )
          return 0LL;
      }
      return v10[4];
    }
    return 0LL;
  }
  result = 0LL;
  if ( v8 && (int)v8 >= 1 )
  {
    v16 = (unsigned int)*(_QWORD *)&objectList->max_length;
    for ( i = (System_String_o ***)objectList->m_Items; ; ++i )
    {
      v18 = *i;
      if ( *i )
      {
        v19 = *v18;
        v20 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
        v21 = LOBYTE((*v18)[12].fields._stringLength);
        if ( v21 >= (unsigned int)v20
          && *((UnityEngine_TextAsset_c **)v19[8].monitor + v20 - 1) == UnityEngine_TextAsset_TypeInfo )
        {
          return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v18, 0LL);
        }
        v22 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
        if ( v21 >= (unsigned int)v22 && *((DataAsset_c **)v19[8].monitor + v22 - 1) == DataAsset_TypeInfo )
          break;
      }
      if ( !--v16 )
        return 0LL;
    }
    return v18[4];
  }
  return result;
}


UnityEngine_Object_o *__fastcall AssetData__GetObject_38483832(
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
          sub_1BCAA3C(this, name);
        this = (AssetData_o *)System_String__Equals_62409536((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(v4) = objectList->max_length;
        if ( (int)++v6 >= (int)v4 )
          return 0LL;
      }
LABEL_17:
      sub_1BCAA44(this, name);
    }
    return 0LL;
  }
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *__fastcall AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_2EF4D38 *method)
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
    this = (AssetData_o *)sub_1C1C718(method, method);
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
          sub_1BCAA44(this, method);
        v8 = objectList->m_Items[v7];
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C1C6BC(v2);
        this = (AssetData_o *)sub_1BCA91C(v8, _0_T);
        if ( this )
          break;
        LODWORD(v6) = objectList->max_length;
        if ( (__int64)++v7 >= (int)v6 )
          return 0LL;
      }
      v10 = method->rgctx_data->_0_T;
      if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
        v10 = (Il2CppClass *)sub_1C1C6BC(v2);
      v11 = sub_1BCA91C(v8, v10);
      v13 = method->rgctx_data->_0_T;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C1C6BC(v12);
      if ( v11 )
      {
        result = (Il2CppObject *)sub_1BCA91C(v11, v13);
        if ( result )
          return result;
        sub_1BCACFC(v11);
      }
    }
  }
  return 0LL;
}


Il2CppObject *__fastcall AssetData__GetObject_object__49237568(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_2EF4E40 *method)
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
    this = (AssetData_o *)sub_1C1C718(method, name);
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
        sub_1BCAA3C(this, name);
      this = (AssetData_o *)System_String__Equals_62409536((System_String_o *)this, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C1C6BC(v11);
        this = (AssetData_o *)sub_1BCA91C(v10, _0_T);
        if ( this )
          break;
      }
      LODWORD(v8) = objectList->max_length;
      if ( (int)++v9 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C1C6BC(v13);
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
        sub_1BCAA44(this, name);
      v15 = objectList->m_Items[v14];
      v16 = method->rgctx_data->_0_T;
      if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C1C6BC(v3);
      this = (AssetData_o *)sub_1BCA91C(v15, v16);
      if ( this )
        break;
      LODWORD(v8) = objectList->max_length;
      if ( (__int64)++v14 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C1C6BC(v3);
    v18 = v15;
  }
  v19 = sub_1BCA91C(v18, v17);
  v21 = method->rgctx_data->_0_T;
  if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
    v21 = (Il2CppClass *)sub_1C1C6BC(v20);
  if ( v19 )
  {
    result = (Il2CppObject *)sub_1BCA91C(v19, v21);
    if ( result )
      return result;
    sub_1BCACFC(v19);
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
    sub_1BCAA3C(0LL, name);
  return System_String__Equals_62409536(v3, name, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall AssetData__IsSame_38479508(
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
    sub_1BCAA3C(0LL, *(_QWORD *)&type);
  return System_String__Equals_62409536(v4, name, 0LL);
}


bool __fastcall AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  PartyOrganizationUtility_o *p_objectList; // x0
  struct UnityEngine_Object_array *objectList; // x10
  char isSavedMemoryMode; // w20
  __int64 v22; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v24; // x11
  __int64 methodPtr_low; // x13
  struct UnityEngine_AssetBundle_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  int64_t v28; // x2
  int32_t v29; // w3
  System_String_o *v30; // x4
  BattleSetupInfo_o *v31; // x5
  FollowerInfo_o *v32; // x6
  PartyListViewItem_o *v33; // x7
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  struct UnityEngine_Object_array *v40; // x24
  __int64 v41; // x8
  unsigned __int64 v42; // x25
  UnityEngine_GameObject_c **v43; // x8
  UnityEngine_Object_o *v44; // x21
  __int64 v45; // x1
  Il2CppObject *Component_object; // x22
  struct FollowerInfo_o *normalFollowerInfo; // x8
  PartyOrganizationUtility_o *v48; // x21
  unsigned __int64 v49; // x29
  UnityEngine_Object_o *v50; // x22
  __int64 v51; // x1
  bool result; // w0

  if ( (byte_4B1525A & 1) == 0 )
  {
    sub_1BCA7E0(&DataAsset_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_Camera___, v9, v10);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____76906136, v11, v12);
    sub_1BCA7E0(&UnityEngine_GameObject_TypeInfo, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    sub_1BCA7E0(&OptionManager_TypeInfo, v17, v18);
    byte_4B1525A = 1;
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
        v22 = (unsigned int)*(_QWORD *)&objectList->max_length;
        isSavedMemoryMode = 0;
        m_Items = objectList->m_Items;
        do
        {
          v24 = *m_Items;
          if ( *m_Items )
          {
            methodPtr_low = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v24->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
            {
              if ( (DataAsset_c *)v24->klass->_2.typeHierarchy[methodPtr_low - 1] != DataAsset_TypeInfo )
                v24 = 0LL;
            }
            else
            {
              v24 = 0LL;
            }
          }
          --v22;
          isSavedMemoryMode |= v24 == 0LL;
          ++m_Items;
        }
        while ( v22 );
      }
      p_objectList->klass = 0LL;
      sub_1BCA784(p_objectList, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_51;
    }
LABEL_53:
    sub_1BCAA3C(p_objectList, method);
  }
  p_assetBundle = &this->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)this->fields.assetBundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Inequality(assetBundle, 0LL, 0LL);
  if ( ((unsigned __int8)p_objectList & 1) != 0 )
  {
    p_objectList = (PartyOrganizationUtility_o *)*p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_53;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)p_objectList, 0, 0LL);
    *p_assetBundle = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.assetBundle, 0LL, v34, v35, v36, v37, v38, v39);
  }
  v40 = this->fields.objectList;
  if ( v40 )
  {
    v41 = *(_QWORD *)&v40->max_length;
    if ( (int)v41 >= 1 )
    {
      v42 = 0LL;
      while ( 1 )
      {
        if ( v42 >= (unsigned int)v41 )
          goto LABEL_52;
        v43 = (UnityEngine_GameObject_c **)v40->m_Items[v42];
        if ( v43 )
        {
          if ( *v43 == UnityEngine_GameObject_TypeInfo )
            v44 = v40->m_Items[v42];
          else
            v44 = 0LL;
        }
        else
        {
          v44 = 0LL;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v44 )
            goto LABEL_53;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v44,
                               (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v45);
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
                                                         (UnityEngine_GameObject_o *)v44,
                                                         1,
                                                         (const MethodInfo_2F63370 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____76906136);
          if ( p_objectList )
          {
            normalFollowerInfo = p_objectList->fields._normalFollowerInfo;
            v48 = p_objectList;
            if ( (int)normalFollowerInfo >= 1 )
              break;
          }
        }
LABEL_47:
        LODWORD(v41) = v40->max_length;
        if ( (__int64)++v42 >= (int)v41 )
          goto LABEL_48;
      }
      v49 = 0LL;
      while ( v49 < (unsigned int)normalFollowerInfo )
      {
        v50 = (UnityEngine_Object_o *)*((_QWORD *)&v48->fields._SelectedNormalFollowerClassId_k__BackingField + v49);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v50, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v50 )
            goto LABEL_53;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v50, 0LL, 0LL);
        }
        LODWORD(normalFollowerInfo) = v48->fields._normalFollowerInfo;
        if ( (__int64)++v49 >= (int)normalFollowerInfo )
          goto LABEL_47;
      }
LABEL_52:
      sub_1BCAA44(p_objectList, method);
    }
  }
LABEL_48:
  this->fields.objectList = 0LL;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, 0LL, v28, v29, v30, v31, v32, v33);
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, v51);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
LABEL_51:
  this->fields.entryCount = 0;
  result = isSavedMemoryMode & 1;
  this->fields.isLoadResources = 0;
  return result;
}


bool __fastcall AssetData__RemoveEntry(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t entryCount; // w8
  bool v5; // vf
  int32_t v6; // w8
  Il2CppObject *Instance; // x0
  __int64 v9; // x1
  const MethodInfo *v10; // x2

  if ( (byte_4B15258 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method, v2);
    byte_4B15258 = 1;
  }
  entryCount = this->fields.entryCount;
  v5 = __OFSUB__(entryCount, 1);
  v6 = entryCount - 1;
  if ( v6 < 0 != v5 )
    return 0;
  this->fields.entryCount = v6;
  if ( v6 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v9);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v10);
  return 1;
}


bool __fastcall AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2

  if ( (byte_4B15259 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method, v2);
    byte_4B15259 = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v6);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v7);
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

  if ( (byte_4B15255 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetData__SetAssetBundleData_d__61_TypeInfo, bundle, resourceNames);
    byte_4B15255 = 1;
  }
  v7 = sub_1BCAA2C(AssetData__SetAssetBundleData_d__61_TypeInfo, bundle, resourceNames, method);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)bundle, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1BCA784((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)resourceNames, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall AssetData__SetData(
        AssetData_o *this,
        UnityEngine_Networking_DownloadHandler_o *handler,
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
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_o *Ext; // x0
  System_String_o *v37; // x22
  uint32_t v38; // w0
  __int64 v39; // x1
  __int64 *v40; // x8
  bool v41; // w0
  DataAsset_o *audioClip; // x22
  __int64 *v43; // x8
  __int64 *v44; // x8
  bool v45; // w0
  bool v46; // w0
  System_Byte_array *data; // x21
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x3
  bool v51; // w0
  System_String_o *text; // x21
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x3
  UnityEngine_Texture2D_o *texture; // x0
  __int64 v57; // x1
  int32_t v58; // w23
  int32_t v59; // w24
  int32_t format; // w25
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x3
  System_Byte_array *v64; // x0
  const MethodInfo *v65; // x1
  int64_t v66; // x0
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct UnityEngine_Object_array *v73; // x19
  __int64 v74; // x0
  __int64 v75; // x1
  int64_t v76; // x2
  int32_t v77; // w3
  System_String_o *v78; // x4
  BattleSetupInfo_o *v79; // x5
  FollowerInfo_o *v80; // x6
  PartyListViewItem_o *v81; // x7
  __int64 v82; // x0

  if ( (byte_4B15257 & 1) == 0 )
  {
    sub_1BCA7E0(&DataAsset_TypeInfo, handler, method);
    sub_1BCA7E0(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo, v5, v6);
    sub_1BCA7E0(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object___TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v11, v12);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v13, v14);
    sub_1BCA7E0(&StringLiteral_24360/*"txt"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_22805/*"png"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_21181/*"jpeg"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_20197/*"htm"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_17862/*"bytes"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21182/*"jpg"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_24918/*"wav"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_25077/*"xml"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_22461/*"ogg"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_20198/*"html"*/, v33, v34);
    byte_4B15257 = 1;
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
        v37 = Ext;
        v38 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
        if ( v38 > 0xA535A9EF )
        {
          if ( v38 <= 0xCC3CFC94 )
          {
            if ( v38 != -1092644061 )
            {
              if ( v38 == -868418412 )
              {
                v40 = &StringLiteral_22461/*"ogg"*/;
LABEL_18:
                v41 = System_String__op_Equality(v37, (System_String_o *)*v40, 0LL);
                audioClip = 0LL;
                if ( !v41 )
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
            v43 = &StringLiteral_21181/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v38 )
          {
            case 0xD775A7D0:
              v44 = &StringLiteral_20198/*"html"*/;
              break;
            case 0xDA706EB6:
              v44 = &StringLiteral_25077/*"xml"*/;
              break;
            case 0xDAC75F30:
              v43 = &StringLiteral_21182/*"jpg"*/;
              goto LABEL_31;
            default:
              goto LABEL_33;
          }
        }
        else
        {
          if ( v38 <= 0x13E2BD39 )
          {
            if ( v38 != 126868124 )
            {
              if ( v38 == 333626681 )
              {
                v40 = &StringLiteral_24918/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v44 = &StringLiteral_20197/*"htm"*/;
            goto LABEL_39;
          }
          if ( v38 != -1523209745 )
          {
            if ( v38 == 1706151940 )
            {
              v46 = System_String__op_Equality(v37, (System_String_o *)StringLiteral_17862/*"bytes"*/, 0LL);
              audioClip = 0LL;
              if ( v46 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
                audioClip = (DataAsset_o *)sub_1BCAA2C(DataAsset_TypeInfo, v48, v49, v50);
                DataAsset___ctor(audioClip, data, 0LL);
              }
              goto LABEL_45;
            }
            if ( v38 != 1748353692 )
              goto LABEL_33;
            v43 = &StringLiteral_22805/*"png"*/;
LABEL_31:
            v45 = System_String__op_Equality(v37, (System_String_o *)*v43, 0LL);
            audioClip = 0LL;
            if ( !v45 )
              goto LABEL_45;
            if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass != UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
              goto LABEL_33;
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v58 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                    texture,
                    texture->klass->vtable._5_set_width.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v59 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                    texture,
                    texture->klass->vtable._7_set_height.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0LL);
            audioClip = (DataAsset_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v61, v62, v63);
            UnityEngine_Texture2D___ctor_70042420((UnityEngine_Texture2D_o *)audioClip, v58, v59, format, 0, 0LL);
            v64 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
            UnityEngine_ImageConversion__LoadImage_70259252((UnityEngine_Texture2D_o *)audioClip, v64, 0LL);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0LL, 0LL) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v65);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0LL);
              v66 = sub_1BCA888(UnityEngine_Object___TypeInfo, 1LL);
              *p_objectList = (struct UnityEngine_Object_array *)v66;
              sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.objectList, v66, v67, v68, v69, v70, v71, v72);
              v73 = *p_objectList;
              if ( *p_objectList )
              {
                v74 = sub_1BCA91C(audioClip, v73->obj.klass->_1.element_class);
                if ( !v74 )
                {
                  v82 = sub_1BCAA60(0LL);
                  sub_1BCA908(v82, 0LL);
                }
                if ( !v73->max_length )
                  sub_1BCAA44(v74, v75);
                v73->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1BCA784(
                  (PartyOrganizationUtility_o *)v73->m_Items,
                  (int64_t)audioClip,
                  v76,
                  v77,
                  v78,
                  v79,
                  v80,
                  v81);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1BCAA3C(texture, v57);
          }
          v44 = &StringLiteral_24360/*"txt"*/;
        }
LABEL_39:
        v51 = System_String__op_Equality(v37, (System_String_o *)*v44, 0LL);
        audioClip = 0LL;
        if ( v51 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0LL);
          audioClip = (DataAsset_o *)sub_1BCAA2C(DataAsset_TypeInfo, v53, v54, v55);
          DataAsset___ctor_38629140(audioClip, text, 0LL);
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
  struct UnityEngine_Object_array *All_70115676; // x0
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
    All_70115676 = UnityEngine_Resources__LoadAll_70115676(Path, 0LL);
    this->fields.objectList = All_70115676;
    sub_1BCA784((PartyOrganizationUtility_o *)p_objectList, (int64_t)All_70115676, v6, v7, v8, v9, v10, v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1BCAA3C(v12, v13);
    if ( *(_QWORD *)&objectList->max_length )
      return 1;
    *p_objectList = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)p_objectList, 0LL, v14, v15, v16, v17, v18, v19);
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
  sub_1BCA784(
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
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.keyType, (int64_t)keyType, v13, v14, v15, v16, v17, v18);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  System_String_o *Ext; // x0
  __int64 v11; // x1
  AssetData_c *v12; // x8
  System_String_o *name; // x20
  System_String_o *v14; // x19
  System_String_o *v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x20
  const MethodInfo *v19; // x1
  System_String_o *v20; // x19

  if ( (byte_4B15251 & 1) == 0 )
  {
    sub_1BCA7E0(&AndroidUtil_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetData_TypeInfo, v4, v5);
    sub_1BCA7E0(&AssetManager_TypeInfo, v6, v7);
    sub_1BCA7E0(&StringLiteral_1117/*".unity3d"*/, v8, v9);
    byte_4B15251 = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v12 = AssetData_TypeInfo;
  name = this->fields.name;
  v14 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v11);
    v12 = AssetData_TypeInfo;
  }
  if ( !name )
    sub_1BCAA3C(Ext, v11);
  v15 = System_String__Replace(
          name,
          v12->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          v12->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
          0LL);
  v17 = v15;
  if ( v14 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v16);
    return AndroidUtil__ConvertFileNameIfNeed(v17, 0LL);
  }
  else
  {
    v20 = System_String__Concat_62401220(v15, (System_String_o *)StringLiteral_1117/*".unity3d"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v19);
    return AssetManager__getShaName(v20, v19);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  System_String_o *Ext; // x0
  __int64 v9; // x1
  AssetData_c *v10; // x8
  System_String_o *name; // x19
  System_String_o *v12; // x20
  struct AssetData_StaticFields *static_fields; // x8
  __int64 ASSETBUNDLE_SPLIT_BASE_CHAR; // x1
  System_String_o *v16; // x0
  const MethodInfo *v17; // x1
  System_String_o *v18; // x19

  if ( (byte_4B15250 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetData_TypeInfo, method, v2);
    sub_1BCA7E0(&AssetManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&StringLiteral_1117/*".unity3d"*/, v6, v7);
    byte_4B15250 = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v10 = AssetData_TypeInfo;
  name = this->fields.name;
  v12 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v9);
    v10 = AssetData_TypeInfo;
  }
  static_fields = v10->static_fields;
  ASSETBUNDLE_SPLIT_BASE_CHAR = static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR;
  if ( v12 )
  {
    if ( name )
      return System_String__Replace(
               name,
               ASSETBUNDLE_SPLIT_BASE_CHAR,
               static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR,
               0LL);
LABEL_12:
    sub_1BCAA3C(Ext, ASSETBUNDLE_SPLIT_BASE_CHAR);
  }
  if ( !name )
    goto LABEL_12;
  v16 = System_String__Replace(name, ASSETBUNDLE_SPLIT_BASE_CHAR, static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR, 0LL);
  v18 = System_String__Concat_62401220(v16, (System_String_o *)StringLiteral_1117/*".unity3d"*/, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
  return AssetManager__getShaName(v18, v17);
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
  __int64 v2; // x2
  __int64 v4; // x1
  System_String_o *keyType; // x19

  if ( (byte_4B15253 & 1) == 0 )
  {
    sub_1BCA7E0(&CatAndMouseGame_TypeInfo, method, v2);
    byte_4B15253 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.keyType, 0LL) )
    return 0LL;
  keyType = this->fields.keyType;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v4);
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
    sub_1BCAA3C(name, method);
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
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t type; // w8
  AssetManager_c *v7; // x0
  System_String_o *cachePathName; // x20
  System_String_o *CacheName; // x1

  if ( (byte_4B15252 & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B15252 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  if ( !byte_4B152DB )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    byte_4B152DB = 1;
  }
  v7 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
    v7 = AssetManager_TypeInfo;
  }
  cachePathName = v7->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_62401220(cachePathName, CacheName, 0LL);
}


int32_t __fastcall AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *__fastcall AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  int32_t nowVersion; // w8

  if ( (byte_4B1524F & 1) == 0 )
  {
    sub_1BCA7E0(&AssetManager_TypeInfo, method, v2);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v4, v5);
    byte_4B1524F = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( (nowVersion & 0x80000000) != 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method);
  return AssetManager__getUrlString_38476644(this, method);
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
  __int64 v2; // x2
  AssetData__SetAssetBundleData_d__61_o *v3; // x19
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  int32_t _1__state; // w8
  struct AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *bundle; // x21
  const MethodInfo *v16; // x1
  __int64 v17; // x2
  __int64 v18; // x3
  System_Collections_Generic_List_object__o *v19; // x22
  AssetData__SetAssetBundleData_d__61_o **p_list_5__3; // x21
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int64_t v33; // x1
  int64_t v34; // x2
  int32_t v35; // w3
  System_String_o *v36; // x4
  BattleSetupInfo_o *v37; // x5
  FollowerInfo_o *v38; // x6
  PartyListViewItem_o *v39; // x7
  int v40; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  int64_t asyncRep_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v59; // x2
  int32_t v60; // w3
  System_String_o *v61; // x4
  BattleSetupInfo_o *v62; // x5
  FollowerInfo_o *v63; // x6
  PartyListViewItem_o *v64; // x7
  bool result; // w0
  PartyOrganizationUtility_o *p_asyncRep_5__2; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  struct UnityEngine_Object_array **p_objectList; // x20
  int64_t v74; // x2
  int32_t v75; // w3
  System_String_o *v76; // x4
  BattleSetupInfo_o *v77; // x5
  FollowerInfo_o *v78; // x6
  PartyListViewItem_o *v79; // x7
  int64_t v80; // x2
  int32_t v81; // w3
  System_String_o *v82; // x4
  BattleSetupInfo_o *v83; // x5
  FollowerInfo_o *v84; // x6
  PartyListViewItem_o *v85; // x7
  struct UnityEngine_Object_array **v86; // x20
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int64_t v88; // x2
  int32_t v89; // w3
  System_String_o *v90; // x4
  BattleSetupInfo_o *v91; // x5
  FollowerInfo_o *v92; // x6
  PartyListViewItem_o *v93; // x7
  int64_t v94; // x1
  PartyOrganizationUtility_o *v95; // x19
  int64_t v96; // x2
  int32_t v97; // w3
  System_String_o *v98; // x4
  BattleSetupInfo_o *v99; // x5
  FollowerInfo_o *v100; // x6
  PartyListViewItem_o *v101; // x7

  v3 = this;
  if ( (byte_4B1525F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object__AddRange__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object__ToArray__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_Object___ctor__, v6, v7);
    sub_1BCA7E0(&System_Collections_Generic_List_Object__TypeInfo, v8, v9);
    this = (AssetData__SetAssetBundleData_d__61_o *)sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v10, v11);
    byte_4B1525F = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields._asyncRep_5__2;
    v3->fields.__1__state = -1;
    if ( !this )
      goto LABEL_40;
    list_5__3 = (System_Collections_Generic_List_object__o *)v3->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !list_5__3 )
      goto LABEL_40;
    System_Collections_Generic_List_object___AddRange(
      list_5__3,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v3->fields._asyncRep_5__2 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._asyncRep_5__2, 0LL, v42, v43, v44, v45, v46, v47);
    v40 = v3->fields.__7__wrap4 + 1;
    v3->fields.__7__wrap4 = v40;
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (PartyOrganizationUtility_o *)&v3->fields._asyncRep_5__2;
    this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields._asyncRep_5__2;
    v3->fields.__1__state = -1;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    p_objectList = &_4__this->fields.objectList;
    sub_1BCA784((PartyOrganizationUtility_o *)p_objectList, (int64_t)this, v67, v68, v69, v70, v71, v72);
    *((_BYTE *)p_objectList + 8) = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0LL;
    sub_1BCA784(p_asyncRep_5__2, 0LL, v74, v75, v76, v77, v78, v79);
    this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields.bundle;
    if ( !this )
      goto LABEL_40;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)this, 0, 0LL);
    return 0;
  }
  if ( _1__state )
    return 0;
  resourceNames = v3->fields.resourceNames;
  v3->fields.__1__state = -1;
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
  bundle = (UnityEngine_Object_o *)v3->fields.bundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
  if ( UnityEngine_Object__op_Equality(bundle, 0LL, 0LL) || AssetData__GetExt(_4__this, v16) )
    return 0;
  if ( v3->fields.resourceNames )
  {
    v19 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                         System_Collections_Generic_List_Object__TypeInfo,
                                                         method,
                                                         v17,
                                                         v18);
    System_Collections_Generic_List_object____ctor(
      v19,
      (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_Object___ctor__);
    v3->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v19;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__61_o **)&v3->fields._list_5__3;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields._list_5__3, (int64_t)v19, v21, v22, v23, v24, v25, v26);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_40;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_35A1E68 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v33 = (int64_t)v3->fields.resourceNames;
    v3->fields.__7__wrap3 = (struct System_String_array *)v33;
    sub_1BCA784((PartyOrganizationUtility_o *)&v3->fields.__7__wrap3, v33, v27, v28, v29, v30, v31, v32);
    v40 = 0;
    v3->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__61_o *)&v3->fields.__7__wrap3;
    _7__wrap3 = v3->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_40;
    max_length = _7__wrap3->max_length;
    if ( v40 < max_length )
    {
      if ( v40 >= (unsigned int)max_length )
        sub_1BCAA44(this, method);
      this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v40],
                       0LL);
        v3->fields._asyncRep_5__2 = AssetAsync;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v3->fields._asyncRep_5__2,
          (int64_t)AssetAsync,
          v51,
          v52,
          v53,
          v54,
          v55,
          v56);
        asyncRep_5__2 = (int64_t)v3->fields._asyncRep_5__2;
        v3->fields.__2__current = (Il2CppObject *)asyncRep_5__2;
        p__2__current = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
        sub_1BCA784(p__2__current, asyncRep_5__2, v59, v60, v61, v62, v63, v64);
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
        return 1;
      }
LABEL_40:
      sub_1BCAA3C(this, method);
    }
    v3->fields.__7__wrap3 = 0LL;
    sub_1BCA784((PartyOrganizationUtility_o *)this, 0LL, v34, v35, v36, v37, v38, v39);
    p_asyncRep_5__2 = (PartyOrganizationUtility_o *)&v3->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields._list_5__3;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    v86 = &_4__this->fields.objectList;
    sub_1BCA784((PartyOrganizationUtility_o *)v86, (int64_t)this, v80, v81, v82, v83, v84, v85);
    *((_BYTE *)v86 + 8) = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__61_o *)v3->fields.bundle;
  if ( !this )
    goto LABEL_40;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0LL);
  v3->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&v3->fields._asyncRep_5__2,
    (int64_t)AllAssetsAsync,
    v88,
    v89,
    v90,
    v91,
    v92,
    v93);
  v94 = (int64_t)v3->fields._asyncRep_5__2;
  v3->fields.__2__current = (Il2CppObject *)v94;
  v95 = (PartyOrganizationUtility_o *)&v3->fields.__2__current;
  sub_1BCA784(v95, v94, v96, v97, v98, v99, v100, v101);
  result = 1;
  *(_DWORD *)&v95[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_AssetData__SetAssetBundleData_d__61_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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