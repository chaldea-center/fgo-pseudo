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

  if ( (byte_5970223 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_11870/*"ResourceSound"*/);
    byte_5970223 = 1;
  }
  v7 = StringLiteral_11870/*"ResourceSound"*/;
  static_fields = SoundManager_TypeInfo->static_fields;
  static_fields->DEFAULT_VOLUME = 1.0;
  static_fields->RESIDENT_RESOURCE_SOUND_NAME = (struct System_String_o *)v7;
  sub_2213A04(
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
  System_Collections_Generic_Dictionary_int__bool__c *v10; // x0
  System_Collections_Generic_Dictionary_int__bool__o *v11; // x20
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_Collections_Generic_Dictionary_TKey__TValue__o *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  Il2CppObject *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_5970222 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__bool__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__int__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__SoundManager_CueType__TypeInfo);
    sub_2213A60(&OverwriteAssetSoundName_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager___ctor__);
    byte_5970222 = 1;
  }
  v3 = (System_Collections_Generic_Dictionary_object__int__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__int__TypeInfo);
  System_Collections_Generic_Dictionary_object__int____ctor(
    v3,
    (const MethodInfo_3FF3708 *)Method_System_Collections_Generic_Dictionary_string__int___ctor__);
  this->fields.assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)v3;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.assetNameCounter, (int32_t)v3, v4, v5, v6, v7, v8, v9);
  v10 = System_Collections_Generic_Dictionary_int__bool__TypeInfo;
  this->fields.isBusy = 1;
  v11 = (System_Collections_Generic_Dictionary_int__bool__o *)sub_2213CCC(v10);
  System_Collections_Generic_Dictionary_int__bool____ctor(
    v11,
    (const MethodInfo_3F88990 *)Method_System_Collections_Generic_Dictionary_int__bool___ctor__);
  this->fields.useEfVoiceBySvtIdDictionary = v11;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.useEfVoiceBySvtIdDictionary,
    (int32_t)v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  v18 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__SoundManager_CueType__TypeInfo);
  System_Collections_Generic_Dictionary_object__Int32Enum____ctor(
    v18,
    (const MethodInfo_3FF6B84 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType___ctor__);
  this->fields.pendingRebindCueSheets = (struct System_Collections_Generic_Dictionary_string__SoundManager_CueType__o *)v18;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.pendingRebindCueSheets,
    (int32_t)v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24);
  v25 = (Il2CppObject *)sub_2213CCC(OverwriteAssetSoundName_TypeInfo);
  System_Object___ctor(v25, 0);
  this->fields.overwriteAssetSoundName = (struct OverwriteAssetSoundName_o *)v25;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.overwriteAssetSoundName,
    (int32_t)v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31);
  SingletonMonoBehaviour_object____ctor(
    (SingletonMonoBehaviour_T__o *)this,
    (const MethodInfo_47A2F28 *)Method_SingletonMonoBehaviour_SoundManager___ctor__);
}


void SoundManager__AddAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  SoundManager_o *v4; // x21
  System_Collections_Generic_Dictionary_object__int__o *assetNameCounter; // x20
  int32_t v6; // w2

  v4 = this;
  if ( (byte_597020C & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    this = (SoundManager_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_597020C = 1;
  }
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_9;
  if ( !System_Collections_Generic_Dictionary_object__int___ContainsKey(
          (System_Collections_Generic_Dictionary_object__int__o *)v4->fields.assetNameCounter,
          (Il2CppObject *)name,
          (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    v6 = 1;
    goto LABEL_8;
  }
  this = (SoundManager_o *)v4->fields.assetNameCounter;
  if ( !this )
LABEL_9:
    sub_2213CDC(this, name);
  v6 = System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)this,
         (Il2CppObject *)name,
         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__)
     + 1;
LABEL_8:
  System_Collections_Generic_Dictionary_object__int___set_Item(
    assetNameCounter,
    (Il2CppObject *)name,
    v6,
    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
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

  if ( (byte_597021A & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SoundManager___c__DisplayClass115_0__DownloadAudioAssetStorage_b__0__);
    sub_2213A60(&SoundManager___c__DisplayClass115_0_TypeInfo);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_597021A = 1;
  }
  v7 = sub_2213CCC(SoundManager___c__DisplayClass115_0_TypeInfo);
  SoundManager___c__DisplayClass115_0___ctor((SoundManager___c__DisplayClass115_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_24;
  *(_QWORD *)(v7 + 16) = callback;
  v16 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
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
      sub_2213CE4(DownloadAssetNames);
    v20 = v18->m_Items[v21];
  }
LABEL_17:
  DownloadAssetNames = (System_String_array *)System_String__IsNullOrEmpty(v20, 0);
  if ( ((unsigned __int8)DownloadAssetNames & 1) != 0 )
    goto LABEL_27;
  v23 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
  AssetLoader_LoadEndDataHandler___ctor(
    v23,
    (Il2CppObject *)v7,
    Method_SoundManager___c__DisplayClass115_0__DownloadAudioAssetStorage_b__0__,
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
    sub_2213CDC(DownloadAssetNames, v9);
  }
}


void SoundManager__DownloadAudioAssetStorage_48517364(
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

  if ( (byte_597021C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&Method_SoundManager___c__DisplayClass117_0__DownloadAudioAssetStorage_b__0__);
    sub_2213A60(&SoundManager___c__DisplayClass117_0_TypeInfo);
    byte_597021C = 1;
  }
  v7 = sub_2213CCC(SoundManager___c__DisplayClass117_0_TypeInfo);
  SoundManager___c__DisplayClass117_0___ctor((SoundManager___c__DisplayClass117_0_o *)v7, 0);
  if ( !v7 )
    goto LABEL_36;
  object = (Il2CppObject *)v7;
  *(_QWORD *)(v7 + 16) = callback;
  v39 = v7 + 16;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)callback, v10, v11, v12, v13, v14, v15);
  v16 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
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
      v22 = **(System_String_o ***)(qword_5984390 + 184);
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
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v16->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
        }
      }
      LODWORD(max_length) = nameList->max_length;
      if ( (__int64)++v18 >= (int)max_length )
        goto LABEL_28;
    }
LABEL_35:
    sub_2213CE4(DownloadAssetNames);
  }
LABEL_28:
  if ( !v16 )
    goto LABEL_36;
  if ( v16->fields._size < 1 )
    goto LABEL_39;
  v35 = (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                 v16,
                                 (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
  v36 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
  System_Action___ctor(v36, object, Method_SoundManager___c__DisplayClass117_0__DownloadAudioAssetStorage_b__0__, 0);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v37);
  DownloadAssetNames = (System_String_array *)AssetManager__downloadAssetStorage_47501572(v35, v36, 0);
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
    sub_2213CDC(DownloadAssetNames, v9);
  }
}


bool SoundManager__ExistsAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_597020E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    byte_597020E = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_8;
  if ( System_Collections_Generic_Dictionary_object__int___ContainsKey(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__) )
  {
    assetNameCounter = this->fields.assetNameCounter;
    if ( assetNameCounter )
      return System_Collections_Generic_Dictionary_object__int___get_Item(
               (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
               (Il2CppObject *)name,
               (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) > 0;
LABEL_8:
    sub_2213CDC(assetNameCounter, name);
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
      sub_2213CE4(CueInfoList);
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
    sub_2213CDC(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_2213CE4(this);
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
  if ( (byte_59701BE & 1) == 0 )
  {
    this = (SoundManager_o *)sub_2213A60(&string___TypeInfo);
    byte_59701BE = 1;
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
    sub_2213CDC(this, cueSheetName);
  v12 = this;
  this = (SoundManager_o *)sub_2213B20(string___TypeInfo, LODWORD(this->fields.m_CancellationTokenSource));
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
      sub_2213A04((MissionNaviTransitionBoardItem_o *)((char *)v10 + v22), (int32_t)v23, v13, v14, v15, v16, v17, v18);
      LODWORD(m_CancellationTokenSource) = v12->fields.m_CancellationTokenSource;
      v22 += 8;
      v20 = v24;
      if ( v24 >= (int)m_CancellationTokenSource )
        return (System_String_array *)v10;
    }
LABEL_22:
    sub_2213CE4(this);
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
    sub_2213CDC(this, cueName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= max_length )
      sub_2213CE4(this);
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

  if ( (byte_59701C4 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701C4 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
  SeManager__InitializePreDelaySetting((const MethodInfo *)v2);
}


bool SoundManager__IsCueSheetLoaded(SoundManager_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  __int64 v5; // x20
  _BOOL8 v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
  __int64 v14; // x1
  UnityEngine_Object_o *criware; // x21
  struct CriAtom_o *v16; // x8
  System_Object_array *cueSheets; // x19
  System_Func_object__bool__o *v18; // x21

  if ( (byte_597020F & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_CriAtomCueSheet___);
    sub_2213A60(&System_Func_CriAtomCueSheet__bool__TypeInfo);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SoundManager___c__DisplayClass103_0__IsCueSheetLoaded_b__0__);
    sub_2213A60(&SoundManager___c__DisplayClass103_0_TypeInfo);
    byte_597020F = 1;
  }
  v5 = sub_2213CCC(SoundManager___c__DisplayClass103_0_TypeInfo);
  SoundManager___c__DisplayClass103_0___ctor((SoundManager___c__DisplayClass103_0_o *)v5, 0);
  if ( !v5 )
    goto LABEL_11;
  *(_QWORD *)(v5 + 16) = cueSheetName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 16), (int32_t)cueSheetName, v8, v9, v10, v11, v12, v13);
  criware = (UnityEngine_Object_o *)this->fields.criware;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v14);
  v6 = UnityEngine_Object__op_Equality(criware, 0, 0);
  if ( v6 )
    return 0;
  v16 = this->fields.criware;
  if ( !v16 )
LABEL_11:
    sub_2213CDC(v6, v7);
  cueSheets = (System_Object_array *)v16->fields.cueSheets;
  if ( cueSheets )
  {
    v18 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_CriAtomCueSheet__bool__TypeInfo);
    System_Func_object__bool____ctor(
      v18,
      (Il2CppObject *)v5,
      Method_SoundManager___c__DisplayClass103_0__IsCueSheetLoaded_b__0__,
      0);
    return BasicHelper__Any_object__58785420(
             cueSheets,
             (System_Func_T__bool__o *)v18,
             (const MethodInfo_380FE8C *)Method_BasicHelper_Any_CriAtomCueSheet___);
  }
  return 0;
}


bool SoundManager__IsEfVoiceServantCpk(int32_t svtId, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  Il2CppObject *v6; // x0
  __int64 v7; // x1

  if ( (byte_5970215 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__bool___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970215 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
    return 0;
  v6 = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !v6 )
    sub_2213CDC(0, v7);
  return System_Collections_Generic_CollectionExtensions__GetValueOrDefault_int__bool_(
           (System_Collections_Generic_IReadOnlyDictionary_TKey__TValue__o *)v6[5].klass,
           svtId,
           0,
           (const MethodInfo_381DED8 *)Method_System_Collections_Generic_CollectionExtensions_GetValueOrDefault_int__bool___);
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
    sub_2213CDC(this, cueSheetName);
  max_length = cueSheets->max_length;
  if ( max_length < 1 )
    return 0;
  v9 = 0;
  while ( 1 )
  {
    if ( v9 >= max_length )
      sub_2213CE4(this);
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
  __int64 v11; // x1
  const MethodInfo *v12; // x2
  char *SoundCpkLoader; // x0
  const MethodInfo *v14; // x2
  MissionNaviTransitionBoardItem_o *v15; // x20
  System_Delegate_o *v16; // x0
  System_String_o *v17; // x2
  System_String_o *v18; // x3
  int32_t v19; // w4
  int32_t v20; // w5
  bool v21; // w6
  bool v22; // w7
  System_Action_c *v23; // x1
  SoundManager_CpkLoader_o *v24; // x23

  if ( (byte_5970218 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundManager_CpkLoader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    byte_5970218 = 1;
  }
  exists = SoundManager__ExistsAssetNameCounter(this, name, (const MethodInfo *)callback);
  SoundManager__AddAssetNameCounter(this, name, v10);
  if ( exists )
  {
    SoundCpkLoader = (char *)this->fields.SoundCpkLoader;
    if ( !SoundCpkLoader )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
            (Il2CppObject *)name,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
    {
      if ( !SoundManager__IsCueSheetLoaded(this, name, v14) )
      {
LABEL_21:
        v24 = (SoundManager_CpkLoader_o *)sub_2213CCC(SoundManager_CpkLoader_TypeInfo);
        SoundManager_CpkLoader___ctor(v24, this, name, callback, tp, 0);
        if ( v24 )
        {
          SoundManager_CpkLoader__Start(v24, 0);
          return;
        }
LABEL_25:
        sub_2213CDC(SoundCpkLoader, v11);
      }
      goto LABEL_9;
    }
LABEL_13:
    if ( !callback )
      return;
    SoundCpkLoader = (char *)this->fields.SoundCpkLoader;
    if ( !SoundCpkLoader )
      goto LABEL_25;
    SoundCpkLoader = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                               (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
                               (Il2CppObject *)name,
                               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    if ( !SoundCpkLoader )
      goto LABEL_25;
    v15 = (MissionNaviTransitionBoardItem_o *)(SoundCpkLoader + 24);
    v16 = System_Delegate__Combine(*((System_Delegate_o **)SoundCpkLoader + 3), (System_Delegate_o *)callback, 0);
    if ( v16 )
    {
      v23 = System_Action_TypeInfo;
      if ( (System_Action_c *)v16->klass != System_Action_TypeInfo
        || (v15->klass = (MissionNaviTransitionBoardItem_c *)v16, (System_Action_c *)v16->klass != v23) )
      {
        sub_221405C(v16, v23, v17, v18);
        return;
      }
    }
    else
    {
      v15->klass = 0;
    }
    sub_2213A04(v15, (int32_t)v16, v17, v18, v19, v20, v21, v22);
    return;
  }
  if ( !SoundManager__IsCueSheetLoaded(this, name, v12) )
  {
    SoundCpkLoader = (char *)this->fields.SoundCpkLoader;
    if ( !SoundCpkLoader )
      goto LABEL_25;
    if ( !System_Collections_Generic_Dictionary_object__object___ContainsKey(
            (System_Collections_Generic_Dictionary_object__object__o *)SoundCpkLoader,
            (Il2CppObject *)name,
            (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
      goto LABEL_21;
    goto LABEL_13;
  }
LABEL_9:
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

  if ( (byte_59701C7 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    byte_59701C7 = 1;
  }
  SoundBinders = this->fields.SoundBinders;
  memset(&v10, 0, sizeof(v10));
  if ( SoundBinders )
  {
    Keys = System_Collections_Generic_Dictionary_object__object___get_Keys(
             (System_Collections_Generic_Dictionary_object__object__o *)SoundBinders,
             (const MethodInfo_3FFD8D8 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Keys__);
    if ( !Keys )
      goto LABEL_15;
    System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator(
      &v10,
      Keys,
      (const MethodInfo_43896F0 *)Method_System_Collections_Generic_Dictionary_KeyCollection_string__CriFsBinder__GetEnumerator__);
    while ( System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext(
              &v10,
              (const MethodInfo_4169D50 *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__MoveNext__) )
    {
      v7 = this->fields.SoundBinders;
      if ( !v7 )
        sub_2213CDC(0, v6);
      Item = System_Collections_Generic_Dictionary_object__object___get_Item(
               (System_Collections_Generic_Dictionary_object__object__o *)v7,
               v10.fields._currentKey,
               (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
      if ( !Item )
        sub_2213CDC(0, v9);
      ((void (__fastcall *)(Il2CppObject *, const MethodInfo *))Item->klass->vtable[5].methodPtr)(
        Item,
        Item->klass->vtable[5].method);
    }
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose(
      &v10,
      (const MethodInfo_4169D4C *)Method_System_Collections_Generic_Dictionary_KeyCollection_Enumerator_string__CriFsBinder__Dispose__);
    Keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)this->fields.SoundBinders;
    if ( !Keys )
LABEL_15:
      sub_2213CDC(Keys, v5);
    System_Collections_Generic_Dictionary_object__object___Clear(
      (System_Collections_Generic_Dictionary_object__object__o *)Keys,
      (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Clear__);
  }
}


void SoundManager__PlaySubBgm(System_String_o *name, float fadeTime, const MethodInfo *method)
{
  BgmManager_c *v5; // x0
  float DEFAULT_VOLUME; // s0
  SubBgmPlayArgs_o *v7; // x20
  System_Nullable_float__o volume; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_59701D1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_59701D1 = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v5 = BgmManager_TypeInfo;
  }
  DEFAULT_VOLUME = v5->static_fields->DEFAULT_VOLUME;
  volume = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volume,
    DEFAULT_VOLUME,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v7 = (SubBgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
  SubBgmPlayArgs___ctor(v7, name, volume, fadeTime, 0, 0);
  BgmManager__PlaySubBgm(v7, 0);
}


void SoundManager__PlaySubBgm_48506544(
        System_String_o *bgmName,
        float volume,
        float fadeTime,
        const MethodInfo *method)
{
  SubBgmPlayArgs_o *v7; // x20
  __int64 v8; // x1
  System_Nullable_float__o volumea; // [xsp+8h] [xbp-48h] BYREF

  if ( (byte_59701D2 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&Method_System_Nullable_float___ctor__);
    sub_2213A60(&SubBgmPlayArgs_TypeInfo);
    byte_59701D2 = 1;
  }
  volumea = 0;
  System_Nullable_float____ctor(
    (System_Nullable_float__o)&volumea,
    volume,
    (const MethodInfo_45E6918 *)Method_System_Nullable_float___ctor__);
  v7 = (SubBgmPlayArgs_o *)sub_2213CCC(SubBgmPlayArgs_TypeInfo);
  SubBgmPlayArgs___ctor(v7, bgmName, volumea, fadeTime, 0, 0);
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v8);
  BgmManager__PlaySubBgm(v7, 0);
}


void SoundManager__RebindAudioAssetStorageIfLoaded(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        int32_t cueType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x2
  __int64 v8; // x1
  System_Collections_Generic_Dictionary_object__object__o *SoundCpkLoader; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  UnityEngine_Object_o *criware; // x22
  const MethodInfo *v13; // x2
  struct CriAtom_o *v14; // x8
  SoundManager_CpkLoader_o *v15; // x22

  if ( (byte_5970212 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    byte_5970212 = 1;
  }
  if ( !System_String__IsNullOrEmpty(cueSheetName, 0) && SoundManager__ExistsAssetNameCounter(this, cueSheetName, v7) )
  {
    SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundCpkLoader;
    if ( !SoundCpkLoader )
      goto LABEL_23;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           SoundCpkLoader,
           (Il2CppObject *)cueSheetName,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
    {
      SoundManager__ReserveRebindCueSheet(this, cueSheetName, cueType, v11);
      return;
    }
    criware = (UnityEngine_Object_o *)this->fields.criware;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
    SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)UnityEngine_Object__op_Equality(
                                                                                  criware,
                                                                                  0,
                                                                                  0);
    if ( ((unsigned __int8)SoundCpkLoader & 1) == 0 )
    {
      v14 = this->fields.criware;
      if ( !v14 )
        goto LABEL_23;
      if ( v14->fields.cueSheets && SoundManager__IsCueSheetLoaded(this, cueSheetName, v13) )
      {
        CriAtom__RemoveCueSheet(cueSheetName, 0);
        SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
        if ( !SoundCpkLoader )
          goto LABEL_23;
        if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
               SoundCpkLoader,
               (Il2CppObject *)cueSheetName,
               (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
        {
          SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
          if ( !SoundCpkLoader )
            goto LABEL_23;
          SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                        SoundCpkLoader,
                                                                                        (Il2CppObject *)cueSheetName,
                                                                                        (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
          if ( !SoundCpkLoader )
            goto LABEL_23;
          ((void (__fastcall *)(System_Collections_Generic_Dictionary_object__object__o *, const MethodInfo *))SoundCpkLoader->klass->vtable._5_set_Item.methodPtr)(
            SoundCpkLoader,
            SoundCpkLoader->klass->vtable._5_set_Item.method);
          SoundCpkLoader = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
          if ( !SoundCpkLoader )
            goto LABEL_23;
          System_Collections_Generic_Dictionary_object__object___Remove(
            SoundCpkLoader,
            (Il2CppObject *)cueSheetName,
            (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
        }
        v15 = (SoundManager_CpkLoader_o *)sub_2213CCC(SoundManager_CpkLoader_TypeInfo);
        SoundManager_CpkLoader___ctor(v15, this, cueSheetName, 0, cueType, 0);
        if ( v15 )
        {
          SoundManager_CpkLoader__Start(v15, 0);
          return;
        }
LABEL_23:
        sub_2213CDC(SoundCpkLoader, v8);
      }
    }
  }
}


void SoundManager__RebindEfVoiceCueSheetsInternal(
        SoundManager_o *this,
        int32_t svtId,
        int32_t cueType,
        const MethodInfo *method)
{
  SoundManager___c__DisplayClass105_0_o *v7; // x22
  System_Collections_Generic_Dictionary_object__int__o *assetNameCounter; // x0
  __int64 v9; // x1
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *Keys; // x21
  System_Func_object__bool__o *v11; // x23
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0
  const MethodInfo *v13; // x3
  struct System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *entries; // x8
  System_Collections_Generic_Dictionary_object__int__o *v15; // x21
  unsigned __int64 v16; // x22

  if ( (byte_5970211 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Count__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_2213A60(&Method_System_Linq_Enumerable_ToArray_string___);
    sub_2213A60(&Method_System_Linq_Enumerable_Where_string___);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_SoundManager___c__DisplayClass105_0__RebindEfVoiceCueSheetsInternal_b__0__);
    sub_2213A60(&SoundManager___c__DisplayClass105_0_TypeInfo);
    byte_5970211 = 1;
  }
  v7 = (SoundManager___c__DisplayClass105_0_o *)sub_2213CCC(SoundManager___c__DisplayClass105_0_TypeInfo);
  SoundManager___c__DisplayClass105_0___ctor(v7, 0);
  if ( !v7 )
    goto LABEL_15;
  v7->fields.svtId = svtId;
  if ( svtId < 1 )
    return;
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_15;
  if ( System_Collections_Generic_Dictionary_object__int___get_Count(
         assetNameCounter,
         (const MethodInfo_3FF3D54 *)Method_System_Collections_Generic_Dictionary_string__int__get_Count__) < 1 )
    return;
  assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter;
  if ( !assetNameCounter
    || (Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
                 assetNameCounter,
                 (const MethodInfo_3FF3D64 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__),
        v11 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo),
        System_Func_object__bool____ctor(
          v11,
          (Il2CppObject *)v7,
          Method_SoundManager___c__DisplayClass105_0__RebindEfVoiceCueSheetsInternal_b__0__,
          0),
        v12 = System_Linq_Enumerable__Where_object_(
                (System_Collections_Generic_IEnumerable_TSource__o *)Keys,
                (System_Func_TSource__bool__o *)v11,
                (const MethodInfo_38A3478 *)Method_System_Linq_Enumerable_Where_string___),
        (assetNameCounter = (System_Collections_Generic_Dictionary_object__int__o *)System_Linq_Enumerable__ToArray_object_(
                                                                                      v12,
                                                                                      (const MethodInfo_389BB2C *)Method_System_Linq_Enumerable_ToArray_string___)) == 0) )
  {
LABEL_15:
    sub_2213CDC(assetNameCounter, v9);
  }
  entries = assetNameCounter->fields._entries;
  v15 = assetNameCounter;
  if ( (int)entries >= 1 )
  {
    v16 = 0;
    do
    {
      if ( v16 >= (unsigned int)entries )
        sub_2213CE4(assetNameCounter);
      SoundManager__RebindAudioAssetStorageIfLoaded(
        this,
        *((System_String_o **)&v15->fields._count + v16),
        cueType,
        v13);
      LODWORD(entries) = v15->fields._entries;
      ++v16;
    }
    while ( (__int64)v16 < (int)entries );
  }
}


void SoundManager__RebootAssetNameCounter(SoundManager_o *this, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0

  if ( (byte_597020B & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Clear__);
    byte_597020B = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    sub_2213CDC(0, method);
  System_Collections_Generic_Dictionary_object__int___Clear(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (const MethodInfo_3FF4224 *)Method_System_Collections_Generic_Dictionary_string__int__Clear__);
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

  if ( (byte_597021F & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Keys__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor___91665488);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    byte_597021F = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  memset(&v10, 0, sizeof(v10));
  if ( !assetNameCounter
    || (Keys = System_Collections_Generic_Dictionary_object__int___get_Keys(
                 (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                 (const MethodInfo_3FF3D64 *)Method_System_Collections_Generic_Dictionary_string__int__get_Keys__),
        v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo),
        System_Collections_Generic_List_object____ctor_71841080(
          v5,
          (System_Collections_Generic_IEnumerable_T__o *)Keys,
          (const MethodInfo_4483538 *)Method_System_Collections_Generic_List_string___ctor___91665488),
        !v5) )
  {
    sub_2213CDC(assetNameCounter, method);
  }
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = v9;
  v9.fields._list = 0;
  *(_QWORD *)&v9.fields._index = &v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
  {
    v7 = this->fields.assetNameCounter;
    if ( !v7 )
      sub_2213CDC(0, v6);
    System_Collections_Generic_Dictionary_object__int___set_Item(
      (System_Collections_Generic_Dictionary_object__int__o *)v7,
      v10.fields._current,
      1,
      (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  }
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  System_Collections_Generic_List_object___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v9,
    v5,
    (const MethodInfo_448473C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
  v10 = v9;
  v9.fields._list = 0;
  *(_QWORD *)&v9.fields._index = &v10;
  while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
            &v10,
            (const MethodInfo_40FBAD8 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    SoundManager__ReleaseAudioAssetStorage(this, (System_String_o *)v10.fields._current, v8);
  System_Collections_Generic_List_Enumerator_object___Dispose(
    &v10,
    (const MethodInfo_40FBAD4 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
}


void SoundManager__ReleaseAudioAssetStorage(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  __int64 v5; // x1
  System_Collections_Generic_Dictionary_object__object__o *SoundBinders; // x0

  if ( (byte_597021E & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    byte_597021E = 1;
  }
  if ( SoundManager__SubAssetNameCounter(this, name, method) )
  {
    SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
    if ( !SoundBinders )
      goto LABEL_11;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           SoundBinders,
           (Il2CppObject *)name,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
    {
      CriAtom__RemoveCueSheet(name, 0);
      SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)this->fields.SoundBinders;
      if ( SoundBinders )
      {
        SoundBinders = (System_Collections_Generic_Dictionary_object__object__o *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                                                                    SoundBinders,
                                                                                    (Il2CppObject *)name,
                                                                                    (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
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
              (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
            return;
          }
        }
      }
LABEL_11:
      sub_2213CDC(SoundBinders, v5);
    }
  }
}


void SoundManager__ReserveRebindCueSheet(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        int32_t cueType,
        const MethodInfo *method)
{
  __int64 v7; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *pendingRebindCueSheets; // x0
  bool v9; // w8
  int32_t value; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5970213 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__set_Item__);
    byte_5970213 = 1;
  }
  value = 0;
  if ( !System_String__IsNullOrEmpty(cueSheetName, 0) )
  {
    pendingRebindCueSheets = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.pendingRebindCueSheets;
    if ( pendingRebindCueSheets )
    {
      v9 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue(
             pendingRebindCueSheets,
             (Il2CppObject *)cueSheetName,
             &value,
             (const MethodInfo_3FF9040 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__TryGetValue__);
      pendingRebindCueSheets = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.pendingRebindCueSheets;
      if ( v9 )
      {
        if ( pendingRebindCueSheets )
        {
          cueType = value == 1 || cueType == 1;
          goto LABEL_14;
        }
      }
      else if ( pendingRebindCueSheets )
      {
LABEL_14:
        System_Collections_Generic_Dictionary_object__Int32Enum___set_Item(
          pendingRebindCueSheets,
          (Il2CppObject *)cueSheetName,
          cueType,
          (const MethodInfo_3FF7504 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__set_Item__);
        return;
      }
    }
    sub_2213CDC(pendingRebindCueSheets, v7);
  }
}


void SoundManager__ResetUseEfVoiceBySvtIdDictionary(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *Instance; // x19
  System_Collections_Generic_Dictionary_int__bool__o *klass; // x0
  __int64 v4; // x1

  if ( (byte_5970216 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970216 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v1);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !klass || (klass = (System_Collections_Generic_Dictionary_int__bool__o *)klass[1].klass) == 0 )
      sub_2213CDC(klass, v4);
    System_Collections_Generic_Dictionary_int__bool___Clear(
      klass,
      (const MethodInfo_3F894D0 *)Method_System_Collections_Generic_Dictionary_int__bool__Clear__);
  }
}


void SoundManager__SetBgmMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_59701C8 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701C8 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__SetMasterVolume(volume, 0);
}


void SoundManager__SetSeMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_59701C9 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701C9 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__SetMasterVolume(volume, (const MethodInfo *)v4);
}


void SoundManager__SetUseEfVoiceCpk(int32_t svtId, bool useEf, const MethodInfo *method)
{
  __int64 v5; // x1
  Il2CppObject *Instance; // x21
  System_Collections_Generic_Dictionary_int__bool__o *klass; // x0
  __int64 v8; // x1
  bool v9; // w21
  bool v10; // w23
  const MethodInfo *v11; // x3
  bool value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970210 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970210 = 1;
  }
  value = 0;
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
  if ( !UnityEngine_Object__op_Equality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !klass )
      goto LABEL_14;
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)klass[1].klass;
    if ( !klass )
      goto LABEL_14;
    v9 = System_Collections_Generic_Dictionary_int__bool___TryGetValue(
           klass,
           svtId,
           &value,
           (const MethodInfo_3F8ACC4 *)Method_System_Collections_Generic_Dictionary_int__bool__TryGetValue__);
    v10 = value == useEf;
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !klass )
      goto LABEL_14;
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)klass[1].klass;
    if ( !klass )
      goto LABEL_14;
    System_Collections_Generic_Dictionary_int__bool___set_Item(
      klass,
      svtId,
      useEf,
      (const MethodInfo_3F89330 *)Method_System_Collections_Generic_Dictionary_int__bool__set_Item__);
    if ( v9 && v10 )
      return;
    klass = (System_Collections_Generic_Dictionary_int__bool__o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !klass )
LABEL_14:
      sub_2213CDC(klass, v8);
    SoundManager__RebindEfVoiceCueSheetsInternal((SoundManager_o *)klass, svtId, 1, v11);
  }
}


void SoundManager__SetVoiceMasterVolume(float volume, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_59701CA & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701CA = 1;
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

  if ( (byte_59701C2 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    sub_2213A60(&System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    sub_2213A60(&Method_UnityEngine_GameObject_AddComponent_CriAtom___);
    sub_2213A60(&Method_UnityEngine_GameObject_GetComponent_CriAtom___);
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    sub_2213A60(&StringLiteral_1089/*".acb.bytes"*/);
    sub_2213A60(&StringLiteral_6675/*"FGO.acf"*/);
    sub_2213A60(&StringLiteral_1092/*".awb.bytes"*/);
    byte_59701C2 = 1;
  }
  gameObject = (char *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)gameObject,
                       (const MethodInfo_38B6F40 *)Method_UnityEngine_GameObject_GetComponent_CriAtom___);
  this->fields.criware = (struct CriAtom_o *)Component_object;
  p_criware = &this->fields.criware;
  sub_2213A04(
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
    v14 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v14,
      (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader___ctor__);
    this->fields.SoundCpkLoader = (struct System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__o *)v14;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.SoundCpkLoader,
      (int32_t)v14,
      v15,
      v16,
      v17,
      v18,
      v19,
      v20);
    v21 = (System_Collections_Generic_Dictionary_object__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_string__CriFsBinder__TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v21,
      (const MethodInfo_3FFD280 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder___ctor__);
    this->fields.SoundBinders = (struct System_Collections_Generic_Dictionary_string__CriFsBinder__o *)v21;
    sub_2213A04(
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
              (const MethodInfo_38B6EB0 *)Method_UnityEngine_GameObject_AddComponent_CriAtom___);
      *p_criware = (struct CriAtom_o *)v29;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&this->fields.criware, (int32_t)v29, v30, v31, v32, v33, v34, v35);
      gameObject = (char *)*p_criware;
      if ( *p_criware )
      {
        v42 = StringLiteral_6675/*"FGO.acf"*/;
        *((_QWORD *)gameObject + 6) = StringLiteral_6675/*"FGO.acf"*/;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(gameObject + 48), v42, v36, v37, v38, v39, v40, v41);
        v44 = SoundManager_TypeInfo;
        if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v43);
          v44 = SoundManager_TypeInfo;
        }
        RESIDENT_RESOURCE_SOUND_NAME = v44->static_fields->RESIDENT_RESOURCE_SOUND_NAME;
        v46 = System_String__Concat_75651716(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1089/*".acb.bytes"*/, 0);
        v47 = System_String__Concat_75651716(RESIDENT_RESOURCE_SOUND_NAME, (System_String_o *)StringLiteral_1092/*".awb.bytes"*/, 0);
        gameObject = (char *)CriAtom__AddCueSheet(RESIDENT_RESOURCE_SOUND_NAME, v46, v47, 0, 0);
        if ( *p_criware )
        {
          (*p_criware)->fields.dontDestroyOnLoad = 1;
          return;
        }
      }
    }
LABEL_16:
    sub_2213CDC(gameObject, v4);
  }
}


bool SoundManager__SubAssetNameCounter(SoundManager_o *this, System_String_o *name, const MethodInfo *method)
{
  struct System_Collections_Generic_Dictionary_string__int__o *assetNameCounter; // x0
  struct System_Collections_Generic_Dictionary_string__int__o *v6; // x21
  int32_t Item; // w0

  if ( (byte_597020D & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
    byte_597020D = 1;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  assetNameCounter = (struct System_Collections_Generic_Dictionary_string__int__o *)System_Collections_Generic_Dictionary_object__int___ContainsKey(
                                                                                      (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
                                                                                      (Il2CppObject *)name,
                                                                                      (const MethodInfo_3FF4290 *)Method_System_Collections_Generic_Dictionary_string__int__ContainsKey__);
  if ( ((unsigned __int8)assetNameCounter & 1) == 0 )
    return 0;
  v6 = this->fields.assetNameCounter;
  if ( !v6 )
    goto LABEL_11;
  Item = System_Collections_Generic_Dictionary_object__int___get_Item(
           (System_Collections_Generic_Dictionary_object__int__o *)this->fields.assetNameCounter,
           (Il2CppObject *)name,
           (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__);
  System_Collections_Generic_Dictionary_object__int___set_Item(
    (System_Collections_Generic_Dictionary_object__int__o *)v6,
    (Il2CppObject *)name,
    Item - 1,
    (const MethodInfo_3FF4088 *)Method_System_Collections_Generic_Dictionary_string__int__set_Item__);
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
    goto LABEL_11;
  if ( System_Collections_Generic_Dictionary_object__int___get_Item(
         (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
         (Il2CppObject *)name,
         (const MethodInfo_3FF401C *)Method_System_Collections_Generic_Dictionary_string__int__get_Item__) )
  {
    return 0;
  }
  assetNameCounter = this->fields.assetNameCounter;
  if ( !assetNameCounter )
LABEL_11:
    sub_2213CDC(assetNameCounter, name);
  System_Collections_Generic_Dictionary_object__int___Remove(
    (System_Collections_Generic_Dictionary_object__int__o *)assetNameCounter,
    (Il2CppObject *)name,
    (const MethodInfo_3FF5584 *)Method_System_Collections_Generic_Dictionary_string__int__Remove__);
  return 1;
}


bool SoundManager__TryExecuteReservedRebindCueSheet(
        SoundManager_o *this,
        System_String_o *cueSheetName,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  bool IsNullOrEmpty; // w8
  bool result; // w0
  char *pendingRebindCueSheets; // x0
  const MethodInfo *v11; // x2
  const MethodInfo *v12; // x3
  MissionNaviTransitionBoardItem_o *v13; // x20
  System_Delegate_o *v14; // x0
  System_String_o *v15; // x2
  System_String_o *v16; // x3
  int32_t v17; // w4
  int32_t v18; // w5
  bool v19; // w6
  bool v20; // w7
  System_Action_c *v21; // x1
  int32_t v22; // w23
  SoundManager_CpkLoader_o *v23; // x22
  int32_t value; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_5970214 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&SoundManager_CpkLoader_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Remove___91606000);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
    byte_5970214 = 1;
  }
  value = 0;
  IsNullOrEmpty = System_String__IsNullOrEmpty(cueSheetName, 0);
  result = 0;
  if ( !IsNullOrEmpty )
  {
    pendingRebindCueSheets = (char *)this->fields.pendingRebindCueSheets;
    if ( !pendingRebindCueSheets )
      goto LABEL_29;
    if ( !System_Collections_Generic_Dictionary_object__Int32Enum___Remove_67079444(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)pendingRebindCueSheets,
            (Il2CppObject *)cueSheetName,
            &value,
            (const MethodInfo_3FF8D14 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Remove___91606000)
      || !SoundManager__ExistsAssetNameCounter(this, cueSheetName, v11) )
    {
      return 0;
    }
    pendingRebindCueSheets = (char *)this->fields.SoundCpkLoader;
    if ( !pendingRebindCueSheets )
      goto LABEL_29;
    if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
           (System_Collections_Generic_Dictionary_object__object__o *)pendingRebindCueSheets,
           (Il2CppObject *)cueSheetName,
           (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__ContainsKey__) )
    {
      SoundManager__ReserveRebindCueSheet(this, cueSheetName, value, v12);
      if ( callback )
      {
        pendingRebindCueSheets = (char *)this->fields.SoundCpkLoader;
        if ( pendingRebindCueSheets )
        {
          pendingRebindCueSheets = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                             (System_Collections_Generic_Dictionary_object__object__o *)pendingRebindCueSheets,
                                             (Il2CppObject *)cueSheetName,
                                             (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__get_Item__);
          if ( pendingRebindCueSheets )
          {
            v13 = (MissionNaviTransitionBoardItem_o *)(pendingRebindCueSheets + 24);
            v14 = System_Delegate__Combine(
                    *((System_Delegate_o **)pendingRebindCueSheets + 3),
                    (System_Delegate_o *)callback,
                    0);
            if ( v14 )
            {
              v21 = System_Action_TypeInfo;
              if ( (System_Action_c *)v14->klass != System_Action_TypeInfo
                || (v13->klass = (MissionNaviTransitionBoardItem_c *)v14, (System_Action_c *)v14->klass != v21) )
              {
                sub_221405C(v14, v21, v15, v16);
                return 0;
              }
            }
            else
            {
              v13->klass = 0;
            }
            sub_2213A04(v13, (int32_t)v14, v15, v16, v17, v18, v19, v20);
            return 1;
          }
        }
LABEL_29:
        sub_2213CDC(pendingRebindCueSheets, v7);
      }
    }
    else
    {
      CriAtom__RemoveCueSheet(cueSheetName, 0);
      pendingRebindCueSheets = (char *)this->fields.SoundBinders;
      if ( !pendingRebindCueSheets )
        goto LABEL_29;
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             (System_Collections_Generic_Dictionary_object__object__o *)pendingRebindCueSheets,
             (Il2CppObject *)cueSheetName,
             (const MethodInfo_3FFDE04 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__ContainsKey__) )
      {
        pendingRebindCueSheets = (char *)this->fields.SoundBinders;
        if ( !pendingRebindCueSheets )
          goto LABEL_29;
        pendingRebindCueSheets = (char *)System_Collections_Generic_Dictionary_object__object___get_Item(
                                           (System_Collections_Generic_Dictionary_object__object__o *)pendingRebindCueSheets,
                                           (Il2CppObject *)cueSheetName,
                                           (const MethodInfo_3FFDB90 *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__get_Item__);
        if ( !pendingRebindCueSheets )
          goto LABEL_29;
        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)pendingRebindCueSheets + 392LL))(
          pendingRebindCueSheets,
          *(_QWORD *)(*(_QWORD *)pendingRebindCueSheets + 400LL));
        pendingRebindCueSheets = (char *)this->fields.SoundBinders;
        if ( !pendingRebindCueSheets )
          goto LABEL_29;
        System_Collections_Generic_Dictionary_object__object___Remove(
          (System_Collections_Generic_Dictionary_object__object__o *)pendingRebindCueSheets,
          (Il2CppObject *)cueSheetName,
          (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__Remove__);
      }
      v22 = value;
      v23 = (SoundManager_CpkLoader_o *)sub_2213CCC(SoundManager_CpkLoader_TypeInfo);
      SoundManager_CpkLoader___ctor(v23, this, cueSheetName, callback, v22, 0);
      if ( !v23 )
        goto LABEL_29;
      SoundManager_CpkLoader__Start(v23, 0);
    }
    return 1;
  }
  return result;
}


void SoundManager__changeVolumeSe(System_String_o *name, float volume, float fadeTime, const MethodInfo *method)
{
  if ( (byte_59701F7 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F7 = 1;
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

  if ( (byte_5970204 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970204 = 1;
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
  if ( (byte_5970220 & 1) == 0 )
  {
    path = (System_String_o *)sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970220 = 1;
  }
  if ( isCheck )
  {
    if ( !v6 )
      goto LABEL_8;
    v6 = System_String__Replace(v6, 0x2Fu, 0x5Fu, 0);
  }
  path = (System_String_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !path )
LABEL_8:
    sub_2213CDC(path, name);
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

  if ( (byte_5970219 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970219 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  SoundManager__DownloadAudioAssetStorage((SoundManager_o *)Instance, name, callback, v8, v9);
}


void SoundManager__downloadAudioAssetStorage_48517264(
        System_String_array *nameList,
        System_Action_o *callback,
        int32_t tp,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  int32_t v8; // w3
  const MethodInfo *v9; // x4

  if ( (byte_597021B & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_597021B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v7);
  SoundManager__DownloadAudioAssetStorage_48517364((SoundManager_o *)Instance, nameList, callback, v8, v9);
}


void SoundManager__fadeoutBgm(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_59701D5 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D5 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__FadeoutBgm(fadeoutTime, 0, 0);
}


void SoundManager__fadeoutBgm_48507100(float fadeoutTime, System_Action_o *callback, const MethodInfo *method)
{
  if ( (byte_59701D6 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D6 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__FadeoutBgm(fadeoutTime, callback, 0);
}


void SoundManager__fadeoutJingle(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1

  if ( (byte_59701DF & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DF = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v2);
  BgmManager__FadeoutJingle(fadeoutTime, 0);
}


System_String_o *SoundManager__getAssetName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19

  v2 = name;
  if ( (byte_5970206 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_17690/*"ba"*/);
    name = (System_String_o *)sub_2213A60(&StringLiteral_3205/*"Battle"*/);
    byte_5970206 = 1;
  }
  if ( !v2 )
    sub_2213CDC(name, method);
  if ( System_String__StartsWith(v2, (System_String_o *)StringLiteral_17690/*"ba"*/, 0) )
    return (System_String_o *)StringLiteral_3205/*"Battle"*/;
  else
    return 0;
}


System_String_o *SoundManager__getBgmName(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_59701D8 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D8 = 1;
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

  if ( (byte_5970207 & 1) == 0 )
  {
    sub_2213A60(&char___TypeInfo);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    sub_2213A60(&StringLiteral_2635/*"B06"*/);
    sub_2213A60(&StringLiteral_9738/*"NP_"*/);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    sub_2213A60(&StringLiteral_2629/*"B05"*/);
    sub_2213A60(&StringLiteral_2769/*"B81"*/);
    sub_2213A60(&StringLiteral_2622/*"B"*/);
    sub_2213A60(&StringLiteral_2767/*"B80"*/);
    sub_2213A60(&StringLiteral_2641/*"B07"*/);
    sub_2213A60(&StringLiteral_2771/*"B82"*/);
    byte_5970207 = 1;
  }
  v3 = sub_2213B20(char___TypeInfo, 1);
  if ( !v3 )
    goto LABEL_26;
  v4 = v3;
  if ( !*(_DWORD *)(v3 + 24) )
    sub_2213CE4(v3);
  *(_WORD *)(v3 + 32) = 95;
  if ( !name )
    goto LABEL_26;
  v5 = System_String__Split_75706100(name, (System_Char_array *)v3, 1, 0);
  v3 = System_String__StartsWith(name, (System_String_o *)StringLiteral_9738/*"NP_"*/, 0);
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
    sub_2213CDC(v3, v4);
  v6 = v5->m_Items[0];
  if ( !System_String__StartsWith(v5->m_Items[2], (System_String_o *)StringLiteral_2622/*"B"*/, 0) )
  {
    v7 = &StringLiteral_4596/*"ChrVoice_"*/;
    return System_String__Concat_75651716((System_String_o *)*v7, v6, 0);
  }
  if ( v8->fields._stringLength != 4
    || (v9 = System_String__Substring_75702848(v8, 0, 3, 0),
        !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2629/*"B05"*/, 0))
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2635/*"B06"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2641/*"B07"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2767/*"B80"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2769/*"B81"*/, 0)
    && !System_String__op_Equality(v9, (System_String_o *)StringLiteral_2771/*"B82"*/, 0) )
  {
    v7 = &StringLiteral_13301/*"Servants_"*/;
    return System_String__Concat_75651716((System_String_o *)*v7, v6, 0);
  }
LABEL_10:
  v7 = &StringLiteral_9911/*"NoblePhantasm_"*/;
  return System_String__Concat_75651716((System_String_o *)*v7, v6, 0);
}


System_String_o *SoundManager__getCharaVoiceFileName(System_String_o *name, const MethodInfo *method)
{
  System_String_o *v2; // x19
  int32_t v3; // w0

  v2 = name;
  if ( (byte_5970208 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_9738/*"NP_"*/);
    name = (System_String_o *)sub_2213A60(&StringLiteral_16746/*"_"*/);
    byte_5970208 = 1;
  }
  if ( !v2 )
    sub_2213CDC(name, method);
  if ( !System_String__StartsWith(v2, (System_String_o *)StringLiteral_9738/*"NP_"*/, 0) )
  {
    v3 = System_String__IndexOf_75715196(v2, (System_String_o *)StringLiteral_16746/*"_"*/, 0);
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

  if ( (byte_5970221 & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_5970221 = 1;
  }
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v1);
  if ( !byte_596F73A )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F73A = 1;
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

  if ( (byte_5970205 & 1) == 0 )
  {
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1099/*".cpk.bytes"*/);
    sub_2213A60(&StringLiteral_2588/*"Audio/Bgm/"*/);
    sub_2213A60(&StringLiteral_2586/*"Audio/"*/);
    byte_5970205 = 1;
  }
  v3 = sub_2213B20(string___TypeInfo, 2);
  v4 = System_String__Concat_75694928(
         (System_String_o *)StringLiteral_2586/*"Audio/"*/,
         cueName,
         (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
         0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  if ( !*(_DWORD *)(v3 + 24)
    || (*(_QWORD *)(v3 + 32) = v4,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)v4, v6, v7, v8, v9, v10, v11),
        v4 = System_String__Concat_75694928(
               (System_String_o *)StringLiteral_2588/*"Audio/Bgm/"*/,
               cueName,
               (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
               0),
        (*(_DWORD *)(v3 + 24) & 0xFFFFFFFE) == 0) )
  {
    sub_2213CE4(v4);
  }
  *(_QWORD *)(v3 + 40) = v4;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 40), (int32_t)v4, v12, v13, v14, v15, v16, v17);
  return (System_String_array *)v3;
}


float SoundManager__getPitchSe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_59701F9 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F9 = 1;
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

  if ( (byte_59701BF & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701BF = 1;
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

  if ( (byte_59701BD & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_59701BD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  return (OverwriteAssetSoundName_o *)Instance[6].klass;
}


void SoundManager__initialize(const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  const MethodInfo *v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  SeManager_c *v5; // x0

  if ( (byte_59701C1 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&StringLiteral_5580/*"DspBusSetting_0"*/);
    byte_59701C1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v2);
  SoundManager__Setup((SoundManager_o *)Instance, v2);
  CriAtom__AttachDspBusSetting((System_String_o *)StringLiteral_5580/*"DspBusSetting_0"*/, 0);
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

  if ( (byte_59701C3 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701C3 = 1;
  }
  v2 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v1);
  SeManager__InitializeAssetStorage((const MethodInfo *)v2);
}


bool SoundManager__isBusySe(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_59701E1 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E1 = 1;
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

  if ( (byte_59701E2 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59701E2 = 1;
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
  if ( (byte_59701CE & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701CE = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return BgmManager__isLoading(name, 0);
}


bool SoundManager__isPlayBgm(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_59701CD & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701CD = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  return BgmManager__IsPlayBgm(name, 0);
}


bool SoundManager__isPlayJingle(System_String_o *name, const MethodInfo *method)
{
  if ( (byte_59701D9 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D9 = 1;
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

  if ( (byte_5970217 & 1) == 0 )
  {
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_5970217 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    sub_2213CDC(0, v8);
  SoundManager__LoadAudioAssetStorage((SoundManager_o *)Instance, name, callback, tp, v9);
}


void SoundManager__loadSe(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  SeManager_c *v4; // x0

  if ( (byte_59701CB & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701CB = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  SeManager__LoadSe((System_String_o *)v4, callbackFunc, method);
}


void SoundManager__playBgm(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_59701CF & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701CF = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v3->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_48506184(
        System_String_o *name,
        float fadeTime,
        System_Action_o *onLoadFinishCallback,
        const MethodInfo *method)
{
  BgmManager_c *v7; // x0

  if ( (byte_59701D0 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D0 = 1;
  }
  v7 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, onLoadFinishCallback);
    v7 = BgmManager_TypeInfo;
  }
  BgmManager__PlayBgm(name, v7->static_fields->DEFAULT_VOLUME, fadeTime, 0, onLoadFinishCallback, 0);
}


void SoundManager__playBgm_48506764(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_59701D3 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D3 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayBgm(name, volume, 0.0, 0, 0, 0);
}


void SoundManager__playBgm_48506880(System_String_o *name, float volume, float fadeinTime, const MethodInfo *method)
{
  if ( (byte_59701D4 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D4 = 1;
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

  if ( (byte_5970209 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970209 = 1;
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
  return SeManager__PlayVoice_48477660(
           CharaVoiceAssetName,
           v10,
           v11->static_fields->DEFAULT_VOLUME,
           0,
           ignorePreDelay,
           v9);
}


// local variable allocation has failed, the output may be wrong!
SePlayer_o *SoundManager__playCharaVoice_48513164(
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

  if ( (byte_597020A & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597020A = 1;
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
  return SeManager__PlayVoice_48477660(CharaVoiceAssetName, v12, volume, 0, ignorePreDelay, v11);
}


void SoundManager__playJingle(System_String_o *name, const MethodInfo *method)
{
  BgmManager_c *v3; // x0

  if ( (byte_59701DA & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DA = 1;
  }
  v3 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
    v3 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle_48162628(name, v3->static_fields->DEFAULT_VOLUME, 0);
}


void SoundManager__playJingle_48507564(System_String_o *name, float volume, const MethodInfo *method)
{
  if ( (byte_59701DB & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DB = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, method);
  BgmManager__PlayJingle_48162628(name, volume, 0);
}


void SoundManager__playJingle_48507668(System_String_o *name, System_Action_o *callbackFunc, const MethodInfo *method)
{
  BgmManager_c *v5; // x0

  if ( (byte_59701DC & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DC = 1;
  }
  v5 = BgmManager_TypeInfo;
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, callbackFunc);
    v5 = BgmManager_TypeInfo;
  }
  BgmManager__PlayJingle(name, v5->static_fields->DEFAULT_VOLUME, callbackFunc, 0);
}


void SoundManager__playJingle_48507784(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  if ( (byte_59701DD & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DD = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, callbackFunc);
  BgmManager__PlayJingle(name, volume, callbackFunc, 0);
}


SePlayer_o *SoundManager__playSe(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x4
  SeManager_c *v4; // x0

  if ( (byte_59701E3 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E3 = 1;
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

  if ( (byte_59701E4 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E4 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v2);
}


SePlayer_o *SoundManager__playSeContinue_48508660(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_59701E5 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E5 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_48401556(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 1, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop(System_String_o *name, const MethodInfo *method)
{
  const MethodInfo *v2; // x2
  SeManager_c *v4; // x0

  if ( (byte_59701EF & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701EF = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
    v4 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop(name, v4->static_fields->DEFAULT_VOLUME, 0.0, 0, v2);
}


SePlayer_o *SoundManager__playSeLoop_48510052(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_59701F0 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F0 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySeLoop(name, volume, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_48510160(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x2

  if ( (byte_59701F1 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F1 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySeLoop(name, volume, fadeinTime, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_48510272(
        System_String_o *assetName,
        System_String_o *name,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  SeManager_c *v6; // x0

  if ( (byte_59701F2 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F2 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySeLoop_48476908(assetName, name, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, v3);
}


SePlayer_o *SoundManager__playSeLoop_48510392(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_59701F3 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F3 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
  return SeManager__PlaySeLoop_48476908(assetName, name, volume, 0.0, 0, v4);
}


SePlayer_o *SoundManager__playSeLoop_48510516(
        System_String_o *assetName,
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x3

  if ( (byte_59701F4 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F4 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, name);
  return SeManager__PlaySeLoop_48476908(assetName, name, volume, fadeinTime, 0, v5);
}


SePlayer_o *SoundManager__playSe_48508788(System_String_o *name, float volume, const MethodInfo *method)
{
  const MethodInfo *v3; // x4

  if ( (byte_59701E6 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E6 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySe(name, volume, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48508904(
        System_String_o *name,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_59701E7 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E7 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  return SeManager__PlaySe(name, volume, fadeinTime, 0, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_48509024(
        System_String_o *name,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x4
  SeManager_c *v6; // x0

  if ( (byte_59701E8 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E8 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe(name, v6->static_fields->DEFAULT_VOLUME, 0.0, callbackFunc, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48509148(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  if ( (byte_59701E9 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E9 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlaySe(name, volume, 0.0, callbackFunc, 0, 0, v4);
}


SePlayer_o *SoundManager__playSe_48509276(
        System_String_o *name,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x4

  if ( (byte_59701EA & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701EA = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlaySe(name, volume, fadeinTime, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48509408(
        System_String_o *assetName,
        System_String_o *objectName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x5
  SeManager_c *v6; // x0

  if ( (byte_59701EB & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701EB = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
    v6 = SeManager_TypeInfo;
  }
  return SeManager__PlaySe_48401556(assetName, objectName, v6->static_fields->DEFAULT_VOLUME, 0.0, 0, 0, 0, v3);
}


SePlayer_o *SoundManager__playSe_48509536(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_59701EC & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701EC = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48401556(assetName, objectName, volume, fadeinTime, 0, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48509672(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5

  if ( (byte_59701ED & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701ED = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48401556(assetName, objectName, volume, 0.0, callbackFunc, 0, 0, v5);
}


SePlayer_o *SoundManager__playSe_48509808(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        float fadeinTime,
        System_Action_o *callbackFunc,
        const MethodInfo *method)
{
  const MethodInfo *v6; // x5

  if ( (byte_59701EE & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701EE = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlaySe_48401556(assetName, objectName, volume, fadeinTime, callbackFunc, 0, 0, v6);
}


void SoundManager__playSystemSe(int32_t kind, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_59701E0 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701E0 = 1;
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

  if ( (byte_59701FB & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FB = 1;
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
SePlayer_o *SoundManager__playVoice_48511320(
        System_String_o *name,
        float volume,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x3

  if ( (byte_59701FC & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FC = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, ignorePreDelay);
  return SeManager__PlayVoice(name, volume, 0, ignorePreDelay, v4);
}


SePlayer_o *SoundManager__playVoice_48511440(
        System_String_o *name,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  SeManager_c *v7; // x0

  if ( (byte_59701FD & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FD = 1;
  }
  v7 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
    v7 = SeManager_TypeInfo;
  }
  return SeManager__PlayVoice(name, v7->static_fields->DEFAULT_VOLUME, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48511560(
        System_String_o *name,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_59701FE & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FE = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, callbackFunc);
  return SeManager__PlayVoice(name, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48511684(
        System_String_o *assetName,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_59701FF & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FF = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlayVoice_48477660(assetName, objectName, volume, callbackFunc, ignorePreDelay, method);
}


SePlayer_o *SoundManager__playVoice_48511824(
        AssetData_o *assetData,
        System_String_o *objectName,
        float volume,
        System_Action_o *callbackFunc,
        bool ignorePreDelay,
        const MethodInfo *method)
{
  if ( (byte_5970200 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970200 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  return SeManager__PlayVoice_48477912(assetData, objectName, volume, callbackFunc, ignorePreDelay, method);
}


void SoundManager__reboot(const MethodInfo *method)
{
  __int64 v1; // x1
  SoundManager_c *v2; // x0
  SoundManager_o *Instance; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x0

  if ( (byte_59701C0 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Clear__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_59701C0 = 1;
  }
  v2 = SoundManager_TypeInfo;
  if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v1);
  SoundManager__stopAll((const MethodInfo *)v2);
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (SoundManager__ReleaseAllAudioAssetStorage(Instance, v4),
        (Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (Instance = (SoundManager_o *)Instance->fields.SoundCpkLoader) == 0
    || (System_Collections_Generic_Dictionary_object__object___Clear(
          (System_Collections_Generic_Dictionary_object__object__o *)Instance,
          (const MethodInfo_3FFDD98 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Clear__),
        (Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__)) == 0)
    || (Instance = (SoundManager_o *)Instance->fields.pendingRebindCueSheets) == 0 )
  {
    sub_2213CDC(Instance, v4);
  }
  System_Collections_Generic_Dictionary_object__Int32Enum___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)Instance,
    (const MethodInfo_3FF76A0 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Clear__);
  SoundManager__ResetUseEfVoiceBySvtIdDictionary(v5);
}


void SoundManager__releaseAudioAssetStorage(System_String_o *name, const MethodInfo *method)
{
  __int64 v3; // x1
  Il2CppObject *Instance; // x20
  SoundManager_o *v5; // x0
  __int64 v6; // x1
  UnityEngine_Object_o *initializer; // x20
  const MethodInfo *v8; // x2

  if ( (byte_597021D & 1) == 0 )
  {
    sub_2213A60(&UnityEngine_Object_TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_597021D = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v3);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Instance, 0, 0) )
  {
    v5 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( !v5 )
      goto LABEL_13;
    initializer = (UnityEngine_Object_o *)v5->fields.initializer;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v6);
    if ( UnityEngine_Object__op_Inequality(initializer, 0, 0) )
    {
      v5 = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
      if ( v5 )
      {
        SoundManager__ReleaseAudioAssetStorage(v5, name, v8);
        return;
      }
LABEL_13:
      sub_2213CDC(v5, v6);
    }
  }
}


void SoundManager__releaseSe(System_String_o *name, const MethodInfo *method)
{
  SeManager_c *v2; // x0

  if ( (byte_59701CC & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701CC = 1;
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

  if ( (byte_59701C5 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701C5 = 1;
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
  if ( (byte_59701F8 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F8 = 1;
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

  if ( (byte_59701C6 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701C6 = 1;
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

  if ( (byte_59701D7 & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701D7 = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__StopBgm(0, 0.0, 0, 0);
}


void SoundManager__stopJingle(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_59701DE & 1) == 0 )
  {
    sub_2213A60(&BgmManager_TypeInfo);
    byte_59701DE = 1;
  }
  if ( !*(&BgmManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BgmManager_TypeInfo, v1);
  BgmManager__StopJingle(0);
}


void SoundManager__stopSe(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_59701F5 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F5 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__StopSeAll(fadeoutTime, (const MethodInfo *)v4);
}


void SoundManager__stopSe_48510736(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  if ( (byte_59701F6 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701F6 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, method);
  SeManager__StopSe_48403360(name, fadeoutTime, method);
}


void SoundManager__stopSystemSe(const MethodInfo *method)
{
  __int64 v1; // x1
  SeManager_c *v2; // x0

  if ( (byte_59701FA & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_59701FA = 1;
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
  if ( (byte_5970201 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970201 = 1;
  }
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, objectName);
  SeManager__StopSe_48478460(assetName, objectName, fadeoutTime, method);
}


void SoundManager__stopVoiceAll(float fadeoutTime, const MethodInfo *method)
{
  __int64 v2; // x1
  SeManager_c *v4; // x0

  if ( (byte_5970203 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    byte_5970203 = 1;
  }
  v4 = SeManager_TypeInfo;
  if ( !*(&SeManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo, v2);
  SeManager__StopVoiceAll(fadeoutTime, (const MethodInfo *)v4);
}


void SoundManager__stopVoice_48512080(System_String_o *name, float fadeoutTime, const MethodInfo *method)
{
  System_String_o *CharaVoiceAssetName; // x20
  const MethodInfo *v6; // x1
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  System_String_o *CharaVoiceFileName; // x19
  SeManager_c *v10; // x0

  if ( (byte_5970202 & 1) == 0 )
  {
    sub_2213A60(&SeManager_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970202 = 1;
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
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields.manager, (int32_t)manager, v11, v12, v13, v14, v15, v16);
  v10->fields.name = name;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v10->fields, (int32_t)name, v17, v18, v19, v20, v21, v22);
  v10->fields.callback = callback;
  v10 = (SoundManager_CpkLoader_o *)((char *)v10 + 24);
  sub_2213A04((MissionNaviTransitionBoardItem_o *)v10, (int32_t)callback, v23, v24, v25, v26, v27, v28);
  LODWORD(v10->fields.name) = cueType;
}


void SoundManager_CpkLoader__EndLoadCallback(
        SoundManager_CpkLoader_o *this,
        AssetData_o *data,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_resolvedCpkNameForLoad; // x0
  System_String_o *resolvedCpkNameForLoad; // t1
  const MethodInfo *v11; // x3
  struct System_Collections_IEnumerator_o *v12; // x0
  struct System_Collections_IEnumerator_o **p_loadCR; // x19
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  __int64 v20; // x1
  UnityEngine_MonoBehaviour_o *v21; // x0

  resolvedCpkNameForLoad = this->fields.resolvedCpkNameForLoad;
  p_resolvedCpkNameForLoad = (MissionNaviTransitionBoardItem_o *)&this->fields.resolvedCpkNameForLoad;
  p_resolvedCpkNameForLoad->klass = 0;
  sub_2213A04(p_resolvedCpkNameForLoad, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
  v12 = SoundManager_CpkLoader__SetupCpk(this, this->fields.name, resolvedCpkNameForLoad, v11);
  this->fields.loadCR = v12;
  p_loadCR = &this->fields.loadCR;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)p_loadCR, (int32_t)v12, v14, v15, v16, v17, v18, v19);
  v21 = (UnityEngine_MonoBehaviour_o *)*(p_loadCR - 2);
  if ( !v21 )
    sub_2213CDC(0, v20);
  UnityEngine_MonoBehaviour__StartCoroutine_83444756(v21, *p_loadCR, 0);
}


System_Collections_IEnumerator_o *SoundManager_CpkLoader__SetupCpk(
        SoundManager_CpkLoader_o *this,
        System_String_o *cpkName,
        System_String_o *preferredCpkName,
        const MethodInfo *method)
{
  __int64 v7; // x22
  System_String_o *v8; // x2
  System_String_o *v9; // x3
  int32_t v10; // w4
  int32_t v11; // w5
  bool v12; // w6
  bool v13; // w7
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

  if ( (byte_5970231 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader__SetupCpk_d__14_TypeInfo);
    byte_5970231 = 1;
  }
  v7 = sub_2213CCC(SoundManager_CpkLoader__SetupCpk_d__14_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  *(_DWORD *)(v7 + 16) = 0;
  *(_QWORD *)(v7 + 32) = this;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 32), (int32_t)this, v8, v9, v10, v11, v12, v13);
  *(_QWORD *)(v7 + 40) = cpkName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 40), (int32_t)cpkName, v14, v15, v16, v17, v18, v19);
  *(_QWORD *)(v7 + 48) = preferredCpkName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 48), (int32_t)preferredCpkName, v20, v21, v22, v23, v24, v25);
  return (System_Collections_IEnumerator_o *)v7;
}


void SoundManager_CpkLoader__Start(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  SoundManager_CpkLoader_o *v2; // x19
  struct SoundManager_o *manager; // x8
  System_String_o *v4; // x2
  System_String_o *v5; // x3
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  const MethodInfo *v10; // x1

  v2 = this;
  if ( (byte_597022D & 1) == 0 )
  {
    this = (SoundManager_CpkLoader_o *)sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
    byte_597022D = 1;
  }
  manager = v2->fields.manager;
  if ( !manager || (this = (SoundManager_CpkLoader_o *)manager->fields.SoundCpkLoader) == 0 )
    sub_2213CDC(this, method);
  System_Collections_Generic_Dictionary_object__object___set_Item(
    (System_Collections_Generic_Dictionary_object__object__o *)this,
    (Il2CppObject *)v2->fields.name,
    (Il2CppObject *)v2,
    (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__set_Item__);
  v2->fields.resolvedCpkNameForLoad = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v2->fields.resolvedCpkNameForLoad, 0, v4, v5, v6, v7, v8, v9);
  SoundManager_CpkLoader__downloadAssetStorage(v2, v10);
}


bool SoundManager_CpkLoader__TryGetAssetPath(
        SoundManager_CpkLoader_o *this,
        System_String_o *cpkName,
        System_String_o *preferredCpkName,
        System_String_o **cpkAssetPath,
        System_String_o **targetCpkName,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  const MethodInfo *v18; // x1
  __int64 v19; // x0
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  System_String_array *v27; // x23
  SoundManager_CpkLoader_o *v28; // x0
  const MethodInfo *v29; // x4
  SoundManager_CpkLoader_o *PreferredCpkNames; // x0
  const MethodInfo *v32; // x4

  if ( (byte_5970230 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    byte_5970230 = 1;
  }
  *cpkAssetPath = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)cpkAssetPath,
    0,
    preferredCpkName,
    (System_String_o *)cpkAssetPath,
    (int32_t)targetCpkName,
    (int32_t)method,
    v6,
    v7);
  *targetCpkName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)targetCpkName, 0, v12, v13, v14, v15, v16, v17);
  if ( !System_String__IsNullOrEmpty(preferredCpkName, 0) )
  {
    v19 = sub_2213B20(string___TypeInfo, 1);
    if ( !v19 )
      sub_2213CDC(0, v20);
    v27 = (System_String_array *)v19;
    if ( !*(_DWORD *)(v19 + 24) )
      sub_2213CE4(v19);
    *(_QWORD *)(v19 + 32) = preferredCpkName;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)(v19 + 32), (int32_t)preferredCpkName, v21, v22, v23, v24, v25, v26);
    if ( SoundManager_CpkLoader__TryGetPreferredCpkAssetPath(v28, v27, cpkAssetPath, targetCpkName, v29) )
      return 1;
  }
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v18);
  PreferredCpkNames = (SoundManager_CpkLoader_o *)SoundManager_CpkLoader_EfCpkNameHelper__GetPreferredCpkNames(
                                                    cpkName,
                                                    v18);
  return SoundManager_CpkLoader__TryGetPreferredCpkAssetPath(
           PreferredCpkNames,
           (System_String_array *)PreferredCpkNames,
           cpkAssetPath,
           targetCpkName,
           v32);
}


bool SoundManager_CpkLoader__TryGetPreferredCpkAssetPath(
        SoundManager_CpkLoader_o *this,
        System_String_array *cpkNames,
        System_String_o **cpkAssetPath,
        System_String_o **targetCpkName,
        const MethodInfo *method)
{
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  System_String_array *v17; // x0
  __int64 v18; // x1
  MethodInfo *v19; // x2
  il2cpp_array_size_t max_length; // x8
  bool v21; // w25
  unsigned __int64 v22; // x26
  System_String_o *v23; // x22
  il2cpp_array_size_t v24; // x8
  System_String_array *v25; // x23
  unsigned __int64 v26; // x27
  System_String_o **m_Items; // x28
  System_String_o *v28; // x24
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7

  *cpkAssetPath = 0;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)cpkAssetPath,
    0,
    (System_String_o *)cpkAssetPath,
    (System_String_o *)targetCpkName,
    (int32_t)method,
    v5,
    v6,
    v7);
  *targetCpkName = 0;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)targetCpkName, 0, v11, v12, v13, v14, v15, v16);
  if ( !cpkNames )
LABEL_16:
    sub_2213CDC(v17, v18);
  max_length = cpkNames->max_length;
  v21 = (int)max_length > 0;
  if ( (int)max_length >= 1 )
  {
    v22 = 0;
    while ( 1 )
    {
      if ( v22 >= (unsigned int)max_length )
LABEL_15:
        sub_2213CE4(v17);
      v23 = cpkNames->m_Items[v22];
      v17 = SoundManager_CpkLoader__setupCpkAssetPath((SoundManager_CpkLoader_o *)v17, v23, v19);
      if ( !v17 )
        goto LABEL_16;
      v24 = v17->max_length;
      v25 = v17;
      if ( (int)v24 >= 1 )
        break;
LABEL_11:
      LODWORD(max_length) = cpkNames->max_length;
      v21 = (__int64)++v22 < (int)max_length;
      if ( (__int64)v22 >= (int)max_length )
        return v21;
    }
    v26 = 0;
    m_Items = v17->m_Items;
    while ( 1 )
    {
      if ( v26 >= (unsigned int)v24 )
        goto LABEL_15;
      v28 = m_Items[v26];
      v17 = (System_String_array *)System_IO_File__Exists(v28, 0);
      if ( ((unsigned __int8)v17 & 1) != 0 )
        break;
      LODWORD(v24) = v25->max_length;
      if ( (__int64)++v26 >= (int)v24 )
        goto LABEL_11;
    }
    *cpkAssetPath = v28;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)cpkAssetPath,
      (int32_t)v28,
      (System_String_o *)v19,
      v29,
      v30,
      v31,
      v32,
      v33);
    *targetCpkName = v23;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)targetCpkName, (int32_t)v23, v34, v35, v36, v37, v38, v39);
  }
  return v21;
}


void SoundManager_CpkLoader__downloadAssetStorage(SoundManager_CpkLoader_o *this, const MethodInfo *method)
{
  System_String_o *name; // x20
  System_String_array *PreferredCpkNames; // x0
  __int64 v5; // x1
  System_String_array *v6; // x22
  il2cpp_array_size_t max_length; // x8
  System_String_o *v8; // x21
  struct System_String_o *v9; // x20
  unsigned __int64 v10; // x27
  System_String_o *v11; // x23
  il2cpp_array_size_t v12; // x8
  System_String_array *v13; // x24
  unsigned __int64 v14; // x29
  System_String_o *v15; // x25
  AssetLoader_LoadEndDataHandler_o *v16; // x22
  __int64 v17; // x1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  struct SoundManager_o *manager; // x8
  struct SoundManager_o *v25; // x8
  struct System_Action_o *callback; // x8
  SoundManager_CpkLoader_o *v27; // [xsp+8h] [xbp-68h]

  if ( (byte_597022E & 1) == 0 )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&Method_SoundManager_CpkLoader_EndLoadCallback__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Remove__);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&AssetLoader_LoadEndDataHandler_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_597022E = 1;
  }
  name = this->fields.name;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, method);
  PreferredCpkNames = SoundManager_CpkLoader_EfCpkNameHelper__GetPreferredCpkNames(name, method);
  if ( !PreferredCpkNames )
    goto LABEL_39;
  v27 = this;
  v6 = PreferredCpkNames;
  max_length = PreferredCpkNames->max_length;
  v8 = **(System_String_o ***)(qword_5984390 + 184);
  if ( (int)max_length >= 1 )
  {
    v9 = 0;
    v10 = 0;
    while ( v10 < (unsigned int)max_length )
    {
      v11 = v6->m_Items[v10];
      if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
      PreferredCpkNames = SoundManager__getDownloadAssetNames(v11, 0);
      if ( !PreferredCpkNames )
        goto LABEL_39;
      v12 = PreferredCpkNames->max_length;
      v13 = PreferredCpkNames;
      if ( (int)v12 >= 1 )
      {
        v14 = 0;
        while ( 1 )
        {
          if ( v14 >= (unsigned int)v12 )
            goto LABEL_38;
          v15 = v13->m_Items[v14];
          if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v5);
          PreferredCpkNames = (System_String_array *)AssetManager__isExistAssetStorage(v15, 0);
          LODWORD(v12) = v13->max_length;
          if ( ((unsigned __int8)PreferredCpkNames & 1) != 0 )
            break;
          if ( (__int64)++v14 >= (int)v12 )
            goto LABEL_22;
        }
        if ( (unsigned int)v14 >= (unsigned int)v12 )
          break;
        v9 = v11;
        v8 = v13->m_Items[v14];
      }
LABEL_22:
      PreferredCpkNames = (System_String_array *)System_String__IsNullOrEmpty(v8, 0);
      if ( ((unsigned __int8)PreferredCpkNames & 1) != 0 )
      {
        LODWORD(max_length) = v6->max_length;
        if ( (__int64)++v10 < (int)max_length )
          continue;
      }
      goto LABEL_26;
    }
LABEL_38:
    sub_2213CE4(PreferredCpkNames);
  }
  v9 = 0;
LABEL_26:
  PreferredCpkNames = (System_String_array *)System_String__IsNullOrEmpty(v8, 0);
  if ( ((unsigned __int8)PreferredCpkNames & 1) == 0 )
  {
    v16 = (AssetLoader_LoadEndDataHandler_o *)sub_2213CCC(AssetLoader_LoadEndDataHandler_TypeInfo);
    AssetLoader_LoadEndDataHandler___ctor(v16, (Il2CppObject *)v27, Method_SoundManager_CpkLoader_EndLoadCallback__, 0);
    if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v17);
    PreferredCpkNames = (System_String_array *)AssetManager__downloadAssetStorage(v8, v16, 1, 0);
    if ( ((unsigned __int8)PreferredCpkNames & 1) != 0 )
    {
      v27->fields.resolvedCpkNameForLoad = v9;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v27->fields.resolvedCpkNameForLoad,
        (int32_t)v9,
        v18,
        v19,
        v20,
        v21,
        v22,
        v23);
      return;
    }
  }
  manager = v27->fields.manager;
  if ( !manager
    || (PreferredCpkNames = (System_String_array *)manager->fields.SoundCpkLoader) == 0
    || (PreferredCpkNames = (System_String_array *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                     (System_Collections_Generic_Dictionary_object__object__o *)PreferredCpkNames,
                                                     (Il2CppObject *)v27->fields.name,
                                                     (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__),
        (v25 = v27->fields.manager) == 0)
    || (PreferredCpkNames = (System_String_array *)v25->fields.pendingRebindCueSheets) == 0 )
  {
LABEL_39:
    sub_2213CDC(PreferredCpkNames, v5);
  }
  System_Collections_Generic_Dictionary_object__Int32Enum___Remove(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)PreferredCpkNames,
    (Il2CppObject *)v27->fields.name,
    (const MethodInfo_3FF8A00 *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CueType__Remove__);
  callback = v27->fields.callback;
  if ( callback )
    ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
      callback->fields.method_code,
      callback->fields.method);
}


System_String_array *SoundManager_CpkLoader__setupCpkAssetPath(
        SoundManager_CpkLoader_o *this,
        System_String_o *cpkName,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x20
  AssetManager_c *v6; // x8
  AssetData_c *v7; // x0
  System_String_o *cachePathName; // x21
  int v9; // w9
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x22
  System_String_o *v13; // x0
  System_String_o *v14; // x0
  __int64 v15; // x1
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  __int64 v22; // x1
  AssetManager_c *v23; // x0
  System_String_o *v24; // x21
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  System_String_o *v31; // x22
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  System_String_o *v39; // x2
  System_String_o *v40; // x3
  int32_t v41; // w4
  int32_t v42; // w5
  bool v43; // w6
  bool v44; // w7
  int32_t v45; // w1
  System_String_o *v46; // x2
  System_String_o *v47; // x3
  int32_t v48; // w4
  int32_t v49; // w5
  bool v50; // w6
  bool v51; // w7
  System_String_o *v52; // x2
  System_String_o *v53; // x3
  int32_t v54; // w4
  int32_t v55; // w5
  bool v56; // w6
  bool v57; // w7
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

  if ( (byte_597022F & 1) == 0 )
  {
    sub_2213A60(&AndroidUtil_TypeInfo);
    sub_2213A60(&AssetData_TypeInfo);
    sub_2213A60(&AssetManager_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_1099/*".cpk.bytes"*/);
    sub_2213A60(&StringLiteral_2585/*"Audio"*/);
    sub_2213A60(&StringLiteral_3281/*"Bgm"*/);
    byte_597022F = 1;
  }
  v74[0] = 0;
  v5 = sub_2213B20(string___TypeInfo, 2);
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
  if ( !byte_596F73A )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F73A = 1;
  }
  v6 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v4);
    v6 = AssetManager_TypeInfo;
  }
  v7 = AssetData_TypeInfo;
  cachePathName = v6->static_fields->cachePathName;
  if ( !*(&AssetData_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetData_TypeInfo, v4);
    v7 = AssetData_TypeInfo;
  }
  v9 = *(_DWORD *)(qword_5984388 + 228);
  v74[0] = v7->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  if ( !v9 )
    j_il2cpp_runtime_class_init_0(qword_5984388, v4);
  v10 = System_Char__ToString((uint16_t)v74, 0);
  v12 = System_String__Concat_75696856(
          (System_String_o *)StringLiteral_2585/*"Audio"*/,
          v10,
          cpkName,
          (System_String_o *)StringLiteral_1099/*".cpk.bytes"*/,
          0);
  if ( !*(&AndroidUtil_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo, v11);
  v13 = AndroidUtil__ConvertFileNameIfNeed(v12, 0);
  v14 = System_String__Concat_75651716(cachePathName, v13, 0);
  if ( !v5 )
    goto LABEL_31;
  if ( !*(_DWORD *)(v5 + 24) )
    goto LABEL_30;
  *(_QWORD *)(v5 + 32) = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 32), (int32_t)v14, v16, v17, v18, v19, v20, v21);
  if ( !byte_596F73A )
  {
    sub_2213A60(&AssetManager_TypeInfo);
    byte_596F73A = 1;
  }
  v23 = AssetManager_TypeInfo;
  if ( !*(&AssetManager_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(AssetManager_TypeInfo, v22);
    v23 = AssetManager_TypeInfo;
  }
  v24 = v23->static_fields->cachePathName;
  v14 = (System_String_o *)sub_2213B20(string___TypeInfo, 6);
  if ( !v14 )
LABEL_31:
    sub_2213CDC(v14, v15);
  v31 = v14;
  if ( !LODWORD(v14[1].klass) )
    goto LABEL_30;
  v32 = StringLiteral_2585/*"Audio"*/;
  v14[1].monitor = (void *)StringLiteral_2585/*"Audio"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v14[1].monitor, v32, v25, v26, v27, v28, v29, v30);
  v74[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v14 = System_Char__ToString((uint16_t)v74, 0);
  if ( ((__int64)v31[1].klass & 0xFFFFFFFE) == 0 )
    goto LABEL_30;
  v31[1].fields = (System_String_Fields)v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[1].fields, (int32_t)v14, v33, v34, v35, v36, v37, v38);
  if ( LODWORD(v31[1].klass) <= 2 )
    goto LABEL_30;
  v45 = StringLiteral_3281/*"Bgm"*/;
  v31[2].klass = (System_String_c *)StringLiteral_3281/*"Bgm"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[2], v45, v39, v40, v41, v42, v43, v44);
  v74[0] = AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR;
  v14 = System_Char__ToString((uint16_t)v74, 0);
  if ( ((__int64)v31[1].klass & 0xFFFFFFFC) == 0 )
    goto LABEL_30;
  v31[2].monitor = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[2].monitor, (int32_t)v14, v46, v47, v48, v49, v50, v51);
  if ( LODWORD(v31[1].klass) <= 4 )
    goto LABEL_30;
  v31[2].fields = (System_String_Fields)cpkName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[2].fields, (int32_t)cpkName, v52, v53, v54, v55, v56, v57);
  if ( LODWORD(v31[1].klass) <= 5
    || (v64 = StringLiteral_1099/*".cpk.bytes"*/,
        v31[3].klass = (System_String_c *)StringLiteral_1099/*".cpk.bytes"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v31[3], v64, v58, v59, v60, v61, v62, v63),
        v65 = System_String__Concat_75697120((System_String_array *)v31, 0),
        v66 = AndroidUtil__ConvertFileNameIfNeed(v65, 0),
        v14 = System_String__Concat_75651716(v24, v66, 0),
        (*(_DWORD *)(v5 + 24) & 0xFFFFFFFE) == 0) )
  {
LABEL_30:
    sub_2213CE4(v14);
  }
  *(_QWORD *)(v5 + 40) = v14;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v5 + 40), (int32_t)v14, v67, v68, v69, v70, v71, v72);
  return (System_String_array *)v5;
}


void SoundManager_CpkLoader_EfCpkNameHelper___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  __int64 v9; // x19
  int32_t v10; // w1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  int32_t v17; // w1
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  System_String_o *v25; // x2
  System_String_o *v26; // x3
  int32_t v27; // w4
  int32_t v28; // w5
  bool v29; // w6
  bool v30; // w7
  int32_t v31; // w1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7

  if ( (byte_597023C & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_9911/*"NoblePhantasm_"*/);
    sub_2213A60(&StringLiteral_4596/*"ChrVoice_"*/);
    sub_2213A60(&StringLiteral_13301/*"Servants_"*/);
    sub_2213A60(&StringLiteral_15856/*"ValVoice_"*/);
    byte_597023C = 1;
  }
  v1 = sub_2213B20(string___TypeInfo, 4);
  if ( !v1 )
    sub_2213CDC(0, v2);
  v9 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_9;
  v10 = StringLiteral_4596/*"ChrVoice_"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4596/*"ChrVoice_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v1 + 32), v10, v3, v4, v5, v6, v7, v8);
  if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) == 0
    || (v17 = StringLiteral_9911/*"NoblePhantasm_"*/,
        *(_QWORD *)(v9 + 40) = StringLiteral_9911/*"NoblePhantasm_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 40), v17, v11, v12, v13, v14, v15, v16),
        *(_DWORD *)(v9 + 24) <= 2u)
    || (v24 = StringLiteral_13301/*"Servants_"*/,
        *(_QWORD *)(v9 + 48) = StringLiteral_13301/*"Servants_"*/,
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 48), v24, v18, v19, v20, v21, v22, v23),
        (*(_DWORD *)(v9 + 24) & 0xFFFFFFFC) == 0) )
  {
LABEL_9:
    sub_2213CE4(v1);
  }
  v31 = StringLiteral_15856/*"ValVoice_"*/;
  *(_QWORD *)(v9 + 56) = StringLiteral_15856/*"ValVoice_"*/;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 56), v31, v25, v26, v27, v28, v29, v30);
  SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->static_fields->EfTargetPrefixes = (struct System_String_array *)v9;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->static_fields,
    v9,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37);
}


bool SoundManager_CpkLoader_EfCpkNameHelper__EndWithEfSuffix(System_String_o *targetName, const MethodInfo *method)
{
  _BOOL8 IsNullOrEmpty; // x0
  __int64 v4; // x1

  if ( (byte_5970233 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_16836/*"_EF"*/);
    byte_5970233 = 1;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(targetName, 0);
  if ( IsNullOrEmpty )
    return 0;
  if ( !targetName )
    sub_2213CDC(IsNullOrEmpty, v4);
  return System_String__EndsWith_75685632(targetName, (System_String_o *)StringLiteral_16836/*"_EF"*/, 4, 0);
}


System_String_array *SoundManager_CpkLoader_EfCpkNameHelper__GetAcbAwbFileNameCandidates(
        System_String_o *targetName,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v3; // x19
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  struct System_Object_array *items; // x8
  _QWORD *v13; // x9
  __int64 size; // x10
  Il2CppClass **v15; // x0
  const MethodInfo *v16; // x1
  System_String_o *v17; // x0
  Il2CppObject *v18; // x20
  System_String_o *v19; // x2
  System_String_o *v20; // x3
  int32_t v21; // w4
  int32_t v22; // w5
  bool v23; // w6
  bool v24; // w7
  struct System_Object_array *v25; // x8
  _QWORD *v26; // x9
  __int64 v27; // x10
  Il2CppClass **v28; // x0

  if ( (byte_5970234 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__Contains__);
    sub_2213A60(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_string___ctor__);
    sub_2213A60(&System_Collections_Generic_List_string__TypeInfo);
    sub_2213A60(&StringLiteral_16836/*"_EF"*/);
    byte_5970234 = 1;
  }
  v3 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v3,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_string___ctor__);
  IsNullOrEmpty = System_String__IsNullOrEmpty(targetName, 0);
  if ( !IsNullOrEmpty )
  {
    if ( !v3
      || (items = v3->fields._items,
          v13 = Method_System_Collections_Generic_List_string__Add__,
          ++v3->fields._version,
          !items) )
    {
LABEL_26:
      sub_2213CDC(IsNullOrEmpty, v5);
    }
    size = v3->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v3,
        (Il2CppObject *)targetName,
        *(const MethodInfo_4483C64 **)(*(_QWORD *)(v13[4] + 192LL) + 112LL));
    }
    else
    {
      v15 = &items->obj.klass + size;
      v3->fields._size = size + 1;
      v15[4] = (Il2CppClass *)targetName;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)(v15 + 4), (int32_t)targetName, v6, v7, v8, v9, v10, v11);
    }
  }
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v5);
  if ( SoundManager_CpkLoader_EfCpkNameHelper__EndWithEfSuffix(targetName, v5) )
  {
    if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v16);
    v17 = SoundManager_CpkLoader_EfCpkNameHelper__RemoveEfSuffix(targetName, v16);
  }
  else
  {
    v17 = System_String__Concat_75651716(targetName, (System_String_o *)StringLiteral_16836/*"_EF"*/, 0);
  }
  v18 = (Il2CppObject *)v17;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v17, 0);
  if ( IsNullOrEmpty )
  {
    if ( !v3 )
      goto LABEL_26;
  }
  else
  {
    if ( !v3 )
      goto LABEL_26;
    IsNullOrEmpty = System_Collections_Generic_List_object___Contains(
                      v3,
                      v18,
                      (const MethodInfo_4484000 *)Method_System_Collections_Generic_List_string__Contains__);
    if ( !IsNullOrEmpty )
    {
      v25 = v3->fields._items;
      v26 = Method_System_Collections_Generic_List_string__Add__;
      ++v3->fields._version;
      if ( !v25 )
        goto LABEL_26;
      v27 = v3->fields._size;
      if ( (unsigned int)v27 >= LODWORD(v25->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v3,
          v18,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v28 = &v25->obj.klass + v27;
        v3->fields._size = v27 + 1;
        v28[4] = (Il2CppClass *)v18;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v28 + 4), (int32_t)v18, v19, v20, v21, v22, v23, v24);
      }
    }
  }
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v3,
                                  (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_string__ToArray__);
}


System_String_array *SoundManager_CpkLoader_EfCpkNameHelper__GetPreferredCpkNames(
        System_String_o *baseName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  long double v4; // q0
  _QWORD *v5; // x19
  __int64 v6; // x8
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x20
  System_String_o *v10; // x0
  __int64 v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  MissionNaviTransitionBoardItem_o *p_monitor; // x0

  if ( (byte_5970232 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Array_Empty_string___);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&string___TypeInfo);
    sub_2213A60(&StringLiteral_16836/*"_EF"*/);
    byte_5970232 = 1;
  }
  if ( !System_String__IsNullOrEmpty(baseName, 0) )
  {
    if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v3);
    if ( SoundManager_CpkLoader_EfCpkNameHelper__ShouldUseEfVoiceCpk(baseName, v3) )
    {
      v9 = sub_2213B20(string___TypeInfo, 2);
      v10 = System_String__Concat_75651716(baseName, (System_String_o *)StringLiteral_16836/*"_EF"*/, 0);
      if ( v9 )
      {
        if ( *(_DWORD *)(v9 + 24) )
        {
          *(_QWORD *)(v9 + 32) = v10;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v9 + 32), (int32_t)v10, v12, v13, v14, v15, v16, v17);
          if ( (*(_DWORD *)(v9 + 24) & 0xFFFFFFFE) != 0 )
          {
            *(_QWORD *)(v9 + 40) = baseName;
            p_monitor = (MissionNaviTransitionBoardItem_o *)(v9 + 40);
LABEL_23:
            sub_2213A04(p_monitor, (int32_t)baseName, v18, v19, v20, v21, v22, v23);
            return (System_String_array *)v9;
          }
        }
        goto LABEL_25;
      }
    }
    else
    {
      v10 = (System_String_o *)sub_2213B20(string___TypeInfo, 1);
      if ( v10 )
      {
        v9 = (__int64)v10;
        if ( LODWORD(v10[1].klass) )
        {
          v10[1].monitor = baseName;
          p_monitor = (MissionNaviTransitionBoardItem_o *)&v10[1].monitor;
          goto LABEL_23;
        }
LABEL_25:
        sub_2213CE4(v10);
      }
    }
    sub_2213CDC(v10, v11);
  }
  v5 = Method_System_Array_Empty_string___;
  v6 = *((_QWORD *)Method_System_Array_Empty_string___ + 7);
  if ( !v6 )
  {
    sub_224B964(Method_System_Array_Empty_string___);
    v6 = v5[7];
  }
  v7 = *(_QWORD *)(v6 + 16);
  if ( (*(_WORD *)(v7 + 309) & 1) == 0 )
    v7 = sub_224B908(v4);
  if ( !*(_DWORD *)(v7 + 228) )
    *(__n128 *)&v4 = j_il2cpp_runtime_class_init_0(v7, v3);
  v8 = *(_QWORD *)(v5[7] + 16LL);
  if ( (*(_WORD *)(v8 + 309) & 1) == 0 )
    v8 = sub_224B908(v4);
  return **(System_String_array ***)(v8 + 184);
}


bool SoundManager_CpkLoader_EfCpkNameHelper__IsEfTargetByPrefix(System_String_o *targetName, const MethodInfo *method)
{
  __int64 v3; // x19
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  __int64 v12; // x1
  SoundManager_CpkLoader_EfCpkNameHelper_c *v14; // x0
  System_Object_array *EfTargetPrefixes; // x20
  System_Func_object__bool__o *v16; // x21

  if ( (byte_5970238 & 1) == 0 )
  {
    sub_2213A60(&Method_BasicHelper_Any_string____91711488);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0__IsEfTargetByPrefix_b__0__);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0_TypeInfo);
    byte_5970238 = 1;
  }
  v3 = sub_2213CCC(SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    sub_2213CDC(v4, v5);
  *(_QWORD *)(v3 + 16) = targetName;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v3 + 16), (int32_t)targetName, v6, v7, v8, v9, v10, v11);
  if ( System_String__IsNullOrEmpty(*(System_String_o **)(v3 + 16), 0) )
    return 0;
  v14 = SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v12);
    v14 = SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo;
  }
  EfTargetPrefixes = (System_Object_array *)v14->static_fields->EfTargetPrefixes;
  v16 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v3,
    Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0__IsEfTargetByPrefix_b__0__,
    0);
  return BasicHelper__Any_object__58785420(
           EfTargetPrefixes,
           (System_Func_T__bool__o *)v16,
           (const MethodInfo_380FE8C *)Method_BasicHelper_Any_string____91711488);
}


// local variable allocation has failed, the output may be wrong!
bool SoundManager_CpkLoader_EfCpkNameHelper__IsTargetServantVoiceCpk(
        System_String_o *cpkName,
        int32_t svtId,
        const MethodInfo *method)
{
  __int64 v5; // x1
  const MethodInfo *v6; // x2
  int32_t svtIda; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5970236 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    byte_5970236 = 1;
  }
  svtIda = 0;
  if ( svtId < 1 )
    return 0;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, *(_QWORD *)&svtId);
  if ( !SoundManager_CpkLoader_EfCpkNameHelper__IsEfTargetByPrefix(cpkName, *(const MethodInfo **)&svtId) )
    return 0;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v5);
  return SoundManager_CpkLoader_EfCpkNameHelper__TryGetSvtIdFromName(cpkName, &svtIda, v6) && svtIda == svtId;
}


System_String_o *SoundManager_CpkLoader_EfCpkNameHelper__RemoveEfSuffix(
        System_String_o *targetName,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  _BOOL8 v4; // x0
  __int64 v5; // x1

  if ( (byte_5970239 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&StringLiteral_16836/*"_EF"*/);
    byte_5970239 = 1;
  }
  if ( System_String__IsNullOrEmpty(targetName, 0) )
    return targetName;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v3);
  v4 = SoundManager_CpkLoader_EfCpkNameHelper__EndWithEfSuffix(targetName, v3);
  if ( !v4 )
    return targetName;
  if ( !targetName || !StringLiteral_16836/*"_EF"*/ )
    sub_2213CDC(v4, v5);
  return System_String__Substring_75702848(
           targetName,
           0,
           targetName->fields._stringLength - *((_DWORD *)StringLiteral_16836/*"_EF"*/ + 4),
           0);
}


System_ValueTuple_string__string__o SoundManager_CpkLoader_EfCpkNameHelper__ResolveCueSheetFileNames(
        CriFsBinder_o *binder,
        System_String_o *targetCpkName,
        int32_t cueType,
        const MethodInfo *method)
{
  const MethodInfo *v7; // x1
  const MethodInfo_3CF8CCC *v8; // x4
  Il2CppObject *v9; // x3
  Il2CppObject *Item2; // x2
  System_String_array *AcbAwbFileNameCandidates; // x23
  const MethodInfo *v13; // x3
  __int64 v14; // x1
  const MethodInfo *v15; // x3
  Il2CppObject *v16; // x22
  Il2CppObject *v17; // x21
  System_String_o *v18; // x0
  struct System_String_o *v21; // [xsp+0h] [xbp-60h] BYREF
  struct System_String_o *v22; // [xsp+8h] [xbp-58h]
  System_ValueTuple_object__object__o v23; // 0:x0.16
  System_ValueTuple_string__string__o result; // 0:x0.16

  if ( (byte_597023B & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&Method_System_ValueTuple_string__string___ctor__);
    sub_2213A60(&StringLiteral_1091/*".awb"*/);
    sub_2213A60(&StringLiteral_1088/*".acb"*/);
    byte_597023B = 1;
  }
  if ( System_String__IsNullOrEmpty(targetCpkName, 0) )
  {
    v23.fields.Item1 = (Il2CppObject *)&v21;
    v9 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
    v23.fields.Item2 = **(Il2CppObject ***)(qword_5984390 + 184);
    v21 = 0;
    v22 = 0;
    Item2 = v23.fields.Item2;
  }
  else
  {
    if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v7);
    AcbAwbFileNameCandidates = SoundManager_CpkLoader_EfCpkNameHelper__GetAcbAwbFileNameCandidates(targetCpkName, v7);
    v16 = (Il2CppObject *)SoundManager_CpkLoader_EfCpkNameHelper__ResolveExistingAcbAwbFileName(
                            binder,
                            AcbAwbFileNameCandidates,
                            (System_String_o *)StringLiteral_1088/*".acb"*/,
                            v13);
    if ( !v16 )
      v16 = (Il2CppObject *)System_String__Concat_75651716(targetCpkName, (System_String_o *)StringLiteral_1088/*".acb"*/, 0);
    v17 = **(Il2CppObject ***)(qword_5984390 + 184);
    if ( cueType == 1 )
    {
      if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v14);
      v18 = SoundManager_CpkLoader_EfCpkNameHelper__ResolveExistingAcbAwbFileName(
              binder,
              AcbAwbFileNameCandidates,
              (System_String_o *)StringLiteral_1091/*".awb"*/,
              v15);
      if ( v18 )
        v17 = (Il2CppObject *)v18;
    }
    v9 = (Il2CppObject *)Method_System_ValueTuple_string__string___ctor__;
    v23.fields.Item1 = (Il2CppObject *)&v21;
    v23.fields.Item2 = v16;
    Item2 = v17;
    v21 = 0;
    v22 = 0;
  }
  System_ValueTuple_object__object____ctor(v23, Item2, v9, v8);
  result.fields.Item1 = v21;
  result.fields.Item2 = v22;
  return result;
}


System_String_o *SoundManager_CpkLoader_EfCpkNameHelper__ResolveExistingAcbAwbFileName(
        CriFsBinder_o *binder,
        System_String_array *acbAwbFileNameCandidates,
        System_String_o *extension,
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
  System_Func_object__object__o *v22; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v23; // x19
  System_Func_object__bool__o *v24; // x20

  if ( (byte_597023A & 1) == 0 )
  {
    sub_2213A60(&Method_System_Linq_Enumerable_FirstOrDefault_string____91752800);
    sub_2213A60(&Method_System_Linq_Enumerable_Select_string__string___);
    sub_2213A60(&System_Func_string__string__TypeInfo);
    sub_2213A60(&System_Func_string__bool__TypeInfo);
    sub_2213A60(&Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0__ResolveExistingAcbAwbFileName_b__0__);
    sub_2213A60(&Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0__ResolveExistingAcbAwbFileName_b__1__);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0_TypeInfo);
    byte_597023A = 1;
  }
  v7 = sub_2213CCC(SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_2213CDC(v8, v9);
  *(_QWORD *)(v7 + 16) = extension;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 16), (int32_t)extension, v10, v11, v12, v13, v14, v15);
  *(_QWORD *)(v7 + 24) = binder;
  sub_2213A04((MissionNaviTransitionBoardItem_o *)(v7 + 24), (int32_t)binder, v16, v17, v18, v19, v20, v21);
  v22 = (System_Func_object__object__o *)sub_2213CCC(System_Func_string__string__TypeInfo);
  System_Func_object__object____ctor(
    v22,
    (Il2CppObject *)v7,
    Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0__ResolveExistingAcbAwbFileName_b__0__,
    0);
  v23 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__Select_object__object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)acbAwbFileNameCandidates,
                                                               (System_Func_TSource__TResult__o *)v22,
                                                               (const MethodInfo_38911C8 *)Method_System_Linq_Enumerable_Select_string__string___);
  v24 = (System_Func_object__bool__o *)sub_2213CCC(System_Func_string__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v24,
    (Il2CppObject *)v7,
    Method_SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0__ResolveExistingAcbAwbFileName_b__1__,
    0);
  return (System_String_o *)System_Linq_Enumerable__FirstOrDefault_object__59254852(
                              v23,
                              (System_Func_TSource__bool__o *)v24,
                              (const MethodInfo_3882844 *)Method_System_Linq_Enumerable_FirstOrDefault_string____91752800);
}


bool SoundManager_CpkLoader_EfCpkNameHelper__ShouldUseEfVoiceCpk(System_String_o *cpkName, const MethodInfo *method)
{
  __int64 v3; // x1
  const MethodInfo *v4; // x2
  __int64 v5; // x1
  int32_t v6; // w19
  int32_t svtId; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_5970235 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&SoundManager_TypeInfo);
    byte_5970235 = 1;
  }
  svtId = 0;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, method);
  if ( !SoundManager_CpkLoader_EfCpkNameHelper__IsEfTargetByPrefix(cpkName, method) )
    return 0;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v3);
  if ( SoundManager_CpkLoader_EfCpkNameHelper__TryGetSvtIdFromName(cpkName, &svtId, v4) )
  {
    v6 = svtId;
    if ( !*(&SoundManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo, v5);
    return SoundManager__IsEfVoiceServantCpk(v6, 0);
  }
  else
  {
    return 0;
  }
}


bool SoundManager_CpkLoader_EfCpkNameHelper__TryGetSvtIdFromName(
        System_String_o *targetName,
        int32_t *svtId,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x1
  System_String_o *v6; // x0
  __int64 v7; // x1
  System_String_o *v8; // x20
  int32_t IndexOf; // w0
  System_String_o *v10; // x0

  if ( (byte_5970237 & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    byte_5970237 = 1;
  }
  *svtId = 0;
  if ( System_String__IsNullOrEmpty(targetName, 0) )
    return 0;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v5);
  v6 = SoundManager_CpkLoader_EfCpkNameHelper__RemoveEfSuffix(targetName, v5);
  if ( !v6 )
    sub_2213CDC(0, v7);
  v8 = v6;
  IndexOf = System_String__LastIndexOf(v6, 0x5Fu, 0);
  if ( IndexOf < 0 || IndexOf + 1 >= v8->fields._stringLength )
    return 0;
  v10 = System_String__Substring(v8, IndexOf + 1, 0);
  return System_Int32__TryParse(v10, svtId, 0);
}


void SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0___ctor(
        SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0___ResolveExistingAcbAwbFileName_b__0(
        SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0_o *this,
        System_String_o *acbAwbFileNameCandidate,
        const MethodInfo *method)
{
  return System_String__Concat_75651716(acbAwbFileNameCandidate, this->fields.extension, 0);
}


bool SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0___ResolveExistingAcbAwbFileName_b__1(
        SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass10_0_o *this,
        System_String_o *fileName,
        const MethodInfo *method)
{
  CriFsBinder_o *binder; // x0

  binder = this->fields.binder;
  if ( !binder )
    sub_2213CDC(0, fileName);
  return CriFsBinder__GetFileSize(binder, fileName, 0) >= 0;
}


void SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0___ctor(
        SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0___IsEfTargetByPrefix_b__0(
        SoundManager_CpkLoader_EfCpkNameHelper___c__DisplayClass8_0_o *this,
        System_String_o *prefix,
        const MethodInfo *method)
{
  System_String_o *targetName; // x0

  targetName = this->fields.targetName;
  if ( !targetName )
    sub_2213CDC(0, prefix);
  return System_String__StartsWith_75688216(targetName, prefix, 4, 0);
}


void SoundManager_CpkLoader__SetupCpk_d__14___ctor(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundManager_CpkLoader__SetupCpk_d__14__MoveNext(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x5
  SoundManager_CpkLoader__SetupCpk_d__14_o *v3; // x19
  int32_t _1__state; // w8
  struct SoundManager_CpkLoader_o *_4__this; // x20
  CriFsBinder_o *v6; // x21
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  CriFsBindRequest_o *v13; // x0
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_YieldInstruction_o *v20; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x19
  System_String_o *v22; // x2
  System_String_o *v23; // x3
  int32_t v24; // w4
  int32_t v25; // w5
  bool v26; // w6
  bool v27; // w7
  struct SoundManager_o *manager; // x8
  struct CriFsBindRequest_o *bind_request_5__5; // x8
  struct SoundManager_o *v31; // x8
  struct SoundManager_o *v32; // x8
  __int64 v33; // x1
  const MethodInfo *v34; // x3
  CriFsBinder_o *binder_5__4; // x21
  System_String_o *targetCpkName_5__3; // x22
  int32_t cueType; // w23
  System_ValueTuple_string__string__o v38; // kr00_16
  struct System_Action_o *callback; // x8

  v3 = this;
  if ( (byte_597023D & 1) == 0 )
  {
    sub_2213A60(&CriFsBinder_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    sub_2213A60(&StringLiteral_3294/*"BindError:"*/);
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)sub_2213A60(&StringLiteral_1074/*". cpkAssetPath="*/);
    byte_597023D = 1;
  }
  _1__state = v3->fields.__1__state;
  _4__this = v3->fields.__4__this;
  if ( _1__state == 1 )
  {
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_32;
    manager = _4__this->fields.manager;
    if ( !manager )
      goto LABEL_32;
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)manager->fields.SoundCpkLoader;
    if ( !this )
      goto LABEL_32;
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)System_Collections_Generic_Dictionary_object__object___Remove(
                                                         (System_Collections_Generic_Dictionary_object__object__o *)this,
                                                         (Il2CppObject *)v3->fields.cpkName,
                                                         (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
    bind_request_5__5 = v3->fields._bind_request_5__5;
    if ( !bind_request_5__5 )
      goto LABEL_32;
    method = (const MethodInfo *)bind_request_5__5->fields._error_k__BackingField;
    if ( method )
    {
      System_String__Concat_75696856(
        (System_String_o *)StringLiteral_3294/*"BindError:"*/,
        (System_String_o *)method,
        (System_String_o *)StringLiteral_1074/*". cpkAssetPath="*/,
        v3->fields._cpkAssetPath_5__2,
        0);
    }
    else
    {
      this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)_4__this->fields.manager;
      if ( !this )
        goto LABEL_32;
      this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)SoundManager__ExistsAssetNameCounter(
                                                           (SoundManager_o *)this,
                                                           v3->fields.cpkName,
                                                           0);
      if ( ((unsigned __int8)this & 1) != 0 )
      {
        v32 = _4__this->fields.manager;
        if ( !v32 )
          goto LABEL_32;
        this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)v32->fields.SoundBinders;
        if ( !this )
          goto LABEL_32;
        System_Collections_Generic_Dictionary_object__object___set_Item(
          (System_Collections_Generic_Dictionary_object__object__o *)this,
          (Il2CppObject *)v3->fields.cpkName,
          (Il2CppObject *)v3->fields._binder_5__4,
          (const MethodInfo_3FFDBFC *)Method_System_Collections_Generic_Dictionary_string__CriFsBinder__set_Item__);
        targetCpkName_5__3 = v3->fields._targetCpkName_5__3;
        binder_5__4 = v3->fields._binder_5__4;
        cueType = _4__this->fields.cueType;
        if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, v33);
        v38 = SoundManager_CpkLoader_EfCpkNameHelper__ResolveCueSheetFileNames(
                binder_5__4,
                targetCpkName_5__3,
                cueType,
                v34);
        CriAtom__AddCueSheet(v3->fields.cpkName, v38.fields.Item1, v38.fields.Item2, v3->fields._binder_5__4, 0);
        goto LABEL_27;
      }
    }
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)v3->fields._binder_5__4;
    if ( !this )
      goto LABEL_32;
    ((void (__fastcall *)(SoundManager_CpkLoader__SetupCpk_d__14_o *, const MethodInfo *))this->klass->vtable._5_System_IDisposable_Dispose.methodPtr)(
      this,
      this->klass->vtable._5_System_IDisposable_Dispose.method);
  }
  else
  {
    if ( _1__state )
      return 0;
    v3->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_32;
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)SoundManager_CpkLoader__TryGetAssetPath(
                                                         _4__this,
                                                         v3->fields.cpkName,
                                                         v3->fields.preferredCpkName,
                                                         &v3->fields._cpkAssetPath_5__2,
                                                         &v3->fields._targetCpkName_5__3,
                                                         v2);
    if ( ((unsigned __int8)this & 1) != 0 )
    {
      v6 = (CriFsBinder_o *)sub_2213CCC(CriFsBinder_TypeInfo);
      CriFsBinder___ctor(v6, 0);
      v3->fields._binder_5__4 = v6;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v3->fields._binder_5__4, (int32_t)v6, v7, v8, v9, v10, v11, v12);
      v13 = CriFsUtility__BindCpk(v3->fields._binder_5__4, v3->fields._cpkAssetPath_5__2, 0);
      v3->fields._bind_request_5__5 = v13;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&v3->fields._bind_request_5__5,
        (int32_t)v13,
        v14,
        v15,
        v16,
        v17,
        v18,
        v19);
      this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)v3->fields._bind_request_5__5;
      if ( this )
      {
        v20 = CriFsRequest__WaitForDone(
                (CriFsRequest_o *)this,
                (UnityEngine_MonoBehaviour_o *)_4__this->fields.manager,
                0);
        v3->fields.__2__current = (Il2CppObject *)v20;
        p__2__current = (MissionNaviTransitionBoardItem_o *)&v3->fields.__2__current;
        sub_2213A04(p__2__current, (int32_t)v20, v22, v23, v24, v25, v26, v27);
        p__2__current[-1].fields._BoardType_k__BackingField = 1;
        return 1;
      }
LABEL_32:
      sub_2213CDC(this, method);
    }
    v31 = _4__this->fields.manager;
    if ( !v31 )
      goto LABEL_32;
    this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)v31->fields.SoundCpkLoader;
    if ( !this )
      goto LABEL_32;
    System_Collections_Generic_Dictionary_object__object___Remove(
      (System_Collections_Generic_Dictionary_object__object__o *)this,
      (Il2CppObject *)v3->fields.cpkName,
      (const MethodInfo_3FFF12C *)Method_System_Collections_Generic_Dictionary_string__SoundManager_CpkLoader__Remove__);
  }
LABEL_27:
  this = (SoundManager_CpkLoader__SetupCpk_d__14_o *)_4__this->fields.manager;
  if ( !this )
    goto LABEL_32;
  if ( !SoundManager__TryExecuteReservedRebindCueSheet(
          (SoundManager_o *)this,
          v3->fields.cpkName,
          _4__this->fields.callback,
          0) )
  {
    callback = _4__this->fields.callback;
    if ( callback )
      ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
        callback->fields.method_code,
        callback->fields.method);
  }
  return 0;
}


Il2CppObject *SoundManager_CpkLoader__SetupCpk_d__14__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundManager_CpkLoader__SetupCpk_d__14__System_Collections_IEnumerator_Reset(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_2213A74(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_2213CCC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_2213A74(&Method_SoundManager_CpkLoader__SetupCpk_d__14_System_Collections_IEnumerator_Reset__);
  sub_2213BA0(v3, v4);
}


Il2CppObject *SoundManager_CpkLoader__SetupCpk_d__14__System_Collections_IEnumerator_get_Current(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundManager_CpkLoader__SetupCpk_d__14__System_IDisposable_Dispose(
        SoundManager_CpkLoader__SetupCpk_d__14_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundManager___c__DisplayClass103_0___ctor(SoundManager___c__DisplayClass103_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundManager___c__DisplayClass103_0___IsCueSheetLoaded_b__0(
        SoundManager___c__DisplayClass103_0_o *this,
        CriAtomCueSheet_o *cueSheet,
        const MethodInfo *method)
{
  if ( !cueSheet )
    sub_2213CDC(this, 0);
  return System_String__op_Equality(cueSheet->fields.name, this->fields.cueSheetName, 0);
}


void SoundManager___c__DisplayClass105_0___ctor(SoundManager___c__DisplayClass105_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundManager___c__DisplayClass105_0___RebindEfVoiceCueSheetsInternal_b__0(
        SoundManager___c__DisplayClass105_0_o *this,
        System_String_o *cpkName,
        const MethodInfo *method)
{
  int32_t svtId; // w20

  if ( (byte_597023E & 1) == 0 )
  {
    sub_2213A60(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo);
    byte_597023E = 1;
  }
  svtId = this->fields.svtId;
  if ( !*(&SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(SoundManager_CpkLoader_EfCpkNameHelper_TypeInfo, cpkName);
  return SoundManager_CpkLoader_EfCpkNameHelper__IsTargetServantVoiceCpk(cpkName, svtId, method);
}


void SoundManager___c__DisplayClass115_0___ctor(SoundManager___c__DisplayClass115_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass115_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass115_0_o *this,
        AssetData_o *d,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_2213CDC(this, d);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}


void SoundManager___c__DisplayClass117_0___ctor(SoundManager___c__DisplayClass117_0_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundManager___c__DisplayClass117_0___DownloadAudioAssetStorage_b__0(
        SoundManager___c__DisplayClass117_0_o *this,
        const MethodInfo *method)
{
  struct System_Action_o *callback; // x8

  callback = this->fields.callback;
  if ( !callback )
    sub_2213CDC(this, method);
  ((void (__fastcall *)(intptr_t, intptr_t))callback->fields.invoke_impl)(
    callback->fields.method_code,
    callback->fields.method);
}