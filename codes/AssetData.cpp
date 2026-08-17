void AssetData___cctor(const MethodInfo *method)
{
  Il2CppClass *v1; // x0
  __int64 v2; // x0
  __int64 v3; // x1
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  __int64 v10; // x19
  int32_t v11; // w1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  int32_t v18; // w1
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  int32_t v25; // w1
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  int32_t v39; // w1
  struct AssetData_StaticFields *static_fields; // x0
  System_String_o *v41; // x2
  System_String_o *v42; // x3
  int32_t v43; // w4
  int32_t v44; // w5
  bool v45; // w6
  bool v46; // w7

  if ( (byte_596F738 & 1) == 0 )
  {
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_9784/*"NarrowFigure/"*/);
    sub_2213A60(&StringLiteral_15216/*"Tutorial/"*/);
    sub_2213A60(&StringLiteral_4551/*"CharaFigure/"*/);
    sub_2213A60(&StringLiteral_4765/*"CommandGraph/"*/);
    sub_2213A60(&StringLiteral_4556/*"CharaGraph/"*/);
    byte_596F738 = 1;
  }
  v1 = string___TypeInfo;
  *(_QWORD *)AssetData_TypeInfo->static_fields = 0x5F00400040002FLL;
  v2 = sub_2213B20(v1, 5);
  if ( !v2 )
    sub_2213CDC(0, v3);
  v10 = v2;
  if ( !*(_DWORD *)(v2 + 24) )
    goto LABEL_10;
  v11 = StringLiteral_4551/*"CharaFigure/"*/;
  *(_QWORD *)(v2 + 32) = StringLiteral_4551/*"CharaFigure/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v2 + 32), v11, v4, v5, v6, v7, v8, v9);
  if ( (*(_DWORD *)(v10 + 24) & 0xFFFFFFFE) == 0 )
    goto LABEL_10;
  v18 = StringLiteral_9784/*"NarrowFigure/"*/;
  *(_QWORD *)(v10 + 40) = StringLiteral_9784/*"NarrowFigure/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 40), v18, v12, v13, v14, v15, v16, v17);
  if ( *(_DWORD *)(v10 + 24) <= 2u
    || (v25 = StringLiteral_4556/*"CharaGraph/"*/,
        *(_QWORD *)(v10 + 48) = StringLiteral_4556/*"CharaGraph/"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 48), v25, v19, v20, v21, v22, v23, v24),
        (*(_DWORD *)(v10 + 24) & 0xFFFFFFFC) == 0)
    || (v32 = StringLiteral_4765/*"CommandGraph/"*/,
        *(_QWORD *)(v10 + 56) = StringLiteral_4765/*"CommandGraph/"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 56), v32, v26, v27, v28, v29, v30, v31),
        *(_DWORD *)(v10 + 24) <= 4u) )
  {
LABEL_10:
    sub_2213CE4(v2);
  }
  v39 = StringLiteral_15216/*"Tutorial/"*/;
  *(_QWORD *)(v10 + 64) = StringLiteral_15216/*"Tutorial/"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v10 + 64), v39, v33, v34, v35, v36, v37, v38);
  static_fields = AssetData_TypeInfo->static_fields;
  static_fields->ResourcesUnloadStartsWithNames = (struct System_String_array *)v10;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&static_fields->ResourcesUnloadStartsWithNames,
    v10,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
}


void AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  int32_t v13; // w1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7

  if ( (byte_596F72E & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F72E = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = type;
  this->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v7, v8, v9, v10, v11, v12);
  v13 = (int)StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.attrib, v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0;
  *(_QWORD *)&this->fields.nowVersion = 0;
  *(_QWORD *)&this->fields.size = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.keyType, 0, v20, v21, v22, v23, v24, v25);
}


void AssetData___ctor_47468088(
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
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7

  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.type = type;
  this->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.name, (int32_t)name, v17, v18, v19, v20, v21, v22);
  this->fields.attrib = attrib;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.attrib, (int32_t)attrib, v23, v24, v25, v26, v27, v28);
  this->fields.keyType = keyType;
  this->fields.nowVersion = version;
  this->fields.newVersion = version;
  this->fields.size = size;
  this->fields.crc = crc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.keyType, (int32_t)keyType, v29, v30, v31, v32, v33, v34);
}


void AssetData___ctor_47468228(
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
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->fields.name, (int32_t)name, v18, v19, v20, v21, v22, v23);
  v17->fields.attrib = attrib;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v17->fields.attrib, (int32_t)attrib, v24, v25, v26, v27, v28, v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  *(_DWORD *)&v17[-1].fields.isLoadResources = nowVersion;
  v17[-1].fields.entryCount = newVersion;
  *(_DWORD *)&v17[-1].fields.alreadySetIsResourcesUnload = size;
  *(_DWORD *)(&v17[-1].fields.isAssetBundleUnload + 2) = crc;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v17, (int32_t)keyType, v30, v31, v32, v33, v34, v35);
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
        return System_String__Substring_75702848(IndexOf, v5, v8, 0);
LABEL_13:
      sub_2213CDC(IndexOf, v5);
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
  UnityEngine_TextAsset_c *v11; // x8
  unsigned int v12; // w9
  __int64 v13; // x11
  __int64 v14; // x11
  __int64 v15; // x10
  UnityEngine_TextAsset_o **i; // x11
  UnityEngine_TextAsset_o *v17; // x0
  UnityEngine_TextAsset_c *klass; // x12
  __int64 naturalAligment; // x14
  unsigned int v20; // w13
  __int64 v21; // x14
  System_String_o *text; // x20

  v6 = this;
  if ( (byte_596F736 & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    sub_2213A60(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_2213A60(&UnityEngine_TextAsset_TypeInfo);
    byte_596F736 = 1;
  }
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( !name )
  {
    if ( (int)max_length >= 1 )
    {
      v15 = (unsigned int)objectList->max_length;
      for ( i = (UnityEngine_TextAsset_o **)objectList->m_Items; ; ++i )
      {
        v17 = *i;
        if ( *i )
        {
          klass = v17->klass;
          naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
          v20 = v17->klass->_2.naturalAligment;
          if ( v20 >= (unsigned int)naturalAligment
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[naturalAligment - 1] == UnityEngine_TextAsset_TypeInfo )
          {
LABEL_27:
            text = UnityEngine_TextAsset__get_text(v17, 0);
            goto LABEL_30;
          }
          v21 = DataAsset_TypeInfo->_2.naturalAligment;
          if ( v20 >= (unsigned int)v21 && (DataAsset_c *)klass->_2.typeHierarchy[v21 - 1] == DataAsset_TypeInfo )
            break;
        }
        if ( !--v15 )
          return 0;
      }
      text = (System_String_o *)v17[1].monitor;
      goto LABEL_30;
    }
    return 0;
  }
  if ( (int)max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)max_length )
      sub_2213CE4(this);
    v10 = (UnityEngine_TextAsset_o *)objectList->m_Items[v9];
    if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0)) == 0 )
      sub_2213CDC(this, name);
    this = (AssetData_o *)System_String__Equals_75686512((System_String_o *)this, name, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v11 = v10->klass;
      v12 = v10->klass->_2.naturalAligment;
      v13 = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
      if ( v12 >= (unsigned int)v13
        && (UnityEngine_TextAsset_c *)v11->_2.typeHierarchy[v13 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
        v17 = v10;
        goto LABEL_27;
      }
      v14 = DataAsset_TypeInfo->_2.naturalAligment;
      if ( v12 >= (unsigned int)v14 && (DataAsset_c *)v11->_2.typeHierarchy[v14 - 1] == DataAsset_TypeInfo )
        break;
    }
    LODWORD(max_length) = objectList->max_length;
    if ( (int)++v9 >= (int)max_length )
      return 0;
  }
  text = (System_String_o *)v10[1].monitor;
LABEL_30:
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, name, key);
  return CatAndMouseGame__MouseGame3_48208164(text, key, 0);
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
    sub_2213CDC(IndexOf, v5);
  if ( v6->fields._stringLength <= (int)IndexOf )
    return 0;
  else
    return System_String__Substring(this->fields.name, (int)IndexOf + 1, 0);
}


UnityEngine_Networking_UnityWebRequest_o *AssetData__GetLoadRequest(AssetData_o *this, const MethodInfo *method)
{
  const MethodInfo *v4; // x1
  __int64 v5; // x2
  System_String_o *Ext; // x20
  NetworkManager_c *v7; // x8
  System_String_o *FILE_URL_SCHEME; // x19
  System_String_o *Path; // x0
  const MethodInfo *v10; // x1
  System_String_o *v11; // x19
  uint32_t v12; // w0
  System_String_o *v13; // x0
  int32_t v14; // w1
  System_String_o *Key; // x1
  __int64 *v16; // x8
  __int64 *v17; // x8

  if ( (byte_596F730 & 1) == 0 )
  {
    sub_2213A60(&NetworkManager_TypeInfo);
    sub_2213A60(&StringLiteral_25557/*"txt"*/);
    sub_2213A60(&StringLiteral_23903/*"png"*/);
    sub_2213A60(&StringLiteral_22150/*"jpeg"*/);
    sub_2213A60(&StringLiteral_21000/*"htm"*/);
    sub_2213A60(&StringLiteral_18455/*"bytes"*/);
    sub_2213A60(&StringLiteral_22151/*"jpg"*/);
    sub_2213A60(&StringLiteral_26155/*"wav"*/);
    sub_2213A60(&StringLiteral_26320/*"xml"*/);
    sub_2213A60(&StringLiteral_25964/*"usm"*/);
    sub_2213A60(&StringLiteral_23512/*"ogg"*/);
    sub_2213A60(&StringLiteral_21001/*"html"*/);
    byte_596F730 = 1;
  }
  if ( this->fields.type )
    return 0;
  Ext = AssetData__GetExt(this, method);
  v7 = NetworkManager_TypeInfo;
  if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v4, v5);
    v7 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v7->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v4);
  v11 = System_String__Concat_75651716(FILE_URL_SCHEME, Path, 0);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v10);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v11, Key, 0);
  }
  v12 = PrivateImplementationDetails___ComputeStringHash(Ext, 0);
  if ( v12 <= 0x6835C29C )
  {
    if ( v12 <= 0x13E2BD39 )
    {
      if ( v12 != 126868124 )
      {
        if ( v12 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_26155/*"wav"*/, 0) )
        {
          v13 = v11;
          v14 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v13, v14, 0);
        }
        return 0;
      }
      v17 = &StringLiteral_21000/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v12 )
    {
      case 0x4F91B85Cu:
        v17 = &StringLiteral_25964/*"usm"*/;
        break;
      case 0x65B1D004u:
        v17 = &StringLiteral_18455/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v16 = &StringLiteral_23903/*"png"*/;
        goto LABEL_32;
      default:
        return 0;
    }
LABEL_39:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v17, 0) )
      return 0;
    return UnityEngine_Networking_UnityWebRequest__Get(v11, 0);
  }
  if ( v12 <= 0xCC3CFC94 )
  {
    if ( v12 != -1523209745 )
    {
      if ( v12 != -1092644061 )
      {
        if ( v12 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_23512/*"ogg"*/, 0) )
        {
          v13 = v11;
          v14 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v13, v14, 0);
        }
        return 0;
      }
      v16 = &StringLiteral_22150/*"jpeg"*/;
      goto LABEL_32;
    }
    v17 = &StringLiteral_25557/*"txt"*/;
    goto LABEL_39;
  }
  if ( v12 == -680155184 )
  {
    v17 = &StringLiteral_21001/*"html"*/;
    goto LABEL_39;
  }
  if ( v12 == -630165834 )
  {
    v17 = &StringLiteral_26320/*"xml"*/;
    goto LABEL_39;
  }
  if ( v12 != -624468176 )
    return 0;
  v16 = &StringLiteral_22151/*"jpg"*/;
LABEL_32:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v16, 0) )
    return 0;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v11, 0);
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
    sub_2213CE4(this);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_37D2608 *method)
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
  struct UnityEngine_Object_array *v14; // x22
  il2cpp_array_size_t v15; // x8
  AssetData_o *v16; // x20
  unsigned int v17; // w26
  unsigned __int64 v18; // x23
  UnityEngine_Object_o *v19; // x21
  Il2CppClass *v20; // x1
  Il2CppClass *v21; // x1
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_224B964(method);
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
      goto LABEL_31;
    v9 = objectList->m_Items[v7];
    _0_T = method->rgctx_data->_0_T;
    if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_224B908(v2);
    this = (AssetData_o *)sub_2213BB4(v9, _0_T);
    LODWORD(max_length) = objectList->max_length;
    ++v7;
    if ( this )
      ++v8;
  }
  while ( (__int64)v7 < (int)max_length );
  if ( !v8 )
    return 0;
  _1_T = method->rgctx_data->_1_T__;
  if ( (*((_WORD *)&_1_T->_2.bitflags2 + 1) & 1) == 0 )
    _1_T = (Il2CppClass *)sub_224B908(v2);
  this = (AssetData_o *)sub_2213B20(_1_T, v8);
  v14 = v4->fields.objectList;
  if ( !v14 )
LABEL_32:
    sub_2213CDC(this, v12);
  v15 = v14->max_length;
  v16 = this;
  if ( (int)v15 >= 1 )
  {
    v17 = 0;
    v18 = 0;
    while ( v18 < (unsigned int)v15 )
    {
      v19 = v14->m_Items[v18];
      v20 = method->rgctx_data->_0_T;
      if ( (*((_WORD *)&v20->_2.bitflags2 + 1) & 1) == 0 )
        v20 = (Il2CppClass *)sub_224B908(v13);
      this = (AssetData_o *)sub_2213BB4(v19, v20);
      if ( this )
      {
        if ( !v16 )
          goto LABEL_32;
        v21 = method->rgctx_data->_0_T;
        if ( (*((_WORD *)&v21->_2.bitflags2 + 1) & 1) == 0 )
          v21 = (Il2CppClass *)sub_224B908(v13);
        this = (AssetData_o *)sub_2213BB4(v19, v21);
        if ( v17 >= LODWORD(v16->fields.name) )
          break;
        *((_QWORD *)&v16->fields.attrib + (int)v17) = this;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)(&v16->fields.attrib + (int)v17++),
          (int32_t)this,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27);
      }
      LODWORD(v15) = v14->max_length;
      if ( (__int64)++v18 >= (int)v15 )
        return (System_Object_array *)v16;
    }
LABEL_31:
    sub_2213CE4(this);
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
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Object_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_596F735 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_596F735 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
          sub_2213CE4(name);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v3->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 4), (int32_t)v18, v9, v10, v11, v12, v13, v14);
        }
        max_length = objectList->max_length;
        if ( (int)++v8 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v3,
                                          (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_2213CDC(name, v5);
    }
  }
  if ( !v3 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
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
  __int64 v13; // x10
  System_String_o ***i; // x11
  System_String_o **v15; // x0
  System_String_o *v16; // x12
  __int64 v17; // x14
  unsigned int v18; // w13
  __int64 v19; // x14

  v4 = this;
  if ( (byte_596F737 & 1) == 0 )
  {
    sub_2213A60(&DataAsset_TypeInfo);
    this = (AssetData_o *)sub_2213A60(&UnityEngine_TextAsset_TypeInfo);
    byte_596F737 = 1;
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
          sub_2213CE4(this);
        v8 = (System_String_o **)objectList->m_Items[v7];
        if ( !v8 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v7], 0)) == 0 )
          sub_2213CDC(this, name);
        this = (AssetData_o *)System_String__Equals_75686512((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v9 = *v8;
          stringLength_low = LOBYTE((*v8)[12].fields._stringLength);
          naturalAligment = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
          if ( stringLength_low >= (unsigned int)naturalAligment
            && *((UnityEngine_TextAsset_c **)v9[8].monitor + naturalAligment - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v15 = v8;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v15, 0);
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
  if ( (int)max_length < 1 )
    return 0;
  v13 = (unsigned int)objectList->max_length;
  for ( i = (System_String_o ***)objectList->m_Items; ; ++i )
  {
    v15 = *i;
    if ( *i )
    {
      v16 = *v15;
      v17 = UnityEngine_TextAsset_TypeInfo->_2.naturalAligment;
      v18 = LOBYTE((*v15)[12].fields._stringLength);
      if ( v18 >= (unsigned int)v17
        && *((UnityEngine_TextAsset_c **)v16[8].monitor + v17 - 1) == UnityEngine_TextAsset_TypeInfo )
      {
        return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v15, 0);
      }
      v19 = DataAsset_TypeInfo->_2.naturalAligment;
      if ( v18 >= (unsigned int)v19 && *((DataAsset_c **)v16[8].monitor + v19 - 1) == DataAsset_TypeInfo )
        break;
    }
    if ( !--v13 )
      return 0;
  }
  return v15[4];
}


UnityEngine_Object_o *AssetData__GetObject_47472752(AssetData_o *this, System_String_o *name, const MethodInfo *method)
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
          sub_2213CDC(this, name);
        this = (AssetData_o *)System_String__Equals_75686512((System_String_o *)this, name, 0);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(max_length) = objectList->max_length;
        if ( (int)++v6 >= (int)max_length )
          return 0;
      }
LABEL_17:
      sub_2213CE4(this);
    }
    return 0;
  }
  if ( !max_length )
    return 0;
  if ( !(_DWORD)max_length )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_37D239C *method)
{
  long double v2; // q0
  AssetData_o *v4; // x20
  struct UnityEngine_Object_array *objectList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v7; // x22
  UnityEngine_Object_o *v8; // x20
  Il2CppClass *_0_T; // x1
  Il2CppClass *v11; // x1

  v4 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_224B964(method);
  objectList = v4->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( (int)max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)max_length )
      sub_2213CE4(this);
    v8 = objectList->m_Items[v7];
    _0_T = method->rgctx_data->_0_T;
    if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
      _0_T = (Il2CppClass *)sub_224B908(v2);
    this = (AssetData_o *)sub_2213BB4(v8, _0_T);
    if ( this )
      break;
    LODWORD(max_length) = objectList->max_length;
    if ( (__int64)++v7 >= (int)max_length )
      return 0;
  }
  v11 = method->rgctx_data->_0_T;
  if ( (*((_WORD *)&v11->_2.bitflags2 + 1) & 1) == 0 )
    v11 = (Il2CppClass *)sub_224B908(v2);
  return (Il2CppObject *)sub_2213BB4(v8, v11);
}


Il2CppObject *AssetData__GetObject_object__58532980(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_37D2474 *method)
{
  long double v3; // q0
  AssetData_o *v6; // x21
  struct UnityEngine_Object_array *objectList; // x22
  il2cpp_array_size_t max_length; // x8
  __int64 v9; // x23
  UnityEngine_Object_o *v10; // x21
  long double v11; // q0
  Il2CppClass *v12; // x1
  long double v13; // q0
  unsigned __int64 v14; // x21
  UnityEngine_Object_o *v15; // x20
  Il2CppClass *_0_T; // x1
  Il2CppClass *v18; // x1
  UnityEngine_Object_o *v19; // x0

  v6 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_224B964(method);
  objectList = v6->fields.objectList;
  if ( !objectList )
    return 0;
  max_length = objectList->max_length;
  if ( !name )
  {
    if ( (int)max_length >= 1 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v14 >= (unsigned int)max_length )
LABEL_32:
          sub_2213CE4(this);
        v15 = objectList->m_Items[v14];
        _0_T = method->rgctx_data->_0_T;
        if ( (*((_WORD *)&_0_T->_2.bitflags2 + 1) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_224B908(v3);
        this = (AssetData_o *)sub_2213BB4(v15, _0_T);
        if ( this )
          break;
        LODWORD(max_length) = objectList->max_length;
        if ( (__int64)++v14 >= (int)max_length )
          return 0;
      }
      v18 = method->rgctx_data->_0_T;
      if ( (*((_WORD *)&v18->_2.bitflags2 + 1) & 1) == 0 )
        v18 = (Il2CppClass *)sub_224B908(v3);
      v19 = v15;
      return (Il2CppObject *)sub_2213BB4(v19, v18);
    }
    return 0;
  }
  if ( (int)max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( (unsigned int)v9 >= (unsigned int)max_length )
      goto LABEL_32;
    v10 = objectList->m_Items[v9];
    if ( !v10 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v9], 0)) == 0 )
      sub_2213CDC(this, name);
    this = (AssetData_o *)System_String__Equals_75686512((System_String_o *)this, name, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v12 = method->rgctx_data->_0_T;
      if ( (*((_WORD *)&v12->_2.bitflags2 + 1) & 1) == 0 )
        v12 = (Il2CppClass *)sub_224B908(v11);
      this = (AssetData_o *)sub_2213BB4(v10, v12);
      if ( this )
        break;
    }
    LODWORD(max_length) = objectList->max_length;
    if ( (int)++v9 >= (int)max_length )
      return 0;
  }
  v18 = method->rgctx_data->_0_T;
  if ( (*((_WORD *)&v18->_2.bitflags2 + 1) & 1) == 0 )
    v18 = (Il2CppClass *)sub_224B908(v13);
  v19 = v10;
  return (Il2CppObject *)sub_2213BB4(v19, v18);
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
    sub_2213CDC(0, name);
  return System_String__Equals_75686512(v3, name, 0);
}


// local variable allocation has failed, the output may be wrong!
bool AssetData__IsSame_47468396(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  System_String_o *v4; // x0

  if ( this->fields.type != type )
    return 0;
  v4 = this->fields.name;
  if ( !v4 )
    sub_2213CDC(0, *(_QWORD *)&type);
  return System_String__Equals_75686512(v4, name, 0);
}


bool AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  AssetData_o *v8; // x19
  System_Collections_Generic_IEnumerable_T__o **p_objectList; // x20
  struct UnityEngine_Object_array *objectList; // x23
  il2cpp_array_size_t max_length; // x10
  __int64 v12; // x9
  char isSavedMemoryMode; // w21
  __int64 v14; // x10
  UnityEngine_Object_o **m_Items; // x11
  UnityEngine_Object_o *v16; // x12
  __int64 naturalAligment; // x14
  il2cpp_array_size_t v18; // x8
  unsigned __int64 v19; // x24
  UnityEngine_GameObject_c **v20; // x8
  UnityEngine_Object_o *v21; // x21
  __int64 v22; // x1
  __int64 v23; // x2
  Il2CppObject *Component_object; // x22
  struct System_String_o *name; // x8
  AssetData_o *v26; // x21
  unsigned __int64 v27; // x29
  UnityEngine_Object_o *v28; // x22
  __int64 v29; // x1
  System_Collections_Generic_IEnumerable_T__o *v30; // x21
  AssetData___c_c *v31; // x0
  struct AssetData___c_StaticFields *static_fields; // x8
  System_Action_object__o *_9__78_0; // x22
  Il2CppObject *v34; // x23
  struct AssetData___c_StaticFields *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  __int64 v42; // x1
  __int64 v43; // x2
  AssetData_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  __int64 v46; // x2
  System_String_o *v47; // x2
  System_String_o *v48; // x3
  int32_t v49; // w4
  int32_t v50; // w5
  bool v51; // w6
  bool v52; // w7
  bool result; // w0

  v8 = this;
  if ( (byte_596F734 & 1) == 0 )
  {
    sub_2213A60(&System_Action_Object__TypeInfo);
    sub_2213A60(&Method_BasicHelper_ForEach_Object___);
    sub_2213A60(&DataAsset_TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_Camera___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____91783528);
    sub_2213A60(&UnityEngine_GameObject_TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&OptionManager_TypeInfo);
    sub_2213A60(&Method_AssetData___c__ReleaseData_b__78_0__);
    this = (AssetData_o *)sub_2213A60(&AssetData___c_TypeInfo);
    byte_596F734 = 1;
  }
  p_objectList = (System_Collections_Generic_IEnumerable_T__o **)&v8->fields.objectList;
  objectList = v8->fields.objectList;
  if ( v8->fields.type == 1 )
  {
    if ( !objectList )
      goto LABEL_65;
    max_length = objectList->max_length;
    if ( (int)max_length < 1 )
    {
      isSavedMemoryMode = 0;
LABEL_62:
      *p_objectList = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.objectList, 0, v2, v3, v4, v5, v6, v7);
      goto LABEL_63;
    }
    v12 = (unsigned int)max_length & ~((int)max_length >> 31);
    isSavedMemoryMode = 0;
    v14 = (unsigned int)objectList->max_length;
    m_Items = objectList->m_Items;
    while ( v14 )
    {
      v16 = *m_Items;
      if ( *m_Items )
      {
        naturalAligment = DataAsset_TypeInfo->_2.naturalAligment;
        if ( v16->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
        {
          if ( (DataAsset_c *)v16->klass->_2.typeHierarchy[naturalAligment - 1] != DataAsset_TypeInfo )
            v16 = 0;
        }
        else
        {
          v16 = 0;
        }
      }
      --v12;
      ++m_Items;
      --v14;
      isSavedMemoryMode |= v16 == 0;
      if ( !v12 )
        goto LABEL_62;
    }
LABEL_64:
    sub_2213CE4(this);
  }
  if ( !objectList )
    goto LABEL_53;
  v18 = objectList->max_length;
  if ( (int)v18 < 1 )
  {
LABEL_45:
    if ( AssetData__get_IsResourcesUnload(v8, method) )
    {
      v30 = *p_objectList;
      v31 = AssetData___c_TypeInfo;
      if ( !*(&AssetData___c_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(AssetData___c_TypeInfo, v29, v2);
        v31 = AssetData___c_TypeInfo;
      }
      static_fields = v31->static_fields;
      _9__78_0 = (System_Action_object__o *)static_fields->__9__78_0;
      if ( !_9__78_0 )
      {
        if ( !*(&v31->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(v31, v29, v2);
          static_fields = AssetData___c_TypeInfo->static_fields;
        }
        v34 = (Il2CppObject *)static_fields->__9;
        _9__78_0 = (System_Action_object__o *)sub_2213CCC(System_Action_Object__TypeInfo);
        System_Action_object____ctor(_9__78_0, v34, Method_AssetData___c__ReleaseData_b__78_0__, 0);
        v35 = AssetData___c_TypeInfo->static_fields;
        v35->__9__78_0 = (struct System_Action_Object__o *)_9__78_0;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v35->__9__78_0,
          (int32_t)_9__78_0,
          v36,
          v37,
          v38,
          v39,
          v40,
          v41);
      }
      BasicHelper__ForEach_object_(
        v30,
        (System_Action_T__o *)_9__78_0,
        (const MethodInfo_381282C *)Method_BasicHelper_ForEach_Object___);
    }
    goto LABEL_53;
  }
  v19 = 0;
  do
  {
    if ( v19 >= (unsigned int)v18 )
      goto LABEL_64;
    v20 = (UnityEngine_GameObject_c **)objectList->m_Items[v19];
    if ( v20 )
    {
      if ( *v20 == UnityEngine_GameObject_TypeInfo )
        v21 = objectList->m_Items[v19];
      else
        v21 = 0;
    }
    else
    {
      v21 = 0;
    }
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
    this = (AssetData_o *)UnityEngine_Object__op_Equality(v21, 0, 0);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      if ( !v21 )
        goto LABEL_65;
      Component_object = UnityEngine_GameObject__GetComponent_object_(
                           (UnityEngine_GameObject_o *)v21,
                           (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v22, v23);
      this = (AssetData_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_65;
        UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)Component_object, 0, 0);
      }
      this = (AssetData_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                              (UnityEngine_GameObject_o *)v21,
                              1,
                              (const MethodInfo_38B79D0 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____91783528);
      if ( this )
      {
        name = this->fields.name;
        v26 = this;
        if ( (int)name >= 1 )
        {
          v27 = 0;
          while ( v27 < (unsigned int)name )
          {
            v28 = (UnityEngine_Object_o *)*((_QWORD *)&v26->fields.attrib + v27);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
            this = (AssetData_o *)UnityEngine_Object__op_Equality(v28, 0, 0);
            if ( ((unsigned __int8)this & 1) == 0 )
            {
              if ( !v28 )
                goto LABEL_65;
              UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v28, 0, 0);
            }
            LODWORD(name) = v26->fields.name;
            if ( (__int64)++v27 >= (int)name )
              goto LABEL_43;
          }
          goto LABEL_64;
        }
      }
    }
LABEL_43:
    LODWORD(v18) = objectList->max_length;
    ++v19;
  }
  while ( (__int64)v19 < (int)v18 );
  if ( *p_objectList )
    goto LABEL_45;
LABEL_53:
  v8->fields.objectList = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.objectList, 0, v2, v3, v4, v5, v6, v7);
  p_assetBundle = (AssetData_o **)&v8->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)v8->fields.assetBundle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v42, v43);
  if ( UnityEngine_Object__op_Inequality(assetBundle, 0, 0) )
  {
    this = *p_assetBundle;
    if ( *p_assetBundle )
    {
      UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)this, 1, 0);
      *p_assetBundle = 0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v8->fields.assetBundle, 0, v47, v48, v49, v50, v51, v52);
      goto LABEL_58;
    }
LABEL_65:
    sub_2213CDC(this, method);
  }
LABEL_58:
  if ( !*(&OptionManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo, method, v46);
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0);
LABEL_63:
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

  if ( (byte_596F732 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F732 = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v8);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, 0);
  return 1;
}


bool AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_596F733 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    byte_596F733 = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_2213CDC(0, v5);
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
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7

  if ( (byte_596F72F & 1) == 0 )
  {
    sub_2213A60(&AssetData__SetAssetBundleData_d__71_TypeInfo);
    byte_596F72F = 1;
  }
  v7 = sub_2213CCC(AssetData__SetAssetBundleData_d__71_TypeInfo);
  AssetData__SetAssetBundleData_d__71___ctor((AssetData__SetAssetBundleData_d__71_o *)v7, 0, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)bundle, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)resourceNames, v22, v23, v24, v25, v26, v27);
  return (System_Collections_IEnumerator_o *)v7;
}


bool AssetData__SetData(AssetData_o *this, UnityEngine_Networking_DownloadHandler_o *handler, const MethodInfo *method)
{
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_o *Ext; // x0
  System_String_o *v7; // x22
  uint32_t v8; // w0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 *v11; // x8
  bool v12; // w0
  DataAsset_o *audioClip; // x22
  __int64 *v14; // x8
  __int64 *v15; // x8
  bool v16; // w0
  bool v17; // w0
  System_Byte_array *data; // x21
  bool v19; // w0
  System_String_o *text; // x21
  UnityEngine_Texture2D_o *texture; // x0
  __int64 v22; // x1
  int32_t v23; // w23
  int32_t v24; // w24
  int32_t format; // w25
  System_Byte_array *v26; // x0
  const MethodInfo *v27; // x1
  __int64 v28; // x0
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  struct UnityEngine_Object_array *v35; // x19
  __int64 v36; // x0
  __int64 v37; // x1
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  __int64 v44; // x0

  if ( (byte_596F731 & 1) == 0 )
  {
    sub_2213A60(&DataAsset_TypeInfo);
    sub_2213A60(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo);
    sub_2213A60(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_2213A60(&UnityEngine_Object___TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&UnityEngine_Texture2D_TypeInfo);
    sub_2213A60(&StringLiteral_25557/*"txt"*/);
    sub_2213A60(&StringLiteral_23903/*"png"*/);
    sub_2213A60(&StringLiteral_22150/*"jpeg"*/);
    sub_2213A60(&StringLiteral_21000/*"htm"*/);
    sub_2213A60(&StringLiteral_18455/*"bytes"*/);
    sub_2213A60(&StringLiteral_22151/*"jpg"*/);
    sub_2213A60(&StringLiteral_26155/*"wav"*/);
    sub_2213A60(&StringLiteral_26320/*"xml"*/);
    sub_2213A60(&StringLiteral_23512/*"ogg"*/);
    sub_2213A60(&StringLiteral_21001/*"html"*/);
    byte_596F731 = 1;
  }
  p_objectList = &this->fields.objectList;
  if ( this->fields.objectList )
    goto LABEL_4;
  LOBYTE(Ext) = 0;
  if ( !this->fields.type )
  {
    if ( handler )
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
                v11 = &StringLiteral_23512/*"ogg"*/;
LABEL_18:
                v12 = System_String__op_Equality(v7, (System_String_o *)*v11, 0);
                audioClip = 0;
                if ( !v12 )
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
            v14 = &StringLiteral_22150/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v8 )
          {
            case 0xD775A7D0:
              v15 = &StringLiteral_21001/*"html"*/;
              break;
            case 0xDA706EB6:
              v15 = &StringLiteral_26320/*"xml"*/;
              break;
            case 0xDAC75F30:
              v14 = &StringLiteral_22151/*"jpg"*/;
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
                v11 = &StringLiteral_26155/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v15 = &StringLiteral_21000/*"htm"*/;
            goto LABEL_39;
          }
          if ( v8 != -1523209745 )
          {
            if ( v8 == 1706151940 )
            {
              v17 = System_String__op_Equality(v7, (System_String_o *)StringLiteral_18455/*"bytes"*/, 0);
              audioClip = 0;
              if ( v17 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
                audioClip = (DataAsset_o *)sub_2213CCC(DataAsset_TypeInfo);
                DataAsset___ctor(audioClip, data, 0);
              }
              goto LABEL_45;
            }
            if ( v8 != 1748353692 )
              goto LABEL_33;
            v14 = &StringLiteral_23903/*"png"*/;
LABEL_31:
            v16 = System_String__op_Equality(v7, (System_String_o *)*v14, 0);
            audioClip = 0;
            if ( !v16 )
              goto LABEL_45;
            if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass != UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
              goto LABEL_33;
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            v23 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._4_get_width.methodPtr)(
                    texture,
                    texture->klass->vtable._4_get_width.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            v24 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, const MethodInfo *))texture->klass->vtable._6_get_height.methodPtr)(
                    texture,
                    texture->klass->vtable._6_get_height.method);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0);
            audioClip = (DataAsset_o *)sub_2213CCC(UnityEngine_Texture2D_TypeInfo);
            UnityEngine_Texture2D___ctor_83318944((UnityEngine_Texture2D_o *)audioClip, v23, v24, format, 0, 0);
            v26 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0);
            UnityEngine_ImageConversion__LoadImage_83620268((UnityEngine_Texture2D_o *)audioClip, v26, 0);
LABEL_45:
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v9, v10);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0, 0) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v27);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0);
              v28 = sub_2213B20(UnityEngine_Object___TypeInfo, 1);
              *p_objectList = (struct UnityEngine_Object_array *)v28;
              sub_2213A04(
                (MissionNaviTransitionBoardItem_o *)&this->fields.objectList,
                v28,
                v29,
                v30,
                v31,
                v32,
                v33,
                v34);
              v35 = *p_objectList;
              if ( *p_objectList )
              {
                v36 = sub_2213BB4(audioClip, v35->obj.klass->_1.element_class);
                if ( !v36 )
                {
                  v44 = sub_2213D00(0, v37);
                  sub_2213BA0(v44, 0);
                }
                if ( !LODWORD(v35->max_length) )
                  sub_2213CE4(v36);
                v35->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_2213A04(
                  (MissionNaviTransitionBoardItem_o *)v35->m_Items,
                  (int32_t)audioClip,
                  v38,
                  v39,
                  v40,
                  v41,
                  v42,
                  v43);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_2213CDC(texture, v22);
          }
          v15 = &StringLiteral_25557/*"txt"*/;
        }
LABEL_39:
        v19 = System_String__op_Equality(v7, (System_String_o *)*v15, 0);
        audioClip = 0;
        if ( v19 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0);
          audioClip = (DataAsset_o *)sub_2213CCC(DataAsset_TypeInfo);
          DataAsset___ctor_47629472(audioClip, text, 0);
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
  struct UnityEngine_Object_array *All_83403852; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_83403852 = UnityEngine_Resources__LoadAll_83403852(Path, 0);
    this->fields.objectList = All_83403852;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_objectList, (int32_t)All_83403852, v6, v7, v8, v9, v10, v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_2213CDC(v12, v13);
    if ( objectList->max_length )
      return 1;
    *p_objectList = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)p_objectList, 0, v14, v15, v16, v17, v18, v19);
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
  bool v7; // w7
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.attrib,
    (int32_t)attrib,
    attrib,
    *(System_String_o **)&size,
    crc,
    (int32_t)keyType,
    (bool)method,
    v7);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.keyType, (int32_t)keyType, v13, v14, v15, v16, v17, v18);
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
  int32_t nowVersion; // w9
  int32_t newVersion; // w10

  nowVersion = this->fields.nowVersion;
  newVersion = this->fields.newVersion;
  this->fields.nowVersion = newVersion;
  return nowVersion != newVersion;
}


bool AssetData___get_IsResourcesUnload_b__21_0(AssetData_o *this, System_String_o *str, const MethodInfo *method)
{
  System_String_o *name; // x0

  name = this->fields.name;
  if ( !name )
    sub_2213CDC(0, str);
  return System_String__StartsWith(name, str, 0);
}


System_String_o *AssetData__get_Attrib(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.attrib;
}


System_String_o *AssetData__get_CacheName(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *Ext; // x8
  AssetData_c *v6; // x0
  System_String_o *name; // x19
  int v8; // w9
  __int64 v9; // x1
  __int64 v10; // x2
  System_String_o *v11; // x19
  System_String_o *v13; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  System_String_o *v16; // x19

  if ( (byte_596F72B & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_1120/*".unity3d"*/);
    byte_596F72B = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v6 = AssetData_TypeInfo;
  name = this->fields.name;
  v8 = *(&AssetData_TypeInfo->_2.cctor_finished + 1);
  if ( Ext )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v3, v4);
    if ( name )
    {
      v11 = System_String__Replace(
              name,
              AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
              AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
              0);
      if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v9, v10);
      return AndroidUtil__ConvertFileNameIfNeed(v11, 0);
    }
LABEL_16:
    sub_2213CDC(v6, v3);
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v3, v4);
  if ( !name )
    goto LABEL_16;
  v13 = System_String__Replace(
          name,
          AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
          0);
  v16 = System_String__Concat_75651716(v13, (System_String_o *)StringLiteral_1120/*".unity3d"*/, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v14, v15);
  return AssetManager__getShaName(v16, 0);
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
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *Ext; // x8
  AssetData_c *v6; // x0
  System_String_o *name; // x19
  int v8; // w9
  System_String_o *v10; // x0
  __int64 v11; // x1
  __int64 v12; // x2
  System_String_o *v13; // x19

  if ( (byte_596F72A & 1) == 0 )
  {
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_1120/*".unity3d"*/);
    byte_596F72A = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v6 = AssetData_TypeInfo;
  name = this->fields.name;
  v8 = *(&AssetData_TypeInfo->_2.cctor_finished + 1);
  if ( Ext )
  {
    if ( !v8 )
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v3, v4);
    if ( name )
      return System_String__Replace(
               name,
               AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
               AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR,
               0);
LABEL_14:
    sub_2213CDC(v6, v3);
  }
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v3, v4);
  if ( !name )
    goto LABEL_14;
  v10 = System_String__Replace(
          name,
          AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR,
          0);
  v13 = System_String__Concat_75651716(v10, (System_String_o *)StringLiteral_1120/*".unity3d"*/, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v11, v12);
  return AssetManager__getShaName(v13, 0);
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
  __int64 v2; // x2
  bool v4; // w0
  AssetData_c *v5; // x0
  System_Object_array *ResourcesUnloadStartsWithNames; // x20
  System_Func_object__bool__o *v7; // x21

  if ( (byte_596F728 & 1) == 0 )
  {
    sub_2213A60(&Method_AssetData__get_IsResourcesUnload_b__21_0__);
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&Method_BasicHelper_Any_string____91711488);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    byte_596F728 = 1;
  }
  if ( this->fields.alreadySetIsResourcesUnload )
  {
    return this->fields.isResourcesUnload;
  }
  else
  {
    this->fields.alreadySetIsResourcesUnload = 1;
    v5 = AssetData_TypeInfo;
    if ( !*(&AssetData_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, method, v2);
      v5 = AssetData_TypeInfo;
    }
    ResourcesUnloadStartsWithNames = (System_Object_array *)v5->static_fields->ResourcesUnloadStartsWithNames;
    v7 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
    System_Func_object__bool____ctor(v7, (Il2CppObject *)this, Method_AssetData__get_IsResourcesUnload_b__21_0__, 0);
    v4 = BasicHelper__Any_object__58785420(
           ResourcesUnloadStartsWithNames,
           (System_Func_T__bool__o *)v7,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_string____91711488);
    this->fields.isResourcesUnload = v4;
  }
  return v4;
}


System_String_o *AssetData__get_Key(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  System_String_o *keyType; // x19

  if ( (byte_596F72D & 1) == 0 )
  {
    sub_2213A60(&CatAndMouseGame_TypeInfo);
    byte_596F72D = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.keyType, 0) )
    return 0;
  keyType = this->fields.keyType;
  if ( !*(&CatAndMouseGame_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo, v3, v4);
  return CatAndMouseGame__GetAssetbundleKey(keyType, 0);
}


System_String_o *AssetData__get_LastName(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *result; // x0
  int32_t IndexOf; // w8

  result = this->fields.name;
  if ( !result )
    goto LABEL_6;
  IndexOf = System_String__LastIndexOf(result, 0x2Fu, 0);
  result = this->fields.name;
  if ( (IndexOf & 0x80000000) == 0 )
  {
    if ( result )
      return System_String__Substring(result, IndexOf + 1, 0);
LABEL_6:
    sub_2213CDC(result, method);
  }
  return result;
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
  __int64 v2; // x2
  int32_t type; // w8
  AssetManager_c *v5; // x0
  System_String_o *cachePathName; // x20
  System_String_o *CacheName; // x1

  if ( (byte_596F72C & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F72C = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  if ( !byte_596F73A )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F73A = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
    v5 = AssetManager_TypeInfo;
  }
  cachePathName = v5->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_75651716(cachePathName, CacheName, 0);
}


int32_t AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  int32_t nowVersion; // w8

  if ( (byte_596F729 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596F729 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( nowVersion < 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, method, v2);
  return AssetManager__getUrlString_47493752(this, 0);
}


void AssetData__set_IsAssetBundleUnload(AssetData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isAssetBundleUnload = value;
}


void AssetData__set_IsResourcesUnload(AssetData_o *this, bool value, const MethodInfo *method)
{
  this->fields.isResourcesUnload = value;
  this->fields.alreadySetIsResourcesUnload = 1;
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
  __int64 v2; // x2
  AssetData__SetAssetBundleData_d__71_o *v3; // x19
  int32_t _1__state; // w8
  struct AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *bundle; // x21
  System_Collections_Generic_List_object__o *v8; // x22
  AssetData__SetAssetBundleData_d__71_o **p_list_5__3; // x21
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  struct System_String_array *v22; // x1
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  int v29; // w8
  MissionNaviTransitionBoardItem_o *p_asyncRep_5__2; // x21
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  System_String_o *v37; // x2
  System_String_o *v38; // x3
  int32_t v39; // w4
  int32_t v40; // w5
  bool v41; // w6
  bool v42; // w7
  char v43; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  System_String_o *v54; // x2
  System_String_o *v55; // x3
  int32_t v56; // w4
  int32_t v57; // w5
  bool v58; // w6
  bool v59; // w7
  Il2CppObject *asyncRep_5__2; // x1
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v62; // x2
  System_String_o *v63; // x3
  int32_t v64; // w4
  int32_t v65; // w5
  bool v66; // w6
  bool v67; // w7
  bool result; // w0
  System_String_o *v69; // x2
  System_String_o *v70; // x3
  int32_t v71; // w4
  int32_t v72; // w5
  bool v73; // w6
  bool v74; // w7
  System_String_o *v75; // x2
  System_String_o *v76; // x3
  int32_t v77; // w4
  int32_t v78; // w5
  bool v79; // w6
  bool v80; // w7
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  System_String_o *v82; // x2
  System_String_o *v83; // x3
  int32_t v84; // w4
  int32_t v85; // w5
  bool v86; // w6
  bool v87; // w7
  Il2CppObject *v88; // x1
  MissionNaviTransitionBoardItem_o *v89; // x19
  System_String_o *v90; // x2
  System_String_o *v91; // x3
  int32_t v92; // w4
  int32_t v93; // w5
  bool v94; // w6
  bool v95; // w7

  v3 = this;
  if ( (byte_596F73C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_List_Object__AddRange__);
    sub_2213A60(&Method_System_Collections_Generic_List_Object__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_Object___ctor__);
    sub_2213A60(&System_Collections_Generic_List_Object__TypeInfo);
    this = (AssetData__SetAssetBundleData_d__71_o *)sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_596F73C = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (AssetData__SetAssetBundleData_d__71_o *)v3->fields._asyncRep_5__2;
    v3->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    list_5__3 = (System_Collections_Generic_List_object__o *)v3->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__71_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0);
    if ( !list_5__3 )
      goto LABEL_41;
    System_Collections_Generic_List_object___AddRange(
      list_5__3,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v3->fields._asyncRep_5__2 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._asyncRep_5__2, 0, v45, v46, v47, v48, v49, v50);
    v29 = v3->fields.__7__wrap4 + 1;
    v3->fields.__7__wrap4 = v29;
    goto LABEL_24;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (MissionNaviTransitionBoardItem_o *)&v3->fields._asyncRep_5__2;
    this = (AssetData__SetAssetBundleData_d__71_o *)v3->fields._asyncRep_5__2;
    v3->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__71_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.objectList,
      (int32_t)this,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    v43 = 0;
LABEL_32:
    _4__this->fields.isLoadResources = v43;
    p_asyncRep_5__2->klass = 0;
    sub_2213A04(p_asyncRep_5__2, 0, v37, v38, v39, v40, v41, v42);
    method = (const MethodInfo *)v3->fields.bundle;
    if ( _4__this->fields.isAssetBundleUnload )
    {
      _4__this->fields.assetBundle = (struct UnityEngine_AssetBundle_o *)method;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&_4__this->fields.assetBundle,
        (int32_t)method,
        v75,
        v76,
        v77,
        v78,
        v79,
        v80);
    }
    else
    {
      if ( !method )
        goto LABEL_41;
      UnityEngine_AssetBundle__Unload(v3->fields.bundle, 0, 0);
    }
    return 0;
  }
  if ( _1__state )
    return 0;
  resourceNames = v3->fields.resourceNames;
  v3->fields.__1__state = -1;
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
  bundle = (UnityEngine_Object_o *)v3->fields.bundle;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Equality(bundle, 0, 0) || AssetData__GetExt(_4__this, 0) )
    return 0;
  if ( v3->fields.resourceNames )
  {
    v8 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_Object___ctor__);
    v3->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v8;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__71_o **)&v3->fields._list_5__3;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._list_5__3, (int32_t)v8, v10, v11, v12, v13, v14, v15);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_41;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_4483E74 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v22 = v3->fields.resourceNames;
    v3->fields.__7__wrap3 = v22;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields.__7__wrap3, (int32_t)v22, v16, v17, v18, v19, v20, v21);
    v29 = 0;
    v3->fields.__7__wrap4 = 0;
LABEL_24:
    this = (AssetData__SetAssetBundleData_d__71_o *)&v3->fields.__7__wrap3;
    _7__wrap3 = v3->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_41;
    max_length = _7__wrap3->max_length;
    if ( v29 < max_length )
    {
      if ( v29 >= (unsigned int)max_length )
        sub_2213CE4(this);
      this = (AssetData__SetAssetBundleData_d__71_o *)v3->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v29],
                       0);
        v3->fields._asyncRep_5__2 = AssetAsync;
        sub_2213A04(
          (MissionNaviTransitionBoardItem_o *)&v3->fields._asyncRep_5__2,
          (int32_t)AssetAsync,
          v54,
          v55,
          v56,
          v57,
          v58,
          v59);
        asyncRep_5__2 = (Il2CppObject *)v3->fields._asyncRep_5__2;
        v3->fields.__2__current = asyncRep_5__2;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)asyncRep_5__2, v62, v63, v64, v65, v66, v67);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 2;
        return result;
      }
LABEL_41:
      sub_2213CDC(this, method);
    }
    v3->fields.__7__wrap3 = 0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)this, 0, v23, v24, v25, v26, v27, v28);
    p_asyncRep_5__2 = (MissionNaviTransitionBoardItem_o *)&v3->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__71_o *)v3->fields._list_5__3;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__71_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&_4__this->fields.objectList,
      (int32_t)this,
      v69,
      v70,
      v71,
      v72,
      v73,
      v74);
    v43 = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__71_o *)v3->fields.bundle;
  if ( !this )
    goto LABEL_41;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0);
  v3->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&v3->fields._asyncRep_5__2,
    (int32_t)AllAssetsAsync,
    v82,
    v83,
    v84,
    v85,
    v86,
    v87);
  v88 = (Il2CppObject *)v3->fields._asyncRep_5__2;
  v3->fields.__2__current = v88;
  v89 = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
  sub_2213A04(v89, (int32_t)v88, v90, v91, v92, v93, v94, v95);
  result = 1;
  v89[-1].fields._BoardType_k__BackingField = 1;
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

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_AssetData__SetAssetBundleData_d__71_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
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
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_596F73B & 1) == 0 )
  {
    sub_2213A60(&AssetData___c_TypeInfo);
    byte_596F73B = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(AssetData___c_TypeInfo);
  System_Object___ctor(v1, 0);
  AssetData___c_TypeInfo->static_fields->__9 = (struct AssetData___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)AssetData___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void AssetData___c___ctor(AssetData___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void AssetData___c___ReleaseData_b__78_0(AssetData___c_o *this, UnityEngine_Object_o *obj, const MethodInfo *method)
{
  UnityEngine_Resources__UnloadAsset(obj, 0);
}