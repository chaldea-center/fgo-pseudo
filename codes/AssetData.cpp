void __fastcall AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4B361F8 & 1) == 0 )
  {
    sub_1BD3458(&AssetData_TypeInfo, v1);
    byte_4B361F8 = 1;
  }
  *AssetData_TypeInfo->static_fields = *(struct AssetData_StaticFields *)asc_BD65E8;
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

  if ( (byte_4B361EE & 1) == 0 )
  {
    sub_1BD3458(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_4B361EE = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
  this->fields.name = name;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.name, (int64_t)name, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.attrib, (int64_t)v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0LL;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0LL;
  *(p_keyType - 1) = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)p_keyType, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall AssetData___ctor_38547508(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v16->fields.name, (int64_t)name, v17, v18, v19, v20, v21, v22);
  v16->fields.attrib = attrib;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v16->fields.attrib, (int64_t)attrib, v23, v24, v25, v26, v27, v28);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  LODWORD(v16[-1].fields.objectList) = version;
  HIDWORD(v16[-1].fields.objectList) = version;
  *(_DWORD *)&v16[-1].fields.isLoadResources = size;
  v16[-1].fields.entryCount = crc;
  sub_1BD33FC((PartyOrganizationUtility_o *)v16, (int64_t)keyType, v29, v30, v31, v32, v33, v34);
}


void __fastcall AssetData___ctor_38547648(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&v17->fields.name, (int64_t)name, v18, v19, v20, v21, v22, v23);
  v17->fields.attrib = attrib;
  sub_1BD33FC((PartyOrganizationUtility_o *)&v17->fields.attrib, (int64_t)attrib, v24, v25, v26, v27, v28, v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  LODWORD(v17[-1].fields.objectList) = nowVersion;
  HIDWORD(v17[-1].fields.objectList) = newVersion;
  *(_DWORD *)&v17[-1].fields.isLoadResources = size;
  v17[-1].fields.entryCount = crc;
  sub_1BD33FC((PartyOrganizationUtility_o *)v17, (int64_t)keyType, v30, v31, v32, v33, v34, v35);
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
        return System_String__Substring_62544252(IndexOf, v5, v8, 0LL);
LABEL_13:
      sub_1BD36B4(IndexOf, v5);
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
  __int64 v8; // x1
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v10; // x10
  __int64 v11; // x23
  UnityEngine_TextAsset_o *v12; // x21
  UnityEngine_TextAsset_c *klass; // x8
  unsigned int methodPtr_low; // w9
  __int64 v15; // x11
  __int64 v16; // x11
  __int64 v17; // x10
  UnityEngine_TextAsset_o **i; // x11
  UnityEngine_TextAsset_o *v19; // x0
  UnityEngine_TextAsset_c *v20; // x12
  __int64 v21; // x14
  unsigned int v22; // w13
  __int64 v23; // x14
  System_String_o *monitor; // x20
  CatAndMouseGame_c *v26; // x0

  v6 = this;
  if ( (byte_4B361F6 & 1) == 0 )
  {
    sub_1BD3458(&CatAndMouseGame_TypeInfo, name);
    sub_1BD3458(&DataAsset_TypeInfo, v7);
    this = (AssetData_o *)sub_1BD3458(&UnityEngine_TextAsset_TypeInfo, v8);
    byte_4B361F6 = 1;
  }
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0LL;
  v10 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v10 >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= (unsigned int)v10 )
          sub_1BD36BC(this, name);
        v12 = (UnityEngine_TextAsset_o *)objectList->m_Items[v11];
        if ( !v12 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v11], 0LL)) == 0LL )
          sub_1BD36B4(this, name);
        this = (AssetData_o *)System_String__Equals_62533564((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = v12->klass;
          methodPtr_low = LOBYTE(v12->klass->vtable._0_Equals.methodPtr);
          v15 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v15
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[v15 - 1] == UnityEngine_TextAsset_TypeInfo )
          {
            v19 = v12;
            goto LABEL_28;
          }
          v16 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( methodPtr_low >= (unsigned int)v16
            && (DataAsset_c *)klass->_2.typeHierarchy[v16 - 1] == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(v10) = objectList->max_length;
        if ( (int)++v11 >= (int)v10 )
          return 0LL;
      }
      monitor = (System_String_o *)v12[1].monitor;
      v26 = CatAndMouseGame_TypeInfo;
      if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
        return CatAndMouseGame__MouseGame3_39142332(monitor, key, 0LL);
      goto LABEL_34;
    }
    return 0LL;
  }
  if ( !v10 || (int)v10 < 1 )
    return 0LL;
  v17 = (unsigned int)*(_QWORD *)&objectList->max_length;
  for ( i = (UnityEngine_TextAsset_o **)objectList->m_Items; ; ++i )
  {
    v19 = *i;
    if ( *i )
    {
      v20 = v19->klass;
      v21 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
      v22 = LOBYTE(v19->klass->vtable._0_Equals.methodPtr);
      if ( v22 >= (unsigned int)v21
        && (UnityEngine_TextAsset_c *)v20->_2.typeHierarchy[v21 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
LABEL_28:
        monitor = UnityEngine_TextAsset__get_text(v19, 0LL);
        goto LABEL_32;
      }
      v23 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
      if ( v22 >= (unsigned int)v23 && (DataAsset_c *)v20->_2.typeHierarchy[v23 - 1] == DataAsset_TypeInfo )
        break;
    }
    if ( !--v17 )
      return 0LL;
  }
  monitor = (System_String_o *)v19[1].monitor;
LABEL_32:
  if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
    return CatAndMouseGame__MouseGame3_39142332(monitor, key, 0LL);
  v26 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v26);
  return CatAndMouseGame__MouseGame3_39142332(monitor, key, 0LL);
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
    sub_1BD36B4(IndexOf, v5);
  if ( v6->fields._stringLength <= (int)IndexOf )
    return 0LL;
  else
    return System_String__Substring(this->fields.name, (int)IndexOf + 1, 0LL);
}


UnityEngine_Networking_UnityWebRequest_o *__fastcall AssetData__GetLoadRequest(
        AssetData_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  const MethodInfo *v15; // x1
  System_String_o *Ext; // x20
  NetworkManager_c *v17; // x8
  System_String_o *FILE_URL_SCHEME; // x19
  System_String_o *Path; // x0
  const MethodInfo *v20; // x1
  System_String_o *v21; // x19
  uint32_t v22; // w0
  int32_t v23; // w1
  System_String_o *Key; // x1
  __int64 *v25; // x8
  __int64 *v26; // x8

  if ( (byte_4B361F0 & 1) == 0 )
  {
    sub_1BD3458(&NetworkManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_24395/*"txt"*/, v3);
    sub_1BD3458(&StringLiteral_22838/*"png"*/, v4);
    sub_1BD3458(&StringLiteral_21212/*"jpeg"*/, v5);
    sub_1BD3458(&StringLiteral_20227/*"htm"*/, v6);
    sub_1BD3458(&StringLiteral_17888/*"bytes"*/, v7);
    sub_1BD3458(&StringLiteral_21213/*"jpg"*/, v8);
    sub_1BD3458(&StringLiteral_24953/*"wav"*/, v9);
    sub_1BD3458(&StringLiteral_25112/*"xml"*/, v10);
    sub_1BD3458(&StringLiteral_24766/*"usm"*/, v11);
    sub_1BD3458(&StringLiteral_22494/*"ogg"*/, v12);
    sub_1BD3458(&StringLiteral_20228/*"html"*/, v13);
    byte_4B361F0 = 1;
  }
  if ( this->fields.type )
    return 0LL;
  Ext = AssetData__GetExt(this, method);
  v17 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v17 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v17->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v15);
  v21 = System_String__Concat_62525248(FILE_URL_SCHEME, Path, 0LL);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v20);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v21, Key, 0LL);
  }
  v22 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
  if ( v22 <= 0x6835C29C )
  {
    if ( v22 <= 0x13E2BD39 )
    {
      if ( v22 != 126868124 )
      {
        if ( v22 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_24953/*"wav"*/, 0LL) )
        {
          v23 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v21, v23, 0LL);
        }
        return 0LL;
      }
      v26 = &StringLiteral_20227/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v22 )
    {
      case 0x4F91B85Cu:
        v26 = &StringLiteral_24766/*"usm"*/;
        break;
      case 0x65B1D004u:
        v26 = &StringLiteral_17888/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v25 = &StringLiteral_22838/*"png"*/;
        goto LABEL_33;
      default:
        return 0LL;
    }
LABEL_39:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v26, 0LL) )
      return 0LL;
    return UnityEngine_Networking_UnityWebRequest__Get(v21, 0LL);
  }
  if ( v22 <= 0xCC3CFC94 )
  {
    if ( v22 != -1523209745 )
    {
      if ( v22 != -1092644061 )
      {
        if ( v22 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22494/*"ogg"*/, 0LL) )
        {
          v23 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v21, v23, 0LL);
        }
        return 0LL;
      }
      v25 = &StringLiteral_21212/*"jpeg"*/;
      goto LABEL_33;
    }
    v26 = &StringLiteral_24395/*"txt"*/;
    goto LABEL_39;
  }
  if ( v22 == -680155184 )
  {
    v26 = &StringLiteral_20228/*"html"*/;
    goto LABEL_39;
  }
  if ( v22 == -630165834 )
  {
    v26 = &StringLiteral_25112/*"xml"*/;
    goto LABEL_39;
  }
  if ( v22 != -624468176 )
    return 0LL;
  v25 = &StringLiteral_21213/*"jpg"*/;
LABEL_33:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v25, 0LL) )
    return 0LL;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v21, 0LL);
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
    sub_1BD36BC(this, method);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *__fastcall AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *__fastcall AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_2F13900 *method)
{
  long double v2; // q0
  const MethodInfo_2F13900 *v3; // x19
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
  const MethodInfo_2F13AE8 *v34; // x3

  v3 = method;
  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C25390(method);
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
      sub_1BD36BC(this, method);
    v9 = objectList->m_Items[v7];
    _0_T = (__int64)v3->rgctx_data->_0_T;
    if ( (*(_BYTE *)(_0_T + 309) & 1) == 0 )
      _0_T = sub_1C25334(v2);
    this = (AssetData_o *)sub_1BD3594(v9, _0_T);
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
    _1_T = sub_1C25334(v2);
  this = (AssetData_o *)sub_1BD3500(_1_T, v8);
  v13 = v4->fields.objectList;
  if ( !v13 )
LABEL_38:
    sub_1BD36B4(this, method);
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
        v19 = sub_1C25334(v12);
      this = (AssetData_o *)sub_1BD3594(v18, v19);
      if ( this )
      {
        if ( !v15 )
          goto LABEL_38;
        v20 = (__int64)v3->rgctx_data->_0_T;
        if ( (*(_BYTE *)(v20 + 309) & 1) == 0 )
          v20 = sub_1C25334(v12);
        this = (AssetData_o *)sub_1BD3594(v18, v20);
        v28 = this;
        v29 = (AssetData_o *)v3->rgctx_data->_0_T;
        if ( (v29[3].fields.newVersion & 0x100) == 0 )
        {
          this = (AssetData_o *)sub_1C25334(v27);
          v29 = this;
        }
        if ( v28 )
        {
          this = (AssetData_o *)sub_1BD3594(v28, v29);
          method = (const MethodInfo_2F13900 *)this;
          if ( !this )
          {
            sub_1BD3974(v28);
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
        sub_1BD33FC((PartyOrganizationUtility_o *)(v30 + 4), (int64_t)method, v21, v22, v23, v24, v25, v26);
        ++v16;
      }
      LODWORD(v14) = v13->max_length;
    }
  }
  return v15;
}


System_String_array *__fastcall AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_object__o *v6; // x19
  UnityEngine_Object_o *name; // x0
  __int64 v8; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v11; // x21
  int64_t v12; // x2
  int32_t v13; // w3
  System_String_o *v14; // x4
  BattleSetupInfo_o *v15; // x5
  FollowerInfo_o *v16; // x6
  PartyListViewItem_o *v17; // x7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  int64_t v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_4B361F5 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_string___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_string__TypeInfo, v5);
    byte_4B361F5 = 1;
  }
  v6 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v11 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v11 >= max_length )
          sub_1BD36BC(name, v8);
        name = objectList->m_Items[v11];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( !v6 )
          break;
        items = v6->fields._items;
        v19 = Method_System_Collections_Generic_List_string__Add__;
        ++v6->fields._version;
        if ( !items )
          break;
        size = v6->fields._size;
        v21 = (int64_t)name;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v6,
            (Il2CppObject *)name,
            *(const MethodInfo_35C0D90 **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
        }
        else
        {
          v22 = &items->obj.klass + size;
          v6->fields._size = size + 1;
          v22[4] = (Il2CppClass *)v21;
          sub_1BD33FC((PartyOrganizationUtility_o *)(v22 + 4), v21, v12, v13, v14, v15, v16, v17);
        }
        max_length = objectList->max_length;
        if ( (int)++v11 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v6,
                                          (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1BD36B4(name, v8);
    }
  }
  if ( !v6 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v6,
                                  (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AssetData__GetObjectText(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  __int64 v5; // x1
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v7; // x10
  __int64 v8; // x22
  System_String_o **v9; // x20
  System_String_o *v10; // x8
  unsigned int stringLength_low; // w9
  __int64 methodPtr_low; // x11
  __int64 v13; // x11
  System_String_o *result; // x0
  __int64 v15; // x10
  System_String_o ***i; // x11
  System_String_o **v17; // x0
  System_String_o *v18; // x12
  __int64 v19; // x14
  unsigned int v20; // w13
  __int64 v21; // x14

  v4 = this;
  if ( (byte_4B361F7 & 1) == 0 )
  {
    sub_1BD3458(&DataAsset_TypeInfo, name);
    this = (AssetData_o *)sub_1BD3458(&UnityEngine_TextAsset_TypeInfo, v5);
    byte_4B361F7 = 1;
  }
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0LL;
  v7 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v7 >= 1 )
    {
      v8 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= (unsigned int)v7 )
          sub_1BD36BC(this, name);
        v9 = (System_String_o **)objectList->m_Items[v8];
        if ( !v9 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v8], 0LL)) == 0LL )
          sub_1BD36B4(this, name);
        this = (AssetData_o *)System_String__Equals_62533564((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = *v9;
          stringLength_low = LOBYTE((*v9)[12].fields._stringLength);
          methodPtr_low = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)methodPtr_low
            && *((UnityEngine_TextAsset_c **)v10[8].monitor + methodPtr_low - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v17 = v9;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v17, 0LL);
          }
          v13 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
          if ( stringLength_low >= (unsigned int)v13
            && *((DataAsset_c **)v10[8].monitor + v13 - 1) == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(v7) = objectList->max_length;
        if ( (int)++v8 >= (int)v7 )
          return 0LL;
      }
      return v9[4];
    }
    return 0LL;
  }
  result = 0LL;
  if ( v7 && (int)v7 >= 1 )
  {
    v15 = (unsigned int)*(_QWORD *)&objectList->max_length;
    for ( i = (System_String_o ***)objectList->m_Items; ; ++i )
    {
      v17 = *i;
      if ( *i )
      {
        v18 = *v17;
        v19 = LOBYTE(UnityEngine_TextAsset_TypeInfo->vtable._0_Equals.methodPtr);
        v20 = LOBYTE((*v17)[12].fields._stringLength);
        if ( v20 >= (unsigned int)v19
          && *((UnityEngine_TextAsset_c **)v18[8].monitor + v19 - 1) == UnityEngine_TextAsset_TypeInfo )
        {
          return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v17, 0LL);
        }
        v21 = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
        if ( v20 >= (unsigned int)v21 && *((DataAsset_c **)v18[8].monitor + v21 - 1) == DataAsset_TypeInfo )
          break;
      }
      if ( !--v15 )
        return 0LL;
    }
    return v17[4];
  }
  return result;
}


UnityEngine_Object_o *__fastcall AssetData__GetObject_38552144(
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
          sub_1BD36B4(this, name);
        this = (AssetData_o *)System_String__Equals_62533564((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(v4) = objectList->max_length;
        if ( (int)++v6 >= (int)v4 )
          return 0LL;
      }
LABEL_17:
      sub_1BD36BC(this, name);
    }
    return 0LL;
  }
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *__fastcall AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_2F13640 *method)
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
    this = (AssetData_o *)sub_1C25390(method);
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
          sub_1BD36BC(this, method);
        v8 = objectList->m_Items[v7];
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C25334(v2);
        this = (AssetData_o *)sub_1BD3594(v8, _0_T);
        if ( this )
          break;
        LODWORD(v6) = objectList->max_length;
        if ( (__int64)++v7 >= (int)v6 )
          return 0LL;
      }
      v10 = method->rgctx_data->_0_T;
      if ( (BYTE5(v10->vtable[0].methodPtr) & 1) == 0 )
        v10 = (Il2CppClass *)sub_1C25334(v2);
      v11 = sub_1BD3594(v8, v10);
      v13 = method->rgctx_data->_0_T;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C25334(v12);
      if ( v11 )
      {
        result = (Il2CppObject *)sub_1BD3594(v11, v13);
        if ( result )
          return result;
        sub_1BD3974(v11);
      }
    }
  }
  return 0LL;
}


Il2CppObject *__fastcall AssetData__GetObject_object__49362760(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_2F13748 *method)
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
    this = (AssetData_o *)sub_1C25390(method);
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
        sub_1BD36B4(this, name);
      this = (AssetData_o *)System_String__Equals_62533564((System_String_o *)this, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C25334(v11);
        this = (AssetData_o *)sub_1BD3594(v10, _0_T);
        if ( this )
          break;
      }
      LODWORD(v8) = objectList->max_length;
      if ( (int)++v9 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C25334(v13);
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
        sub_1BD36BC(this, name);
      v15 = objectList->m_Items[v14];
      v16 = method->rgctx_data->_0_T;
      if ( (BYTE5(v16->vtable[0].methodPtr) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C25334(v3);
      this = (AssetData_o *)sub_1BD3594(v15, v16);
      if ( this )
        break;
      LODWORD(v8) = objectList->max_length;
      if ( (__int64)++v14 >= (int)v8 )
        return 0LL;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C25334(v3);
    v18 = v15;
  }
  v19 = sub_1BD3594(v18, v17);
  v21 = method->rgctx_data->_0_T;
  if ( (BYTE5(v21->vtable[0].methodPtr) & 1) == 0 )
    v21 = (Il2CppClass *)sub_1C25334(v20);
  if ( v19 )
  {
    result = (Il2CppObject *)sub_1BD3594(v19, v21);
    if ( result )
      return result;
    sub_1BD3974(v19);
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
    sub_1BD36B4(0LL, name);
  return System_String__Equals_62533564(v3, name, 0LL);
}


bool __fastcall AssetData__IsSame_38547820(
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
    sub_1BD36B4(0LL, type);
  return System_String__Equals_62533564(v4, name, 0LL);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  PartyOrganizationUtility_o *p_objectList; // x0
  struct UnityEngine_Object_array *objectList; // x10
  char isSavedMemoryMode; // w20
  __int64 v17; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v19; // x11
  __int64 methodPtr_low; // x13
  struct UnityEngine_AssetBundle_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
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
  struct UnityEngine_Object_array *v35; // x24
  __int64 v36; // x8
  unsigned __int64 v37; // x25
  UnityEngine_GameObject_c **v38; // x8
  UnityEngine_Object_o *v39; // x21
  Il2CppObject *Component_object; // x22
  struct FollowerInfo_o *normalFollowerInfo; // x8
  PartyOrganizationUtility_o *v42; // x21
  unsigned __int64 v43; // x29
  UnityEngine_Object_o *v44; // x22
  bool result; // w0

  if ( (byte_4B361F4 & 1) == 0 )
  {
    sub_1BD3458(&DataAsset_TypeInfo, method);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponent_Camera___, v9);
    sub_1BD3458(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____77038856, v10);
    sub_1BD3458(&UnityEngine_GameObject_TypeInfo, v11);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v12);
    sub_1BD3458(&OptionManager_TypeInfo, v13);
    byte_4B361F4 = 1;
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
        v17 = (unsigned int)*(_QWORD *)&objectList->max_length;
        isSavedMemoryMode = 0;
        m_Items = objectList->m_Items;
        do
        {
          v19 = *m_Items;
          if ( *m_Items )
          {
            methodPtr_low = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v19->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
            {
              if ( (DataAsset_c *)v19->klass->_2.typeHierarchy[methodPtr_low - 1] != DataAsset_TypeInfo )
                v19 = 0LL;
            }
            else
            {
              v19 = 0LL;
            }
          }
          --v17;
          isSavedMemoryMode |= v19 == 0LL;
          ++m_Items;
        }
        while ( v17 );
      }
      p_objectList->klass = 0LL;
      sub_1BD33FC(p_objectList, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_51;
    }
LABEL_53:
    sub_1BD36B4(p_objectList, method);
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
    sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.assetBundle, 0LL, v29, v30, v31, v32, v33, v34);
  }
  v35 = this->fields.objectList;
  if ( v35 )
  {
    v36 = *(_QWORD *)&v35->max_length;
    if ( (int)v36 >= 1 )
    {
      v37 = 0LL;
      while ( 1 )
      {
        if ( v37 >= (unsigned int)v36 )
          goto LABEL_52;
        v38 = (UnityEngine_GameObject_c **)v35->m_Items[v37];
        if ( v38 )
        {
          if ( *v38 == UnityEngine_GameObject_TypeInfo )
            v39 = v35->m_Items[v37];
          else
            v39 = 0LL;
        }
        else
        {
          v39 = 0LL;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v39, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v39 )
            goto LABEL_53;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v39,
                               (const MethodInfo_2F81A7C *)Method_UnityEngine_GameObject_GetComponent_Camera___);
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
                                                         (UnityEngine_GameObject_o *)v39,
                                                         1,
                                                         (const MethodInfo_2F8271C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____77038856);
          if ( p_objectList )
          {
            normalFollowerInfo = p_objectList->fields._normalFollowerInfo;
            v42 = p_objectList;
            if ( (int)normalFollowerInfo >= 1 )
              break;
          }
        }
LABEL_47:
        LODWORD(v36) = v35->max_length;
        if ( (__int64)++v37 >= (int)v36 )
          goto LABEL_48;
      }
      v43 = 0LL;
      while ( v43 < (unsigned int)normalFollowerInfo )
      {
        v44 = (UnityEngine_Object_o *)*((_QWORD *)&v42->fields._SelectedNormalFollowerClassId_k__BackingField + v43);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (PartyOrganizationUtility_o *)UnityEngine_Object__op_Equality(v44, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v44 )
            goto LABEL_53;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v44, 0LL, 0LL);
        }
        LODWORD(normalFollowerInfo) = v42->fields._normalFollowerInfo;
        if ( (__int64)++v43 >= (int)normalFollowerInfo )
          goto LABEL_47;
      }
LABEL_52:
      sub_1BD36BC(p_objectList, method);
    }
  }
LABEL_48:
  this->fields.objectList = 0LL;
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.objectList, 0LL, v23, v24, v25, v26, v27, v28);
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

  if ( (byte_4B361F2 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4B361F2 = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1BD36B4(0LL, v8);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v9);
  return 1;
}


bool __fastcall AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1
  const MethodInfo *v6; // x2

  if ( (byte_4B361F3 & 1) == 0 )
  {
    sub_1BD3458(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_4B361F3 = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37FDC48 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1BD36B4(0LL, v5);
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

  if ( (byte_4B361EF & 1) == 0 )
  {
    sub_1BD3458(&AssetData__SetAssetBundleData_d__61_TypeInfo, bundle);
    byte_4B361EF = 1;
  }
  v7 = sub_1BD36A4(AssetData__SetAssetBundleData_d__61_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 40), (int64_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 48), (int64_t)bundle, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1BD33FC((PartyOrganizationUtility_o *)(v7 + 32), (int64_t)resourceNames, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


bool __fastcall AssetData__SetData(
        AssetData_o *this,
        UnityEngine_Networking_DownloadHandler_o *handler,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
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
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_o *Ext; // x0
  System_String_o *v22; // x22
  uint32_t v23; // w0
  __int64 *v24; // x8
  bool v25; // w0
  DataAsset_o *audioClip; // x22
  __int64 *v27; // x8
  __int64 *v28; // x8
  bool v29; // w0
  bool v30; // w0
  System_Byte_array *data; // x21
  bool v32; // w0
  System_String_o *text; // x21
  UnityEngine_Texture2D_o *texture; // x0
  __int64 v35; // x1
  int32_t v36; // w23
  int32_t v37; // w24
  int32_t format; // w25
  System_Byte_array *v39; // x0
  const MethodInfo *v40; // x1
  int64_t v41; // x0
  int64_t v42; // x2
  int32_t v43; // w3
  System_String_o *v44; // x4
  BattleSetupInfo_o *v45; // x5
  FollowerInfo_o *v46; // x6
  PartyListViewItem_o *v47; // x7
  struct UnityEngine_Object_array *v48; // x19
  __int64 v49; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  __int64 v57; // x0

  if ( (byte_4B361F1 & 1) == 0 )
  {
    sub_1BD3458(&DataAsset_TypeInfo, handler);
    sub_1BD3458(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo, v5);
    sub_1BD3458(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_1BD3458(&UnityEngine_Object___TypeInfo, v7);
    sub_1BD3458(&UnityEngine_Object_TypeInfo, v8);
    sub_1BD3458(&UnityEngine_Texture2D_TypeInfo, v9);
    sub_1BD3458(&StringLiteral_24395/*"txt"*/, v10);
    sub_1BD3458(&StringLiteral_22838/*"png"*/, v11);
    sub_1BD3458(&StringLiteral_21212/*"jpeg"*/, v12);
    sub_1BD3458(&StringLiteral_20227/*"htm"*/, v13);
    sub_1BD3458(&StringLiteral_17888/*"bytes"*/, v14);
    sub_1BD3458(&StringLiteral_21213/*"jpg"*/, v15);
    sub_1BD3458(&StringLiteral_24953/*"wav"*/, v16);
    sub_1BD3458(&StringLiteral_25112/*"xml"*/, v17);
    sub_1BD3458(&StringLiteral_22494/*"ogg"*/, v18);
    sub_1BD3458(&StringLiteral_20228/*"html"*/, v19);
    byte_4B361F1 = 1;
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
        v22 = Ext;
        v23 = PrivateImplementationDetails___ComputeStringHash(Ext, 0LL);
        if ( v23 > 0xA535A9EF )
        {
          if ( v23 <= 0xCC3CFC94 )
          {
            if ( v23 != -1092644061 )
            {
              if ( v23 == -868418412 )
              {
                v24 = &StringLiteral_22494/*"ogg"*/;
LABEL_18:
                v25 = System_String__op_Equality(v22, (System_String_o *)*v24, 0LL);
                audioClip = 0LL;
                if ( !v25 )
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
            v27 = &StringLiteral_21212/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v23 )
          {
            case 0xD775A7D0:
              v28 = &StringLiteral_20228/*"html"*/;
              break;
            case 0xDA706EB6:
              v28 = &StringLiteral_25112/*"xml"*/;
              break;
            case 0xDAC75F30:
              v27 = &StringLiteral_21213/*"jpg"*/;
              goto LABEL_31;
            default:
              goto LABEL_33;
          }
        }
        else
        {
          if ( v23 <= 0x13E2BD39 )
          {
            if ( v23 != 126868124 )
            {
              if ( v23 == 333626681 )
              {
                v24 = &StringLiteral_24953/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v28 = &StringLiteral_20227/*"htm"*/;
            goto LABEL_39;
          }
          if ( v23 != -1523209745 )
          {
            if ( v23 == 1706151940 )
            {
              v30 = System_String__op_Equality(v22, (System_String_o *)StringLiteral_17888/*"bytes"*/, 0LL);
              audioClip = 0LL;
              if ( v30 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
                audioClip = (DataAsset_o *)sub_1BD36A4(DataAsset_TypeInfo);
                DataAsset___ctor(audioClip, data, 0LL);
              }
              goto LABEL_45;
            }
            if ( v23 != 1748353692 )
              goto LABEL_33;
            v27 = &StringLiteral_22838/*"png"*/;
LABEL_31:
            v29 = System_String__op_Equality(v22, (System_String_o *)*v27, 0LL);
            audioClip = 0LL;
            if ( !v29 )
              goto LABEL_45;
            if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass != UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
              goto LABEL_33;
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v36 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                    texture,
                    texture->klass->vtable._5_set_width.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v37 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                    texture,
                    texture->klass->vtable._7_set_height.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0LL);
            audioClip = (DataAsset_o *)sub_1BD36A4(UnityEngine_Texture2D_TypeInfo);
            UnityEngine_Texture2D___ctor_70166448((UnityEngine_Texture2D_o *)audioClip, v36, v37, format, 0, 0LL);
            v39 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
            UnityEngine_ImageConversion__LoadImage_70383280((UnityEngine_Texture2D_o *)audioClip, v39, 0LL);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0LL, 0LL) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v40);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0LL);
              v41 = sub_1BD3500(UnityEngine_Object___TypeInfo, 1LL);
              *p_objectList = (struct UnityEngine_Object_array *)v41;
              sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.objectList, v41, v42, v43, v44, v45, v46, v47);
              v48 = *p_objectList;
              if ( *p_objectList )
              {
                v49 = sub_1BD3594(audioClip, v48->obj.klass->_1.element_class);
                if ( !v49 )
                {
                  v57 = sub_1BD36D8(0LL);
                  sub_1BD3580(v57, 0LL);
                }
                if ( !v48->max_length )
                  sub_1BD36BC(v49, v50);
                v48->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1BD33FC(
                  (PartyOrganizationUtility_o *)v48->m_Items,
                  (int64_t)audioClip,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1BD36B4(texture, v35);
          }
          v28 = &StringLiteral_24395/*"txt"*/;
        }
LABEL_39:
        v32 = System_String__op_Equality(v22, (System_String_o *)*v28, 0LL);
        audioClip = 0LL;
        if ( v32 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0LL);
          audioClip = (DataAsset_o *)sub_1BD36A4(DataAsset_TypeInfo);
          DataAsset___ctor_38697452(audioClip, text, 0LL);
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
  struct UnityEngine_Object_array *All_70239704; // x0
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
    All_70239704 = UnityEngine_Resources__LoadAll_70239704(Path, 0LL);
    this->fields.objectList = All_70239704;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_objectList, (int64_t)All_70239704, v6, v7, v8, v9, v10, v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1BD36B4(v12, v13);
    if ( *(_QWORD *)&objectList->max_length )
      return 1;
    *p_objectList = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)p_objectList, 0LL, v14, v15, v16, v17, v18, v19);
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
  sub_1BD33FC(
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
  sub_1BD33FC((PartyOrganizationUtility_o *)&this->fields.keyType, (int64_t)keyType, v13, v14, v15, v16, v17, v18);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_String_o *Ext; // x0
  __int64 v7; // x1
  AssetData_c *v8; // x8
  System_String_o *name; // x20
  System_String_o *v10; // x19
  System_String_o *v11; // x0
  System_String_o *v12; // x20
  const MethodInfo *v14; // x1
  System_String_o *v15; // x19

  if ( (byte_4B361EB & 1) == 0 )
  {
    sub_1BD3458(&AndroidUtil_TypeInfo, method);
    sub_1BD3458(&AssetData_TypeInfo, v3);
    sub_1BD3458(&AssetManager_TypeInfo, v4);
    sub_1BD3458(&StringLiteral_1117/*".unity3d"*/, v5);
    byte_4B361EB = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v8 = AssetData_TypeInfo;
  name = this->fields.name;
  v10 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v8 = AssetData_TypeInfo;
  }
  if ( !name )
    sub_1BD36B4(Ext, v7);
  v11 = System_String__Replace(
          name,
          v8->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          v8->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
          0LL);
  v12 = v11;
  if ( v10 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    return AndroidUtil__ConvertFileNameIfNeed(v12, 0LL);
  }
  else
  {
    v15 = System_String__Concat_62525248(v11, (System_String_o *)StringLiteral_1117/*".unity3d"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__getShaName(v15, v14);
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
  __int64 v3; // x1
  __int64 v4; // x1
  System_String_o *Ext; // x0
  AssetData_c *v6; // x8
  System_String_o *name; // x19
  System_String_o *v8; // x20
  struct AssetData_StaticFields *static_fields; // x8
  __int64 ASSETBUNDLE_SPLIT_BASE_CHAR; // x1
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x19

  if ( (byte_4B361EA & 1) == 0 )
  {
    sub_1BD3458(&AssetData_TypeInfo, method);
    sub_1BD3458(&AssetManager_TypeInfo, v3);
    sub_1BD3458(&StringLiteral_1117/*".unity3d"*/, v4);
    byte_4B361EA = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v6 = AssetData_TypeInfo;
  name = this->fields.name;
  v8 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v6 = AssetData_TypeInfo;
  }
  static_fields = v6->static_fields;
  ASSETBUNDLE_SPLIT_BASE_CHAR = static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR;
  if ( v8 )
  {
    if ( name )
      return System_String__Replace(
               name,
               ASSETBUNDLE_SPLIT_BASE_CHAR,
               static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR,
               0LL);
LABEL_12:
    sub_1BD36B4(Ext, ASSETBUNDLE_SPLIT_BASE_CHAR);
  }
  if ( !name )
    goto LABEL_12;
  v12 = System_String__Replace(name, ASSETBUNDLE_SPLIT_BASE_CHAR, static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR, 0LL);
  v14 = System_String__Concat_62525248(v12, (System_String_o *)StringLiteral_1117/*".unity3d"*/, 0LL);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getShaName(v14, v13);
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

  if ( (byte_4B361ED & 1) == 0 )
  {
    sub_1BD3458(&CatAndMouseGame_TypeInfo, method);
    byte_4B361ED = 1;
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
    sub_1BD36B4(name, method);
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
  __int64 v3; // x1
  int32_t type; // w8
  AssetManager_c *v5; // x0
  System_String_o *cachePathName; // x20
  System_String_o *CacheName; // x1

  if ( (byte_4B361EC & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_1/*""*/, v3);
    byte_4B361EC = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4B36275 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    byte_4B36275 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  cachePathName = v5->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_62525248(cachePathName, CacheName, 0LL);
}


int32_t __fastcall AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *__fastcall AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t nowVersion; // w8

  if ( (byte_4B361E9 & 1) == 0 )
  {
    sub_1BD3458(&AssetManager_TypeInfo, method);
    sub_1BD3458(&StringLiteral_1/*""*/, v3);
    byte_4B361E9 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( (nowVersion & 0x80000000) != 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_38544956(this, method);
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
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  int32_t _1__state; // w8
  struct AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *bundle; // x21
  const MethodInfo *v11; // x1
  System_Collections_Generic_List_object__o *v12; // x22
  AssetData__SetAssetBundleData_d__61_o **p_list_5__3; // x21
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
  int64_t v26; // x1
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  int v33; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int64_t v44; // x2
  int32_t v45; // w3
  System_String_o *v46; // x4
  BattleSetupInfo_o *v47; // x5
  FollowerInfo_o *v48; // x6
  PartyListViewItem_o *v49; // x7
  int64_t asyncRep_5__2; // x1
  PartyOrganizationUtility_o *p__2__current; // x19
  int64_t v52; // x2
  int32_t v53; // w3
  System_String_o *v54; // x4
  BattleSetupInfo_o *v55; // x5
  FollowerInfo_o *v56; // x6
  PartyListViewItem_o *v57; // x7
  bool result; // w0
  PartyOrganizationUtility_o *p_asyncRep_5__2; // x21
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  struct UnityEngine_Object_array **p_objectList; // x20
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7
  int64_t v73; // x2
  int32_t v74; // w3
  System_String_o *v75; // x4
  BattleSetupInfo_o *v76; // x5
  FollowerInfo_o *v77; // x6
  PartyListViewItem_o *v78; // x7
  struct UnityEngine_Object_array **v79; // x20
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int64_t v81; // x2
  int32_t v82; // w3
  System_String_o *v83; // x4
  BattleSetupInfo_o *v84; // x5
  FollowerInfo_o *v85; // x6
  PartyListViewItem_o *v86; // x7
  int64_t v87; // x1
  PartyOrganizationUtility_o *v88; // x19
  int64_t v89; // x2
  int32_t v90; // w3
  System_String_o *v91; // x4
  BattleSetupInfo_o *v92; // x5
  FollowerInfo_o *v93; // x6
  PartyListViewItem_o *v94; // x7

  v2 = this;
  if ( (byte_4B361F9 & 1) == 0 )
  {
    sub_1BD3458(&Method_System_Collections_Generic_List_Object__AddRange__, method);
    sub_1BD3458(&Method_System_Collections_Generic_List_Object__ToArray__, v3);
    sub_1BD3458(&Method_System_Collections_Generic_List_Object___ctor__, v4);
    sub_1BD3458(&System_Collections_Generic_List_Object__TypeInfo, v5);
    this = (AssetData__SetAssetBundleData_d__61_o *)sub_1BD3458(&UnityEngine_Object_TypeInfo, v6);
    byte_4B361F9 = 1;
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
      (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2, 0LL, v35, v36, v37, v38, v39, v40);
    v33 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v33;
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
    sub_1BD33FC((PartyOrganizationUtility_o *)p_objectList, (int64_t)this, v60, v61, v62, v63, v64, v65);
    *((_BYTE *)p_objectList + 8) = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0LL;
    sub_1BD33FC(p_asyncRep_5__2, 0LL, v67, v68, v69, v70, v71, v72);
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
  if ( UnityEngine_Object__op_Equality(bundle, 0LL, 0LL) || AssetData__GetExt(_4__this, v11) )
    return 0;
  if ( v2->fields.resourceNames )
  {
    v12 = (System_Collections_Generic_List_object__o *)sub_1BD36A4(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v12,
      (const MethodInfo_35C055C *)Method_System_Collections_Generic_List_Object___ctor__);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v12;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__61_o **)&v2->fields._list_5__3;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields._list_5__3, (int64_t)v12, v14, v15, v16, v17, v18, v19);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_40;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_35C0F9C *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v26 = (int64_t)v2->fields.resourceNames;
    v2->fields.__7__wrap3 = (struct System_String_array *)v26;
    sub_1BD33FC((PartyOrganizationUtility_o *)&v2->fields.__7__wrap3, v26, v20, v21, v22, v23, v24, v25);
    v33 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__61_o *)&v2->fields.__7__wrap3;
    _7__wrap3 = v2->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_40;
    max_length = _7__wrap3->max_length;
    if ( v33 < max_length )
    {
      if ( v33 >= (unsigned int)max_length )
        sub_1BD36BC(this, method);
      this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v33],
                       0LL);
        v2->fields._asyncRep_5__2 = AssetAsync;
        sub_1BD33FC(
          (PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2,
          (int64_t)AssetAsync,
          v44,
          v45,
          v46,
          v47,
          v48,
          v49);
        asyncRep_5__2 = (int64_t)v2->fields._asyncRep_5__2;
        v2->fields.__2__current = (Il2CppObject *)asyncRep_5__2;
        p__2__current = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
        sub_1BD33FC(p__2__current, asyncRep_5__2, v52, v53, v54, v55, v56, v57);
        *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 2;
        return 1;
      }
LABEL_40:
      sub_1BD36B4(this, method);
    }
    v2->fields.__7__wrap3 = 0LL;
    sub_1BD33FC((PartyOrganizationUtility_o *)this, 0LL, v27, v28, v29, v30, v31, v32);
    p_asyncRep_5__2 = (PartyOrganizationUtility_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_35C28E8 *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    v79 = &_4__this->fields.objectList;
    sub_1BD33FC((PartyOrganizationUtility_o *)v79, (int64_t)this, v73, v74, v75, v76, v77, v78);
    *((_BYTE *)v79 + 8) = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_40;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0LL);
  v2->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1BD33FC(
    (PartyOrganizationUtility_o *)&v2->fields._asyncRep_5__2,
    (int64_t)AllAssetsAsync,
    v81,
    v82,
    v83,
    v84,
    v85,
    v86);
  v87 = (int64_t)v2->fields._asyncRep_5__2;
  v2->fields.__2__current = (Il2CppObject *)v87;
  v88 = (PartyOrganizationUtility_o *)&v2->fields.__2__current;
  sub_1BD33FC(v88, v87, v89, v90, v91, v92, v93, v94);
  result = 1;
  *(_DWORD *)&v88[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
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

  v2 = sub_1BD346C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BD36A4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BD346C(&Method_AssetData__SetAssetBundleData_d__61_System_Collections_IEnumerator_Reset__);
  sub_1BD3580(v3, v4);
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