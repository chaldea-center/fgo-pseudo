void __fastcall AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_418A6CB & 1) == 0 )
  {
    sub_B2C35C(&AssetData_TypeInfo, v1);
    byte_418A6CB = 1;
  }
  AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR = 47;
  AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR = 64;
  AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR = 64;
  AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR = 95;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7
  System_Int32_array **v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct System_String_o **p_keyType; // x19
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7

  if ( (byte_418A6C1 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_418A6C1 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
  this->fields.name = name;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.name, (System_Int32_array **)name, v7, v8, v9, v10, v11, v12);
  v13 = (System_Int32_array **)StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.attrib, v13, v14, v15, v16, v17, v18, v19);
  this->fields.keyType = 0LL;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0LL;
  *(p_keyType - 1) = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)p_keyType, 0LL, v21, v22, v23, v24, v25, v26);
}


void __fastcall AssetData___ctor_30133204(
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
  System_String_array **v17; // x2
  System_String_array **v18; // x3
  System_Boolean_array **v19; // x4
  System_Int32_array **v20; // x5
  System_Int32_array *v21; // x6
  System_Int32_array *v22; // x7
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16->fields.type = type;
  v16->fields.name = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->fields.name,
    (System_Int32_array **)name,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22);
  v16->fields.attrib = attrib;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v16->fields.attrib,
    (System_Int32_array **)attrib,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  LODWORD(v16[-1].fields.objectList) = version;
  HIDWORD(v16[-1].fields.objectList) = version;
  *(_DWORD *)&v16[-1].fields.isLoadResources = size;
  v16[-1].fields.entryCount = crc;
  sub_B2C2F8((BattleServantConfConponent_o *)v16, (System_Int32_array **)keyType, v29, v30, v31, v32, v33, v34);
}


void __fastcall AssetData___ctor_30133348(
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
  System_String_array **v18; // x2
  System_String_array **v19; // x3
  System_Boolean_array **v20; // x4
  System_Int32_array **v21; // x5
  System_Int32_array *v22; // x6
  System_Int32_array *v23; // x7
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v17->fields.name,
    (System_Int32_array **)name,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23);
  v17->fields.attrib = attrib;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&v17->fields.attrib,
    (System_Int32_array **)attrib,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  LODWORD(v17[-1].fields.objectList) = nowVersion;
  HIDWORD(v17[-1].fields.objectList) = newVersion;
  *(_DWORD *)&v17[-1].fields.isLoadResources = size;
  v17[-1].fields.entryCount = crc;
  sub_B2C2F8((BattleServantConfConponent_o *)v17, (System_Int32_array **)keyType, v30, v31, v32, v33, v34, v35);
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
      LODWORD(IndexOf) = v7->fields.m_stringLength;
    }
    v8 = (_DWORD)IndexOf - v5;
    if ( (int)IndexOf > (int)v5 )
    {
      IndexOf = this->fields.name;
      if ( IndexOf )
        return System_String__Substring_44369268(IndexOf, v5, v8, 0LL);
LABEL_13:
      sub_B2C434(IndexOf, v5);
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
  __int64 v10; // x11
  __int64 v11; // x23
  UnityEngine_TextAsset_o *v12; // x21
  UnityEngine_TextAsset_c *klass; // x8
  unsigned int v14; // w9
  __int64 v15; // x11
  __int64 v16; // x11
  __int64 v17; // x8
  UnityEngine_TextAsset_o *v18; // x0
  UnityEngine_TextAsset_c *v19; // x13
  __int64 v20; // x15
  unsigned int v21; // w14
  __int64 v22; // x15
  System_String_o *monitor; // x20
  CatAndMouseGame_c *v25; // x0
  __int64 v26; // x0

  v6 = this;
  if ( (byte_418A6C9 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, name);
    sub_B2C35C(&DataAsset_TypeInfo, v7);
    this = (AssetData_o *)sub_B2C35C(&UnityEngine_TextAsset_TypeInfo, v8);
    byte_418A6C9 = 1;
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
        {
          v26 = sub_B2C460(this);
          sub_B2C400(v26, 0LL);
        }
        v12 = (UnityEngine_TextAsset_o *)objectList->m_Items[v11];
        if ( !v12 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v11], 0LL)) == 0LL )
          sub_B2C434(this, name);
        this = (AssetData_o *)System_String__Equals_44292872((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          klass = v12->klass;
          v14 = *(&v12->klass->_2.bitflags2 + 1);
          v15 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1);
          if ( v14 >= (unsigned int)v15
            && (UnityEngine_TextAsset_c *)klass->_2.typeHierarchy[v15 - 1] == UnityEngine_TextAsset_TypeInfo )
          {
            v18 = v12;
            goto LABEL_28;
          }
          v16 = *(&DataAsset_TypeInfo->_2.bitflags2 + 1);
          if ( v14 >= (unsigned int)v16 && (DataAsset_c *)klass->_2.typeHierarchy[v16 - 1] == DataAsset_TypeInfo )
            break;
        }
        LODWORD(v10) = objectList->max_length;
        if ( (int)++v11 >= (int)v10 )
          return 0LL;
      }
      monitor = (System_String_o *)v12[1].monitor;
      v25 = CatAndMouseGame_TypeInfo;
      if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
        || CatAndMouseGame_TypeInfo->_2.cctor_finished )
      {
        return CatAndMouseGame__MouseGame3_29448192(monitor, key, 0LL);
      }
      goto LABEL_36;
    }
    return 0LL;
  }
  if ( !v10 || (int)v10 < 1 )
    return 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v18 = (UnityEngine_TextAsset_o *)objectList->m_Items[v17];
    if ( v18 )
    {
      v19 = v18->klass;
      v20 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1);
      v21 = *(&v18->klass->_2.bitflags2 + 1);
      if ( v21 >= (unsigned int)v20
        && (UnityEngine_TextAsset_c *)v19->_2.typeHierarchy[v20 - 1] == UnityEngine_TextAsset_TypeInfo )
      {
LABEL_28:
        monitor = UnityEngine_TextAsset__get_text(v18, 0LL);
        goto LABEL_33;
      }
      v22 = *(&DataAsset_TypeInfo->_2.bitflags2 + 1);
      if ( v21 >= (unsigned int)v22 && (DataAsset_c *)v19->_2.typeHierarchy[v22 - 1] == DataAsset_TypeInfo )
        break;
    }
    if ( ++v17 >= (int)v10 )
      return 0LL;
  }
  monitor = (System_String_o *)v18[1].monitor;
LABEL_33:
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) == 0
    || CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    return CatAndMouseGame__MouseGame3_29448192(monitor, key, 0LL);
  }
  v25 = CatAndMouseGame_TypeInfo;
LABEL_36:
  j_il2cpp_runtime_class_init_0(v25);
  return CatAndMouseGame__MouseGame3_29448192(monitor, key, 0LL);
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
    sub_B2C434(IndexOf, v5);
  if ( v6->fields.m_stringLength <= (int)IndexOf )
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
  const MethodInfo *v14; // x1
  System_String_o *Ext; // x20
  NetworkManager_c *v16; // x8
  System_String_o *FILE_URL_SCHEME; // x19
  System_String_o *Path; // x0
  const MethodInfo *v19; // x1
  System_String_o *v20; // x19
  uint32_t v21; // w0
  int32_t v22; // w1
  System_String_o *Key; // x1
  __int64 *v24; // x8
  __int64 *v25; // x8

  if ( (byte_418A6C3 & 1) == 0 )
  {
    sub_B2C35C(&NetworkManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_22835/*"txt"*/, v3);
    sub_B2C35C(&StringLiteral_21502/*"png"*/, v4);
    sub_B2C35C(&StringLiteral_20076/*"jpeg"*/, v5);
    sub_B2C35C(&StringLiteral_19196/*"htm"*/, v6);
    sub_B2C35C(&StringLiteral_17158/*"bytes"*/, v7);
    sub_B2C35C(&StringLiteral_20077/*"jpg"*/, v8);
    sub_B2C35C(&StringLiteral_23251/*"wav"*/, v9);
    sub_B2C35C(&StringLiteral_23384/*"xml"*/, v10);
    sub_B2C35C(&StringLiteral_21215/*"ogg"*/, v11);
    sub_B2C35C(&StringLiteral_19197/*"html"*/, v12);
    byte_418A6C3 = 1;
  }
  if ( this->fields.type )
    return 0LL;
  Ext = AssetData__GetExt(this, method);
  v16 = NetworkManager_TypeInfo;
  if ( (BYTE3(NetworkManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v16 = NetworkManager_TypeInfo;
  }
  FILE_URL_SCHEME = v16->static_fields->FILE_URL_SCHEME;
  Path = AssetData__get_Path(this, v14);
  v20 = System_String__Concat_44305532(FILE_URL_SCHEME, Path, 0LL);
  if ( !Ext )
  {
    Key = AssetData__get_Key(this, v19);
    return UnityWebRequestDecryptFileWithCrc__CreateRequest(v20, Key, 0LL);
  }
  v21 = PrivateImplementationDetails___ComputeStringHash_21099092(Ext, 0LL);
  if ( v21 <= 0xA535A9EF )
  {
    if ( v21 <= 0x13E2BD39 )
    {
      if ( v21 != 126868124 )
      {
        if ( v21 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_23251/*"wav"*/, 0LL) )
        {
          v22 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v20, v22, 0LL);
        }
        return 0LL;
      }
      v25 = &StringLiteral_19196/*"htm"*/;
      goto LABEL_38;
    }
    switch ( v21 )
    {
      case 0xA535A9EF:
        v25 = &StringLiteral_22835/*"txt"*/;
        break;
      case 0x65B1D004u:
        v25 = &StringLiteral_17158/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v24 = &StringLiteral_21502/*"png"*/;
        goto LABEL_32;
      default:
        return 0LL;
    }
LABEL_38:
    if ( !System_String__op_Equality(Ext, (System_String_o *)*v25, 0LL) )
      return 0LL;
    return UnityEngine_Networking_UnityWebRequest__Get(v20, 0LL);
  }
  if ( v21 <= 0xCC3CFC94 )
  {
    if ( v21 != -1092644061 )
    {
      if ( v21 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_21215/*"ogg"*/, 0LL) )
      {
        v22 = 14;
        return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v20, v22, 0LL);
      }
      return 0LL;
    }
    v24 = &StringLiteral_20076/*"jpeg"*/;
    goto LABEL_32;
  }
  if ( v21 == -680155184 )
  {
    v25 = &StringLiteral_19197/*"html"*/;
    goto LABEL_38;
  }
  if ( v21 == -630165834 )
  {
    v25 = &StringLiteral_23384/*"xml"*/;
    goto LABEL_38;
  }
  if ( v21 != -624468176 )
    return 0LL;
  v24 = &StringLiteral_20077/*"jpg"*/;
LABEL_32:
  if ( !System_String__op_Equality(Ext, (System_String_o *)*v24, 0LL) )
    return 0LL;
  return UnityEngine_Networking_UnityWebRequestTexture__GetTexture(v20, 0LL);
}


UnityEngine_Object_o *__fastcall AssetData__GetObject(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x8
  __int64 v3; // x9
  __int64 v5; // x0

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0LL;
  v3 = *(_QWORD *)&objectList->max_length;
  if ( !v3 )
    return 0LL;
  if ( !(_DWORD)v3 )
  {
    v5 = sub_B2C460(this);
    sub_B2C400(v5, 0LL);
  }
  return objectList->m_Items[0];
}


UnityEngine_Object_array *__fastcall AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


UnityEngine_Texture2D_array *__fastcall AssetData__GetObjectList_Texture2D_(
        AssetData_o *this,
        const MethodInfo_17204F8 *method)
{
  struct UnityEngine_Object_array *objectList; // x24
  __int64 v3; // x8
  AssetData_o *v4; // x20
  unsigned __int64 v6; // x25
  unsigned int v7; // w21
  UnityEngine_Object_o *v8; // x23
  Il2CppClass *_0_T; // x22
  Il2CppClass *_1_T; // x22
  __int64 v11; // x1
  struct UnityEngine_Object_array *v12; // x23
  __int64 v13; // x8
  UnityEngine_Texture2D_array *v14; // x20
  il2cpp_array_size_t v15; // w26
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v17; // x21
  Il2CppClass *v18; // x22
  Il2CppClass *v19; // x22
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  AssetData_o *v26; // x22
  Il2CppClass *v27; // x21
  System_Int32_array **v28; // x1
  Il2CppClass **v29; // x0
  __int64 v30; // x0
  Il2CppObject **v31; // x0
  System_String_o *v32; // x1
  System_String_o *v33; // x2
  const MethodInfo_17206E0 *v34; // x3

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0LL;
  v3 = *(_QWORD *)&objectList->max_length;
  if ( (int)v3 < 1 )
    return 0LL;
  v4 = this;
  v6 = 0LL;
  v7 = 0;
  do
  {
    if ( v6 >= (unsigned int)v3 )
    {
LABEL_35:
      v30 = sub_B2C460(this);
      sub_B2C400(v30, 0LL);
    }
    v8 = objectList->m_Items[v6];
    _0_T = method->rgctx_data->_0_T;
    if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_T);
    this = (AssetData_o *)sub_B2C41C(v8, _0_T);
    LODWORD(v3) = objectList->max_length;
    ++v6;
    if ( this )
      ++v7;
  }
  while ( (__int64)v6 < (int)v3 );
  if ( !v7 )
    return 0LL;
  _1_T = method->rgctx_data->_1_T__;
  if ( (BYTE2(_1_T->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(method->rgctx_data->_1_T__);
  this = (AssetData_o *)sub_B2C374(_1_T, v7);
  v12 = v4->fields.objectList;
  if ( !v12 )
LABEL_36:
    sub_B2C434(this, v11);
  v13 = *(_QWORD *)&v12->max_length;
  v14 = (UnityEngine_Texture2D_array *)this;
  if ( (int)v13 >= 1 )
  {
    v15 = 0;
    for ( i = 0LL; (__int64)i < (int)v13; ++i )
    {
      if ( i >= (unsigned int)v13 )
        goto LABEL_35;
      v17 = v12->m_Items[i];
      v18 = method->rgctx_data->_0_T;
      if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_T);
      this = (AssetData_o *)sub_B2C41C(v17, v18);
      if ( this )
      {
        if ( !v14 )
          goto LABEL_36;
        v19 = method->rgctx_data->_0_T;
        if ( (BYTE2(v19->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_0_T);
        this = (AssetData_o *)sub_B2C41C(v17, v19);
        v26 = this;
        v27 = method->rgctx_data->_0_T;
        if ( (BYTE2(v27->vtable[0].methodPtr) & 1) == 0 )
          this = (AssetData_o *)sub_AC505C(method->rgctx_data->_0_T);
        if ( v26 )
        {
          this = (AssetData_o *)sub_B2C41C(v26, v27);
          v28 = (System_Int32_array **)this;
          if ( !this )
          {
            v31 = (Il2CppObject **)sub_B2C728(v26);
            return (UnityEngine_Texture2D_array *)AssetManager__TryGetAssetObject_object_(v31, v32, v33, v34);
          }
        }
        else
        {
          v28 = 0LL;
        }
        if ( v15 >= v14->max_length )
          goto LABEL_35;
        v29 = &v14->obj.klass + (int)v15;
        v29[4] = (Il2CppClass *)v28;
        sub_B2C2F8((BattleServantConfConponent_o *)(v29 + 4), v28, v20, v21, v22, v23, v24, v25);
        ++v15;
      }
      LODWORD(v13) = v12->max_length;
    }
  }
  return v14;
}


System_String_array *__fastcall AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v6; // x19
  System_String_o *name; // x0
  __int64 v8; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v11; // x21
  __int64 v13; // x0

  if ( (byte_418A6C8 & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_string__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_string___ctor___67320968, v4);
    sub_B2C35C(&System_Collections_Generic_List_string__TypeInfo, v5);
    byte_418A6C8 = 1;
  }
  v6 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
    v6,
    (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_string___ctor___67320968);
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
        {
          v13 = sub_B2C460(name);
          sub_B2C400(v13, 0LL);
        }
        name = (System_String_o *)objectList->m_Items[v11];
        if ( !name )
          break;
        name = UnityEngine_Object__get_name((UnityEngine_Object_o *)name, 0LL);
        if ( !v6 )
          break;
        System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData___Add(
          v6,
          (EventMissionProgressRequest_Argument_ProgressData_o *)name,
          (const MethodInfo_2EF4460 *)Method_System_Collections_Generic_List_string__Add__);
        max_length = objectList->max_length;
        if ( (int)++v11 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                          (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                          (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_13:
      sub_B2C434(name, v8);
    }
  }
  if ( !v6 )
    goto LABEL_13;
  return (System_String_array *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                  (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)v6,
                                  (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_o *__fastcall AssetData__GetObjectText(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  AssetData_o *v4; // x20
  __int64 v5; // x1
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v7; // x11
  __int64 v8; // x22
  System_String_o **v9; // x20
  System_String_o *v10; // x8
  unsigned int v11; // w9
  __int64 v12; // x11
  __int64 v13; // x11
  System_String_o *result; // x0
  __int64 v15; // x8
  System_String_o **v16; // x0
  System_String_o *v17; // x13
  __int64 v18; // x15
  unsigned int v19; // w14
  __int64 v20; // x15
  __int64 v21; // x0

  v4 = this;
  if ( (byte_418A6CA & 1) == 0 )
  {
    sub_B2C35C(&DataAsset_TypeInfo, name);
    this = (AssetData_o *)sub_B2C35C(&UnityEngine_TextAsset_TypeInfo, v5);
    byte_418A6CA = 1;
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
        {
          v21 = sub_B2C460(this);
          sub_B2C400(v21, 0LL);
        }
        v9 = (System_String_o **)objectList->m_Items[v8];
        if ( !v9 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v8], 0LL)) == 0LL )
          sub_B2C434(this, name);
        this = (AssetData_o *)System_String__Equals_44292872((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
        {
          v10 = *v9;
          v11 = BYTE4((*v9)[12].monitor);
          v12 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1);
          if ( v11 >= (unsigned int)v12
            && *((UnityEngine_TextAsset_c **)v10[8].monitor + v12 - 1) == UnityEngine_TextAsset_TypeInfo )
          {
            v16 = v9;
            return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0LL);
          }
          v13 = *(&DataAsset_TypeInfo->_2.bitflags2 + 1);
          if ( v11 >= (unsigned int)v13 && *((DataAsset_c **)v10[8].monitor + v13 - 1) == DataAsset_TypeInfo )
            break;
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
    v15 = 0LL;
    while ( 1 )
    {
      v16 = (System_String_o **)objectList->m_Items[v15];
      if ( v16 )
      {
        v17 = *v16;
        v18 = *(&UnityEngine_TextAsset_TypeInfo->_2.bitflags2 + 1);
        v19 = BYTE4((*v16)[12].monitor);
        if ( v19 >= (unsigned int)v18
          && *((UnityEngine_TextAsset_c **)v17[8].monitor + v18 - 1) == UnityEngine_TextAsset_TypeInfo )
        {
          return UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)v16, 0LL);
        }
        v20 = *(&DataAsset_TypeInfo->_2.bitflags2 + 1);
        if ( v19 >= (unsigned int)v20 && *((DataAsset_c **)v17[8].monitor + v20 - 1) == DataAsset_TypeInfo )
          break;
      }
      if ( ++v15 >= (int)v7 )
        return 0LL;
    }
    return v16[4];
  }
  return result;
}


UnityEngine_Object_o *__fastcall AssetData__GetObject_30137720(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v4; // x8
  __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  __int64 v9; // x0

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
          sub_B2C434(this, name);
        this = (AssetData_o *)System_String__Equals_44292872((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(v4) = objectList->max_length;
        if ( (int)++v6 >= (int)v4 )
          return 0LL;
      }
LABEL_17:
      v9 = sub_B2C460(this);
      sub_B2C400(v9, 0LL);
    }
    return 0LL;
  }
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  return objectList->m_Items[0];
}


UnityEngine_Texture2D_o *__fastcall AssetData__GetObject_Texture2D_(
        AssetData_o *this,
        const MethodInfo_1720240 *method)
{
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v3; // x8
  unsigned __int64 v5; // x23
  UnityEngine_Object_o *v6; // x20
  Il2CppClass *_0_T; // x21
  Il2CppClass *v8; // x21
  __int64 v9; // x20
  Il2CppClass *v10; // x19
  UnityEngine_Texture2D_o *result; // x0
  __int64 v12; // x0

  objectList = this->fields.objectList;
  if ( objectList )
  {
    v3 = *(_QWORD *)&objectList->max_length;
    if ( (int)v3 >= 1 )
    {
      v5 = 0LL;
      while ( 1 )
      {
        if ( v5 >= (unsigned int)v3 )
        {
          v12 = sub_B2C460(this);
          sub_B2C400(v12, 0LL);
        }
        v6 = objectList->m_Items[v5];
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_0_T);
        this = (AssetData_o *)sub_B2C41C(v6, _0_T);
        if ( this )
          break;
        LODWORD(v3) = objectList->max_length;
        if ( (__int64)++v5 >= (int)v3 )
          return 0LL;
      }
      v8 = method->rgctx_data->_0_T;
      if ( (BYTE2(v8->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_T);
      v9 = sub_B2C41C(v6, v8);
      v10 = method->rgctx_data->_0_T;
      if ( (BYTE2(v10->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(v10);
      if ( v9 )
      {
        result = (UnityEngine_Texture2D_o *)sub_B2C41C(v9, v10);
        if ( result )
          return result;
        sub_B2C728(v9);
      }
    }
  }
  return 0LL;
}


WarBoardWaitTimeSetting_o *__fastcall AssetData__GetObject_WarBoardWaitTimeSetting_(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_1720344 *method)
{
  struct UnityEngine_Object_array *objectList; // x23
  __int64 v4; // x8
  __int64 v7; // x24
  UnityEngine_Object_o *v8; // x21
  Il2CppClass *_0_T; // x22
  unsigned __int64 v10; // x22
  UnityEngine_Object_o *v11; // x20
  Il2CppClass *v12; // x21
  Il2CppClass *v13; // x20
  UnityEngine_Object_o *v14; // x0
  Il2CppClass *v15; // x1
  Il2CppClass *v16; // x21
  __int64 v17; // x20
  Il2CppClass *v18; // x19
  WarBoardWaitTimeSetting_o *result; // x0
  __int64 v20; // x0

  objectList = this->fields.objectList;
  if ( !objectList )
    return 0LL;
  v4 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v4 < 1 )
      return 0LL;
    v7 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v7 >= (unsigned int)v4 )
        goto LABEL_36;
      v8 = objectList->m_Items[v7];
      if ( !v8 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v7], 0LL)) == 0LL )
        sub_B2C434(this, name);
      this = (AssetData_o *)System_String__Equals_44292872((System_String_o *)this, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE2(_0_T->vtable[0].methodPtr) & 1) == 0 )
          sub_AC505C(method->rgctx_data->_0_T);
        this = (AssetData_o *)sub_B2C41C(v8, _0_T);
        if ( this )
          break;
      }
      LODWORD(v4) = objectList->max_length;
      if ( (int)++v7 >= (int)v4 )
        return 0LL;
    }
    v13 = method->rgctx_data->_0_T;
    if ( (BYTE2(v13->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_T);
    v14 = v8;
    v15 = v13;
  }
  else
  {
    if ( (int)v4 < 1 )
      return 0LL;
    v10 = 0LL;
    while ( 1 )
    {
      if ( v10 >= (unsigned int)v4 )
      {
LABEL_36:
        v20 = sub_B2C460(this);
        sub_B2C400(v20, 0LL);
      }
      v11 = objectList->m_Items[v10];
      v12 = method->rgctx_data->_0_T;
      if ( (BYTE2(v12->vtable[0].methodPtr) & 1) == 0 )
        sub_AC505C(method->rgctx_data->_0_T);
      this = (AssetData_o *)sub_B2C41C(v11, v12);
      if ( this )
        break;
      LODWORD(v4) = objectList->max_length;
      if ( (__int64)++v10 >= (int)v4 )
        return 0LL;
    }
    v16 = method->rgctx_data->_0_T;
    if ( (BYTE2(v16->vtable[0].methodPtr) & 1) == 0 )
      sub_AC505C(method->rgctx_data->_0_T);
    v14 = v11;
    v15 = v16;
  }
  v17 = sub_B2C41C(v14, v15);
  v18 = method->rgctx_data->_0_T;
  if ( (BYTE2(v18->vtable[0].methodPtr) & 1) == 0 )
    sub_AC505C(v18);
  if ( v17 )
  {
    result = (WarBoardWaitTimeSetting_o *)sub_B2C41C(v17, v18);
    if ( result )
      return result;
    sub_B2C728(v17);
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
    sub_B2C434(0LL, name);
  return System_String__Equals_44292872(v3, name, 0LL);
}


bool __fastcall AssetData__IsSame_30133532(
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
    sub_B2C434(0LL, type);
  return System_String__Equals_44292872(v4, name, 0LL);
}


bool __fastcall AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  BattleServantConfConponent_o *p_objectList; // x0
  struct UnityEngine_Object_array *objectList; // x12
  unsigned __int64 max_length; // x8
  char isSavedMemoryMode; // w20
  unsigned __int64 v18; // x9
  UnityEngine_Object_o **m_Items; // x12
  UnityEngine_Object_o *v20; // x13
  __int64 v21; // x15
  struct UnityEngine_AssetBundle_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  System_String_array **v30; // x2
  System_String_array **v31; // x3
  System_Boolean_array **v32; // x4
  System_Int32_array **v33; // x5
  System_Int32_array *v34; // x6
  System_Int32_array *v35; // x7
  struct UnityEngine_Object_array *v36; // x24
  __int64 v37; // x8
  unsigned __int64 v38; // x25
  UnityEngine_GameObject_c **v39; // x8
  UnityEngine_Object_o *v40; // x21
  UnityEngine_Object_o *Component_srcLineSprite; // x22
  struct UnityEngine_GameObject_o *closeBtnObject; // x8
  BattleServantConfConponent_o *v43; // x21
  unsigned __int64 v44; // x26
  UnityEngine_Object_o *v45; // x22
  __int64 v47; // x0

  if ( (byte_418A6C7 & 1) == 0 )
  {
    sub_B2C35C(&DataAsset_TypeInfo, method);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponent_Camera___, v9);
    sub_B2C35C(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____67435232, v10);
    sub_B2C35C(&UnityEngine_GameObject_TypeInfo, v11);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v12);
    sub_B2C35C(&OptionManager_TypeInfo, v13);
    byte_418A6C7 = 1;
  }
  if ( this->fields.type == 1 )
  {
    p_objectList = (BattleServantConfConponent_o *)&this->fields.objectList;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      max_length = objectList->max_length;
      if ( (__int64)(max_length << 32) >= 1 )
      {
        isSavedMemoryMode = 0;
        v18 = 0LL;
        m_Items = objectList->m_Items;
        while ( v18 < max_length )
        {
          v20 = m_Items[v18];
          if ( v20 )
          {
            v21 = *(&DataAsset_TypeInfo->_2.bitflags2 + 1);
            if ( *(&v20->klass->_2.bitflags2 + 1) >= (unsigned int)v21 )
            {
              if ( (DataAsset_c *)v20->klass->_2.typeHierarchy[v21 - 1] != DataAsset_TypeInfo )
                v20 = 0LL;
            }
            else
            {
              v20 = 0LL;
            }
          }
          ++v18;
          isSavedMemoryMode |= v20 == 0LL;
          if ( (__int64)v18 >= (int)max_length )
            goto LABEL_58;
        }
        goto LABEL_60;
      }
      isSavedMemoryMode = 0;
LABEL_58:
      p_objectList->klass = 0LL;
      sub_B2C2F8(p_objectList, 0LL, v2, v3, v4, v5, v6, v7);
      goto LABEL_59;
    }
LABEL_61:
    sub_B2C434(p_objectList, method);
  }
  p_assetBundle = &this->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)this->fields.assetBundle;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  p_objectList = (BattleServantConfConponent_o *)UnityEngine_Object__op_Inequality(assetBundle, 0LL, 0LL);
  if ( ((unsigned __int8)p_objectList & 1) != 0 )
  {
    p_objectList = (BattleServantConfConponent_o *)*p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_61;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)p_objectList, 0, 0LL);
    *p_assetBundle = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.assetBundle, 0LL, v30, v31, v32, v33, v34, v35);
  }
  v36 = this->fields.objectList;
  if ( v36 )
  {
    v37 = *(_QWORD *)&v36->max_length;
    if ( (int)v37 >= 1 )
    {
      v38 = 0LL;
      while ( 1 )
      {
        if ( v38 >= (unsigned int)v37 )
          goto LABEL_60;
        v39 = (UnityEngine_GameObject_c **)v36->m_Items[v38];
        if ( v39 )
        {
          if ( *v39 == UnityEngine_GameObject_TypeInfo )
            v40 = v36->m_Items[v38];
          else
            v40 = 0LL;
        }
        else
        {
          v40 = 0LL;
        }
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        p_objectList = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v40, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v40 )
            goto LABEL_61;
          Component_srcLineSprite = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_srcLineSprite_(
                                                              (UnityEngine_GameObject_o *)v40,
                                                              (const MethodInfo_1AA78DC *)Method_UnityEngine_GameObject_GetComponent_Camera___);
          if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          }
          p_objectList = (BattleServantConfConponent_o *)UnityEngine_Object__op_Inequality(
                                                           Component_srcLineSprite,
                                                           0LL,
                                                           0LL);
          if ( ((unsigned __int8)p_objectList & 1) != 0 )
          {
            if ( !Component_srcLineSprite )
              goto LABEL_61;
            UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)Component_srcLineSprite, 0LL, 0LL);
          }
          p_objectList = (BattleServantConfConponent_o *)UnityEngine_GameObject__GetComponentsInChildren_changeVColor_(
                                                           (UnityEngine_GameObject_o *)v40,
                                                           1,
                                                           (const MethodInfo_1AA7D3C *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____67435232);
          if ( p_objectList )
          {
            closeBtnObject = p_objectList->fields._closeBtnObject;
            v43 = p_objectList;
            if ( (int)closeBtnObject >= 1 )
              break;
          }
        }
LABEL_52:
        LODWORD(v37) = v36->max_length;
        if ( (__int64)++v38 >= (int)v37 )
          goto LABEL_53;
      }
      v44 = 0LL;
      while ( v44 < (unsigned int)closeBtnObject )
      {
        v45 = (UnityEngine_Object_o *)*((_QWORD *)&v43->fields.call_openComp + v44);
        if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
          && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        }
        p_objectList = (BattleServantConfConponent_o *)UnityEngine_Object__op_Equality(v45, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v45 )
            goto LABEL_61;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v45, 0LL, 0LL);
        }
        LODWORD(closeBtnObject) = v43->fields._closeBtnObject;
        if ( (__int64)++v44 >= (int)closeBtnObject )
          goto LABEL_52;
      }
LABEL_60:
      v47 = sub_B2C460(p_objectList);
      sub_B2C400(v47, 0LL);
    }
  }
LABEL_53:
  this->fields.objectList = 0LL;
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.objectList, 0LL, v24, v25, v26, v27, v28, v29);
  if ( (BYTE3(OptionManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !OptionManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(OptionManager_TypeInfo);
  }
  isSavedMemoryMode = OptionManager__isSavedMemoryMode(0LL);
LABEL_59:
  this->fields.entryCount = 0;
  this->fields.isLoadResources = 0;
  return isSavedMemoryMode & 1;
}


bool __fastcall AssetData__RemoveEntry(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w8
  bool v4; // vf
  int32_t v5; // w8
  AssetManager_o *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2

  if ( (byte_418A6C5 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_418A6C5 = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v8);
  AssetManager__ReleaseReservation(Instance, this, v9);
  return 1;
}


bool __fastcall AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  AssetManager_o *Instance; // x0
  __int64 v4; // x1
  const MethodInfo *v5; // x2

  if ( (byte_418A6C6 & 1) == 0 )
  {
    sub_B2C35C(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_418A6C6 = 1;
  }
  if ( this->fields.entryCount < 1 )
    return 0;
  this->fields.entryCount = 0;
  Instance = (AssetManager_o *)SingletonMonoBehaviour_WebViewManager___get_Instance((const MethodInfo_2841668 *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_B2C434(0LL, v4);
  AssetManager__ReleaseReservation(Instance, this, v5);
  return 1;
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
  __int64 v8; // x0
  __int64 v9; // x1
  System_String_array **v10; // x2
  System_String_array **v11; // x3
  System_Boolean_array **v12; // x4
  System_Int32_array **v13; // x5
  System_Int32_array *v14; // x6
  System_Int32_array *v15; // x7
  System_String_array **v16; // x2
  System_String_array **v17; // x3
  System_Boolean_array **v18; // x4
  System_Int32_array **v19; // x5
  System_Int32_array *v20; // x6
  System_Int32_array *v21; // x7
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7

  if ( (byte_418A6C2 & 1) == 0 )
  {
    sub_B2C35C(&AssetData__SetAssetBundleData_d__61_TypeInfo, bundle);
    byte_418A6C2 = 1;
  }
  v7 = sub_B2C42C(AssetData__SetAssetBundleData_d__61_TypeInfo);
  AssetData__SetAssetBundleData_d__61___ctor((AssetData__SetAssetBundleData_d__61_o *)v7, 0, 0LL);
  if ( !v7 )
    sub_B2C434(v8, v9);
  *(_QWORD *)(v7 + 40) = this;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 40), (System_Int32_array **)this, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_B2C2F8((BattleServantConfConponent_o *)(v7 + 48), (System_Int32_array **)bundle, v16, v17, v18, v19, v20, v21);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)(v7 + 32),
    (System_Int32_array **)resourceNames,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27);
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
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_o *Ext; // x0
  System_String_o *v21; // x22
  uint32_t v22; // w0
  __int64 *v23; // x8
  bool v24; // w0
  DataAsset_o *v25; // x22
  DataAsset_o *texture; // x0
  __int64 *v27; // x8
  __int64 *v28; // x8
  bool v29; // w0
  bool v30; // w0
  System_Byte_array *data; // x21
  bool v32; // w0
  System_String_o *text; // x21
  const MethodInfo *v34; // x1
  System_String_o *BaseName; // x0
  __int64 v36; // x1
  System_Int32_array **v37; // x0
  System_String_array **v38; // x2
  System_String_array **v39; // x3
  System_Boolean_array **v40; // x4
  System_Int32_array **v41; // x5
  System_Int32_array *v42; // x6
  System_Int32_array *v43; // x7
  struct UnityEngine_Object_array *v44; // x19
  __int64 v45; // x0
  System_String_array **v46; // x2
  System_String_array **v47; // x3
  System_Boolean_array **v48; // x4
  System_Int32_array **v49; // x5
  System_Int32_array *v50; // x6
  System_Int32_array *v51; // x7
  __int64 v52; // x0
  __int64 v53; // x0

  if ( (byte_418A6C4 & 1) == 0 )
  {
    sub_B2C35C(&DataAsset_TypeInfo, handler);
    sub_B2C35C(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo, v5);
    sub_B2C35C(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_B2C35C(&UnityEngine_Object___TypeInfo, v7);
    sub_B2C35C(&UnityEngine_Object_TypeInfo, v8);
    sub_B2C35C(&StringLiteral_22835/*"txt"*/, v9);
    sub_B2C35C(&StringLiteral_21502/*"png"*/, v10);
    sub_B2C35C(&StringLiteral_20076/*"jpeg"*/, v11);
    sub_B2C35C(&StringLiteral_19196/*"htm"*/, v12);
    sub_B2C35C(&StringLiteral_17158/*"bytes"*/, v13);
    sub_B2C35C(&StringLiteral_20077/*"jpg"*/, v14);
    sub_B2C35C(&StringLiteral_23251/*"wav"*/, v15);
    sub_B2C35C(&StringLiteral_23384/*"xml"*/, v16);
    sub_B2C35C(&StringLiteral_21215/*"ogg"*/, v17);
    sub_B2C35C(&StringLiteral_19197/*"html"*/, v18);
    byte_418A6C4 = 1;
  }
  p_objectList = &this->fields.objectList;
  if ( this->fields.objectList )
    goto LABEL_4;
  LOBYTE(Ext) = 0;
  if ( !handler )
    return (char)Ext;
  if ( this->fields.type )
    return (char)Ext;
  Ext = AssetData__GetExt(this, (const MethodInfo *)handler);
  if ( !Ext )
    return (char)Ext;
  v21 = Ext;
  v22 = PrivateImplementationDetails___ComputeStringHash_21099092(Ext, 0LL);
  if ( v22 <= 0xA535A9EF )
  {
    if ( v22 <= 0x13E2BD39 )
    {
      if ( v22 != 126868124 )
      {
        if ( v22 == 333626681 )
        {
          v23 = &StringLiteral_23251/*"wav"*/;
          goto LABEL_18;
        }
LABEL_33:
        v25 = 0LL;
        goto LABEL_43;
      }
      v28 = &StringLiteral_19196/*"htm"*/;
LABEL_39:
      v32 = System_String__op_Equality(v21, (System_String_o *)*v28, 0LL);
      v25 = 0LL;
      if ( v32 )
      {
        text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0LL);
        v25 = (DataAsset_o *)sub_B2C42C(DataAsset_TypeInfo);
        DataAsset___ctor_27465432(v25, text, 0LL);
      }
      goto LABEL_43;
    }
    if ( v22 == -1523209745 )
    {
      v28 = &StringLiteral_22835/*"txt"*/;
      goto LABEL_39;
    }
    if ( v22 == 1706151940 )
    {
      v30 = System_String__op_Equality(v21, (System_String_o *)StringLiteral_17158/*"bytes"*/, 0LL);
      v25 = 0LL;
      if ( v30 )
      {
        data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
        v25 = (DataAsset_o *)sub_B2C42C(DataAsset_TypeInfo);
        DataAsset___ctor(v25, data, 0LL);
      }
      goto LABEL_43;
    }
    if ( v22 != 1748353692 )
      goto LABEL_33;
    v27 = &StringLiteral_21502/*"png"*/;
    goto LABEL_31;
  }
  if ( v22 > 0xCC3CFC94 )
  {
    if ( v22 == -680155184 )
    {
      v28 = &StringLiteral_19197/*"html"*/;
      goto LABEL_39;
    }
    if ( v22 == -630165834 )
    {
      v28 = &StringLiteral_23384/*"xml"*/;
      goto LABEL_39;
    }
    if ( v22 != -624468176 )
      goto LABEL_33;
    v27 = &StringLiteral_20077/*"jpg"*/;
LABEL_31:
    v29 = System_String__op_Equality(v21, (System_String_o *)*v27, 0LL);
    v25 = 0LL;
    if ( !v29 )
      goto LABEL_43;
    if ( (UnityEngine_Networking_DownloadHandlerTexture_c *)handler->klass == UnityEngine_Networking_DownloadHandlerTexture_TypeInfo )
    {
      texture = (DataAsset_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                 (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                                 0LL);
      goto LABEL_42;
    }
    goto LABEL_33;
  }
  if ( v22 == -1092644061 )
  {
    v27 = &StringLiteral_20076/*"jpeg"*/;
    goto LABEL_31;
  }
  if ( v22 != -868418412 )
    goto LABEL_33;
  v23 = &StringLiteral_21215/*"ogg"*/;
LABEL_18:
  v24 = System_String__op_Equality(v21, (System_String_o *)*v23, 0LL);
  v25 = 0LL;
  if ( !v24 )
    goto LABEL_43;
  if ( (UnityEngine_Networking_DownloadHandlerAudioClip_c *)handler->klass != UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo )
    goto LABEL_33;
  texture = (DataAsset_o *)UnityEngine_Networking_DownloadHandlerAudioClip__get_audioClip(
                             (UnityEngine_Networking_DownloadHandlerAudioClip_o *)handler,
                             0LL);
LABEL_42:
  v25 = texture;
LABEL_43:
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
  {
LABEL_4:
    LOBYTE(Ext) = 0;
    return (char)Ext;
  }
  BaseName = AssetData__GetBaseName(this, v34);
  if ( !v25
    || (UnityEngine_Object__set_name((UnityEngine_Object_o *)v25, BaseName, 0LL),
        v37 = (System_Int32_array **)sub_B2C374(UnityEngine_Object___TypeInfo, 1LL),
        *p_objectList = (struct UnityEngine_Object_array *)v37,
        sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.objectList, v37, v38, v39, v40, v41, v42, v43),
        (v44 = *p_objectList) == 0LL) )
  {
    sub_B2C434(BaseName, v36);
  }
  v45 = sub_B2C41C(v25, v44->obj.klass->_1.element_class);
  if ( !v45 )
  {
    v52 = sub_B2C454(0LL);
    sub_B2C400(v52, 0LL);
  }
  if ( !v44->max_length )
  {
    v53 = sub_B2C460(v45);
    sub_B2C400(v53, 0LL);
  }
  v44->m_Items[0] = (UnityEngine_Object_o *)v25;
  sub_B2C2F8((BattleServantConfConponent_o *)v44->m_Items, (System_Int32_array **)v25, v46, v47, v48, v49, v50, v51);
  LOBYTE(Ext) = 1;
  return (char)Ext;
}


bool __fastcall AssetData__SetResource(AssetData_o *this, const MethodInfo *method)
{
  struct UnityEngine_Object_array **p_objectList; // x19
  System_String_o *Path; // x0
  struct UnityEngine_Object_array *All_35379168; // x0
  System_String_array **v6; // x2
  System_String_array **v7; // x3
  System_Boolean_array **v8; // x4
  System_Int32_array **v9; // x5
  System_Int32_array *v10; // x6
  System_Int32_array *v11; // x7
  __int64 v12; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_35379168 = UnityEngine_Resources__LoadAll_35379168(Path, 0LL);
    this->fields.objectList = All_35379168;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)p_objectList,
      (System_Int32_array **)All_35379168,
      v6,
      v7,
      v8,
      v9,
      v10,
      v11);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_B2C434(v12, v13);
    if ( *(_QWORD *)&objectList->max_length )
      return 1;
    *p_objectList = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)p_objectList, 0LL, v14, v15, v16, v17, v18, v19);
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
  System_Int32_array *v7; // x7
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.attrib,
    (System_Int32_array **)attrib,
    (System_String_array **)attrib,
    *(System_String_array ***)&size,
    *(System_Boolean_array ***)&crc,
    (System_Int32_array **)keyType,
    (System_Int32_array *)method,
    v7);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.keyType,
    (System_Int32_array **)keyType,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18);
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
  System_String_o *name; // x19
  AssetData_c *v9; // x8
  const MethodInfo *v10; // x1
  System_String_o *v11; // x19
  System_String_o *v13; // x0
  const MethodInfo *v14; // x1
  System_String_o *v15; // x19

  if ( (byte_418A6BE & 1) == 0 )
  {
    sub_B2C35C(&AndroidUtil_TypeInfo, method);
    sub_B2C35C(&AssetData_TypeInfo, v3);
    sub_B2C35C(&AssetManager_TypeInfo, v4);
    sub_B2C35C(&StringLiteral_869/*".unity3d"*/, v5);
    byte_418A6BE = 1;
  }
  Ext = AssetData__GetExt(this, method);
  name = this->fields.name;
  v9 = AssetData_TypeInfo;
  if ( Ext )
  {
    if ( (WORD1(AssetData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !AssetData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
      v9 = AssetData_TypeInfo;
    }
    if ( name )
    {
      v11 = System_String__Replace(
              name,
              v9->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
              v9->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
              0LL);
      if ( (BYTE3(AndroidUtil_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !AndroidUtil_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
      }
      return AndroidUtil__ConvertFileNameIfNeed(v11, v10);
    }
LABEL_20:
    sub_B2C434(Ext, v7);
  }
  if ( (WORD1(AssetData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v9 = AssetData_TypeInfo;
  }
  if ( !name )
    goto LABEL_20;
  v13 = System_String__Replace(
          name,
          v9->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          v9->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
          0LL);
  v15 = System_String__Concat_44305532(v13, (System_String_o *)StringLiteral_869/*".unity3d"*/, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getShaName(v15, v14);
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
  __int64 v6; // x1
  System_String_o *name; // x19
  AssetData_c *v8; // x8
  System_String_o *v10; // x0
  const MethodInfo *v11; // x1
  System_String_o *v12; // x19

  if ( (byte_418A6BD & 1) == 0 )
  {
    sub_B2C35C(&AssetData_TypeInfo, method);
    sub_B2C35C(&AssetManager_TypeInfo, v3);
    sub_B2C35C(&StringLiteral_869/*".unity3d"*/, v4);
    byte_418A6BD = 1;
  }
  Ext = AssetData__GetExt(this, method);
  name = this->fields.name;
  v8 = AssetData_TypeInfo;
  if ( Ext )
  {
    if ( (WORD1(AssetData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !AssetData_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
      v8 = AssetData_TypeInfo;
    }
    if ( name )
      return System_String__Replace(
               name,
               v8->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
               v8->static_fields->ASSETBUNDLE_SPLIT_NOT_HASH_CHAR,
               0LL);
LABEL_17:
    sub_B2C434(Ext, v6);
  }
  if ( (WORD1(AssetData_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0 && !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v8 = AssetData_TypeInfo;
  }
  if ( !name )
    goto LABEL_17;
  v10 = System_String__Replace(
          name,
          v8->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          v8->static_fields->ASSETBUNDLE_SPLIT_HASH_CHAR,
          0LL);
  v12 = System_String__Concat_44305532(v10, (System_String_o *)StringLiteral_869/*".unity3d"*/, 0LL);
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
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

  if ( (byte_418A6C0 & 1) == 0 )
  {
    sub_B2C35C(&CatAndMouseGame_TypeInfo, method);
    byte_418A6C0 = 1;
  }
  if ( System_String__IsNullOrEmpty(this->fields.keyType, 0LL) )
    return 0LL;
  keyType = this->fields.keyType;
  if ( (BYTE3(CatAndMouseGame_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CatAndMouseGame_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CatAndMouseGame_TypeInfo);
  }
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
    sub_B2C434(name, method);
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

  if ( (byte_418A6BF & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418A6BF = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4185487 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    byte_4185487 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  cachePathName = v5->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_44305532(cachePathName, CacheName, 0LL);
}


int32_t __fastcall AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *__fastcall AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t nowVersion; // w8

  if ( (byte_418A6BC & 1) == 0 )
  {
    sub_B2C35C(&AssetManager_TypeInfo, method);
    sub_B2C35C(&StringLiteral_1/*""*/, v3);
    byte_418A6BC = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( (nowVersion & 0x80000000) != 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( (BYTE3(AssetManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_30130160(this, method);
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
  System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *v11; // x22
  AssetData__SetAssetBundleData_d__61_o **p_list_5__3; // x21
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  System_String_array **v19; // x2
  System_String_array **v20; // x3
  System_Boolean_array **v21; // x4
  System_Int32_array **v22; // x5
  System_Int32_array *v23; // x6
  System_Int32_array *v24; // x7
  System_Int32_array **v25; // x1
  BattleServantConfConponent_o *p__7__wrap3; // x21
  System_String_array **v27; // x2
  System_String_array **v28; // x3
  System_Boolean_array **v29; // x4
  System_Int32_array **v30; // x5
  System_Int32_array *v31; // x6
  System_Int32_array *v32; // x7
  int v33; // w8
  BattleServantConfConponent_o *p_asyncRep_5__2; // x21
  System_String_array **v35; // x2
  System_String_array **v36; // x3
  System_Boolean_array **v37; // x4
  System_Int32_array **v38; // x5
  System_Int32_array *v39; // x6
  System_Int32_array *v40; // x7
  struct UnityEngine_Object_array **p_objectList; // x20
  System_String_array **v42; // x2
  System_String_array **v43; // x3
  System_Boolean_array **v44; // x4
  System_Int32_array **v45; // x5
  System_Int32_array *v46; // x6
  System_Int32_array *v47; // x7
  System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *list_5__3; // x22
  System_String_array **v49; // x2
  System_String_array **v50; // x3
  System_Boolean_array **v51; // x4
  System_Int32_array **v52; // x5
  System_Int32_array *v53; // x6
  System_Int32_array *v54; // x7
  BattleServantConfConponent_c *klass; // x9
  int namespaze; // w10
  System_Int32_array **AssetAsync; // x0
  BattleServantConfConponent_o *v58; // x19
  System_String_array **v59; // x2
  System_String_array **v60; // x3
  System_Boolean_array **v61; // x4
  System_Int32_array **v62; // x5
  System_Int32_array *v63; // x6
  System_Int32_array *v64; // x7
  System_Int32_array **v65; // x1
  System_String_array **v66; // x2
  System_String_array **v67; // x3
  System_Boolean_array **v68; // x4
  System_Int32_array **v69; // x5
  System_Int32_array *v70; // x6
  System_Int32_array *v71; // x7
  bool result; // w0
  System_String_array **v73; // x2
  System_String_array **v74; // x3
  System_Boolean_array **v75; // x4
  System_Int32_array **v76; // x5
  System_Int32_array *v77; // x6
  System_Int32_array *v78; // x7
  struct UnityEngine_Object_array **v79; // x20
  System_Int32_array **AllAssetsAsync; // x0
  BattleServantConfConponent_o *v81; // x19
  System_String_array **v82; // x2
  System_String_array **v83; // x3
  System_Boolean_array **v84; // x4
  System_Int32_array **v85; // x5
  System_Int32_array *v86; // x6
  System_Int32_array *v87; // x7
  System_Int32_array **v88; // x1
  System_String_array **v89; // x2
  System_String_array **v90; // x3
  System_Boolean_array **v91; // x4
  System_Int32_array **v92; // x5
  System_Int32_array *v93; // x6
  System_Int32_array *v94; // x7
  __int64 v95; // x0

  v2 = this;
  if ( (byte_4186BAB & 1) == 0 )
  {
    sub_B2C35C(&Method_System_Collections_Generic_List_Object__AddRange__, method);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object__ToArray__, v3);
    sub_B2C35C(&Method_System_Collections_Generic_List_Object___ctor___67314216, v4);
    sub_B2C35C(&System_Collections_Generic_List_Object__TypeInfo, v5);
    this = (AssetData__SetAssetBundleData_d__61_o *)sub_B2C35C(&UnityEngine_Object_TypeInfo, v6);
    byte_4186BAB = 1;
  }
  _1__state = v2->fields.__1__state;
  _4__this = v2->fields.__4__this;
  if ( _1__state == 2 )
  {
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    list_5__3 = (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !list_5__3 )
      goto LABEL_41;
    System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
      list_5__3,
      (System_Collections_Generic_IEnumerable_T__o *)this,
      (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0LL;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields._asyncRep_5__2, 0LL, v49, v50, v51, v52, v53, v54);
    p__7__wrap3 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap3;
    v33 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v33;
    goto LABEL_25;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (BattleServantConfConponent_o *)&v2->fields._asyncRep_5__2;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._asyncRep_5__2;
    v2->fields.__1__state = -1;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__61_o *)UnityEngine_AssetBundleRequest__get_allAssets(
                                                      (UnityEngine_AssetBundleRequest_o *)this,
                                                      0LL);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    p_objectList = &_4__this->fields.objectList;
    sub_B2C2F8((BattleServantConfConponent_o *)p_objectList, (System_Int32_array **)this, v35, v36, v37, v38, v39, v40);
    *((_BYTE *)p_objectList + 8) = 0;
LABEL_33:
    p_asyncRep_5__2->klass = 0LL;
    sub_B2C2F8(p_asyncRep_5__2, 0LL, v42, v43, v44, v45, v46, v47);
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
    if ( !this )
      goto LABEL_41;
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
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Equality(bundle, 0LL, 0LL) || AssetData__GetExt(_4__this, 0LL) )
    return 0;
  if ( v2->fields.resourceNames )
  {
    v11 = (System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData__o *)sub_B2C42C(System_Collections_Generic_List_Object__TypeInfo);
    System_Collections_Generic_List_EventMissionProgressRequest_Argument_ProgressData____ctor(
      v11,
      (const MethodInfo_2EF379C *)Method_System_Collections_Generic_List_Object___ctor___67314216);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v11;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__61_o **)&v2->fields._list_5__3;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v2->fields._list_5__3,
      (System_Int32_array **)v11,
      v13,
      v14,
      v15,
      v16,
      v17,
      v18);
    method = (const MethodInfo *)_4__this->fields.objectList;
    if ( method )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_41;
      System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule___AddRange(
        (System_Collections_Generic_List_TimeZoneInfo_AdjustmentRule__o *)this,
        (System_Collections_Generic_IEnumerable_T__o *)method,
        (const MethodInfo_2EF46B0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v25 = (System_Int32_array **)v2->fields.resourceNames;
    p__7__wrap3 = (BattleServantConfConponent_o *)&v2->fields.__7__wrap3;
    v2->fields.__7__wrap3 = (struct System_String_array *)v25;
    sub_B2C2F8((BattleServantConfConponent_o *)&v2->fields.__7__wrap3, v25, v19, v20, v21, v22, v23, v24);
    v33 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_25:
    klass = p__7__wrap3->klass;
    if ( !p__7__wrap3->klass )
      goto LABEL_41;
    namespaze = (int)klass->_1.namespaze;
    if ( v33 < namespaze )
    {
      if ( v33 >= (unsigned int)namespaze )
      {
        v95 = sub_B2C460(this);
        sub_B2C400(v95, 0LL);
      }
      this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = (System_Int32_array **)UnityEngine_AssetBundle__LoadAssetAsync(
                                              (UnityEngine_AssetBundle_o *)this,
                                              *((System_String_o **)&klass->_1.byval_arg.data + v33),
                                              0LL);
        v2->fields._asyncRep_5__2 = (struct UnityEngine_AssetBundleRequest_o *)AssetAsync;
        v58 = (BattleServantConfConponent_o *)&v2->fields._asyncRep_5__2;
        sub_B2C2F8(v58, AssetAsync, v59, v60, v61, v62, v63, v64);
        v65 = (System_Int32_array **)v58->klass;
        v58[-1].fields.BattleAssetUIAtlas = (struct UIAtlas_o *)v58->klass;
        sub_B2C2F8((BattleServantConfConponent_o *)((char *)v58 - 32), v65, v66, v67, v68, v69, v70, v71);
        LODWORD(v58[-1].fields.data) = 2;
        return 1;
      }
LABEL_41:
      sub_B2C434(this, method);
    }
    v2->fields.__7__wrap3 = 0LL;
    sub_B2C2F8(p__7__wrap3, 0LL, v27, v28, v29, v30, v31, v32);
    p_asyncRep_5__2 = (BattleServantConfConponent_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_41;
    this = (AssetData__SetAssetBundleData_d__61_o *)System_Collections_Generic_List_WarBoardUiData_SaveData___ToArray(
                                                      (System_Collections_Generic_List_WarBoardUiData_SaveData__o *)this,
                                                      (const MethodInfo_2EF65AC *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_41;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    v79 = &_4__this->fields.objectList;
    sub_B2C2F8((BattleServantConfConponent_o *)v79, (System_Int32_array **)this, v73, v74, v75, v76, v77, v78);
    *((_BYTE *)v79 + 8) = 1;
    goto LABEL_33;
  }
  this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_41;
  AllAssetsAsync = (System_Int32_array **)UnityEngine_AssetBundle__LoadAllAssetsAsync(
                                            (UnityEngine_AssetBundle_o *)this,
                                            0LL);
  v2->fields._asyncRep_5__2 = (struct UnityEngine_AssetBundleRequest_o *)AllAssetsAsync;
  v81 = (BattleServantConfConponent_o *)&v2->fields._asyncRep_5__2;
  sub_B2C2F8(v81, AllAssetsAsync, v82, v83, v84, v85, v86, v87);
  v88 = (System_Int32_array **)v81->klass;
  v81[-1].fields.BattleAssetUIAtlas = (struct UIAtlas_o *)v81->klass;
  sub_B2C2F8((BattleServantConfConponent_o *)((char *)v81 - 32), v88, v89, v90, v91, v92, v93, v94);
  result = 1;
  LODWORD(v81[-1].fields.data) = 1;
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

  v2 = sub_B2C360(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_B2C42C(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_B2C360(&Method_AssetData__SetAssetBundleData_d__61_System_Collections_IEnumerator_Reset__);
  sub_B2C400(v3, v4);
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