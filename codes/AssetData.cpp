void AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  __int64 v9; // x19
  int32_t v10; // w1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w1
  int32_t v18; // w2
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w1
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  int32_t v31; // w1
  int32_t v32; // w2
  int32_t v33; // w3
  System_String_o *v34; // x4
  int32_t v35; // w5
  int64_t v36; // x6
  System_String_o *v37; // x7
  int32_t v38; // w1
  struct AssetData_StaticFields *static_fields; // x0
  int32_t v40; // w2
  int32_t v41; // w3
  System_String_o *v42; // x4
  int32_t v43; // w5
  int64_t v44; // x6
  System_String_o *v45; // x7

  if ( (byte_4CED617 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_9424/*"NarrowFigure/"*/);
    sub_1C7BAE8(&StringLiteral_14669/*"Tutorial/"*/);
    sub_1C7BAE8(&StringLiteral_4384/*"CharaFigure/"*/);
    sub_1C7BAE8(&StringLiteral_4594/*"CommandGraph/"*/);
    sub_1C7BAE8(&StringLiteral_4389/*"CharaGraph/"*/);
    byte_4CED617 = 1;
  }
  *(_QWORD *)AssetData_TypeInfo->static_fields = 0x5F00400040002FLL;
  v1 = sub_1C7BB90(string___TypeInfo, 5);
  if ( !v1 )
    sub_1C7BD40(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_10;
  v10 = StringLiteral_4384/*"CharaFigure/"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4384/*"CharaFigure/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( *(_DWORD *)(v9 + 24) <= 1u )
    goto LABEL_10;
  v17 = StringLiteral_9424/*"NarrowFigure/"*/;
  *(_QWORD *)(v9 + 40) = StringLiteral_9424/*"NarrowFigure/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16);
  if ( *(_DWORD *)(v9 + 24) <= 2u
    || (v24 = StringLiteral_4389/*"CharaGraph/"*/,
        *(_QWORD *)(v9 + 48) = StringLiteral_4389/*"CharaGraph/"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23),
        *(_DWORD *)(v9 + 24) <= 3u)
    || (v31 = StringLiteral_4594/*"CommandGraph/"*/,
        *(_QWORD *)(v9 + 56) = StringLiteral_4594/*"CommandGraph/"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30),
        *(_DWORD *)(v9 + 24) <= 4u) )
  {
LABEL_10:
    sub_1C7BD48(v1);
  }
  v38 = StringLiteral_14669/*"Tutorial/"*/;
  *(_QWORD *)(v9 + 64) = StringLiteral_14669/*"Tutorial/"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v9 + 64), v38, v32, v33, v34, v35, v36, v37);
  static_fields = AssetData_TypeInfo->static_fields;
  static_fields->ResourcesUnloadStartsWithNames = (struct System_String_array *)v9;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&static_fields->ResourcesUnloadStartsWithNames,
    v9,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
}


void AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  int32_t v13; // w1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_String_o **p_keyType; // x19
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7

  if ( (byte_4CED60D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED60D = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = type;
  this->fields.name = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  v13 = StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.attrib, v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0;
  *(p_keyType - 1) = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_keyType, 0, v21, v22, v23, v24, v25, v26);
}


void AssetData___ctor_41067488(
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
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v16->fields.type = type;
  v16->fields.name = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->fields.name, (int32_t)name, v17, v18, v19, v20, v21, v22);
  v16->fields.attrib = attrib;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v16->fields.attrib, (int32_t)attrib, v23, v24, v25, v26, v27, v28);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  *(_DWORD *)&v16[-1].fields.isLoadResources = version;
  v16[-1].fields.entryCount = version;
  *(_DWORD *)&v16[-1].fields.alreadySetIsResourcesUnload = size;
  *(_DWORD *)(&v16[-1].fields.isAssetBundleUnload + 2) = crc;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v16, (int32_t)keyType, v29, v30, v31, v32, v33, v34);
}


void AssetData___ctor_41067628(
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
  int32_t v19; // w3
  System_String_o *v20; // x4
  int32_t v21; // w5
  int64_t v22; // x6
  System_String_o *v23; // x7
  int32_t v24; // w2
  int32_t v25; // w3
  System_String_o *v26; // x4
  int32_t v27; // w5
  int64_t v28; // x6
  System_String_o *v29; // x7
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->fields.name, (int32_t)name, v18, v19, v20, v21, v22, v23);
  v17->fields.attrib = attrib;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v17->fields.attrib, (int32_t)attrib, v24, v25, v26, v27, v28, v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  *(_DWORD *)&v17[-1].fields.isLoadResources = nowVersion;
  v17[-1].fields.entryCount = newVersion;
  *(_DWORD *)&v17[-1].fields.alreadySetIsResourcesUnload = size;
  *(_DWORD *)(&v17[-1].fields.isAssetBundleUnload + 2) = crc;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v17, (int32_t)keyType, v30, v31, v32, v33, v34, v35);
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
  __int64 v5; // x1
  int v6; // w20
  struct System_String_o *v7; // x8
  int32_t v8; // w2

  name = this->fields.name;
  if ( name )
  {
    IndexOf = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0);
    if ( !this->fields.name )
      goto LABEL_13;
    v6 = (int)IndexOf;
    IndexOf = (System_String_o *)System_String__LastIndexOf(this->fields.name, 0x2Eu, 0);
    if ( v6 >= 0 )
      v5 = (unsigned int)(v6 + 1);
    else
      v5 = 0;
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
        return System_String__Substring_64222852(IndexOf, v5, v8, 0);
LABEL_13:
      sub_1C7BD40(IndexOf, v5);
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
  if ( (byte_4CED615 & 1) == 0 )
  {
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    sub_1C7BAE8(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C7BAE8(&UnityEngine_TextAsset_TypeInfo);
    byte_4CED615 = 1;
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
          sub_1C7BD48(this);
        v10 = (UnityEngine_TextAsset_o *)objectList->m_Items[v9];
        if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0)) == 0 )
          sub_1C7BD40(this, name);
        this = (AssetData_o *)System_String__Equals_64212232((System_String_o *)this, name, 0);
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
        return CatAndMouseGame__MouseGame3_41808168(monitor, key, 0);
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
    return CatAndMouseGame__MouseGame3_41808168(monitor, key, 0);
  v24 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v24);
  return CatAndMouseGame__MouseGame3_41808168(monitor, key, 0);
}


System_String_o *AssetData__GetExt(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 IndexOf; // x0
  __int64 v5; // x1
  struct System_String_o *v6; // x8

  name = this->fields.name;
  if ( !name )
    return 0;
  IndexOf = System_String__LastIndexOf(name, 0x2Eu, 0);
  if ( (IndexOf & 0x80000000) != 0 )
    return 0;
  v6 = this->fields.name;
  if ( !v6 )
    sub_1C7BD40(IndexOf, v5);
  if ( v6->fields._stringLength <= (int)IndexOf )
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

  if ( (byte_4CED60F & 1) == 0 )
  {
    sub_1C7BAE8(&NetworkManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24485/*"txt"*/);
    sub_1C7BAE8(&StringLiteral_22944/*"png"*/);
    sub_1C7BAE8(&StringLiteral_21284/*"jpeg"*/);
    sub_1C7BAE8(&StringLiteral_20202/*"htm"*/);
    sub_1C7BAE8(&StringLiteral_17768/*"bytes"*/);
    sub_1C7BAE8(&StringLiteral_21285/*"jpg"*/);
    sub_1C7BAE8(&StringLiteral_25036/*"wav"*/);
    sub_1C7BAE8(&StringLiteral_25197/*"xml"*/);
    sub_1C7BAE8(&StringLiteral_24856/*"usm"*/);
    sub_1C7BAE8(&StringLiteral_22587/*"ogg"*/);
    sub_1C7BAE8(&StringLiteral_20203/*"html"*/);
    byte_4CED60F = 1;
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
  v10 = System_String__Concat_64176912(FILE_URL_SCHEME, Path, 0);
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
        if ( v11 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_25036/*"wav"*/, 0) )
        {
          v12 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0);
        }
        return 0;
      }
      v15 = &StringLiteral_20202/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v11 )
    {
      case 0x4F91B85Cu:
        v15 = &StringLiteral_24856/*"usm"*/;
        break;
      case 0x65B1D004u:
        v15 = &StringLiteral_17768/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v14 = &StringLiteral_22944/*"png"*/;
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
        if ( v11 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22587/*"ogg"*/, 0) )
        {
          v12 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v10, v12, 0);
        }
        return 0;
      }
      v14 = &StringLiteral_21284/*"jpeg"*/;
      goto LABEL_33;
    }
    v15 = &StringLiteral_24485/*"txt"*/;
    goto LABEL_39;
  }
  if ( v11 == -680155184 )
  {
    v15 = &StringLiteral_20203/*"html"*/;
    goto LABEL_39;
  }
  if ( v11 == -630165834 )
  {
    v15 = &StringLiteral_25197/*"xml"*/;
    goto LABEL_39;
  }
  if ( v11 != -624468176 )
    return 0;
  v14 = &StringLiteral_21285/*"jpg"*/;
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
    sub_1C7BD48(this);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_3151750 *method)
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
  __int64 v12; // x1
  long double v13; // q0
  struct UnityEngine_Object_array *v14; // x23
  il2cpp_array_size_t v15; // x8
  AssetData_o *v16; // x20
  unsigned int v17; // w26
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v19; // x21
  Il2CppClass *v20; // x1
  Il2CppClass *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  long double v28; // q0
  AssetData_o *v29; // x22
  _BYTE *v30; // x21
  AssetData_o *v31; // x1
  AssetData_c **v32; // x0
  Il2CppObject **v33; // x0
  System_String_o *v34; // x1
  System_String_o *v35; // x2
  const MethodInfo_3151938 *v36; // x3

  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1C51BD8(method);
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
      sub_1C7BD48(this);
    v9 = objectList->m_Items[v7];
    _0_T = method->rgctx_data->_0_T;
    if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_1C51B7C(v2);
    this = (AssetData_o *)sub_1C7BC24(v9, _0_T);
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
    _1_T = (Il2CppClass *)sub_1C51B7C(v2);
  this = (AssetData_o *)sub_1C7BB90(_1_T, v8);
  v14 = v4->fields.objectList;
  if ( !v14 )
LABEL_38:
    sub_1C7BD40(this, v12);
  v15 = v14->max_length;
  v16 = this;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    for ( i = 0; (__int64)i < (int)v15; ++i )
    {
      if ( i >= (unsigned int)v15 )
        goto LABEL_37;
      v19 = v14->m_Items[i];
      v20 = method->rgctx_data->_0_T;
      if ( (*(&v20->_2.bitflags2 + 2) & 1) == 0 )
        v20 = (Il2CppClass *)sub_1C51B7C(v13);
      this = (AssetData_o *)sub_1C7BC24(v19, v20);
      if ( this )
      {
        if ( !v16 )
          goto LABEL_38;
        v21 = method->rgctx_data->_0_T;
        if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
          v21 = (Il2CppClass *)sub_1C51B7C(v13);
        this = (AssetData_o *)sub_1C7BC24(v19, v21);
        v29 = this;
        v30 = method->rgctx_data->_0_T;
        if ( (v30[309] & 1) == 0 )
        {
          this = (AssetData_o *)sub_1C51B7C(v28);
          v30 = this;
        }
        if ( v29 )
        {
          this = (AssetData_o *)sub_1C7BC24(v29, v30);
          v31 = this;
          if ( !this )
          {
            sub_1C7C0DC(v29);
            return (System_Object_array *)AssetManager__TryGetAssetObject_object_(v33, v34, v35, v36);
          }
        }
        else
        {
          v31 = 0;
        }
        if ( v17 >= LODWORD(v16->fields.name) )
          goto LABEL_37;
        v32 = &v16->klass + (int)v17;
        v32[4] = (AssetData_c *)v31;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v32 + 4), (int32_t)v31, v22, v23, v24, v25, v26, v27);
        ++v17;
      }
      LODWORD(v15) = v14->max_length;
    }
  }
  return (System_Object_array *)v16;
}


System_String_array *AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  UnityEngine_Object_o *name; // x0
  __int64 v5; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v8; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Object_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_4CED614 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CED614 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v8 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v8 >= max_length )
          sub_1C7BD48(name);
        name = objectList->m_Items[v8];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0);
        if ( !v3 )
          break;
        items = v3->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v3->fields._version;
        if ( !items )
          break;
        size = v3->fields._size;
        v18 = name;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v3,
            (Il2CppObject *)name,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
        max_length = objectList->max_length;
        if ( (int)++v8 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1C7BD40(name, v5);
    }
  }
  if ( !v3 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  if ( (byte_4CED616 & 1) == 0 )
  {
    sub_1C7BAE8(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_1C7BAE8(&UnityEngine_TextAsset_TypeInfo);
    byte_4CED616 = 1;
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
          sub_1C7BD48(this);
        v8 = (System_String_o **)objectList->m_Items[v7];
        if ( !v8 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v7], 0)) == 0 )
          sub_1C7BD40(this, name);
        this = (AssetData_o *)System_String__Equals_64212232((System_String_o *)this, name, 0);
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


UnityEngine_Object_o *AssetData__GetObject_41072156(AssetData_o *this, System_String_o *name, const MethodInfo *method)
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
          sub_1C7BD40(this, name);
        this = (AssetData_o *)System_String__Equals_64212232((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(max_length) = objectList->max_length;
        if ( (int)++v6 >= (int)max_length )
          return 0;
      }
LABEL_17:
      sub_1C7BD48(this);
    }
    return 0;
  }
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_3151490 *method)
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
    this = (AssetData_o *)sub_1C51BD8(method);
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
          sub_1C7BD48(this);
        v8 = objectList->m_Items[v7];
        _0_T = method->rgctx_data->_0_T;
        if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C51B7C(v2);
        this = (AssetData_o *)sub_1C7BC24(v8, _0_T);
        if ( this )
          break;
        LODWORD(max_length) = objectList->max_length;
        if ( (__int64)++v7 >= (int)max_length )
          return 0;
      }
      v10 = method->rgctx_data->_0_T;
      if ( (*(&v10->_2.bitflags2 + 2) & 1) == 0 )
        v10 = (Il2CppClass *)sub_1C51B7C(v2);
      v11 = sub_1C7BC24(v8, v10);
      v13 = method->rgctx_data->_0_T;
      if ( (*(&v13->_2.bitflags2 + 2) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1C51B7C(v12);
      if ( v11 )
      {
        result = (Il2CppObject *)sub_1C7BC24(v11, v13);
        if ( result )
          return result;
        sub_1C7C0DC(v11);
      }
    }
  }
  return 0;
}


Il2CppObject *AssetData__GetObject_object__51713432(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_3151598 *method)
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
    this = (AssetData_o *)sub_1C51BD8(method);
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
        sub_1C7BD40(this, name);
      this = (AssetData_o *)System_String__Equals_64212232((System_String_o *)this, name, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (*(&_0_T->_2.bitflags2 + 2) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1C51B7C(v11);
        this = (AssetData_o *)sub_1C7BC24(v10, _0_T);
        if ( this )
          break;
      }
      LODWORD(max_length) = objectList->max_length;
      if ( (int)++v9 >= (int)max_length )
        return 0;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C51B7C(v13);
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
        sub_1C7BD48(this);
      v15 = objectList->m_Items[v14];
      v16 = method->rgctx_data->_0_T;
      if ( (*(&v16->_2.bitflags2 + 2) & 1) == 0 )
        v16 = (Il2CppClass *)sub_1C51B7C(v3);
      this = (AssetData_o *)sub_1C7BC24(v15, v16);
      if ( this )
        break;
      LODWORD(max_length) = objectList->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        return 0;
    }
    v17 = method->rgctx_data->_0_T;
    if ( (*(&v17->_2.bitflags2 + 2) & 1) == 0 )
      v17 = (Il2CppClass *)sub_1C51B7C(v3);
    v18 = v15;
  }
  v19 = sub_1C7BC24(v18, v17);
  v21 = method->rgctx_data->_0_T;
  if ( (*(&v21->_2.bitflags2 + 2) & 1) == 0 )
    v21 = (Il2CppClass *)sub_1C51B7C(v20);
  if ( v19 )
  {
    result = (Il2CppObject *)sub_1C7BC24(v19, v21);
    if ( result )
      return result;
    sub_1C7C0DC(v19);
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
    sub_1C7BD40(0, name);
  return System_String__Equals_64212232(v3, name, 0);
}


bool AssetData__IsSame_41067800(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( this->fields.type != type )
    return 0;
  v4 = this->fields.name;
  if ( !v4 )
    sub_1C7BD40(0, type);
  return System_String__Equals_64212232(v4, name, 0);
}


bool AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  AssetData_o *v8; // x19
  System_Collections_Generic_IEnumerable_T__o **p_objectList; // x20
  struct UnityEngine_Object_array *objectList; // x23
  char isSavedMemoryMode; // w21
  __int64 max_length; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v14; // x11
  __int64 naturalAligment; // x13
  il2cpp_array_size_t v16; // x8
  unsigned __int64 v17; // x24
  UnityEngine_GameObject_c **v18; // x8
  UnityEngine_Object_o *v19; // x21
  Il2CppObject *Component_object; // x22
  struct System_String_o *name; // x8
  AssetData_o *v22; // x21
  unsigned __int64 v23; // x29
  UnityEngine_Object_o *v24; // x22
  System_Collections_Generic_IEnumerable_T__o *v25; // x21
  AssetData___c_c *v26; // x0
  System_Action_object__o *_9__78_0; // x22
  Il2CppObject *v28; // x23
  struct AssetData___c_StaticFields *static_fields; // x0
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  AssetData_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  int32_t v38; // w2
  int32_t v39; // w3
  System_String_o *v40; // x4
  int32_t v41; // w5
  int64_t v42; // x6
  System_String_o *v43; // x7
  bool result; // w0

  v8 = this;
  if ( (byte_4CED613 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_Object__TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_ForEach_Object___);
    sub_1C7BAE8(&DataAsset_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____78863384);
    sub_1C7BAE8(&UnityEngine_GameObject_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&OptionManager_TypeInfo);
    sub_1C7BAE8(&Method_AssetData___c__ReleaseData_b__78_0__);
    this = (AssetData_o *)sub_1C7BAE8(&AssetData___c_TypeInfo);
    byte_4CED613 = 1;
  }
  p_objectList = (System_Collections_Generic_IEnumerable_T__o **)&v8->fields.objectList;
  objectList = v8->fields.objectList;
  if ( v8->fields.type == 1 )
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
          v14 = *m_Items;
          if ( *m_Items )
          {
            naturalAligment = DataAsset_TypeInfo->_2.naturalAligment;
            if ( v14->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
            {
              if ( (DataAsset_c *)v14->klass->_2.typeHierarchy[naturalAligment - 1] != DataAsset_TypeInfo )
                v14 = 0;
            }
            else
            {
              v14 = 0;
            }
          }
          --max_length;
          isSavedMemoryMode |= v14 == 0;
          ++m_Items;
        }
        while ( max_length );
      }
      *p_objectList = 0;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.objectList, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_60;
    }
LABEL_62:
    sub_1C7BD40(this, method);
  }
  if ( objectList )
  {
    v16 = objectList->max_length;
    if ( (int)v16 < 1 )
      goto LABEL_44;
    v17 = 0;
    do
    {
      if ( v17 >= (unsigned int)v16 )
        goto LABEL_61;
      v18 = (UnityEngine_GameObject_c **)objectList->m_Items[v17];
      if ( v18 )
      {
        if ( *v18 == UnityEngine_GameObject_TypeInfo )
          v19 = objectList->m_Items[v17];
        else
          v19 = 0;
      }
      else
      {
        v19 = 0;
      }
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      this = (AssetData_o *)UnityEngine_Object__op_Equality(v19, 0, 0);
      if ( ((unsigned __int8)this & 1) == 0 )
      {
        if ( !v19 )
          goto LABEL_62;
        Component_object = UnityEngine_GameObject__GetComponent_object_(
                             (UnityEngine_GameObject_o *)v19,
                             (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
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
                                (UnityEngine_GameObject_o *)v19,
                                1,
                                (const MethodInfo_31C7D68 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____78863384);
        if ( this )
        {
          name = this->fields.name;
          v22 = this;
          if ( (int)name >= 1 )
          {
            v23 = 0;
            while ( v23 < (unsigned int)name )
            {
              v24 = (UnityEngine_Object_o *)*((_QWORD *)&v22->fields.attrib + v23);
              if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
                j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
              this = (AssetData_o *)UnityEngine_Object__op_Equality(v24, 0, 0);
              if ( ((unsigned __int8)this & 1) == 0 )
              {
                if ( !v24 )
                  goto LABEL_62;
                UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v24, 0, 0);
              }
              LODWORD(name) = v22->fields.name;
              if ( (__int64)++v23 >= (int)name )
                goto LABEL_42;
            }
LABEL_61:
            sub_1C7BD48(this);
          }
        }
      }
LABEL_42:
      LODWORD(v16) = objectList->max_length;
      ++v17;
    }
    while ( (__int64)v17 < (int)v16 );
    if ( *p_objectList )
    {
LABEL_44:
      if ( AssetData__get_IsResourcesUnload(v8, method) )
      {
        v25 = *p_objectList;
        v26 = AssetData___c_TypeInfo;
        if ( !AssetData___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(AssetData___c_TypeInfo);
          v26 = AssetData___c_TypeInfo;
        }
        _9__78_0 = (System_Action_object__o *)v26->static_fields->__9__78_0;
        if ( !_9__78_0 )
        {
          if ( !v26->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v26);
            v26 = AssetData___c_TypeInfo;
          }
          v28 = (Il2CppObject *)v26->static_fields->__9;
          _9__78_0 = (System_Action_object__o *)sub_1C7BD34(System_Action_Object__TypeInfo);
          System_Action_object____ctor(_9__78_0, v28, Method_AssetData___c__ReleaseData_b__78_0__, 0);
          static_fields = AssetData___c_TypeInfo->static_fields;
          static_fields->__9__78_0 = (struct System_Action_Object__o *)_9__78_0;
          sub_1C7BA8C(
            (GrandQuestFolderBoardItem_o *)&static_fields->__9__78_0,
            (int32_t)_9__78_0,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35);
        }
        BasicHelper__ForEach_object_(
          v25,
          (System_Action_T__o *)_9__78_0,
          (const MethodInfo_315C348 *)Method_BasicHelper_ForEach_Object___);
      }
    }
  }
  v8->fields.objectList = 0;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.objectList, 0, v2, v3, v4, v5, v6, v7);
  p_assetBundle = (AssetData_o **)&v8->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)v8->fields.assetBundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(assetBundle, 0, 0) )
  {
    this = *p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_62;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)this, 1, 0);
    *p_assetBundle = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields.assetBundle, 0, v38, v39, v40, v41, v42, v43);
  }
  if ( !OptionManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
LABEL_60:
  v8->fields.entryCount = 0;
  result = isSavedMemoryMode & 1;
  v8->fields.isLoadResources = 0;
  return result;
}


bool AssetData__RemoveEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  Il2CppObject *Instance; // x0
  __int64 v8; // x1

  if ( (byte_4CED611 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CED611 = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v8);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, 0);
  return 1;
}


bool AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4CED612 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_4CED612 = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1C7BD40(0, v5);
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
  __int64 v9; // x1
  int32_t v10; // w2
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  int32_t v16; // w2
  int32_t v17; // w3
  System_String_o *v18; // x4
  int32_t v19; // w5
  int64_t v20; // x6
  System_String_o *v21; // x7
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7

  if ( (byte_4CED60E & 1) == 0 )
  {
    sub_1C7BAE8(&AssetData__SetAssetBundleData_d__71_TypeInfo);
    byte_4CED60E = 1;
  }
  v7 = sub_1C7BD34(AssetData__SetAssetBundleData_d__71_TypeInfo);
  AssetData__SetAssetBundleData_d__71___ctor((AssetData__SetAssetBundleData_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_1C7BD40(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 48), (int32_t)bundle, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 32), (int32_t)resourceNames, v22, v23, v24, v25, v26, v27);
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
  __int64 v20; // x1
  int32_t v21; // w23
  int32_t v22; // w24
  int32_t format; // w25
  System_Byte_array *v24; // x0
  const MethodInfo *v25; // x1
  __int64 v26; // x0
  int32_t v27; // w2
  int32_t v28; // w3
  System_String_o *v29; // x4
  int32_t v30; // w5
  int64_t v31; // x6
  System_String_o *v32; // x7
  struct UnityEngine_Object_array *v33; // x19
  __int64 v34; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  __int64 v41; // x0

  if ( (byte_4CED610 & 1) == 0 )
  {
    sub_1C7BAE8(&DataAsset_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object___TypeInfo);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&UnityEngine_Texture2D_TypeInfo);
    sub_1C7BAE8(&StringLiteral_24485/*"txt"*/);
    sub_1C7BAE8(&StringLiteral_22944/*"png"*/);
    sub_1C7BAE8(&StringLiteral_21284/*"jpeg"*/);
    sub_1C7BAE8(&StringLiteral_20202/*"htm"*/);
    sub_1C7BAE8(&StringLiteral_17768/*"bytes"*/);
    sub_1C7BAE8(&StringLiteral_21285/*"jpg"*/);
    sub_1C7BAE8(&StringLiteral_25036/*"wav"*/);
    sub_1C7BAE8(&StringLiteral_25197/*"xml"*/);
    sub_1C7BAE8(&StringLiteral_22587/*"ogg"*/);
    sub_1C7BAE8(&StringLiteral_20203/*"html"*/);
    byte_4CED610 = 1;
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
                v9 = &StringLiteral_22587/*"ogg"*/;
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
            v12 = &StringLiteral_21284/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v8 )
          {
            case 0xD775A7D0:
              v13 = &StringLiteral_20203/*"html"*/;
              break;
            case 0xDA706EB6:
              v13 = &StringLiteral_25197/*"xml"*/;
              break;
            case 0xDAC75F30:
              v12 = &StringLiteral_21285/*"jpg"*/;
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
                v9 = &StringLiteral_25036/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v13 = &StringLiteral_20202/*"htm"*/;
            goto LABEL_39;
          }
          if ( v8 != -1523209745 )
          {
            if ( v8 == 1706151940 )
            {
              v15 = System_String__op_Equality(v7, (System_String_o *)StringLiteral_17768/*"bytes"*/, 0);
              audioClip = 0;
              if ( v15 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
                audioClip = (DataAsset_o *)sub_1C7BD34(DataAsset_TypeInfo);
                DataAsset___ctor(audioClip, data, 0);
              }
              goto LABEL_45;
            }
            if ( v8 != 1748353692 )
              goto LABEL_33;
            v12 = &StringLiteral_22944/*"png"*/;
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
            v21 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                    texture,
                    texture->klass->vtable._4_get_width.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            v22 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                    texture,
                    texture->klass->vtable._6_get_height.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0);
            audioClip = (DataAsset_o *)sub_1C7BD34(UnityEngine_Texture2D_TypeInfo);
            UnityEngine_Texture2D___ctor_71757732((UnityEngine_Texture2D_o *)audioClip, v21, v22, format, 0, 0);
            v24 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
            UnityEngine_ImageConversion__LoadImage_71979276((UnityEngine_Texture2D_o *)audioClip, v24, 0);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0, 0) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v25);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0);
              v26 = sub_1C7BB90(UnityEngine_Object___TypeInfo, 1);
              *p_objectList = (struct UnityEngine_Object_array *)v26;
              sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.objectList, v26, v27, v28, v29, v30, v31, v32);
              v33 = *p_objectList;
              if ( *p_objectList )
              {
                v34 = sub_1C7BC24(audioClip, v33->obj.klass->_1.element_class);
                if ( !v34 )
                {
                  v41 = sub_1C7BD64(0);
                  sub_1C7BC10(v41, 0);
                }
                if ( !LODWORD(v33->max_length) )
                  sub_1C7BD48(v34);
                v33->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1C7BA8C(
                  (GrandQuestFolderBoardItem_o *)v33->m_Items,
                  (int32_t)audioClip,
                  v35,
                  v36,
                  v37,
                  v38,
                  v39,
                  v40);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1C7BD40(texture, v20);
          }
          v13 = &StringLiteral_24485/*"txt"*/;
        }
LABEL_39:
        v17 = System_String__op_Equality(v7, (System_String_o *)*v13, 0);
        audioClip = 0;
        if ( v17 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0);
          audioClip = (DataAsset_o *)sub_1C7BD34(DataAsset_TypeInfo);
          DataAsset___ctor_41231832(audioClip, text, 0);
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
  struct UnityEngine_Object_array *All_71831552; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_71831552 = UnityEngine_Resources__LoadAll_71831552(Path, 0);
    this->fields.objectList = All_71831552;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_objectList, (int32_t)All_71831552, v6, v7, v8, v9, v10, v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1C7BD40(v12, v13);
    if ( objectList->max_length )
      return 1;
    *p_objectList = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_objectList, 0, v14, v15, v16, v17, v18, v19);
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
  System_String_o *v7; // x7
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.attrib,
    (int32_t)attrib,
    (int32_t)attrib,
    size,
    *(System_String_o **)&crc,
    (int32_t)keyType,
    (int64_t)method,
    v7);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.keyType, (int32_t)keyType, v13, v14, v15, v16, v17, v18);
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
    sub_1C7BD40(0, str);
  return System_String__StartsWith(name, str, 0);
}


System_String_o *AssetData__get_Attrib(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.attrib;
}


System_String_o *AssetData__get_CacheName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *Ext; // x0
  __int64 v4; // x1
  AssetData_c *v5; // x8
  System_String_o *name; // x20
  System_String_o *v7; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v11; // x19

  if ( (byte_4CED60A & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1039/*".unity3d"*/);
    byte_4CED60A = 1;
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
    sub_1C7BD40(Ext, v4);
  v8 = System_String__Replace(
         name,
         v5->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
         v5->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
         0);
  v9 = v8;
  if ( v7 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    return AndroidUtil__ConvertFileNameIfNeed(v9, 0);
  }
  else
  {
    v11 = System_String__Concat_64176912(v8, (System_String_o *)StringLiteral_1039/*".unity3d"*/, 0);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__getShaName(v11, 0);
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
  struct AssetData_StaticFields *static_fields; // x8
  __int64 ASSETBUNDLE_SPLIT_BASE_CHAR; // x1
  System_String_o *v10; // x0
  System_String_o *v11; // x19

  if ( (byte_4CED609 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1039/*".unity3d"*/);
    byte_4CED609 = 1;
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
               0);
LABEL_12:
    sub_1C7BD40(Ext, ASSETBUNDLE_SPLIT_BASE_CHAR);
  }
  if ( !name )
    goto LABEL_12;
  v10 = System_String__Replace(name, ASSETBUNDLE_SPLIT_BASE_CHAR, static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR, 0);
  v11 = System_String__Concat_64176912(v10, (System_String_o *)StringLiteral_1039/*".unity3d"*/, 0);
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

  if ( (byte_4CED607 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_AssetData__get_IsResourcesUnload_b__21_0__);
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&Method_BasicHelper_Any_string____78794632);
    sub_1C7BAE8(&System_Func_string__bool__TypeInfo);
    byte_4CED607 = 1;
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
    v6 = (System_Func_object__bool__o *)sub_1C7BD34(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(v6, (Il2CppObject *)this, Method_AssetData__get_IsResourcesUnload_b__21_0__, 0);
    v7 = BasicHelper__Any_object__51746772(
           ResourcesUnloadStartsWithNames,
           (System_Func_T__bool__o *)v6,
           (const MethodInfo_31597D4 *)Method_BasicHelper_Any_string____78794632);
    isResourcesUnload = v7;
    this->fields.isResourcesUnload = v7;
  }
  return isResourcesUnload != 0;
}


System_String_o *AssetData__get_Key(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *keyType; // x19

  if ( (byte_4CED60C & 1) == 0 )
  {
    sub_1C7BAE8(&CatAndMouseGame_TypeInfo);
    byte_4CED60C = 1;
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
    sub_1C7BD40(name, method);
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

  if ( (byte_4CED60B & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED60B = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4CED619 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED619 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  cachePathName = v4->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_64176912(cachePathName, CacheName, 0);
}


int32_t AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  int32_t nowVersion; // w8

  if ( (byte_4CED608 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CED608 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( nowVersion < 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_41093140(this, 0);
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
  UnityEngine_Object_o *bundle; // x21
  System_Collections_Generic_List_object__o *v7; // x22
  AssetData__SetAssetBundleData_d__71_o **p_list_5__3; // x21
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  struct System_String_array *v21; // x1
  int32_t v22; // w2
  int32_t v23; // w3
  System_String_o *v24; // x4
  int32_t v25; // w5
  int64_t v26; // x6
  System_String_o *v27; // x7
  int v28; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int32_t v30; // w2
  int32_t v31; // w3
  System_String_o *v32; // x4
  int32_t v33; // w5
  int64_t v34; // x6
  System_String_o *v35; // x7
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int32_t v39; // w2
  int32_t v40; // w3
  System_String_o *v41; // x4
  int32_t v42; // w5
  int64_t v43; // x6
  System_String_o *v44; // x7
  Il2CppObject *asyncRep_5__2; // x1
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  bool result; // w0
  GrandQuestFolderBoardItem_o *p_asyncRep_5__2; // x21
  int32_t v55; // w2
  int32_t v56; // w3
  System_String_o *v57; // x4
  int32_t v58; // w5
  int64_t v59; // x6
  System_String_o *v60; // x7
  int32_t v61; // w2
  int32_t v62; // w3
  System_String_o *v63; // x4
  int32_t v64; // w5
  int64_t v65; // x6
  System_String_o *v66; // x7
  int32_t v67; // w2
  int32_t v68; // w3
  System_String_o *v69; // x4
  int32_t v70; // w5
  int64_t v71; // x6
  System_String_o *v72; // x7
  int32_t v73; // w2
  int32_t v74; // w3
  System_String_o *v75; // x4
  int32_t v76; // w5
  int64_t v77; // x6
  System_String_o *v78; // x7
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int32_t v80; // w2
  int32_t v81; // w3
  System_String_o *v82; // x4
  int32_t v83; // w5
  int64_t v84; // x6
  System_String_o *v85; // x7
  Il2CppObject *v86; // x1
  GrandQuestFolderBoardItem_o *v87; // x19
  int32_t v88; // w2
  int32_t v89; // w3
  System_String_o *v90; // x4
  int32_t v91; // w5
  int64_t v92; // x6
  System_String_o *v93; // x7

  v2 = this;
  if ( (byte_4CED61B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Object__AddRange__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Object__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_List_Object__TypeInfo);
    this = (AssetData__SetAssetBundleData_d__71_o *)sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    byte_4CED61B = 1;
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
      (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._asyncRep_5__2, 0, v30, v31, v32, v33, v34, v35);
    v28 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v28;
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (GrandQuestFolderBoardItem_o *)&v2->fields._asyncRep_5__2;
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
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.objectList,
      (int32_t)this,
      v55,
      v56,
      v57,
      v58,
      v59,
      v60);
    _4__this->fields.isLoadResources = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0;
    sub_1C7BA8C(p_asyncRep_5__2, 0, v61, v62, v63, v64, v65, v66);
    method = (const MethodInfo *)v2->fields.bundle;
    if ( _4__this->fields.isAssetBundleUnload )
    {
      _4__this->fields.assetBundle = (struct UnityEngine_AssetBundle_o *)method;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&_4__this->fields.assetBundle,
        (int32_t)method,
        v73,
        v74,
        v75,
        v76,
        v77,
        v78);
    }
    else
    {
      if ( !method )
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
  bundle = (UnityEngine_Object_o *)v2->fields.bundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(bundle, 0, 0) || AssetData__GetExt(_4__this, 0) )
    return 0;
  if ( v2->fields.resourceNames )
  {
    v7 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_Object___ctor__);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v7;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__71_o **)&v2->fields._list_5__3;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields._list_5__3, (int32_t)v7, v9, v10, v11, v12, v13, v14);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_383F008 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v21 = v2->fields.resourceNames;
    v2->fields.__7__wrap3 = v21;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v2->fields.__7__wrap3, (int32_t)v21, v15, v16, v17, v18, v19, v20);
    v28 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__71_o *)&v2->fields.__7__wrap3;
    _7__wrap3 = v2->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_41;
    max_length = _7__wrap3->max_length;
    if ( v28 < max_length )
    {
      if ( v28 >= (unsigned int)max_length )
        sub_1C7BD48(this);
      this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v28],
                       0);
        v2->fields._asyncRep_5__2 = AssetAsync;
        sub_1C7BA8C(
          (GrandQuestFolderBoardItem_o *)&v2->fields._asyncRep_5__2,
          (int32_t)AssetAsync,
          v39,
          v40,
          v41,
          v42,
          v43,
          v44);
        asyncRep_5__2 = (Il2CppObject *)v2->fields._asyncRep_5__2;
        v2->fields.__2__current = asyncRep_5__2;
        p__2__current = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
        sub_1C7BA8C(p__2__current, (int32_t)asyncRep_5__2, v47, v48, v49, v50, v51, v52);
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 2;
        return 1;
      }
LABEL_41:
      sub_1C7BD40(this, method);
    }
    v2->fields.__7__wrap3 = 0;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)this, 0, v22, v23, v24, v25, v26, v27);
    p_asyncRep_5__2 = (GrandQuestFolderBoardItem_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__71_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&_4__this->fields.objectList,
      (int32_t)this,
      v67,
      v68,
      v69,
      v70,
      v71,
      v72);
    _4__this->fields.isLoadResources = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__71_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_41;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0);
  v2->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&v2->fields._asyncRep_5__2,
    (int32_t)AllAssetsAsync,
    v80,
    v81,
    v82,
    v83,
    v84,
    v85);
  v86 = (Il2CppObject *)v2->fields._asyncRep_5__2;
  v2->fields.__2__current = v86;
  v87 = (GrandQuestFolderBoardItem_o *)&v2->fields.__2__current;
  sub_1C7BA8C(v87, (int32_t)v86, v88, v89, v90, v91, v92, v93);
  result = 1;
  LODWORD(v87[-1].fields._ClosedMessage_k__BackingField) = 1;
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_AssetData__SetAssetBundleData_d__71_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  if ( (byte_4CED61A & 1) == 0 )
  {
    sub_1C7BAE8(&AssetData___c_TypeInfo);
    byte_4CED61A = 1;
  }
  v1 = (Il2CppObject *)sub_1C7BD34(AssetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetData___c_TypeInfo->static_fields->__9 = (struct AssetData___c_o *)v1;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)AssetData___c_TypeInfo->static_fields, (int32_t)v1, v2, v3, v4, v5, v6, v7);
}


void AssetData___c___ctor(AssetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetData___c___ReleaseData_b__78_0(AssetData___c_o *this, UnityEngine_Object_o *obj, const MethodInfo *method)
{
  UnityEngine_Resources__UnloadAsset(obj, 0);
}