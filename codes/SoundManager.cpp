void SoundManager___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  __int64 v7; // x1
  struct SoundManager_StaticFields *static_fields; // x0

  if ( (byte_593808A & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_11850/*"ResourceSound"*/);
    byte_593808A = 1;
  }
  v7 = StringLiteral_11850/*"ResourceSound"*/;
  static_fields = SoundManager_TypeInfo->static_fields;
  static_fields->DEFAULT_VOLUME = 1.0;
  static_fields->RESIDENT_RESOURCE_SOUND_NAME = (struct System_String_o *)v7;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&static_fields->RESIDENT_RESOURCE_SOUND_NAME,
    v7,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
}


void SoundManager___ctor(SoundManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  OverwriteAssetSoundName_c *v10; // x0
  Il2CppObject *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5938089 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_21FFC50(&OverwriteAssetSoundName_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager___ctor__);
    byte_5938089 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FBFF60 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.assetNameCounter, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = OverwriteAssetSoundName_TypeInfo;
  this->fields.isBusy = 1;
  v11 = (Il2CppObject *)sub_21FFEBC(v10);
  System_Object___ctor(v11, 0);
  this->fields.overwriteAssetSoundName = (struct OverwriteAssetSoundName_o *)v11;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteAssetSoundName,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_476EDF0 *)Method_SingletonMonoBehaviour_SoundManager___ctor__);
}


void SoundManager__AddAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SoundManager_o *v4; // x21
  System_Collections_Generic_Dictionary_object__int__o *assetNameCounter; // x20
  int32_t v6; // w2

  v4 = this;
  if ( (byte_593807B & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SoundManager_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_593807B = 1;
  }
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter,
          (Il2CppObject *)name,
          (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v6 = 1;
    goto LABEL_8;
  }
  this = (SoundManager_o *)v4->fields.assetNameCounter;
  if ( !this )
LABEL_9:
    sub_21FFECC(this, name);
  v6 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)this,
         (Il2CppObject *)name,
         (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
LABEL_8:
  System_Collections_Generic_Dictionary_object__int___set_Item(
    assetNameCounter,
    (Il2CppObject *)name,
    v6,
    (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
}


void SoundManager__DownloadAudioAssetStorage(
        SoundManager_o *this,
        System_String_o *name,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x20
  System_String_array *DownloadAssetNames; // x0
  __int64 v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  __int64 v16; // x19
  const MethodInfo *v17; // x1
  System_String_array *v18; // x22
  il2cpp_array_size_t max_length; // x8
  System_String_o *v20; // x21
  unsigned __int64 v21; // x25
  System_String_o *v22; // x23
  AssetLoader_LoadEndDataHandler_o *v23; // x22
  __int64 v24; // x1

  if ( (byte_5938081 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SoundManager___c__DisplayClass105_0__DownloadAudioAssetStorage_b__0__);
    sub_21FFC50(&SoundManager___c__DisplayClass105_0_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5938081 = 1;
  }
  v7 = sub_21FFEBC(SoundManager___c__DisplayClass105_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = v7 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v17);
  DownloadAssetNames = SoundManager__getDownloadAssetNames(name, v17);
  if ( !DownloadAssetNames )
    goto LABEL_24;
  v18 = DownloadAssetNames;
  max_length = DownloadAssetNames->max_length;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        goto LABEL_23;
      v22 = v18->m_Items[v21];
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
      DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v22, 0);
      LODWORD(max_length) = v18->max_length;
      if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
        break;
      if ( (__int64)++v21 >= (int)max_length )
        goto LABEL_17;
    }
    if ( (unsigned int)v21 >= (unsigned int)max_length )
LABEL_23:
      sub_21FFED4(DownloadAssetNames);
    v20 = v18->m_Items[v21];
  }
LABEL_17:
  DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(v20, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_27;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_SoundManager___c__DisplayClass105_0__DownloadAudioAssetStorage_b__0__,
    0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v24);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage(v20, v23, 1, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_27:
    if ( *(_QWORD *)v16 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v16 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v16 + 64LL),
        *(_QWORD *)(*(_QWORD *)v16 + 40LL));
      return;
    }
LABEL_24:
    sub_21FFECC(DownloadAssetNames, v9);
  }
}


void SoundManager__DownloadAudioAssetStorage_48468760(
        SoundManager_o *this,
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_String_array *DownloadAssetNames; // x0
  const MethodInfo *v9; // x1
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_Collections_Generic_List_object__o *v16; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x27
  System_String_o *v19; // x23
  System_String_array *v20; // x24
  il2cpp_array_size_t v21; // x8
  System_String_o *v22; // x23
  unsigned __int64 v23; // x21
  System_String_o *v24; // x25
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_String_array *v35; // x19
  System_Action_o *v36; // x22
  __int64 v37; // x1
  Il2CppObject *object; // [xsp+0h] [xbp-70h]
  __int64 v39; // [xsp+8h] [xbp-68h]

  if ( (byte_5938083 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&Method_SoundManager___c__DisplayClass107_0__DownloadAudioAssetStorage_b__0__);
    sub_21FFC50(&SoundManager___c__DisplayClass107_0_TypeInfo);
    byte_5938083 = 1;
  }
  v7 = sub_21FFEBC(SoundManager___c__DisplayClass107_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  object = (Il2CppObject *)v7;
  *(_QWORD *)(v7 + 16) = callback;
  v39 = v7 + 16;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !nameList )
    goto LABEL_36;
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)max_length )
    {
      v19 = nameList->m_Items[v18];
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v9);
      DownloadAssetNames = SoundManager__getDownloadAssetNames(v19, v9);
      if ( !DownloadAssetNames )
        goto LABEL_36;
      v20 = DownloadAssetNames;
      v21 = DownloadAssetNames->max_length;
      v22 = **(System_String_o ***)(qword_594C0B8 + 184);
      if ( (int)v21 >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)v21 )
            goto LABEL_35;
          v24 = v20->m_Items[v23];
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v9);
          DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v24, 0);
          LODWORD(v21) = v20->max_length;
          if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
            break;
          if ( (__int64)++v23 >= (int)v21 )
            goto LABEL_21;
        }
        if ( (unsigned int)v23 >= (unsigned int)v21 )
          break;
        v22 = v20->m_Items[v23];
      }
LABEL_21:
      DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(v22, 0);
      if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
      {
        if ( !v16 )
          goto LABEL_36;
        items = v16->fields._items;
        v32 = Method_System_Collections_Generic_List_string__Add__;
        ++v16->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v16->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v16,
            (Il2CppObject *)v22,
            *(const MethodInfo_444FB2C **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v22;
          sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
        }
      }
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_35:
    sub_21FFED4(DownloadAssetNames);
  }
LABEL_28:
  if ( !v16 )
    goto LABEL_36;
  if ( v16->fields._size < 1 )
    goto LABEL_39;
  v35 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v16,
                                 (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
  v36 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v36, object, Method_SoundManager___c__DisplayClass107_0__DownloadAudioAssetStorage_b__0__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage_47470156(v35, v36, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_39:
    if ( *(_QWORD *)v39 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v39 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v39 + 64LL),
        *(_QWORD *)(*(_QWORD *)v39 + 40LL));
      return;
    }
LABEL_36:
    sub_21FFECC(DownloadAssetNames, v9);
  }
}


bool SoundManager__ExistsAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_593807D & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_593807D = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    assetNameCounter = this->fields.assetNameCounter;
    if ( assetNameCounter )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
               (Il2CppObject *)name,
               (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) > 0;
LABEL_8:
    sub_21FFECC(assetNameCounter, name);
  }
  return 0;
}


CriAtomEx_CueInfo_o *SoundManager__GetCueInfo(
        CriAtomEx_CueInfo_o *__return_ptr retstr,
        SoundManager_o *this,
        System_String_o *cueSheetName,
        System_String_o *cueName,
        const MethodInfo *method)
{
  const MethodInfo *v9; // x2
  CriAtomEx_CueInfo_array *CueInfoList; // x0
  il2cpp_array_size_t max_length; // x8
  CriAtomEx_CueInfo_array *v12; // x21
  unsigned __int64 v13; // x24
  struct System_String_o **i; // x22
  System_String_o *v15; // x23
  __int64 v16; // x25
  _BYTE s[136]; // [xsp+8h] [xbp-C8h] BYREF

  memset(s, 0, sizeof(s));
  CueInfoList = SoundManager__GetCueInfoList(this, cueSheetName, v9);
  if ( !CueInfoList )
    return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  max_length = CueInfoList->max_length;
  v12 = CueInfoList;
  if ( (int)max_length < 1 )
    return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  v13 = 0;
  for ( i = &CueInfoList->m_Items[0].fields.userData; ; i += 19 )
  {
    if ( v13 >= (unsigned int)max_length )
      sub_21FFED4(CueInfoList);
    v16 = (__int64)*(i - 2);
    v15 = *(i - 1);
    memcpy(s, i, sizeof(s));
    CueInfoList = (CriAtomEx_CueInfo_array *)System_String__op_Equality(v15, cueName, 0);
    if ( ((unsigned __int8)CueInfoList & 1) != 0 )
      break;
    LODWORD(max_length) = v12->max_length;
    if ( (__int64)++v13 >= (int)max_length )
      return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  }
  *(_QWORD *)&retstr->fields.id = v16;
  retstr->fields.name = v15;
  return (CriAtomEx_CueInfo_o *)memcpy(&retstr->fields.userData, s, 0x88u);
}


CriAtomEx_CueInfo_array *SoundManager__GetCueInfoList(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        const MethodInfo *method)
{
  struct CriAtom_o *criware; // x8
  struct CriAtomCueSheet_array *cueSheets; // x20
  int max_length; // w8
  unsigned int v7; // w21
  CriAtomCueSheet_o *v8; // x22

  criware = this->fields.criware;
  if ( !criware || (cueSheets = criware->fields.cueSheets) == 0 )
LABEL_12:
    sub_21FFECC(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_21FFED4(this);
    v8 = cueSheets->m_Items[v7];
    if ( !v8 )
      goto LABEL_12;
    this = (SoundManager_o *)System_String__op_Equality(v8->fields.name, cueSheetName, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SoundManager_o *)CriAtom__GetAcb(v8->fields.name, 0);
      if ( this )
        return CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)this, 0);
    }
    max_length = cueSheets->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


System_String_array *SoundManager__GetCueList(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        const MethodInfo *method)
{
  SoundManager_o *v4; // x20
  struct CriAtom_o *criware; // x8
  struct CriAtomCueSheet_array *cueSheets; // x20
  int max_length; // w8
  unsigned int v8; // w21
  CriAtomCueSheet_o *v9; // x22
  SoundManager_o *v10; // x20
  SoundManager_o *v12; // x19
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x9
  unsigned __int64 v20; // x8
  struct CriWareInitializer_o **p_initializer; // x21
  __int64 v22; // x22
  struct CriWareInitializer_o *v23; // t1
  signed __int64 v24; // x23

  v4 = this;
  if ( (byte_593802D & 1) == 0 )
  {
    this = (SoundManager_o *)sub_21FFC50(&string___TypeInfo);
    byte_593802D = 1;
  }
  criware = v4->fields.criware;
  if ( !criware )
    goto LABEL_23;
  cueSheets = criware->fields.cueSheets;
  if ( !cueSheets )
    goto LABEL_23;
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      goto LABEL_22;
    v9 = cueSheets->m_Items[v8];
    if ( !v9 )
      goto LABEL_23;
    this = (SoundManager_o *)System_String__op_Equality(v9->fields.name, cueSheetName, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SoundManager_o *)CriAtom__GetAcb(v9->fields.name, 0);
      if ( this )
        break;
    }
    max_length = cueSheets->max_length;
    if ( (int)++v8 >= max_length )
      return 0;
  }
  this = (SoundManager_o *)CriAtomExAcb__GetCueInfoList((CriAtomExAcb_o *)this, 0);
  if ( !this )
LABEL_23:
    sub_21FFECC(this, cueSheetName);
  v12 = this;
  this = (SoundManager_o *)sub_21FFD10(string___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  v10 = this;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v20 = 0;
    p_initializer = &v12->fields.initializer;
    v22 = 32;
    while ( v20 < (unsigned int)m_CancellationTokenSource )
    {
      if ( !v10 )
        goto LABEL_23;
      if ( v20 >= LODWORD(v10->fields.m_CancellationTokenSource) )
        break;
      v23 = *p_initializer;
      p_initializer += 19;
      v24 = v20 + 1;
      *((_QWORD *)&v10->fields.criware + v20) = v23;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)((char *)v10 + v22), (int32_t)v23, v13, v14, v15, v16, v17, v18);
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      v22 += 8;
      v20 = v24;
      if ( v24 >= (int)m_CancellationTokenSource )
        return (System_String_array *)v10;
    }
LABEL_22:
    sub_21FFED4(this);
  }
  return (System_String_array *)v10;
}


System_String_o *SoundManager__GetCueSheet(SoundManager_o *this, System_String_o *cueName, const MethodInfo *method)
{
  struct CriAtom_o *criware; // x8
  struct CriAtomCueSheet_array *cueSheets; // x20
  int max_length; // w8
  unsigned int v7; // w21
  CriAtomCueSheet_o *v8; // x22

  criware = this->fields.criware;
  if ( !criware || (cueSheets = criware->fields.cueSheets) == 0 )
LABEL_12:
    sub_21FFECC(this, cueName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_21FFED4(this);
    v8 = cueSheets->m_Items[v7];
    if ( !v8 )
      goto LABEL_12;
    this = (SoundManager_o *)CriAtom__GetAcb(v8->fields.name, 0);
    if ( this )
    {
      this = (SoundManager_o *)CriAtomExAcb__Exists((CriAtomExAcb_o *)this, cueName, 0);
      if ( ((unsigned __int8)this & 1) != 0 )
        return v8->fields.name;
    }
    max_length = cueSheets->max_length;
    if ( (int)++v7 >= max_length )
      return 0;
  }
}


void SoundManager__InitializePreDelaySetting(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5938033 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938033 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
  SeManager__InitializePreDelaySetting((const MethodInfo *)v2);
}


bool SoundManager__IsExistsSound(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        System_String_o *name,
        const MethodInfo *method)
{
  struct CriAtom_o *criware; // x8
  struct CriAtomCueSheet_array *cueSheets; // x21
  int max_length; // w8
  unsigned int v9; // w22
  CriAtomCueSheet_o *v10; // x23

  criware = this->fields.criware;
  if ( !criware || (cueSheets = criware->fields.cueSheets) == 0 )
LABEL_12:
    sub_21FFECC(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_21FFED4(this);
    v10 = cueSheets->m_Items[v9];
    if ( !v10 )
      goto LABEL_12;
    this = (SoundManager_o *)System_String__op_Equality(v10->fields.name, cueSheetName, 0);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      this = (SoundManager_o *)CriAtom__GetAcb(v10->fields.name, 0);
      if ( this )
        return CriAtomExAcb__Exists((CriAtomExAcb_o *)this, name, 0);
    }
    max_length = cueSheets->max_length;
    if ( (int)++v9 >= max_length )
      return 0;
  }
}


void SoundManager__LoadAudioAssetStorage(
        SoundManager_o *this,
        System_String_o *name,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  bool exists; // w23
  const MethodInfo *v10; // x2
  void *SoundCpkLoader; // x0
  const MethodInfo *v12; // x1
  struct CriAtom_o *criware; // x8
  struct CriAtomCueSheet_array *cueSheets; // x23
  int max_length; // w8
  __int64 v16; // x24
  CriAtomCueSheet_o *v17; // x8
  MissionNaviTransitionBoardItem_o *v18; // x20
  System_Delegate_o *v19; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Action_c *v26; // x1
  SoundManager_CpkLoader_o *v27; // x23
  const MethodInfo *v28; // x5

  if ( (byte_593807F & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&SoundManager_CpkLoader_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    byte_593807F = 1;
  }
  exists = SoundManager__ExistsAssetNameCounter(this, name, (const MethodInfo *)callback);
  SoundManager__AddAssetNameCounter(this, name, v10);
  if ( !exists )
  {
    criware = this->fields.criware;
    if ( criware )
    {
      cueSheets = criware->fields.cueSheets;
      if ( cueSheets )
      {
        max_length = cueSheets->max_length;
        if ( max_length < 1 )
        {
LABEL_14:
          SoundCpkLoader = this->fields.SoundCpkLoader;
          if ( SoundCpkLoader )
          {
            if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
                   (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
                   (Il2CppObject *)name,
                   (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
            {
              if ( !callback )
                return;
              SoundCpkLoader = this->fields.SoundCpkLoader;
              if ( SoundCpkLoader )
              {
                SoundCpkLoader = System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
                                   (Il2CppObject *)name,
                                   (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
                if ( SoundCpkLoader )
                {
                  v18 = (MissionNaviTransitionBoardItem_o *)((char *)SoundCpkLoader + 24);
                  v19 = System_Delegate__Combine(
                          *((System_Delegate_o **)SoundCpkLoader + 3),
                          (System_Delegate_o *)callback,
                          0);
                  if ( v19 )
                  {
                    v26 = System_Action_TypeInfo;
                    if ( (System_Action_c *)v19->klass != System_Action_TypeInfo
                      || (v18->klass = (MissionNaviTransitionBoardItem_c *)v19, (System_Action_c *)v19->klass != v26) )
                    {
                      sub_220024C(v19, v26, v20, v21);
                      return;
                    }
                  }
                  else
                  {
                    v18->klass = 0;
                  }
                  sub_21FFBF4(v18, (int32_t)v19, v20, v21, v22, v23, v24, v25);
                  return;
                }
              }
            }
            else
            {
              v27 = (SoundManager_CpkLoader_o *)sub_21FFEBC(SoundManager_CpkLoader_TypeInfo);
              SoundManager_CpkLoader___ctor(v27, this, name, callback, tp, v28);
              if ( v27 )
              {
                SoundManager_CpkLoader__Start(v27, v12);
                return;
              }
            }
          }
        }
        else
        {
          v16 = 0;
          while ( 1 )
          {
            if ( (unsigned int)v16 >= max_length )
              sub_21FFED4(SoundCpkLoader);
            v17 = cueSheets->m_Items[v16];
            if ( !v17 )
              break;
            SoundCpkLoader = (void *)System_String__op_Equality(v17->fields.name, name, 0);
            if ( ((unsigned __int8)SoundCpkLoader & 1) != 0 )
              goto LABEL_4;
            max_length = cueSheets->max_length;
            if ( (int)++v16 >= max_length )
              goto LABEL_14;
          }
        }
      }
    }
    sub_21FFECC(SoundCpkLoader, v12);
  }
LABEL_4:
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


void SoundManager__OnDestroy(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *SoundBinders; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x0
  __int64 v5; // x1
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *v7; // x0
  Il2CppObject *Item; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v10; // [xsp+18h] [xbp-58h] BYREF

  if ( (byte_5938036 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    byte_5938036 = 1;
  }
  SoundBinders = this->fields.SoundBinders;
  memset(&v10, 0, sizeof(v10));
  if ( SoundBinders )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)SoundBinders,
             (const MethodInfo_3FCA130 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    if ( !Keys )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v10,
      Keys,
      (const MethodInfo_43555B8 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_41361C4 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__) )
    {
      v7 = this->fields.SoundBinders;
      if ( !v7 )
        sub_21FFECC(0, v6);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v10.fields._currentKey,
               (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
      if ( !Item )
        sub_21FFECC(0, v9);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[5].methodPtr)(
        Item,
        Item->klass->vtable[5].method);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_41361C0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this->fields.SoundBinders;
    if ( !Keys )
LABEL_15:
      sub_21FFECC(Keys, v5);
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Keys,
      (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
  }
}


void SoundManager__PlaySubBgm(System_String_o *name, float fadeTime, const MethodInfo *method)
{
  BgmManager_c *v5; // x0
  float *p_DEFAULT_VOLUME; // x8
  System_Nullable_float__o p_volume; // x0
  float v8; // s0
  SubBgmPlayArgs_o *v9; // x0
  System_Nullable_float__o v10; // x2
  SubBgmPlayArgs_o *v11; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_5938040 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&SubBgmPlayArgs_TypeInfo);
    byte_5938040 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v5 = BgmManager_TypeInfo;
  }
  p_DEFAULT_VOLUME = &v5->static_fields->DEFAULT_VOLUME;
  p_volume = (System_Nullable_float__o)&volume;
  v8 = *p_DEFAULT_VOLUME;
  volume = 0;
  System_Nullable_float____ctor(p_volume, v8, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  v9 = (SubBgmPlayArgs_o *)sub_21FFEBC(SubBgmPlayArgs_TypeInfo);
  v10 = volume;
  v11 = v9;
  SubBgmPlayArgs___ctor(v9, name, v10, fadeTime, 0, 0);
  BgmManager__PlaySubBgm(v11, 0);
}


void SoundManager__PlaySubBgm_48459416(
        System_String_o *bgmName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  System_Nullable_float__o p_volumea; // x0
  SubBgmPlayArgs_o *v8; // x0
  System_Nullable_float__o v9; // x2
  SubBgmPlayArgs_o *v10; // x20
  __int64 v11; // x1
  System_Nullable_float__o volumea; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_5938041 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    sub_21FFC50(&SubBgmPlayArgs_TypeInfo);
    byte_5938041 = 1;
  }
  p_volumea = (System_Nullable_float__o)&volumea;
  volumea = 0;
  System_Nullable_float____ctor(p_volumea, volume, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
  v8 = (SubBgmPlayArgs_o *)sub_21FFEBC(SubBgmPlayArgs_TypeInfo);
  v9 = volumea;
  v10 = v8;
  SubBgmPlayArgs___ctor(v8, bgmName, v9, fadeTime, 0, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v11);
  BgmManager__PlaySubBgm(v10, 0);
}


void SoundManager__RebootAssetNameCounter(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_593807A & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_593807A = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    sub_21FFECC(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (const MethodInfo_3FC0A7C *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
}


void SoundManager__ReleaseAllAudioAssetStorage(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x21
  System_Collections_Generic_List_object__o *v5; // x20
  __int64 v6; // x1
  struct System_Collections_Generic_Dictionary_string__int__o *v7; // x0
  const MethodInfo *v8; // x2
  System_Collections_Generic_List_Enumerator_object__o v9; // [xsp+8h] [xbp-78h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v10; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_5938086 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor___91439360);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_5938086 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  memset(&v10, 0, sizeof(v10));
  if ( !assetNameCounter
    || (Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
                 (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                 (const MethodInfo_3FC05BC *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__),
        v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo),
        System_Collections_Generic_List_object____ctor_71627776(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_444F400 *)Method_System_Collections_Generic_List_string___ctor___91439360),
        !v5) )
  {
    sub_21FFECC(assetNameCounter, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = v9;
  v9.fields._list = 0;
  *(_QWORD *)&v9.fields._index = &v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v7 = this->fields.assetNameCounter;
    if ( !v7 )
      sub_21FFECC(0, v6);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)v7,
      v10.fields._current,
      1,
      (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_4450604 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = v9;
  v9.fields._list = 0;
  *(_QWORD *)&v9.fields._index = &v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40C7F4C *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    SoundManager__ReleaseAudioAssetStorage(this, (System_String_o *)v10.fields._current, v8);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40C7F48 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void SoundManager__ReleaseAudioAssetStorage(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *SoundBinders; // x0

  if ( (byte_5938085 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    byte_5938085 = 1;
  }
  if ( SoundManager__SubAssetNameCounter(this, name, method) )
  {
    SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
    if ( !SoundBinders )
      goto LABEL_11;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           SoundBinders,
           (Il2CppObject *)name,
           (const MethodInfo_3FCA65C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
    {
      CriAtom__RemoveCueSheet(name, 0);
      SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
      if ( SoundBinders )
      {
        SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                    SoundBinders,
                                                                                    (Il2CppObject *)name,
                                                                                    (const MethodInfo_3FCA3E8 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
        if ( SoundBinders )
        {
          ((void (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))SoundBinders->klass->vtable._5_set_Item.methodPtr)(
            SoundBinders,
            SoundBinders->klass->vtable._5_set_Item.method);
          SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
          if ( SoundBinders )
          {
            System_Collections_Generic_Dictionary_object__object___Remove(
              SoundBinders,
              (Il2CppObject *)name,
              (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
            return;
          }
        }
      }
LABEL_11:
      sub_21FFECC(SoundBinders, v5);
    }
  }
}


void SoundManager__SetBgmMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_5938037 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938037 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__SetMasterVolume(volume, 0);
}


void SoundManager__SetSeMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_5938038 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938038 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__SetMasterVolume(volume, (const MethodInfo *)v4);
}


void SoundManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_5938039 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938039 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__SetVoiceMasterVolume(volume, (const MethodInfo *)v4);
}


void SoundManager__Setup(SoundManager_o *this, const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct CriAtom_o **p_criware; // x19
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  __int64 v13; // x1
  System_Collections_Generic_Dictionary_object__object__o *v14; // x22
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Collections_Generic_Dictionary_object__object__o *v21; // x22
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  UnityEngine_Object_o *v28; // x21
  Il2CppObject *v29; // x0
  System_String_o *v30; // x2
  System_String_o *v31; // x3
  int32_t v32; // w4
  int32_t v33; // w5
  bool v34; // w6
  bool v35; // w7
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  __int64 v43; // x1
  SoundManager_c *v44; // x0
  System_String_o *RESIDENT_RESOURCE_SOUND_NAME; // x20
  System_String_o *v46; // x21
  System_String_o *v47; // x0

  if ( (byte_5938031 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_AddComponent_CriAtom___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_CriAtom___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1089/*".acb.bytes"*/);
    sub_21FFC50(&StringLiteral_6663/*"FGO.acf"*/);
    sub_21FFC50(&StringLiteral_1092/*".awb.bytes"*/);
    byte_5938031 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_CriAtom___);
  this->fields.criware = (struct CriAtom_o *)Component_object;
  p_criware = &this->fields.criware;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.criware,
    (int32_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !this->fields.SoundBinders )
  {
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v14,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    this->fields.SoundCpkLoader = (struct System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__o *)v14;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.SoundCpkLoader,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_21FFEBC(System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v21,
      (const MethodInfo_3FC9AD8 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    this->fields.SoundBinders = (struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *)v21;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.SoundBinders,
      (int32_t)v21,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = (UnityEngine_Object_o *)*p_criware;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v13);
  if ( UnityEngine_Object__op_Equality(v28, 0, 0) )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v29 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)gameObject,
              (const MethodInfo_38839E8 *)Method_UnityEngine_GameObject_AddComponent_CriAtom___);
      *p_criware = (struct CriAtom_o *)v29;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.criware, (int32_t)v29, v30, v31, v32, v33, v34, v35);
      gameObject = (char *)*p_criware;
      if ( *p_criware )
      {
        v42 = StringLiteral_6663/*"FGO.acf"*/;
        *((_QWORD *)gameObject + 6) = StringLiteral_6663/*"FGO.acf"*/;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(gameObject + 48), v42, v36, v37, v38, v39, v40, v41);
        v44 = SoundManager_TypeInfo;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v43);
          v44 = SoundManager_TypeInfo;
        }
        RESIDENT_RESOURCE_SOUND_NAME = v44->static_fields->RESIDENT_RESOURCE_SOUND_NAME;
        v46 = System_String__Concat_75438412(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1089/*".acb.bytes"*/, 0);
        v47 = System_String__Concat_75438412(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1092/*".awb.bytes"*/, 0);
        gameObject = (char *)CriAtom__AddCueSheet(RESIDENT_RESOURCE_SOUND_NAME, v46, v47, 0, 0);
        if ( *p_criware )
        {
          (*p_criware)->fields.dontDestroyOnLoad = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_21FFECC(gameObject, v4);
  }
}


bool SoundManager__SubAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x21
  int32_t Item; // w0

  if ( (byte_593807C & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_593807C = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                                                                                      (Il2CppObject *)name,
                                                                                      (const MethodInfo_3FC0AE8 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)assetNameCounter & 1) == 0 )
    return 0;
  v6 = this->fields.assetNameCounter;
  if ( !v6 )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter,
           (Il2CppObject *)name,
           (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)name,
    Item - 1,
    (const MethodInfo_3FC08E0 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_3FC0874 *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
  {
    return 0;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
LABEL_11:
    sub_21FFECC(assetNameCounter, name);
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (Il2CppObject *)name,
    (const MethodInfo_3FC1DDC *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
  return 1;
}


void SoundManager__changeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  if ( (byte_5938066 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938066 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__ChangeVolumeSe(name, volume, fadeTime, method);
}


void SoundManager__changeVolumeVoice(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v8; // x1
  __int64 v9; // x1
  const MethodInfo *v10; // x2
  System_String_o *CharaVoiceFileName; // x19

  if ( (byte_5938073 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5938073 = 1;
  }
  if ( name )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v8);
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v9);
    SeManager__ChangeVolumeVoice(CharaVoiceAssetName, CharaVoiceFileName, volume, fadeTime, v10);
  }
}


bool SoundManager__checkServantVoice(
        System_String_o *path,
        System_String_o *name,
        bool isCheck,
        const MethodInfo *method)
{
  System_String_o *v6; // x20
  const MethodInfo *v7; // x3

  v6 = path;
  if ( (byte_5938087 & 1) == 0 )
  {
    path = (System_String_o *)sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5938087 = 1;
  }
  if ( isCheck )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 = System_String__Replace(v6, 0x2Fu, 0x5Fu, 0);
  }
  path = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !path )
LABEL_8:
    sub_21FFECC(path, name);
  return SoundManager__IsExistsSound((SoundManager_o *)path, v6, name, v7);
}


void SoundManager__downloadAudioAssetStorage(
        System_String_o *name,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w3
  const MethodInfo *v9; // x4

  if ( (byte_5938080 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5938080 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, name, callback, v8, v9);
}


void SoundManager__downloadAudioAssetStorage_48468660(
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w3
  const MethodInfo *v9; // x4

  if ( (byte_5938082 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5938082 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v7);
  SoundManager__DownloadAudioAssetStorage_48468760((SoundManager_o *)Instance, nameList, callback, v8, v9);
}


void SoundManager__fadeoutBgm(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_5938044 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938044 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__FadeoutBgm(fadeoutTime, 0, 0);
}


void SoundManager__fadeoutBgm_48459972(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  if ( (byte_5938045 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938045 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__FadeoutBgm(fadeoutTime, callback, 0);
}


void SoundManager__fadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_593804E & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593804E = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__FadeoutJingle(fadeoutTime, 0);
}


System_String_o *SoundManager__getAssetName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = name;
  if ( (byte_5938075 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_17653/*"ba"*/);
    name = (System_String_o *)sub_21FFC50(&StringLiteral_3201/*"Battle"*/);
    byte_5938075 = 1;
  }
  if ( !v2 )
    sub_21FFECC(name, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_17653/*"ba"*/, 0) )
    return (System_String_o *)StringLiteral_3201/*"Battle"*/;
  else
    return 0;
}


System_String_o *SoundManager__getBgmName(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5938047 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938047 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  return BgmManager__GetBgmName(0);
}


System_String_o *SoundManager__getCharaVoiceAssetName(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array *v5; // x20
  System_String_o *v6; // x19
  __int64 *v7; // x8
  System_String_o *v8; // x21
  System_String_o *v9; // x20

  if ( (byte_5938076 & 1) == 0 )
  {
    sub_21FFC50(&char___TypeInfo);
    sub_21FFC50(&StringLiteral_9898/*"NoblePhantasm_"*/);
    sub_21FFC50(&StringLiteral_2634/*"B06"*/);
    sub_21FFC50(&StringLiteral_9725/*"NP_"*/);
    sub_21FFC50(&StringLiteral_4588/*"ChrVoice_"*/);
    sub_21FFC50(&StringLiteral_13274/*"Servants_"*/);
    sub_21FFC50(&StringLiteral_2628/*"B05"*/);
    sub_21FFC50(&StringLiteral_2768/*"B81"*/);
    sub_21FFC50(&StringLiteral_2621/*"B"*/);
    sub_21FFC50(&StringLiteral_2766/*"B80"*/);
    sub_21FFC50(&StringLiteral_2640/*"B07"*/);
    sub_21FFC50(&StringLiteral_2770/*"B82"*/);
    byte_5938076 = 1;
  }
  v3 = sub_21FFD10(char___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_26;
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_21FFED4(v3);
  *(_WORD *)(v3 + 32) = 95;
  if ( !name )
    goto LABEL_26;
  v5 = System_String__Split_75492796(name, (System_Char_array *)v3, 1, 0);
  v3 = System_String__StartsWith(name, (System_String_o *)StringLiteral_9725/*"NP_"*/, 0);
  if ( (v3 & 1) != 0 )
  {
    if ( v5 )
    {
      if ( SLODWORD(v5->max_length) >= 3 )
      {
        v6 = v5->m_Items[1];
        goto LABEL_10;
      }
      return 0;
    }
    goto LABEL_26;
  }
  if ( !v5 )
    goto LABEL_26;
  if ( SLODWORD(v5->max_length) < 3 )
    return 0;
  v8 = v5->m_Items[2];
  if ( !v8 )
LABEL_26:
    sub_21FFECC(v3, v4);
  v6 = v5->m_Items[0];
  if ( !System_String__StartsWith(v5->m_Items[2], (System_String_o *)StringLiteral_2621/*"B"*/, 0) )
  {
    v7 = &StringLiteral_4588/*"ChrVoice_"*/;
    return System_String__Concat_75438412((System_String_o *)*v7, v6, 0);
  }
  if ( v8->fields._stringLength != 4
    || (v9 = System_String__Substring_75489544(v8, 0, 3, 0),
        !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2628/*"B05"*/, 0))
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2634/*"B06"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2640/*"B07"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2766/*"B80"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2768/*"B81"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2770/*"B82"*/, 0) )
  {
    v7 = &StringLiteral_13274/*"Servants_"*/;
    return System_String__Concat_75438412((System_String_o *)*v7, v6, 0);
  }
LABEL_10:
  v7 = &StringLiteral_9898/*"NoblePhantasm_"*/;
  return System_String__Concat_75438412((System_String_o *)*v7, v6, 0);
}


System_String_o *SoundManager__getCharaVoiceFileName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w0

  v2 = name;
  if ( (byte_5938077 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_9725/*"NP_"*/);
    name = (System_String_o *)sub_21FFC50(&StringLiteral_16714/*"_"*/);
    byte_5938077 = 1;
  }
  if ( !v2 )
    sub_21FFECC(name, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_9725/*"NP_"*/, 0) )
  {
    v3 = System_String__IndexOf_75501892(v2, (System_String_o *)StringLiteral_16714/*"_"*/, 0);
    if ( (v3 & 0x80000000) == 0 )
      return System_String__Substring(v2, v3 + 1, 0);
    return 0;
  }
  return v2;
}


System_String_o *SoundManager__getCpkPath(const MethodInfo *method)
{
  __int64 v1; // x1
  AssetManager_c *v2; // x0

  if ( (byte_5938088 & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5938088 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
  if ( !byte_5937657 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937657 = 1;
  }
  v2 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
    v2 = AssetManager_TypeInfo;
  }
  return v2->static_fields->cachePathName;
}


System_String_array *SoundManager__getDownloadAssetNames(System_String_o *cueName, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_5938074 & 1) == 0 )
  {
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1099/*".cpk.bytes"*/);
    sub_21FFC50(&StringLiteral_2587/*"Audio/Bgm/"*/);
    sub_21FFC50(&StringLiteral_2585/*"Audio/"*/);
    byte_5938074 = 1;
  }
  v3 = sub_21FFD10(string___TypeInfo, 2);
  v4 = System_String__Concat_75481624(
         (System_String_o *)StringLiteral_2585/*"Audio/"*/,
         cueName,
         (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
         0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11),
        v4 = System_String__Concat_75481624(
               (System_String_o *)StringLiteral_2587/*"Audio/Bgm/"*/,
               cueName,
               (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
               0),
        (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_21FFED4(v4);
  }
  *(_QWORD *)(v3 + 40) = v4;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v4, v12, v13, v14, v15, v16, v17);
  return (System_String_array *)v3;
}


float SoundManager__getPitchSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_5938068 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938068 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__GetPitchSe(name, method);
}


CriAtom_o *SoundManager__get_CriwareComp(SoundManager_o *this, const MethodInfo *method)
{
  return this->fields.criware;
}


CriWareInitializer_o *SoundManager__get_Initializer(SoundManager_o *this, const MethodInfo *method)
{
  return this->fields.initializer;
}


bool SoundManager__get_IsBusy(SoundManager_o *this, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_593802E & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593802E = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  if ( BgmManager__get_IsBusy(0) )
    return 1;
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
    v4 = SeManager_TypeInfo;
  }
  return v4->static_fields->IsBusy;
}


OverwriteAssetSoundName_o *SoundManager__get_OverwriteAssetSoundName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_593802C & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_593802C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  return (OverwriteAssetSoundName_o *)Instance[5].klass;
}


void SoundManager__initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  SeManager_c *v5; // x0

  if ( (byte_5938030 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&StringLiteral_5568/*"DspBusSetting_0"*/);
    byte_5938030 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v2);
  SoundManager__Setup((SoundManager_o *)Instance, v2);
  CriAtom__AttachDspBusSetting((System_String_o *)StringLiteral_5568/*"DspBusSetting_0"*/, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v3);
  BgmManager__Initialize(0);
  v5 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v4);
  SeManager__Initialize((const MethodInfo *)v5);
}


void SoundManager__initializeAssetStorage(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5938032 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938032 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
  SeManager__InitializeAssetStorage((const MethodInfo *)v2);
}


bool SoundManager__isBusySe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_5938050 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938050 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__IsBusySe(name, method);
}


bool SoundManager__isBusyVoice(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v5; // x1
  __int64 v6; // x1
  System_String_o *CharaVoiceFileName; // x19
  System_String_o *v8; // x0
  System_String_o *v9; // x1

  if ( (byte_5938051 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5938051 = 1;
  }
  if ( name )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v5);
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v6);
    v8 = CharaVoiceAssetName;
    v9 = CharaVoiceFileName;
  }
  else
  {
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v8 = 0;
    v9 = 0;
  }
  return SeManager__IsBusyVoice(v8, v9, v2);
}


bool SoundManager__isLoadingBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_593803D & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593803D = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return BgmManager__isLoading(name, 0);
}


bool SoundManager__isPlayBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_593803C & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593803C = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return BgmManager__IsPlayBgm(name, 0);
}


bool SoundManager__isPlayJingle(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_5938048 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938048 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return BgmManager__IsPlayJingle(name, 0);
}


void SoundManager__loadAudioAssetStorage(
        System_String_o *name,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4

  if ( (byte_593807E & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_593807E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_21FFECC(0, v8);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, name, callback, tp, v9);
}


void SoundManager__loadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  SeManager_c *v4; // x0

  if ( (byte_593803A & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593803A = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  SeManager__LoadSe((System_String_o *)v4, callbackFunc, method);
}


void SoundManager__playBgm(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_593803E & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593803E = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v3->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_48459056(
        System_String_o *name,
        float fadeTime,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BgmManager_c *v7; // x0

  if ( (byte_593803F & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593803F = 1;
  }
  v7 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, onLoadFinishCallback);
    v7 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v7->static_fields->DEFAULT_VOLUME, fadeTime, 0, onLoadFinishCallback, 0);
}


void SoundManager__playBgm_48459636(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_5938042 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938042 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayBgm(name, volume, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_48459752(System_String_o *name, float volume, float fadeinTime, const MethodInfo *method)
{
  if ( (byte_5938043 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938043 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayBgm(name, volume, fadeinTime, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice(System_String_o *name, bool ignorePreDelay, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v6; // x1
  System_String_o *CharaVoiceFileName; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x4
  System_String_o *v10; // x21
  SeManager_c *v11; // x0

  if ( (byte_5938078 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5938078 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, ignorePreDelay);
  CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, (const MethodInfo *)ignorePreDelay);
  CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v6);
  if ( !CharaVoiceAssetName )
    return 0;
  v10 = CharaVoiceFileName;
  v11 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v8);
    v11 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice_48439888(
           CharaVoiceAssetName,
           v10,
           v11->static_fields->DEFAULT_VOLUME,
           0,
           ignorePreDelay,
           v9);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice_48466828(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x21
  const MethodInfo *v8; // x1
  System_String_o *CharaVoiceFileName; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x4
  System_String_o *v12; // x20

  if ( (byte_5938079 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5938079 = 1;
  }
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, ignorePreDelay);
  CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, (const MethodInfo *)ignorePreDelay);
  CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v8);
  if ( !CharaVoiceAssetName )
    return 0;
  v12 = CharaVoiceFileName;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v10);
  return SeManager__PlayVoice_48439888(CharaVoiceAssetName, v12, volume, 0, ignorePreDelay, v11);
}


void SoundManager__playJingle(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_5938049 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938049 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle_48130852(name, v3->static_fields->DEFAULT_VOLUME, 0);
}


void SoundManager__playJingle_48460436(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_593804A & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593804A = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayJingle_48130852(name, volume, 0);
}


void SoundManager__playJingle_48460540(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_593804B & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593804B = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, callbackFunc);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle(name, v5->static_fields->DEFAULT_VOLUME, callbackFunc, 0);
}


void SoundManager__playJingle_48460656(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( (byte_593804C & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593804C = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, callbackFunc);
  BgmManager__PlayJingle(name, volume, callbackFunc, 0);
}


SePlayer_o *SoundManager__playSe(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_5938052 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938052 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_5938053 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938053 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue_48462324(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_5938054 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938054 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_48365672(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_c *v4; // x0

  if ( (byte_593805E & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805E = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, v2);
}


SePlayer_o *SoundManager__playSeLoop_48463716(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_593805F & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805F = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySeLoop(name, volume, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_48463824(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( (byte_5938060 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938060 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySeLoop(name, volume, fadeinTime, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_48463936(
        System_String_o *assetName,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_5938061 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938061 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop_48439136(assetName, name, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_48464056(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_5938062 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938062 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
  return SeManager__PlaySeLoop_48439136(assetName, name, volume, 0.0, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_48464180(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_5938063 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938063 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
  return SeManager__PlaySeLoop_48439136(assetName, name, volume, fadeinTime, 0, v5);
}


SePlayer_o *SoundManager__playSe_48462452(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( (byte_5938055 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938055 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySe(name, volume, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48462568(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_5938056 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938056 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySe(name, volume, fadeinTime, 0, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_48462688(
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SeManager_c *v6; // x0

  if ( (byte_5938057 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938057 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v6->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48462812(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_5938058 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938058 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlaySe(name, volume, 0.0, callbackFunc, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_48462940(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( (byte_5938059 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938059 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlaySe(name, volume, fadeinTime, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48463072(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_593805A & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805A = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_48365672(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48463200(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_593805B & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805B = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48365672(assetName, objectName, volume, fadeinTime, 0, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48463336(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_593805C & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805C = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48365672(assetName, objectName, volume, 0.0, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48463472(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  if ( (byte_593805D & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593805D = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48365672(assetName, objectName, volume, fadeinTime, callbackFunc, 0, 0, v6);
}


void SoundManager__playSystemSe(int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_593804F & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593804F = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__PlaySystemSe(kind, 0, v2);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playVoice(System_String_o *name, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_593806A & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806A = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, ignorePreDelay);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v6->static_fields->DEFAULT_VOLUME, 0, ignorePreDelay, v3);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playVoice_48464984(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_593806B & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806B = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, ignorePreDelay);
  return SeManager__PlayVoice(name, volume, 0, ignorePreDelay, v4);
}


SePlayer_o *SoundManager__playVoice_48465104(
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  SeManager_c *v7; // x0

  if ( (byte_593806C & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806C = 1;
  }
  v7 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v7->static_fields->DEFAULT_VOLUME, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48465224(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_593806D & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806D = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlayVoice(name, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48465348(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_593806E & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806E = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlayVoice_48439888(assetName, objectName, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48465488(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_593806F & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593806F = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlayVoice_48440140(assetData, objectName, volume, callbackFunc, ignorePreDelay, method);
}


void SoundManager__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundManager_c *v2; // x0
  SoundManager_o *Instance; // x0
  const MethodInfo *v4; // x1

  if ( (byte_593802F & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_593802F = 1;
  }
  v2 = SoundManager_TypeInfo;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v1);
  SoundManager__stopAll((const MethodInfo *)v2);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (SoundManager__ReleaseAllAudioAssetStorage(Instance, v4),
        (Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (Instance = (SoundManager_o *)Instance->fields.SoundCpkLoader) == 0 )
  {
    sub_21FFECC(Instance, v4);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_3FCA5F0 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
}


void SoundManager__releaseAudioAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  SoundManager_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *initializer; // x20
  const MethodInfo *v8; // x2

  if ( (byte_5938084 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5938084 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v5 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v5 )
      goto LABEL_13;
    initializer = (UnityEngine_Object_o *)v5->fields.initializer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(initializer, 0, 0) )
    {
      v5 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( v5 )
      {
        SoundManager__ReleaseAudioAssetStorage(v5, name, v8);
        return;
      }
LABEL_13:
      sub_21FFECC(v5, v6);
    }
  }
}


void SoundManager__releaseSe(System_String_o *name, const MethodInfo *method)
{
  SeManager_c *v2; // x0

  if ( (byte_593803B & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_593803B = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__ReleaseSe((System_String_o *)v2, method);
}


void SoundManager__reset(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  SeManager_c *v3; // x0

  if ( (byte_5938034 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938034 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__Reset(0);
  v3 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__Reset((const MethodInfo *)v3);
}


void SoundManager__setPitchSe(System_String_o *name, float pitch, const MethodInfo *method)
{
  if ( (byte_5938067 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938067 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__SetPitchSe(name, pitch, method);
}


void SoundManager__stopAll(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x1
  SeManager_c *v3; // x0

  if ( (byte_5938035 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938035 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__StopAll(0.0, 0);
  v3 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__StopSeAll(0.0, (const MethodInfo *)v3);
}


void SoundManager__stopBgm(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_5938046 & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_5938046 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__StopBgm(0, 0.0, 0, 0);
}


void SoundManager__stopJingle(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_593804D & 1) == 0 )
  {
    sub_21FFC50(&BgmManager_TypeInfo);
    byte_593804D = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__StopJingle(0);
}


void SoundManager__stopSe(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_5938064 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938064 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__StopSeAll(fadeoutTime, (const MethodInfo *)v4);
}


void SoundManager__stopSe_48464400(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_5938065 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938065 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__StopSe_48367476(name, fadeoutTime, method);
}


void SoundManager__stopSystemSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_5938069 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938069 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
  SeManager__StopSystemSe((const MethodInfo *)v2);
}


void SoundManager__stopVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_5938070 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938070 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  SeManager__StopSe_48440688(assetName, objectName, fadeoutTime, method);
}


void SoundManager__stopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_5938072 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    byte_5938072 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v4);
}


void SoundManager__stopVoice_48465744(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *CharaVoiceFileName; // x19
  SeManager_c *v10; // x0

  if ( (byte_5938071 & 1) == 0 )
  {
    sub_21FFC50(&SeManager_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    byte_5938071 = 1;
  }
  if ( name )
  {
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v6);
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v7);
    SeManager__StopVoice(CharaVoiceAssetName, CharaVoiceFileName, fadeoutTime, v8);
  }
  else
  {
    v10 = SeManager_TypeInfo;
    if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v10);
  }
}


void SoundManager_CpkLoader___ctor(
        SoundManager_CpkLoader_o *this,
        SoundManager_o *manager,
        System_String_o *name,
        System_Action_o *callback,
        int32_t cueType,
        const MethodInfo *method)
{
  SoundManager_CpkLoader_o *v10; // x23
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
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

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.manager = manager;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields.manager, (int32_t)manager, v11, v12, v13, v14, v15, v16);
  v10->fields.name = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)name, v17, v18, v19, v20, v21, v22);
  v10->fields.callback = callback;
  v10 = (SoundManager_CpkLoader_o *)((char *)v10 + 24);
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)v10, (int32_t)callback, v23, v24, v25, v26, v27, v28);
  LODWORD(v10->fields.name) = cueType;
}


void SoundManager_CpkLoader__EndLoadCallback(
        SoundManager_CpkLoader_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o *v4; // x0
  struct System_Collections_IEnumerator_o **p_loadCR; // x19
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  UnityEngine_MonoBehaviour_o *v13; // x0

  v4 = SoundManager_CpkLoader__SetupCpk(this, this->fields.name, method);
  this->fields.loadCR = v4;
  p_loadCR = &this->fields.loadCR;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)p_loadCR, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  v13 = (UnityEngine_MonoBehaviour_o *)*(p_loadCR - 2);
  if ( !v13 )
    sub_21FFECC(0, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452(v13, *p_loadCR, 0);
}


System_Collections_IEnumerator_o *SoundManager_CpkLoader__SetupCpk(
        SoundManager_CpkLoader_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x21
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7

  if ( (byte_593808E & 1) == 0 )
  {
    sub_21FFC50(&SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
    byte_593808E = 1;
  }
  v5 = sub_21FFEBC(SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)name, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundManager_CpkLoader__Start(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  SoundManager_CpkLoader_o *v2; // x19
  struct SoundManager_o *manager; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_593808B & 1) == 0 )
  {
    this = (SoundManager_CpkLoader_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
    byte_593808B = 1;
  }
  manager = v2->fields.manager;
  if ( !manager || (this = (SoundManager_CpkLoader_o *)manager->fields.SoundCpkLoader) == 0 )
    sub_21FFECC(this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)v2->fields.name,
    (Il2CppObject *)v2,
    (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
  SoundManager_CpkLoader__downloadAssetStorage(v2, v4);
}


void SoundManager_CpkLoader__downloadAssetStorage(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  System_String_o *name; // x20
  System_Collections_Generic_Dictionary_object__object__o *DownloadAssetNames; // x0
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *v6; // x21
  il2cpp_array_size_t entries; // x8
  System_String_o *v8; // x20
  unsigned __int64 v9; // x24
  System_String_o *v10; // x22
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  __int64 v12; // x1
  struct SoundManager_o *manager; // x8
  struct System_Action_o *callback; // x8

  if ( (byte_593808C & 1) == 0 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&Method_SoundManager_CpkLoader_EndLoadCallback__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_21FFC50(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_21FFC50(&SoundManager_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593808C = 1;
  }
  name = this->fields.name;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, method);
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)SoundManager__getDownloadAssetNames(
                                                                                    name,
                                                                                    method);
  if ( !DownloadAssetNames )
    goto LABEL_26;
  v6 = DownloadAssetNames;
  entries = (il2cpp_array_size_t)DownloadAssetNames->fields._entries;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)entries >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)entries )
        goto LABEL_25;
      v10 = (System_String_o *)*((_QWORD *)&v6->fields._count + v9);
      if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
      DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)AssetManager__isExistAssetStorage(
                                                                                        v10,
                                                                                        0);
      LODWORD(entries) = v6->fields._entries;
      if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
        break;
      if ( (__int64)++v9 >= (int)entries )
        goto LABEL_16;
    }
    if ( (unsigned int)v9 >= (unsigned int)entries )
LABEL_25:
      sub_21FFED4(DownloadAssetNames);
    v8 = (System_String_o *)*((_QWORD *)&v6->fields._count + v9);
  }
LABEL_16:
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_20;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_21FFEBC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_SoundManager_CpkLoader_EndLoadCallback__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v12);
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)AssetManager__downloadAssetStorage(
                                                                                    v8,
                                                                                    v11,
                                                                                    1,
                                                                                    0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_20:
    manager = this->fields.manager;
    if ( manager )
    {
      DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)manager->fields.SoundCpkLoader;
      if ( DownloadAssetNames )
      {
        System_Collections_Generic_Dictionary_object__object___Remove(
          DownloadAssetNames,
          (Il2CppObject *)this->fields.name,
          (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
        callback = this->fields.callback;
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return;
      }
    }
LABEL_26:
    sub_21FFECC(DownloadAssetNames, v5);
  }
}


System_String_array *SoundManager_CpkLoader__setupCpkAssetPath(
        SoundManager_CpkLoader_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x19
  AssetManager_c *v5; // x8
  AssetData_c *v6; // x0
  System_String_o *cachePathName; // x21
  int v8; // w9
  System_String_o *v9; // x0
  __int64 v10; // x1
  System_String_o *v11; // x22
  System_String_o *v12; // x0
  System_String_o *v13; // x0
  __int64 v14; // x1
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  __int64 v21; // x1
  AssetManager_c *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  System_String_o *v30; // x22
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  System_String_o *v38; // x2
  System_String_o *v39; // x3
  int32_t v40; // w4
  int32_t v41; // w5
  bool v42; // w6
  bool v43; // w7
  int32_t v44; // w1
  System_String_o *v45; // x2
  System_String_o *v46; // x3
  int32_t v47; // w4
  int32_t v48; // w5
  bool v49; // w6
  bool v50; // w7
  System_String_o *v51; // x2
  System_String_o *v52; // x3
  int32_t v53; // w4
  int32_t v54; // w5
  bool v55; // w6
  bool v56; // w7
  struct System_String_o *name; // x1
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  int32_t v64; // w1
  System_String_o *v65; // x0
  System_String_o *v66; // x0
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  _WORD v74[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_593808D & 1) == 0 )
  {
    sub_21FFC50(&AndroidUtil_TypeInfo);
    sub_21FFC50(&AssetData_TypeInfo);
    sub_21FFC50(&AssetManager_TypeInfo);
    sub_21FFC50(&string___TypeInfo);
    sub_21FFC50(&StringLiteral_1099/*".cpk.bytes"*/);
    sub_21FFC50(&StringLiteral_2584/*"Audio"*/);
    sub_21FFC50(&StringLiteral_3276/*"Bgm"*/);
    byte_593808D = 1;
  }
  v74[0] = 0;
  v4 = sub_21FFD10(string___TypeInfo, 2);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
  if ( !byte_5937657 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937657 = 1;
  }
  v5 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v3);
    v5 = AssetManager_TypeInfo;
  }
  v6 = AssetData_TypeInfo;
  cachePathName = v5->static_fields->cachePathName;
  if ( !*(&AssetData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v3);
    v6 = AssetData_TypeInfo;
  }
  v8 = *(_DWORD *)(qword_594C0B0 + 228);
  v74[0] = v6->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  if ( !v8 )
    j_il2cpp_runtime_class_init_0(qword_594C0B0, v3);
  v9 = System_Char__ToString((uint16_t)v74, 0);
  v11 = System_String__Concat_75483552(
          (System_String_o *)StringLiteral_2584/*"Audio"*/,
          v9,
          this->fields.name,
          (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
          0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v10);
  v12 = AndroidUtil__ConvertFileNameIfNeed(v11, 0);
  v13 = System_String__Concat_75438412(cachePathName, v12, 0);
  if ( !v4 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v4 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v4 + 32) = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 32), (int32_t)v13, v15, v16, v17, v18, v19, v20);
  if ( !byte_5937657 )
  {
    sub_21FFC50(&AssetManager_TypeInfo);
    byte_5937657 = 1;
  }
  v22 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v21);
    v22 = AssetManager_TypeInfo;
  }
  v23 = v22->static_fields->cachePathName;
  v13 = (System_String_o *)sub_21FFD10(string___TypeInfo, 6);
  if ( !v13 )
LABEL_31:
    sub_21FFECC(v13, v14);
  v30 = v13;
  if ( !LODWORD(v13[1].klass) )
    goto LABEL_30;
  v31 = StringLiteral_2584/*"Audio"*/;
  v13[1].monitor = (void *)StringLiteral_2584/*"Audio"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v13[1].monitor, v31, v24, v25, v26, v27, v28, v29);
  v74[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v13 = System_Char__ToString((uint16_t)v74, 0);
  if ( ((__int64)v30[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_30;
  v30[1].fields = (System_String_Fields)v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[1].fields, (int32_t)v13, v32, v33, v34, v35, v36, v37);
  if ( LODWORD(v30[1].klass) <= 2 )
    goto LABEL_30;
  v44 = StringLiteral_3276/*"Bgm"*/;
  v30[2].klass = (System_String_c *)StringLiteral_3276/*"Bgm"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[2], v44, v38, v39, v40, v41, v42, v43);
  v74[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v13 = System_Char__ToString((uint16_t)v74, 0);
  if ( ((__int64)v30[1].klass & 0xFFFFFFFC) == 0 )
    goto LABEL_30;
  v30[2].monitor = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[2].monitor, (int32_t)v13, v45, v46, v47, v48, v49, v50);
  if ( LODWORD(v30[1].klass) <= 4 )
    goto LABEL_30;
  name = this->fields.name;
  v30[2].fields = (System_String_Fields)name;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[2].fields, (int32_t)name, v51, v52, v53, v54, v55, v56);
  if ( LODWORD(v30[1].klass) <= 5
    || (v64 = StringLiteral_1099/*".cpk.bytes"*/,
        v30[3].klass = (System_String_c *)StringLiteral_1099/*".cpk.bytes"*/,
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v30[3], v64, v58, v59, v60, v61, v62, v63),
        v65 = System_String__Concat_75483816((System_String_array *)v30, 0),
        v66 = AndroidUtil__ConvertFileNameIfNeed(v65, 0),
        v13 = System_String__Concat_75438412(v23, v66, 0),
        (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_30:
    sub_21FFED4(v13);
  }
  *(_QWORD *)(v4 + 40) = v13;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v4 + 40), (int32_t)v13, v67, v68, v69, v70, v71, v72);
  return (System_String_array *)v4;
}


bool SoundManager_CpkLoader__tryGetAssetPath(
        SoundManager_CpkLoader_o *this,
        System_String_o **cpkAssetPath,
        const MethodInfo *method)
{
  System_String_array *v4; // x0
  __int64 v5; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v7; // x20
  bool v8; // w21
  unsigned __int64 v9; // x22
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  System_String_o *v16; // x1

  v4 = SoundManager_CpkLoader__setupCpkAssetPath(this, (const MethodInfo *)cpkAssetPath);
  if ( !v4 )
    sub_21FFECC(0, v5);
  max_length = v4->max_length;
  v7 = v4;
  v8 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        goto LABEL_11;
      v4 = (System_String_array *)System_IO_File__Exists(v7->m_Items[v9], 0);
      LODWORD(max_length) = v7->max_length;
      if ( ((unsigned __int8)v4 & 1) != 0 )
        break;
      v8 = (__int64)++v9 < (int)max_length;
      if ( (__int64)v9 >= (int)max_length )
        return v8;
    }
    if ( (unsigned int)v9 >= (unsigned int)max_length )
LABEL_11:
      sub_21FFED4(v4);
    v16 = v7->m_Items[v9];
    *cpkAssetPath = v16;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)cpkAssetPath, (int32_t)v16, v10, v11, v12, v13, v14, v15);
  }
  return v8;
}


void SoundManager_CpkLoader__SetupCpk_d__11___ctor(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundManager_CpkLoader__SetupCpk_d__11__MoveNext(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  SoundManager_CpkLoader__SetupCpk_d__11_o *v8; // x19
  int32_t _1__state; // w8
  struct SoundManager_CpkLoader_o *_4__this; // x20
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  CriFsBinder_o *v13; // x21
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  CriFsBindRequest_o *v20; // x0
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  UnityEngine_YieldInstruction_o *v27; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v29; // x2
  System_String_o *v30; // x3
  int32_t v31; // w4
  int32_t v32; // w5
  bool v33; // w6
  bool v34; // w7
  bool result; // w0
  struct SoundManager_o *manager; // x8
  const MethodInfo *v37; // x2
  struct CriFsBindRequest_o *bind_request_5__4; // x8
  struct SoundManager_o *v39; // x8
  struct SoundManager_o *v40; // x8
  CriFsBinder_o *binder_5__3; // x21
  System_String_o *v42; // x21
  System_String_o *v43; // x22
  System_String_o *v44; // x0
  CriFsBinder_o *v45; // x3
  System_String_o *v46; // x2
  System_String_o *v47; // x0
  System_String_o *v48; // x1
  struct System_Action_o *callback; // x8
  System_String_o *name; // x21

  v8 = this;
  if ( (byte_593808F & 1) == 0 )
  {
    sub_21FFC50(&CriFsBinder_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
    sub_21FFC50(&StringLiteral_1091/*".awb"*/);
    sub_21FFC50(&StringLiteral_3289/*"BindError:"*/);
    sub_21FFC50(&StringLiteral_1074/*". cpkAssetPath="*/);
    sub_21FFC50(&StringLiteral_1088/*".acb"*/);
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_593808F = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_33;
    manager = _4__this->fields.manager;
    if ( !manager )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)manager->fields.SoundCpkLoader;
    if ( !this )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                         (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                         (Il2CppObject *)v8->fields.name,
                                                         (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    bind_request_5__4 = v8->fields._bind_request_5__4;
    if ( !bind_request_5__4 )
      goto LABEL_33;
    method = (const MethodInfo *)bind_request_5__4->fields._error_k__BackingField;
    if ( method )
    {
      System_String__Concat_75483552(
        (System_String_o *)StringLiteral_3289/*"BindError:"*/,
        (System_String_o *)method,
        (System_String_o *)StringLiteral_1074/*". cpkAssetPath="*/,
        v8->fields._cpkAssetPath_5__2,
        0);
    }
    else
    {
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)_4__this->fields.manager;
      if ( !this )
        goto LABEL_33;
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)SoundManager__ExistsAssetNameCounter(
                                                           (SoundManager_o *)this,
                                                           v8->fields.name,
                                                           v37);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v40 = _4__this->fields.manager;
        if ( !v40 )
          goto LABEL_33;
        this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v40->fields.SoundBinders;
        if ( !this )
          goto LABEL_33;
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v8->fields.name,
          (Il2CppObject *)v8->fields._binder_5__3,
          (const MethodInfo_3FCA454 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
        if ( _4__this->fields.cueType != 1 )
          goto LABEL_31;
        binder_5__3 = v8->fields._binder_5__3;
        this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)System_String__Concat_75438412(
                                                             v8->fields.name,
                                                             (System_String_o *)StringLiteral_1091/*".awb"*/,
                                                             0);
        if ( !binder_5__3 )
          goto LABEL_33;
        if ( CriFsBinder__GetFileSize(binder_5__3, (System_String_o *)this, 0) < 0 )
        {
LABEL_31:
          name = v8->fields.name;
          v48 = System_String__Concat_75438412(name, (System_String_o *)StringLiteral_1088/*".acb"*/, 0);
          v47 = name;
          v45 = v8->fields._binder_5__3;
          v46 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          v42 = v8->fields.name;
          v43 = System_String__Concat_75438412(v42, (System_String_o *)StringLiteral_1088/*".acb"*/, 0);
          v44 = System_String__Concat_75438412(v8->fields.name, (System_String_o *)StringLiteral_1091/*".awb"*/, 0);
          v45 = v8->fields._binder_5__3;
          v46 = v44;
          v47 = v42;
          v48 = v43;
        }
        CriAtom__AddCueSheet(v47, v48, v46, v45, 0);
        goto LABEL_28;
      }
    }
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v8->fields._binder_5__3;
    if ( !this )
      goto LABEL_33;
    ((void (__fastcall *)(SoundManager_CpkLoader__SetupCpk_d__11_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
      this,
      this->klass->vtable._5_System_IDisposable_Dispose.method);
LABEL_28:
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
    return 0;
  }
  if ( !_1__state )
  {
    v11 = (int)StringLiteral_1/*""*/;
    v8->fields._cpkAssetPath_5__2 = (struct System_String_o *)StringLiteral_1/*""*/;
    v8->fields.__1__state = -1;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v8->fields._cpkAssetPath_5__2, v11, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)SoundManager_CpkLoader__tryGetAssetPath(
                                                         _4__this,
                                                         &v8->fields._cpkAssetPath_5__2,
                                                         v12);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = (CriFsBinder_o *)sub_21FFEBC(CriFsBinder_TypeInfo);
      CriFsBinder___ctor(v13, 0);
      v8->fields._binder_5__3 = v13;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._binder_5__3,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      v20 = CriFsUtility__BindCpk(v8->fields._binder_5__3, v8->fields._cpkAssetPath_5__2, 0);
      v8->fields._bind_request_5__4 = v20;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v8->fields._bind_request_5__4,
        (int32_t)v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26);
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v8->fields._bind_request_5__4;
      if ( this )
      {
        v27 = CriFsRequest__WaitForDone(
                (CriFsRequest_o *)this,
                (UnityEngine_MonoBehaviour_o *)_4__this->fields.manager,
                0);
        v8->fields.__2__current = (Il2CppObject *)v27;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
        sub_21FFBF4(p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
        result = 1;
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return result;
      }
LABEL_33:
      sub_21FFECC(this, method);
    }
    v39 = _4__this->fields.manager;
    if ( !v39 )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v39->fields.SoundCpkLoader;
    if ( !this )
      goto LABEL_33;
    System_Collections_Generic_Dictionary_object__object___Remove(
      (System_Collections_Generic_Dictionary_object__object__o *)this,
      (Il2CppObject *)v8->fields.name,
      (const MethodInfo_3FCB984 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    goto LABEL_28;
  }
  return 0;
}


Il2CppObject *SoundManager_CpkLoader__SetupCpk_d__11__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundManager_CpkLoader__SetupCpk_d__11__System_Collections_IEnumerator_Reset(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_SoundManager_CpkLoader__SetupCpk_d__11_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *SoundManager_CpkLoader__SetupCpk_d__11__System_Collections_IEnumerator_get_Current(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundManager_CpkLoader__SetupCpk_d__11__System_IDisposable_Dispose(
        SoundManager_CpkLoader__SetupCpk_d__11_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundManager___c__DisplayClass105_0___ctor(SoundManager___c__DisplayClass105_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass105_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass105_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_21FFECC(this, d);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void SoundManager___c__DisplayClass107_0___ctor(SoundManager___c__DisplayClass107_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass107_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass107_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_21FFECC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}