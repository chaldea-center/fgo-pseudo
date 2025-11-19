void SoundManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  struct SoundManager_StaticFields *static_fields; // x0
  int32_t v4; // w1

  if ( (byte_4CB5CD3 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11375/*"ResourceSound"*/);
    byte_4CB5CD3 = 1;
  }
  static_fields = SoundManager_TypeInfo->static_fields;
  static_fields->DEFAULT_VOLUME = 1.0;
  v4 = StringLiteral_11375/*"ResourceSound"*/;
  static_fields->RESIDENT_RESOURCE_SOUND_NAME = (struct System_String_o *)StringLiteral_11375/*"ResourceSound"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->RESIDENT_RESOURCE_SOUND_NAME, v4, v1, v2);
}


void SoundManager___ctor(SoundManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  OverwriteAssetSoundName_o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3

  if ( (byte_4CB5CD2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C6BA08(&OverwriteAssetSoundName_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager___ctor__);
    byte_4CB5CD2 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34B2258 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.assetNameCounter, (int32_t)v3, v4, v5);
  this->fields.isBusy = 1;
  v6 = (OverwriteAssetSoundName_o *)sub_1C6BC54(OverwriteAssetSoundName_TypeInfo);
  OverwriteAssetSoundName___ctor(v6, 0);
  this->fields.overwriteAssetSoundName = v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.overwriteAssetSoundName, (int32_t)v6, v7, v8);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A4F89C *)Method_SingletonMonoBehaviour_SoundManager___ctor__);
}


void SoundManager__AddAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SoundManager_o *v4; // x21
  System_Collections_Generic_Dictionary_object__int__o *assetNameCounter; // x20
  int32_t v6; // w2

  v4 = this;
  if ( (byte_4CB5CC4 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SoundManager_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CB5CC4 = 1;
  }
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter,
          (Il2CppObject *)name,
          (const MethodInfo_34B2E00 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v6 = 1;
    goto LABEL_8;
  }
  this = (SoundManager_o *)v4->fields.assetNameCounter;
  if ( !this )
LABEL_9:
    sub_1C6BC60(this, name);
  v6 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)this,
         (Il2CppObject *)name,
         (const MethodInfo_34B2B8C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
LABEL_8:
  System_Collections_Generic_Dictionary_object__int___set_Item(
    assetNameCounter,
    (Il2CppObject *)name,
    v6,
    (const MethodInfo_34B2BF8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  __int64 v12; // x19
  const MethodInfo *v13; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v15; // x22
  System_String_o *v16; // x21
  unsigned __int64 v17; // x25
  System_String_o *v18; // x23
  AssetLoader_LoadEndDataHandler_o *v19; // x22

  if ( (byte_4CB5CCA & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_SoundManager___c__DisplayClass104_0__DownloadAudioAssetStorage_b__0__);
    sub_1C6BA08(&SoundManager___c__DisplayClass104_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5CCA = 1;
  }
  v7 = sub_1C6BC54(SoundManager___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = callback;
  v12 = v7 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  DownloadAssetNames = SoundManager__getDownloadAssetNames(name, v13);
  if ( !DownloadAssetNames )
    goto LABEL_24;
  max_length = DownloadAssetNames->max_length;
  v15 = DownloadAssetNames;
  v16 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      if ( v17 >= (unsigned int)max_length )
        goto LABEL_23;
      v18 = v15->m_Items[v17];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v18, 0);
      if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
        break;
      LODWORD(max_length) = v15->max_length;
      if ( (__int64)++v17 >= (int)max_length )
        goto LABEL_17;
    }
    if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
LABEL_23:
      sub_1C6BC68(DownloadAssetNames);
    v16 = v15->m_Items[v17];
  }
LABEL_17:
  DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(v16, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_27;
  v19 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v19,
    (Il2CppObject *)v7,
    Method_SoundManager___c__DisplayClass104_0__DownloadAudioAssetStorage_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage(v16, v19, 1, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_27:
    if ( *(_QWORD *)v12 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v12 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v12 + 64LL),
        *(_QWORD *)(*(_QWORD *)v12 + 40LL));
      return;
    }
LABEL_24:
    sub_1C6BC60(DownloadAssetNames, v9);
  }
}


void SoundManager__DownloadAudioAssetStorage_41755776(
        SoundManager_o *this,
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  __int64 v7; // x23
  System_String_array *DownloadAssetNames; // x0
  const MethodInfo *v9; // x1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v14; // x27
  System_String_o *v15; // x23
  System_String_array *v16; // x24
  il2cpp_array_size_t v17; // x8
  System_String_o *Empty; // x23
  unsigned __int64 v19; // x21
  System_String_o *v20; // x25
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct System_Object_array *items; // x8
  _QWORD *v24; // x9
  __int64 size; // x10
  Il2CppClass **v26; // x0
  System_String_array *v27; // x19
  System_Action_o *v28; // x22
  Il2CppObject *object; // [xsp+0h] [xbp-70h]
  __int64 v30; // [xsp+8h] [xbp-68h]

  if ( (byte_4CB5CCC & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    sub_1C6BA08(&Method_SoundManager___c__DisplayClass106_0__DownloadAudioAssetStorage_b__0__);
    sub_1C6BA08(&SoundManager___c__DisplayClass106_0_TypeInfo);
    byte_4CB5CCC = 1;
  }
  v7 = sub_1C6BC54(SoundManager___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  object = (Il2CppObject *)v7;
  *(_QWORD *)(v7 + 16) = callback;
  v30 = v7 + 16;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v7 + 16), (int32_t)callback, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !nameList )
    goto LABEL_36;
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v14 = 0;
    while ( v14 < (unsigned int)max_length )
    {
      v15 = nameList->m_Items[v14];
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      DownloadAssetNames = SoundManager__getDownloadAssetNames(v15, v9);
      if ( !DownloadAssetNames )
        goto LABEL_36;
      v16 = DownloadAssetNames;
      v17 = DownloadAssetNames->max_length;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( (int)v17 >= 1 )
      {
        v19 = 0;
        while ( 1 )
        {
          if ( v19 >= (unsigned int)v17 )
            goto LABEL_35;
          v20 = v16->m_Items[v19];
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v20, 0);
          if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
            break;
          LODWORD(v17) = v16->max_length;
          if ( (__int64)++v19 >= (int)v17 )
            goto LABEL_21;
        }
        if ( (unsigned int)v19 >= LODWORD(v16->max_length) )
          break;
        Empty = v16->m_Items[v19];
      }
LABEL_21:
      DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(Empty, 0);
      if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
      {
        if ( !v12 )
          goto LABEL_36;
        items = v12->fields._items;
        v24 = Method_System_Collections_Generic_List_string__Add__;
        ++v12->fields._version;
        if ( !items )
          goto LABEL_36;
        size = v12->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v12,
            (Il2CppObject *)Empty,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
        }
        else
        {
          v26 = &items->obj.klass + size;
          v12->fields._size = size + 1;
          v26[4] = (Il2CppClass *)Empty;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v26 + 4), (int32_t)Empty, v21, v22);
        }
      }
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v14 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_35:
    sub_1C6BC68(DownloadAssetNames);
  }
LABEL_28:
  if ( !v12 )
    goto LABEL_36;
  if ( v12->fields._size < 1 )
    goto LABEL_39;
  v27 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v12,
                                 (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_string__ToArray__);
  v28 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v28, object, Method_SoundManager___c__DisplayClass106_0__DownloadAudioAssetStorage_b__0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage_40770164(v27, v28, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_39:
    if ( *(_QWORD *)v30 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v30 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v30 + 64LL),
        *(_QWORD *)(*(_QWORD *)v30 + 40LL));
      return;
    }
LABEL_36:
    sub_1C6BC60(DownloadAssetNames, v9);
  }
}


bool SoundManager__ExistsAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_4CB5CC6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4CB5CC6 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_34B2E00 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    assetNameCounter = this->fields.assetNameCounter;
    if ( assetNameCounter )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
               (Il2CppObject *)name,
               (const MethodInfo_34B2B8C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) > 0;
LABEL_8:
    sub_1C6BC60(assetNameCounter, name);
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
  CriAtomEx_CueInfo_array *CueInfoList; // x0
  il2cpp_array_size_t max_length; // x8
  CriAtomEx_CueInfo_array *v9; // x21
  unsigned __int64 v10; // x24
  struct System_String_o **i; // x22
  System_String_o *v12; // x23
  __int64 v13; // x25
  _BYTE dest[136]; // [xsp+8h] [xbp-C8h] BYREF

  CueInfoList = SoundManager__GetCueInfoList(this, cueSheetName, (const MethodInfo *)cueName);
  if ( !CueInfoList )
    return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  max_length = CueInfoList->max_length;
  v9 = CueInfoList;
  if ( (int)max_length < 1 )
    return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  v10 = 0;
  for ( i = &CueInfoList->m_Items[0].fields.userData; ; i += 19 )
  {
    if ( v10 >= (unsigned int)max_length )
      sub_1C6BC68(CueInfoList);
    v13 = (__int64)*(i - 2);
    v12 = *(i - 1);
    memcpy(dest, i, sizeof(dest));
    CueInfoList = (CriAtomEx_CueInfo_array *)System_String__op_Equality(v12, cueName, 0);
    if ( ((unsigned __int8)CueInfoList & 1) != 0 )
      break;
    LODWORD(max_length) = v9->max_length;
    if ( (__int64)++v10 >= (int)max_length )
      return (CriAtomEx_CueInfo_o *)memset(retstr, 0, sizeof(CriAtomEx_CueInfo_o));
  }
  *(_QWORD *)&retstr->fields.id = v13;
  retstr->fields.name = v12;
  return (CriAtomEx_CueInfo_o *)memcpy(&retstr->fields.userData, dest, 0x88u);
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
    sub_1C6BC60(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C6BC68(this);
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
  __int64 v10; // x20
  SoundManager_o *v12; // x19
  __int64 v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v17; // x21
  SoundManager_c **p_initializer; // x22
  SoundManager_c *v19; // t1
  SoundManager_o *p_monitor; // x23

  v4 = this;
  if ( (byte_4CB5C77 & 1) == 0 )
  {
    this = (SoundManager_o *)sub_1C6BA08(&string___TypeInfo);
    byte_4CB5C77 = 1;
  }
  criware = v4->fields.criware;
  if ( !criware )
    goto LABEL_22;
  cueSheets = criware->fields.cueSheets;
  if ( !cueSheets )
    goto LABEL_22;
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    if ( v8 >= max_length )
      goto LABEL_23;
    v9 = cueSheets->m_Items[v8];
    if ( !v9 )
      goto LABEL_22;
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
LABEL_22:
    sub_1C6BC60(this, cueSheetName);
  v12 = this;
  v13 = sub_1C6BAB0(string___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  v10 = v13;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v17 = 0;
    p_initializer = (SoundManager_c **)&v12->fields.initializer;
    this = (SoundManager_o *)(v13 + 32);
    while ( v17 < (unsigned int)m_CancellationTokenSource )
    {
      if ( !v10 )
        goto LABEL_22;
      if ( v17 >= *(unsigned int *)(v10 + 24) )
        break;
      v19 = *p_initializer;
      p_initializer += 19;
      ++v17;
      this->klass = v19;
      p_monitor = (SoundManager_o *)&this->monitor;
      sub_1C6B9AC((CGThumbnailListItem_o *)this, (int32_t)v19, v14, v15);
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      this = p_monitor;
      if ( (__int64)v17 >= (int)m_CancellationTokenSource )
        return (System_String_array *)v10;
    }
LABEL_23:
    sub_1C6BC68(this);
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
    sub_1C6BC60(this, cueName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C6BC68(this);
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
  SeManager_c *v1; // x0

  if ( (byte_4CB5C7D & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C7D = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__InitializePreDelaySetting((const MethodInfo *)v1);
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
    sub_1C6BC60(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1C6BC68(this);
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
  unsigned int v16; // w24
  CriAtomCueSheet_o *v17; // x8
  CGThumbnailListItem_o *v18; // x20
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Action_c *v22; // x1
  SoundManager_CpkLoader_o *v23; // x23
  const MethodInfo *v24; // x5

  if ( (byte_4CB5CC8 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&SoundManager_CpkLoader_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    byte_4CB5CC8 = 1;
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
                   (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
            {
              if ( !callback )
                return;
              SoundCpkLoader = this->fields.SoundCpkLoader;
              if ( SoundCpkLoader )
              {
                SoundCpkLoader = System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
                                   (Il2CppObject *)name,
                                   (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
                if ( SoundCpkLoader )
                {
                  v18 = (CGThumbnailListItem_o *)((char *)SoundCpkLoader + 24);
                  v19 = System_Delegate__Combine(
                          *((System_Delegate_o **)SoundCpkLoader + 3),
                          (System_Delegate_o *)callback,
                          0);
                  if ( v19 )
                  {
                    v22 = System_Action_TypeInfo;
                    if ( (System_Action_c *)v19->klass != System_Action_TypeInfo
                      || (v18->klass = (CGThumbnailListItem_c *)v19, (System_Action_c *)v19->klass != v22) )
                    {
                      sub_1C6BFFC(v19);
                      return;
                    }
                  }
                  else
                  {
                    v18->klass = 0;
                  }
                  sub_1C6B9AC(v18, (int32_t)v19, v20, v21);
                  return;
                }
              }
            }
            else
            {
              v23 = (SoundManager_CpkLoader_o *)sub_1C6BC54(SoundManager_CpkLoader_TypeInfo);
              SoundManager_CpkLoader___ctor(v23, this, name, callback, tp, v24);
              if ( v23 )
              {
                SoundManager_CpkLoader__Start(v23, v12);
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
            if ( v16 >= max_length )
              sub_1C6BC68(SoundCpkLoader);
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
    sub_1C6BC60(SoundCpkLoader, v12);
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
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o v10; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_4CB5C80 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    byte_4CB5C80 = 1;
  }
  memset(&v10, 0, sizeof(v10));
  SoundBinders = this->fields.SoundBinders;
  if ( SoundBinders )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)SoundBinders,
             (const MethodInfo_34BB61C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    if ( !Keys )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v10,
      Keys,
      (const MethodInfo_3725F74 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_35B9B98 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__) )
    {
      v7 = this->fields.SoundBinders;
      if ( !v7 )
        sub_1C6BC60(0, v6);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v10.fields._currentKey,
               (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
      if ( !Item )
        sub_1C6BC60(0, v9);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[5].methodPtr)(
        Item,
        Item->klass->vtable[5].method);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_35B9B94 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this->fields.SoundBinders;
    if ( !Keys )
LABEL_15:
      sub_1C6BC60(Keys, v5);
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Keys,
      (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
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

  if ( (byte_4CB5C8A & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&Method_System_Nullable_float___ctor__);
    sub_1C6BA08(&SubBgmPlayArgs_TypeInfo);
    byte_4CB5C8A = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  p_DEFAULT_VOLUME = &v5->static_fields->DEFAULT_VOLUME;
  p_volume = (System_Nullable_float__o)&volume;
  v8 = *p_DEFAULT_VOLUME;
  volume = 0;
  System_Nullable_float____ctor(p_volume, v8, (const MethodInfo_392B698 *)Method_System_Nullable_float___ctor__);
  v9 = (SubBgmPlayArgs_o *)sub_1C6BC54(SubBgmPlayArgs_TypeInfo);
  v10 = volume;
  v11 = v9;
  SubBgmPlayArgs___ctor(v9, name, v10, fadeTime, 0, 0);
  BgmManager__PlaySubBgm(v11, 0);
}


void SoundManager__RebootAssetNameCounter(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_4CB5CC3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4CB5CC3 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    sub_1C6BC60(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (const MethodInfo_34B2D94 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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
  System_Collections_Generic_List_Enumerator_object__o i; // [xsp+20h] [xbp-60h] BYREF

  if ( (byte_4CB5CCF & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor___78530416);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CB5CCF = 1;
  }
  memset(&i, 0, sizeof(i));
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter
    || (Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
                 (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                 (const MethodInfo_34B28EC *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__),
        v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo),
        System_Collections_Generic_List_object____ctor_58720872(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_3800268 *)Method_System_Collections_Generic_List_string___ctor___78530416),
        !v5) )
  {
    sub_1C6BC60(assetNameCounter, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v7,
          i.fields._current,
          1,
          (const MethodInfo_34B2BF8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__) )
  {
    v7 = this->fields.assetNameCounter;
    if ( !v7 )
      sub_1C6BC60(0, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        SoundManager__ReleaseAudioAssetStorage(this, (System_String_o *)i.fields._current, v8) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void SoundManager__ReleaseAudioAssetStorage(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *SoundBinders; // x0

  if ( (byte_4CB5CCE & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    byte_4CB5CCE = 1;
  }
  if ( SoundManager__SubAssetNameCounter(this, name, method) )
  {
    SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
    if ( !SoundBinders )
      goto LABEL_11;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           SoundBinders,
           (Il2CppObject *)name,
           (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
    {
      CriAtom__RemoveCueSheet(name, 0);
      SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
      if ( SoundBinders )
      {
        SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                    SoundBinders,
                                                                                    (Il2CppObject *)name,
                                                                                    (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
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
              (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
            return;
          }
        }
      }
LABEL_11:
      sub_1C6BC60(SoundBinders, v5);
    }
  }
}


void SoundManager__SetBgmMasterVolume(float volume, const MethodInfo *method)
{
  if ( (byte_4CB5C81 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C81 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMasterVolume(volume, 0);
}


void SoundManager__SetSeMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CB5C82 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C82 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__SetMasterVolume(volume, (const MethodInfo *)v3);
}


void SoundManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CB5C83 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C83 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__SetVoiceMasterVolume(volume, (const MethodInfo *)v3);
}


void SoundManager__Setup(SoundManager_o *this, const MethodInfo *method)
{
  char *gameObject; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x0
  struct CriAtom_o **p_criware; // x19
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_Dictionary_object__object__o *v9; // x22
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_Dictionary_object__object__o *v12; // x22
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_Object_o *v15; // x21
  Il2CppObject *v16; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  SoundManager_c *v22; // x0
  System_String_o *RESIDENT_RESOURCE_SOUND_NAME; // x20
  System_String_o *v24; // x21
  System_String_o *v25; // x0

  if ( (byte_4CB5C7B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_GameObject_AddComponent_CriAtom___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_CriAtom___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1006/*".acb.bytes"*/);
    sub_1C6BA08(&StringLiteral_6396/*"FGO.acf"*/);
    sub_1C6BA08(&StringLiteral_1010/*".awb.bytes"*/);
    byte_4CB5C7B = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_CriAtom___);
  this->fields.criware = (struct CriAtom_o *)Component_object;
  p_criware = &this->fields.criware;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.criware, (int32_t)Component_object, v7, v8);
  if ( !this->fields.SoundBinders )
  {
    v9 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v9,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    this->fields.SoundCpkLoader = (struct System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__o *)v9;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.SoundCpkLoader, (int32_t)v9, v10, v11);
    v12 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v12,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    this->fields.SoundBinders = (struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *)v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.SoundBinders, (int32_t)v12, v13, v14);
  }
  v15 = (UnityEngine_Object_o *)*p_criware;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v15, 0, 0) )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v16 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)gameObject,
              (const MethodInfo_3193044 *)Method_UnityEngine_GameObject_AddComponent_CriAtom___);
      *p_criware = (struct CriAtom_o *)v16;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.criware, (int32_t)v16, v17, v18);
      gameObject = (char *)*p_criware;
      if ( *p_criware )
      {
        v21 = StringLiteral_6396/*"FGO.acf"*/;
        *((_QWORD *)gameObject + 6) = StringLiteral_6396/*"FGO.acf"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(gameObject + 48), v21, v19, v20);
        v22 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v22 = SoundManager_TypeInfo;
        }
        RESIDENT_RESOURCE_SOUND_NAME = v22->static_fields->RESIDENT_RESOURCE_SOUND_NAME;
        v24 = System_String__Concat_63966792(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1006/*".acb.bytes"*/, 0);
        v25 = System_String__Concat_63966792(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1010/*".awb.bytes"*/, 0);
        gameObject = (char *)CriAtom__AddCueSheet(RESIDENT_RESOURCE_SOUND_NAME, v24, v25, 0, 0);
        if ( *p_criware )
        {
          (*p_criware)->fields.dontDestroyOnLoad = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_1C6BC60(gameObject, v4);
  }
}


bool SoundManager__SubAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x21
  int32_t Item; // w0

  if ( (byte_4CB5CC5 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CB5CC5 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                                                                                      (Il2CppObject *)name,
                                                                                      (const MethodInfo_34B2E00 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)assetNameCounter & 1) == 0 )
    return 0;
  v6 = this->fields.assetNameCounter;
  if ( !v6 )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter,
           (Il2CppObject *)name,
           (const MethodInfo_34B2B8C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)name,
    Item - 1,
    (const MethodInfo_34B2BF8 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_34B2B8C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
  {
    return 0;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
LABEL_11:
    sub_1C6BC60(assetNameCounter, name);
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (Il2CppObject *)name,
    (const MethodInfo_34B40B8 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
  return 1;
}


void SoundManager__changeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  if ( (byte_4CB5CAF & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAF = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__ChangeVolumeSe(name, volume, fadeTime, method);
}


void SoundManager__changeVolumeVoice(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x2
  System_String_o *CharaVoiceFileName; // x19

  if ( (byte_4CB5CBC & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5CBC = 1;
  }
  if ( name )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v8);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__ChangeVolumeVoice(CharaVoiceAssetName, CharaVoiceFileName, volume, fadeTime, v9);
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
  if ( (byte_4CB5CD0 & 1) == 0 )
  {
    path = (System_String_o *)sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5CD0 = 1;
  }
  if ( isCheck )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 = System_String__Replace(v6, 0x2Fu, 0x5Fu, 0);
  }
  path = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !path )
LABEL_8:
    sub_1C6BC60(path, name);
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

  if ( (byte_4CB5CC9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5CC9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v7);
  SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, name, callback, v8, v9);
}


void SoundManager__downloadAudioAssetStorage_41755676(
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w3
  const MethodInfo *v9; // x4

  if ( (byte_4CB5CCB & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5CCB = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v7);
  SoundManager__DownloadAudioAssetStorage_41755776((SoundManager_o *)Instance, nameList, callback, v8, v9);
}


void SoundManager__fadeoutBgm(float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CB5C8D & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C8D = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutBgm(fadeoutTime, 0, 0);
}


void SoundManager__fadeoutBgm_41746980(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  if ( (byte_4CB5C8E & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C8E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutBgm(fadeoutTime, callback, 0);
}


void SoundManager__fadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CB5C97 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C97 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutJingle(fadeoutTime, 0);
}


System_String_o *SoundManager__getAssetName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = name;
  if ( (byte_4CB5CBE & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_16986/*"ba"*/);
    name = (System_String_o *)sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    byte_4CB5CBE = 1;
  }
  if ( !v2 )
    sub_1C6BC60(name, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_16986/*"ba"*/, 0) )
    return (System_String_o *)StringLiteral_3076/*"Battle"*/;
  else
    return 0;
}


System_String_o *SoundManager__getBgmName(const MethodInfo *method)
{
  if ( (byte_4CB5C90 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C90 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return BgmManager__GetBgmName(0);
}


System_String_o *SoundManager__getCharaVoiceAssetName(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x0
  __int64 v4; // x1
  System_String_array *v5; // x21
  int max_length; // w8
  System_String_o *v7; // x1
  System_String_o *v8; // x0
  System_String_o *v9; // x20
  System_String_o *v10; // x19
  System_String_o *v11; // x20
  __int64 *v12; // x8

  if ( (byte_4CB5CBF & 1) == 0 )
  {
    sub_1C6BA08(&char___TypeInfo);
    sub_1C6BA08(&StringLiteral_9515/*"NoblePhantasm_"*/);
    sub_1C6BA08(&StringLiteral_2515/*"B06"*/);
    sub_1C6BA08(&StringLiteral_9349/*"NP_"*/);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    sub_1C6BA08(&StringLiteral_12765/*"Servants_"*/);
    sub_1C6BA08(&StringLiteral_2509/*"B05"*/);
    sub_1C6BA08(&StringLiteral_2649/*"B81"*/);
    sub_1C6BA08(&StringLiteral_2502/*"B"*/);
    sub_1C6BA08(&StringLiteral_2647/*"B80"*/);
    sub_1C6BA08(&StringLiteral_2521/*"B07"*/);
    sub_1C6BA08(&StringLiteral_2651/*"B82"*/);
    byte_4CB5CBF = 1;
  }
  v3 = sub_1C6BAB0(char___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_26;
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C6BC68(v3);
  *(_WORD *)(v3 + 32) = 95;
  if ( !name )
    goto LABEL_26;
  v5 = System_String__Split_64016000(name, (System_Char_array *)v3, 1, 0);
  v3 = System_String__StartsWith(name, (System_String_o *)StringLiteral_9349/*"NP_"*/, 0);
  if ( !v5 )
    goto LABEL_26;
  max_length = v5->max_length;
  if ( (v3 & 1) == 0 )
  {
    if ( max_length < 3 )
      return 0;
    v9 = v5->m_Items[2];
    if ( v9 )
    {
      v10 = v5->m_Items[0];
      if ( System_String__StartsWith(v5->m_Items[2], (System_String_o *)StringLiteral_2502/*"B"*/, 0) )
      {
        if ( v9->fields._stringLength == 4
          && ((v11 = System_String__Substring_64012732(v9, 0, 3, 0),
               System_String__op_Equality(v11, (System_String_o *)StringLiteral_2509/*"B05"*/, 0))
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2515/*"B06"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2521/*"B07"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2647/*"B80"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2649/*"B81"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2651/*"B82"*/, 0)) )
        {
          v12 = &StringLiteral_9515/*"NoblePhantasm_"*/;
        }
        else
        {
          v12 = &StringLiteral_12765/*"Servants_"*/;
        }
      }
      else
      {
        v12 = &StringLiteral_4414/*"ChrVoice_"*/;
      }
      v8 = (System_String_o *)*v12;
      v7 = v10;
      return System_String__Concat_63966792(v8, v7, 0);
    }
LABEL_26:
    sub_1C6BC60(v3, v4);
  }
  if ( max_length < 3 )
    return 0;
  v7 = v5->m_Items[1];
  v8 = (System_String_o *)StringLiteral_9515/*"NoblePhantasm_"*/;
  return System_String__Concat_63966792(v8, v7, 0);
}


System_String_o *SoundManager__getCharaVoiceFileName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w0

  v2 = name;
  if ( (byte_4CB5CC0 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_9349/*"NP_"*/);
    name = (System_String_o *)sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    byte_4CB5CC0 = 1;
  }
  if ( !v2 )
    sub_1C6BC60(name, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_9349/*"NP_"*/, 0) )
  {
    v3 = System_String__IndexOf_64025184(v2, (System_String_o *)StringLiteral_16102/*"_"*/, 0);
    if ( (v3 & 0x80000000) == 0 )
      return System_String__Substring(v2, v3 + 1, 0);
    return 0;
  }
  return v2;
}


System_String_o *SoundManager__getCpkPath(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4CB5CD1 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5CD1 = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4CB5248 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5248 = 1;
  }
  v1 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v1 = AssetManager_TypeInfo;
  }
  return v1->static_fields->cachePathName;
}


System_String_array *SoundManager__getDownloadAssetNames(System_String_o *cueName, const MethodInfo *method)
{
  __int64 v3; // x20
  System_String_o *v4; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB5CBD & 1) == 0 )
  {
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1017/*".cpk.bytes"*/);
    sub_1C6BA08(&StringLiteral_2469/*"Audio/Bgm/"*/);
    sub_1C6BA08(&StringLiteral_2467/*"Audio/"*/);
    byte_4CB5CBD = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 2);
  v4 = System_String__Concat_64005056(
         (System_String_o *)StringLiteral_2467/*"Audio/"*/,
         cueName,
         (System_String_o *)StringLiteral_1017/*".cpk.bytes"*/,
         0);
  if ( !v3 )
    sub_1C6BC60(v4, v5);
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v4, v6, v7),
        v4 = System_String__Concat_64005056(
               (System_String_o *)StringLiteral_2469/*"Audio/Bgm/"*/,
               cueName,
               (System_String_o *)StringLiteral_1017/*".cpk.bytes"*/,
               0),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
    sub_1C6BC68(v4);
  }
  *(_QWORD *)(v3 + 40) = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v4, v8, v9);
  return (System_String_array *)v3;
}


float SoundManager__getPitchSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5CB1 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB1 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
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
  SeManager_c *v3; // x0

  if ( (byte_4CB5C78 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C78 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  if ( BgmManager__get_IsBusy(0) )
    return 1;
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v3 = SeManager_TypeInfo;
  }
  return v3->static_fields->IsBusy;
}


OverwriteAssetSoundName_o *SoundManager__get_OverwriteAssetSoundName(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v2; // x1

  if ( (byte_4CB5C76 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5C76 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v2);
  return (OverwriteAssetSoundName_o *)Instance[5].klass;
}


void SoundManager__initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  SeManager_c *v3; // x0

  if ( (byte_4CB5C7A & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_5376/*"DspBusSetting_0"*/);
    byte_4CB5C7A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v2);
  SoundManager__Setup((SoundManager_o *)Instance, v2);
  CriAtom__AttachDspBusSetting((System_String_o *)StringLiteral_5376/*"DspBusSetting_0"*/, 0);
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__Initialize(0);
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__Initialize((const MethodInfo *)v3);
}


void SoundManager__initializeAssetStorage(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CB5C7C & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C7C = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__InitializeAssetStorage((const MethodInfo *)v1);
}


bool SoundManager__isBusySe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5C99 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C99 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__IsBusySe(name, method);
}


bool SoundManager__isBusyVoice(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v5; // x1
  System_String_o *CharaVoiceFileName; // x19
  System_String_o *v7; // x0
  System_String_o *v8; // x1

  if ( (byte_4CB5C9A & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5C9A = 1;
  }
  if ( name )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v5);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = CharaVoiceAssetName;
    v8 = CharaVoiceFileName;
  }
  else
  {
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = 0;
    v8 = 0;
  }
  return SeManager__IsBusyVoice(v7, v8, v2);
}


bool SoundManager__isLoadingBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5C87 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C87 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return BgmManager__isLoading(name, 0);
}


bool SoundManager__isPlayBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5C86 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C86 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return BgmManager__IsPlayBgm(name, 0);
}


bool SoundManager__isPlayJingle(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5C91 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C91 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
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

  if ( (byte_4CB5CC7 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5CC7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C6BC60(0, v8);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, name, callback, tp, v9);
}


void SoundManager__loadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  if ( (byte_4CB5C84 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C84 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__LoadSe(name, callbackFunc, method);
}


void SoundManager__playBgm(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_4CB5C88 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C88 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v3->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_41746296(
        System_String_o *name,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_4CB5C89 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C89 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v5->static_fields->DEFAULT_VOLUME, 0.0, 0, onLoadFinishCallback, 0);
}


void SoundManager__playBgm_41746644(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_4CB5C8B & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C8B = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm(name, volume, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_41746760(System_String_o *name, float volume, float fadeinTime, const MethodInfo *method)
{
  if ( (byte_4CB5C8C & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C8C = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm(name, volume, fadeinTime, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice(System_String_o *name, bool ignorePreDelay, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x21
  const MethodInfo *v6; // x1
  System_String_o *CharaVoiceFileName; // x0
  const MethodInfo *v8; // x4
  System_String_o *v9; // x20
  SeManager_c *v10; // x0

  if ( (byte_4CB5CC1 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5CC1 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, (const MethodInfo *)ignorePreDelay);
  CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v6);
  if ( !CharaVoiceAssetName )
    return 0;
  v9 = CharaVoiceFileName;
  v10 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v10 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice_41726912(
           CharaVoiceAssetName,
           v9,
           v10->static_fields->DEFAULT_VOLUME,
           0,
           ignorePreDelay,
           v8);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice_41753840(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x21
  const MethodInfo *v8; // x1
  System_String_o *CharaVoiceFileName; // x0
  const MethodInfo *v10; // x4
  System_String_o *v11; // x20

  if ( (byte_4CB5CC2 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5CC2 = 1;
  }
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, (const MethodInfo *)ignorePreDelay);
  CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v8);
  if ( !CharaVoiceAssetName )
    return 0;
  v11 = CharaVoiceFileName;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice_41726912(CharaVoiceAssetName, v11, volume, 0, ignorePreDelay, v10);
}


void SoundManager__playJingle(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_4CB5C92 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C92 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle_41428068(name, v3->static_fields->DEFAULT_VOLUME, 0);
}


void SoundManager__playJingle_41747444(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_4CB5C93 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C93 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle_41428068(name, volume, 0);
}


void SoundManager__playJingle_41747548(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_4CB5C94 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C94 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle(name, v5->static_fields->DEFAULT_VOLUME, callbackFunc, 0);
}


void SoundManager__playJingle_41747664(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( (byte_4CB5C95 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C95 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, callbackFunc, 0);
}


SePlayer_o *SoundManager__playSe(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_4CB5C9B & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C9B = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_4CB5C9C & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C9C = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue_41749336(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_4CB5C9D & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C9D = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41725336(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_c *v4; // x0

  if ( (byte_4CB5CA7 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA7 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, v2);
}


SePlayer_o *SoundManager__playSeLoop_41750728(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4CB5CA8 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA8 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(name, volume, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_41750836(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( (byte_4CB5CA9 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA9 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(name, volume, fadeinTime, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_41750948(
        System_String_o *assetName,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_4CB5CAA & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAA = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop_41726160(assetName, name, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_41751068(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_4CB5CAB & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAB = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop_41726160(assetName, name, volume, 0.0, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_41751192(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4CB5CAC & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAC = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop_41726160(assetName, name, volume, fadeinTime, 0, v5);
}


SePlayer_o *SoundManager__playSe_41749464(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( (byte_4CB5C9E & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C9E = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_41749580(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CB5C9F & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C9F = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, fadeinTime, 0, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_41749700(
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SeManager_c *v6; // x0

  if ( (byte_4CB5CA0 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA0 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v6->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_41749824(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CB5CA1 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA1 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, 0.0, callbackFunc, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_41749952(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( (byte_4CB5CA2 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA2 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, fadeinTime, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_41750084(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_4CB5CA3 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA3 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41725336(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_41750212(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4CB5CA4 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA4 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41725336(assetName, objectName, volume, fadeinTime, 0, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_41750348(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4CB5CA5 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA5 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41725336(assetName, objectName, volume, 0.0, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_41750484(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  if ( (byte_4CB5CA6 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CA6 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41725336(assetName, objectName, volume, fadeinTime, callbackFunc, 0, 0, v6);
}


void SoundManager__playSystemSe(int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CB5C98 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C98 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(kind, 0, v2);
}


SePlayer_o *SoundManager__playVoice(System_String_o *name, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_4CB5CB3 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB3 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v6->static_fields->DEFAULT_VOLUME, 0, ignorePreDelay, v3);
}


SePlayer_o *SoundManager__playVoice_41751996(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_4CB5CB4 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB4 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice(name, volume, 0, ignorePreDelay, v4);
}


SePlayer_o *SoundManager__playVoice_41752116(
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  SeManager_c *v7; // x0

  if ( (byte_4CB5CB5 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB5 = 1;
  }
  v7 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v7->static_fields->DEFAULT_VOLUME, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_41752236(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CB5CB6 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB6 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice(name, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_41752360(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CB5CB7 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB7 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice_41726912(assetName, objectName, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_41752500(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CB5CB8 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB8 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice_41727164(assetData, objectName, volume, callbackFunc, ignorePreDelay, method);
}


void SoundManager__reboot(const MethodInfo *method)
{
  SoundManager_c *v1; // x0
  SoundManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CB5C79 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5C79 = 1;
  }
  v1 = SoundManager_TypeInfo;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopAll((const MethodInfo *)v1);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (SoundManager__ReleaseAllAudioAssetStorage(Instance, v3),
        (Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (Instance = (SoundManager_o *)Instance->fields.SoundCpkLoader) == 0 )
  {
    sub_1C6BC60(Instance, v3);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_34BBAC4 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
}


void SoundManager__releaseAudioAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  SoundManager_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *initializer; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4CB5CCD & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB5CCD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v4 )
      goto LABEL_13;
    initializer = (UnityEngine_Object_o *)v4->fields.initializer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(initializer, 0, 0) )
    {
      v4 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( v4 )
      {
        SoundManager__ReleaseAudioAssetStorage(v4, name, v7);
        return;
      }
LABEL_13:
      sub_1C6BC60(v4, v5);
    }
  }
}


void SoundManager__releaseSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CB5C85 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C85 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__ReleaseSe(name, method);
}


void SoundManager__reset(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CB5C7E & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C7E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__Reset(0);
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__Reset((const MethodInfo *)v1);
}


void SoundManager__setPitchSe(System_String_o *name, float pitch, const MethodInfo *method)
{
  if ( (byte_4CB5CB0 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB0 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__SetPitchSe(name, pitch, method);
}


void SoundManager__stopAll(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CB5C7F & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5C7F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopAll(0.0, 0);
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSeAll(0.0, (const MethodInfo *)v1);
}


void SoundManager__stopBgm(const MethodInfo *method)
{
  if ( (byte_4CB5C8F & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C8F = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0, 0.0, 0, 0);
}


void SoundManager__stopJingle(const MethodInfo *method)
{
  if ( (byte_4CB5C96 & 1) == 0 )
  {
    sub_1C6BA08(&BgmManager_TypeInfo);
    byte_4CB5C96 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopJingle(0);
}


void SoundManager__stopSe(float fadeoutTime, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CB5CAD & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAD = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSeAll(fadeoutTime, (const MethodInfo *)v3);
}


void SoundManager__stopSe_41751412(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CB5CAE & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CAE = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_41727664(name, fadeoutTime, method);
}


void SoundManager__stopSystemSe(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CB5CB2 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB2 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSystemSe((const MethodInfo *)v1);
}


void SoundManager__stopVoice(
        System_String_o *assetName,
        System_String_o *objectName,
        float fadeoutTime,
        const MethodInfo *method)
{
  if ( (byte_4CB5CB9 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CB9 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_41727908(assetName, objectName, fadeoutTime, method);
}


void SoundManager__stopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CB5CBB & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB5CBB = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v3);
}


void SoundManager__stopVoice_41752756(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_String_o *CharaVoiceFileName; // x19
  SeManager_c *v9; // x0

  if ( (byte_4CB5CBA & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB5CBA = 1;
  }
  if ( name )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    CharaVoiceAssetName = SoundManager__getCharaVoiceAssetName(name, method);
    CharaVoiceFileName = SoundManager__getCharaVoiceFileName(name, v6);
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__StopVoice(CharaVoiceAssetName, CharaVoiceFileName, fadeoutTime, v7);
  }
  else
  {
    v9 = SeManager_TypeInfo;
    if ( !SeManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v9);
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
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w2
  const MethodInfo *v16; // x3

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.manager = manager;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields.manager, (int32_t)manager, v11, v12);
  v10->fields.name = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10->fields, (int32_t)name, v13, v14);
  v10->fields.callback = callback;
  v10 = (SoundManager_CpkLoader_o *)((char *)v10 + 24);
  sub_1C6B9AC((CGThumbnailListItem_o *)v10, (int32_t)callback, v15, v16);
  LODWORD(v10->fields.name) = cueType;
}


void SoundManager_CpkLoader__EndLoadCallback(
        SoundManager_CpkLoader_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  struct System_Collections_IEnumerator_o *v4; // x0
  struct System_Collections_IEnumerator_o **p_loadCR; // x19
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x1
  UnityEngine_MonoBehaviour_o *v9; // x0

  v4 = SoundManager_CpkLoader__SetupCpk(this, this->fields.name, method);
  this->fields.loadCR = v4;
  p_loadCR = &this->fields.loadCR;
  sub_1C6B9AC((CGThumbnailListItem_o *)p_loadCR, (int32_t)v4, v6, v7);
  v9 = (UnityEngine_MonoBehaviour_o *)*(p_loadCR - 2);
  if ( !v9 )
    sub_1C6BC60(0, v8);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868(v9, *p_loadCR, 0);
}


System_Collections_IEnumerator_o *SoundManager_CpkLoader__SetupCpk(
        SoundManager_CpkLoader_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB5CD7 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
    byte_4CB5CD7 = 1;
  }
  v5 = sub_1C6BC54(SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 40) = name;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), (int32_t)name, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundManager_CpkLoader__Start(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  SoundManager_CpkLoader_o *v2; // x19
  struct SoundManager_o *manager; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CB5CD4 & 1) == 0 )
  {
    this = (SoundManager_CpkLoader_o *)sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
    byte_4CB5CD4 = 1;
  }
  manager = v2->fields.manager;
  if ( !manager || (this = (SoundManager_CpkLoader_o *)manager->fields.SoundCpkLoader) == 0 )
    sub_1C6BC60(this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)v2->fields.name,
    (Il2CppObject *)v2,
    (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
  SoundManager_CpkLoader__downloadAssetStorage(v2, v4);
}


void SoundManager_CpkLoader__downloadAssetStorage(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  System_String_o *name; // x20
  System_Collections_Generic_Dictionary_object__object__o *DownloadAssetNames; // x0
  __int64 v5; // x1
  il2cpp_array_size_t entries; // x8
  System_Collections_Generic_Dictionary_object__object__o *v7; // x21
  System_String_o *v8; // x20
  unsigned __int64 v9; // x24
  System_String_o *v10; // x22
  AssetLoader_LoadEndDataHandler_o *v11; // x21
  struct SoundManager_o *manager; // x8
  struct System_Action_o *callback; // x8

  if ( (byte_4CB5CD5 & 1) == 0 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&Method_SoundManager_CpkLoader_EndLoadCallback__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_1C6BA08(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5CD5 = 1;
  }
  name = this->fields.name;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)SoundManager__getDownloadAssetNames(
                                                                                    name,
                                                                                    method);
  if ( !DownloadAssetNames )
    goto LABEL_26;
  entries = (il2cpp_array_size_t)DownloadAssetNames->fields._entries;
  v7 = DownloadAssetNames;
  v8 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)entries >= 1 )
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)entries )
        goto LABEL_25;
      v10 = (System_String_o *)*((_QWORD *)&v7->fields._count + v9);
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)AssetManager__isExistAssetStorage(
                                                                                        v10,
                                                                                        0);
      if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
        break;
      LODWORD(entries) = v7->fields._entries;
      if ( (__int64)++v9 >= (int)entries )
        goto LABEL_16;
    }
    if ( (unsigned int)v9 >= LODWORD(v7->fields._entries) )
LABEL_25:
      sub_1C6BC68(DownloadAssetNames);
    v8 = (System_String_o *)*((_QWORD *)&v7->fields._count + v9);
  }
LABEL_16:
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_20;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C6BC54(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(v11, (Il2CppObject *)this, Method_SoundManager_CpkLoader_EndLoadCallback__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
          (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
        callback = this->fields.callback;
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return;
      }
    }
LABEL_26:
    sub_1C6BC60(DownloadAssetNames, v5);
  }
}


System_String_array *SoundManager_CpkLoader__setupCpkAssetPath(
        SoundManager_CpkLoader_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  AssetManager_c *v4; // x0
  AssetData_c *v5; // x8
  System_String_o *cachePathName; // x21
  System_String_o *v7; // x0
  System_String_o *v8; // x22
  System_String_o *v9; // x0
  System_String_o *v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  AssetManager_c *v14; // x0
  System_String_o *v15; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  System_String_o *v18; // x22
  int32_t v19; // w1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  struct System_String_o *name; // x1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w1
  System_String_o *v33; // x0
  System_String_o *v34; // x0
  int32_t v35; // w2
  const MethodInfo *v36; // x3
  _WORD v38[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB5CD6 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&AssetData_TypeInfo);
    sub_1C6BA08(&AssetManager_TypeInfo);
    sub_1C6BA08(&char_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_1017/*".cpk.bytes"*/);
    sub_1C6BA08(&StringLiteral_2466/*"Audio"*/);
    sub_1C6BA08(&StringLiteral_3147/*"Bgm"*/);
    byte_4CB5CD6 = 1;
  }
  v3 = sub_1C6BAB0(string___TypeInfo, 2);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4CB5248 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5248 = 1;
  }
  v4 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v4 = AssetManager_TypeInfo;
  }
  v5 = AssetData_TypeInfo;
  cachePathName = v4->static_fields->cachePathName;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v5 = AssetData_TypeInfo;
  }
  v38[0] = v5->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v7 = System_Char__ToString((uint16_t)v38, 0);
  v8 = System_String__Concat_64007060(
         (System_String_o *)StringLiteral_2466/*"Audio"*/,
         v7,
         this->fields.name,
         (System_String_o *)StringLiteral_1017/*".cpk.bytes"*/,
         0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v9 = AndroidUtil__ConvertFileNameIfNeed(v8, 0);
  v10 = System_String__Concat_63966792(cachePathName, v9, 0);
  if ( !v3 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v3 + 32) = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)v10, v12, v13);
  if ( !byte_4CB5248 )
  {
    sub_1C6BA08(&AssetManager_TypeInfo);
    byte_4CB5248 = 1;
  }
  v14 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v14 = AssetManager_TypeInfo;
  }
  v15 = v14->static_fields->cachePathName;
  v10 = (System_String_o *)sub_1C6BAB0(string___TypeInfo, 6);
  if ( !v10 )
LABEL_31:
    sub_1C6BC60(v10, v11);
  v18 = v10;
  if ( !LODWORD(v10[1].klass) )
    goto LABEL_30;
  v19 = StringLiteral_2466/*"Audio"*/;
  v10[1].monitor = (void *)StringLiteral_2466/*"Audio"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v10[1].monitor, v19, v16, v17);
  v38[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v10 = System_Char__ToString((uint16_t)v38, 0);
  if ( LODWORD(v18[1].klass) <= 1 )
    goto LABEL_30;
  v18[1].fields = (System_String_Fields)v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18[1].fields, (int32_t)v10, v20, v21);
  if ( LODWORD(v18[1].klass) <= 2 )
    goto LABEL_30;
  v24 = StringLiteral_3147/*"Bgm"*/;
  v18[2].klass = (System_String_c *)StringLiteral_3147/*"Bgm"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18[2], v24, v22, v23);
  v38[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v10 = System_Char__ToString((uint16_t)v38, 0);
  if ( LODWORD(v18[1].klass) <= 3 )
    goto LABEL_30;
  v18[2].monitor = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18[2].monitor, (int32_t)v10, v25, v26);
  if ( LODWORD(v18[1].klass) <= 4 )
    goto LABEL_30;
  name = this->fields.name;
  v18[2].fields = (System_String_Fields)name;
  sub_1C6B9AC((CGThumbnailListItem_o *)&v18[2].fields, (int32_t)name, v27, v28);
  if ( LODWORD(v18[1].klass) <= 5
    || (v32 = StringLiteral_1017/*".cpk.bytes"*/,
        v18[3].klass = (System_String_c *)StringLiteral_1017/*".cpk.bytes"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)&v18[3], v32, v30, v31),
        v33 = System_String__Concat_64007324((System_String_array *)v18, 0),
        v34 = AndroidUtil__ConvertFileNameIfNeed(v33, 0),
        v10 = System_String__Concat_63966792(v15, v34, 0),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
LABEL_30:
    sub_1C6BC68(v10);
  }
  *(_QWORD *)(v3 + 40) = v10;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 40), (int32_t)v10, v35, v36);
  return (System_String_array *)v3;
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
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_String_o *v12; // x1

  v4 = SoundManager_CpkLoader__setupCpkAssetPath(this, (const MethodInfo *)cpkAssetPath);
  if ( !v4 )
    sub_1C6BC60(0, v5);
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
      if ( ((unsigned __int8)v4 & 1) != 0 )
        break;
      LODWORD(max_length) = v7->max_length;
      v8 = (__int64)++v9 < (int)max_length;
      if ( (__int64)v9 >= (int)max_length )
        return v8;
    }
    if ( (unsigned int)v9 >= LODWORD(v7->max_length) )
LABEL_11:
      sub_1C6BC68(v4);
    v12 = v7->m_Items[v9];
    *cpkAssetPath = v12;
    sub_1C6B9AC((CGThumbnailListItem_o *)cpkAssetPath, (int32_t)v12, v10, v11);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  SoundManager_CpkLoader__SetupCpk_d__11_o *v4; // x19
  int32_t _1__state; // w8
  struct SoundManager_CpkLoader_o *_4__this; // x20
  int32_t v7; // w1
  const MethodInfo *v8; // x2
  CriFsBinder_o *v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  CriFsBindRequest_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  UnityEngine_YieldInstruction_o *v15; // x0
  CGThumbnailListItem_o *p__2__current; // x19
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  bool result; // w0
  struct SoundManager_o *manager; // x8
  const MethodInfo *v21; // x2
  struct CriFsBindRequest_o *bind_request_5__4; // x8
  struct SoundManager_o *v23; // x8
  struct SoundManager_o *v24; // x8
  CriFsBinder_o *binder_5__3; // x21
  System_String_o *v26; // x21
  System_String_o *v27; // x22
  System_String_o *v28; // x0
  CriFsBinder_o *v29; // x3
  System_String_o *v30; // x2
  System_String_o *v31; // x0
  System_String_o *v32; // x1
  struct System_Action_o *callback; // x8
  System_String_o *name; // x21
  System_String_o *v35; // x0

  v4 = this;
  if ( (byte_4CB5CD8 & 1) == 0 )
  {
    sub_1C6BA08(&CriFsBinder_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
    sub_1C6BA08(&StringLiteral_1009/*".awb"*/);
    sub_1C6BA08(&StringLiteral_3160/*"BindError:"*/);
    sub_1C6BA08(&StringLiteral_991/*". cpkAssetPath="*/);
    sub_1C6BA08(&StringLiteral_1005/*".acb"*/);
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB5CD8 = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
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
                                                         (Il2CppObject *)v4->fields.name,
                                                         (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    bind_request_5__4 = v4->fields._bind_request_5__4;
    if ( !bind_request_5__4 )
      goto LABEL_33;
    method = (const MethodInfo *)bind_request_5__4->fields._error_k__BackingField;
    if ( method )
    {
      System_String__Concat_64007060(
        (System_String_o *)StringLiteral_3160/*"BindError:"*/,
        (System_String_o *)method,
        (System_String_o *)StringLiteral_991/*". cpkAssetPath="*/,
        v4->fields._cpkAssetPath_5__2,
        0);
    }
    else
    {
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)_4__this->fields.manager;
      if ( !this )
        goto LABEL_33;
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)SoundManager__ExistsAssetNameCounter(
                                                           (SoundManager_o *)this,
                                                           v4->fields.name,
                                                           v21);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v24 = _4__this->fields.manager;
        if ( !v24 )
          goto LABEL_33;
        this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v24->fields.SoundBinders;
        if ( !this )
          goto LABEL_33;
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v4->fields.name,
          (Il2CppObject *)v4->fields._binder_5__3,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
        if ( _4__this->fields.cueType != 1 )
          goto LABEL_31;
        binder_5__3 = v4->fields._binder_5__3;
        this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)System_String__Concat_63966792(
                                                             v4->fields.name,
                                                             (System_String_o *)StringLiteral_1009/*".awb"*/,
                                                             0);
        if ( !binder_5__3 )
          goto LABEL_33;
        if ( CriFsBinder__GetFileSize(binder_5__3, (System_String_o *)this, 0) < 0 )
        {
LABEL_31:
          name = v4->fields.name;
          v35 = System_String__Concat_63966792(name, (System_String_o *)StringLiteral_1005/*".acb"*/, 0);
          v29 = v4->fields._binder_5__3;
          v32 = v35;
          v31 = name;
          v30 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          v26 = v4->fields.name;
          v27 = System_String__Concat_63966792(v26, (System_String_o *)StringLiteral_1005/*".acb"*/, 0);
          v28 = System_String__Concat_63966792(v4->fields.name, (System_String_o *)StringLiteral_1009/*".awb"*/, 0);
          v29 = v4->fields._binder_5__3;
          v30 = v28;
          v31 = v26;
          v32 = v27;
        }
        CriAtom__AddCueSheet(v31, v32, v30, v29, 0);
        goto LABEL_28;
      }
    }
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v4->fields._binder_5__3;
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
    v4->fields.__1__state = -1;
    v7 = StringLiteral_1/*""*/;
    v4->fields._cpkAssetPath_5__2 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._cpkAssetPath_5__2, v7, v2, v3);
    if ( !_4__this )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)SoundManager_CpkLoader__tryGetAssetPath(
                                                         _4__this,
                                                         &v4->fields._cpkAssetPath_5__2,
                                                         v8);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v9 = (CriFsBinder_o *)sub_1C6BC54(CriFsBinder_TypeInfo);
      CriFsBinder___ctor(v9, 0);
      v4->fields._binder_5__3 = v9;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._binder_5__3, (int32_t)v9, v10, v11);
      v12 = CriFsUtility__BindCpk(v4->fields._binder_5__3, v4->fields._cpkAssetPath_5__2, 0);
      v4->fields._bind_request_5__4 = v12;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v4->fields._bind_request_5__4, (int32_t)v12, v13, v14);
      this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v4->fields._bind_request_5__4;
      if ( this )
      {
        v15 = CriFsRequest__WaitForDone(
                (CriFsRequest_o *)this,
                (UnityEngine_MonoBehaviour_o *)_4__this->fields.manager,
                0);
        v4->fields.__2__current = (Il2CppObject *)v15;
        p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
        sub_1C6B9AC(p__2__current, (int32_t)v15, v17, v18);
        result = 1;
        LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
        return result;
      }
LABEL_33:
      sub_1C6BC60(this, method);
    }
    v23 = _4__this->fields.manager;
    if ( !v23 )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)v23->fields.SoundCpkLoader;
    if ( !this )
      goto LABEL_33;
    System_Collections_Generic_Dictionary_object__object___Remove(
      (System_Collections_Generic_Dictionary_object__object__o *)this,
      (Il2CppObject *)v4->fields.name,
      (const MethodInfo_34BCE38 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
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

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundManager_CpkLoader__SetupCpk_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
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


void SoundManager___c__DisplayClass104_0___ctor(SoundManager___c__DisplayClass104_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass104_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass104_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1C6BC60(this, d);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void SoundManager___c__DisplayClass106_0___ctor(SoundManager___c__DisplayClass106_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass106_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass106_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_1C6BC60(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}