void AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x19
  int32_t v5; // w1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int32_t v17; // w1
  struct AssetData_StaticFields *static_fields; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3

  if ( (byte_4C41F3F & 1) == 0 )
  {
    sub_1C37058(&AssetData_TypeInfo);
    sub_1C37058(&string___TypeInfo);
    sub_1C37058(&StringLiteral_9398/*"NarrowFigure/"*/);
    sub_1C37058(&StringLiteral_14613/*"Tutorial/"*/);
    sub_1C37058(&StringLiteral_4380/*"CharaFigure/"*/);
    sub_1C37058(&StringLiteral_4590/*"CommandGraph/"*/);
    sub_1C37058(&StringLiteral_4385/*"CharaGraph/"*/);
    byte_4C41F3F = 1;
  }
  *(_QWORD *)AssetData_TypeInfo->static_fields = 0x5F00400040002FLL;
  v1 = sub_1C37100(string___TypeInfo, 5);
  if ( !v1 )
    sub_1C372B4(0);
  v4 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_10;
  v5 = StringLiteral_4380/*"CharaFigure/"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4380/*"CharaFigure/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v1 + 32), v5, v2, v3);
  if ( *(_DWORD *)(v4 + 24) <= 1u )
    goto LABEL_10;
  v8 = StringLiteral_9398/*"NarrowFigure/"*/;
  *(_QWORD *)(v4 + 40) = StringLiteral_9398/*"NarrowFigure/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 40), v8, v6, v7);
  if ( *(_DWORD *)(v4 + 24) <= 2u
    || (v11 = StringLiteral_4385/*"CharaGraph/"*/,
        *(_QWORD *)(v4 + 48) = StringLiteral_4385/*"CharaGraph/"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 48), v11, v9, v10),
        *(_DWORD *)(v4 + 24) <= 3u)
    || (v14 = StringLiteral_4590/*"CommandGraph/"*/,
        *(_QWORD *)(v4 + 56) = StringLiteral_4590/*"CommandGraph/"*/,
        sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 56), v14, v12, v13),
        *(_DWORD *)(v4 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C372BC(v1);
  }
  v17 = StringLiteral_14613/*"Tutorial/"*/;
  *(_QWORD *)(v4 + 64) = StringLiteral_14613/*"Tutorial/"*/;
  sub_1C36FFC((CGThumbnailListItem_o *)(v4 + 64), v17, v15, v16);
  static_fields = AssetData_TypeInfo->static_fields;
  static_fields->ResourcesUnloadStartsWithNames = (struct System_String_array *)v4;
  sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->ResourcesUnloadStartsWithNames, v4, v19, v20);
}


void AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct System_String_o **p_keyType; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C41F35 & 1) == 0 )
  {
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41F35 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = type;
  this->fields.name = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  v9 = StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.attrib, v9, v10, v11);
  this->fields.keyType = 0;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0;
  *(p_keyType - 1) = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)p_keyType, 0, v13, v14);
}


void AssetData___ctor_40505928(
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
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w2
  const MethodInfo *v22; // x3

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v16->fields.type = type;
  v16->fields.name = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.name, (int32_t)name, v17, v18);
  v16->fields.attrib = attrib;
  sub_1C36FFC((CGThumbnailListItem_o *)&v16->fields.attrib, (int32_t)attrib, v19, v20);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  *(_DWORD *)&v16[-1].fields.isLoadResources = version;
  v16[-1].fields.entryCount = version;
  *(_DWORD *)&v16[-1].fields.alreadySetIsResourcesUnload = size;
  *(_DWORD *)(&v16[-1].fields.isAssetBundleUnload + 2) = crc;
  sub_1C36FFC((CGThumbnailListItem_o *)v16, (int32_t)keyType, v21, v22);
}


void AssetData___ctor_40506068(
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
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.name, (int32_t)name, v18, v19);
  v17->fields.attrib = attrib;
  sub_1C36FFC((CGThumbnailListItem_o *)&v17->fields.attrib, (int32_t)attrib, v20, v21);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  *(_DWORD *)&v17[-1].fields.isLoadResources = nowVersion;
  v17[-1].fields.entryCount = newVersion;
  *(_DWORD *)&v17[-1].fields.alreadySetIsResourcesUnload = size;
  *(_DWORD *)(&v17[-1].fields.isAssetBundleUnload + 2) = crc;
  sub_1C36FFC((CGThumbnailListItem_o *)v17, (int32_t)keyType, v22, v23);
}


void AssetData__AddEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8

  entryCount = this->fields.entryCount;
  if ( (entryCount & 0x80000000) == 0 )
    this->fields.entryCount = entryCount + 1;
}


System_String_o *AssetData__GetBaseName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  System_String_o *IndexOf; // x0
  int v5; // w20
  int32_t v6; // w1
  struct System_String_o *v7; // x8
  int32_t v8; // w2

  name = this->fields.name;
  if ( name )
  {
    IndexOf = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0);
    if ( !this->fields.name )
      goto LABEL_13;
    v5 = (int)IndexOf;
    IndexOf = (System_String_o *)System_String__LastIndexOf(this->fields.name, 0x2Eu, 0);
    if ( v5 >= 0 )
      v6 = v5 + 1;
    else
      v6 = 0;
    if ( ((unsigned int)IndexOf & 0x80000000) != 0 )
    {
      v7 = this->fields.name;
      if ( !v7 )
        goto LABEL_13;
      LODWORD(IndexOf) = v7->fields._stringLength;
    }
    v8 = (_DWORD)IndexOf - v6;
    if ( (int)IndexOf > v6 )
    {
      IndexOf = this->fields.name;
      if ( IndexOf )
        return System_String__Substring_63607580(IndexOf, v6, v8, 0);
LABEL_13:
      sub_1C372B4(IndexOf);
    }
  }
  return 0;
}


System_String_o *AssetData__GetDecryptObjectText(
        AssetData_o *this,
        System_String_o *name,
        System_String_o *key,
        const MethodInfo *method)
{
  AssetData_o *v6; // x21
  struct UnityEngine_Object_array *objectList; // x22
  il2cpp_array_size_t max_length; // x10
  __int64 v9; // x23
  UnityEngine_TextAsset_o *v10; // x21
  UnityEngine_TextAsset_c *klass; // x8
  unsigned int naturalAligment; // w9
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
  if ( (byte_4C41F3D & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    sub_1C37058(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C37058(&UnityEngine_TextAsset_TypeInfo);
    byte_4C41F3D = 1;
  }
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( name )
  {
    if ( (int)max_length >= 1 )
    {
      v9 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v9 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v10 = (UnityEngine_TextAsset_o *)objectList->m_Items[v9];
        if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0)) == 0 )
          sub_1C372B4(this);
        this = (AssetData_o *)System_String__Equals_63596960((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = v10->klass;
          naturalAligment = v10->klass->_2.naturalAligment;
          v13 = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
          if ( naturalAligment >= (unsigned int)v13
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[v13 - 1] == UnityEngine_TextAsset_TypeInfo )
          {
            v17 = v10;
            goto LABEL_28;
          }
          v14 = DataAsset_TypeInfo->_2.naturalAligment;
          if ( naturalAligment >= (unsigned int)v14
            && (DataAsset_c *)klass->_2.typeHierarchy[v14 - 1] == DataAsset_TypeInfo )
          {
            break;
          }
        }
        LODWORD(max_length) = objectList->max_length;
        if ( (int)++v9 >= (int)max_length )
          return 0;
      }
      monitor = (System_String_o *)v10[1].monitor;
      v24 = CatAndMouseGame_TypeInfo;
      if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
        return CatAndMouseGame__MouseGame3_41236436(monitor, key, 0);
      goto LABEL_34;
    }
    return 0;
  }
  if ( !max_length || (int)max_length < 1 )
    return 0;
  v15 = (unsigned int)objectList->max_length;
  for ( i = (UnityEngine_TextAsset_o **)objectList->m_Items; ; ++i )
  {
    v17 = *i;
    if ( *i )
    {
      v18 = v17->klass;
      v19 = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
      v20 = v17->klass->_2.naturalAligment;
      if ( v20 >= (unsigned int)v19
        && (UnityEngine_TextAsset_c *)v18->_2.typeHierarchy[v19 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
LABEL_28:
        monitor = UnityEngine_TextAsset__get_text(v17, 0);
        goto LABEL_32;
      }
      v21 = DataAsset_TypeInfo->_2.naturalAligment;
      if ( v20 >= (unsigned int)v21 && (DataAsset_c *)v18->_2.typeHierarchy[v21 - 1] == DataAsset_TypeInfo )
        break;
    }
    if ( !--v15 )
      return 0;
  }
  monitor = (System_String_o *)v17[1].monitor;
LABEL_32:
  if ( CatAndMouseGame_TypeInfo->_2.cctor_finished )
    return CatAndMouseGame__MouseGame3_41236436(monitor, key, 0);
  v24 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v24);
  return CatAndMouseGame__MouseGame3_41236436(monitor, key, 0);
}


System_String_o *AssetData__GetExt(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 IndexOf; // x0
  struct System_String_o *v5; // x8

  name = this->fields.name;
  if ( !name )
    return 0;
  IndexOf = System_String__LastIndexOf(name, 0x2Eu, 0);
  if ( (IndexOf & 0x80000000) != 0 )
    return 0;
  v5 = this->fields.name;
  if ( !v5 )
    sub_1C372B4(IndexOf);
  if ( v5->fields._stringLength <= (int)IndexOf )
    return 0;
  else
    return System_String__Substring(this->fields.name, (int)IndexOf + 1, 0);
}


UnityEngine_Networking_UnityWebRequest_o *AssetData__GetLoadRequest(AssetData_o *this, const MethodInfo *method)
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

  if ( (byte_4C41F37 & 1) == 0 )
  {
    sub_1C37058(&NetworkManager_TypeInfo);
    sub_1C37058(&StringLiteral_24244/*"txt"*/);
    sub_1C37058(&StringLiteral_22729/*"png"*/);
    sub_1C37058(&StringLiteral_21090/*"jpeg"*/);
    sub_1C37058(&StringLiteral_20038/*"htm"*/);
    sub_1C37058(&StringLiteral_17677/*"bytes"*/);
    sub_1C37058(&StringLiteral_21091/*"jpg"*/);
    sub_1C37058(&StringLiteral_24783/*"wav"*/);
    sub_1C37058(&StringLiteral_24942/*"xml"*/);
    sub_1C37058(&StringLiteral_24610/*"usm"*/);
    sub_1C37058(&StringLiteral_22379/*"ogg"*/);
    sub_1C37058(&StringLiteral_20039/*"html"*/);
    byte_4C41F37 = 1;
  }
  if ( this->fields.type )
    return 0;
  Ext = AssetData__GetExt(this, method);
  v6 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v6 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v6->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v4);
  v10 = System_String__Concat_63561656(FILE_URL_SCHEME, Path, 0);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v9);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v10, Key, 0);
  }
  v11 = PrivateImplementationDetails___ComputeStringHash(Ext, 0);
  if ( v11 <= 0x6835C29C )
  {
    if ( v11 <= 0x13E2BD39 )
    {
      if ( v11 != 126868124 )
      {
        if ( v11 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_24783/*"wav"*/, 0) )
        {
          v12 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0);
        }
        return 0;
      }
      v15 = &StringLiteral_20038/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v11 )
    {
      case 0x4F91B85Cu:
        v15 = &StringLiteral_24610/*"usm"*/;
        break;
      case 0x65B1D004u:
        v15 = &StringLiteral_17677/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v14 = &StringLiteral_22729/*"png"*/;
        goto LABEL_33;
      default:
        return 0;
    }
LABEL_39:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v15, 0) )
      return 0;
    return UnityEngine_Networking_UnityWebRequest__Get(v10, 0);
  }
  if ( v11 <= 0xCC3CFC94 )
  {
    if ( v11 != -1523209745 )
    {
      if ( v11 != -1092644061 )
      {
        if ( v11 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22379/*"ogg"*/, 0) )
        {
          v12 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0);
        }
        return 0;
      }
      v14 = &StringLiteral_21090/*"jpeg"*/;
      goto LABEL_33;
    }
    v15 = &StringLiteral_24244/*"txt"*/;
    goto LABEL_39;
  }
  if ( v11 == -680155184 )
  {
    v15 = &StringLiteral_20039/*"html"*/;
    goto LABEL_39;
  }
  if ( v11 == -630165834 )
  {
    v15 = &StringLiteral_24942/*"xml"*/;
    goto LABEL_39;
  }
  if ( v11 != -624468176 )
    return 0;
  v14 = &StringLiteral_21091/*"jpg"*/;
LABEL_33:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v14, 0) )
    return 0;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v10, 0);
}


UnityEngine_Object_o *AssetData__GetObject(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x8
  il2cpp_array_size_t max_length; // x9

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    sub_1C372BC(this);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_30C9180 *method)
{
  long double v2; // q0
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x23
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x24
  unsigned int v8; // w21
  UnityEngine_Object_o *v9; // x22
  Il2CppClass *_0_T; // x1
  Il2CppClass *_1_T; // x0
  long double v12; // q0
  struct UnityEngine_Object_array *v13; // x23
  il2cpp_array_size_t v14; // x8
  AssetData_o *v15; // x20
  unsigned int v16; // w26
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v18; // x21
  Il2CppClass *v19; // x1
  Il2CppClass *v20; // x1
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  long double v23; // q0
  AssetData_o *v24; // x22
  _BYTE *v25; // x21
  AssetData_o *v26; // x1
  AssetData_c **v27; // x0
  Il2CppObject **v28; // x0
  System_String_o *v29; // x1
  System_String_o *v30; // x2
  const MethodInfo_30C9368 *v31; // x3

  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C877C8(method);
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = 0;
  v8 = 0;
  do
  {
    if ( v7 >= (unsigned int)max_length )
LABEL_37:
      sub_1C372BC(this);
    v9 = objectList->m_Items[v7];
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C8776C(v2);
    this = (AssetData_o *)sub_1C37194(v9, _0_T);
    LODWORD(max_length) = objectList->max_length;
    ++v7;
    if ( this )
      ++v8;
  }
  while ( (__int64)v7 < (int)max_length );
  if ( !v8 )
    return 0;
  _1_T = method->rgctx_data->_1_T__;
  if ( (*(&_1_T->_2.bitflags2 + 2) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_1C8776C(v2);
  this = (AssetData_o *)sub_1C37100(_1_T, v8);
  v13 = v4->fields.objectList;
  if ( !v13 )
LABEL_38:
    sub_1C372B4(this);
  v14 = v13->max_length;
  v15 = this;
  if ( (int)v14 >= 1 )
  {
    v16 = 0;
    for ( i = 0; (__int64)i < (int)v14; ++i )
    {
      if ( i >= (unsigned int)v14 )
        goto LABEL_37;
      v18 = v13->m_Items[i];
      v19 = method->rgctx_data->_0_T;
      if ( (*(&v19->_2.bitflags2 + 2) & 1) == 0 )
        v19 = (Il2CppClass *)sub_1C8776C(v12);
      this = (AssetData_o *)sub_1C37194(v18, v19);
      if ( this )
      {
        if ( !v15 )
          goto LABEL_38;
        v20 = method->rgctx_data->_0_T;
        if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
          v20 = (Il2CppClass *)sub_1C8776C(v12);
        this = (AssetData_o *)sub_1C37194(v18, v20);
        v24 = this;
        v25 = method->rgctx_data->_0_T;
        if ( (v25[309] & 1) == 0 )
        {
          this = (AssetData_o *)sub_1C8776C(v23);
          v25 = this;
        }
        if ( v24 )
        {
          this = (AssetData_o *)sub_1C37194(v24, v25);
          v26 = this;
          if ( !this )
          {
            sub_1C37574(v24);
            return (System_Object_array *)AssetManager__TryGetAssetObject_object_(v28, v29, v30, v31);
          }
        }
        else
        {
          v26 = 0;
        }
        if ( v16 >= LODWORD(v15->fields.name) )
          goto LABEL_37;
        v27 = &v15->klass + (int)v16;
        v27[4] = (AssetData_c *)v26;
        sub_1C36FFC((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v26, v21, v22);
        ++v16;
      }
      LODWORD(v14) = v13->max_length;
    }
  }
  return (System_Object_array *)v15;
}


System_String_array *AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  UnityEngine_Object_o *name; // x0
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v7; // x21
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Object_array *items; // x8
  _QWORD *v11; // x9
  __int64 size; // x10
  UnityEngine_Object_o *v13; // x1
  Il2CppClass **v14; // x0

  if ( (byte_4C41F3C & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C41F3C = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= max_length )
          sub_1C372BC(name);
        name = objectList->m_Items[v7];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v11 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v13 = name;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)name,
            *(const MethodInfo_37A3024 **)(*(_QWORD *)(v11[4] + 192LL) + 112LL));
        }
        else
        {
          v14 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v14[4] = (Il2CppClass *)v13;
          sub_1C36FFC((CGThumbnailListItem_o *)(v14 + 4), (int32_t)v13, v8, v9);
        }
        max_length = objectList->max_length;
        if ( (int)++v7 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1C372B4(name);
    }
  }
  if ( !v3 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *AssetData__GetObjectText(AssetData_o *this, System_String_o *name, const MethodInfo *method)
{
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x21
  il2cpp_array_size_t max_length; // x10
  __int64 v7; // x22
  System_String_o **v8; // x20
  System_String_o *v9; // x8
  unsigned int stringLength_low; // w9
  __int64 naturalAligment; // x11
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
  if ( (byte_4C41F3E & 1) == 0 )
  {
    sub_1C37058(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C37058(&UnityEngine_TextAsset_TypeInfo);
    byte_4C41F3E = 1;
  }
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( name )
  {
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v7 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v8 = (System_String_o **)objectList->m_Items[v7];
        if ( !v8 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v7], 0)) == 0 )
          sub_1C372B4(this);
        this = (AssetData_o *)System_String__Equals_63596960((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v9 = *v8;
          stringLength_low = LOBYTE((*v8)[12].fields._stringLength);
          naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
          if ( stringLength_low >= (unsigned int)naturalAligment
            && *((UnityEngine_TextAsset_c **)v9[8].monitor + naturalAligment - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v16 = v8;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0);
          }
          v12 = DataAsset_TypeInfo->_2.naturalAligment;
          if ( stringLength_low >= (unsigned int)v12 && *((DataAsset_c **)v9[8].monitor + v12 - 1) == DataAsset_TypeInfo )
            break;
        }
        LODWORD(max_length) = objectList->max_length;
        if ( (int)++v7 >= (int)max_length )
          return 0;
      }
      return v8[4];
    }
    return 0;
  }
  result = 0;
  if ( max_length && (int)max_length >= 1 )
  {
    v14 = (unsigned int)objectList->max_length;
    for ( i = (System_String_o ***)objectList->m_Items; ; ++i )
    {
      v16 = *i;
      if ( *i )
      {
        v17 = *v16;
        v18 = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
        v19 = LOBYTE((*v16)[12].fields._stringLength);
        if ( v19 >= (unsigned int)v18
          && *((UnityEngine_TextAsset_c **)v17[8].monitor + v18 - 1) == UnityEngine_TextAsset_TypeInfo )
        {
          return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0);
        }
        v20 = DataAsset_TypeInfo->_2.naturalAligment;
        if ( v19 >= (unsigned int)v20 && *((DataAsset_c **)v17[8].monitor + v20 - 1) == DataAsset_TypeInfo )
          break;
      }
      if ( !--v14 )
        return 0;
    }
    return v16[4];
  }
  return result;
}


UnityEngine_Object_o *AssetData__GetObject_40510596(AssetData_o *this, System_String_o *name, const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x21
  il2cpp_array_size_t max_length; // x8
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( name )
  {
    if ( (int)max_length >= 1 )
    {
      v6 = 0;
      while ( (unsigned int)v6 < (unsigned int)max_length )
      {
        v7 = objectList->m_Items[v6];
        if ( !v7 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v6], 0)) == 0 )
          sub_1C372B4(this);
        this = (AssetData_o *)System_String__Equals_63596960((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(max_length) = objectList->max_length;
        if ( (int)++v6 >= (int)max_length )
          return 0;
      }
LABEL_17:
      sub_1C372BC(this);
    }
    return 0;
  }
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_30C8EC0 *method)
{
  long double v2; // q0
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x21
  il2cpp_array_size_t max_length; // x8
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
    this = (AssetData_o *)sub_1C877C8(method);
  objectList = v4->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( (int)max_length >= 1 )
    {
      v7 = 0;
      while ( 1 )
      {
        if ( v7 >= (unsigned int)max_length )
          sub_1C372BC(this);
        v8 = objectList->m_Items[v7];
        _0_T = method->rgctx_data->_0_T;
        if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C8776C(v2);
        this = (AssetData_o *)sub_1C37194(v8, _0_T);
        if ( this )
          break;
        LODWORD(max_length) = objectList->max_length;
        if ( (__int64)++v7 >= (int)max_length )
          return 0;
      }
      v10 = method->rgctx_data->_0_T;
      if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
        v10 = (Il2CppClass *)sub_1C8776C(v2);
      v11 = sub_1C37194(v8, v10);
      v13 = method->rgctx_data->_0_T;
      if ( (*(&v13->_2.bitflags2 + 2) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C8776C(v12);
      if ( v11 )
      {
        result = (Il2CppObject *)sub_1C37194(v11, v13);
        if ( result )
          return result;
        sub_1C37574(v11);
      }
    }
  }
  return 0;
}


Il2CppObject *AssetData__GetObject_object__51154888(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_30C8FC8 *method)
{
  long double v3; // q0
  AssetData_o *v6; // x21
  struct UnityEngine_Object_array *objectList; // x22
  il2cpp_array_size_t max_length; // x8
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
    this = (AssetData_o *)sub_1C877C8(method);
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( name )
  {
    if ( (int)max_length < 1 )
      return 0;
    v9 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v9 >= (unsigned int)max_length )
        goto LABEL_38;
      v10 = objectList->m_Items[v9];
      if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0)) == 0 )
        sub_1C372B4(this);
      this = (AssetData_o *)System_String__Equals_63596960((System_String_o *)this, name, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C8776C(v11);
        this = (AssetData_o *)sub_1C37194(v10, _0_T);
        if ( this )
          break;
      }
      LODWORD(max_length) = objectList->max_length;
      if ( (int)++v9 >= (int)max_length )
        return 0;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C8776C(v13);
    v18 = v10;
  }
  else
  {
    if ( (int)max_length < 1 )
      return 0;
    v14 = 0;
    while ( 1 )
    {
      if ( v14 >= (unsigned int)max_length )
LABEL_38:
        sub_1C372BC(this);
      v15 = objectList->m_Items[v14];
      v16 = method->rgctx_data->_0_T;
      if ( (*(&v16->_2.bitflags2 + 2) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C8776C(v3);
      this = (AssetData_o *)sub_1C37194(v15, v16);
      if ( this )
        break;
      LODWORD(max_length) = objectList->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        return 0;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C8776C(v3);
    v18 = v15;
  }
  v19 = sub_1C37194(v18, v17);
  v21 = method->rgctx_data->_0_T;
  if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
    v21 = (Il2CppClass *)sub_1C8776C(v20);
  if ( v19 )
  {
    result = (Il2CppObject *)sub_1C37194(v19, v21);
    if ( result )
      return result;
    sub_1C37574(v19);
  }
  return 0;
}


bool AssetData__IsDownloadOldVersion(AssetData_o *this, const MethodInfo *method)
{
  int32_t nowVersion; // w8

  nowVersion = this->fields.nowVersion;
  return nowVersion >= 1 && nowVersion != this->fields.newVersion;
}


bool AssetData__IsNeedUpdateVersion(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.nowVersion != this->fields.newVersion;
}


bool AssetData__IsSame(AssetData_o *this, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v3; // x0

  v3 = this->fields.name;
  if ( !v3 )
    sub_1C372B4(0);
  return System_String__Equals_63596960(v3, name, 0);
}


bool AssetData__IsSame_40506240(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( this->fields.type != type )
    return 0;
  v4 = this->fields.name;
  if ( !v4 )
    sub_1C372B4(0);
  return System_String__Equals_63596960(v4, name, 0);
}


bool AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  AssetData_o *v4; // x19
  System_Collections_Generic_IEnumerable_T__o **p_objectList; // x20
  struct UnityEngine_Object_array *objectList; // x23
  char isSavedMemoryMode; // w21
  __int64 max_length; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v10; // x11
  __int64 naturalAligment; // x13
  il2cpp_array_size_t v12; // x8
  unsigned __int64 v13; // x24
  UnityEngine_GameObject_c **v14; // x8
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *Component_object; // x22
  struct System_String_o *name; // x8
  AssetData_o *v18; // x21
  unsigned __int64 v19; // x29
  UnityEngine_Object_o *v20; // x22
  System_Collections_Generic_IEnumerable_T__o *v21; // x21
  AssetData___c_c *v22; // x0
  System_Action_object__o *_9__78_0; // x22
  Il2CppObject *v24; // x23
  struct AssetData___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  AssetData_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool result; // w0

  v4 = this;
  if ( (byte_4C41F3B & 1) == 0 )
  {
    sub_1C37058(&System_Action_Object__TypeInfo);
    sub_1C37058(&Method_BasicHelper_ForEach_Object___);
    sub_1C37058(&DataAsset_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____78176440);
    sub_1C37058(&UnityEngine_GameObject_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&OptionManager_TypeInfo);
    sub_1C37058(&Method_AssetData___c__ReleaseData_b__78_0__);
    this = (AssetData_o *)sub_1C37058(&AssetData___c_TypeInfo);
    byte_4C41F3B = 1;
  }
  p_objectList = (System_Collections_Generic_IEnumerable_T__o **)&v4->fields.objectList;
  objectList = v4->fields.objectList;
  if ( v4->fields.type == 1 )
  {
    if ( objectList )
    {
      isSavedMemoryMode = 0;
      if ( (int)objectList->max_length >= 1 )
      {
        max_length = (unsigned int)objectList->max_length;
        isSavedMemoryMode = 0;
        m_Items = objectList->m_Items;
        do
        {
          v10 = *m_Items;
          if ( *m_Items )
          {
            naturalAligment = DataAsset_TypeInfo->_2.naturalAligment;
            if ( v10->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            {
              if ( (DataAsset_c *)v10->klass->_2.typeHierarchy[naturalAligment - 1] != DataAsset_TypeInfo )
                v10 = 0;
            }
            else
            {
              v10 = 0;
            }
          }
          --max_length;
          isSavedMemoryMode |= v10 == 0;
          ++m_Items;
        }
        while ( max_length );
      }
      *p_objectList = 0;
      sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.objectList, 0, v2, v3);
      goto LABEL_60;
    }
LABEL_62:
    sub_1C372B4(this);
  }
  if ( objectList )
  {
    v12 = objectList->max_length;
    if ( (int)v12 < 1 )
      goto LABEL_44;
    v13 = 0;
    do
    {
      if ( v13 >= (unsigned int)v12 )
        goto LABEL_61;
      v14 = (UnityEngine_GameObject_c **)objectList->m_Items[v13];
      if ( v14 )
      {
        if ( *v14 == UnityEngine_GameObject_TypeInfo )
          v15 = objectList->m_Items[v13];
        else
          v15 = 0;
      }
      else
      {
        v15 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AssetData_o *)UnityEngine_Object__op_Equality(v15, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v15 )
          goto LABEL_62;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v15,
                             (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          if ( !Component_object )
            goto LABEL_62;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)Component_object, 0, 0);
        }
        this = (AssetData_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                (UnityEngine_GameObject_o *)v15,
                                1,
                                (const MethodInfo_313FE78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____78176440);
        if ( this )
        {
          name = this->fields.name;
          v18 = this;
          if ( (int)name >= 1 )
          {
            v19 = 0;
            while ( v19 < (unsigned int)name )
            {
              v20 = (UnityEngine_Object_o *)*((_QWORD *)&v18->fields.attrib + v19);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (AssetData_o *)UnityEngine_Object__op_Equality(v20, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v20 )
                  goto LABEL_62;
                UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v20, 0, 0);
              }
              LODWORD(name) = v18->fields.name;
              if ( (__int64)++v19 >= (int)name )
                goto LABEL_42;
            }
LABEL_61:
            sub_1C372BC(this);
          }
        }
      }
LABEL_42:
      LODWORD(v12) = objectList->max_length;
      ++v13;
    }
    while ( (__int64)v13 < (int)v12 );
    if ( *p_objectList )
    {
LABEL_44:
      if ( AssetData__get_IsResourcesUnload(v4, method) )
      {
        v21 = *p_objectList;
        v22 = AssetData___c_TypeInfo;
        if ( !AssetData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetData___c_TypeInfo);
          v22 = AssetData___c_TypeInfo;
        }
        _9__78_0 = (System_Action_object__o *)v22->static_fields->__9__78_0;
        if ( !_9__78_0 )
        {
          if ( !v22->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v22);
            v22 = AssetData___c_TypeInfo;
          }
          v24 = (Il2CppObject *)v22->static_fields->__9;
          _9__78_0 = (System_Action_object__o *)sub_1C372A4(System_Action_Object__TypeInfo);
          System_Action_object____ctor(_9__78_0, v24, Method_AssetData___c__ReleaseData_b__78_0__, 0);
          static_fields = AssetData___c_TypeInfo->static_fields;
          static_fields->__9__78_0 = (struct System_Action_Object__o *)_9__78_0;
          sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__78_0, (int32_t)_9__78_0, v26, v27);
        }
        BasicHelper__ForEach_object_(
          v21,
          (System_Action_T__o *)_9__78_0,
          (const MethodInfo_30D3C18 *)Method_BasicHelper_ForEach_Object___);
      }
    }
  }
  v4->fields.objectList = 0;
  sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.objectList, 0, v2, v3);
  p_assetBundle = (AssetData_o **)&v4->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)v4->fields.assetBundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assetBundle, 0, 0) )
  {
    this = *p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_62;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)this, 1, 0);
    *p_assetBundle = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v4->fields.assetBundle, 0, v30, v31);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
LABEL_60:
  v4->fields.entryCount = 0;
  result = isSavedMemoryMode & 1;
  v4->fields.isLoadResources = 0;
  return result;
}


bool AssetData__RemoveEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  Il2CppObject *Instance; // x0

  if ( (byte_4C41F39 & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C41F39 = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C372B4(0);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, 0);
  return 1;
}


bool AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0

  if ( (byte_4C41F3A & 1) == 0 )
  {
    sub_1C37058(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4C41F3A = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39ED16C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1C372B4(0);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, 0);
  }
  return entryCount > 0;
}


void AssetData__ResetVersion(AssetData_o *this, const MethodInfo *method)
{
  this->fields.nowVersion = 0;
}


System_Collections_IEnumerator_o *AssetData__SetAssetBundleData(
        AssetData_o *this,
        UnityEngine_AssetBundle_o *bundle,
        System_String_array *resourceNames,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C41F36 & 1) == 0 )
  {
    sub_1C37058(&AssetData__SetAssetBundleData_d__71_TypeInfo);
    byte_4C41F36 = 1;
  }
  v7 = sub_1C372A4(AssetData__SetAssetBundleData_d__71_TypeInfo);
  AssetData__SetAssetBundleData_d__71___ctor((AssetData__SetAssetBundleData_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 40), (int32_t)this, v9, v10);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 48), (int32_t)bundle, v11, v12);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1C36FFC((CGThumbnailListItem_o *)(v7 + 32), (int32_t)resourceNames, v13, v14);
  return (System_Collections_IEnumerator_o *)v7;
}


bool AssetData__SetData(AssetData_o *this, UnityEngine_Networking_DownloadHandler_o *handler, const MethodInfo *method)
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
  int32_t v20; // w23
  int32_t v21; // w24
  int32_t format; // w25
  System_Byte_array *v23; // x0
  const MethodInfo *v24; // x1
  __int64 v25; // x0
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct UnityEngine_Object_array *v28; // x19
  __int64 v29; // x0
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  __int64 v32; // x0

  if ( (byte_4C41F38 & 1) == 0 )
  {
    sub_1C37058(&DataAsset_TypeInfo);
    sub_1C37058(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo);
    sub_1C37058(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C37058(&UnityEngine_Object___TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&UnityEngine_Texture2D_TypeInfo);
    sub_1C37058(&StringLiteral_24244/*"txt"*/);
    sub_1C37058(&StringLiteral_22729/*"png"*/);
    sub_1C37058(&StringLiteral_21090/*"jpeg"*/);
    sub_1C37058(&StringLiteral_20038/*"htm"*/);
    sub_1C37058(&StringLiteral_17677/*"bytes"*/);
    sub_1C37058(&StringLiteral_21091/*"jpg"*/);
    sub_1C37058(&StringLiteral_24783/*"wav"*/);
    sub_1C37058(&StringLiteral_24942/*"xml"*/);
    sub_1C37058(&StringLiteral_22379/*"ogg"*/);
    sub_1C37058(&StringLiteral_20039/*"html"*/);
    byte_4C41F38 = 1;
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
        v8 = PrivateImplementationDetails___ComputeStringHash(Ext, 0);
        if ( v8 > 0xA535A9EF )
        {
          if ( v8 <= 0xCC3CFC94 )
          {
            if ( v8 != -1092644061 )
            {
              if ( v8 == -868418412 )
              {
                v9 = &StringLiteral_22379/*"ogg"*/;
LABEL_18:
                v10 = System_String__op_Equality(v7, (System_String_o *)*v9, 0);
                audioClip = 0;
                if ( !v10 )
                  goto LABEL_45;
                if ( (UnityEngine_Networking_DownloadHandlerAudioClip_c *)handler->klass == UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo )
                {
                  audioClip = (DataAsset_o *)UnityEngine_Networking_DownloadHandlerAudioClip__get_audioClip(
                                               (UnityEngine_Networking_DownloadHandlerAudioClip_o *)handler,
                                               0);
                  goto LABEL_45;
                }
              }
LABEL_33:
              audioClip = 0;
              goto LABEL_45;
            }
            v12 = &StringLiteral_21090/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v8 )
          {
            case 0xD775A7D0:
              v13 = &StringLiteral_20039/*"html"*/;
              break;
            case 0xDA706EB6:
              v13 = &StringLiteral_24942/*"xml"*/;
              break;
            case 0xDAC75F30:
              v12 = &StringLiteral_21091/*"jpg"*/;
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
                v9 = &StringLiteral_24783/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v13 = &StringLiteral_20038/*"htm"*/;
            goto LABEL_39;
          }
          if ( v8 != -1523209745 )
          {
            if ( v8 == 1706151940 )
            {
              v15 = System_String__op_Equality(v7, (System_String_o *)StringLiteral_17677/*"bytes"*/, 0);
              audioClip = 0;
              if ( v15 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
                audioClip = (DataAsset_o *)sub_1C372A4(DataAsset_TypeInfo);
                DataAsset___ctor(audioClip, data, 0);
              }
              goto LABEL_45;
            }
            if ( v8 != 1748353692 )
              goto LABEL_33;
            v12 = &StringLiteral_22729/*"png"*/;
LABEL_31:
            v14 = System_String__op_Equality(v7, (System_String_o *)*v12, 0);
            audioClip = 0;
            if ( !v14 )
              goto LABEL_45;
            if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass != UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
              goto LABEL_33;
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            v20 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                    texture,
                    texture->klass->vtable._4_get_width.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                    texture,
                    texture->klass->vtable._6_get_height.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0);
            audioClip = (DataAsset_o *)sub_1C372A4(UnityEngine_Texture2D_TypeInfo);
            UnityEngine_Texture2D___ctor_71154968((UnityEngine_Texture2D_o *)audioClip, v20, v21, format, 0, 0);
            v23 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
            UnityEngine_ImageConversion__LoadImage_71375072((UnityEngine_Texture2D_o *)audioClip, v23, 0);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0, 0) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v24);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0);
              v25 = sub_1C37100(UnityEngine_Object___TypeInfo, 1);
              *p_objectList = (struct UnityEngine_Object_array *)v25;
              sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.objectList, v25, v26, v27);
              v28 = *p_objectList;
              if ( *p_objectList )
              {
                v29 = sub_1C37194(audioClip, v28->obj.klass->_1.element_class);
                if ( !v29 )
                {
                  v32 = sub_1C372D8(0);
                  sub_1C37180(v32, 0);
                }
                if ( !LODWORD(v28->max_length) )
                  sub_1C372BC(v29);
                v28->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1C36FFC((CGThumbnailListItem_o *)v28->m_Items, (int32_t)audioClip, v30, v31);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1C372B4(texture);
          }
          v13 = &StringLiteral_24244/*"txt"*/;
        }
LABEL_39:
        v17 = System_String__op_Equality(v7, (System_String_o *)*v13, 0);
        audioClip = 0;
        if ( v17 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0);
          audioClip = (DataAsset_o *)sub_1C372A4(DataAsset_TypeInfo);
          DataAsset___ctor_40667560(audioClip, text, 0);
        }
        goto LABEL_45;
      }
    }
  }
  return (char)Ext;
}


bool AssetData__SetResource(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array **p_objectList; // x19
  System_String_o *Path; // x0
  struct UnityEngine_Object_array *All_71228664; // x0
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_71228664 = UnityEngine_Resources__LoadAll_71228664(Path, 0);
    this->fields.objectList = All_71228664;
    sub_1C36FFC((CGThumbnailListItem_o *)p_objectList, (int32_t)All_71228664, v6, v7);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C372B4(v8);
    if ( objectList->max_length )
      return 1;
    *p_objectList = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)p_objectList, 0, v9, v10);
  }
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool AssetData__SetUpdateInfo(
        AssetData_o *this,
        int32_t version,
        System_String_o *attrib,
        int32_t size,
        uint32_t crc,
        System_String_o *keyType,
        const MethodInfo *method)
{
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_1C36FFC(
    (CGThumbnailListItem_o *)&this->fields.attrib,
    (int32_t)attrib,
    (int32_t)attrib,
    *(const MethodInfo **)&size);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.keyType, (int32_t)keyType, v12, v13);
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


bool AssetData__UpdateVersion(AssetData_o *this, const MethodInfo *method)
{
  int32_t newVersion; // w9
  bool v3; // w8

  newVersion = this->fields.newVersion;
  v3 = this->fields.nowVersion != newVersion;
  this->fields.nowVersion = newVersion;
  return v3;
}


bool AssetData___get_IsResourcesUnload_b__21_0(AssetData_o *this, System_String_o *str, const MethodInfo *method)
{
  System_String_o *name; // x0

  name = this->fields.name;
  if ( !name )
    sub_1C372B4(0);
  return System_String__StartsWith(name, str, 0);
}


System_String_o *AssetData__get_Attrib(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.attrib;
}


System_String_o *AssetData__get_CacheName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *Ext; // x0
  AssetData_c *v4; // x8
  System_String_o *name; // x20
  System_String_o *v6; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x20
  System_String_o *v10; // x19

  if ( (byte_4C41F32 & 1) == 0 )
  {
    sub_1C37058(&AndroidUtil_TypeInfo);
    sub_1C37058(&AssetData_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_1045/*".unity3d"*/);
    byte_4C41F32 = 1;
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
  if ( !name )
    sub_1C372B4(Ext);
  v7 = System_String__Replace(
         name,
         v4->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
         v4->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
         0);
  v8 = v7;
  if ( v6 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    return AndroidUtil__ConvertFileNameIfNeed(v8, 0);
  }
  else
  {
    v10 = System_String__Concat_63561656(v7, (System_String_o *)StringLiteral_1045/*".unity3d"*/, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__getShaName(v10, 0);
  }
}


uint32_t AssetData__get_Crc(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.crc;
}


int32_t AssetData__get_DataType(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.type;
}


System_String_o *AssetData__get_DownloadName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *Ext; // x0
  AssetData_c *v4; // x8
  System_String_o *name; // x19
  System_String_o *v6; // x20
  uint16_t *p_ASSETBUNDLE_SPLIT_BASE_CHAR; // x8
  uint16_t v8; // w1
  System_String_o *v10; // x0
  System_String_o *v11; // x19

  if ( (byte_4C41F31 & 1) == 0 )
  {
    sub_1C37058(&AssetData_TypeInfo);
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_1045/*".unity3d"*/);
    byte_4C41F31 = 1;
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
  p_ASSETBUNDLE_SPLIT_BASE_CHAR = &v4->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR;
  v8 = *p_ASSETBUNDLE_SPLIT_BASE_CHAR;
  if ( v6 )
  {
    if ( name )
      return System_String__Replace(name, v8, p_ASSETBUNDLE_SPLIT_BASE_CHAR[3], 0);
LABEL_12:
    sub_1C372B4(Ext);
  }
  if ( !name )
    goto LABEL_12;
  v10 = System_String__Replace(name, v8, p_ASSETBUNDLE_SPLIT_BASE_CHAR[2], 0);
  v11 = System_String__Concat_63561656(v10, (System_String_o *)StringLiteral_1045/*".unity3d"*/, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getShaName(v11, 0);
}


int32_t AssetData__get_EntryCount(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.entryCount;
}


bool AssetData__get_IsAssetBundle(AssetData_o *this, const MethodInfo *method)
{
  return !this->fields.type && AssetData__GetExt(this, method) == 0;
}


bool AssetData__get_IsAssetBundleUnload(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.isAssetBundleUnload;
}


bool AssetData__get_IsEmpty(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList == 0;
}


bool AssetData__get_IsLoadResources(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.isLoadResources;
}


bool AssetData__get_IsResourcesUnload(AssetData_o *this, const MethodInfo *method)
{
  int isResourcesUnload; // w8
  AssetData_c *v4; // x0
  System_Object_array *ResourcesUnloadStartsWithNames; // x20
  System_Func_object__bool__o *v6; // x21
  bool v7; // w0

  if ( (byte_4C41F2F & 1) == 0 )
  {
    sub_1C37058(&Method_AssetData__get_IsResourcesUnload_b__21_0__);
    sub_1C37058(&AssetData_TypeInfo);
    sub_1C37058(&Method_BasicHelper_Any_string____78108176);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    byte_4C41F2F = 1;
  }
  if ( this->fields.alreadySetIsResourcesUnload )
  {
    isResourcesUnload = this->fields.isResourcesUnload;
  }
  else
  {
    this->fields.alreadySetIsResourcesUnload = 1;
    v4 = AssetData_TypeInfo;
    if ( !AssetData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
      v4 = AssetData_TypeInfo;
    }
    ResourcesUnloadStartsWithNames = (System_Object_array *)v4->static_fields->ResourcesUnloadStartsWithNames;
    v6 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(v6, (Il2CppObject *)this, Method_AssetData__get_IsResourcesUnload_b__21_0__, 0);
    v7 = BasicHelper__Any_object__51187876(
           ResourcesUnloadStartsWithNames,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_30D10A4 *)Method_BasicHelper_Any_string____78108176);
    isResourcesUnload = v7;
    this->fields.isResourcesUnload = v7;
  }
  return isResourcesUnload != 0;
}


System_String_o *AssetData__get_Key(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *keyType; // x19

  if ( (byte_4C41F34 & 1) == 0 )
  {
    sub_1C37058(&CatAndMouseGame_TypeInfo);
    byte_4C41F34 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.keyType, 0) )
    return 0;
  keyType = this->fields.keyType;
  if ( !CatAndMouseGame_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  return CatAndMouseGame__GetAssetbundleKey(keyType, 0);
}


System_String_o *AssetData__get_LastName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0

  name = this->fields.name;
  if ( !name )
    goto LABEL_6;
  name = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0);
  if ( ((unsigned int)name & 0x80000000) == 0 )
  {
    if ( this->fields.name )
      return System_String__Substring(this->fields.name, (int)name + 1, 0);
LABEL_6:
    sub_1C372B4(name);
  }
  return this->fields.name;
}


System_String_o *AssetData__get_Name(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.name;
}


int32_t AssetData__get_NowVersion(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.nowVersion;
}


System_String_o *AssetData__get_Path(AssetData_o *this, const MethodInfo *method)
{
  int32_t type; // w8
  AssetManager_c *v4; // x0
  System_String_o *cachePathName; // x20
  System_String_o *CacheName; // x1

  if ( (byte_4C41F33 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41F33 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4C41F41 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    byte_4C41F41 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  cachePathName = v4->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_63561656(cachePathName, CacheName, 0);
}


int32_t AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  int32_t nowVersion; // w8

  if ( (byte_4C41F30 & 1) == 0 )
  {
    sub_1C37058(&AssetManager_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C41F30 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( nowVersion < 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_40531580(this, 0);
}


void AssetData__set_IsAssetBundleUnload(AssetData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isAssetBundleUnload = value;
}


void AssetData__set_IsResourcesUnload(AssetData_o *this, bool value, const MethodInfo *method)
{
  this->fields.alreadySetIsResourcesUnload = 1;
  this->fields.isResourcesUnload = value;
}


void AssetData__SetAssetBundleData_d__71___ctor(
        AssetData__SetAssetBundleData_d__71_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool AssetData__SetAssetBundleData_d__71__MoveNext(
        AssetData__SetAssetBundleData_d__71_o *this,
        const MethodInfo *method)
{
  AssetData__SetAssetBundleData_d__71_o *v2; // x19
  int32_t _1__state; // w8
  struct AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  AssetData__SetAssetBundleData_d__71_o **p_list_5__3; // x21
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  System_Collections_Generic_IEnumerable_T__o *objectList; // x1
  struct System_String_array *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  int v17; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  Il2CppObject *asyncRep_5__2; // x1
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  bool result; // w0
  CGThumbnailListItem_o *p_asyncRep_5__2; // x21
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  struct UnityEngine_AssetBundle_o *bundle; // x1
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  Il2CppObject *v44; // x1
  CGThumbnailListItem_o *v45; // x19
  int32_t v46; // w2
  const MethodInfo *v47; // x3

  v2 = this;
  if ( (byte_4C41F43 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_Object__AddRange__);
    sub_1C37058(&Method_System_Collections_Generic_List_Object__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C37058(&System_Collections_Generic_List_Object__TypeInfo);
    this = (AssetData__SetAssetBundleData_d__71_o *)sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C41F43 = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    list_5__3 = (System_Collections_Generic_List_object__o *)v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__71_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0);
    if ( !list_5__3 )
      goto LABEL_41;
    System_Collections_Generic_List_object___AddRange(
      list_5__3,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._asyncRep_5__2, 0, v19, v20);
    v17 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v17;
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (CGThumbnailListItem_o *)&v2->fields._asyncRep_5__2;
    this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__71_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.objectList, (int32_t)this, v32, v33);
    _4__this->fields.isLoadResources = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0;
    sub_1C36FFC(p_asyncRep_5__2, 0, v34, v35);
    bundle = v2->fields.bundle;
    if ( _4__this->fields.isAssetBundleUnload )
    {
      _4__this->fields.assetBundle = bundle;
      sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.assetBundle, (int32_t)bundle, v38, v39);
    }
    else
    {
      if ( !bundle )
        goto LABEL_41;
      UnityEngine_AssetBundle__Unload(v2->fields.bundle, 0, 0);
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  resourceNames = v2->fields.resourceNames;
  v2->fields.__1__state = -1;
  if ( resourceNames )
  {
    if ( !_4__this )
      goto LABEL_41;
  }
  else
  {
    if ( !_4__this )
      goto LABEL_41;
    if ( _4__this->fields.objectList )
      return 0;
  }
  if ( _4__this->fields.type )
    return 0;
  v6 = (UnityEngine_Object_o *)v2->fields.bundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v6, 0, 0) || AssetData__GetExt(_4__this, 0) )
    return 0;
  if ( v2->fields.resourceNames )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_Object___ctor__);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v7;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__71_o **)&v2->fields._list_5__3;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._list_5__3, (int32_t)v7, v9, v10);
    objectList = (System_Collections_Generic_IEnumerable_T__o *)_4__this->fields.objectList;
    if ( objectList )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        objectList,
        (const MethodInfo_37A3230 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v14 = v2->fields.resourceNames;
    v2->fields.__7__wrap3 = v14;
    sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields.__7__wrap3, (int32_t)v14, v11, v12);
    v17 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__71_o *)&v2->fields.__7__wrap3;
    _7__wrap3 = v2->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_41;
    max_length = _7__wrap3->max_length;
    if ( v17 < max_length )
    {
      if ( v17 >= (unsigned int)max_length )
        sub_1C372BC(this);
      this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v17],
                       0);
        v2->fields._asyncRep_5__2 = AssetAsync;
        sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._asyncRep_5__2, (int32_t)AssetAsync, v24, v25);
        asyncRep_5__2 = (Il2CppObject *)v2->fields._asyncRep_5__2;
        v2->fields.__2__current = asyncRep_5__2;
        p__2__current = (CGThumbnailListItem_o *)&v2->fields.__2__current;
        sub_1C36FFC(p__2__current, (int32_t)asyncRep_5__2, v28, v29);
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 2;
        return 1;
      }
LABEL_41:
      sub_1C372B4(this);
    }
    v2->fields.__7__wrap3 = 0;
    sub_1C36FFC((CGThumbnailListItem_o *)this, 0, v15, v16);
    p_asyncRep_5__2 = (CGThumbnailListItem_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__71_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    sub_1C36FFC((CGThumbnailListItem_o *)&_4__this->fields.objectList, (int32_t)this, v36, v37);
    _4__this->fields.isLoadResources = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_41;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0);
  v2->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1C36FFC((CGThumbnailListItem_o *)&v2->fields._asyncRep_5__2, (int32_t)AllAssetsAsync, v42, v43);
  v44 = (Il2CppObject *)v2->fields._asyncRep_5__2;
  v2->fields.__2__current = v44;
  v45 = (CGThumbnailListItem_o *)&v2->fields.__2__current;
  sub_1C36FFC(v45, (int32_t)v44, v46, v47);
  result = 1;
  LODWORD(v45[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
  return result;
}


Il2CppObject *AssetData__SetAssetBundleData_d__71__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        AssetData__SetAssetBundleData_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn AssetData__SetAssetBundleData_d__71__System_Collections_IEnumerator_Reset(
        AssetData__SetAssetBundleData_d__71_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C3706C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C372A4(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C3706C(&Method_AssetData__SetAssetBundleData_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C37180(v3, v4);
}


Il2CppObject *AssetData__SetAssetBundleData_d__71__System_Collections_IEnumerator_get_Current(
        AssetData__SetAssetBundleData_d__71_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void AssetData__SetAssetBundleData_d__71__System_IDisposable_Dispose(
        AssetData__SetAssetBundleData_d__71_o *this,
        const MethodInfo *method)
{
  ;
}


void AssetData___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C41F42 & 1) == 0 )
  {
    sub_1C37058(&AssetData___c_TypeInfo);
    byte_4C41F42 = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(AssetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetData___c_TypeInfo->static_fields->__9 = (struct AssetData___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)AssetData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void AssetData___c___ctor(AssetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetData___c___ReleaseData_b__78_0(AssetData___c_o *this, UnityEngine_Object_o *obj, const MethodInfo *method)
{
  UnityEngine_Resources__UnloadAsset(obj, 0);
}