void __fastcall AssetData___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FB4C2 & 1) == 0 )
  {
    sub_1B640C8(&AssetData_TypeInfo, v1);
    byte_49FB4C2 = 1;
  }
  *AssetData_TypeInfo->static_fields = *(struct AssetData_StaticFields *)asc_BA1828;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall AssetData___ctor(AssetData_o *this, int32_t type, System_String_o *name, const MethodInfo *method)
{
  int32_t v7; // w2
  int32_t v8; // w3
  int32_t v9; // w1
  int32_t v10; // w2
  int32_t v11; // w3
  struct System_String_o **p_keyType; // x19
  int32_t v13; // w2
  int32_t v14; // w3

  if ( (byte_49FB4B8 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_1/*""*/, *(_QWORD *)&type);
    byte_49FB4B8 = 1;
  }
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.type = type;
  this->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.name, (int32_t)name, v7, v8);
  v9 = (int)StringLiteral_1/*""*/;
  this->fields.attrib = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.attrib, v9, v10, v11);
  this->fields.keyType = 0LL;
  p_keyType = &this->fields.keyType;
  *(p_keyType - 2) = 0LL;
  *(p_keyType - 1) = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)p_keyType, 0, v13, v14);
}


void __fastcall AssetData___ctor_37450784(
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
  int32_t v19; // w2
  int32_t v20; // w3
  int32_t v21; // w2
  int32_t v22; // w3

  v16 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v16->fields.type = type;
  v16->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->fields.name, (int32_t)name, v17, v18);
  v16->fields.attrib = attrib;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v16->fields.attrib, (int32_t)attrib, v19, v20);
  v16->fields.keyType = keyType;
  v16 = (AssetData_o *)((char *)v16 + 56);
  LODWORD(v16[-1].fields.objectList) = version;
  HIDWORD(v16[-1].fields.objectList) = version;
  *(_DWORD *)&v16[-1].fields.isLoadResources = size;
  v16[-1].fields.entryCount = crc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v16, (int32_t)keyType, v21, v22);
}


void __fastcall AssetData___ctor_37450924(
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
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3

  v17 = this;
  System_Object___ctor((Il2CppObject *)this, 0LL);
  v17->fields.type = type;
  v17->fields.name = name;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.name, (int32_t)name, v18, v19);
  v17->fields.attrib = attrib;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v17->fields.attrib, (int32_t)attrib, v20, v21);
  v17->fields.keyType = keyType;
  v17 = (AssetData_o *)((char *)v17 + 56);
  LODWORD(v17[-1].fields.objectList) = nowVersion;
  HIDWORD(v17[-1].fields.objectList) = newVersion;
  *(_DWORD *)&v17[-1].fields.isLoadResources = size;
  v17[-1].fields.entryCount = crc;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)v17, (int32_t)keyType, v22, v23);
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
  int v5; // w20
  int32_t v6; // w1
  struct System_String_o *v7; // x8
  int32_t v8; // w2

  name = this->fields.name;
  if ( name )
  {
    IndexOf = (System_String_o *)System_String__LastIndexOf(name, 0x2Fu, 0LL);
    if ( !this->fields.name )
      goto LABEL_13;
    v5 = (int)IndexOf;
    IndexOf = (System_String_o *)System_String__LastIndexOf(this->fields.name, 0x2Eu, 0LL);
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
        return System_String__Substring_61394392(IndexOf, v6, v8, 0LL);
LABEL_13:
      sub_1B64324(IndexOf);
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
  if ( (byte_49FB4C0 & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, name);
    sub_1B640C8(&DataAsset_TypeInfo, v7);
    this = (AssetData_o *)sub_1B640C8(&UnityEngine_TextAsset_TypeInfo, v8);
    byte_49FB4C0 = 1;
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
          sub_1B6432C(this, name);
        v12 = (UnityEngine_TextAsset_o *)objectList->m_Items[v11];
        if ( !v12 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v11], 0LL)) == 0LL )
          sub_1B64324(this);
        this = (AssetData_o *)System_String__Equals_61383712((System_String_o *)this, name, 0LL);
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
        return CatAndMouseGame__MouseGame3_38045992(monitor, key, 0LL);
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
    return CatAndMouseGame__MouseGame3_38045992(monitor, key, 0LL);
  v26 = CatAndMouseGame_TypeInfo;
LABEL_34:
  j_il2cpp_runtime_class_init_0(v26);
  return CatAndMouseGame__MouseGame3_38045992(monitor, key, 0LL);
}


System_String_o *__fastcall AssetData__GetExt(AssetData_o *this, const MethodInfo *method)
{
  System_String_o *name; // x0
  __int64 IndexOf; // x0
  struct System_String_o *v5; // x8

  name = this->fields.name;
  if ( !name )
    return 0LL;
  IndexOf = System_String__LastIndexOf(name, 0x2Eu, 0LL);
  if ( (IndexOf & 0x80000000) != 0 )
    return 0LL;
  v5 = this->fields.name;
  if ( !v5 )
    sub_1B64324(IndexOf);
  if ( v5->fields._stringLength <= (int)IndexOf )
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

  if ( (byte_49FB4BA & 1) == 0 )
  {
    sub_1B640C8(&NetworkManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_24009/*"txt"*/, v3);
    sub_1B640C8(&StringLiteral_22472/*"png"*/, v4);
    sub_1B640C8(&StringLiteral_20873/*"jpeg"*/, v5);
    sub_1B640C8(&StringLiteral_19910/*"htm"*/, v6);
    sub_1B640C8(&StringLiteral_17613/*"bytes"*/, v7);
    sub_1B640C8(&StringLiteral_20874/*"jpg"*/, v8);
    sub_1B640C8(&StringLiteral_24565/*"wav"*/, v9);
    sub_1B640C8(&StringLiteral_24724/*"xml"*/, v10);
    sub_1B640C8(&StringLiteral_24378/*"usm"*/, v11);
    sub_1B640C8(&StringLiteral_22133/*"ogg"*/, v12);
    sub_1B640C8(&StringLiteral_19911/*"html"*/, v13);
    byte_49FB4BA = 1;
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
  v21 = System_String__Concat_61375396(FILE_URL_SCHEME, Path, 0LL);
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
        if ( v22 == 333626681 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_24565/*"wav"*/, 0LL) )
        {
          v23 = 20;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v21, v23, 0LL);
        }
        return 0LL;
      }
      v26 = &StringLiteral_19910/*"htm"*/;
      goto LABEL_39;
    }
    switch ( v22 )
    {
      case 0x4F91B85Cu:
        v26 = &StringLiteral_24378/*"usm"*/;
        break;
      case 0x65B1D004u:
        v26 = &StringLiteral_17613/*"bytes"*/;
        break;
      case 0x6835C29Cu:
        v25 = &StringLiteral_22472/*"png"*/;
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
        if ( v22 == -868418412 && System_String__op_Equality(Ext, (System_String_o *)StringLiteral_22133/*"ogg"*/, 0LL) )
        {
          v23 = 14;
          return UnityEngine_Networking_UnityWebRequestMultimedia__GetAudioClip(v21, v23, 0LL);
        }
        return 0LL;
      }
      v25 = &StringLiteral_20873/*"jpeg"*/;
      goto LABEL_33;
    }
    v26 = &StringLiteral_24009/*"txt"*/;
    goto LABEL_39;
  }
  if ( v22 == -680155184 )
  {
    v26 = &StringLiteral_19911/*"html"*/;
    goto LABEL_39;
  }
  if ( v22 == -630165834 )
  {
    v26 = &StringLiteral_24724/*"xml"*/;
    goto LABEL_39;
  }
  if ( v22 != -624468176 )
    return 0LL;
  v25 = &StringLiteral_20874/*"jpg"*/;
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
    sub_1B6432C(this, method);
  return objectList->m_Items[0];
}


UnityEngine_Object_array *__fastcall AssetData__GetObjectList(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.objectList;
}


System_Object_array *__fastcall AssetData__GetObjectList_object_(AssetData_o *this, const MethodInfo_2E1BBD4 *method)
{
  const MethodInfo_2E1BBD4 *v2; // x19
  AssetData_o *v3; // x20
  struct UnityEngine_Object_array *objectList; // x23
  __int64 v5; // x8
  unsigned __int64 v6; // x24
  unsigned int v7; // w21
  UnityEngine_Object_o *v8; // x22
  __int64 _0_T; // x1
  __int64 _1_T; // x0
  struct UnityEngine_Object_array *v11; // x23
  __int64 v12; // x8
  System_Object_array *v13; // x20
  il2cpp_array_size_t v14; // w26
  unsigned __int64 i; // x24
  UnityEngine_Object_o *v16; // x21
  __int64 v17; // x1
  __int64 v18; // x1
  int32_t v19; // w2
  int32_t v20; // w3
  AssetData_o *v21; // x22
  AssetData_o *v22; // x21
  Il2CppClass **v23; // x0
  Il2CppObject **v24; // x0
  System_String_o *v25; // x1
  System_String_o *v26; // x2
  const MethodInfo_2E1BDBC *v27; // x3

  v2 = method;
  v3 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1BB6000(method);
  objectList = v3->fields.objectList;
  if ( !objectList )
    return 0LL;
  v5 = *(_QWORD *)&objectList->max_length;
  if ( (int)v5 < 1 )
    return 0LL;
  v6 = 0LL;
  v7 = 0;
  do
  {
    if ( v6 >= (unsigned int)v5 )
LABEL_37:
      sub_1B6432C(this, method);
    v8 = objectList->m_Items[v6];
    _0_T = (__int64)v2->rgctx_data->_0_T;
    if ( (*(_BYTE *)(_0_T + 309) & 1) == 0 )
      _0_T = sub_1BB5FA4(v2->rgctx_data->_0_T);
    this = (AssetData_o *)sub_1B64204(v8, _0_T);
    LODWORD(v5) = objectList->max_length;
    ++v6;
    if ( this )
      ++v7;
  }
  while ( (__int64)v6 < (int)v5 );
  if ( !v7 )
    return 0LL;
  _1_T = (__int64)v2->rgctx_data->_1_T__;
  if ( (*(_BYTE *)(_1_T + 309) & 1) == 0 )
    _1_T = sub_1BB5FA4(_1_T);
  this = (AssetData_o *)sub_1B64170(_1_T, v7);
  v11 = v3->fields.objectList;
  if ( !v11 )
LABEL_38:
    sub_1B64324(this);
  v12 = *(_QWORD *)&v11->max_length;
  v13 = (System_Object_array *)this;
  if ( (int)v12 >= 1 )
  {
    v14 = 0;
    for ( i = 0LL; (__int64)i < (int)v12; ++i )
    {
      if ( i >= (unsigned int)v12 )
        goto LABEL_37;
      v16 = v11->m_Items[i];
      v17 = (__int64)v2->rgctx_data->_0_T;
      if ( (*(_BYTE *)(v17 + 309) & 1) == 0 )
        v17 = sub_1BB5FA4(v2->rgctx_data->_0_T);
      this = (AssetData_o *)sub_1B64204(v16, v17);
      if ( this )
      {
        if ( !v13 )
          goto LABEL_38;
        v18 = (__int64)v2->rgctx_data->_0_T;
        if ( (*(_BYTE *)(v18 + 309) & 1) == 0 )
          v18 = sub_1BB5FA4(v2->rgctx_data->_0_T);
        this = (AssetData_o *)sub_1B64204(v16, v18);
        v21 = this;
        v22 = (AssetData_o *)v2->rgctx_data->_0_T;
        if ( (v22[3].fields.newVersion & 0x100) == 0 )
        {
          this = (AssetData_o *)sub_1BB5FA4(v2->rgctx_data->_0_T);
          v22 = this;
        }
        if ( v21 )
        {
          this = (AssetData_o *)sub_1B64204(v21, v22);
          method = (const MethodInfo_2E1BBD4 *)this;
          if ( !this )
          {
            sub_1B645E4(v21);
            return (System_Object_array *)AssetManager__TryGetAssetObject_object_(v24, v25, v26, v27);
          }
        }
        else
        {
          method = 0LL;
        }
        if ( v14 >= v13->max_length )
          goto LABEL_37;
        v23 = &v13->obj.klass + (int)v14;
        v23[4] = (Il2CppClass *)method;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)method, v19, v20);
        ++v14;
      }
      LODWORD(v12) = v11->max_length;
    }
  }
  return v13;
}


System_String_array *__fastcall AssetData__GetObjectNameList(AssetData_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  System_Collections_Generic_List_object__o *v7; // x19
  UnityEngine_Object_o *name; // x0
  __int64 v9; // x1
  struct UnityEngine_Object_array *objectList; // x20
  int max_length; // w8
  __int64 v12; // x21
  int32_t v13; // w2
  int32_t v14; // w3
  struct System_Object_array *items; // x8
  _QWORD *v16; // x9
  __int64 size; // x10
  UnityEngine_Object_o *v18; // x1
  Il2CppClass **v19; // x0

  if ( (byte_49FB4BF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_string__Add__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_string__ToArray__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_string___ctor__, v5);
    sub_1B640C8(&System_Collections_Generic_List_string__TypeInfo, v6);
    byte_49FB4BF = 1;
  }
  v7 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                      System_Collections_Generic_List_string__TypeInfo,
                                                      method,
                                                      v2);
  System_Collections_Generic_List_object____ctor(
    v7,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_string___ctor__);
  objectList = this->fields.objectList;
  if ( objectList )
  {
    max_length = objectList->max_length;
    if ( max_length >= 1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        if ( (unsigned int)v12 >= max_length )
          sub_1B6432C(name, v9);
        name = objectList->m_Items[v12];
        if ( !name )
          break;
        name = (UnityEngine_Object_o *)UnityEngine_Object__get_name(name, 0LL);
        if ( !v7 )
          break;
        items = v7->fields._items;
        v16 = Method_System_Collections_Generic_List_string__Add__;
        ++v7->fields._version;
        if ( !items )
          break;
        size = v7->fields._size;
        v18 = name;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v7,
            (Il2CppObject *)name,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
        }
        else
        {
          v19 = &items->obj.klass + size;
          v7->fields._size = size + 1;
          v19[4] = (Il2CppClass *)v18;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v18, v13, v14);
        }
        max_length = objectList->max_length;
        if ( (int)++v12 >= max_length )
          return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                          v7,
                                          (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
      }
LABEL_17:
      sub_1B64324(name);
    }
  }
  if ( !v7 )
    goto LABEL_17;
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v7,
                                  (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_string__ToArray__);
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
  if ( (byte_49FB4C1 & 1) == 0 )
  {
    sub_1B640C8(&DataAsset_TypeInfo, name);
    this = (AssetData_o *)sub_1B640C8(&UnityEngine_TextAsset_TypeInfo, v5);
    byte_49FB4C1 = 1;
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
          sub_1B6432C(this, name);
        v9 = (System_String_o **)objectList->m_Items[v8];
        if ( !v9 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v8], 0LL)) == 0LL )
          sub_1B64324(this);
        this = (AssetData_o *)System_String__Equals_61383712((System_String_o *)this, name, 0LL);
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


UnityEngine_Object_o *__fastcall AssetData__GetObject_37455420(
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
          sub_1B64324(this);
        this = (AssetData_o *)System_String__Equals_61383712((System_String_o *)this, name, 0LL);
        if ( ((unsigned __int8)this & 1) != 0 )
          return v7;
        LODWORD(v4) = objectList->max_length;
        if ( (int)++v6 >= (int)v4 )
          return 0LL;
      }
LABEL_17:
      sub_1B6432C(this, name);
    }
    return 0LL;
  }
  if ( !v4 )
    return 0LL;
  if ( !(_DWORD)v4 )
    goto LABEL_17;
  return objectList->m_Items[0];
}


Il2CppObject *__fastcall AssetData__GetObject_object_(AssetData_o *this, const MethodInfo_2E1B914 *method)
{
  AssetData_o *v3; // x20
  struct UnityEngine_Object_array *objectList; // x21
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  UnityEngine_Object_o *v7; // x20
  Il2CppClass *_0_T; // x1
  Il2CppClass *v9; // x1
  __int64 v10; // x20
  Il2CppClass *v11; // x19
  Il2CppObject *result; // x0

  v3 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1BB6000(method);
  objectList = v3->fields.objectList;
  if ( objectList )
  {
    v5 = *(_QWORD *)&objectList->max_length;
    if ( (int)v5 >= 1 )
    {
      v6 = 0LL;
      while ( 1 )
      {
        if ( v6 >= (unsigned int)v5 )
          sub_1B6432C(this, method);
        v7 = objectList->m_Items[v6];
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
        this = (AssetData_o *)sub_1B64204(v7, _0_T);
        if ( this )
          break;
        LODWORD(v5) = objectList->max_length;
        if ( (__int64)++v6 >= (int)v5 )
          return 0LL;
      }
      v9 = method->rgctx_data->_0_T;
      if ( (BYTE5(v9->vtable[0].methodPtr) & 1) == 0 )
        v9 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
      v10 = sub_1B64204(v7, v9);
      v11 = method->rgctx_data->_0_T;
      if ( (BYTE5(v11->vtable[0].methodPtr) & 1) == 0 )
        v11 = (Il2CppClass *)sub_1BB5FA4(v11);
      if ( v10 )
      {
        result = (Il2CppObject *)sub_1B64204(v10, v11);
        if ( result )
          return result;
        sub_1B645E4(v10);
      }
    }
  }
  return 0LL;
}


Il2CppObject *__fastcall AssetData__GetObject_object__48347676(
        AssetData_o *this,
        System_String_o *name,
        const MethodInfo_2E1BA1C *method)
{
  AssetData_o *v5; // x21
  struct UnityEngine_Object_array *objectList; // x22
  __int64 v7; // x8
  __int64 v8; // x23
  UnityEngine_Object_o *v9; // x21
  Il2CppClass *_0_T; // x1
  unsigned __int64 v11; // x21
  UnityEngine_Object_o *v12; // x20
  Il2CppClass *v13; // x1
  Il2CppClass *v14; // x1
  UnityEngine_Object_o *v15; // x0
  __int64 v16; // x20
  Il2CppClass *v17; // x19
  Il2CppObject *result; // x0

  v5 = this;
  if ( !method->rgctx_data )
    this = (AssetData_o *)sub_1BB6000(method);
  objectList = v5->fields.objectList;
  if ( !objectList )
    return 0LL;
  v7 = *(_QWORD *)&objectList->max_length;
  if ( name )
  {
    if ( (int)v7 < 1 )
      return 0LL;
    v8 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v8 >= (unsigned int)v7 )
        goto LABEL_38;
      v9 = objectList->m_Items[v8];
      if ( !v9 || (this = (AssetData_o *)UnityEngine_Object__get_name(objectList->m_Items[v8], 0LL)) == 0LL )
        sub_1B64324(this);
      this = (AssetData_o *)System_String__Equals_61383712((System_String_o *)this, name, 0LL);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        _0_T = method->rgctx_data->_0_T;
        if ( (BYTE5(_0_T->vtable[0].methodPtr) & 1) == 0 )
          _0_T = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
        this = (AssetData_o *)sub_1B64204(v9, _0_T);
        if ( this )
          break;
      }
      LODWORD(v7) = objectList->max_length;
      if ( (int)++v8 >= (int)v7 )
        return 0LL;
    }
    v14 = method->rgctx_data->_0_T;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
    v15 = v9;
  }
  else
  {
    if ( (int)v7 < 1 )
      return 0LL;
    v11 = 0LL;
    while ( 1 )
    {
      if ( v11 >= (unsigned int)v7 )
LABEL_38:
        sub_1B6432C(this, name);
      v12 = objectList->m_Items[v11];
      v13 = method->rgctx_data->_0_T;
      if ( (BYTE5(v13->vtable[0].methodPtr) & 1) == 0 )
        v13 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
      this = (AssetData_o *)sub_1B64204(v12, v13);
      if ( this )
        break;
      LODWORD(v7) = objectList->max_length;
      if ( (__int64)++v11 >= (int)v7 )
        return 0LL;
    }
    v14 = method->rgctx_data->_0_T;
    if ( (BYTE5(v14->vtable[0].methodPtr) & 1) == 0 )
      v14 = (Il2CppClass *)sub_1BB5FA4(method->rgctx_data->_0_T);
    v15 = v12;
  }
  v16 = sub_1B64204(v15, v14);
  v17 = method->rgctx_data->_0_T;
  if ( (BYTE5(v17->vtable[0].methodPtr) & 1) == 0 )
    v17 = (Il2CppClass *)sub_1BB5FA4(v17);
  if ( v16 )
  {
    result = (Il2CppObject *)sub_1B64204(v16, v17);
    if ( result )
      return result;
    sub_1B645E4(v16);
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
    sub_1B64324(0LL);
  return System_String__Equals_61383712(v3, name, 0LL);
}


bool __fastcall AssetData__IsSame_37451096(
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
    sub_1B64324(0LL);
  return System_String__Equals_61383712(v4, name, 0LL);
}


bool __fastcall AssetData__ReleaseData(AssetData_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  ServantStatusBattleListViewItem_o *p_objectList; // x0
  struct UnityEngine_Object_array *objectList; // x10
  char isSavedMemoryMode; // w20
  __int64 v13; // x8
  UnityEngine_Object_o **m_Items; // x10
  UnityEngine_Object_o *v15; // x11
  __int64 methodPtr_low; // x13
  struct UnityEngine_AssetBundle_o **p_assetBundle; // x20
  UnityEngine_Object_o *assetBundle; // x21
  __int64 v19; // x1
  int32_t v20; // w2
  int32_t v21; // w3
  int32_t v22; // w2
  int32_t v23; // w3
  struct UnityEngine_Object_array *v24; // x24
  __int64 v25; // x8
  unsigned __int64 v26; // x25
  UnityEngine_GameObject_c **v27; // x8
  UnityEngine_Object_o *v28; // x21
  Il2CppObject *Component_object; // x22
  __int64 v30; // x8
  ServantStatusBattleListViewItem_o *v31; // x21
  unsigned __int64 v32; // x29
  UnityEngine_Object_o *v33; // x22
  bool result; // w0

  if ( (byte_49FB4BE & 1) == 0 )
  {
    sub_1B640C8(&DataAsset_TypeInfo, method);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_Camera___, v5);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____75773584, v6);
    sub_1B640C8(&UnityEngine_GameObject_TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&OptionManager_TypeInfo, v9);
    byte_49FB4BE = 1;
  }
  if ( this->fields.type == 1 )
  {
    p_objectList = (ServantStatusBattleListViewItem_o *)&this->fields.objectList;
    objectList = this->fields.objectList;
    if ( objectList )
    {
      isSavedMemoryMode = 0;
      if ( (int)*(_QWORD *)&objectList->max_length >= 1 )
      {
        v13 = (unsigned int)*(_QWORD *)&objectList->max_length;
        isSavedMemoryMode = 0;
        m_Items = objectList->m_Items;
        do
        {
          v15 = *m_Items;
          if ( *m_Items )
          {
            methodPtr_low = LOBYTE(DataAsset_TypeInfo->vtable._0_Equals.methodPtr);
            if ( LOBYTE(v15->klass->vtable._0_Equals.methodPtr) >= (unsigned int)methodPtr_low )
            {
              if ( (DataAsset_c *)v15->klass->_2.typeHierarchy[methodPtr_low - 1] != DataAsset_TypeInfo )
                v15 = 0LL;
            }
            else
            {
              v15 = 0LL;
            }
          }
          --v13;
          isSavedMemoryMode |= v15 == 0LL;
          ++m_Items;
        }
        while ( v13 );
      }
      p_objectList->klass = 0LL;
      sub_1B6406C(p_objectList, 0, v2, v3);
      goto LABEL_51;
    }
LABEL_53:
    sub_1B64324(p_objectList);
  }
  p_assetBundle = &this->fields.assetBundle;
  assetBundle = (UnityEngine_Object_o *)this->fields.assetBundle;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_objectList = (ServantStatusBattleListViewItem_o *)UnityEngine_Object__op_Inequality(assetBundle, 0LL, 0LL);
  if ( ((unsigned __int8)p_objectList & 1) != 0 )
  {
    p_objectList = (ServantStatusBattleListViewItem_o *)*p_assetBundle;
    if ( !*p_assetBundle )
      goto LABEL_53;
    UnityEngine_AssetBundle__Unload((UnityEngine_AssetBundle_o *)p_objectList, 0, 0LL);
    *p_assetBundle = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.assetBundle, 0, v22, v23);
  }
  v24 = this->fields.objectList;
  if ( v24 )
  {
    v25 = *(_QWORD *)&v24->max_length;
    if ( (int)v25 >= 1 )
    {
      v26 = 0LL;
      while ( 1 )
      {
        if ( v26 >= (unsigned int)v25 )
          goto LABEL_52;
        v27 = (UnityEngine_GameObject_c **)v24->m_Items[v26];
        if ( v27 )
        {
          if ( *v27 == UnityEngine_GameObject_TypeInfo )
            v28 = v24->m_Items[v26];
          else
            v28 = 0LL;
        }
        else
        {
          v28 = 0LL;
        }
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (ServantStatusBattleListViewItem_o *)UnityEngine_Object__op_Equality(v28, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v28 )
            goto LABEL_53;
          Component_object = UnityEngine_GameObject__GetComponent_object_(
                               (UnityEngine_GameObject_o *)v28,
                               (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_Camera___);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          p_objectList = (ServantStatusBattleListViewItem_o *)UnityEngine_Object__op_Inequality(
                                                                (UnityEngine_Object_o *)Component_object,
                                                                0LL,
                                                                0LL);
          if ( ((unsigned __int8)p_objectList & 1) != 0 )
          {
            if ( !Component_object )
              goto LABEL_53;
            UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)Component_object, 0LL, 0LL);
          }
          p_objectList = (ServantStatusBattleListViewItem_o *)UnityEngine_GameObject__GetComponentsInChildren_object_(
                                                                (UnityEngine_GameObject_o *)v28,
                                                                1,
                                                                (const MethodInfo_2E88B78 *)Method_UnityEngine_GameObject_GetComponentsInChildren_Camera____75773584);
          if ( p_objectList )
          {
            v30 = *(_QWORD *)&p_objectList->fields.sortIndex;
            v31 = p_objectList;
            if ( (int)v30 >= 1 )
              break;
          }
        }
LABEL_47:
        LODWORD(v25) = v24->max_length;
        if ( (__int64)++v26 >= (int)v25 )
          goto LABEL_48;
      }
      v32 = 0LL;
      while ( v32 < (unsigned int)v30 )
      {
        v33 = (UnityEngine_Object_o *)*(&v31->fields.sortValue0 + v32);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        p_objectList = (ServantStatusBattleListViewItem_o *)UnityEngine_Object__op_Equality(v33, 0LL, 0LL);
        if ( ((unsigned __int8)p_objectList & 1) == 0 )
        {
          if ( !v33 )
            goto LABEL_53;
          UnityEngine_Camera__set_targetTexture((UnityEngine_Camera_o *)v33, 0LL, 0LL);
        }
        LODWORD(v30) = v31->fields.sortIndex;
        if ( (__int64)++v32 >= (int)v30 )
          goto LABEL_47;
      }
LABEL_52:
      sub_1B6432C(p_objectList, v19);
    }
  }
LABEL_48:
  this->fields.objectList = 0LL;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, 0, v20, v21);
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
  const MethodInfo *v8; // x2

  if ( (byte_49FB4BC & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_49FB4BC = 1;
  }
  entryCount = this->fields.entryCount;
  v4 = __OFSUB__(entryCount, 1);
  v5 = entryCount - 1;
  if ( v5 < 0 != v4 )
    return 0;
  this->fields.entryCount = v5;
  if ( v5 )
    return 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
  if ( !Instance )
    sub_1B64324(0LL);
  AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v8);
  return 1;
}


bool __fastcall AssetData__RemoveEntryAll(AssetData_o *this, const MethodInfo *method)
{
  int32_t entryCount; // w20
  Il2CppObject *Instance; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FB4BD & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_AssetManager__get_Instance__, method);
    byte_49FB4BD = 1;
  }
  entryCount = this->fields.entryCount;
  if ( entryCount >= 1 )
  {
    this->fields.entryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_AssetManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    AssetManager__ReleaseReservation((AssetManager_o *)Instance, this, v5);
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
  int32_t v8; // w2
  int32_t v9; // w3
  int32_t v10; // w2
  int32_t v11; // w3
  int32_t v12; // w2
  int32_t v13; // w3

  if ( (byte_49FB4B9 & 1) == 0 )
  {
    sub_1B640C8(&AssetData__SetAssetBundleData_d__61_TypeInfo, bundle);
    byte_49FB4B9 = 1;
  }
  v7 = sub_1B64314(AssetData__SetAssetBundleData_d__61_TypeInfo, bundle, resourceNames);
  System_Object___ctor((Il2CppObject *)v7, 0LL);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 40) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 40), (int32_t)this, v8, v9);
  *(_QWORD *)(v7 + 48) = bundle;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 48), (int32_t)bundle, v10, v11);
  *(_QWORD *)(v7 + 32) = resourceNames;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v7 + 32), (int32_t)resourceNames, v12, v13);
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
  __int64 v32; // x1
  __int64 v33; // x2
  bool v34; // w0
  System_String_o *text; // x21
  __int64 v36; // x1
  __int64 v37; // x2
  UnityEngine_Texture2D_o *texture; // x0
  int32_t v39; // w23
  int32_t v40; // w24
  int32_t format; // w25
  __int64 v42; // x1
  __int64 v43; // x2
  System_Byte_array *v44; // x0
  const MethodInfo *v45; // x1
  __int64 v46; // x0
  int32_t v47; // w2
  int32_t v48; // w3
  struct UnityEngine_Object_array *v49; // x19
  __int64 v50; // x0
  __int64 v51; // x1
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x0

  if ( (byte_49FB4BB & 1) == 0 )
  {
    sub_1B640C8(&DataAsset_TypeInfo, handler);
    sub_1B640C8(&UnityEngine_Networking_DownloadHandlerAudioClip_TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_1B640C8(&UnityEngine_Object___TypeInfo, v7);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v8);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v9);
    sub_1B640C8(&StringLiteral_24009/*"txt"*/, v10);
    sub_1B640C8(&StringLiteral_22472/*"png"*/, v11);
    sub_1B640C8(&StringLiteral_20873/*"jpeg"*/, v12);
    sub_1B640C8(&StringLiteral_19910/*"htm"*/, v13);
    sub_1B640C8(&StringLiteral_17613/*"bytes"*/, v14);
    sub_1B640C8(&StringLiteral_20874/*"jpg"*/, v15);
    sub_1B640C8(&StringLiteral_24565/*"wav"*/, v16);
    sub_1B640C8(&StringLiteral_24724/*"xml"*/, v17);
    sub_1B640C8(&StringLiteral_22133/*"ogg"*/, v18);
    sub_1B640C8(&StringLiteral_19911/*"html"*/, v19);
    byte_49FB4BB = 1;
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
                v24 = &StringLiteral_22133/*"ogg"*/;
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
            v27 = &StringLiteral_20873/*"jpeg"*/;
            goto LABEL_31;
          }
          switch ( v23 )
          {
            case 0xD775A7D0:
              v28 = &StringLiteral_19911/*"html"*/;
              break;
            case 0xDA706EB6:
              v28 = &StringLiteral_24724/*"xml"*/;
              break;
            case 0xDAC75F30:
              v27 = &StringLiteral_20874/*"jpg"*/;
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
                v24 = &StringLiteral_24565/*"wav"*/;
                goto LABEL_18;
              }
              goto LABEL_33;
            }
            v28 = &StringLiteral_19910/*"htm"*/;
            goto LABEL_39;
          }
          if ( v23 != -1523209745 )
          {
            if ( v23 == 1706151940 )
            {
              v30 = System_String__op_Equality(v22, (System_String_o *)StringLiteral_17613/*"bytes"*/, 0LL);
              audioClip = 0LL;
              if ( v30 )
              {
                data = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
                audioClip = (DataAsset_o *)sub_1B64314(DataAsset_TypeInfo, v32, v33);
                DataAsset___ctor(audioClip, data, 0LL);
              }
              goto LABEL_45;
            }
            if ( v23 != 1748353692 )
              goto LABEL_33;
            v27 = &StringLiteral_22472/*"png"*/;
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
            v39 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._4_get_width.method)(
                    texture,
                    texture->klass->vtable._5_set_width.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            v40 = ((__int64 (__fastcall *)(UnityEngine_Texture2D_o *, Il2CppMethodPointer))texture->klass->vtable._6_get_height.method)(
                    texture,
                    texture->klass->vtable._7_set_height.methodPtr);
            texture = UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                        (UnityEngine_Networking_DownloadHandlerTexture_o *)handler,
                        0LL);
            if ( !texture )
              goto LABEL_53;
            format = UnityEngine_Texture2D__get_format(texture, 0LL);
            audioClip = (DataAsset_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v42, v43);
            UnityEngine_Texture2D___ctor_69016000((UnityEngine_Texture2D_o *)audioClip, v39, v40, format, 0, 0LL);
            v44 = UnityEngine_Networking_DownloadHandler__get_data(handler, 0LL);
            UnityEngine_ImageConversion__LoadImage_69232784((UnityEngine_Texture2D_o *)audioClip, v44, 0LL);
LABEL_45:
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)audioClip, 0LL, 0LL) )
            {
LABEL_4:
              LOBYTE(Ext) = 0;
              return (char)Ext;
            }
            texture = (UnityEngine_Texture2D_o *)AssetData__GetBaseName(this, v45);
            if ( audioClip )
            {
              UnityEngine_Object__set_name((UnityEngine_Object_o *)audioClip, (System_String_o *)texture, 0LL);
              v46 = sub_1B64170(UnityEngine_Object___TypeInfo, 1LL);
              *p_objectList = (struct UnityEngine_Object_array *)v46;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.objectList, v46, v47, v48);
              v49 = *p_objectList;
              if ( *p_objectList )
              {
                v50 = sub_1B64204(audioClip, v49->obj.klass->_1.element_class);
                if ( !v50 )
                {
                  v54 = sub_1B64348(0LL);
                  sub_1B641F0(v54, 0LL);
                }
                if ( !v49->max_length )
                  sub_1B6432C(v50, v51);
                v49->m_Items[0] = (UnityEngine_Object_o *)audioClip;
                sub_1B6406C((ServantStatusBattleListViewItem_o *)v49->m_Items, (int32_t)audioClip, v52, v53);
                LOBYTE(Ext) = 1;
                return (char)Ext;
              }
            }
LABEL_53:
            sub_1B64324(texture);
          }
          v28 = &StringLiteral_24009/*"txt"*/;
        }
LABEL_39:
        v34 = System_String__op_Equality(v22, (System_String_o *)*v28, 0LL);
        audioClip = 0LL;
        if ( v34 )
        {
          text = UnityEngine_Networking_DownloadHandler__get_text(handler, 0LL);
          audioClip = (DataAsset_o *)sub_1B64314(DataAsset_TypeInfo, v36, v37);
          DataAsset___ctor_37599116(audioClip, text, 0LL);
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
  struct UnityEngine_Object_array *All_69089168; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  __int64 v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  struct UnityEngine_Object_array *objectList; // x8

  p_objectList = &this->fields.objectList;
  if ( !this->fields.objectList && this->fields.type == 1 )
  {
    Path = AssetData__get_Path(this, method);
    All_69089168 = UnityEngine_Resources__LoadAll_69089168(Path, 0LL);
    this->fields.objectList = All_69089168;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_objectList, (int32_t)All_69089168, v6, v7);
    objectList = this->fields.objectList;
    if ( !objectList )
      sub_1B64324(v8);
    if ( *(_QWORD *)&objectList->max_length )
      return 1;
    *p_objectList = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_objectList, 0, v9, v10);
  }
  return 0;
}


bool __fastcall AssetData__SetUpdateInfo(
        AssetData_o *this,
        int32_t version,
        System_String_o *attrib,
        int32_t size,
        uint32_t crc,
        System_String_o *keyType,
        const MethodInfo *method)
{
  int32_t v12; // w2
  int32_t v13; // w3
  int32_t nowVersion; // w8

  this->fields.newVersion = version;
  this->fields.attrib = attrib;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.attrib, (int32_t)attrib, (int32_t)attrib, size);
  this->fields.keyType = keyType;
  this->fields.size = size;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.keyType, (int32_t)keyType, v12, v13);
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
  AssetData_c *v7; // x8
  System_String_o *name; // x20
  System_String_o *v9; // x19
  System_String_o *v10; // x0
  System_String_o *v11; // x20
  const MethodInfo *v13; // x1
  System_String_o *v14; // x19

  if ( (byte_49FB4B5 & 1) == 0 )
  {
    sub_1B640C8(&AndroidUtil_TypeInfo, method);
    sub_1B640C8(&AssetData_TypeInfo, v3);
    sub_1B640C8(&AssetManager_TypeInfo, v4);
    sub_1B640C8(&StringLiteral_1121/*".unity3d"*/, v5);
    byte_49FB4B5 = 1;
  }
  Ext = AssetData__GetExt(this, method);
  v7 = AssetData_TypeInfo;
  name = this->fields.name;
  v9 = Ext;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v7 = AssetData_TypeInfo;
  }
  if ( !name )
    sub_1B64324(Ext);
  v10 = System_String__Replace(
          name,
          v7->static_fields->ASSETBUNDLE_SPLIT_BASE_CHAR,
          v7->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
          0LL);
  v11 = v10;
  if ( v9 )
  {
    if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
    return AndroidUtil__ConvertFileNameIfNeed(v11, 0LL);
  }
  else
  {
    v14 = System_String__Concat_61375396(v10, (System_String_o *)StringLiteral_1121/*".unity3d"*/, 0LL);
    if ( !AssetManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    return AssetManager__getShaName(v14, v13);
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
  uint16_t *static_fields; // x8
  uint16_t v10; // w1
  System_String_o *v12; // x0
  const MethodInfo *v13; // x1
  System_String_o *v14; // x19

  if ( (byte_49FB4B4 & 1) == 0 )
  {
    sub_1B640C8(&AssetData_TypeInfo, method);
    sub_1B640C8(&AssetManager_TypeInfo, v3);
    sub_1B640C8(&StringLiteral_1121/*".unity3d"*/, v4);
    byte_49FB4B4 = 1;
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
  static_fields = (uint16_t *)v6->static_fields;
  v10 = *static_fields;
  if ( v8 )
  {
    if ( name )
      return System_String__Replace(name, v10, static_fields[3], 0LL);
LABEL_12:
    sub_1B64324(Ext);
  }
  if ( !name )
    goto LABEL_12;
  v12 = System_String__Replace(name, v10, static_fields[2], 0LL);
  v14 = System_String__Concat_61375396(v12, (System_String_o *)StringLiteral_1121/*".unity3d"*/, 0LL);
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

  if ( (byte_49FB4B7 & 1) == 0 )
  {
    sub_1B640C8(&CatAndMouseGame_TypeInfo, method);
    byte_49FB4B7 = 1;
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
    sub_1B64324(name);
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

  if ( (byte_49FB4B6 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FB4B6 = 1;
  }
  type = this->fields.type;
  if ( type == 1 )
    return this->fields.name;
  if ( type )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_49FB632 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    byte_49FB632 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v5 = AssetManager_TypeInfo;
  }
  cachePathName = v5->static_fields->cachePathName;
  CacheName = AssetData__get_CacheName(this, method);
  return System_String__Concat_61375396(cachePathName, CacheName, 0LL);
}


int32_t __fastcall AssetData__get_Size(AssetData_o *this, const MethodInfo *method)
{
  return this->fields.size;
}


System_String_o *__fastcall AssetData__get_Url(AssetData_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t nowVersion; // w8

  if ( (byte_49FB4B3 & 1) == 0 )
  {
    sub_1B640C8(&AssetManager_TypeInfo, method);
    sub_1B640C8(&StringLiteral_1/*""*/, v3);
    byte_49FB4B3 = 1;
  }
  nowVersion = this->fields.nowVersion;
  if ( (nowVersion & 0x80000000) != 0 || nowVersion == this->fields.newVersion )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  return AssetManager__getUrlString_37448232(this, method);
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
  AssetData_o *_4__this; // x20
  struct System_String_array *resourceNames; // x8
  UnityEngine_Object_o *bundle; // x21
  const MethodInfo *v11; // x1
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x22
  AssetData__SetAssetBundleData_d__61_o **p_list_5__3; // x21
  int32_t v16; // w2
  int32_t v17; // w3
  int32_t v18; // w2
  int32_t v19; // w3
  System_Collections_Generic_IEnumerable_T__o *objectList; // x1
  struct System_String_array *v21; // x1
  __int64 v22; // x1
  int32_t v23; // w2
  int32_t v24; // w3
  int v25; // w8
  System_Collections_Generic_List_object__o *list_5__3; // x22
  int32_t v27; // w2
  int32_t v28; // w3
  struct System_String_array *_7__wrap3; // x9
  int max_length; // w10
  UnityEngine_AssetBundleRequest_o *AssetAsync; // x0
  int32_t v32; // w2
  int32_t v33; // w3
  Il2CppObject *asyncRep_5__2; // x1
  ServantStatusBattleListViewItem_o *p__2__current; // x19
  int32_t v36; // w2
  int32_t v37; // w3
  bool result; // w0
  ServantStatusBattleListViewItem_o *p_asyncRep_5__2; // x21
  int32_t v40; // w2
  int32_t v41; // w3
  struct UnityEngine_Object_array **p_objectList; // x20
  int32_t v43; // w2
  int32_t v44; // w3
  int32_t v45; // w2
  int32_t v46; // w3
  struct UnityEngine_Object_array **v47; // x20
  UnityEngine_AssetBundleRequest_o *AllAssetsAsync; // x0
  int32_t v49; // w2
  int32_t v50; // w3
  Il2CppObject *v51; // x1
  ServantStatusBattleListViewItem_o *v52; // x19
  int32_t v53; // w2
  int32_t v54; // w3

  v2 = this;
  if ( (byte_49FB4C3 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_Object__AddRange__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object__ToArray__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_Object___ctor__, v4);
    sub_1B640C8(&System_Collections_Generic_List_Object__TypeInfo, v5);
    this = (AssetData__SetAssetBundleData_d__61_o *)sub_1B640C8(&UnityEngine_Object_TypeInfo, v6);
    byte_49FB4C3 = 1;
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
      (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    v2->fields._asyncRep_5__2 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._asyncRep_5__2, 0, v27, v28);
    v25 = v2->fields.__7__wrap4 + 1;
    v2->fields.__7__wrap4 = v25;
    goto LABEL_21;
  }
  if ( _1__state == 1 )
  {
    p_asyncRep_5__2 = (ServantStatusBattleListViewItem_o *)&v2->fields._asyncRep_5__2;
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
    sub_1B6406C((ServantStatusBattleListViewItem_o *)p_objectList, (int32_t)this, v40, v41);
    *((_BYTE *)p_objectList + 8) = 0;
LABEL_32:
    p_asyncRep_5__2->klass = 0LL;
    sub_1B6406C(p_asyncRep_5__2, 0, v43, v44);
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
    v14 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                         System_Collections_Generic_List_Object__TypeInfo,
                                                         v12,
                                                         v13);
    System_Collections_Generic_List_object____ctor(
      v14,
      (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_Object___ctor__);
    v2->fields._list_5__3 = (struct System_Collections_Generic_List_Object__o *)v14;
    p_list_5__3 = (AssetData__SetAssetBundleData_d__61_o **)&v2->fields._list_5__3;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._list_5__3, (int32_t)v14, v16, v17);
    objectList = (System_Collections_Generic_IEnumerable_T__o *)_4__this->fields.objectList;
    if ( objectList )
    {
      this = *p_list_5__3;
      if ( !*p_list_5__3 )
        goto LABEL_40;
      System_Collections_Generic_List_object___AddRange(
        (System_Collections_Generic_List_object__o *)this,
        objectList,
        (const MethodInfo_34AD8E0 *)Method_System_Collections_Generic_List_Object__AddRange__);
    }
    v21 = v2->fields.resourceNames;
    v2->fields.__7__wrap3 = v21;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields.__7__wrap3, (int32_t)v21, v18, v19);
    v25 = 0;
    v2->fields.__7__wrap4 = 0;
LABEL_21:
    this = (AssetData__SetAssetBundleData_d__61_o *)&v2->fields.__7__wrap3;
    _7__wrap3 = v2->fields.__7__wrap3;
    if ( !_7__wrap3 )
      goto LABEL_40;
    max_length = _7__wrap3->max_length;
    if ( v25 < max_length )
    {
      if ( v25 >= (unsigned int)max_length )
        sub_1B6432C(this, v22);
      this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
      if ( this )
      {
        AssetAsync = UnityEngine_AssetBundle__LoadAssetAsync(
                       (UnityEngine_AssetBundle_o *)this,
                       _7__wrap3->m_Items[v25],
                       0LL);
        v2->fields._asyncRep_5__2 = AssetAsync;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._asyncRep_5__2, (int32_t)AssetAsync, v32, v33);
        asyncRep_5__2 = (Il2CppObject *)v2->fields._asyncRep_5__2;
        v2->fields.__2__current = asyncRep_5__2;
        p__2__current = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
        sub_1B6406C(p__2__current, (int32_t)asyncRep_5__2, v36, v37);
        *(_DWORD *)&p__2__current[-1].fields.isMine = 2;
        return 1;
      }
LABEL_40:
      sub_1B64324(this);
    }
    v2->fields.__7__wrap3 = 0LL;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)this, 0, v23, v24);
    p_asyncRep_5__2 = (ServantStatusBattleListViewItem_o *)&v2->fields._list_5__3;
    this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields._list_5__3;
    if ( !this )
      goto LABEL_40;
    this = (AssetData__SetAssetBundleData_d__61_o *)System_Collections_Generic_List_object___ToArray(
                                                      (System_Collections_Generic_List_object__o *)this,
                                                      (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_Object__ToArray__);
    if ( !_4__this )
      goto LABEL_40;
    _4__this->fields.objectList = (struct UnityEngine_Object_array *)this;
    v47 = &_4__this->fields.objectList;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)v47, (int32_t)this, v45, v46);
    *((_BYTE *)v47 + 8) = 1;
    goto LABEL_32;
  }
  this = (AssetData__SetAssetBundleData_d__61_o *)v2->fields.bundle;
  if ( !this )
    goto LABEL_40;
  AllAssetsAsync = UnityEngine_AssetBundle__LoadAllAssetsAsync((UnityEngine_AssetBundle_o *)this, 0LL);
  v2->fields._asyncRep_5__2 = AllAssetsAsync;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&v2->fields._asyncRep_5__2, (int32_t)AllAssetsAsync, v49, v50);
  v51 = (Il2CppObject *)v2->fields._asyncRep_5__2;
  v2->fields.__2__current = v51;
  v52 = (ServantStatusBattleListViewItem_o *)&v2->fields.__2__current;
  sub_1B6406C(v52, (int32_t)v51, v53, v54);
  result = 1;
  *(_DWORD *)&v52[-1].fields.isMine = 1;
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
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_AssetData__SetAssetBundleData_d__61_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
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