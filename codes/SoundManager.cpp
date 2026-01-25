void SoundManager___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  struct SoundManager_StaticFields *static_fields; // x0
  int32_t v8; // w1

  if ( (byte_4CEE0BE & 1) == 0 )
  {
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_11425/*"ResourceSound"*/);
    byte_4CEE0BE = 1;
  }
  static_fields = SoundManager_TypeInfo->static_fields;
  static_fields->DEFAULT_VOLUME = 1.0;
  v8 = StringLiteral_11425/*"ResourceSound"*/;
  static_fields->RESIDENT_RESOURCE_SOUND_NAME = (struct System_String_o *)StringLiteral_11425/*"ResourceSound"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&static_fields->RESIDENT_RESOURCE_SOUND_NAME, v8, v1, v2, v3, v4, v5, v6);
}


void SoundManager___ctor(SoundManager_o *this, const MethodInfo *method)
{
  System_Collections_Generic_Dictionary_object__int__o *v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3
  System_String_o *v6; // x4
  int32_t v7; // w5
  int64_t v8; // x6
  System_String_o *v9; // x7
  Il2CppObject *v10; // x20
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7

  if ( (byte_4CEE0BD & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_1C7BAE8(&OverwriteAssetSoundName_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager___ctor__);
    byte_4CEE0BD = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_34E8DA8 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.assetNameCounter, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  this->fields.isBusy = 1;
  v10 = (Il2CppObject *)sub_1C7BD34(OverwriteAssetSoundName_TypeInfo);
  System_Object___ctor(v10, 0);
  this->fields.overwriteAssetSoundName = (struct OverwriteAssetSoundName_o *)v10;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.overwriteAssetSoundName,
    (int32_t)v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_3A8CA90 *)Method_SingletonMonoBehaviour_SoundManager___ctor__);
}


void SoundManager__AddAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SoundManager_o *v4; // x21
  System_Collections_Generic_Dictionary_object__int__o *assetNameCounter; // x20
  int32_t v6; // w2

  v4 = this;
  if ( (byte_4CEE0AF & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SoundManager_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CEE0AF = 1;
  }
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter,
          (Il2CppObject *)name,
          (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v6 = 1;
    goto LABEL_8;
  }
  this = (SoundManager_o *)v4->fields.assetNameCounter;
  if ( !this )
LABEL_9:
    sub_1C7BD40(this, name);
  v6 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)this,
         (Il2CppObject *)name,
         (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
LABEL_8:
  System_Collections_Generic_Dictionary_object__int___set_Item(
    assetNameCounter,
    (Il2CppObject *)name,
    v6,
    (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  __int64 v16; // x19
  const MethodInfo *v17; // x1
  il2cpp_array_size_t max_length; // x8
  System_String_array *v19; // x22
  System_String_o *v20; // x21
  unsigned __int64 v21; // x25
  System_String_o *v22; // x23
  AssetLoader_LoadEndDataHandler_o *v23; // x22

  if ( (byte_4CEE0B5 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&Method_SoundManager___c__DisplayClass104_0__DownloadAudioAssetStorage_b__0__);
    sub_1C7BAE8(&SoundManager___c__DisplayClass104_0_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE0B5 = 1;
  }
  v7 = sub_1C7BD34(SoundManager___c__DisplayClass104_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = v7 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  DownloadAssetNames = SoundManager__getDownloadAssetNames(name, v17);
  if ( !DownloadAssetNames )
    goto LABEL_24;
  max_length = DownloadAssetNames->max_length;
  v19 = DownloadAssetNames;
  v20 = (System_String_o *)StringLiteral_1/*""*/;
  if ( (int)max_length >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( v21 >= (unsigned int)max_length )
        goto LABEL_23;
      v22 = v19->m_Items[v21];
      if ( !AssetManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
      DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v22, 0);
      if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
        break;
      LODWORD(max_length) = v19->max_length;
      if ( (__int64)++v21 >= (int)max_length )
        goto LABEL_17;
    }
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
LABEL_23:
      sub_1C7BD48(DownloadAssetNames);
    v20 = v19->m_Items[v21];
  }
LABEL_17:
  DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(v20, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_27;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_SoundManager___c__DisplayClass104_0__DownloadAudioAssetStorage_b__0__,
    0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
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
    sub_1C7BD40(DownloadAssetNames, v9);
  }
}


void SoundManager__DownloadAudioAssetStorage_42098876(
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_Collections_Generic_List_object__o *v16; // x22
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v18; // x27
  System_String_o *v19; // x23
  System_String_array *v20; // x24
  il2cpp_array_size_t v21; // x8
  System_String_o *Empty; // x23
  unsigned __int64 v23; // x21
  System_String_o *v24; // x25
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7
  struct System_Object_array *items; // x8
  _QWORD *v32; // x9
  __int64 size; // x10
  Il2CppClass **v34; // x0
  System_String_array *v35; // x19
  System_Action_o *v36; // x22
  Il2CppObject *object; // [xsp+0h] [xbp-70h]
  __int64 v38; // [xsp+8h] [xbp-68h]

  if ( (byte_4CEE0B7 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&string_TypeInfo);
    sub_1C7BAE8(&Method_SoundManager___c__DisplayClass106_0__DownloadAudioAssetStorage_b__0__);
    sub_1C7BAE8(&SoundManager___c__DisplayClass106_0_TypeInfo);
    byte_4CEE0B7 = 1;
  }
  v7 = sub_1C7BD34(SoundManager___c__DisplayClass106_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  object = (Il2CppObject *)v7;
  *(_QWORD *)(v7 + 16) = callback;
  v38 = v7 + 16;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_383E5C8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !nameList )
    goto LABEL_36;
  max_length = nameList->max_length;
  if ( (int)max_length >= 1 )
  {
    v18 = 0;
    while ( v18 < (unsigned int)max_length )
    {
      v19 = nameList->m_Items[v18];
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      DownloadAssetNames = SoundManager__getDownloadAssetNames(v19, v9);
      if ( !DownloadAssetNames )
        goto LABEL_36;
      v20 = DownloadAssetNames;
      v21 = DownloadAssetNames->max_length;
      Empty = string_TypeInfo->static_fields->Empty;
      if ( (int)v21 >= 1 )
      {
        v23 = 0;
        while ( 1 )
        {
          if ( v23 >= (unsigned int)v21 )
            goto LABEL_35;
          v24 = v20->m_Items[v23];
          if ( !AssetManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
          DownloadAssetNames = (System_String_array *)AssetManager__isExistAssetStorage(v24, 0);
          if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
            break;
          LODWORD(v21) = v20->max_length;
          if ( (__int64)++v23 >= (int)v21 )
            goto LABEL_21;
        }
        if ( (unsigned int)v23 >= LODWORD(v20->max_length) )
          break;
        Empty = v20->m_Items[v23];
      }
LABEL_21:
      DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(Empty, 0);
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
            (Il2CppObject *)Empty,
            *(const MethodInfo_383EDFC **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v34[4] = (Il2CppClass *)Empty;
          sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v34 + 4), (int32_t)Empty, v25, v26, v27, v28, v29, v30);
        }
      }
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_35:
    sub_1C7BD48(DownloadAssetNames);
  }
LABEL_28:
  if ( !v16 )
    goto LABEL_36;
  if ( v16->fields._size < 1 )
    goto LABEL_39;
  v35 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v16,
                                 (const MethodInfo_3840954 *)Method_System_Collections_Generic_List_string__ToArray__);
  v36 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v36, object, Method_SoundManager___c__DisplayClass106_0__DownloadAudioAssetStorage_b__0__, 0);
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage_41100904(v35, v36, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) == 0 )
  {
LABEL_39:
    if ( *(_QWORD *)v38 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v38 + 24LL))(
        *(_QWORD *)(*(_QWORD *)v38 + 64LL),
        *(_QWORD *)(*(_QWORD *)v38 + 40LL));
      return;
    }
LABEL_36:
    sub_1C7BD40(DownloadAssetNames, v9);
  }
}


bool SoundManager__ExistsAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_4CEE0B1 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_4CEE0B1 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    assetNameCounter = this->fields.assetNameCounter;
    if ( assetNameCounter )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
               (Il2CppObject *)name,
               (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) > 0;
LABEL_8:
    sub_1C7BD40(assetNameCounter, name);
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
      sub_1C7BD48(CueInfoList);
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
    sub_1C7BD40(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C7BD48(this);
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
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  unsigned __int64 v21; // x21
  SoundManager_c **p_initializer; // x22
  SoundManager_c *v23; // t1
  SoundManager_o *p_monitor; // x23

  v4 = this;
  if ( (byte_4CEE062 & 1) == 0 )
  {
    this = (SoundManager_o *)sub_1C7BAE8(&string___TypeInfo);
    byte_4CEE062 = 1;
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
    sub_1C7BD40(this, cueSheetName);
  v12 = this;
  v13 = sub_1C7BB90(string___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
  m_CancellationTokenSource = v12->fields.m_CancellationTokenSource;
  v10 = v13;
  if ( (int)m_CancellationTokenSource >= 1 )
  {
    v21 = 0;
    p_initializer = (SoundManager_c **)&v12->fields.initializer;
    this = (SoundManager_o *)(v13 + 32);
    while ( v21 < (unsigned int)m_CancellationTokenSource )
    {
      if ( !v10 )
        goto LABEL_22;
      if ( v21 >= *(unsigned int *)(v10 + 24) )
        break;
      v23 = *p_initializer;
      p_initializer += 19;
      ++v21;
      this->klass = v23;
      p_monitor = (SoundManager_o *)&this->monitor;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)this, (int32_t)v23, v14, v15, v16, v17, v18, v19);
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      this = p_monitor;
      if ( (__int64)v21 >= (int)m_CancellationTokenSource )
        return (System_String_array *)v10;
    }
LABEL_23:
    sub_1C7BD48(this);
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
    sub_1C7BD40(this, cueName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_1C7BD48(this);
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

  if ( (byte_4CEE068 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE068 = 1;
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
    sub_1C7BD40(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_1C7BD48(this);
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
  GrandQuestFolderBoardItem_o *v18; // x20
  System_Delegate_o *v19; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_Action_c *v26; // x1
  SoundManager_CpkLoader_o *v27; // x23
  const MethodInfo *v28; // x5

  if ( (byte_4CEE0B3 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&SoundManager_CpkLoader_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    byte_4CEE0B3 = 1;
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
                   (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
            {
              if ( !callback )
                return;
              SoundCpkLoader = this->fields.SoundCpkLoader;
              if ( SoundCpkLoader )
              {
                SoundCpkLoader = System_Collections_Generic_Dictionary_object__object___get_Item(
                                   (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
                                   (Il2CppObject *)name,
                                   (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
                if ( SoundCpkLoader )
                {
                  v18 = (GrandQuestFolderBoardItem_o *)((char *)SoundCpkLoader + 24);
                  v19 = System_Delegate__Combine(
                          *((System_Delegate_o **)SoundCpkLoader + 3),
                          (System_Delegate_o *)callback,
                          0);
                  if ( v19 )
                  {
                    v26 = System_Action_TypeInfo;
                    if ( (System_Action_c *)v19->klass != System_Action_TypeInfo
                      || (v18->klass = (GrandQuestFolderBoardItem_c *)v19, (System_Action_c *)v19->klass != v26) )
                    {
                      sub_1C7C0DC(v19);
                      return;
                    }
                  }
                  else
                  {
                    v18->klass = 0;
                  }
                  sub_1C7BA8C(v18, (int32_t)v19, v20, v21, v22, v23, v24, v25);
                  return;
                }
              }
            }
            else
            {
              v27 = (SoundManager_CpkLoader_o *)sub_1C7BD34(SoundManager_CpkLoader_TypeInfo);
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
            if ( v16 >= max_length )
              sub_1C7BD48(SoundCpkLoader);
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
    sub_1C7BD40(SoundCpkLoader, v12);
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

  if ( (byte_4CEE06B & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    byte_4CEE06B = 1;
  }
  memset(&v10, 0, sizeof(v10));
  SoundBinders = this->fields.SoundBinders;
  if ( SoundBinders )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)SoundBinders,
             (const MethodInfo_34F216C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    if ( !Keys )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v10,
      Keys,
      (const MethodInfo_375F33C *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_35F1C94 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__) )
    {
      v7 = this->fields.SoundBinders;
      if ( !v7 )
        sub_1C7BD40(0, v6);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v10.fields._currentKey,
               (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
      if ( !Item )
        sub_1C7BD40(0, v9);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[5].methodPtr)(
        Item,
        Item->klass->vtable[5].method);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_35F1C90 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this->fields.SoundBinders;
    if ( !Keys )
LABEL_15:
      sub_1C7BD40(Keys, v5);
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Keys,
      (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
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

  if ( (byte_4CEE075 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&Method_System_Nullable_float___ctor__);
    sub_1C7BAE8(&SubBgmPlayArgs_TypeInfo);
    byte_4CEE075 = 1;
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
  System_Nullable_float____ctor(p_volume, v8, (const MethodInfo_3967354 *)Method_System_Nullable_float___ctor__);
  v9 = (SubBgmPlayArgs_o *)sub_1C7BD34(SubBgmPlayArgs_TypeInfo);
  v10 = volume;
  v11 = v9;
  SubBgmPlayArgs___ctor(v9, name, v10, fadeTime, 0, 0);
  BgmManager__PlaySubBgm(v11, 0);
}


void SoundManager__RebootAssetNameCounter(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_4CEE0AE & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_4CEE0AE = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    sub_1C7BD40(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (const MethodInfo_34E98E4 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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

  if ( (byte_4CEE0BA & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C7BAE8(&Method_System_Collections_Generic_List_string___ctor___78753880);
    sub_1C7BAE8(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CEE0BA = 1;
  }
  memset(&i, 0, sizeof(i));
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter
    || (Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
                 (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                 (const MethodInfo_34E943C *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__),
        v5 = (System_Collections_Generic_List_object__o *)sub_1C7BD34(System_Collections_Generic_List_string__TypeInfo),
        System_Collections_Generic_List_object____ctor_58975984(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_383E6F0 *)Method_System_Collections_Generic_List_string___ctor___78753880),
        !v5) )
  {
    sub_1C7BD40(assetNameCounter, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        System_Collections_Generic_Dictionary_object__int___set_Item(
          (System_Collections_Generic_Dictionary_object__int__o *)v7,
          i.fields._current,
          1,
          (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__) )
  {
    v7 = this->fields.assetNameCounter;
    if ( !v7 )
      sub_1C7BD40(0, v6);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_383F8F4 *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  for ( i = v9;
        System_Collections_Generic_List_Enumerator_object___MoveNext(
          &i,
          (const MethodInfo_35BDF98 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
        SoundManager__ReleaseAudioAssetStorage(this, (System_String_o *)i.fields._current, v8) )
  {
    ;
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &i,
    (const MethodInfo_35BDF94 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void SoundManager__ReleaseAudioAssetStorage(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *SoundBinders; // x0

  if ( (byte_4CEE0B9 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    byte_4CEE0B9 = 1;
  }
  if ( SoundManager__SubAssetNameCounter(this, name, method) )
  {
    SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
    if ( !SoundBinders )
      goto LABEL_11;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           SoundBinders,
           (Il2CppObject *)name,
           (const MethodInfo_34F2680 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
    {
      CriAtom__RemoveCueSheet(name, 0);
      SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
      if ( SoundBinders )
      {
        SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                    SoundBinders,
                                                                                    (Il2CppObject *)name,
                                                                                    (const MethodInfo_34F240C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
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
              (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
            return;
          }
        }
      }
LABEL_11:
      sub_1C7BD40(SoundBinders, v5);
    }
  }
}


void SoundManager__SetBgmMasterVolume(float volume, const MethodInfo *method)
{
  if ( (byte_4CEE06C & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE06C = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__SetMasterVolume(volume, 0);
}


void SoundManager__SetSeMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CEE06D & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE06D = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__SetMasterVolume(volume, (const MethodInfo *)v3);
}


void SoundManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CEE06E & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE06E = 1;
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
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  System_Collections_Generic_Dictionary_object__object__o *v13; // x22
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  System_Collections_Generic_Dictionary_object__object__o *v20; // x22
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_Object_o *v27; // x21
  Il2CppObject *v28; // x0
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  int32_t v35; // w2
  int32_t v36; // w3
  System_String_o *v37; // x4
  int32_t v38; // w5
  int64_t v39; // x6
  System_String_o *v40; // x7
  int32_t v41; // w1
  SoundManager_c *v42; // x0
  System_String_o *RESIDENT_RESOURCE_SOUND_NAME; // x20
  System_String_o *v44; // x21
  System_String_o *v45; // x0

  if ( (byte_4CEE066 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    sub_1C7BAE8(&System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_AddComponent_CriAtom___);
    sub_1C7BAE8(&Method_UnityEngine_GameObject_GetComponent_CriAtom___);
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1007/*".acb.bytes"*/);
    sub_1C7BAE8(&StringLiteral_6412/*"FGO.acf"*/);
    sub_1C7BAE8(&StringLiteral_1011/*".awb.bytes"*/);
    byte_4CEE066 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_31C70C8 *)Method_UnityEngine_GameObject_GetComponent_CriAtom___);
  this->fields.criware = (struct CriAtom_o *)Component_object;
  p_criware = &this->fields.criware;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.criware,
    (int32_t)Component_object,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  if ( !this->fields.SoundBinders )
  {
    v13 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v13,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    this->fields.SoundCpkLoader = (struct System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__o *)v13;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.SoundCpkLoader, (int32_t)v13, v14, v15, v16, v17, v18, v19);
    v20 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C7BD34(System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v20,
      (const MethodInfo_34F1ADC *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    this->fields.SoundBinders = (struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *)v20;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.SoundBinders, (int32_t)v20, v21, v22, v23, v24, v25, v26);
  }
  v27 = (UnityEngine_Object_o *)*p_criware;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(v27, 0, 0) )
  {
    gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( gameObject )
    {
      v28 = UnityEngine_GameObject__AddComponent_object_(
              (UnityEngine_GameObject_o *)gameObject,
              (const MethodInfo_31C6FE0 *)Method_UnityEngine_GameObject_AddComponent_CriAtom___);
      *p_criware = (struct CriAtom_o *)v28;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.criware, (int32_t)v28, v29, v30, v31, v32, v33, v34);
      gameObject = (char *)*p_criware;
      if ( *p_criware )
      {
        v41 = StringLiteral_6412/*"FGO.acf"*/;
        *((_QWORD *)gameObject + 6) = StringLiteral_6412/*"FGO.acf"*/;
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(gameObject + 48), v41, v35, v36, v37, v38, v39, v40);
        v42 = SoundManager_TypeInfo;
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
          v42 = SoundManager_TypeInfo;
        }
        RESIDENT_RESOURCE_SOUND_NAME = v42->static_fields->RESIDENT_RESOURCE_SOUND_NAME;
        v44 = System_String__Concat_64176912(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1007/*".acb.bytes"*/, 0);
        v45 = System_String__Concat_64176912(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1011/*".awb.bytes"*/, 0);
        gameObject = (char *)CriAtom__AddCueSheet(RESIDENT_RESOURCE_SOUND_NAME, v44, v45, 0, 0);
        if ( *p_criware )
        {
          (*p_criware)->fields.dontDestroyOnLoad = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_1C7BD40(gameObject, v4);
  }
}


bool SoundManager__SubAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x21
  int32_t Item; // w0

  if ( (byte_4CEE0B0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_4CEE0B0 = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                                                                                      (Il2CppObject *)name,
                                                                                      (const MethodInfo_34E9950 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)assetNameCounter & 1) == 0 )
    return 0;
  v6 = this->fields.assetNameCounter;
  if ( !v6 )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter,
           (Il2CppObject *)name,
           (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)name,
    Item - 1,
    (const MethodInfo_34E9748 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_34E96DC *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
  {
    return 0;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
LABEL_11:
    sub_1C7BD40(assetNameCounter, name);
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (Il2CppObject *)name,
    (const MethodInfo_34EAC08 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
  return 1;
}


void SoundManager__changeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  if ( (byte_4CEE09A & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09A = 1;
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

  if ( (byte_4CEE0A7 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE0A7 = 1;
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
  if ( (byte_4CEE0BB & 1) == 0 )
  {
    path = (System_String_o *)sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE0BB = 1;
  }
  if ( isCheck )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 = System_String__Replace(v6, 0x2Fu, 0x5Fu, 0);
  }
  path = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !path )
LABEL_8:
    sub_1C7BD40(path, name);
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

  if ( (byte_4CEE0B4 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE0B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v7);
  SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, name, callback, v8, v9);
}


void SoundManager__downloadAudioAssetStorage_42098776(
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w3
  const MethodInfo *v9; // x4

  if ( (byte_4CEE0B6 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE0B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v7);
  SoundManager__DownloadAudioAssetStorage_42098876((SoundManager_o *)Instance, nameList, callback, v8, v9);
}


void SoundManager__fadeoutBgm(float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CEE078 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE078 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutBgm(fadeoutTime, 0, 0);
}


void SoundManager__fadeoutBgm_42090080(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  if ( (byte_4CEE079 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE079 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutBgm(fadeoutTime, callback, 0);
}


void SoundManager__fadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CEE082 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE082 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__FadeoutJingle(fadeoutTime, 0);
}


System_String_o *SoundManager__getAssetName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = name;
  if ( (byte_4CEE0A9 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_17053/*"ba"*/);
    name = (System_String_o *)sub_1C7BAE8(&StringLiteral_3085/*"Battle"*/);
    byte_4CEE0A9 = 1;
  }
  if ( !v2 )
    sub_1C7BD40(name, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_17053/*"ba"*/, 0) )
    return (System_String_o *)StringLiteral_3085/*"Battle"*/;
  else
    return 0;
}


System_String_o *SoundManager__getBgmName(const MethodInfo *method)
{
  if ( (byte_4CEE07B & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07B = 1;
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

  if ( (byte_4CEE0AA & 1) == 0 )
  {
    sub_1C7BAE8(&char___TypeInfo);
    sub_1C7BAE8(&StringLiteral_9544/*"NoblePhantasm_"*/);
    sub_1C7BAE8(&StringLiteral_2520/*"B06"*/);
    sub_1C7BAE8(&StringLiteral_9378/*"NP_"*/);
    sub_1C7BAE8(&StringLiteral_4428/*"ChrVoice_"*/);
    sub_1C7BAE8(&StringLiteral_12818/*"Servants_"*/);
    sub_1C7BAE8(&StringLiteral_2514/*"B05"*/);
    sub_1C7BAE8(&StringLiteral_2654/*"B81"*/);
    sub_1C7BAE8(&StringLiteral_2507/*"B"*/);
    sub_1C7BAE8(&StringLiteral_2652/*"B80"*/);
    sub_1C7BAE8(&StringLiteral_2526/*"B07"*/);
    sub_1C7BAE8(&StringLiteral_2656/*"B82"*/);
    byte_4CEE0AA = 1;
  }
  v3 = sub_1C7BB90(char___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_26;
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_1C7BD48(v3);
  *(_WORD *)(v3 + 32) = 95;
  if ( !name )
    goto LABEL_26;
  v5 = System_String__Split_64226120(name, (System_Char_array *)v3, 1, 0);
  v3 = System_String__StartsWith(name, (System_String_o *)StringLiteral_9378/*"NP_"*/, 0);
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
      if ( System_String__StartsWith(v5->m_Items[2], (System_String_o *)StringLiteral_2507/*"B"*/, 0) )
      {
        if ( v9->fields._stringLength == 4
          && ((v11 = System_String__Substring_64222852(v9, 0, 3, 0),
               System_String__op_Equality(v11, (System_String_o *)StringLiteral_2514/*"B05"*/, 0))
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2520/*"B06"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2526/*"B07"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2652/*"B80"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2654/*"B81"*/, 0)
           || System_String__op_Equality(v11, (System_String_o *)StringLiteral_2656/*"B82"*/, 0)) )
        {
          v12 = &StringLiteral_9544/*"NoblePhantasm_"*/;
        }
        else
        {
          v12 = &StringLiteral_12818/*"Servants_"*/;
        }
      }
      else
      {
        v12 = &StringLiteral_4428/*"ChrVoice_"*/;
      }
      v8 = (System_String_o *)*v12;
      v7 = v10;
      return System_String__Concat_64176912(v8, v7, 0);
    }
LABEL_26:
    sub_1C7BD40(v3, v4);
  }
  if ( max_length < 3 )
    return 0;
  v7 = v5->m_Items[1];
  v8 = (System_String_o *)StringLiteral_9544/*"NoblePhantasm_"*/;
  return System_String__Concat_64176912(v8, v7, 0);
}


System_String_o *SoundManager__getCharaVoiceFileName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w0

  v2 = name;
  if ( (byte_4CEE0AB & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_9378/*"NP_"*/);
    name = (System_String_o *)sub_1C7BAE8(&StringLiteral_16165/*"_"*/);
    byte_4CEE0AB = 1;
  }
  if ( !v2 )
    sub_1C7BD40(name, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_9378/*"NP_"*/, 0) )
  {
    v3 = System_String__IndexOf_64235304(v2, (System_String_o *)StringLiteral_16165/*"_"*/, 0);
    if ( (v3 & 0x80000000) == 0 )
      return System_String__Substring(v2, v3 + 1, 0);
    return 0;
  }
  return v2;
}


System_String_o *SoundManager__getCpkPath(const MethodInfo *method)
{
  AssetManager_c *v1; // x0

  if ( (byte_4CEE0BC & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CEE0BC = 1;
  }
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
  if ( !byte_4CED619 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED619 = 1;
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEE0A8 & 1) == 0 )
  {
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1018/*".cpk.bytes"*/);
    sub_1C7BAE8(&StringLiteral_2474/*"Audio/Bgm/"*/);
    sub_1C7BAE8(&StringLiteral_2472/*"Audio/"*/);
    byte_4CEE0A8 = 1;
  }
  v3 = sub_1C7BB90(string___TypeInfo, 2);
  v4 = System_String__Concat_64215176(
         (System_String_o *)StringLiteral_2472/*"Audio/"*/,
         cueName,
         (System_String_o *)StringLiteral_1018/*".cpk.bytes"*/,
         0);
  if ( !v3 )
    sub_1C7BD40(v4, v5);
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11),
        v4 = System_String__Concat_64215176(
               (System_String_o *)StringLiteral_2474/*"Audio/Bgm/"*/,
               cueName,
               (System_String_o *)StringLiteral_1018/*".cpk.bytes"*/,
               0),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
    sub_1C7BD48(v4);
  }
  *(_QWORD *)(v3 + 40) = v4;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v4, v12, v13, v14, v15, v16, v17);
  return (System_String_array *)v3;
}


float SoundManager__getPitchSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CEE09C & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09C = 1;
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

  if ( (byte_4CEE063 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE063 = 1;
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

  if ( (byte_4CEE061 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE061 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  return (OverwriteAssetSoundName_o *)Instance[5].klass;
}


void SoundManager__initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  SeManager_c *v3; // x0

  if ( (byte_4CEE065 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&StringLiteral_5392/*"DspBusSetting_0"*/);
    byte_4CEE065 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v2);
  SoundManager__Setup((SoundManager_o *)Instance, v2);
  CriAtom__AttachDspBusSetting((System_String_o *)StringLiteral_5392/*"DspBusSetting_0"*/, 0);
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

  if ( (byte_4CEE067 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE067 = 1;
  }
  v1 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__InitializeAssetStorage((const MethodInfo *)v1);
}


bool SoundManager__isBusySe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CEE084 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE084 = 1;
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

  if ( (byte_4CEE085 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE085 = 1;
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
  if ( (byte_4CEE072 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE072 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return BgmManager__isLoading(name, 0);
}


bool SoundManager__isPlayBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CEE071 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE071 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  return BgmManager__IsPlayBgm(name, 0);
}


bool SoundManager__isPlayJingle(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CEE07C & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07C = 1;
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

  if ( (byte_4CEE0B2 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE0B2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_1C7BD40(0, v8);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, name, callback, tp, v9);
}


void SoundManager__loadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  if ( (byte_4CEE06F & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE06F = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__LoadSe(name, callbackFunc, method);
}


void SoundManager__playBgm(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_4CEE073 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE073 = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v3->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_42089396(
        System_String_o *name,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_4CEE074 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE074 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v5->static_fields->DEFAULT_VOLUME, 0.0, 0, onLoadFinishCallback, 0);
}


void SoundManager__playBgm_42089744(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_4CEE076 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE076 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayBgm(name, volume, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_42089860(System_String_o *name, float volume, float fadeinTime, const MethodInfo *method)
{
  if ( (byte_4CEE077 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE077 = 1;
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

  if ( (byte_4CEE0AC & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE0AC = 1;
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
  return SeManager__PlayVoice_42070288(
           CharaVoiceAssetName,
           v9,
           v10->static_fields->DEFAULT_VOLUME,
           0,
           ignorePreDelay,
           v8);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice_42096940(
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

  if ( (byte_4CEE0AD & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE0AD = 1;
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
  return SeManager__PlayVoice_42070288(CharaVoiceAssetName, v11, volume, 0, ignorePreDelay, v10);
}


void SoundManager__playJingle(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_4CEE07D & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07D = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle_41765692(name, v3->static_fields->DEFAULT_VOLUME, 0);
}


void SoundManager__playJingle_42090544(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_4CEE07E & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07E = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle_41765692(name, volume, 0);
}


void SoundManager__playJingle_42090648(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_4CEE07F & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07F = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle(name, v5->static_fields->DEFAULT_VOLUME, callbackFunc, 0);
}


void SoundManager__playJingle_42090764(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( (byte_4CEE080 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE080 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__PlayJingle(name, volume, callbackFunc, 0);
}


SePlayer_o *SoundManager__playSe(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_4CEE086 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE086 = 1;
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

  if ( (byte_4CEE087 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE087 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue_42092436(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_4CEE088 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE088 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41996044(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_c *v4; // x0

  if ( (byte_4CEE092 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE092 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, v2);
}


SePlayer_o *SoundManager__playSeLoop_42093828(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4CEE093 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE093 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(name, volume, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_42093936(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( (byte_4CEE094 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE094 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop(name, volume, fadeinTime, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_42094048(
        System_String_o *assetName,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_4CEE095 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE095 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop_42069536(assetName, name, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_42094168(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_4CEE096 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE096 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop_42069536(assetName, name, volume, 0.0, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_42094292(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_4CEE097 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE097 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySeLoop_42069536(assetName, name, volume, fadeinTime, 0, v5);
}


SePlayer_o *SoundManager__playSe_42092564(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( (byte_4CEE089 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE089 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_42092680(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CEE08A & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08A = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, fadeinTime, 0, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_42092800(
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SeManager_c *v6; // x0

  if ( (byte_4CEE08B & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08B = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v6->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_42092924(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_4CEE08C & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08C = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, 0.0, callbackFunc, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_42093052(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( (byte_4CEE08D & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08D = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe(name, volume, fadeinTime, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_42093184(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_4CEE08E & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08E = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_41996044(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_42093312(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4CEE08F & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE08F = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41996044(assetName, objectName, volume, fadeinTime, 0, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_42093448(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_4CEE090 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE090 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41996044(assetName, objectName, volume, 0.0, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_42093584(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  if ( (byte_4CEE091 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE091 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlaySe_41996044(assetName, objectName, volume, fadeinTime, callbackFunc, 0, 0, v6);
}


void SoundManager__playSystemSe(int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CEE083 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE083 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__PlaySystemSe(kind, 0, v2);
}


SePlayer_o *SoundManager__playVoice(System_String_o *name, bool ignorePreDelay, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_4CEE09E & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09E = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v6->static_fields->DEFAULT_VOLUME, 0, ignorePreDelay, v3);
}


SePlayer_o *SoundManager__playVoice_42095096(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_4CEE09F & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09F = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice(name, volume, 0, ignorePreDelay, v4);
}


SePlayer_o *SoundManager__playVoice_42095216(
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  SeManager_c *v7; // x0

  if ( (byte_4CEE0A0 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A0 = 1;
  }
  v7 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v7->static_fields->DEFAULT_VOLUME, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_42095336(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CEE0A1 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A1 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice(name, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_42095460(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CEE0A2 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A2 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice_42070288(assetName, objectName, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_42095600(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_4CEE0A3 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A3 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  return SeManager__PlayVoice_42070540(assetData, objectName, volume, callbackFunc, ignorePreDelay, method);
}


void SoundManager__reboot(const MethodInfo *method)
{
  SoundManager_c *v1; // x0
  SoundManager_o *Instance; // x0
  const MethodInfo *v3; // x1

  if ( (byte_4CEE064 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE064 = 1;
  }
  v1 = SoundManager_TypeInfo;
  if ( !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__stopAll((const MethodInfo *)v1);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (SoundManager__ReleaseAllAudioAssetStorage(Instance, v3),
        (Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (Instance = (SoundManager_o *)Instance->fields.SoundCpkLoader) == 0 )
  {
    sub_1C7BD40(Instance, v3);
  }
  System_Collections_Generic_Dictionary_object__object___Clear(
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (const MethodInfo_34F2614 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
}


void SoundManager__releaseAudioAssetStorage(System_String_o *name, const MethodInfo *method)
{
  Il2CppObject *Instance; // x20
  SoundManager_o *v4; // x0
  __int64 v5; // x1
  UnityEngine_Object_o *initializer; // x20
  const MethodInfo *v7; // x2

  if ( (byte_4CEE0B8 & 1) == 0 )
  {
    sub_1C7BAE8(&UnityEngine_Object_TypeInfo);
    sub_1C7BAE8(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CEE0B8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v4 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v4 )
      goto LABEL_13;
    initializer = (UnityEngine_Object_o *)v4->fields.initializer;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(initializer, 0, 0) )
    {
      v4 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A8C5A8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( v4 )
      {
        SoundManager__ReleaseAudioAssetStorage(v4, name, v7);
        return;
      }
LABEL_13:
      sub_1C7BD40(v4, v5);
    }
  }
}


void SoundManager__releaseSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_4CEE070 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE070 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__ReleaseSe(name, method);
}


void SoundManager__reset(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CEE069 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE069 = 1;
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
  if ( (byte_4CEE09B & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09B = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__SetPitchSe(name, pitch, method);
}


void SoundManager__stopAll(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CEE06A & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE06A = 1;
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
  if ( (byte_4CEE07A & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE07A = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopBgm(0, 0.0, 0, 0);
}


void SoundManager__stopJingle(const MethodInfo *method)
{
  if ( (byte_4CEE081 & 1) == 0 )
  {
    sub_1C7BAE8(&BgmManager_TypeInfo);
    byte_4CEE081 = 1;
  }
  if ( !BgmManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo);
  BgmManager__StopJingle(0);
}


void SoundManager__stopSe(float fadeoutTime, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CEE098 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE098 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSeAll(fadeoutTime, (const MethodInfo *)v3);
}


void SoundManager__stopSe_42094512(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_4CEE099 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE099 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_41997848(name, fadeoutTime, method);
}


void SoundManager__stopSystemSe(const MethodInfo *method)
{
  SeManager_c *v1; // x0

  if ( (byte_4CEE09D & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE09D = 1;
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
  if ( (byte_4CEE0A4 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A4 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopSe_42071088(assetName, objectName, fadeoutTime, method);
}


void SoundManager__stopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  SeManager_c *v3; // x0

  if ( (byte_4CEE0A6 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    byte_4CEE0A6 = 1;
  }
  v3 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v3);
}


void SoundManager__stopVoice_42095856(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v6; // x1
  const MethodInfo *v7; // x2
  System_String_o *CharaVoiceFileName; // x19
  SeManager_c *v9; // x0

  if ( (byte_4CEE0A5 & 1) == 0 )
  {
    sub_1C7BAE8(&SeManager_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    byte_4CEE0A5 = 1;
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
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
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

  v10 = this;
  System_Object___ctor((Il2CppObject *)this, 0);
  v10->fields.manager = manager;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->fields.manager, (int32_t)manager, v11, v12, v13, v14, v15, v16);
  v10->fields.name = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10->fields, (int32_t)name, v17, v18, v19, v20, v21, v22);
  v10->fields.callback = callback;
  v10 = (SoundManager_CpkLoader_o *)((char *)v10 + 24);
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)v10, (int32_t)callback, v23, v24, v25, v26, v27, v28);
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
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  __int64 v12; // x1
  UnityEngine_MonoBehaviour_o *v13; // x0

  v4 = SoundManager_CpkLoader__SetupCpk(this, this->fields.name, method);
  this->fields.loadCR = v4;
  p_loadCR = &this->fields.loadCR;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)p_loadCR, (int32_t)v4, v6, v7, v8, v9, v10, v11);
  v13 = (UnityEngine_MonoBehaviour_o *)*(p_loadCR - 2);
  if ( !v13 )
    sub_1C7BD40(0, v12);
  UnityEngine_MonoBehaviour__StartCoroutine_71855340(v13, *p_loadCR, 0);
}


System_Collections_IEnumerator_o *SoundManager_CpkLoader__SetupCpk(
        SoundManager_CpkLoader_o *this,
        System_String_o *name,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  int32_t v12; // w2
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7

  if ( (byte_4CEE0C2 & 1) == 0 )
  {
    sub_1C7BAE8(&SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
    byte_4CEE0C2 = 1;
  }
  v5 = sub_1C7BD34(SoundManager_CpkLoader__SetupCpk_d__11_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  *(_QWORD *)(v5 + 40) = name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v5 + 40), (int32_t)name, v12, v13, v14, v15, v16, v17);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundManager_CpkLoader__Start(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  SoundManager_CpkLoader_o *v2; // x19
  struct SoundManager_o *manager; // x8
  const MethodInfo *v4; // x1

  v2 = this;
  if ( (byte_4CEE0BF & 1) == 0 )
  {
    this = (SoundManager_CpkLoader_o *)sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
    byte_4CEE0BF = 1;
  }
  manager = v2->fields.manager;
  if ( !manager || (this = (SoundManager_CpkLoader_o *)manager->fields.SoundCpkLoader) == 0 )
    sub_1C7BD40(this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)v2->fields.name,
    (Il2CppObject *)v2,
    (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
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

  if ( (byte_4CEE0C0 & 1) == 0 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&Method_SoundManager_CpkLoader_EndLoadCallback__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_1C7BAE8(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_1C7BAE8(&SoundManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE0C0 = 1;
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
      sub_1C7BD48(DownloadAssetNames);
    v8 = (System_String_o *)*((_QWORD *)&v7->fields._count + v9);
  }
LABEL_16:
  DownloadAssetNames = (System_Collections_Generic_Dictionary_object__object__o *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_20;
  v11 = (AssetLoader_LoadEndDataHandler_o *)sub_1C7BD34(AssetLoader_LoadEndDataHandler_TypeInfo);
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
          (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
        callback = this->fields.callback;
        if ( callback )
          ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
            callback->fields.method_code,
            callback->fields.method);
        return;
      }
    }
LABEL_26:
    sub_1C7BD40(DownloadAssetNames, v5);
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
  int32_t v13; // w3
  System_String_o *v14; // x4
  int32_t v15; // w5
  int64_t v16; // x6
  System_String_o *v17; // x7
  AssetManager_c *v18; // x0
  System_String_o *v19; // x21
  int32_t v20; // w2
  int32_t v21; // w3
  System_String_o *v22; // x4
  int32_t v23; // w5
  int64_t v24; // x6
  System_String_o *v25; // x7
  System_String_o *v26; // x22
  int32_t v27; // w1
  int32_t v28; // w2
  int32_t v29; // w3
  System_String_o *v30; // x4
  int32_t v31; // w5
  int64_t v32; // x6
  System_String_o *v33; // x7
  int32_t v34; // w2
  int32_t v35; // w3
  System_String_o *v36; // x4
  int32_t v37; // w5
  int64_t v38; // x6
  System_String_o *v39; // x7
  int32_t v40; // w1
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  int32_t v47; // w2
  int32_t v48; // w3
  System_String_o *v49; // x4
  int32_t v50; // w5
  int64_t v51; // x6
  System_String_o *v52; // x7
  struct System_String_o *name; // x1
  int32_t v54; // w2
  int32_t v55; // w3
  System_String_o *v56; // x4
  int32_t v57; // w5
  int64_t v58; // x6
  System_String_o *v59; // x7
  int32_t v60; // w1
  System_String_o *v61; // x0
  System_String_o *v62; // x0
  int32_t v63; // w2
  int32_t v64; // w3
  System_String_o *v65; // x4
  int32_t v66; // w5
  int64_t v67; // x6
  System_String_o *v68; // x7
  _WORD v70[2]; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CEE0C1 & 1) == 0 )
  {
    sub_1C7BAE8(&AndroidUtil_TypeInfo);
    sub_1C7BAE8(&AssetData_TypeInfo);
    sub_1C7BAE8(&AssetManager_TypeInfo);
    sub_1C7BAE8(&char_TypeInfo);
    sub_1C7BAE8(&string___TypeInfo);
    sub_1C7BAE8(&StringLiteral_1018/*".cpk.bytes"*/);
    sub_1C7BAE8(&StringLiteral_2471/*"Audio"*/);
    sub_1C7BAE8(&StringLiteral_3157/*"Bgm"*/);
    byte_4CEE0C1 = 1;
  }
  v3 = sub_1C7BB90(string___TypeInfo, 2);
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
  v5 = AssetData_TypeInfo;
  cachePathName = v4->static_fields->cachePathName;
  if ( !AssetData_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
    v5 = AssetData_TypeInfo;
  }
  v70[0] = v5->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  if ( !char_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(char_TypeInfo);
  v7 = System_Char__ToString((uint16_t)v70, 0);
  v8 = System_String__Concat_64217180(
         (System_String_o *)StringLiteral_2471/*"Audio"*/,
         v7,
         this->fields.name,
         (System_String_o *)StringLiteral_1018/*".cpk.bytes"*/,
         0);
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  v9 = AndroidUtil__ConvertFileNameIfNeed(v8, 0);
  v10 = System_String__Concat_64176912(cachePathName, v9, 0);
  if ( !v3 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v3 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v3 + 32) = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 32), (int32_t)v10, v12, v13, v14, v15, v16, v17);
  if ( !byte_4CED619 )
  {
    sub_1C7BAE8(&AssetManager_TypeInfo);
    byte_4CED619 = 1;
  }
  v18 = AssetManager_TypeInfo;
  if ( !AssetManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo);
    v18 = AssetManager_TypeInfo;
  }
  v19 = v18->static_fields->cachePathName;
  v10 = (System_String_o *)sub_1C7BB90(string___TypeInfo, 6);
  if ( !v10 )
LABEL_31:
    sub_1C7BD40(v10, v11);
  v26 = v10;
  if ( !LODWORD(v10[1].klass) )
    goto LABEL_30;
  v27 = StringLiteral_2471/*"Audio"*/;
  v10[1].monitor = (void *)StringLiteral_2471/*"Audio"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v10[1].monitor, v27, v20, v21, v22, v23, v24, v25);
  v70[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v10 = System_Char__ToString((uint16_t)v70, 0);
  if ( LODWORD(v26[1].klass) <= 1 )
    goto LABEL_30;
  v26[1].fields = (System_String_Fields)v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26[1].fields, (int32_t)v10, v28, v29, v30, v31, v32, v33);
  if ( LODWORD(v26[1].klass) <= 2 )
    goto LABEL_30;
  v40 = StringLiteral_3157/*"Bgm"*/;
  v26[2].klass = (System_String_c *)StringLiteral_3157/*"Bgm"*/;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26[2], v40, v34, v35, v36, v37, v38, v39);
  v70[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v10 = System_Char__ToString((uint16_t)v70, 0);
  if ( LODWORD(v26[1].klass) <= 3 )
    goto LABEL_30;
  v26[2].monitor = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26[2].monitor, (int32_t)v10, v41, v42, v43, v44, v45, v46);
  if ( LODWORD(v26[1].klass) <= 4 )
    goto LABEL_30;
  name = this->fields.name;
  v26[2].fields = (System_String_Fields)name;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26[2].fields, (int32_t)name, v47, v48, v49, v50, v51, v52);
  if ( LODWORD(v26[1].klass) <= 5
    || (v60 = StringLiteral_1018/*".cpk.bytes"*/,
        v26[3].klass = (System_String_c *)StringLiteral_1018/*".cpk.bytes"*/,
        sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v26[3], v60, v54, v55, v56, v57, v58, v59),
        v61 = System_String__Concat_64217444((System_String_array *)v26, 0),
        v62 = AndroidUtil__ConvertFileNameIfNeed(v61, 0),
        v10 = System_String__Concat_64176912(v19, v62, 0),
        *(_DWORD *)(v3 + 24) <= 1u) )
  {
LABEL_30:
    sub_1C7BD48(v10);
  }
  *(_QWORD *)(v3 + 40) = v10;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)(v3 + 40), (int32_t)v10, v63, v64, v65, v66, v67, v68);
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
  int32_t v11; // w3
  System_String_o *v12; // x4
  int32_t v13; // w5
  int64_t v14; // x6
  System_String_o *v15; // x7
  System_String_o *v16; // x1

  v4 = SoundManager_CpkLoader__setupCpkAssetPath(this, (const MethodInfo *)cpkAssetPath);
  if ( !v4 )
    sub_1C7BD40(0, v5);
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
      sub_1C7BD48(v4);
    v16 = v7->m_Items[v9];
    *cpkAssetPath = v16;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)cpkAssetPath, (int32_t)v16, v10, v11, v12, v13, v14, v15);
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  SoundManager_CpkLoader__SetupCpk_d__11_o *v8; // x19
  int32_t _1__state; // w8
  struct SoundManager_CpkLoader_o *_4__this; // x20
  int32_t v11; // w1
  const MethodInfo *v12; // x2
  CriFsBinder_o *v13; // x21
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  CriFsBindRequest_o *v20; // x0
  int32_t v21; // w2
  int32_t v22; // w3
  System_String_o *v23; // x4
  int32_t v24; // w5
  int64_t v25; // x6
  System_String_o *v26; // x7
  UnityEngine_YieldInstruction_o *v27; // x0
  GrandQuestFolderBoardItem_o *p__2__current; // x19
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
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
  System_String_o *v51; // x0

  v8 = this;
  if ( (byte_4CEE0C3 & 1) == 0 )
  {
    sub_1C7BAE8(&CriFsBinder_TypeInfo);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_1C7BAE8(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
    sub_1C7BAE8(&StringLiteral_1010/*".awb"*/);
    sub_1C7BAE8(&StringLiteral_3170/*"BindError:"*/);
    sub_1C7BAE8(&StringLiteral_992/*". cpkAssetPath="*/);
    sub_1C7BAE8(&StringLiteral_1006/*".acb"*/);
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEE0C3 = 1;
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
                                                         (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    bind_request_5__4 = v8->fields._bind_request_5__4;
    if ( !bind_request_5__4 )
      goto LABEL_33;
    method = (const MethodInfo *)bind_request_5__4->fields._error_k__BackingField;
    if ( method )
    {
      System_String__Concat_64217180(
        (System_String_o *)StringLiteral_3170/*"BindError:"*/,
        (System_String_o *)method,
        (System_String_o *)StringLiteral_992/*". cpkAssetPath="*/,
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
          (const MethodInfo_34F2478 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
        if ( _4__this->fields.cueType != 1 )
          goto LABEL_31;
        binder_5__3 = v8->fields._binder_5__3;
        this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)System_String__Concat_64176912(
                                                             v8->fields.name,
                                                             (System_String_o *)StringLiteral_1010/*".awb"*/,
                                                             0);
        if ( !binder_5__3 )
          goto LABEL_33;
        if ( CriFsBinder__GetFileSize(binder_5__3, (System_String_o *)this, 0) < 0 )
        {
LABEL_31:
          name = v8->fields.name;
          v51 = System_String__Concat_64176912(name, (System_String_o *)StringLiteral_1006/*".acb"*/, 0);
          v45 = v8->fields._binder_5__3;
          v48 = v51;
          v47 = name;
          v46 = (System_String_o *)StringLiteral_1/*""*/;
        }
        else
        {
          v42 = v8->fields.name;
          v43 = System_String__Concat_64176912(v42, (System_String_o *)StringLiteral_1006/*".acb"*/, 0);
          v44 = System_String__Concat_64176912(v8->fields.name, (System_String_o *)StringLiteral_1010/*".awb"*/, 0);
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
    v8->fields.__1__state = -1;
    v11 = StringLiteral_1/*""*/;
    v8->fields._cpkAssetPath_5__2 = (struct System_String_o *)StringLiteral_1/*""*/;
    sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._cpkAssetPath_5__2, v11, v2, v3, v4, v5, v6, v7);
    if ( !_4__this )
      goto LABEL_33;
    this = (SoundManager_CpkLoader__SetupCpk_d__11_o *)SoundManager_CpkLoader__tryGetAssetPath(
                                                         _4__this,
                                                         &v8->fields._cpkAssetPath_5__2,
                                                         v12);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v13 = (CriFsBinder_o *)sub_1C7BD34(CriFsBinder_TypeInfo);
      CriFsBinder___ctor(v13, 0);
      v8->fields._binder_5__3 = v13;
      sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&v8->fields._binder_5__3, (int32_t)v13, v14, v15, v16, v17, v18, v19);
      v20 = CriFsUtility__BindCpk(v8->fields._binder_5__3, v8->fields._cpkAssetPath_5__2, 0);
      v8->fields._bind_request_5__4 = v20;
      sub_1C7BA8C(
        (GrandQuestFolderBoardItem_o *)&v8->fields._bind_request_5__4,
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
        p__2__current = (GrandQuestFolderBoardItem_o *)&v8->fields.__2__current;
        sub_1C7BA8C(p__2__current, (int32_t)v27, v29, v30, v31, v32, v33, v34);
        result = 1;
        LODWORD(p__2__current[-1].fields._ClosedMessage_k__BackingField) = 1;
        return result;
      }
LABEL_33:
      sub_1C7BD40(this, method);
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
      (const MethodInfo_34F3988 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
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

  v2 = sub_1C7BAFC(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C7BD34(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C7BAFC(&Method_SoundManager_CpkLoader__SetupCpk_d__11_System_Collections_IEnumerator_Reset__);
  sub_1C7BC10(v3, v4);
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
    sub_1C7BD40(this, d);
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
    sub_1C7BD40(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}