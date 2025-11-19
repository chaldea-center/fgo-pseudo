void SoundTestMenu___cctor(const MethodInfo *method)
{
  __int64 v1; // x0
  __int64 v2; // x1
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  __int64 v5; // x19
  int32_t v6; // w1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  int32_t v15; // w1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  int32_t v21; // w1
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int32_t v27; // w1
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  int32_t v30; // w1
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  int32_t v33; // w1
  int32_t v34; // w2
  const MethodInfo *v35; // x3
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  __int64 v38; // x19
  int32_t v39; // w1
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w1
  struct SoundTestMenu_StaticFields *static_fields; // x0
  int32_t v47; // w2
  const MethodInfo *v48; // x3

  if ( (byte_4CB3A06 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&StringLiteral_12025/*"SE_"*/);
    sub_1C6BA08(&StringLiteral_9515/*"NoblePhantasm_"*/);
    sub_1C6BA08(&StringLiteral_25597/*"昇順"*/);
    sub_1C6BA08(&StringLiteral_11510/*"SE"*/);
    sub_1C6BA08(&StringLiteral_4414/*"ChrVoice_"*/);
    sub_1C6BA08(&StringLiteral_12765/*"Servants_"*/);
    sub_1C6BA08(&StringLiteral_15245/*"ValVoice_"*/);
    sub_1C6BA08(&StringLiteral_25625/*"降順"*/);
    sub_1C6BA08(&StringLiteral_11375/*"ResourceSound"*/);
    sub_1C6BA08(&StringLiteral_11367/*"ResidentSE"*/);
    sub_1C6BA08(&StringLiteral_9273/*"NONE"*/);
    sub_1C6BA08(&StringLiteral_3076/*"Battle"*/);
    sub_1C6BA08(&StringLiteral_25516/*"キュー順"*/);
    byte_4CB3A06 = 1;
  }
  v1 = sub_1C6BAB0(string___TypeInfo, 10);
  if ( !v1 )
    goto LABEL_20;
  v5 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v6 = StringLiteral_4414/*"ChrVoice_"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_4414/*"ChrVoice_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 32), v6, v3, v4);
  if ( *(_DWORD *)(v5 + 24) <= 1u )
    goto LABEL_19;
  v9 = StringLiteral_9515/*"NoblePhantasm_"*/;
  *(_QWORD *)(v5 + 40) = StringLiteral_9515/*"NoblePhantasm_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 40), v9, v7, v8);
  if ( *(_DWORD *)(v5 + 24) <= 2u )
    goto LABEL_19;
  v12 = StringLiteral_12765/*"Servants_"*/;
  *(_QWORD *)(v5 + 48) = StringLiteral_12765/*"Servants_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 48), v12, v10, v11);
  if ( *(_DWORD *)(v5 + 24) <= 3u )
    goto LABEL_19;
  v15 = StringLiteral_15245/*"ValVoice_"*/;
  *(_QWORD *)(v5 + 56) = StringLiteral_15245/*"ValVoice_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 56), v15, v13, v14);
  if ( *(_DWORD *)(v5 + 24) <= 4u )
    goto LABEL_19;
  v18 = StringLiteral_12025/*"SE_"*/;
  *(_QWORD *)(v5 + 64) = StringLiteral_12025/*"SE_"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 64), v18, v16, v17);
  if ( *(_DWORD *)(v5 + 24) <= 5u )
    goto LABEL_19;
  v21 = StringLiteral_11367/*"ResidentSE"*/;
  *(_QWORD *)(v5 + 72) = StringLiteral_11367/*"ResidentSE"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 72), v21, v19, v20);
  if ( *(_DWORD *)(v5 + 24) <= 6u )
    goto LABEL_19;
  v24 = StringLiteral_11510/*"SE"*/;
  *(_QWORD *)(v5 + 80) = StringLiteral_11510/*"SE"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 80), v24, v22, v23);
  if ( *(_DWORD *)(v5 + 24) <= 7u
    || (v27 = StringLiteral_3076/*"Battle"*/,
        *(_QWORD *)(v5 + 88) = StringLiteral_3076/*"Battle"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 88), v27, v25, v26),
        *(_DWORD *)(v5 + 24) <= 8u)
    || (v30 = StringLiteral_11375/*"ResourceSound"*/,
        *(_QWORD *)(v5 + 96) = StringLiteral_11375/*"ResourceSound"*/,
        sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 96), v30, v28, v29),
        *(_DWORD *)(v5 + 24) <= 9u) )
  {
LABEL_19:
    sub_1C6BC68(v1);
  }
  v33 = StringLiteral_9273/*"NONE"*/;
  *(_QWORD *)(v5 + 104) = StringLiteral_9273/*"NONE"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 104), v33, v31, v32);
  SoundTestMenu_TypeInfo->static_fields->sePrefixList = (struct System_String_array *)v5;
  sub_1C6B9AC((CGThumbnailListItem_o *)SoundTestMenu_TypeInfo->static_fields, v5, v34, v35);
  v1 = sub_1C6BAB0(string___TypeInfo, 3);
  if ( !v1 )
LABEL_20:
    sub_1C6BC60(v1, v2);
  v38 = v1;
  if ( !*(_DWORD *)(v1 + 24) )
    goto LABEL_19;
  v39 = StringLiteral_25516/*"キュー順"*/;
  *(_QWORD *)(v1 + 32) = StringLiteral_25516/*"キュー順"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v1 + 32), v39, v36, v37);
  if ( *(_DWORD *)(v38 + 24) <= 1u )
    goto LABEL_19;
  v42 = StringLiteral_25597/*"昇順"*/;
  *(_QWORD *)(v38 + 40) = StringLiteral_25597/*"昇順"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v38 + 40), v42, v40, v41);
  if ( *(_DWORD *)(v38 + 24) <= 2u )
    goto LABEL_19;
  v45 = StringLiteral_25625/*"降順"*/;
  *(_QWORD *)(v38 + 48) = StringLiteral_25625/*"降順"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v38 + 48), v45, v43, v44);
  static_fields = SoundTestMenu_TypeInfo->static_fields;
  static_fields->sortNameList = (struct System_String_array *)v38;
  sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->sortNameList, v38, v47, v48);
}


void SoundTestMenu___ctor(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t v5; // w1
  System_Collections_Generic_List_object__o *v6; // x20
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Collections_Generic_List_object__o *v9; // x20
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  System_Collections_Generic_List_object__o *v12; // x20
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  System_Collections_Generic_List_object__o *v15; // x20
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_object__o *v21; // x20
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  int32_t v24; // w1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_Dictionary_TKey__TValue__o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3

  if ( (byte_4CB3A05 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_997/*"./OutputCueList/"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A05 = 1;
  }
  v5 = StringLiteral_997/*"./OutputCueList/"*/;
  this->fields.cueListOutputPath = (struct System_String_o *)StringLiteral_997/*"./OutputCueList/"*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cueListOutputPath, v5, v2, v3);
  v6 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v6,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputBgmCueName = (struct System_Collections_Generic_List_string__o *)v6;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.inputBgmCueName, (int32_t)v6, v7, v8);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.bgmCpkList = (struct System_Collections_Generic_List_string__o *)v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmCpkList, (int32_t)v9, v10, v11);
  v12 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.inputSeCueName = (struct System_Collections_Generic_List_string__o *)v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.inputSeCueName, (int32_t)v12, v13, v14);
  v15 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v15,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.exclusionList = (struct System_Collections_Generic_List_string__o *)v15;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.exclusionList, (int32_t)v15, v16, v17);
  v18 = StringLiteral_1/*""*/;
  this->fields.pathDiffDirectory = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.pathDiffDirectory, v18, v19, v20);
  v21 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v21,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  this->fields.seCpkList = (struct System_Collections_Generic_List_string__o *)v21;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seCpkList, (int32_t)v21, v22, v23);
  v24 = StringLiteral_1/*""*/;
  this->fields.currentAssetVersionName = (struct System_String_o *)StringLiteral_1/*""*/;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentAssetVersionName, v24, v25, v26);
  v27 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v27,
    (const MethodInfo_34B8088 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
  this->fields.bgmCpkData = (struct System_Collections_Generic_Dictionary_string__long__o *)v27;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmCpkData, (int32_t)v27, v28, v29);
  TestScript_DebugTest_DebugItem_DebugItemMenuBase___ctor((TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this, 0);
}


void SoundTestMenu__Awake(SoundTestMenu_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu__CheckBgmVersionDiff(
        SoundTestMenu_o *this,
        System_String_o *compareVersion,
        const MethodInfo *method)
{
  System_Collections_Generic_IDictionary_TKey__TValue__o *bgmCpkData; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x24
  System_String_o *v7; // x25
  System_Collections_Generic_List_object__o *v8; // x21
  System_Collections_Generic_List_object__o *v9; // x22
  System_Collections_Generic_List_object__o *v10; // x23
  int64_t AllLines; // x0
  __int64 v12; // x1
  int v13; // w8
  int64_t v14; // x25
  unsigned int v15; // w29
  Il2CppObject *v16; // x26
  int64_t v17; // x27
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_Object_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct System_Object_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  _BOOL8 v30; // x0
  __int64 v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  Il2CppObject *key; // x1
  struct System_Object_array *v35; // x8
  _QWORD *v36; // x9
  __int64 v37; // x10
  Il2CppClass **v38; // x0
  System_String_o *v39; // x24
  const MethodInfo *v40; // x5
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x5
  SoundTestMenu_o *v43; // [xsp+0h] [xbp-A0h]
  System_String_o *v44; // [xsp+8h] [xbp-98h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v45; // [xsp+10h] [xbp-90h] BYREF

  if ( (byte_4CB39F8 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long___ctor___78473624);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&StringLiteral_1019/*".csv"*/);
    sub_1C6BA08(&StringLiteral_1057/*"/BGM/"*/);
    sub_1C6BA08(&StringLiteral_1058/*"/BGM/Diff"*/);
    sub_1C6BA08(&StringLiteral_4353/*"ChangeFiles"*/);
    sub_1C6BA08(&StringLiteral_2144/*"AddFiles"*/);
    sub_1C6BA08(&StringLiteral_5216/*"DeleteFiles"*/);
    byte_4CB39F8 = 1;
  }
  memset(&v45, 0, sizeof(v45));
  bgmCpkData = (System_Collections_Generic_IDictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor_55279976(
    v6,
    bgmCpkData,
    (const MethodInfo_34B8168 *)Method_System_Collections_Generic_Dictionary_string__long___ctor___78473624);
  v43 = this;
  v44 = compareVersion;
  v7 = System_String__Concat_64007060(
         this->fields.pathDiffDirectory,
         (System_String_o *)StringLiteral_1057/*"/BGM/"*/,
         compareVersion,
         (System_String_o *)StringLiteral_1019/*".csv"*/,
         0);
  v8 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  v9 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v9,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  v10 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v10,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
  AllLines = (int64_t)System_IO_File__ReadAllLines(v7, 0);
  if ( !AllLines )
    goto LABEL_37;
  v13 = *(_DWORD *)(AllLines + 24);
  v14 = AllLines;
  if ( v13 >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= v13 )
        sub_1C6BC68(AllLines);
      AllLines = *(_QWORD *)(v14 + 8LL * (int)v15 + 32);
      if ( !AllLines )
        break;
      AllLines = (int64_t)System_String__Split((System_String_o *)AllLines, 0x2Cu, 0, 0);
      if ( !AllLines )
        break;
      if ( *(_DWORD *)(AllLines + 24) != 2 )
        return;
      v16 = *(Il2CppObject **)(AllLines + 32);
      AllLines = System_Int64__Parse(*(System_String_o **)(AllLines + 40), 0);
      if ( !v6 )
        break;
      v17 = AllLines;
      AllLines = System_Collections_Generic_Dictionary_object__long___ContainsKey(
                   v6,
                   v16,
                   (const MethodInfo_34B8C2C *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
      if ( (AllLines & 1) != 0 )
      {
        AllLines = System_Collections_Generic_Dictionary_object__long___get_Item(
                     v6,
                     v16,
                     (const MethodInfo_34B89B8 *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
        if ( v17 != AllLines )
        {
          if ( !v9 )
            break;
          items = v9->fields._items;
          v23 = Method_System_Collections_Generic_List_string__Add__;
          ++v9->fields._version;
          if ( !items )
            break;
          size = v9->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v9,
              v16,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
          }
          else
          {
            v25 = &items->obj.klass + size;
            v9->fields._size = size + 1;
            v25[4] = (Il2CppClass *)v16;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)v16, v20, v21);
          }
        }
        AllLines = System_Collections_Generic_Dictionary_object__long___Remove(
                     v6,
                     v16,
                     (const MethodInfo_34B9EDC *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
      }
      else
      {
        if ( !v10 )
          break;
        v26 = v10->fields._items;
        v27 = Method_System_Collections_Generic_List_string__Add__;
        ++v10->fields._version;
        if ( !v26 )
          break;
        v28 = v10->fields._size;
        if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v10,
            v16,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
        }
        else
        {
          v29 = &v26->obj.klass + v28;
          v10->fields._size = v28 + 1;
          v29[4] = (Il2CppClass *)v16;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)v16, v18, v19);
        }
      }
      v13 = *(_DWORD *)(v14 + 24);
      if ( (int)++v15 >= v13 )
        goto LABEL_25;
    }
LABEL_37:
    sub_1C6BC60(AllLines, v12);
  }
LABEL_25:
  if ( !v6 )
    goto LABEL_37;
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v45,
    v6,
    (const MethodInfo_34B8E24 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  while ( 1 )
  {
    v30 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v45,
            (const MethodInfo_35B8418 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    if ( !v30 )
      break;
    if ( !v8 )
      sub_1C6BC60(v30, v31);
    key = v45.fields._current.fields.key;
    v35 = v8->fields._items;
    v36 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v35 )
      sub_1C6BC60(v30, key);
    v37 = v8->fields._size;
    if ( (unsigned int)v37 >= LODWORD(v35->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        key,
        *(const MethodInfo_3800974 **)(*(_QWORD *)(v36[4] + 192LL) + 112LL));
    }
    else
    {
      v38 = &v35->obj.klass + v37;
      v8->fields._size = v37 + 1;
      v38[4] = (Il2CppClass *)key;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v38 + 4), (int32_t)key, v32, v33);
    }
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v45,
    (const MethodInfo_35B8538 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  v39 = System_String__Concat_63966792(v43->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1058/*"/BGM/Diff"*/, 0);
  if ( System_IO_Directory__Exists(v39, 0) )
    System_IO_Directory__Delete(v39, 1, 0);
  System_IO_Directory__CreateDirectory(v39, 0);
  SoundTestMenu__OutputBgmDiffResult(
    v43,
    v39,
    (System_String_o *)StringLiteral_2144/*"AddFiles"*/,
    v44,
    (System_Collections_Generic_List_string__o *)v8,
    v40);
  SoundTestMenu__OutputBgmDiffResult(
    v43,
    v39,
    (System_String_o *)StringLiteral_4353/*"ChangeFiles"*/,
    v44,
    (System_Collections_Generic_List_string__o *)v9,
    v41);
  SoundTestMenu__OutputBgmDiffResult(
    v43,
    v39,
    (System_String_o *)StringLiteral_5216/*"DeleteFiles"*/,
    v44,
    (System_Collections_Generic_List_string__o *)v10,
    v42);
}


System_Collections_IEnumerator_o *SoundTestMenu__CheckSeVersionDiff(
        SoundTestMenu_o *this,
        System_String_o *compareVersion,
        const MethodInfo *method)
{
  __int64 v5; // x21
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB39F0 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
    byte_4CB39F0 = 1;
  }
  v5 = sub_1C6BC54(SoundTestMenu__CheckSeVersionDiff_d__116_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 32), (int32_t)this, v6, v7);
  *(_QWORD *)(v5 + 56) = compareVersion;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v5 + 56), (int32_t)compareVersion, v8, v9);
  return (System_Collections_IEnumerator_o *)v5;
}


void SoundTestMenu__CompareCueList(
        SoundTestMenu_o *this,
        System_Collections_Generic_Dictionary_string__long__o *oldList,
        System_Collections_Generic_Dictionary_string__long__o *nowList,
        System_Collections_Generic_List_string__o *addedList,
        System_Collections_Generic_List_string__o *changedList,
        System_Collections_Generic_List_string__o *deletedList,
        const MethodInfo *method)
{
  _BOOL8 v12; // x0
  __int64 v13; // x1
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  Il2CppObject *key; // x23
  Il2CppObject *value; // x29
  int64_t Item; // x0
  __int64 v19; // x1
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  struct System_String_array *items; // x8
  _QWORD *v23; // x9
  __int64 size; // x10
  Il2CppClass **v25; // x0
  struct System_String_array *v26; // x8
  _QWORD *v27; // x9
  __int64 v28; // x10
  Il2CppClass **v29; // x0
  SoundTestMenu___c_c *v30; // x0
  System_Func_T__TResult__o *_9__117_1; // x21
  Il2CppObject *v32; // x22
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  CGThumbnailListItem_o *p__9__117_1; // x0
  SoundTestMenu___c_c *v37; // x0
  Il2CppObject *v38; // x22
  struct SoundTestMenu___c_StaticFields *v39; // x0
  System_Collections_Generic_IEnumerable_T__o *v40; // x0
  __int64 v41; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v42; // [xsp+8h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v43; // [xsp+30h] [xbp-90h] BYREF

  if ( (byte_4CB39F1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__Remove__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C6BA08(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_SoundTestMenu___c__CompareCueList_b__117_0__);
    sub_1C6BA08(&Method_SoundTestMenu___c__CompareCueList_b__117_1__);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    byte_4CB39F1 = 1;
  }
  memset(&v43, 0, sizeof(v43));
  if ( (unsigned __int64)oldList | (unsigned __int64)nowList )
  {
    if ( nowList )
    {
      System_Collections_Generic_Dictionary_object__long___GetEnumerator(
        &v42,
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)nowList,
        (const MethodInfo_34B8E24 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
      v43 = v42;
      while ( 1 )
      {
        v12 = System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
                &v43,
                (const MethodInfo_35B8418 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
        if ( !v12 )
          break;
        key = v43.fields._current.fields.key;
        if ( oldList
          && (value = v43.fields._current.fields.value,
              v12 = System_Collections_Generic_Dictionary_object__long___ContainsKey(
                      (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                      v43.fields._current.fields.key,
                      (const MethodInfo_34B8C2C *)Method_System_Collections_Generic_Dictionary_string__long__ContainsKey__)) )
        {
          Item = System_Collections_Generic_Dictionary_object__long___get_Item(
                   (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
                   key,
                   (const MethodInfo_34B89B8 *)Method_System_Collections_Generic_Dictionary_string__long__get_Item__);
          if ( value != (Il2CppObject *)Item )
          {
            if ( !changedList )
              sub_1C6BC60(Item, v19);
            items = changedList->fields._items;
            v23 = Method_System_Collections_Generic_List_string__Add__;
            ++changedList->fields._version;
            if ( !items )
              sub_1C6BC60(Item, v19);
            size = changedList->fields._size;
            if ( (unsigned int)size >= LODWORD(items->max_length) )
            {
              System_Collections_Generic_List_object___AddWithResize(
                (System_Collections_Generic_List_object__o *)changedList,
                key,
                *(const MethodInfo_3800974 **)(*(_QWORD *)(v23[4] + 192LL) + 112LL));
            }
            else
            {
              v25 = &items->obj.klass + size;
              changedList->fields._size = size + 1;
              v25[4] = (Il2CppClass *)key;
              sub_1C6B9AC((CGThumbnailListItem_o *)(v25 + 4), (int32_t)key, v20, v21);
            }
          }
          System_Collections_Generic_Dictionary_object__long___Remove(
            (System_Collections_Generic_Dictionary_TKey__TValue__o *)oldList,
            key,
            (const MethodInfo_34B9EDC *)Method_System_Collections_Generic_Dictionary_string__long__Remove__);
        }
        else
        {
          if ( !addedList )
            sub_1C6BC60(v12, v13);
          v26 = addedList->fields._items;
          v27 = Method_System_Collections_Generic_List_string__Add__;
          ++addedList->fields._version;
          if ( !v26 )
            sub_1C6BC60(v12, v13);
          v28 = addedList->fields._size;
          if ( (unsigned int)v28 >= LODWORD(v26->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              (System_Collections_Generic_List_object__o *)addedList,
              key,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v29 = &v26->obj.klass + v28;
            addedList->fields._size = v28 + 1;
            v29[4] = (Il2CppClass *)key;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v29 + 4), (int32_t)key, v14, v15);
          }
        }
      }
      System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
        &v43,
        (const MethodInfo_35B8538 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
      v30 = SoundTestMenu___c_TypeInfo;
      if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
        v30 = SoundTestMenu___c_TypeInfo;
      }
      _9__117_1 = (System_Func_T__TResult__o *)v30->static_fields->__9__117_1;
      if ( _9__117_1 )
        goto LABEL_34;
      if ( !v30->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v30);
        v30 = SoundTestMenu___c_TypeInfo;
      }
      v32 = (Il2CppObject *)v30->static_fields->__9;
      _9__117_1 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_KeyValuePair_string__long___string__TypeInfo);
      System_Func_KeyValuePair_object__long___object____ctor(
        _9__117_1,
        v32,
        Method_SoundTestMenu___c__CompareCueList_b__117_1__,
        0);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
      static_fields->__9__117_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_1;
      p__9__117_1 = (CGThumbnailListItem_o *)&static_fields->__9__117_1;
    }
    else
    {
      v37 = SoundTestMenu___c_TypeInfo;
      if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
        v37 = SoundTestMenu___c_TypeInfo;
      }
      _9__117_1 = (System_Func_T__TResult__o *)v37->static_fields->__9__117_0;
      if ( _9__117_1 )
        goto LABEL_34;
      if ( !v37->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v37);
        v37 = SoundTestMenu___c_TypeInfo;
      }
      v38 = (Il2CppObject *)v37->static_fields->__9;
      _9__117_1 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_KeyValuePair_string__long___string__TypeInfo);
      System_Func_KeyValuePair_object__long___object____ctor(
        _9__117_1,
        v38,
        Method_SoundTestMenu___c__CompareCueList_b__117_0__,
        0);
      v39 = SoundTestMenu___c_TypeInfo->static_fields;
      v39->__9__117_0 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__117_1;
      p__9__117_1 = (CGThumbnailListItem_o *)&v39->__9__117_0;
    }
    sub_1C6B9AC(p__9__117_1, (int32_t)_9__117_1, v33, v34);
LABEL_34:
    v40 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                           (System_Collections_Generic_IEnumerable_TSource__o *)oldList,
                                                           (System_Func_TSource__TResult__o *)_9__117_1,
                                                           (const MethodInfo_316D350 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    if ( !deletedList )
      sub_1C6BC60(v40, v41);
    System_Collections_Generic_List_object___AddRange(
      (System_Collections_Generic_List_object__o *)deletedList,
      v40,
      (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
  }
}


void SoundTestMenu__OnClickBgmDiffButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UnityEngine_GameObject_o *v5; // x21
  bool activeSelf; // w20
  const MethodInfo *v7; // x1

  if ( (byte_4CB39F4 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8870/*"MainRoot"*/);
    sub_1C6BA08(&StringLiteral_5255/*"DiffRoot"*/);
    byte_4CB39F4 = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_8870/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (v5 = (UnityEngine_GameObject_o *)gameObject,
        activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)gameObject, 0),
        UnityEngine_GameObject__SetActive(v5, !activeSelf, 0),
        (gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                                   this->fields.bgmRoot,
                                                   (System_String_o *)StringLiteral_5255/*"DiffRoot"*/,
                                                   0)) == 0)
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0 )
  {
    sub_1C6BC60(gameObject, v4);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, activeSelf, 0);
  SoundTestMenu__SetDiffSwitchButtonLabel(this, v7);
}


void SoundTestMenu__OnClickOutputBgmVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *v2; // x19
  struct UIPopupList_o *bgmVersionList; // x8
  const MethodInfo *v4; // x2
  struct UIPopupList_o *v5; // x8

  v2 = this;
  if ( (byte_4CB39F7 & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C6BA08(&StringLiteral_9530/*"None"*/);
    byte_4CB39F7 = 1;
  }
  bgmVersionList = v2->fields.bgmVersionList;
  if ( !bgmVersionList )
    goto LABEL_7;
  this = (SoundTestMenu_o *)System_String__op_Equality(
                              bgmVersionList->fields.mSelectedItem,
                              (System_String_o *)StringLiteral_9530/*"None"*/,
                              0);
  if ( ((unsigned __int8)this & 1) != 0 )
    return;
  v5 = v2->fields.bgmVersionList;
  if ( !v5 )
LABEL_7:
    sub_1C6BC60(this, method);
  SoundTestMenu__CheckBgmVersionDiff(v2, v5->fields.mSelectedItem, v4);
}


void SoundTestMenu__OnClickOutputCurrentVersionBgmList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x20
  __int64 v4; // x1
  System_Collections_Generic_Dictionary_TKey__TValue__o *bgmCpkData; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v7; // x21
  System_String_o *v8; // x1
  System_String_o *v9; // x0
  System_String_o *v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *value; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v13; // [xsp+10h] [xbp-80h] BYREF

  if ( (byte_4CB39F6 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__long__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Value__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_1019/*".csv"*/);
    sub_1C6BA08(&StringLiteral_1057/*"/BGM/"*/);
    sub_1C6BA08(&StringLiteral_2903/*"BGM"*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    byte_4CB39F6 = 1;
  }
  value = 0;
  memset(&v13, 0, sizeof(v13));
  v3 = System_String__Concat_64007060(
         this->fields.pathDiffDirectory,
         (System_String_o *)StringLiteral_1057/*"/BGM/"*/,
         this->fields.currentAssetVersionName,
         (System_String_o *)StringLiteral_1019/*".csv"*/,
         0);
  if ( System_IO_File__Exists(v3, 0) )
    System_IO_File__Delete(v3, 0);
  bgmCpkData = (System_Collections_Generic_Dictionary_TKey__TValue__o *)this->fields.bgmCpkData;
  if ( !bgmCpkData )
    sub_1C6BC60(0, v4);
  System_Collections_Generic_Dictionary_object__long___GetEnumerator(
    &v13,
    bgmCpkData,
    (const MethodInfo_34B8E24 *)Method_System_Collections_Generic_Dictionary_string__long__GetEnumerator__);
  while ( System_Collections_Generic_Dictionary_Enumerator_object__long___MoveNext(
            &v13,
            (const MethodInfo_35B8418 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__MoveNext__) )
  {
    current = v13.fields._current;
    v7 = System_String__Concat_63966792(
           (System_String_o *)v13.fields._current.fields.key,
           (System_String_o *)StringLiteral_808/*","*/,
           0);
    value = current.fields.value;
    v8 = System_Int64__ToString((int64_t)&value, 0);
    v9 = System_String__Concat_63966792(v7, v8, 0);
    v10 = System_String__Concat_63966792(v9, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    System_IO_File__AppendAllText(v3, v10, 0);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__long___Dispose(
    &v13,
    (const MethodInfo_35B8538 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__long__Dispose__);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_2903/*"BGM"*/, v11);
}


void SoundTestMenu__OnClickOutputCurrentVersionSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SoundTestMenu__OutputCurrentSeList(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__OnClickOutputSeVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_o *v2; // x19
  struct UIPopupList_o *versionList; // x8
  System_String_o *mSelectedItem; // x20
  const MethodInfo *v5; // x2
  System_Collections_IEnumerator_o *v6; // x1

  v2 = this;
  if ( (byte_4CB39EF & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C6BA08(&StringLiteral_9530/*"None"*/);
    byte_4CB39EF = 1;
  }
  versionList = v2->fields.versionList;
  if ( !versionList )
    sub_1C6BC60(this, method);
  mSelectedItem = versionList->fields.mSelectedItem;
  if ( !System_String__op_Equality(mSelectedItem, (System_String_o *)StringLiteral_9530/*"None"*/, 0) )
  {
    v6 = SoundTestMenu__CheckSeVersionDiff(v2, mSelectedItem, v5);
    UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)v2, v6, 0);
  }
}


void SoundTestMenu__OutputBgmDiffResult(
        SoundTestMenu_o *this,
        System_String_o *outputDir,
        System_String_o *fileName,
        System_String_o *targetVersionName,
        System_Collections_Generic_List_string__o *diffList,
        const MethodInfo *method)
{
  System_String_o *v11; // x19
  System_String_o *v12; // x0
  __int64 v13; // x0
  __int64 v14; // x1
  Il2CppObject *current; // x20
  System_Collections_Generic_List_Enumerator_object__o v16; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4CB39F9 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_25499/*"このバージョン間では差分はありません。"*/);
    sub_1C6BA08(&StringLiteral_1037/*".txt"*/);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_166/*" <--> "*/);
    sub_1C6BA08(&StringLiteral_44/*"\n\n"*/);
    byte_4CB39F9 = 1;
  }
  memset(&v16, 0, sizeof(v16));
  v11 = System_String__Concat_64007060(
          outputDir,
          (System_String_o *)StringLiteral_1041/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1037/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v11, 0) )
    System_IO_File__Delete(v11, 0);
  v12 = System_String__Concat_64007060(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_166/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v11, v12, 0);
  v13 = System_Linq_Enumerable__Count_object_(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_string___);
  if ( (_DWORD)v13 )
  {
    if ( !diffList )
      sub_1C6BC60(v13, v14);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v16,
      (System_Collections_Generic_List_object__o *)diffList,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v16,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      current = v16.fields._current;
      System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      System_IO_File__AppendAllText(v11, (System_String_o *)current, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v16,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  else
  {
    System_IO_File__AppendAllText(v11, (System_String_o *)StringLiteral_25499/*"このバージョン間では差分はありません。"*/, 0);
  }
}


System_Collections_IEnumerator_o *SoundTestMenu__OutputCurrentSeList(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB39EE & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
    byte_4CB39EE = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu__OutputCurrentSeList_d__114_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void SoundTestMenu__OutputDiffFile(
        SoundTestMenu_o *this,
        System_String_o *outputDir,
        System_String_o *fileName,
        System_String_o *targetVersionName,
        System_Collections_Generic_Dictionary_string__List_string___o *diffList,
        System_String_o *filterCpk,
        const MethodInfo *method)
{
  System_String_o *v13; // x19
  System_String_o *v14; // x0
  __int64 v15; // x0
  __int64 v16; // x1
  System_String_o *v17; // x0
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_String_o *v19; // x0
  System_String_o *v20; // x1
  __int64 v21; // x0
  __int64 v22; // x1
  Il2CppObject *v23; // x20
  System_String_o *v24; // x1
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v25; // [xsp+8h] [xbp-D8h] BYREF
  System_Collections_Generic_List_Enumerator_object__o v26; // [xsp+30h] [xbp-B0h] BYREF
  int32_t v27; // [xsp+4Ch] [xbp-94h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v28; // [xsp+50h] [xbp-90h] BYREF

  if ( (byte_4CB39F2 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Count_string___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Enumerator_string__get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___get_Current__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__List_string___get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__GetEnumerator__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_19505/*"files)"*/);
    sub_1C6BA08(&StringLiteral_25499/*"このバージョン間では差分はありません。"*/);
    sub_1C6BA08(&StringLiteral_1037/*".txt"*/);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_1016/*".cpk ("*/);
    sub_1C6BA08(&StringLiteral_166/*" <--> "*/);
    sub_1C6BA08(&StringLiteral_44/*"\n\n"*/);
    sub_1C6BA08(&StringLiteral_1018/*".cpkの差分\n"*/);
    sub_1C6BA08(&StringLiteral_25464/*"┗"*/);
    byte_4CB39F2 = 1;
  }
  v27 = 0;
  memset(&v28, 0, sizeof(v28));
  memset(&v26, 0, sizeof(v26));
  v13 = System_String__Concat_64007060(
          outputDir,
          (System_String_o *)StringLiteral_1041/*"/"*/,
          fileName,
          (System_String_o *)StringLiteral_1037/*".txt"*/,
          0);
  if ( System_IO_File__Exists(v13, 0) )
    System_IO_File__Delete(v13, 0);
  v14 = System_String__Concat_64007060(
          this->fields.currentAssetVersionName,
          (System_String_o *)StringLiteral_166/*" <--> "*/,
          targetVersionName,
          (System_String_o *)StringLiteral_44/*"\n\n"*/,
          0);
  System_IO_File__AppendAllText(v13, v14, 0);
  if ( !filterCpk )
    goto LABEL_19;
  if ( filterCpk->fields._stringLength >= 1 )
  {
    v17 = System_String__Concat_63966792(filterCpk, (System_String_o *)StringLiteral_1018/*".cpkの差分\n"*/, 0);
    System_IO_File__AppendAllText(v13, v17, 0);
  }
  v15 = System_Linq_Enumerable__Count_KeyValuePair_object__object__(
          (System_Collections_Generic_IEnumerable_TSource__o *)diffList,
          (const MethodInfo_315AC68 *)Method_System_Linq_Enumerable_Count_KeyValuePair_string__List_string_____);
  if ( !(_DWORD)v15 )
  {
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_25499/*"このバージョン間では差分はありません。"*/, 0);
    return;
  }
  if ( !diffList )
LABEL_19:
    sub_1C6BC60(v15, v16);
  System_Collections_Generic_Dictionary_object__object___GetEnumerator(
    &v25,
    (System_Collections_Generic_Dictionary_object__object__o *)diffList,
    (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__List_string___GetEnumerator__);
  v28 = v25;
  while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
            &v28,
            (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___MoveNext__) )
  {
    current = v28.fields._current;
    System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    v27 = System_Linq_Enumerable__Count_object_(
            (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
            (const MethodInfo_315B7CC *)Method_System_Linq_Enumerable_Count_string___);
    v19 = System_Int32__ToString((int32_t)&v27, 0);
    v20 = System_String__Concat_64007060(
            (System_String_o *)current.fields.key,
            (System_String_o *)StringLiteral_1016/*".cpk ("*/,
            v19,
            (System_String_o *)StringLiteral_19505/*"files)"*/,
            0);
    System_IO_File__AppendAllText(v13, v20, 0);
    if ( !current.fields.value )
      sub_1C6BC60(v21, v22);
    System_Collections_Generic_List_object___GetEnumerator(
      (System_Collections_Generic_List_Enumerator_T__o *)&v25,
      (System_Collections_Generic_List_object__o *)current.fields.value,
      (const MethodInfo_380146C *)Method_System_Collections_Generic_List_string__GetEnumerator__);
    *(_OWORD *)&v26.fields._list = *(_OWORD *)&v25.fields._dictionary;
    v26.fields._current = v25.fields._current.fields.key;
    while ( System_Collections_Generic_List_Enumerator_object___MoveNext(
              &v26,
              (const MethodInfo_3586524 *)Method_System_Collections_Generic_List_Enumerator_string__MoveNext__) )
    {
      v23 = v26.fields._current;
      System_IO_File__AppendAllText(v13, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      v24 = System_String__Concat_63966792((System_String_o *)StringLiteral_25464/*"┗"*/, (System_String_o *)v23, 0);
      System_IO_File__AppendAllText(v13, v24, 0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose(
      &v26,
      (const MethodInfo_3586520 *)Method_System_Collections_Generic_List_Enumerator_string__Dispose__);
  }
  System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
    &v28,
    (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__List_string___Dispose__);
}


void SoundTestMenu__ResetBgmProgressBar(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgmProgressLoopStart; // x0

  bgmProgressLoopStart = this->fields.bgmProgressLoopStart;
  if ( !bgmProgressLoopStart
    || (UnityEngine_GameObject__SetActive(bgmProgressLoopStart, 0, 0),
        (bgmProgressLoopStart = this->fields.bgmProgressLoopEnd) == 0)
    || (UnityEngine_GameObject__SetActive(bgmProgressLoopStart, 0, 0),
        (bgmProgressLoopStart = (UnityEngine_GameObject_o *)this->fields.bgmProgressBar) == 0) )
  {
    sub_1C6BC60(bgmProgressLoopStart, method);
  }
  UIProgressBar__set_value((UIProgressBar_o *)bgmProgressLoopStart, 0.0, 0);
}


void SoundTestMenu__SetDiffSwitchButtonLabel(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *gameObject; // x0
  __int64 v4; // x1
  UILabel_o *diffSwitchButtonLabel; // x19
  System_String_o **v6; // x8

  if ( (byte_4CB39F5 & 1) == 0 )
  {
    sub_1C6BA08(&StringLiteral_8870/*"MainRoot"*/);
    sub_1C6BA08(&StringLiteral_25582/*"差分チェック"*/);
    sub_1C6BA08(&StringLiteral_25583/*"差分チェック\n終了"*/);
    byte_4CB39F5 = 1;
  }
  gameObject = (UnityEngine_Component_o *)GameObjectExtensions__Find(
                                            this->fields.bgmRoot,
                                            (System_String_o *)StringLiteral_8870/*"MainRoot"*/,
                                            0);
  if ( !gameObject
    || (gameObject = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(gameObject, 0)) == 0
    || (diffSwitchButtonLabel = this->fields.diffSwitchButtonLabel,
        gameObject = (UnityEngine_Component_o *)UnityEngine_GameObject__get_activeSelf(
                                                  (UnityEngine_GameObject_o *)gameObject,
                                                  0),
        !diffSwitchButtonLabel) )
  {
    sub_1C6BC60(gameObject, v4);
  }
  v6 = (System_String_o **)&StringLiteral_25582/*"差分チェック"*/;
  if ( ((unsigned __int8)gameObject & 1) == 0 )
    v6 = (System_String_o **)&StringLiteral_25583/*"差分チェック\n終了"*/;
  UILabel__set_text(diffSwitchButtonLabel, *v6, 0);
}


void SoundTestMenu__SetupBgmProgressBar(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *updated; // x1

  updated = SoundTestMenu__UpdateBgmProgressBarCoroutine(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, updated, 0);
}


void SoundTestMenu__SetupVersionDiff(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_String_o *DatFileSavePath; // x0
  struct System_String_o *v4; // x0
  System_String_o **p_pathDiffDirectory; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *v8; // x21
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  ManagerConfig_c *v11; // x8
  System_String_o *v12; // x20
  __int64 v13; // x1
  System_String_o *v14; // x20
  NetworkManager_c *v15; // x0
  System_String_o *dataServerFolder; // x0
  System_String_o *v17; // x0
  struct System_String_o *v18; // x0
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // x3
  struct System_Collections_Generic_List_string__o *seCpkList; // x8
  int32_t size; // w2
  int v25; // w9

  if ( (byte_4CB39F3 & 1) == 0 )
  {
    sub_1C6BA08(&AndroidUtil_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&LocalizationManager_TypeInfo);
    sub_1C6BA08(&ManagerConfig_TypeInfo);
    sub_1C6BA08(&NetworkManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_11510/*"SE"*/);
    sub_1C6BA08(&StringLiteral_16102/*"_"*/);
    sub_1C6BA08(&StringLiteral_1056/*"/BGM"*/);
    sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    sub_1C6BA08(&StringLiteral_2014/*"APP_VERSION_BASE"*/);
    sub_1C6BA08(&StringLiteral_1081/*"/SE"*/);
    sub_1C6BA08(&StringLiteral_2903/*"BGM"*/);
    sub_1C6BA08(&StringLiteral_1079/*"/OutputVersionData"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB39F3 = 1;
  }
  if ( !AndroidUtil_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(AndroidUtil_TypeInfo);
  DatFileSavePath = AndroidUtil__GetDatFileSavePath(0);
  v4 = System_String__Concat_63966792(DatFileSavePath, (System_String_o *)StringLiteral_1079/*"/OutputVersionData"*/, 0);
  p_pathDiffDirectory = &this->fields.pathDiffDirectory;
  this->fields.pathDiffDirectory = v4;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.pathDiffDirectory, (int32_t)v4, v6, v7);
  if ( !System_IO_Directory__Exists(this->fields.pathDiffDirectory, 0) )
    System_IO_Directory__CreateDirectory(*p_pathDiffDirectory, 0);
  v8 = System_String__Concat_63966792(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1081/*"/SE"*/, 0);
  if ( !System_IO_Directory__Exists(v8, 0) )
    System_IO_Directory__CreateDirectory(v8, 0);
  v9 = System_String__Concat_63966792(*p_pathDiffDirectory, (System_String_o *)StringLiteral_1056/*"/BGM"*/, 0);
  if ( !System_IO_Directory__Exists(v9, 0) )
    System_IO_Directory__CreateDirectory(v9, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2014/*"APP_VERSION_BASE"*/, 0);
  v11 = ManagerConfig_TypeInfo;
  v12 = v10;
  if ( !ManagerConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(ManagerConfig_TypeInfo);
    v11 = ManagerConfig_TypeInfo;
  }
  v14 = System_String__Format(v12, (Il2CppObject *)v11->static_fields->AppVer, 0);
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
  if ( !byte_4CB3821 )
  {
    sub_1C6BA08(&NetworkManager_TypeInfo);
    byte_4CB3821 = 1;
  }
  v15 = NetworkManager_TypeInfo;
  if ( !NetworkManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
    v15 = NetworkManager_TypeInfo;
  }
  dataServerFolder = v15->static_fields->dataServerFolder;
  if ( !dataServerFolder )
    goto LABEL_27;
  v17 = System_String__Replace_64013356(
          dataServerFolder,
          (System_String_o *)StringLiteral_1041/*"/"*/,
          (System_String_o *)StringLiteral_1/*""*/,
          0);
  v18 = System_String__Concat_64005056(v14, (System_String_o *)StringLiteral_16102/*"_"*/, v17, 0);
  this->fields.currentAssetVersionName = v18;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.currentAssetVersionName, (int32_t)v18, v19, v20);
  SoundTestMenu__SetupVersionList(this, this->fields.versionList, (System_String_o *)StringLiteral_11510/*"SE"*/, v21);
  SoundTestMenu__SetupVersionList(this, this->fields.bgmVersionList, (System_String_o *)StringLiteral_2903/*"BGM"*/, v22);
  seCpkList = this->fields.seCpkList;
  if ( !seCpkList )
    goto LABEL_27;
  size = seCpkList->fields._size;
  v25 = seCpkList->fields._version + 1;
  seCpkList->fields._size = 0;
  seCpkList->fields._version = v25;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)seCpkList->fields._items, 0, size, 0);
  dataServerFolder = (System_String_o *)this->fields.bgmCpkData;
  if ( !dataServerFolder )
LABEL_27:
    sub_1C6BC60(dataServerFolder, v13);
  System_Collections_Generic_Dictionary_object__long___Clear(
    (System_Collections_Generic_Dictionary_TKey__TValue__o *)dataServerFolder,
    (const MethodInfo_34B8BC0 *)Method_System_Collections_Generic_Dictionary_string__long__Clear__);
}


void SoundTestMenu__SetupVersionList(
        SoundTestMenu_o *this,
        UIPopupList_o *popupList,
        System_String_o *directory,
        const MethodInfo *method)
{
  SoundTestMenu_o *v6; // x21
  System_String_o *v7; // x0
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v9; // x20
  unsigned __int64 v10; // x22
  System_String_o *v11; // x21
  System_String_o *FileNameWithoutExtension; // x0
  Il2CppObject *Item; // x1

  v6 = this;
  if ( (byte_4CB39FA & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&StringLiteral_794/*"*.csv"*/);
    sub_1C6BA08(&StringLiteral_9530/*"None"*/);
    this = (SoundTestMenu_o *)sub_1C6BA08(&StringLiteral_1041/*"/"*/);
    byte_4CB39FA = 1;
  }
  if ( !popupList )
    goto LABEL_16;
  UIPopupList__Clear(popupList, 0);
  v7 = System_String__Concat_64005056(v6->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1041/*"/"*/, directory, 0);
  this = (SoundTestMenu_o *)System_IO_Directory__GetFiles_64827112(v7, (System_String_o *)StringLiteral_794/*"*.csv"*/, 1, 0);
  if ( !this )
    goto LABEL_16;
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  v9 = this;
  if ( m_CancellationTokenSource )
  {
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v10 = 0;
      do
      {
        if ( v10 >= (unsigned int)m_CancellationTokenSource )
          sub_1C6BC68(this);
        v11 = (System_String_o *)*((_QWORD *)&v9->fields.group + v10);
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v11, 0);
        UIPopupList__AddItem(popupList, FileNameWithoutExtension, 0);
        LODWORD(m_CancellationTokenSource) = v9->fields.m_CancellationTokenSource;
        ++v10;
      }
      while ( (__int64)v10 < (int)m_CancellationTokenSource );
    }
    this = (SoundTestMenu_o *)popupList->fields.items;
    if ( this )
    {
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this,
               0,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
      UIPopupList__set_value(popupList, (System_String_o *)Item, 0);
      return;
    }
LABEL_16:
    sub_1C6BC60(this, popupList);
  }
  UIPopupList__AddItem(popupList, (System_String_o *)StringLiteral_9530/*"None"*/, 0);
}


void SoundTestMenu__StartMenu(SoundTestMenu_o *this, const MethodInfo *method)
{
  SoundTestMenu_CallbackFunc_o *v3; // x20
  const MethodInfo *v4; // x3
  const MethodInfo *v5; // x2

  if ( (byte_4CB39DA & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_CallbackFunc_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu__StartMenu_b__78_0__);
    byte_4CB39DA = 1;
  }
  TestScript_DebugTest_DebugItem_DebugItemMenuBase__StartMenu(
    (TestScript_DebugTest_DebugItem_DebugItemMenuBase_o *)this,
    0);
  v3 = (SoundTestMenu_CallbackFunc_o *)sub_1C6BC54(SoundTestMenu_CallbackFunc_TypeInfo);
  SoundTestMenu_CallbackFunc___ctor(v3, (Il2CppObject *)this, Method_SoundTestMenu__StartMenu_b__78_0__, v4);
  SoundTestMenu__open(this, v3, v5);
}


System_Collections_IEnumerator_o *SoundTestMenu__UpdateBgmProgressBarCoroutine(
        SoundTestMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x19

  if ( (byte_4CB3A04 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
    byte_4CB3A04 = 1;
  }
  v2 = sub_1C6BC54(SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_TypeInfo);
  System_Object___ctor((Il2CppObject *)v2, 0);
  *(_DWORD *)(v2 + 16) = 0;
  return (System_Collections_IEnumerator_o *)v2;
}


void SoundTestMenu___createBgmPlayList_b__83_0(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x7
  struct UILabel_o *ItemBgm; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x2
  struct System_Collections_Generic_List_string__o *inputBgmCueName; // x8

  if ( (byte_4CB3A07 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    byte_4CB3A07 = 1;
  }
  ItemBgm = SoundTestMenu__createItemBgm(
              this,
              this->fields.bgmItemParent,
              this->fields.inputBgmCueName,
              this->fields.bgmGrid,
              this->fields.bgmScrollView,
              this->fields.bgmItemLabelSeed,
              1,
              v2);
  this->fields.selectBgmObj = ItemBgm;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectBgmObj, (int32_t)ItemBgm, v5, v6);
  inputBgmCueName = this->fields.inputBgmCueName;
  if ( !inputBgmCueName )
    sub_1C6BC60(v7, v8);
  SoundTestMenu__updateBgmPrevNextButton(this, inputBgmCueName->fields._size > 1, v9);
}


void SoundTestMenu__add_endCallbackFunc(
        SoundTestMenu_o *this,
        SoundTestMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *endCallbackFunc; // x21
  struct SoundTestMenu_CallbackFunc_o **p_endCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundTestMenu_o *v10; // x0
  SoundTestMenu_CallbackFunc_o *v11; // x1
  const MethodInfo *v12; // x2

  if ( (byte_4CB39D8 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_4CB39D8 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  p_endCallbackFunc = &this->fields.endCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v7->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_endCallbackFunc, v7, endCallbackFunc);
    v9 = endCallbackFunc == (System_Delegate_o *)v8;
    endCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  SoundTestMenu__remove_endCallbackFunc(v10, v11, v12);
}


System_Collections_IEnumerator_o *SoundTestMenu__allCpkCueListup(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4CB39ED & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
    byte_4CB39ED = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu__allCpkCueListup_d__112_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__bgmPlay(SoundTestMenu_o *this, int32_t addIdxVal, const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x1
  struct System_String_o *loadBgmCueSheetName; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  SoundTestMenu__stopBgm(this, *(const MethodInfo **)&addIdxVal);
  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmScrollView,
    &this->fields.selectBgmObj,
    this->fields.bgmGrid,
    this->fields.inputBgmCueName,
    addIdxVal,
    v5);
  SoundTestMenu__playBgm(this, v6);
  loadBgmCueSheetName = this->fields.loadBgmCueSheetName;
  this->fields.playBgmCueSheetName = loadBgmCueSheetName;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playBgmCueSheetName, (int32_t)loadBgmCueSheetName, v8, v9);
}


void SoundTestMenu__close(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_GameObject_o *rootObject; // x0

  SoundTestMenu__endInput(this, method);
  rootObject = this->fields.rootObject;
  this->fields.state = 0;
  if ( !rootObject )
    sub_1C6BC60(0, v3);
  UnityEngine_GameObject__SetActive(rootObject, 0, 0);
}


void SoundTestMenu__createBgmPlayList(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmCpkObj; // x20
  _BOOL8 v4; // x0
  __int64 v5; // x1
  struct UILabel_o *v6; // x8
  System_String_o *mText; // x20
  const MethodInfo *v8; // x2
  const MethodInfo *v9; // x3
  System_Collections_Generic_List_string__o *inputBgmCueName; // x21
  System_Action_o *v11; // x22
  const MethodInfo *v12; // x4

  if ( (byte_4CB39DD & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu__createBgmPlayList_b__83_0__);
    byte_4CB39DD = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(selectBgmCpkObj, 0, 0);
  if ( !v4 )
  {
    v6 = this->fields.selectBgmCpkObj;
    if ( !v6 )
      sub_1C6BC60(v4, v5);
    mText = v6->fields.mText;
    if ( System_String__op_Inequality(this->fields.loadBgmCueSheetName, mText, 0)
      && System_String__op_Inequality(this->fields.playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
    {
      SoundTestMenu__releaseBgm(this, this->fields.loadBgmCueSheetName, v8);
    }
    this->fields.loadBgmCueSheetName = mText;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadBgmCueSheetName, (int32_t)mText, (int32_t)v8, v9);
    inputBgmCueName = this->fields.inputBgmCueName;
    v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundTestMenu__createBgmPlayList_b__83_0__, 0);
    SoundTestMenu__openCueList(this, mText, inputBgmCueName, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
UILabel_o *SoundTestMenu__createItemBgm(
        SoundTestMenu_o *this,
        UnityEngine_GameObject_o *itemParent,
        System_Collections_Generic_List_string__o *itemNameList,
        UIGrid_o *itemGrid,
        UIScrollView_o *scrollView,
        UILabel_o *itemLabelSeed,
        bool cntCalc,
        const MethodInfo *method)
{
  SoundTestMenu_o *v14; // x24
  UnityEngine_Transform_o *transform; // x0
  float cellHeight; // s9
  int32_t size; // w25
  UnityEngine_Vector2_o ViewSize; // kr00_8
  UILabel_o *bgmCount; // x23
  System_String_o *v20; // x0
  UILabel_o *v21; // x23
  Il2CppObject *v22; // x24
  int v23; // s1 OVERLAPPED
  int v24; // s2
  float v25; // s3
  float v26; // s0
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v28; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v30; // x0
  int32_t index[2]; // [xsp+8h] [xbp-68h] BYREF

  v14 = this;
  if ( (byte_4CB39DF & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    this = (SoundTestMenu_o *)sub_1C6BA08(&StringLiteral_25603/*"曲数 : "*/);
    byte_4CB39DF = 1;
  }
  *(_QWORD *)index = 0;
  if ( !itemParent )
    goto LABEL_30;
  transform = UnityEngine_GameObject__get_transform(itemParent, 0);
  TransformHelper__DestroyChildren(transform, 0);
  this = (SoundTestMenu_o *)UnityEngine_GameObject__get_transform(itemParent, 0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)this, 0);
  if ( !itemGrid )
    goto LABEL_30;
  if ( !itemNameList )
    goto LABEL_30;
  if ( !scrollView )
    goto LABEL_30;
  cellHeight = itemGrid->fields.cellHeight;
  size = itemNameList->fields._size;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)scrollView, 0);
  if ( !this )
    goto LABEL_30;
  this = (SoundTestMenu_o *)UnityEngine_Component__GetComponent_object_(
                              (UnityEngine_Component_o *)this,
                              (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !this )
    goto LABEL_30;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)this, 0);
  this = (SoundTestMenu_o *)scrollView->fields.verticalScrollBar;
  if ( !this )
    goto LABEL_30;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !this )
    goto LABEL_30;
  UnityEngine_GameObject__SetActive(
    (UnityEngine_GameObject_o *)this,
    (float)(cellHeight * (float)size) > ViewSize.fields.y,
    0);
  if ( cntCalc )
  {
    bgmCount = v14->fields.bgmCount;
    index[1] = itemNameList->fields._size;
    v20 = System_Int32__ToString((int32_t)&index[1], 0);
    this = (SoundTestMenu_o *)System_String__Concat_63966792((System_String_o *)StringLiteral_25603/*"曲数 : "*/, v20, 0);
    if ( !bgmCount )
      goto LABEL_30;
    UILabel__set_text(bgmCount, (System_String_o *)this, 0);
  }
  index[0] = 0;
  if ( itemNameList->fields._size >= 1 )
  {
    v21 = 0;
    while ( 1 )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v22 = UnityEngine_Object__Instantiate_object_(
              (Il2CppObject *)itemLabelSeed,
              (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_UILabel___);
      this = (SoundTestMenu_o *)System_Int32__ToString((int32_t)index, 0);
      if ( !v22 )
        break;
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v22, (System_String_o *)this, 0);
      v23 = 0;
      v24 = 0;
      v25 = 1.0;
      v26 = index[0] ? 0.0 : 1.0;
      if ( !index[0] )
        v21 = (UILabel_o *)v22;
      UIWidget__set_color((UIWidget_o *)v22, *(UnityEngine_Color_o *)(&v23 - 1), 0);
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)itemNameList,
               index[0],
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
      UILabel__set_text((UILabel_o *)v22, (System_String_o *)Item, 0);
      this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      if ( !this )
        break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
      v28 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)v22, 0);
      UIGrid__AddChild(itemGrid, v28, 0);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      GameObjectExtensions__ResetLocalPosition(gameObject, 0);
      v30 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0);
      GameObjectExtensions__ResetLocalScale(v30, 0);
      if ( ++index[0] >= itemNameList->fields._size )
        goto LABEL_29;
    }
LABEL_30:
    sub_1C6BC60(this, itemParent);
  }
  v21 = 0;
LABEL_29:
  ((void (__fastcall *)(UIGrid_o *, const MethodInfo *))itemGrid->klass->vtable._8_Reposition.methodPtr)(
    itemGrid,
    itemGrid->klass->vtable._8_Reposition.method);
  UIScrollView__ResetPosition(scrollView, 0);
  return v21;
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__createSeItem(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seItemParent; // x0
  UnityEngine_Transform_o *transform; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct UIGrid_o *seGrid; // x8
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x9
  float cellHeight; // s9
  int size; // w21
  UnityEngine_Vector2_o ViewSize; // kr00_8
  struct UIScrollView_o *seScrollView; // x8
  struct System_Collections_Generic_List_string__o *v13; // x8
  UILabel_o *seCount; // x21
  System_String_o *v15; // x0
  struct System_Collections_Generic_List_string__o *v16; // x9
  int32_t v17; // w8
  Il2CppObject *seItemLabelSeed; // x21
  Il2CppObject *v19; // x21
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  float v22; // s3
  float v23; // s0 OVERLAPPED
  int v24; // s1
  int v25; // s2
  Il2CppObject *Item; // x0
  UnityEngine_Transform_o *v27; // x22
  UnityEngine_GameObject_o *gameObject; // x0
  int32_t index; // [xsp+8h] [xbp-58h] BYREF
  int32_t v30; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4CB39EA & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UIPanel___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_UnityEngine_Object_Instantiate_UILabel___);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&StringLiteral_11511/*"SE Count : "*/);
    byte_4CB39EA = 1;
  }
  index = 0;
  seItemParent = this->fields.seItemParent;
  if ( !seItemParent )
    goto LABEL_34;
  transform = UnityEngine_GameObject__get_transform(seItemParent, 0);
  TransformHelper__DestroyChildren(transform, 0);
  seItemParent = this->fields.seItemParent;
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_transform(seItemParent, 0);
  if ( !seItemParent )
    goto LABEL_34;
  UnityEngine_Transform__DetachChildren((UnityEngine_Transform_o *)seItemParent, 0);
  this->fields.selectSeObj = 0;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectSeObj, 0, v5, v6);
  seGrid = this->fields.seGrid;
  if ( !seGrid )
    goto LABEL_34;
  inputSeCueName = this->fields.inputSeCueName;
  if ( !inputSeCueName )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView;
  if ( !seItemParent )
    goto LABEL_34;
  cellHeight = seGrid->fields.cellHeight;
  size = inputSeCueName->fields._size;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                               (UnityEngine_Component_o *)seItemParent,
                                               0);
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                               (UnityEngine_Component_o *)seItemParent,
                                               (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UIPanel___);
  if ( !seItemParent )
    goto LABEL_34;
  ViewSize = UIPanel__GetViewSize((UIPanel_o *)seItemParent, 0);
  seScrollView = this->fields.seScrollView;
  if ( !seScrollView )
    goto LABEL_34;
  seItemParent = (UnityEngine_GameObject_o *)seScrollView->fields.verticalScrollBar;
  if ( !seItemParent )
    goto LABEL_34;
  seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seItemParent, 0);
  if ( !seItemParent )
    goto LABEL_34;
  UnityEngine_GameObject__SetActive(seItemParent, (float)(cellHeight * (float)size) > ViewSize.fields.y, 0);
  v13 = this->fields.inputSeCueName;
  if ( !v13 )
    goto LABEL_34;
  seCount = this->fields.seCount;
  v30 = v13->fields._size;
  v15 = System_Int32__ToString((int32_t)&v30, 0);
  seItemParent = (UnityEngine_GameObject_o *)System_String__Concat_63966792(
                                               (System_String_o *)StringLiteral_11511/*"SE Count : "*/,
                                               v15,
                                               0);
  if ( !seCount )
    goto LABEL_34;
  UILabel__set_text(seCount, (System_String_o *)seItemParent, 0);
  index = 0;
  v16 = this->fields.inputSeCueName;
  if ( !v16 )
    goto LABEL_34;
  v17 = 0;
  while ( v17 < v16->fields._size )
  {
    seItemLabelSeed = (Il2CppObject *)this->fields.seItemLabelSeed;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v19 = UnityEngine_Object__Instantiate_object_(
            seItemLabelSeed,
            (const MethodInfo_31C7F14 *)Method_UnityEngine_Object_Instantiate_UILabel___);
    seItemParent = (UnityEngine_GameObject_o *)System_Int32__ToString((int32_t)&index, 0);
    if ( v19 )
    {
      UnityEngine_Object__set_name((UnityEngine_Object_o *)v19, (System_String_o *)seItemParent, 0);
      if ( index )
      {
        v22 = 1.0;
        v23 = 0.0;
        v24 = 0;
        v25 = 0;
      }
      else
      {
        this->fields.selectSeObj = (struct UILabel_o *)v19;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectSeObj, (int32_t)v19, v20, v21);
        v23 = 1.0;
        v24 = 0;
        v25 = 0;
        v22 = 1.0;
      }
      UIWidget__set_color((UIWidget_o *)v19, *(UnityEngine_Color_o *)&v23, 0);
      seItemParent = (UnityEngine_GameObject_o *)this->fields.inputSeCueName;
      if ( seItemParent )
      {
        Item = System_Collections_Generic_List_object___get_Item(
                 (System_Collections_Generic_List_object__o *)seItemParent,
                 index,
                 (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
        UILabel__set_text((UILabel_o *)v19, (System_String_o *)Item, 0);
        seItemParent = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
        if ( seItemParent )
        {
          UnityEngine_GameObject__SetActive(seItemParent, 1, 0);
          seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                       (UnityEngine_Component_o *)v19,
                                                       0);
          if ( this->fields.seGrid )
          {
            v27 = (UnityEngine_Transform_o *)seItemParent;
            seItemParent = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                         (UnityEngine_Component_o *)this->fields.seGrid,
                                                         0);
            if ( v27 )
            {
              UnityEngine_Transform__set_parent(v27, (UnityEngine_Transform_o *)seItemParent, 0);
              gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19, 0);
              GameObjectExtensions__ResetLocalScale(gameObject, 0);
              v17 = ++index;
              v16 = this->fields.inputSeCueName;
              if ( v16 )
                continue;
            }
          }
        }
      }
    }
    goto LABEL_34;
  }
  seItemParent = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seItemParent
    || (((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seItemParent->klass[1]._1.element_class)(
          seItemParent,
          seItemParent->klass[1]._1.castClass),
        (seItemParent = (UnityEngine_GameObject_o *)this->fields.seScrollView) == 0) )
  {
LABEL_34:
    sub_1C6BC60(seItemParent, method);
  }
  UIScrollView__ResetPosition((UIScrollView_o *)seItemParent, 0);
}


int32_t SoundTestMenu__customCpkSort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x4

  return SoundTestMenu__sort(this, a, b, this->fields.sortCpkType, v4);
}


int32_t SoundTestMenu__customSort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  _BOOL8 activeSelf; // x0
  const MethodInfo *v9; // x4
  __int64 v10; // x8

  seRoot = this->fields.seRoot;
  if ( !seRoot )
    sub_1C6BC60(0, a);
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v10 = 512;
  if ( activeSelf )
    v10 = 508;
  return SoundTestMenu__sort((SoundTestMenu_o *)activeSelf, a, b, *(_DWORD *)((char *)&this->klass + v10), v9);
}


void SoundTestMenu__endCallback(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct SoundTestMenu_CallbackFunc_o *endCallbackFunc; // x19
  CGThumbnailListItem_o *p_endCallbackFunc; // x0

  endCallbackFunc = this->fields.endCallbackFunc;
  if ( endCallbackFunc )
  {
    p_endCallbackFunc = (CGThumbnailListItem_o *)&this->fields.endCallbackFunc;
    p_endCallbackFunc->klass = 0;
    sub_1C6B9AC(p_endCallbackFunc, 0, v2, v3);
    ((void (__fastcall *)(intptr_t, intptr_t))endCallbackFunc->fields.invoke_impl)(
      endCallbackFunc->fields.method_code,
      endCallbackFunc->fields.method);
  }
}


void SoundTestMenu__endInput(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SoundTestMenu_o *v4; // x0
  const MethodInfo *v5; // x2
  System_String_o *loadSeCueSheetName; // x1
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  UILineInput_o *seAssetNameInput; // x0
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  int32_t size; // w2
  int v12; // w9

  if ( (byte_4CB39DC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4CB39DC = 1;
  }
  if ( this->fields.state )
  {
    SoundTestMenu__stopBgm(this, method);
    SoundTestMenu__stopSe(this, v3);
    loadSeCueSheetName = this->fields.loadSeCueSheetName;
    if ( loadSeCueSheetName )
    {
      SoundTestMenu__releaseSe(v4, loadSeCueSheetName, v5);
      this->fields.loadSeCueSheetName = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadSeCueSheetName, 0, v7, v8);
    }
    seAssetNameInput = this->fields.seAssetNameInput;
    if ( !seAssetNameInput
      || (UILineInput__SetInputEnable(seAssetNameInput, 0, 0), (bgmCpkList = this->fields.bgmCpkList) == 0) )
    {
      sub_1C6BC60(seAssetNameInput, loadSeCueSheetName);
    }
    size = bgmCpkList->fields._size;
    v12 = bgmCpkList->fields._version + 1;
    bgmCpkList->fields._size = 0;
    bgmCpkList->fields._version = v12;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)bgmCpkList->fields._items, 0, size, 0);
    UnityEngine_Input__set_imeCompositionMode(0, 0);
  }
}


void SoundTestMenu__loadSE(
        SoundTestMenu_o *this,
        System_String_o *cueSheetName,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  SeManager_c *v6; // x0
  struct System_String_array *LoadSeList; // x21
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v9; // x22

  if ( (byte_4CB39E8 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB39E8 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4CB3A94 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB3A94 = 1;
  }
  v6 = SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    v6 = SeManager_TypeInfo;
  }
  LoadSeList = v6->static_fields->LoadSeList;
  if ( !LoadSeList )
    sub_1C6BC60(v6, cueSheetName);
  max_length = LoadSeList->max_length;
  if ( (int)max_length < 1 )
  {
LABEL_15:
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__loadAudioAssetStorage(cueSheetName, callBack, 1, 0);
  }
  else
  {
    v9 = 0;
    while ( 1 )
    {
      if ( v9 >= (unsigned int)max_length )
        sub_1C6BC68(v6);
      v6 = (SeManager_c *)System_String__Compare_63998976(cueSheetName, LoadSeList->m_Items[v9], 1, 0);
      if ( !(_DWORD)v6 )
        break;
      LODWORD(max_length) = LoadSeList->max_length;
      if ( (__int64)++v9 >= (int)max_length )
        goto LABEL_15;
    }
    if ( callBack )
      ActionExtensions__Call(callBack, 0);
  }
}


void SoundTestMenu__moveScrollViewSelectItem(
        SoundTestMenu_o *this,
        UIScrollView_o *scrollView,
        UnityEngine_GameObject_o *selectObj,
        const MethodInfo *method)
{
  UnityEngine_Vector3_o position; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v6; // 0:s0.4,4:s1.4,8:s2.4

  if ( !selectObj
    || (this = (SoundTestMenu_o *)UnityEngine_GameObject__get_transform(selectObj, 0)) == 0
    || (position = UnityEngine_Transform__get_position((UnityEngine_Transform_o *)this, 0), !scrollView) )
  {
    sub_1C6BC60(this, scrollView);
  }
  v6.fields.y = -position.fields.y;
  v6.fields.x = 0.0;
  v6.fields.z = 0.0;
  UIScrollView__MoveAbsolute(scrollView, v6, 0);
  UIScrollView__UpdatePosition(scrollView, 0);
}


void SoundTestMenu__offsetSelectObj(
        SoundTestMenu_o *this,
        UIScrollView_o *scrollView,
        UILabel_o **selectObj,
        UIGrid_o *parentGrid,
        System_Collections_Generic_List_string__o *cueNameList,
        int32_t addIdxVal,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v12; // x25
  int32_t v13; // w24
  SoundTestMenu_o *v14; // x26
  Il2CppObject *Component_object; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  SoundTestMenu_o *gameObject; // x0
  const MethodInfo *v19; // x3
  UnityEngine_Color_o v20; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB39E3 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    this = (SoundTestMenu_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_Transform__get_Item__);
    byte_4CB39E3 = 1;
  }
  if ( !cueNameList )
    goto LABEL_21;
  if ( cueNameList->fields._size )
  {
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    v20.fields.r = 0.0;
    v20.fields.g = 0.0;
    v20.fields.b = 0.0;
    v20.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v20, 0);
    if ( !parentGrid )
      goto LABEL_21;
    this = (SoundTestMenu_o *)UIGrid__GetChildList(parentGrid, 0);
    if ( !this )
      goto LABEL_21;
    v12 = (System_Collections_Generic_List_object__o *)this;
    if ( SLODWORD(this->fields.m_CancellationTokenSource) >= 1 )
    {
      v13 = 0;
      while ( 1 )
      {
        this = (SoundTestMenu_o *)System_Collections_Generic_List_object___get_Item(
                                    v12,
                                    v13,
                                    (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_Transform__get_Item__);
        if ( !this )
          break;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
        if ( !*selectObj )
          break;
        v14 = this;
        this = (SoundTestMenu_o *)UnityEngine_Object__get_name((UnityEngine_Object_o *)*selectObj, 0);
        if ( !v14 )
          break;
        if ( System_String__Equals_64002112((System_String_o *)v14, (System_String_o *)this, 0) )
          goto LABEL_16;
        if ( ++v13 >= v12->fields._size )
          goto LABEL_15;
      }
LABEL_21:
      sub_1C6BC60(this, scrollView);
    }
LABEL_15:
    v13 = 0;
LABEL_16:
    this = (SoundTestMenu_o *)UIGrid__GetChild(
                                parentGrid,
                                (v13 + addIdxVal + cueNameList->fields._size) % cueNameList->fields._size,
                                0);
    if ( !this )
      goto LABEL_21;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)this,
                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___);
    *selectObj = (UILabel_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)selectObj, (int32_t)Component_object, v16, v17);
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    v21.fields.r = 1.0;
    v21.fields.g = 0.0;
    v21.fields.b = 0.0;
    v21.fields.a = 1.0;
    UIWidget__set_color((UIWidget_o *)this, v21, 0);
    this = (SoundTestMenu_o *)*selectObj;
    if ( !*selectObj )
      goto LABEL_21;
    gameObject = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    SoundTestMenu__moveScrollViewSelectItem(gameObject, scrollView, (UnityEngine_GameObject_o *)gameObject, v19);
  }
}


void SoundTestMenu__onClickAllCpkCueListup(SoundTestMenu_o *this, const MethodInfo *method)
{
  System_Collections_IEnumerator_o *v3; // x1

  v3 = SoundTestMenu__allCpkCueListup(this, method);
  UnityEngine_MonoBehaviour__StartCoroutine_71644868((UnityEngine_MonoBehaviour_o *)this, v3, 0);
}


void SoundTestMenu__onClickBgmCpkItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmCpkObj; // x22
  struct UILabel_o **p_selectBgmCpkObj; // x21
  _BOOL8 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3
  struct System_String_StaticFields *p_mText; // x8
  System_String_o *Empty; // x22
  const MethodInfo *v12; // x1

  if ( (byte_4CB39E0 & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&string_TypeInfo);
    byte_4CB39E0 = 1;
  }
  selectBgmCpkObj = (UnityEngine_Object_o *)this->fields.selectBgmCpkObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  p_selectBgmCpkObj = &this->fields.selectBgmCpkObj;
  v7 = UnityEngine_Object__op_Inequality(selectBgmCpkObj, 0, 0);
  if ( v7 )
  {
    if ( !*p_selectBgmCpkObj )
      goto LABEL_13;
    p_mText = (struct System_String_StaticFields *)&(*p_selectBgmCpkObj)->fields.mText;
  }
  else
  {
    p_mText = string_TypeInfo->static_fields;
  }
  Empty = p_mText->Empty;
  SoundTestMenu__selectItem((SoundTestMenu_o *)v7, &this->fields.selectBgmCpkObj, obj, v9);
  if ( !*p_selectBgmCpkObj )
LABEL_13:
    sub_1C6BC60(v7, v8);
  if ( System_String__op_Inequality((*p_selectBgmCpkObj)->fields.mText, Empty, 0) )
    SoundTestMenu__createBgmPlayList(this, v12);
}


void SoundTestMenu__onClickBgmItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SoundTestMenu__selectItem(this, &this->fields.selectBgmObj, obj, v3);
}


void SoundTestMenu__onClickBgmNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__bgmPlay(this, 1, v2);
}


void SoundTestMenu__onClickBgmPrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__bgmPlay(this, -1, v2);
}


void SoundTestMenu__onClickCancel(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x1

  if ( this->fields.state == 1 )
  {
    SoundTestMenu__endInput(this, method);
    this->fields.state = 3;
    SoundTestMenu__endCallback(this, v3);
  }
}


void SoundTestMenu__onClickChangeSoundTestType(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x20
  SoundTestMenu_o *v3; // x19
  bool activeSelf; // w0
  UnityEngine_GameObject_o *bgmRoot; // x20
  bool v6; // w0
  const MethodInfo *v7; // x1
  const MethodInfo *v8; // x1
  const MethodInfo *v9; // x1

  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_7;
  v3 = this;
  activeSelf = UnityEngine_GameObject__get_activeSelf(this->fields.seRoot, 0);
  UnityEngine_GameObject__SetActive(seRoot, !activeSelf, 0);
  bgmRoot = v3->fields.bgmRoot;
  if ( !bgmRoot
    || (v6 = UnityEngine_GameObject__get_activeSelf(v3->fields.bgmRoot, 0),
        UnityEngine_GameObject__SetActive(bgmRoot, !v6, 0),
        SoundTestMenu__switchButtonLabelChange(v3, v7),
        SoundTestMenu__sortApply(v3, v8),
        (this = (SoundTestMenu_o *)v3->fields.bgmRoot) == 0) )
  {
LABEL_7:
    sub_1C6BC60(this, method);
  }
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)this, 0) )
    SoundTestMenu__sortCpkApply(v3, v9);
}


void SoundTestMenu__onClickCpkNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1

  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmCpkScrollView,
    &this->fields.selectBgmCpkObj,
    this->fields.bgmCpkGrid,
    this->fields.bgmCpkList,
    1,
    v2);
  SoundTestMenu__createBgmPlayList(this, v4);
}


void SoundTestMenu__onClickCpkPrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x6
  const MethodInfo *v4; // x1

  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.bgmCpkScrollView,
    &this->fields.selectBgmCpkObj,
    this->fields.bgmCpkGrid,
    this->fields.bgmCpkList,
    -1,
    v2);
  SoundTestMenu__createBgmPlayList(this, v4);
}


void SoundTestMenu__onClickCpkSearchButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x25
  __int64 v4; // x1
  UIGrid_o *bgmCpkGrid; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x26
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  struct System_String_o **v9; // x23
  System_Collections_Generic_List_string__o *bgmCpkList; // x22
  bool v11; // w27
  System_Func_object__bool__o *v12; // x28
  UIGrid_c *klass; // x8
  UIGrid_o *v14; // x25
  char v15; // w27
  __int64 v16; // x9
  int32_t *p_offset; // x10
  __int64 v18; // x0
  __int64 v19; // x1
  __int64 v20; // x25
  UnityEngine_Object_o *v21; // x26
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x10
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x9
  int *v28; // x10
  __int64 v29; // x0
  UnityEngine_Component_o *v30; // x28
  _BOOL8 v31; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  UnityEngine_Object_o *gameObject; // x27
  UnityEngine_Object_o *v35; // x28
  __int64 v36; // x8
  __int64 v37; // x9
  int *v38; // x10
  __int64 v39; // x0
  int32_t v40; // w2
  const MethodInfo *v41; // x3
  struct System_String_o *v42; // x1
  SoundTestMenu_o *v43; // x0
  const MethodInfo *v44; // x3
  const MethodInfo *v45; // x6
  int32_t v46; // w1
  int32_t v47; // w2
  const MethodInfo *v48; // x3
  const MethodInfo *v49; // x1
  CommonUI_o *v50; // x19
  SoundTestMenu___c_c *v51; // x8
  System_Action_o *_9__139_1; // x22
  System_String_o *v53; // x20
  System_String_o *v54; // x21
  Il2CppObject *v55; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UIGrid_o *v59; // [xsp+38h] [xbp-78h]
  UIScrollView_o *bgmCpkScrollView; // [xsp+40h] [xbp-70h]
  UnityEngine_Component_o *selectBgmCpkObj; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_4CB3A01 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C6BA08(&System_Func_Transform__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass139_0_TypeInfo);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_25500/*"そのサウンドはcpkリスト内に存在しません"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A01 = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu___c__DisplayClass139_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  bgmCpkGrid = this->fields.bgmCpkGrid;
  if ( !bgmCpkGrid )
    goto LABEL_68;
  bgmCpkGrid = (UIGrid_o *)UIGrid__GetChildList(bgmCpkGrid, 0);
  if ( !this->fields.bgmCpkSearchNameInput )
    goto LABEL_68;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)bgmCpkGrid;
  bgmCpkGrid = (UIGrid_o *)UILineInput__GetText(this->fields.bgmCpkSearchNameInput, 0);
  if ( !v3 )
    goto LABEL_68;
  *(_QWORD *)(v3 + 16) = bgmCpkGrid;
  v9 = (struct System_String_o **)(v3 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)bgmCpkGrid, v7, v8);
  selectBgmCpkObj = (UnityEngine_Component_o *)this->fields.selectBgmCpkObj;
  bgmCpkGrid = *(UIGrid_o **)(v3 + 16);
  if ( !bgmCpkGrid )
    goto LABEL_68;
  v59 = this->fields.bgmCpkGrid;
  bgmCpkScrollView = this->fields.bgmCpkScrollView;
  bgmCpkList = this->fields.bgmCpkList;
  v11 = System_String__Equals_64002112((System_String_o *)bgmCpkGrid, this->fields.cpkSearchNamePrev, 0);
  v12 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v12,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass139_0__onClickCpkSearchButton_b__0__,
    0);
  bgmCpkGrid = (UIGrid_o *)System_Linq_Enumerable__Where_object_(
                             v6,
                             (System_Func_TSource__bool__o *)v12,
                             (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !bgmCpkGrid )
    goto LABEL_68;
  klass = bgmCpkGrid->klass;
  v14 = bgmCpkGrid;
  v15 = !v11;
  v16 = *(unsigned __int16 *)&bgmCpkGrid->klass->_2.rank;
  if ( *(_WORD *)&bgmCpkGrid->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v16;
      p_offset += 4;
      if ( !v16 )
        goto LABEL_12;
    }
    v18 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_12:
    v18 = sub_1C41D90(bgmCpkGrid, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v20 = (*(__int64 (__fastcall **)(UIGrid_o *, _QWORD))v18)(v14, *(_QWORD *)(v18 + 8));
  if ( !v20 )
    sub_1C6BC60(0, v19);
  v21 = 0;
  while ( 1 )
  {
    v22 = *(_QWORD *)v20;
    v23 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v24 = (int *)(*(_QWORD *)(v22 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v24 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v23;
        v24 += 4;
        if ( !v23 )
          goto LABEL_20;
      }
      v25 = v22 + 16LL * *v24 + 312;
    }
    else
    {
LABEL_20:
      v25 = sub_1C41D90(v20, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v25)(v20, *(_QWORD *)(v25 + 8)) & 1) == 0 )
    {
      v30 = 0;
      goto LABEL_41;
    }
    v26 = *(_QWORD *)v20;
    v27 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
    {
      v28 = (int *)(*(_QWORD *)(v26 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v28 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v27;
        v28 += 4;
        if ( !v27 )
          goto LABEL_27;
      }
      v29 = v26 + 16LL * *v28 + 312;
    }
    else
    {
LABEL_27:
      v29 = sub_1C41D90(v20, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v30 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v29)(v20, *(_QWORD *)(v29 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v31 = UnityEngine_Object__op_Equality(v21, 0, 0);
    if ( v31 )
      v21 = (UnityEngine_Object_o *)v30;
    if ( (v15 & 1) != 0 )
      break;
    if ( !v30 )
      sub_1C6BC60(v31, v32);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v30, 0);
    if ( !selectBgmCpkObj )
      sub_1C6BC60(0, v33);
    v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(selectBgmCpkObj, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v15 = UnityEngine_Object__op_Equality(gameObject, v35, 0);
  }
  v15 = 1;
LABEL_41:
  v36 = *(_QWORD *)v20;
  v37 = *(unsigned __int16 *)(*(_QWORD *)v20 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v20 + 302LL) )
  {
    v38 = (int *)(*(_QWORD *)(v36 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v38 - 1) != System_IDisposable_TypeInfo )
    {
      --v37;
      v38 += 4;
      if ( !v37 )
        goto LABEL_45;
    }
    v39 = v36 + 16LL * *v38 + 312;
  }
  else
  {
LABEL_45:
    v39 = sub_1C41D90(v20, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v39)(v20, *(_QWORD *)(v39 + 8));
  if ( (v15 & 1) != 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v30, 0, 0) )
      v30 = (UnityEngine_Component_o *)v21;
  }
  v42 = *v9;
  this->fields.cpkSearchNamePrev = *v9;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.cpkSearchNamePrev, (int32_t)v42, v40, v41);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  bgmCpkGrid = (UIGrid_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v30, 0, 0);
  if ( ((unsigned __int8)bgmCpkGrid & 1) != 0 )
  {
    if ( v30 )
    {
      bgmCpkGrid = (UIGrid_o *)UnityEngine_Component__GetComponent_object_(
                                 v30,
                                 (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___);
      if ( bgmCpkGrid )
      {
        v43 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)bgmCpkGrid, 0);
        SoundTestMenu__selectItem(v43, (UILabel_o **)&selectBgmCpkObj, (UnityEngine_GameObject_o *)v43, v44);
        SoundTestMenu__offsetSelectObj(this, bgmCpkScrollView, (UILabel_o **)&selectBgmCpkObj, v59, bgmCpkList, 0, v45);
        v46 = (int)selectBgmCpkObj;
        this->fields.selectBgmCpkObj = (struct UILabel_o *)selectBgmCpkObj;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectBgmCpkObj, v46, v47, v48);
        SoundTestMenu__createBgmPlayList(this, v49);
        return;
      }
    }
LABEL_68:
    sub_1C6BC60(bgmCpkGrid, v4);
  }
  bgmCpkGrid = (UIGrid_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v50 = (CommonUI_o *)bgmCpkGrid;
  v51 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v51 = SoundTestMenu___c_TypeInfo;
  }
  _9__139_1 = v51->static_fields->__9__139_1;
  v53 = (System_String_o *)StringLiteral_25500/*"そのサウンドはcpkリスト内に存在しません"*/;
  v54 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__139_1 )
  {
    if ( !v51->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v51);
      v51 = SoundTestMenu___c_TypeInfo;
    }
    v55 = (Il2CppObject *)v51->static_fields->__9;
    _9__139_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__139_1, v55, Method_SoundTestMenu___c__onClickCpkSearchButton_b__139_1__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__139_1 = _9__139_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__139_1, (int32_t)_9__139_1, v57, v58);
  }
  if ( !v50 )
    goto LABEL_68;
  CommonUI__OpenNotificationDialog(v50, v54, v53, _9__139_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu__onClickCpkSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  int32_t sortCpkType; // w21
  Il2CppType *v4; // x20
  System_RuntimeTypeHandle_o v5; // x0
  System_Type_o *TypeFromHandle; // x20
  System_String_array *Names; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4CB3A02 & 1) == 0 )
  {
    sub_1C6BA08(&System_Enum_TypeInfo);
    sub_1C6BA08(&SoundTestMenu_SortType_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB3A02 = 1;
  }
  sortCpkType = this->fields.sortCpkType;
  v4 = SoundTestMenu_SortType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v5.fields.value = (intptr_t)v4;
  TypeFromHandle = System_Type__GetTypeFromHandle(v5, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  Names = System_Enum__GetNames(TypeFromHandle, 0);
  if ( !Names )
    sub_1C6BC60(0, v8);
  this->fields.sortCpkType = (sortCpkType + 1) % SLODWORD(Names->max_length);
  SoundTestMenu__sortCpkApply(this, v8);
}


void SoundTestMenu__onClickSeItem(SoundTestMenu_o *this, UnityEngine_GameObject_o *obj, const MethodInfo *method)
{
  const MethodInfo *v3; // x3

  SoundTestMenu__selectItem(this, &this->fields.selectSeObj, obj, v3);
}


void SoundTestMenu__onClickSeNext(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__sePlay(this, 1, v2);
}


void SoundTestMenu__onClickSeOpenCue(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UILineInput_o *seAssetNameInput; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  System_String_o *Text; // x0
  System_String_o **v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x2
  System_String_o *loadSeCueSheetName; // x1
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  System_Collections_Generic_List_string__o *inputSeCueName; // x21
  System_String_o *v22; // x22
  System_Action_o *v23; // x23
  const MethodInfo *v24; // x4

  if ( (byte_4CB39E4 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass100_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_9273/*"NONE"*/);
    byte_4CB39E4 = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu___c__DisplayClass100_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_18;
  *(_QWORD *)(v3 + 16) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)this, v6, v7);
  voicePrefixList = this->fields.voicePrefixList;
  if ( !voicePrefixList
    || (seAssetNameInput = this->fields.seAssetNameInput) == 0
    || (mSelectedItem = voicePrefixList->fields.mSelectedItem,
        Text = UILineInput__GetText(seAssetNameInput, 0),
        *(_QWORD *)(v3 + 24) = Text,
        v11 = (System_String_o **)(v3 + 24),
        sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)Text, v12, v13),
        (seAssetNameInput = (UILineInput_o *)this->fields.exclusionList) == 0) )
  {
LABEL_18:
    sub_1C6BC60(seAssetNameInput, v5);
  }
  if ( System_Collections_Generic_List_object___Contains(
         (System_Collections_Generic_List_object__o *)seAssetNameInput,
         (Il2CppObject *)mSelectedItem,
         (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    if ( !System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9273/*"NONE"*/, 0) )
      goto LABEL_12;
  }
  else
  {
    mSelectedItem = System_String__Concat_63966792(mSelectedItem, *v11, 0);
  }
  *v11 = mSelectedItem;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)mSelectedItem, v14, v15);
LABEL_12:
  v16 = System_String__op_Equality(this->fields.loadSeCueSheetName, *v11, 0);
  if ( !v16 && !this->fields.isLoadingSeCueSheet )
  {
    loadSeCueSheetName = this->fields.loadSeCueSheetName;
    if ( loadSeCueSheetName )
    {
      SoundTestMenu__releaseSe((SoundTestMenu_o *)v16, loadSeCueSheetName, v17);
      this->fields.loadSeCueSheetName = 0;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadSeCueSheetName, 0, v19, v20);
    }
    inputSeCueName = this->fields.inputSeCueName;
    this->fields.isLoadingSeCueSheet = 1;
    v22 = *(System_String_o **)(v3 + 24);
    v23 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(
      v23,
      (Il2CppObject *)v3,
      Method_SoundTestMenu___c__DisplayClass100_0__onClickSeOpenCue_b__0__,
      0);
    SoundTestMenu__openCueList(this, v22, inputSeCueName, v23, v24);
  }
}


void SoundTestMenu__onClickSePlay(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 1 )
  {
    if ( this->fields.isPlaySe )
      SoundTestMenu__stopSe(this, method);
    else
      SoundTestMenu__sePlay(this, 0, v2);
  }
}


void SoundTestMenu__onClickSePrev(SoundTestMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SoundTestMenu__sePlay(this, -1, v2);
}


void SoundTestMenu__onClickSearchButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x24
  __int64 v4; // x1
  UnityEngine_GameObject_o *seRoot; // x0
  System_Collections_Generic_IEnumerable_TSource__o *v6; // x25
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_String_o **v9; // x21
  bool activeSelf; // w0
  __int64 v11; // x8
  bool v12; // w8
  bool v13; // zf
  __int64 v14; // x8
  UIScrollView_o *v15; // x20
  bool v16; // w8
  __int64 v17; // x8
  UIGrid_o *v18; // x22
  bool v19; // w8
  __int64 v20; // x8
  System_String_o **v21; // x9
  bool v22; // w26
  System_Func_object__bool__o *v23; // x27
  UnityEngine_GameObject_c *klass; // x8
  UnityEngine_GameObject_o *v25; // x24
  char v26; // w26
  __int64 v27; // x9
  int32_t *p_offset; // x10
  __int64 v29; // x0
  __int64 v30; // x1
  __int64 v31; // x24
  UnityEngine_Object_o *v32; // x25
  __int64 v33; // x8
  __int64 v34; // x9
  int *v35; // x10
  __int64 v36; // x0
  __int64 v37; // x8
  __int64 v38; // x9
  int *v39; // x10
  __int64 v40; // x0
  UnityEngine_Component_o *v41; // x27
  _BOOL8 v42; // x0
  __int64 v43; // x1
  __int64 v44; // x1
  UnityEngine_Object_o *gameObject; // x26
  UnityEngine_Object_o *v46; // x27
  __int64 v47; // x8
  __int64 v48; // x9
  int *v49; // x10
  __int64 v50; // x0
  bool v51; // w0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  System_String_o *v54; // x1
  CGThumbnailListItem_o *p_seSearchNamePrev; // x0
  SoundTestMenu_o *v56; // x0
  const MethodInfo *v57; // x3
  const MethodInfo *v58; // x6
  bool v59; // w0
  int32_t v60; // w2
  const MethodInfo *v61; // x3
  int32_t v62; // w1
  CGThumbnailListItem_o *p_selectSeObj; // x0
  CommonUI_o *v64; // x19
  SoundTestMenu___c_c *v65; // x8
  System_Action_o *_9__134_1; // x22
  System_String_o *v67; // x20
  System_String_o *v68; // x21
  Il2CppObject *v69; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v71; // w2
  const MethodInfo *v72; // x3
  System_Collections_Generic_List_string__o *cueNameList; // [xsp+40h] [xbp-80h]
  UnityEngine_Component_o *v74; // [xsp+58h] [xbp-68h] BYREF

  if ( (byte_4CB39FF & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Where_Transform___);
    sub_1C6BA08(&System_Func_Transform__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerable_Transform__TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_Transform__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SoundTestMenu___c__onClickSearchButton_b__134_1__);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass134_0_TypeInfo);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_25501/*"そのサウンドはcpk内に存在しません"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB39FF = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu___c__DisplayClass134_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  if ( UnityEngine_GameObject__get_activeSelf(seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
    if ( !seRoot )
      goto LABEL_100;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
    if ( !seRoot )
      goto LABEL_100;
  }
  seRoot = (UnityEngine_GameObject_o *)UIGrid__GetChildList((UIGrid_o *)seRoot, 0);
  if ( !this->fields.seRoot )
    goto LABEL_100;
  v6 = (System_Collections_Generic_IEnumerable_TSource__o *)seRoot;
  if ( UnityEngine_GameObject__get_activeSelf(this->fields.seRoot, 0) )
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.seSearchNameInput;
    if ( !seRoot )
      goto LABEL_100;
  }
  else
  {
    seRoot = (UnityEngine_GameObject_o *)this->fields.bgmSearchNameInput;
    if ( !seRoot )
      goto LABEL_100;
  }
  seRoot = (UnityEngine_GameObject_o *)UILineInput__GetText((UILineInput_o *)seRoot, 0);
  if ( !v3 )
    goto LABEL_100;
  *(_QWORD *)(v3 + 16) = seRoot;
  v9 = (System_String_o **)(v3 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)seRoot, v7, v8);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  activeSelf = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v11 = 264;
  if ( activeSelf )
    v11 = 416;
  v74 = *(UnityEngine_Component_o **)((char *)&this->klass + v11);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v12 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v13 = !v12;
  v14 = 152;
  if ( !v13 )
    v14 = 392;
  if ( !seRoot )
    goto LABEL_100;
  v15 = *(UIScrollView_o **)((char *)&this->klass + v14);
  v16 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v13 = !v16;
  v17 = 248;
  if ( !v13 )
    v17 = 408;
  if ( !seRoot )
    goto LABEL_100;
  v18 = *(UIGrid_o **)((char *)&this->klass + v17);
  v19 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  seRoot = this->fields.seRoot;
  v13 = !v19;
  v20 = 280;
  if ( !v13 )
    v20 = 424;
  if ( !seRoot )
    goto LABEL_100;
  cueNameList = *(System_Collections_Generic_List_string__o **)((char *)&this->klass + v20);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  if ( !*v9 )
    goto LABEL_100;
  v21 = ((unsigned __int8)seRoot & 1) != 0 ? &this->fields.seSearchNamePrev : &this->fields.bgmSearchNamePrev;
  v22 = System_String__Equals_64002112(*v9, *v21, 0);
  v23 = (System_Func_object__bool__o *)sub_1C6BC54(System_Func_Transform__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v23,
    (Il2CppObject *)v3,
    Method_SoundTestMenu___c__DisplayClass134_0__onClickSearchButton_b__0__,
    0);
  seRoot = (UnityEngine_GameObject_o *)System_Linq_Enumerable__Where_object_(
                                         v6,
                                         (System_Func_TSource__bool__o *)v23,
                                         (const MethodInfo_3182364 *)Method_System_Linq_Enumerable_Where_Transform___);
  if ( !seRoot )
    goto LABEL_100;
  klass = seRoot->klass;
  v25 = seRoot;
  v26 = !v22;
  v27 = *(unsigned __int16 *)&seRoot->klass->_2.rank;
  if ( *(_WORD *)&seRoot->klass->_2.rank )
  {
    p_offset = &klass->_1.interfaceOffsets->offset;
    while ( *((System_Collections_Generic_IEnumerable_Transform__c **)p_offset - 1) != System_Collections_Generic_IEnumerable_Transform__TypeInfo )
    {
      --v27;
      p_offset += 4;
      if ( !v27 )
        goto LABEL_36;
    }
    v29 = (__int64)&klass->vtable + 16 * *p_offset;
  }
  else
  {
LABEL_36:
    v29 = sub_1C41D90(seRoot, System_Collections_Generic_IEnumerable_Transform__TypeInfo, 0);
  }
  v31 = (*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))v29)(v25, *(_QWORD *)(v29 + 8));
  if ( !v31 )
    sub_1C6BC60(0, v30);
  v32 = 0;
  while ( 1 )
  {
    v33 = *(_QWORD *)v31;
    v34 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v35 = (int *)(*(_QWORD *)(v33 + 176) + 8LL);
      while ( *((System_Collections_IEnumerator_c **)v35 - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v34;
        v35 += 4;
        if ( !v34 )
          goto LABEL_44;
      }
      v36 = v33 + 16LL * *v35 + 312;
    }
    else
    {
LABEL_44:
      v36 = sub_1C41D90(v31, System_Collections_IEnumerator_TypeInfo, 0);
    }
    if ( ((*(__int64 (__fastcall **)(__int64, _QWORD))v36)(v31, *(_QWORD *)(v36 + 8)) & 1) == 0 )
    {
      v41 = 0;
      goto LABEL_65;
    }
    v37 = *(_QWORD *)v31;
    v38 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
    if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
    {
      v39 = (int *)(*(_QWORD *)(v37 + 176) + 8LL);
      while ( *((System_Collections_Generic_IEnumerator_Transform__c **)v39 - 1) != System_Collections_Generic_IEnumerator_Transform__TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_51;
      }
      v40 = v37 + 16LL * *v39 + 312;
    }
    else
    {
LABEL_51:
      v40 = sub_1C41D90(v31, System_Collections_Generic_IEnumerator_Transform__TypeInfo, 0);
    }
    v41 = (UnityEngine_Component_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))v40)(v31, *(_QWORD *)(v40 + 8));
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v42 = UnityEngine_Object__op_Equality(v32, 0, 0);
    if ( v42 )
      v32 = (UnityEngine_Object_o *)v41;
    if ( (v26 & 1) != 0 )
      break;
    if ( !v41 )
      sub_1C6BC60(v42, v43);
    gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v41, 0);
    if ( !v74 )
      sub_1C6BC60(0, v44);
    v46 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(v74, 0);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v26 = UnityEngine_Object__op_Equality(gameObject, v46, 0);
  }
  v26 = 1;
LABEL_65:
  v47 = *(_QWORD *)v31;
  v48 = *(unsigned __int16 *)(*(_QWORD *)v31 + 302LL);
  if ( *(_WORD *)(*(_QWORD *)v31 + 302LL) )
  {
    v49 = (int *)(*(_QWORD *)(v47 + 176) + 8LL);
    while ( *((System_IDisposable_c **)v49 - 1) != System_IDisposable_TypeInfo )
    {
      --v48;
      v49 += 4;
      if ( !v48 )
        goto LABEL_69;
    }
    v50 = v47 + 16LL * *v49 + 312;
  }
  else
  {
LABEL_69:
    v50 = sub_1C41D90(v31, System_IDisposable_TypeInfo, 0);
  }
  (*(void (__fastcall **)(__int64, _QWORD))v50)(v31, *(_QWORD *)(v50 + 8));
  if ( (v26 & 1) != 0 )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality((UnityEngine_Object_o *)v41, 0, 0) )
      v41 = (UnityEngine_Component_o *)v32;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v51 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v54 = *v9;
  if ( v51 )
    p_seSearchNamePrev = (CGThumbnailListItem_o *)&this->fields.seSearchNamePrev;
  else
    p_seSearchNamePrev = (CGThumbnailListItem_o *)&this->fields.bgmSearchNamePrev;
  p_seSearchNamePrev->klass = (CGThumbnailListItem_c *)v54;
  sub_1C6B9AC(p_seSearchNamePrev, (int32_t)v54, v52, v53);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v41, 0, 0);
  if ( ((unsigned __int8)seRoot & 1) == 0 )
  {
    seRoot = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    v64 = (CommonUI_o *)seRoot;
    v65 = SoundTestMenu___c_TypeInfo;
    if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
      v65 = SoundTestMenu___c_TypeInfo;
    }
    _9__134_1 = v65->static_fields->__9__134_1;
    v67 = (System_String_o *)StringLiteral_25501/*"そのサウンドはcpk内に存在しません"*/;
    v68 = (System_String_o *)StringLiteral_1/*""*/;
    if ( !_9__134_1 )
    {
      if ( !v65->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v65);
        v65 = SoundTestMenu___c_TypeInfo;
      }
      v69 = (Il2CppObject *)v65->static_fields->__9;
      _9__134_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
      System_Action___ctor(_9__134_1, v69, Method_SoundTestMenu___c__onClickSearchButton_b__134_1__, 0);
      static_fields = SoundTestMenu___c_TypeInfo->static_fields;
      static_fields->__9__134_1 = _9__134_1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__134_1, (int32_t)_9__134_1, v71, v72);
    }
    if ( v64 )
    {
      CommonUI__OpenNotificationDialog(v64, v68, v67, _9__134_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
      return;
    }
LABEL_100:
    sub_1C6BC60(seRoot, v4);
  }
  if ( !v41 )
    goto LABEL_100;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                         v41,
                                         (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___);
  if ( !seRoot )
    goto LABEL_100;
  v56 = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)seRoot, 0);
  SoundTestMenu__selectItem(v56, (UILabel_o **)&v74, (UnityEngine_GameObject_o *)v56, v57);
  SoundTestMenu__offsetSelectObj(this, v15, (UILabel_o **)&v74, v18, cueNameList, 0, v58);
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_100;
  v59 = UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v62 = (int)v74;
  if ( v59 )
    p_selectSeObj = (CGThumbnailListItem_o *)&this->fields.selectSeObj;
  else
    p_selectSeObj = (CGThumbnailListItem_o *)&this->fields.selectBgmObj;
  p_selectSeObj->klass = (CGThumbnailListItem_c *)v74;
  sub_1C6B9AC(p_selectSeObj, v62, v60, v61);
}


void SoundTestMenu__onClickSortButton(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  int32_t sortTypeSe; // w21
  Il2CppType *v5; // x20
  System_RuntimeTypeHandle_o v6; // x0
  System_Type_o *v7; // x20
  int32_t sortTypeBgm; // w21
  Il2CppType *v9; // x20
  System_RuntimeTypeHandle_o v10; // x0
  System_Type_o *TypeFromHandle; // x20

  if ( (byte_4CB39FC & 1) == 0 )
  {
    sub_1C6BA08(&System_Enum_TypeInfo);
    sub_1C6BA08(&SoundTestMenu_SortType_var);
    sub_1C6BA08(&System_Type_TypeInfo);
    byte_4CB39FC = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_18;
  if ( !UnityEngine_GameObject__get_activeSelf(seRoot, 0) )
  {
    sortTypeBgm = this->fields.sortTypeBgm;
    v9 = SoundTestMenu_SortType_var;
    if ( !System_Type_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
    v10.fields.value = (intptr_t)v9;
    TypeFromHandle = System_Type__GetTypeFromHandle(v10, 0);
    if ( !System_Enum_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
    seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(TypeFromHandle, 0);
    if ( seRoot )
    {
      this->fields.sortTypeBgm = (sortTypeBgm + 1) % SLODWORD(seRoot[1].klass);
      goto LABEL_17;
    }
LABEL_18:
    sub_1C6BC60(seRoot, method);
  }
  sortTypeSe = this->fields.sortTypeSe;
  v5 = SoundTestMenu_SortType_var;
  if ( !System_Type_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Type_TypeInfo);
  v6.fields.value = (intptr_t)v5;
  v7 = System_Type__GetTypeFromHandle(v6, 0);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  seRoot = (UnityEngine_GameObject_o *)System_Enum__GetNames(v7, 0);
  if ( !seRoot )
    goto LABEL_18;
  this->fields.sortTypeSe = (sortTypeSe + 1) % SLODWORD(seRoot[1].klass);
LABEL_17:
  SoundTestMenu__sortApply(this, method);
}


void SoundTestMenu__open(SoundTestMenu_o *this, SoundTestMenu_CallbackFunc_o *callback, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  struct SoundTestMenu_CallbackFunc_o *v4; // x20
  int *rootObject; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct UIGrid_o *bgmGrid; // x20
  System_Comparison_T__o *v11; // x21
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  Il2CppObject *v14; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UIGrid_o *bgmCpkGrid; // x20
  System_Comparison_T__o *v18; // x21
  int32_t v19; // w2
  const MethodInfo *v20; // x3
  Il2CppObject *v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  struct UIGrid_o *seGrid; // x20
  System_Comparison_T__o *v25; // x21
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  struct System_Collections_Generic_List_string__o *bgmCpkList; // x8
  int32_t size; // w2
  int v30; // w9
  System_String_o *CpkPath; // x0
  const MethodInfo *v32; // x7
  int v33; // w8
  int *v34; // x20
  __int64 v35; // x22
  System_String_o *v36; // x21
  System_String_o *v37; // x21
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  __int64 v40; // x9
  int *v41; // x8
  char *v42; // x8
  __int64 v43; // x9
  _QWORD *v44; // x8
  __int64 v45; // x10
  __int64 v46; // x8
  struct UILabel_o *ItemBgm; // x0
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  struct System_Collections_Generic_List_string__o *v50; // x8
  UILabel_o *bgmCpkCount; // x20
  System_String_o *v52; // x0
  const MethodInfo *v53; // x1
  const MethodInfo *v54; // x2
  struct System_Collections_Generic_List_string__o *v55; // x8
  const MethodInfo *v56; // x3
  unsigned __int64 i; // x22
  struct System_String_array *sePrefixList; // x8
  UIPopupList_o *voicePrefixList; // x20
  struct System_Collections_Generic_List_string__o *exclusionList; // x8
  int32_t v61; // w2
  int v62; // w9
  __int64 j; // x22
  System_Collections_Generic_List_object__o *v64; // x20
  __int64 v65; // x8
  struct System_Object_array *items; // x8
  _QWORD *v67; // x9
  __int64 v68; // x10
  Il2CppClass **v69; // x0
  const MethodInfo *v70; // x1
  const MethodInfo *v71; // x1
  const MethodInfo *v72; // x1
  const MethodInfo *v73; // x1
  int32_t v74; // [xsp+Ch] [xbp-64h] BYREF

  v4 = callback;
  if ( (byte_4CB39DB & 1) == 0 )
  {
    sub_1C6BA08(&AssetData_TypeInfo);
    sub_1C6BA08(&System_Comparison_Transform__TypeInfo);
    sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu_customCpkSort__);
    sub_1C6BA08(&Method_SoundTestMenu_customSort__);
    sub_1C6BA08(&SoundTestMenu_TypeInfo);
    sub_1C6BA08(&StringLiteral_1017/*".cpk.bytes"*/);
    sub_1C6BA08(&StringLiteral_799/*"*BGM_*.cpk.bytes"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    sub_1C6BA08(&StringLiteral_4822/*"Cpk数 : "*/);
    byte_4CB39DB = 1;
  }
  v74 = 0;
  if ( !this->fields.state )
  {
    this->fields.endCallbackFunc = v4;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.endCallbackFunc, (int32_t)v4, (int32_t)method, v3);
    rootObject = (int *)this->fields.rootObject;
    if ( !rootObject )
      goto LABEL_67;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)rootObject, 1, 0);
    rootObject = (int *)this->fields.seAssetNameInput;
    if ( !rootObject )
      goto LABEL_67;
    UILineInput__SetInputEnable((UILineInput_o *)rootObject, 1, 0);
    rootObject = (int *)this->fields.bgmItemParent;
    if ( !rootObject )
      goto LABEL_67;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)rootObject,
                         (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmGrid = (struct UIGrid_o *)Component_object;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmGrid, (int32_t)Component_object, v8, v9);
    bgmGrid = this->fields.bgmGrid;
    v11 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v11, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !bgmGrid )
      goto LABEL_67;
    bgmGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v11;
    sub_1C6B9AC((CGThumbnailListItem_o *)&bgmGrid->fields.onCustomSort, (int32_t)v11, v12, v13);
    rootObject = (int *)this->fields.bgmCpkItemParent;
    if ( !rootObject )
      goto LABEL_67;
    v14 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.bgmCpkGrid = (struct UIGrid_o *)v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.bgmCpkGrid, (int32_t)v14, v15, v16);
    bgmCpkGrid = this->fields.bgmCpkGrid;
    v18 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v18, (Il2CppObject *)this, Method_SoundTestMenu_customCpkSort__, 0);
    if ( !bgmCpkGrid )
      goto LABEL_67;
    bgmCpkGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v18;
    sub_1C6B9AC((CGThumbnailListItem_o *)&bgmCpkGrid->fields.onCustomSort, (int32_t)v18, v19, v20);
    rootObject = (int *)this->fields.seItemParent;
    if ( !rootObject )
      goto LABEL_67;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            (UnityEngine_GameObject_o *)rootObject,
            (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UIGrid___);
    this->fields.seGrid = (struct UIGrid_o *)v21;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.seGrid, (int32_t)v21, v22, v23);
    seGrid = this->fields.seGrid;
    v25 = (System_Comparison_T__o *)sub_1C6BC54(System_Comparison_Transform__TypeInfo);
    System_Comparison_object____ctor(v25, (Il2CppObject *)this, Method_SoundTestMenu_customSort__, 0);
    if ( !seGrid )
      goto LABEL_67;
    seGrid->fields.onCustomSort = (struct System_Comparison_Transform__o *)v25;
    sub_1C6B9AC((CGThumbnailListItem_o *)&seGrid->fields.onCustomSort, (int32_t)v25, v26, v27);
    bgmCpkList = this->fields.bgmCpkList;
    if ( !bgmCpkList )
      goto LABEL_67;
    size = bgmCpkList->fields._size;
    v30 = bgmCpkList->fields._version + 1;
    bgmCpkList->fields._size = 0;
    bgmCpkList->fields._version = v30;
    if ( size >= 1 )
      System_Array__Clear((System_Array_o *)bgmCpkList->fields._items, 0, size, 0);
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    CpkPath = SoundManager__getCpkPath(0);
    rootObject = (int *)System_IO_Directory__GetFiles_64827112(CpkPath, (System_String_o *)StringLiteral_799/*"*BGM_*.cpk.bytes"*/, 1, 0);
    if ( !rootObject )
      goto LABEL_67;
    v33 = rootObject[6];
    v34 = rootObject;
    if ( v33 >= 1 )
    {
      v35 = 0;
      while ( 1 )
      {
        if ( (unsigned int)v35 >= v33 )
LABEL_68:
          sub_1C6BC68(rootObject);
        v36 = *(System_String_o **)&v34[2 * v35 + 8];
        if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
        rootObject = (int *)System_IO_Path__GetFileName(v36, 0);
        if ( !rootObject )
          break;
        rootObject = (int *)System_String__Replace_64013356(
                              (System_String_o *)rootObject,
                              (System_String_o *)StringLiteral_1017/*".cpk.bytes"*/,
                              (System_String_o *)StringLiteral_1/*""*/,
                              0);
        v37 = (System_String_o *)rootObject;
        if ( !AssetData_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(AssetData_TypeInfo);
        if ( !v37 )
          break;
        rootObject = (int *)System_String__Split(
                              v37,
                              AssetData_TypeInfo->static_fields->ASSETBUNDLE_SPLIT_CACHE_CHAR,
                              0,
                              0);
        if ( !rootObject )
          break;
        v40 = *((_QWORD *)rootObject + 3);
        v41 = rootObject;
        if ( !(_DWORD)v40 )
          goto LABEL_68;
        rootObject = (int *)this->fields.bgmCpkList;
        if ( !rootObject )
          break;
        v42 = (char *)v41 + (((v40 << 32) - 0x100000000LL) >> 29);
        v43 = *((_QWORD *)rootObject + 2);
        callback = (SoundTestMenu_CallbackFunc_o *)*((_QWORD *)v42 + 4);
        v44 = Method_System_Collections_Generic_List_string__Add__;
        ++rootObject[7];
        if ( !v43 )
          break;
        v45 = rootObject[6];
        if ( (unsigned int)v45 >= *(_DWORD *)(v43 + 24) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)rootObject,
            (Il2CppObject *)callback,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v44[4] + 192LL) + 112LL));
        }
        else
        {
          v46 = v43 + 8 * v45;
          rootObject[6] = v45 + 1;
          *(_QWORD *)(v46 + 32) = callback;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v46 + 32), (int32_t)callback, v38, v39);
        }
        v74 = ++v35;
        v33 = v34[6];
        if ( (int)v35 >= v33 )
          goto LABEL_35;
      }
LABEL_67:
      sub_1C6BC60(rootObject, callback);
    }
LABEL_35:
    ItemBgm = SoundTestMenu__createItemBgm(
                this,
                this->fields.bgmCpkItemParent,
                this->fields.bgmCpkList,
                this->fields.bgmCpkGrid,
                this->fields.bgmCpkScrollView,
                this->fields.bgmCpkItemLabelSeed,
                0,
                v32);
    this->fields.selectBgmCpkObj = ItemBgm;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.selectBgmCpkObj, (int32_t)ItemBgm, v48, v49);
    v50 = this->fields.bgmCpkList;
    if ( !v50 )
      goto LABEL_67;
    bgmCpkCount = this->fields.bgmCpkCount;
    v74 = v50->fields._size;
    v52 = System_Int32__ToString((int32_t)&v74, 0);
    rootObject = (int *)System_String__Concat_63966792((System_String_o *)StringLiteral_4822/*"Cpk数 : "*/, v52, 0);
    if ( !bgmCpkCount )
      goto LABEL_67;
    UILabel__set_text(bgmCpkCount, (System_String_o *)rootObject, 0);
    SoundTestMenu__createBgmPlayList(this, v53);
    v55 = this->fields.bgmCpkList;
    if ( !v55 )
      goto LABEL_67;
    SoundTestMenu__updateBgmPrevNextButton(this, v55->fields._size > 1, v54);
    rootObject = (int *)this->fields.voicePrefixList;
    if ( !rootObject )
      goto LABEL_67;
    UIPopupList__Clear((UIPopupList_o *)rootObject, 0);
    for ( i = 0; ; UIPopupList__AddItem(voicePrefixList, sePrefixList->m_Items[i++], 0) )
    {
      rootObject = (int *)SoundTestMenu_TypeInfo;
      if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
        rootObject = (int *)SoundTestMenu_TypeInfo;
      }
      sePrefixList = (struct System_String_array *)**((_QWORD **)rootObject + 23);
      if ( !sePrefixList )
        goto LABEL_67;
      if ( (__int64)i >= SLODWORD(sePrefixList->max_length) )
        break;
      voicePrefixList = this->fields.voicePrefixList;
      if ( !rootObject[56] )
      {
        j_il2cpp_runtime_class_init_0(rootObject);
        sePrefixList = SoundTestMenu_TypeInfo->static_fields->sePrefixList;
        if ( !sePrefixList )
          goto LABEL_67;
      }
      if ( i >= LODWORD(sePrefixList->max_length) )
        goto LABEL_68;
      if ( !voicePrefixList )
        goto LABEL_67;
    }
    exclusionList = this->fields.exclusionList;
    if ( !exclusionList )
      goto LABEL_67;
    v61 = exclusionList->fields._size;
    v62 = exclusionList->fields._version + 1;
    exclusionList->fields._size = 0;
    exclusionList->fields._version = v62;
    if ( v61 >= 1 )
      System_Array__Clear((System_Array_o *)exclusionList->fields._items, 0, v61, 0);
    for ( j = 9; j != 14; ++j )
    {
      rootObject = (int *)SoundTestMenu_TypeInfo;
      v64 = (System_Collections_Generic_List_object__o *)this->fields.exclusionList;
      if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
        rootObject = (int *)SoundTestMenu_TypeInfo;
      }
      v65 = **((_QWORD **)rootObject + 23);
      if ( !v65 )
        goto LABEL_67;
      if ( j - 4 >= (unsigned __int64)*(unsigned int *)(v65 + 24) )
        goto LABEL_68;
      if ( !v64 )
        goto LABEL_67;
      callback = *(SoundTestMenu_CallbackFunc_o **)(v65 + 8 * j);
      items = v64->fields._items;
      v67 = Method_System_Collections_Generic_List_string__Add__;
      ++v64->fields._version;
      if ( !items )
        goto LABEL_67;
      v68 = v64->fields._size;
      if ( (unsigned int)v68 >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v64,
          (Il2CppObject *)callback,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v67[4] + 192LL) + 112LL));
      }
      else
      {
        v69 = &items->obj.klass + v68;
        v64->fields._size = v68 + 1;
        v69[4] = (Il2CppClass *)callback;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v69 + 4), (int32_t)callback, v61, v56);
      }
    }
    this->fields.state = 1;
  }
  SoundTestMenu__sortApply(this, (const MethodInfo *)callback);
  SoundTestMenu__switchButtonLabelChange(this, v70);
  this->fields.isPlayBgm = 0;
  this->fields.isPlaySe = 0;
  SoundTestMenu__ResetBgmProgressBar(this, v71);
  SoundTestMenu__SetupVersionDiff(this, v72);
  SoundTestMenu__SetDiffSwitchButtonLabel(this, v73);
  rootObject = (int *)this->fields.cueListOutputButton;
  if ( !rootObject )
    goto LABEL_67;
  rootObject = (int *)UnityEngine_Component__GetComponent_object_(
                        (UnityEngine_Component_o *)rootObject,
                        (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !rootObject )
    goto LABEL_67;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)rootObject, 0, 0);
}


void SoundTestMenu__openCueList(
        SoundTestMenu_o *this,
        System_String_o *cueSheetName,
        System_Collections_Generic_List_string__o *cueNameList,
        System_Action_o *callBack,
        const MethodInfo *method)
{
  __int64 v9; // x19
  __int64 v10; // x0
  __int64 v11; // x1
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  CriAtomExAcb_o *Acb; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  SoundTestMenu_o *v23; // x0
  const MethodInfo *v24; // x3
  CriAtomExAcb_o *v25; // x2
  System_String_o *v26; // x20
  System_Action_o *v27; // x21
  SoundTestMenu_o *v28; // x0
  const MethodInfo *v29; // x3

  if ( (byte_4CB39EB & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass109_0_TypeInfo);
    byte_4CB39EB = 1;
  }
  v9 = sub_1C6BC54(SoundTestMenu___c__DisplayClass109_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v9, 0);
  if ( !v9 )
    sub_1C6BC60(v10, v11);
  *(_QWORD *)(v9 + 24) = cueSheetName;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 24), (int32_t)cueSheetName, v12, v13);
  *(_QWORD *)(v9 + 32) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 32), (int32_t)this, v14, v15);
  *(_QWORD *)(v9 + 40) = cueNameList;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 40), (int32_t)cueNameList, v16, v17);
  *(_QWORD *)(v9 + 48) = callBack;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 48), (int32_t)callBack, v18, v19);
  Acb = CriAtom__GetAcb(*(System_String_o **)(v9 + 24), 0);
  *(_QWORD *)(v9 + 16) = Acb;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v9 + 16), (int32_t)Acb, v21, v22);
  v25 = *(CriAtomExAcb_o **)(v9 + 16);
  if ( v25 )
  {
    SoundTestMenu__setupCueNameList(v23, *(System_Collections_Generic_List_string__o **)(v9 + 40), v25, v24);
    ActionExtensions__Call(*(System_Action_o **)(v9 + 48), 0);
  }
  else
  {
    v26 = *(System_String_o **)(v9 + 24);
    v27 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v27, (Il2CppObject *)v9, Method_SoundTestMenu___c__DisplayClass109_0__openCueList_b__0__, 0);
    SoundTestMenu__loadSE(v28, v26, v27, v29);
  }
}


void SoundTestMenu__playBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  struct UILabel_o *selectBgmObj; // x0
  System_String_o *name; // x0
  Il2CppObject *Item; // x20
  const MethodInfo *v6; // x2
  const MethodInfo *v7; // x3
  System_String_o *playBgmCueSheetName; // x0
  struct System_String_o *loadBgmCueSheetName; // x1

  if ( (byte_4CB39E1 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_13089/*"Stop"*/);
    byte_4CB39E1 = 1;
  }
  if ( this->fields.state == 1 )
  {
    if ( this->fields.isPlayBgm )
    {
      SoundTestMenu__stopBgm(this, method);
    }
    else
    {
      selectBgmObj = this->fields.selectBgmObj;
      if ( !selectBgmObj )
        goto LABEL_16;
      name = UnityEngine_Object__get_name((UnityEngine_Object_o *)selectBgmObj, 0);
      selectBgmObj = (struct UILabel_o *)System_Int32__Parse(name, 0);
      if ( !this->fields.inputBgmCueName )
        goto LABEL_16;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)this->fields.inputBgmCueName,
               (int32_t)selectBgmObj,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !SoundManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      SoundManager__playBgm((System_String_o *)Item, 0);
      selectBgmObj = this->fields.bgmPlayLabel;
      if ( !selectBgmObj )
LABEL_16:
        sub_1C6BC60(selectBgmObj, method);
      UILabel__set_text(selectBgmObj, (System_String_o *)StringLiteral_13089/*"Stop"*/, 0);
      playBgmCueSheetName = this->fields.playBgmCueSheetName;
      this->fields.isPlayBgm = 1;
      if ( playBgmCueSheetName )
      {
        if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
          SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v6);
      }
      loadBgmCueSheetName = this->fields.loadBgmCueSheetName;
      this->fields.playBgmCueSheetName = loadBgmCueSheetName;
      sub_1C6B9AC(
        (CGThumbnailListItem_o *)&this->fields.playBgmCueSheetName,
        (int32_t)loadBgmCueSheetName,
        (int32_t)v6,
        v7);
    }
  }
}


void SoundTestMenu__playSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x20
  UILineInput_o *seAssetNameInput; // x0
  __int64 v5; // x1
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  System_String_o *Text; // x0
  System_String_o **v9; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  struct UIPopupList_o *voicePrefixList; // x8
  System_String_o *mSelectedItem; // x22
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  UnityEngine_Object_o *selectSeObj; // x22
  bool v17; // w0
  System_String_o *v18; // x22
  struct System_Collections_Generic_List_string__o *inputSeCueName; // x21
  System_Action_o *v20; // x23
  const MethodInfo *v21; // x4
  SoundTestMenu_o *v22; // x0
  System_String_o *v23; // x1
  System_Collections_Generic_List_string__o *v24; // x2
  _QWORD *v25; // x0
  System_Reflection_MethodBase_o *v26; // x0
  System_String_o **p_loadSeCueSheetName; // x22
  _BOOL8 v28; // x0
  const MethodInfo *v29; // x2
  char v30; // w22
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  CriAtomExAcb_o *Acb; // x0
  const MethodInfo *v34; // x2
  System_String_o *v35; // x21
  struct System_Collections_Generic_List_string__o *v36; // x22

  if ( (byte_4CB39E5 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Contains__);
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu_playSe__);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass102_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_9273/*"NONE"*/);
    byte_4CB39E5 = 1;
  }
  v3 = sub_1C6BC54(SoundTestMenu___c__DisplayClass102_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0);
  if ( !v3 )
    goto LABEL_30;
  *(_QWORD *)(v3 + 24) = this;
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 24), (int32_t)this, v6, v7);
  seAssetNameInput = this->fields.seAssetNameInput;
  if ( !seAssetNameInput )
    goto LABEL_30;
  Text = UILineInput__GetText(seAssetNameInput, 0);
  *(_QWORD *)(v3 + 16) = Text;
  v9 = (System_String_o **)(v3 + 16);
  sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)Text, v10, v11);
  voicePrefixList = this->fields.voicePrefixList;
  if ( !voicePrefixList )
    goto LABEL_30;
  seAssetNameInput = (UILineInput_o *)this->fields.exclusionList;
  if ( !seAssetNameInput )
    goto LABEL_30;
  mSelectedItem = voicePrefixList->fields.mSelectedItem;
  if ( !System_Collections_Generic_List_object___Contains(
          (System_Collections_Generic_List_object__o *)seAssetNameInput,
          (Il2CppObject *)mSelectedItem,
          (const MethodInfo_3800D04 *)Method_System_Collections_Generic_List_string__Contains__) )
  {
    mSelectedItem = System_String__Concat_63966792(mSelectedItem, *v9, 0);
    goto LABEL_11;
  }
  if ( System_String__op_Inequality(mSelectedItem, (System_String_o *)StringLiteral_9273/*"NONE"*/, 0) )
  {
LABEL_11:
    *v9 = mSelectedItem;
    sub_1C6B9AC((CGThumbnailListItem_o *)(v3 + 16), (int32_t)mSelectedItem, v14, v15);
  }
  selectSeObj = (UnityEngine_Object_o *)this->fields.selectSeObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v17 = UnityEngine_Object__op_Equality(selectSeObj, 0, 0);
  v18 = *v9;
  if ( v17 )
  {
    inputSeCueName = this->fields.inputSeCueName;
    v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__0__, 0);
    v22 = this;
    v23 = v18;
    v24 = inputSeCueName;
LABEL_29:
    SoundTestMenu__openCueList(v22, v23, v24, v20, v21);
    return;
  }
  if ( !System_String__IsNullOrEmpty(*v9, 0) )
  {
    if ( System_String__IsNullOrEmpty(this->fields.loadSeCueSheetName, 0) )
      goto LABEL_23;
    p_loadSeCueSheetName = &this->fields.loadSeCueSheetName;
    seAssetNameInput = (UILineInput_o *)this->fields.loadSeCueSheetName;
    if ( seAssetNameInput )
    {
      v28 = System_String__Equals_64002112((System_String_o *)seAssetNameInput, *v9, 0);
      if ( !v28 )
      {
        SoundTestMenu__releaseSe((SoundTestMenu_o *)v28, *p_loadSeCueSheetName, v29);
        *p_loadSeCueSheetName = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.loadSeCueSheetName, 0, v31, v32);
        v30 = 1;
LABEL_25:
        Acb = CriAtom__GetAcb(*v9, 0);
        v35 = *v9;
        if ( (v30 & 1) == 0 && Acb )
        {
          SoundTestMenu__playSeLocal(this, v35, v34);
          return;
        }
        v36 = this->fields.inputSeCueName;
        v20 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(v20, (Il2CppObject *)v3, Method_SoundTestMenu___c__DisplayClass102_0__playSe_b__1__, 0);
        v22 = this;
        v23 = v35;
        v24 = v36;
        goto LABEL_29;
      }
LABEL_23:
      v30 = 0;
      goto LABEL_25;
    }
LABEL_30:
    sub_1C6BC60(seAssetNameInput, v5);
  }
  v25 = Method_SoundTestMenu_playSe__;
  if ( (*((_BYTE *)Method_SoundTestMenu_playSe__ + 83) & 2) != 0 )
    v25 = (_QWORD *)sub_1C6BA20(Method_SoundTestMenu_playSe__);
  v26 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v25, v25[4]);
  OverwriteAssetSoundName__PlaySystemSe(v26, 2, 0, 0);
}


void SoundTestMenu__playSeLocal(SoundTestMenu_o *this, System_String_o *inputCueSheetName, const MethodInfo *method)
{
  struct UILabel_o *selectSeObj; // x0
  System_String_o *name; // x0
  Il2CppObject *Item; // x0
  _QWORD *v8; // x8
  System_String_o *v9; // x21
  System_Reflection_MethodBase_o *v10; // x22
  System_Action_o *v11; // x23
  struct SePlayer_o *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4CB39E6 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&Method_SoundTestMenu_playSeLocal__);
    sub_1C6BA08(&Method_SoundTestMenu_stopSe__);
    sub_1C6BA08(&StringLiteral_13089/*"Stop"*/);
    byte_4CB39E6 = 1;
  }
  selectSeObj = this->fields.selectSeObj;
  if ( !selectSeObj )
    goto LABEL_9;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)selectSeObj, 0);
  selectSeObj = (struct UILabel_o *)System_Int32__Parse(name, 0);
  if ( !this->fields.inputSeCueName )
    goto LABEL_9;
  Item = System_Collections_Generic_List_object___get_Item(
           (System_Collections_Generic_List_object__o *)this->fields.inputSeCueName,
           (int32_t)selectSeObj,
           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
  v8 = Method_SoundTestMenu_playSeLocal__;
  v9 = (System_String_o *)Item;
  if ( (*((_BYTE *)Method_SoundTestMenu_playSeLocal__ + 83) & 2) != 0 )
    v8 = (_QWORD *)sub_1C6BA20(Method_SoundTestMenu_playSeLocal__);
  v10 = (System_Reflection_MethodBase_o *)sub_1C6B9EC(v8, v8[4]);
  v11 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
  v12 = OverwriteAssetSoundName__PlaySe_41653628(v10, inputCueSheetName, v9, 0.7, v11, 0, 0);
  this->fields.sePlayer = v12;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sePlayer, (int32_t)v12, v13, v14);
  selectSeObj = this->fields.sePlayLabel;
  if ( !selectSeObj )
LABEL_9:
    sub_1C6BC60(selectSeObj, inputCueSheetName);
  UILabel__set_text(selectSeObj, (System_String_o *)StringLiteral_13089/*"Stop"*/, 0);
  this->fields.isPlaySe = 1;
}


void SoundTestMenu__releaseBgm(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  UnityEngine_Object_o *selectBgmObj; // x20

  if ( (byte_4CB39DE & 1) == 0 )
  {
    sub_1C6BA08(&UnityEngine_Object_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    byte_4CB39DE = 1;
  }
  selectBgmObj = (UnityEngine_Object_o *)this->fields.selectBgmObj;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(selectBgmObj, 0, 0) && !System_String__IsNullOrEmpty(cueSheetName, 0) )
  {
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__releaseAudioAssetStorage(cueSheetName, 0);
  }
}


void SoundTestMenu__releaseSe(SoundTestMenu_o *this, System_String_o *cueSheetName, const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v5; // x20
  __int64 v6; // x8
  unsigned __int64 v7; // x21

  if ( (byte_4CB39E9 & 1) == 0 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB39E9 = 1;
  }
  if ( !SeManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
  if ( !byte_4CB3A94 )
  {
    sub_1C6BA08(&SeManager_TypeInfo);
    byte_4CB3A94 = 1;
  }
  Instance = (SoundManager_o *)SeManager_TypeInfo;
  if ( !SeManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SeManager_TypeInfo);
    Instance = (SoundManager_o *)SeManager_TypeInfo;
  }
  v5 = *(_QWORD *)Instance[2].monitor;
  if ( !v5 )
    goto LABEL_19;
  v6 = *(_QWORD *)(v5 + 24);
  if ( (int)v6 < 1 )
  {
LABEL_15:
    Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    if ( Instance )
    {
      SoundManager__ReleaseAudioAssetStorage(Instance, cueSheetName, 0);
      return;
    }
LABEL_19:
    sub_1C6BC60(Instance, cueSheetName);
  }
  v7 = 0;
  while ( 1 )
  {
    if ( v7 >= (unsigned int)v6 )
      sub_1C6BC68(Instance);
    Instance = (SoundManager_o *)System_String__Compare_63998976(
                                   cueSheetName,
                                   *(System_String_o **)(v5 + 32 + 8 * v7),
                                   1,
                                   0);
    if ( !(_DWORD)Instance )
      break;
    LODWORD(v6) = *(_DWORD *)(v5 + 24);
    if ( (__int64)++v7 >= (int)v6 )
      goto LABEL_15;
  }
}


void SoundTestMenu__remove_endCallbackFunc(
        SoundTestMenu_o *this,
        SoundTestMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  System_Delegate_o *endCallbackFunc; // x21
  struct SoundTestMenu_CallbackFunc_o **p_endCallbackFunc; // x20
  System_Delegate_o *v7; // x0
  __int64 v8; // x0
  bool v9; // zf
  SoundTestMenu_o *v10; // x0
  const MethodInfo *v11; // x1

  if ( (byte_4CB39D9 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_CallbackFunc_TypeInfo);
    byte_4CB39D9 = 1;
  }
  endCallbackFunc = (System_Delegate_o *)this->fields.endCallbackFunc;
  p_endCallbackFunc = &this->fields.endCallbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(endCallbackFunc, (System_Delegate_o *)value, 0);
    if ( v7 )
    {
      if ( (SoundTestMenu_CallbackFunc_c *)v7->klass != SoundTestMenu_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1CC77DC(p_endCallbackFunc, v7, endCallbackFunc);
    v9 = endCallbackFunc == (System_Delegate_o *)v8;
    endCallbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1C6BFFC(v7);
  SoundTestMenu__Awake(v10, v11);
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__sePlay(SoundTestMenu_o *this, int32_t addIdxVal, const MethodInfo *method)
{
  const MethodInfo *v5; // x6
  const MethodInfo *v6; // x1

  SoundTestMenu__stopSe(this, *(const MethodInfo **)&addIdxVal);
  SoundTestMenu__offsetSelectObj(
    this,
    this->fields.seScrollView,
    &this->fields.selectSeObj,
    this->fields.seGrid,
    this->fields.inputSeCueName,
    addIdxVal,
    v5);
  SoundTestMenu__playSe(this, v6);
}


void SoundTestMenu__selectItem(
        SoundTestMenu_o *this,
        UILabel_o **prevSelectLabel,
        UnityEngine_GameObject_o *obj,
        const MethodInfo *method)
{
  UIWidget_o *v6; // x0
  Il2CppObject *Component_object; // x0
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  UnityEngine_Color_o v10; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v11; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4CB3A00 & 1) == 0 )
  {
    sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CB3A00 = 1;
  }
  v6 = (UIWidget_o *)*prevSelectLabel;
  if ( !*prevSelectLabel )
    goto LABEL_7;
  v10.fields.r = 0.0;
  v10.fields.g = 0.0;
  v10.fields.b = 0.0;
  v10.fields.a = 1.0;
  UIWidget__set_color(v6, v10, 0);
  if ( !obj
    || (Component_object = UnityEngine_GameObject__GetComponent_object_(
                             obj,
                             (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UILabel___),
        *prevSelectLabel = (UILabel_o *)Component_object,
        sub_1C6B9AC((CGThumbnailListItem_o *)prevSelectLabel, (int32_t)Component_object, v8, v9),
        (v6 = (UIWidget_o *)*prevSelectLabel) == 0) )
  {
LABEL_7:
    sub_1C6BC60(v6, prevSelectLabel);
  }
  v11.fields.r = 1.0;
  v11.fields.g = 0.0;
  v11.fields.b = 0.0;
  v11.fields.a = 1.0;
  UIWidget__set_color(v6, v11, 0);
}


void SoundTestMenu__setupCueNameList(
        SoundTestMenu_o *this,
        System_Collections_Generic_List_string__o *cueNameList,
        CriAtomExAcb_o *acb,
        const MethodInfo *method)
{
  System_Collections_Generic_List_string__o *v5; // x19
  int32_t size; // w2
  int v7; // w8
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  SoundTestMenu_o *v11; // x20
  unsigned __int64 v12; // x21
  struct System_String_o **i; // x22
  struct System_String_array *items; // x8
  _QWORD *v15; // x9
  __int64 v16; // x10
  Il2CppClass **v17; // x0

  v5 = cueNameList;
  if ( (byte_4CB39EC & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__Add__);
    this = (SoundTestMenu_o *)sub_1C6BA08(&Method_System_Collections_Generic_List_string__Clear__);
    byte_4CB39EC = 1;
  }
  if ( !v5 )
    goto LABEL_17;
  size = v5->fields._size;
  v7 = v5->fields._version + 1;
  v5->fields._size = 0;
  v5->fields._version = v7;
  if ( size >= 1 )
    System_Array__Clear((System_Array_o *)v5->fields._items, 0, size, 0);
  if ( acb )
  {
    this = (SoundTestMenu_o *)CriAtomExAcb__GetCueInfoList(acb, 0);
    if ( !this )
      goto LABEL_17;
    m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
    v11 = this;
    if ( (int)m_CancellationTokenSource >= 1 )
    {
      v12 = 0;
      for ( i = &this->fields.itemName; ; i += 19 )
      {
        if ( v12 >= (unsigned int)m_CancellationTokenSource )
          sub_1C6BC68(this);
        cueNameList = (System_Collections_Generic_List_string__o *)*i;
        items = v5->fields._items;
        v15 = Method_System_Collections_Generic_List_string__Add__;
        ++v5->fields._version;
        if ( !items )
          break;
        v16 = v5->fields._size;
        if ( (unsigned int)v16 >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            (System_Collections_Generic_List_object__o *)v5,
            (Il2CppObject *)cueNameList,
            *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
        }
        else
        {
          v17 = &items->obj.klass + v16;
          v5->fields._size = v16 + 1;
          v17[4] = (Il2CppClass *)cueNameList;
          sub_1C6B9AC((CGThumbnailListItem_o *)(v17 + 4), (int32_t)cueNameList, v8, v9);
        }
        LODWORD(m_CancellationTokenSource) = v11->fields.m_CancellationTokenSource;
        if ( (__int64)++v12 >= (int)m_CancellationTokenSource )
          return;
      }
LABEL_17:
      sub_1C6BC60(this, cueNameList);
    }
  }
}


int32_t SoundTestMenu__sort(
        SoundTestMenu_o *this,
        UnityEngine_Transform_o *a,
        UnityEngine_Transform_o *b,
        int32_t type,
        const MethodInfo *method)
{
  SoundTestMenu_o *v8; // x22
  System_String_o *name; // x0
  System_String_o *v10; // x0
  struct UILabel_o *selectSeObj; // x0
  struct UILabel_o *v13; // x1
  int32_t result[2]; // [xsp+8h] [xbp-38h] BYREF

  if ( (byte_4CB39FE & 1) == 0 )
  {
    this = (SoundTestMenu_o *)sub_1C6BA08(&Method_UnityEngine_GameObject_GetComponent_UILabel___);
    byte_4CB39FE = 1;
  }
  *(_QWORD *)result = 0;
  if ( !a )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)a, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( !b )
    goto LABEL_20;
  v8 = this;
  this = (SoundTestMenu_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)b, 0);
  if ( !this )
    goto LABEL_20;
  this = (SoundTestMenu_o *)UnityEngine_GameObject__GetComponent_object_(
                              (UnityEngine_GameObject_o *)this,
                              (const MethodInfo_319312C *)Method_UnityEngine_GameObject_GetComponent_UILabel___);
  if ( type == 2 )
  {
    if ( this && v8 )
    {
      selectSeObj = this->fields.selectSeObj;
      v13 = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v13, 0);
    }
LABEL_20:
    sub_1C6BC60(this, a);
  }
  if ( type == 1 )
  {
    if ( v8 && this )
    {
      v13 = this->fields.selectSeObj;
      selectSeObj = v8->fields.selectSeObj;
      return System_String__Compare((System_String_o *)selectSeObj, (System_String_o *)v13, 0);
    }
    goto LABEL_20;
  }
  if ( type )
    return 0;
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)a, 0);
  System_Int32__TryParse(name, &result[1], 0);
  v10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)b, 0);
  System_Int32__TryParse(v10, result, 0);
  return System_Int32__CompareTo_65474968((int32_t)&result[1], result[0], 0);
}


void SoundTestMenu__sortApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  SoundTestMenu_c *v4; // x8
  UILabel_o *sortButtonLabel; // x20
  char v6; // w21
  struct System_String_array *sortNameList; // x8
  __int64 sortTypeSe; // x9
  __int64 sortTypeBgm; // x9

  if ( (byte_4CB39FD & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_TypeInfo);
    byte_4CB39FD = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_17;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  v4 = SoundTestMenu_TypeInfo;
  sortButtonLabel = this->fields.sortButtonLabel;
  v6 = (char)seRoot;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    v4 = SoundTestMenu_TypeInfo;
  }
  sortNameList = v4->static_fields->sortNameList;
  if ( (v6 & 1) == 0 )
  {
    if ( !sortNameList )
      goto LABEL_17;
    sortTypeBgm = this->fields.sortTypeBgm;
    if ( (unsigned int)sortTypeBgm >= LODWORD(sortNameList->max_length) )
LABEL_18:
      sub_1C6BC68(seRoot);
    if ( sortButtonLabel )
    {
      UILabel__set_text(sortButtonLabel, sortNameList->m_Items[sortTypeBgm], 0);
      seRoot = (UnityEngine_GameObject_o *)this->fields.bgmGrid;
      if ( seRoot )
        goto LABEL_16;
    }
LABEL_17:
    sub_1C6BC60(seRoot, method);
  }
  if ( !sortNameList )
    goto LABEL_17;
  sortTypeSe = this->fields.sortTypeSe;
  if ( (unsigned int)sortTypeSe >= LODWORD(sortNameList->max_length) )
    goto LABEL_18;
  if ( !sortButtonLabel )
    goto LABEL_17;
  UILabel__set_text(sortButtonLabel, sortNameList->m_Items[sortTypeSe], 0);
  seRoot = (UnityEngine_GameObject_o *)this->fields.seGrid;
  if ( !seRoot )
    goto LABEL_17;
LABEL_16:
  ((void (__fastcall *)(UnityEngine_GameObject_o *, Il2CppClass *))seRoot->klass[1]._1.element_class)(
    seRoot,
    seRoot->klass[1]._1.castClass);
}


void SoundTestMenu__sortCpkApply(SoundTestMenu_o *this, const MethodInfo *method)
{
  _QWORD *p_image; // x0
  UILabel_o *sortCpkButtonLabel; // x20
  __int64 v5; // x8
  __int64 sortCpkType; // x9

  if ( (byte_4CB3A03 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_TypeInfo);
    byte_4CB3A03 = 1;
  }
  p_image = &SoundTestMenu_TypeInfo->_1.image;
  sortCpkButtonLabel = this->fields.sortCpkButtonLabel;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    p_image = &SoundTestMenu_TypeInfo->_1.image;
  }
  v5 = *(_QWORD *)(p_image[23] + 8LL);
  if ( !v5 )
    goto LABEL_10;
  sortCpkType = this->fields.sortCpkType;
  if ( (unsigned int)sortCpkType >= *(_DWORD *)(v5 + 24) )
    sub_1C6BC68(p_image);
  if ( !sortCpkButtonLabel
    || (UILabel__set_text(sortCpkButtonLabel, *(System_String_o **)(v5 + 8 * sortCpkType + 32), 0),
        (p_image = &this->fields.bgmCpkGrid->klass) == 0) )
  {
LABEL_10:
    sub_1C6BC60(p_image, method);
  }
  (*(void (__fastcall **)(_QWORD *, _QWORD))(*p_image + 440LL))(p_image, *(_QWORD *)(*p_image + 448LL));
}


void SoundTestMenu__stopBgm(SoundTestMenu_o *this, const MethodInfo *method)
{
  UILabel_o *bgmPlayLabel; // x0
  const MethodInfo *v4; // x1
  const MethodInfo *v5; // x2
  const MethodInfo *v6; // x3
  System_String_o *playBgmCueSheetName; // x0

  if ( (byte_4CB39E2 & 1) == 0 )
  {
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&StringLiteral_10634/*"Play"*/);
    byte_4CB39E2 = 1;
  }
  if ( this->fields.state == 1 )
  {
    bgmPlayLabel = this->fields.bgmPlayLabel;
    if ( !bgmPlayLabel )
      sub_1C6BC60(0, method);
    UILabel__set_text(bgmPlayLabel, (System_String_o *)StringLiteral_10634/*"Play"*/, 0);
    this->fields.isPlayBgm = 0;
    if ( !SoundManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    SoundManager__stopBgm(0);
    SoundTestMenu__ResetBgmProgressBar(this, v4);
    playBgmCueSheetName = this->fields.playBgmCueSheetName;
    if ( playBgmCueSheetName )
    {
      if ( System_String__op_Inequality(playBgmCueSheetName, this->fields.loadBgmCueSheetName, 0) )
        SoundTestMenu__releaseBgm(this, this->fields.playBgmCueSheetName, v5);
    }
    this->fields.playBgmCueSheetName = 0;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.playBgmCueSheetName, 0, (int32_t)v5, v6);
  }
}


void SoundTestMenu__stopSe(SoundTestMenu_o *this, const MethodInfo *method)
{
  SePlayer_o *sePlayer; // x0
  SePlayer_o *v4; // x20
  System_Action_o *v5; // x21
  UILabel_o *sePlayLabel; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3

  if ( (byte_4CB39E7 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu_stopSe__);
    sub_1C6BA08(&StringLiteral_10634/*"Play"*/);
    byte_4CB39E7 = 1;
  }
  sePlayer = this->fields.sePlayer;
  if ( sePlayer )
  {
    SePlayer__StopSe(sePlayer, 0.0, 0);
    v4 = this->fields.sePlayer;
    v5 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_SoundTestMenu_stopSe__, 0);
    if ( !v4
      || (SePlayer__RemoveCallback(v4, v5, 0),
          this->fields.sePlayer = 0,
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.sePlayer, 0, v8, v9),
          (sePlayLabel = this->fields.sePlayLabel) == 0) )
    {
      sub_1C6BC60(sePlayLabel, v7);
    }
    UILabel__set_text(sePlayLabel, (System_String_o *)StringLiteral_10634/*"Play"*/, 0);
    this->fields.isPlaySe = 0;
  }
}


void SoundTestMenu__switchButtonLabelChange(SoundTestMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *seRoot; // x0
  UILabel_o *sortButtonLabel; // x20
  __int64 v5; // x8
  int32_t sortTypeSe; // w9

  if ( (byte_4CB39FB & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu_TypeInfo);
    sub_1C6BA08(&StringLiteral_12029/*"SEテストに\n変更"*/);
    sub_1C6BA08(&StringLiteral_2919/*"BGMテストに\n変更"*/);
    byte_4CB39FB = 1;
  }
  seRoot = this->fields.seRoot;
  if ( !seRoot )
    goto LABEL_17;
  seRoot = (UnityEngine_GameObject_o *)UnityEngine_GameObject__get_activeSelf(seRoot, 0);
  if ( !this->fields.switchButtonLabel )
    goto LABEL_17;
  if ( ((unsigned __int8)seRoot & 1) != 0 )
  {
    UILabel__set_text(this->fields.switchButtonLabel, (System_String_o *)StringLiteral_2919/*"BGMテストに\n変更"*/, 0);
    sortButtonLabel = this->fields.sortButtonLabel;
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
    if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
      seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
    }
    v5 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
    if ( v5 )
    {
      sortTypeSe = this->fields.sortTypeSe;
      goto LABEL_14;
    }
LABEL_17:
    sub_1C6BC60(seRoot, method);
  }
  UILabel__set_text(this->fields.switchButtonLabel, (System_String_o *)StringLiteral_12029/*"SEテストに\n変更"*/, 0);
  sortButtonLabel = this->fields.sortButtonLabel;
  seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  if ( !SoundTestMenu_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu_TypeInfo);
    seRoot = (UnityEngine_GameObject_o *)SoundTestMenu_TypeInfo;
  }
  v5 = *(_QWORD *)(seRoot[7].fields.m_CachedPtr + 8);
  if ( !v5 )
    goto LABEL_17;
  sortTypeSe = this->fields.sortTypeBgm;
LABEL_14:
  if ( (unsigned int)sortTypeSe >= *(_DWORD *)(v5 + 24) )
    sub_1C6BC68(seRoot);
  if ( !sortButtonLabel )
    goto LABEL_17;
  UILabel__set_text(sortButtonLabel, *(System_String_o **)(v5 + 8LL * sortTypeSe + 32), 0);
}


// local variable allocation has failed, the output may be wrong!
void SoundTestMenu__updateBgmPrevNextButton(SoundTestMenu_o *this, bool onFlg, const MethodInfo *method)
{
  UnityEngine_GameObject_o *bgmPrevButton; // x0
  bool v5; // w20

  bgmPrevButton = this->fields.bgmPrevButton;
  if ( !bgmPrevButton
    || (v5 = onFlg,
        UnityEngine_GameObject__SetActive(bgmPrevButton, onFlg, 0),
        (bgmPrevButton = this->fields.bgmNextButton) == 0) )
  {
    sub_1C6BC60(bgmPrevButton, onFlg);
  }
  UnityEngine_GameObject__SetActive(bgmPrevButton, v5, 0);
}


void SoundTestMenu_CallbackFunc___ctor(
        SoundTestMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9F40C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F3CC;
}


System_IAsyncResult_o *SoundTestMenu_CallbackFunc__BeginInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


void SoundTestMenu_CallbackFunc__EndInvoke(
        SoundTestMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C6B9C0(result, 0, method);
}


void SoundTestMenu_CallbackFunc__Invoke(SoundTestMenu_CallbackFunc_o *this, const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(this->fields.method_code, this->fields.method);
}


void SoundTestMenu_IsValidPlaySound___ctor(
        SoundTestMenu_IsValidPlaySound_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C6BAC8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C6BC7C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C6BB30(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A9F46C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A9F420;
}


System_IAsyncResult_o *SoundTestMenu_IsValidPlaySound__BeginInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // [xsp+8h] [xbp-8h] BYREF

  v5 = 0;
  return (System_IAsyncResult_o *)sub_1C6B9BC(this, &v5, callback, object);
}


bool SoundTestMenu_IsValidPlaySound__EndInvoke(
        SoundTestMenu_IsValidPlaySound_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  __int64 v3; // x1

  if ( !sub_1C6B9C0(result, 0, method) )
    sub_1C6BC60(0, v3);
  return *(_BYTE *)j_il2cpp_object_unbox_0();
}


bool SoundTestMenu_IsValidPlaySound__Invoke(SoundTestMenu_IsValidPlaySound_o *this, const MethodInfo *method)
{
  return ((__int64 (__fastcall *)(intptr_t, intptr_t))this->fields.invoke_impl)(
           this->fields.method_code,
           this->fields.method);
}


void SoundTestMenu__CheckSeVersionDiff_d__116___ctor(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__CheckSeVersionDiff_d__116__MoveNext(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  struct SoundTestMenu_o *_4__this; // x20
  bool result; // w0
  Il2CppObject *v8; // x22
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v14; // x1
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  System_String_o *Text; // x21
  struct System_String_o *FileNameWithoutExtension; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  struct SoundTestMenu___c__DisplayClass116_0_o *v23; // x21
  System_Collections_Generic_Dictionary_object__object__o *v24; // x22
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  int v27; // w8
  Il2CppObject *v28; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o **p__8__2; // x21
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  struct SoundTestMenu___c__DisplayClass116_0_o *v34; // x1
  struct SoundTestMenu___c__DisplayClass116_1_o *v35; // x22
  Il2CppObject *Item; // x23
  int32_t v37; // w2
  const MethodInfo *v38; // x3
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  __int64 v41; // x22
  int32_t v42; // w1
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  int32_t v45; // w2
  const MethodInfo *v46; // x3
  int32_t v47; // w1
  struct System_Collections_Generic_List_string__o *v48; // x8
  int32_t v49; // w2
  const MethodInfo *v50; // x3
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  int32_t v53; // w1
  System_String_o *v54; // x0
  UILabel_o *v55; // x22
  struct SoundTestMenu___c__DisplayClass116_1_o *v56; // x21
  System_String_o *cpkName; // x22
  System_Action_o *v58; // x23
  SoundTestMenu_o *v59; // x0
  const MethodInfo *v60; // x3
  struct SoundTestMenu___c__DisplayClass116_1_o *_8__2; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  System_Collections_Generic_Dictionary_object__object__o *v63; // x24
  System_String_o *v64; // x21
  int v65; // w8
  __int64 v66; // x21
  int v67; // w27
  int32_t v68; // w23
  System_Collections_Generic_Dictionary_TKey__TValue__o *v69; // x25
  __int64 v70; // x29
  int v71; // w22
  Il2CppObject *v72; // x26
  System_Collections_Generic_Dictionary_object__object__o *v73; // x23
  System_Collections_Generic_Dictionary_object__object__o *v74; // x22
  struct SoundTestMenu___c__DisplayClass116_0_o *v75; // x8
  System_Collections_Generic_Dictionary_object__object__o *v76; // x21
  struct System_Collections_Generic_KeyValuePair_TKey__TValue__o current; // kr00_16
  System_Collections_Generic_List_object__o *v78; // x28
  System_Collections_Generic_List_object__o *v79; // x27
  System_Collections_Generic_List_object__o *v80; // x26
  __int64 v81; // x0
  __int64 v82; // x1
  Il2CppObject *v83; // x0
  const MethodInfo *v84; // x6
  __int64 v85; // x0
  __int64 v86; // x1
  SoundTestMenu___c_c *v87; // x8
  System_Func_T__TResult__o *_9__116_1; // x21
  Il2CppObject *v89; // x22
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  System_Func_TSource__TResult__o *v93; // x1
  System_Collections_Generic_IEnumerable_T__o *v94; // x0
  Il2CppObject **p__2__current; // x19
  System_String_o *v96; // x24
  const MethodInfo *v97; // x6
  const MethodInfo *v98; // x6
  const MethodInfo *v99; // x6
  Il2CppObject **v100; // x19
  int32_t v101; // w2
  const MethodInfo *v102; // x3
  System_Collections_Generic_Dictionary_object__object__o *v103; // [xsp+0h] [xbp-D0h]
  System_Collections_Generic_Dictionary_object__object__o *v104; // [xsp+8h] [xbp-C8h]
  Il2CppObject *key; // [xsp+10h] [xbp-C0h]
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v106; // [xsp+18h] [xbp-B8h] BYREF
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o v107; // [xsp+40h] [xbp-90h] BYREF
  int32_t size; // [xsp+6Ch] [xbp-64h] BYREF

  if ( (byte_4CB3A14 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C6BA08(&Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___Dispose__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___get_Current__);
    sub_1C6BA08(&System_Func_KeyValuePair_string__long___string__TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Key__);
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__Dictionary_string__long___get_Value__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__AddRange__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass116_1_TypeInfo);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_1082/*"/SE/"*/);
    sub_1C6BA08(&StringLiteral_1019/*".csv"*/);
    sub_1C6BA08(&StringLiteral_160/*" / "*/);
    sub_1C6BA08(&StringLiteral_1083/*"/SE/Diff"*/);
    sub_1C6BA08(&StringLiteral_4353/*"ChangeFiles"*/);
    sub_1C6BA08(&StringLiteral_650/*"("*/);
    sub_1C6BA08(&StringLiteral_756/*")"*/);
    sub_1C6BA08(&StringLiteral_2144/*"AddFiles"*/);
    sub_1C6BA08(&StringLiteral_5216/*"DeleteFiles"*/);
    byte_4CB3A14 = 1;
  }
  size = 0;
  memset(&v107, 0, sizeof(v107));
  _1__state = this->fields.__1__state;
  if ( _1__state == 2 )
  {
    result = 0;
    this->fields.__1__state = -1;
    return result;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_36;
  }
  result = 0;
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c__DisplayClass116_0_TypeInfo);
    System_Object___ctor(v8, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass116_0_o *)v8;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v8, v9, v10);
    _8__1 = (__int64)this->fields.__8__1;
    if ( !_8__1 )
      goto LABEL_99;
    v14 = this->fields.__4__this;
    *(_QWORD *)(_8__1 + 24) = v14;
    sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 24), (int32_t)v14, v11, v12);
    if ( !_4__this )
      goto LABEL_99;
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
    outputLabel = _4__this->fields.outputLabel;
    if ( !outputLabel )
      goto LABEL_99;
    mText = outputLabel->fields.mText;
    this->fields._labelText_5__2 = mText;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._labelText_5__2, (int32_t)mText, v15, v16);
    _8__1 = (__int64)_4__this->fields.targetCpkInput;
    if ( !_8__1 )
      goto LABEL_99;
    Text = UILineInput__GetText((UILineInput_o *)_8__1, 0);
    if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
    FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(Text, 0);
    this->fields._targetCpk_5__3 = FileNameWithoutExtension;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._targetCpk_5__3, (int32_t)FileNameWithoutExtension, v21, v22);
    v23 = this->fields.__8__1;
    v24 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v24,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    if ( !v23 )
      goto LABEL_99;
    v23->fields.currentCpkList = (struct System_Collections_Generic_Dictionary_string__Dictionary_string__long___o *)v24;
    sub_1C6B9AC((CGThumbnailListItem_o *)&v23->fields, (int32_t)v24, v25, v26);
    v27 = 0;
    this->fields._i_5__4 = 0;
    while ( 1 )
    {
      seCpkList = _4__this->fields.seCpkList;
      if ( !seCpkList )
        goto LABEL_99;
      if ( v27 >= seCpkList->fields._size )
        break;
      v28 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c__DisplayClass116_1_TypeInfo);
      System_Object___ctor(v28, 0);
      this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass116_1_o *)v28;
      p__8__2 = &this->fields.__8__2;
      sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__2, (int32_t)v28, v30, v31);
      _8__1 = (__int64)this->fields.__8__2;
      if ( !_8__1 )
        goto LABEL_99;
      v34 = this->fields.__8__1;
      *(_QWORD *)(_8__1 + 32) = v34;
      sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 32), (int32_t)v34, v32, v33);
      _8__1 = (__int64)_4__this->fields.seCpkList;
      if ( !_8__1 )
        goto LABEL_99;
      v35 = *p__8__2;
      Item = System_Collections_Generic_List_object___get_Item(
               (System_Collections_Generic_List_object__o *)_8__1,
               this->fields._i_5__4,
               (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
      if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
      _8__1 = (__int64)System_IO_Path__GetFileNameWithoutExtension((System_String_o *)Item, 0);
      if ( !v35 )
        goto LABEL_99;
      v35->fields.cpkName = (struct System_String_o *)_8__1;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v35->fields, _8__1, v37, v38);
      _8__1 = (__int64)this->fields._targetCpk_5__3;
      if ( !_8__1 )
        goto LABEL_99;
      if ( *(int *)(_8__1 + 16) < 1 )
        goto LABEL_26;
      if ( !*p__8__2 )
        goto LABEL_99;
      _8__1 = System_String__op_Inequality((System_String_o *)_8__1, (*p__8__2)->fields.cpkName, 0);
      if ( (_8__1 & 1) == 0 )
      {
LABEL_26:
        _8__1 = sub_1C6BAB0(string___TypeInfo, 5);
        if ( !_8__1 )
          goto LABEL_99;
        v41 = _8__1;
        if ( !*(_DWORD *)(_8__1 + 24) )
          goto LABEL_100;
        v42 = StringLiteral_650/*"("*/;
        *(_QWORD *)(_8__1 + 32) = StringLiteral_650/*"("*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 32), v42, v39, v40);
        size = this->fields._i_5__4 + 1;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( *(_DWORD *)(v41 + 24) <= 1u )
          goto LABEL_100;
        *(_QWORD *)(v41 + 40) = _8__1;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 40), _8__1, v43, v44);
        if ( *(_DWORD *)(v41 + 24) <= 2u )
          goto LABEL_100;
        v47 = StringLiteral_160/*" / "*/;
        *(_QWORD *)(v41 + 48) = StringLiteral_160/*" / "*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 48), v47, v45, v46);
        v48 = _4__this->fields.seCpkList;
        if ( !v48 )
          goto LABEL_99;
        size = v48->fields._size;
        _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
        if ( *(_DWORD *)(v41 + 24) <= 3u )
          goto LABEL_100;
        *(_QWORD *)(v41 + 56) = _8__1;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 56), _8__1, v49, v50);
        if ( *(_DWORD *)(v41 + 24) <= 4u )
          goto LABEL_100;
        v53 = StringLiteral_756/*")"*/;
        *(_QWORD *)(v41 + 64) = StringLiteral_756/*")"*/;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v41 + 64), v53, v51, v52);
        v54 = System_String__Concat_64007324((System_String_array *)v41, 0);
        v55 = _4__this->fields.outputLabel;
        _8__1 = (__int64)System_String__Concat_63966792(this->fields._labelText_5__2, v54, 0);
        if ( !v55 )
          goto LABEL_99;
        UILabel__set_text(v55, (System_String_o *)_8__1, 0);
        v56 = *p__8__2;
        if ( !v56 )
          goto LABEL_99;
        v56->fields.check = 0;
        cpkName = v56->fields.cpkName;
        v58 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
        System_Action___ctor(
          v58,
          (Il2CppObject *)v56,
          Method_SoundTestMenu___c__DisplayClass116_1__CheckSeVersionDiff_b__0__,
          0);
        SoundTestMenu__loadSE(v59, cpkName, v58, v60);
LABEL_36:
        _8__1 = (__int64)&this->fields.__8__2;
        _8__2 = this->fields.__8__2;
        if ( !_8__2 )
          goto LABEL_99;
        if ( !_8__2->fields.check )
        {
          this->fields.__2__current = 0;
          p__2__current = &this->fields.__2__current;
          sub_1C6B9AC((CGThumbnailListItem_o *)p__2__current, 0, v2, v3);
          result = 1;
          *((_DWORD *)p__2__current - 2) = 1;
          return result;
        }
        *(_QWORD *)_8__1 = 0;
        sub_1C6B9AC((CGThumbnailListItem_o *)_8__1, 0, v2, v3);
      }
      size = this->fields._i_5__4;
      v27 = size + 1;
      this->fields._i_5__4 = size + 1;
      if ( !_4__this )
        goto LABEL_99;
    }
    v63 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__Dictionary_string__long___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v63,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long____ctor__);
    v64 = System_String__Concat_64007060(
            _4__this->fields.pathDiffDirectory,
            (System_String_o *)StringLiteral_1082/*"/SE/"*/,
            this->fields.compareVersion,
            (System_String_o *)StringLiteral_1019/*".csv"*/,
            0);
    if ( !System_IO_File__Exists(v64, 0) )
      return 0;
    _8__1 = (__int64)System_IO_File__ReadAllLines(v64, 0);
    if ( !_8__1 )
LABEL_99:
      sub_1C6BC60(_8__1, method);
    v65 = *(_DWORD *)(_8__1 + 24);
    v66 = _8__1;
    if ( v65 >= 1 )
    {
      v67 = 0;
      while ( 1 )
      {
        if ( v67 >= (unsigned int)v65 )
          goto LABEL_100;
        _8__1 = *(_QWORD *)(v66 + 8LL * v67 + 32);
        if ( !_8__1 )
          goto LABEL_99;
        _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
        if ( !_8__1 )
          goto LABEL_99;
        if ( *(_DWORD *)(_8__1 + 24) != 3 )
          break;
        key = *(Il2CppObject **)(_8__1 + 40);
        v68 = System_Int32__Parse(*(System_String_o **)(_8__1 + 48), 0);
        v69 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__long__TypeInfo);
        System_Collections_Generic_Dictionary_object__long____ctor(
          v69,
          (const MethodInfo_34B8088 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
        if ( v68 >= 1 )
        {
          v70 = (unsigned int)v68;
          v71 = v67 + 1;
          while ( (unsigned int)v71 < *(_DWORD *)(v66 + 24) )
          {
            _8__1 = *(_QWORD *)(v66 + 8LL * v71 + 32);
            if ( !_8__1 )
              goto LABEL_99;
            _8__1 = (__int64)System_String__Split((System_String_o *)_8__1, 0x2Cu, 0, 0);
            if ( !_8__1 )
              goto LABEL_99;
            if ( *(_DWORD *)(_8__1 + 24) != 2 )
              goto LABEL_90;
            v72 = *(Il2CppObject **)(_8__1 + 32);
            _8__1 = System_Int64__Parse(*(System_String_o **)(_8__1 + 40), 0);
            if ( !v69 )
              goto LABEL_99;
            System_Collections_Generic_Dictionary_object__long___Add(
              v69,
              v72,
              _8__1,
              (const MethodInfo_34B8A38 *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
            --v70;
            ++v71;
            if ( !v70 )
              goto LABEL_58;
          }
LABEL_100:
          sub_1C6BC68(_8__1);
        }
LABEL_58:
        if ( !v63 )
          goto LABEL_99;
        _8__1 = System_Collections_Generic_Dictionary_object__object___ContainsKey(
                  v63,
                  key,
                  (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__);
        if ( (_8__1 & 1) == 0 )
          System_Collections_Generic_Dictionary_object__object___Add(
            v63,
            key,
            (Il2CppObject *)v69,
            (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
        v65 = *(_DWORD *)(v66 + 24);
        v67 += v68 + 1;
        if ( v67 >= v65 )
          goto LABEL_62;
      }
LABEL_90:
      _8__1 = (__int64)_4__this->fields.outputMask;
      if ( _8__1 )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
        return 0;
      }
      goto LABEL_99;
    }
LABEL_62:
    v73 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v73,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v104 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v104,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v74 = (System_Collections_Generic_Dictionary_object__object__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__List_string___TypeInfo);
    System_Collections_Generic_Dictionary_object__object____ctor(
      v74,
      (const MethodInfo_34BAF8C *)Method_System_Collections_Generic_Dictionary_string__List_string____ctor__);
    v75 = this->fields.__8__1;
    if ( !v75 )
      goto LABEL_99;
    _8__1 = (__int64)v75->fields.currentCpkList;
    if ( !_8__1 )
      goto LABEL_99;
    System_Collections_Generic_Dictionary_object__object___GetEnumerator(
      &v106,
      (System_Collections_Generic_Dictionary_object__object__o *)_8__1,
      (const MethodInfo_34BBD6C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___GetEnumerator__);
    v76 = v104;
    v107 = v106;
    v103 = v74;
    while ( System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext(
              &v107,
              (const MethodInfo_35B8FF4 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___MoveNext__) )
    {
      current = v107.fields._current;
      v78 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v78,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      v79 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v79,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      v80 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_string__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v80,
        (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_string___ctor__);
      if ( !v63 )
        sub_1C6BC60(v81, v82);
      if ( System_Collections_Generic_Dictionary_object__object___ContainsKey(
             v63,
             current.fields.key,
             (const MethodInfo_34BBB30 *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___ContainsKey__) )
      {
        v83 = System_Collections_Generic_Dictionary_object__object___get_Item(
                v63,
                current.fields.key,
                (const MethodInfo_34BB8BC *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___get_Item__);
        SoundTestMenu__CompareCueList(
          (SoundTestMenu_o *)v83,
          (System_Collections_Generic_Dictionary_string__long__o *)v83,
          (System_Collections_Generic_Dictionary_string__long__o *)current.fields.value,
          (System_Collections_Generic_List_string__o *)v78,
          (System_Collections_Generic_List_string__o *)v79,
          (System_Collections_Generic_List_string__o *)v80,
          v84);
        if ( !v78 )
          sub_1C6BC60(v85, v86);
      }
      else
      {
        v87 = SoundTestMenu___c_TypeInfo;
        if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
          v87 = SoundTestMenu___c_TypeInfo;
        }
        _9__116_1 = (System_Func_T__TResult__o *)v87->static_fields->__9__116_1;
        if ( !_9__116_1 )
        {
          if ( !v87->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v87);
            v87 = SoundTestMenu___c_TypeInfo;
          }
          v89 = (Il2CppObject *)v87->static_fields->__9;
          _9__116_1 = (System_Func_T__TResult__o *)sub_1C6BC54(System_Func_KeyValuePair_string__long___string__TypeInfo);
          System_Func_KeyValuePair_object__long___object____ctor(
            _9__116_1,
            v89,
            Method_SoundTestMenu___c__CheckSeVersionDiff_b__116_1__,
            0);
          static_fields = SoundTestMenu___c_TypeInfo->static_fields;
          static_fields->__9__116_1 = (struct System_Func_KeyValuePair_string__long___string__o *)_9__116_1;
          v74 = v103;
          sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__116_1, (int32_t)_9__116_1, v91, v92);
        }
        v93 = (System_Func_TSource__TResult__o *)_9__116_1;
        v76 = v104;
        v94 = (System_Collections_Generic_IEnumerable_T__o *)System_Linq_Enumerable__Select_KeyValuePair_object__long___object_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)current.fields.value,
                                                               v93,
                                                               (const MethodInfo_316D350 *)Method_System_Linq_Enumerable_Select_KeyValuePair_string__long___string___);
        if ( !v78 )
          sub_1C6BC60(v94, v94);
        System_Collections_Generic_List_object___AddRange(
          v78,
          v94,
          (const MethodInfo_3800B80 *)Method_System_Collections_Generic_List_string__AddRange__);
      }
      if ( v78->fields._size )
      {
        if ( !v73 )
          sub_1C6BC60(0, v86);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v73,
          current.fields.key,
          (Il2CppObject *)v78,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v79 )
        sub_1C6BC60(v85, v86);
      if ( v79->fields._size )
      {
        if ( !v76 )
          sub_1C6BC60(v85, v86);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v76,
          current.fields.key,
          (Il2CppObject *)v79,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
      if ( !v80 )
        sub_1C6BC60(v85, v86);
      if ( v80->fields._size )
      {
        if ( !v74 )
          sub_1C6BC60(v85, v86);
        System_Collections_Generic_Dictionary_object__object___set_Item(
          v74,
          current.fields.key,
          (Il2CppObject *)v80,
          (const MethodInfo_34BB928 *)Method_System_Collections_Generic_Dictionary_string__List_string___set_Item__);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose(
      &v107,
      (const MethodInfo_35B9114 *)Method_System_Collections_Generic_Dictionary_Enumerator_string__Dictionary_string__long___Dispose__);
    v96 = System_String__Concat_63966792(_4__this->fields.pathDiffDirectory, (System_String_o *)StringLiteral_1083/*"/SE/Diff"*/, 0);
    if ( System_IO_Directory__Exists(v96, 0) )
      System_IO_Directory__Delete(v96, 1, 0);
    System_IO_Directory__CreateDirectory(v96, 0);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v96,
      (System_String_o *)StringLiteral_2144/*"AddFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v73,
      this->fields._targetCpk_5__3,
      v97);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v96,
      (System_String_o *)StringLiteral_4353/*"ChangeFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v76,
      this->fields._targetCpk_5__3,
      v98);
    SoundTestMenu__OutputDiffFile(
      _4__this,
      v96,
      (System_String_o *)StringLiteral_5216/*"DeleteFiles"*/,
      this->fields.compareVersion,
      (System_Collections_Generic_Dictionary_string__List_string___o *)v74,
      this->fields._targetCpk_5__3,
      v99);
    _8__1 = (__int64)_4__this->fields.outputLabel;
    if ( !_8__1 )
      goto LABEL_99;
    UILabel__set_text((UILabel_o *)_8__1, this->fields._labelText_5__2, 0);
    _8__1 = (__int64)_4__this->fields.outputMask;
    if ( !_8__1 )
      goto LABEL_99;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
    this->fields.__2__current = 0;
    v100 = &this->fields.__2__current;
    sub_1C6B9AC((CGThumbnailListItem_o *)v100, 0, v101, v102);
    *((_DWORD *)v100 - 2) = 2;
    return 1;
  }
  return result;
}


Il2CppObject *SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_IEnumerator_Reset(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundTestMenu__CheckSeVersionDiff_d__116_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundTestMenu__CheckSeVersionDiff_d__116__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__CheckSeVersionDiff_d__116__System_IDisposable_Dispose(
        SoundTestMenu__CheckSeVersionDiff_d__116_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu__OutputCurrentSeList_d__114___ctor(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__OutputCurrentSeList_d__114__MoveNext(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  bool result; // w0
  struct SoundTestMenu_o *_4__this; // x20
  Il2CppObject *v8; // x22
  struct SoundTestMenu___c__DisplayClass114_0_o **p__8__1; // x21
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  __int64 _8__1; // x0
  struct SoundTestMenu_o *v15; // x1
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  struct UILabel_o *outputLabel; // x8
  struct System_String_o *mText; // x1
  struct SoundTestMenu___c__DisplayClass114_0_o *v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int v23; // w8
  int32_t v24; // w20
  Il2CppObject *v25; // x22
  struct SoundTestMenu___c__DisplayClass114_1_o **p__8__2; // x21
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  struct SoundTestMenu___c__DisplayClass114_0_o *v31; // x1
  int32_t v32; // w2
  const MethodInfo *v33; // x3
  __int64 v34; // x23
  int32_t v35; // w1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  int32_t v38; // w2
  const MethodInfo *v39; // x3
  int32_t v40; // w1
  struct System_Collections_Generic_List_string__o *v41; // x8
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  int32_t v46; // w1
  System_String_o *v47; // x0
  UILabel_o *v48; // x23
  struct SoundTestMenu___c__DisplayClass114_0_o *CS___8__locals1; // x8
  struct SoundTestMenu___c__DisplayClass114_1_o *v50; // x23
  Il2CppObject *Item; // x0
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  Il2CppObject *v54; // x21
  System_String_o *klass; // x22
  System_Action_o *v56; // x23
  SoundTestMenu_o *v57; // x0
  const MethodInfo *v58; // x3
  struct SoundTestMenu___c__DisplayClass114_1_o *_8__2; // x8
  struct System_Collections_Generic_List_string__o *seCpkList; // x9
  const MethodInfo *v61; // x3
  int32_t size; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CB3A15 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Count__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_string__get_Item__);
    sub_1C6BA08(&string___TypeInfo);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass114_1__OutputCurrentSeList_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass114_1_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_1082/*"/SE/"*/);
    sub_1C6BA08(&StringLiteral_1019/*".csv"*/);
    sub_1C6BA08(&StringLiteral_11510/*"SE"*/);
    sub_1C6BA08(&StringLiteral_160/*" / "*/);
    sub_1C6BA08(&StringLiteral_650/*"("*/);
    sub_1C6BA08(&StringLiteral_756/*")"*/);
    byte_4CB3A15 = 1;
  }
  size = 0;
  _1__state = this->fields.__1__state;
  result = 0;
  if ( _1__state == 2 )
  {
    v24 = -1;
    goto LABEL_47;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_36;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    v8 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c__DisplayClass114_0_TypeInfo);
    System_Object___ctor(v8, 0);
    this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass114_0_o *)v8;
    p__8__1 = &this->fields.__8__1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v8, v10, v11);
    _8__1 = (__int64)this->fields.__8__1;
    if ( _8__1 )
    {
      v15 = this->fields.__4__this;
      *(_QWORD *)(_8__1 + 24) = v15;
      sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 24), (int32_t)v15, v12, v13);
      if ( _4__this )
      {
        _8__1 = (__int64)_4__this->fields.outputMask;
        if ( _8__1 )
        {
          UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 1, 0);
          outputLabel = _4__this->fields.outputLabel;
          if ( outputLabel )
          {
            mText = outputLabel->fields.mText;
            this->fields._labelText_5__2 = mText;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._labelText_5__2, (int32_t)mText, v16, v17);
            v20 = this->fields.__8__1;
            _8__1 = (__int64)System_String__Concat_64007060(
                               _4__this->fields.pathDiffDirectory,
                               (System_String_o *)StringLiteral_1082/*"/SE/"*/,
                               _4__this->fields.currentAssetVersionName,
                               (System_String_o *)StringLiteral_1019/*".csv"*/,
                               0);
            if ( v20 )
            {
              v20->fields.filePath = (struct System_String_o *)_8__1;
              sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields, _8__1, v21, v22);
              if ( *p__8__1 )
              {
                _8__1 = System_IO_File__Exists((*p__8__1)->fields.filePath, 0);
                if ( (_8__1 & 1) != 0 )
                {
                  if ( !*p__8__1 )
                    goto LABEL_49;
                  System_IO_File__Delete((*p__8__1)->fields.filePath, 0);
                }
                v23 = 0;
                this->fields._isTop_5__3 = 1;
                for ( this->fields._i_5__4 = 0; ; this->fields._i_5__4 = size + 1 )
                {
                  if ( !_4__this )
                    goto LABEL_49;
                  seCpkList = _4__this->fields.seCpkList;
                  if ( !seCpkList )
                    goto LABEL_49;
                  if ( v23 >= seCpkList->fields._size )
                    break;
                  v25 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c__DisplayClass114_1_TypeInfo);
                  System_Object___ctor(v25, 0);
                  this->fields.__8__2 = (struct SoundTestMenu___c__DisplayClass114_1_o *)v25;
                  p__8__2 = &this->fields.__8__2;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__2, (int32_t)v25, v27, v28);
                  _8__1 = (__int64)this->fields.__8__2;
                  if ( !_8__1 )
                    goto LABEL_49;
                  v31 = this->fields.__8__1;
                  *(_QWORD *)(_8__1 + 32) = v31;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 32), (int32_t)v31, v29, v30);
                  _8__1 = sub_1C6BAB0(string___TypeInfo, 5);
                  if ( !_8__1 )
                    goto LABEL_49;
                  v34 = _8__1;
                  if ( !*(_DWORD *)(_8__1 + 24) )
                    goto LABEL_50;
                  v35 = StringLiteral_650/*"("*/;
                  *(_QWORD *)(_8__1 + 32) = StringLiteral_650/*"("*/;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(_8__1 + 32), v35, v32, v33);
                  _8__1 = (__int64)System_Int32__ToString((int)this + 68, 0);
                  if ( *(_DWORD *)(v34 + 24) <= 1u )
                    goto LABEL_50;
                  *(_QWORD *)(v34 + 40) = _8__1;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 40), _8__1, v36, v37);
                  if ( *(_DWORD *)(v34 + 24) <= 2u )
                    goto LABEL_50;
                  v40 = StringLiteral_160/*" / "*/;
                  *(_QWORD *)(v34 + 48) = StringLiteral_160/*" / "*/;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 48), v40, v38, v39);
                  v41 = _4__this->fields.seCpkList;
                  if ( !v41 )
                    goto LABEL_49;
                  size = v41->fields._size;
                  _8__1 = (__int64)System_Int32__ToString((int32_t)&size, 0);
                  if ( *(_DWORD *)(v34 + 24) <= 3u
                    || (*(_QWORD *)(v34 + 56) = _8__1,
                        sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 56), _8__1, v42, v43),
                        *(_DWORD *)(v34 + 24) <= 4u) )
                  {
LABEL_50:
                    sub_1C6BC68(_8__1);
                  }
                  v46 = StringLiteral_756/*")"*/;
                  *(_QWORD *)(v34 + 64) = StringLiteral_756/*")"*/;
                  sub_1C6B9AC((CGThumbnailListItem_o *)(v34 + 64), v46, v44, v45);
                  v47 = System_String__Concat_64007324((System_String_array *)v34, 0);
                  v48 = _4__this->fields.outputLabel;
                  _8__1 = (__int64)System_String__Concat_63966792(this->fields._labelText_5__2, v47, 0);
                  if ( !v48 )
                    goto LABEL_49;
                  UILabel__set_text(v48, (System_String_o *)_8__1, 0);
                  if ( this->fields._isTop_5__3 )
                  {
                    this->fields._isTop_5__3 = 0;
                  }
                  else
                  {
                    if ( !*p__8__2 )
                      goto LABEL_49;
                    CS___8__locals1 = (*p__8__2)->fields.CS___8__locals1;
                    if ( !CS___8__locals1 )
                      goto LABEL_49;
                    System_IO_File__AppendAllText(
                      CS___8__locals1->fields.filePath,
                      (System_String_o *)StringLiteral_43/*"\n"*/,
                      0);
                  }
                  v50 = *p__8__2;
                  if ( !*p__8__2 )
                    goto LABEL_49;
                  v50->fields.check = 0;
                  _8__1 = (__int64)_4__this->fields.seCpkList;
                  if ( !_8__1 )
                    goto LABEL_49;
                  Item = System_Collections_Generic_List_object___get_Item(
                           (System_Collections_Generic_List_object__o *)_8__1,
                           this->fields._i_5__4,
                           (const MethodInfo_38006A4 *)Method_System_Collections_Generic_List_string__get_Item__);
                  v50->fields.cpkName = (struct System_String_o *)Item;
                  sub_1C6B9AC((CGThumbnailListItem_o *)&v50->fields, (int32_t)Item, v52, v53);
                  v54 = (Il2CppObject *)*p__8__2;
                  if ( !v54 )
                    goto LABEL_49;
                  klass = (System_String_o *)v54[1].klass;
                  v56 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
                  System_Action___ctor(
                    v56,
                    v54,
                    Method_SoundTestMenu___c__DisplayClass114_1__OutputCurrentSeList_b__0__,
                    0);
                  SoundTestMenu__loadSE(v57, klass, v56, v58);
LABEL_36:
                  _8__1 = (__int64)&this->fields.__8__2;
                  _8__2 = this->fields.__8__2;
                  if ( !_8__2 )
                    goto LABEL_49;
                  if ( !_8__2->fields.check )
                  {
                    v24 = 1;
LABEL_46:
                    this->fields.__2__current = 0;
                    sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
                    result = 1;
LABEL_47:
                    this->fields.__1__state = v24;
                    return result;
                  }
                  this->fields.__8__2 = 0;
                  sub_1C6B9AC((CGThumbnailListItem_o *)_8__1, 0, v2, v3);
                  size = this->fields._i_5__4;
                  v23 = size + 1;
                }
                _8__1 = (__int64)_4__this->fields.outputLabel;
                if ( _8__1 )
                {
                  UILabel__set_text((UILabel_o *)_8__1, this->fields._labelText_5__2, 0);
                  _8__1 = (__int64)_4__this->fields.outputMask;
                  if ( _8__1 )
                  {
                    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)_8__1, 0, 0);
                    SoundTestMenu__SetupVersionList(
                      _4__this,
                      _4__this->fields.versionList,
                      (System_String_o *)StringLiteral_11510/*"SE"*/,
                      v61);
                    v24 = 2;
                    goto LABEL_46;
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_49:
    sub_1C6BC60(_8__1, method);
  }
  return result;
}


Il2CppObject *SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_IEnumerator_Reset(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundTestMenu__OutputCurrentSeList_d__114_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundTestMenu__OutputCurrentSeList_d__114__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__OutputCurrentSeList_d__114__System_IDisposable_Dispose(
        SoundTestMenu__OutputCurrentSeList_d__114_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145___ctor(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__MoveNext(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  if ( !this->fields.__1__state )
    this->fields.__1__state = -1;
  return 0;
}


Il2CppObject *SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_IEnumerator_Reset(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145__System_IDisposable_Dispose(
        SoundTestMenu__UpdateBgmProgressBarCoroutine_d__145_o *this,
        const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4CB3A08 & 1) == 0 )
  {
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    byte_4CB3A08 = 1;
  }
  v1 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SoundTestMenu___c_TypeInfo->static_fields->__9 = (struct SoundTestMenu___c_o *)v1;
  sub_1C6B9AC((CGThumbnailListItem_o *)SoundTestMenu___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void SoundTestMenu___c___ctor(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


System_String_o *SoundTestMenu___c___CheckSeVersionDiff_b__116_1(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o cue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = cue.fields.key;
  if ( (byte_4CB3A09 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CB3A09 = 1;
  }
  return key;
}


System_String_o *SoundTestMenu___c___CompareCueList_b__117_0(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o cue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = cue.fields.key;
  if ( (byte_4CB3A0A & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CB3A0A = 1;
  }
  return key;
}


System_String_o *SoundTestMenu___c___CompareCueList_b__117_1(
        SoundTestMenu___c_o *this,
        System_Collections_Generic_KeyValuePair_string__long__o oldCue,
        const MethodInfo *method)
{
  System_String_o *key; // x19

  key = oldCue.fields.key;
  if ( (byte_4CB3A0B & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_KeyValuePair_string__long__get_Key__);
    byte_4CB3A0B = 1;
  }
  return key;
}


void SoundTestMenu___c___onClickCpkSearchButton_b__139_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___onClickSeOpenCue_b__100_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___onClickSearchButton_b__134_1(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___playSe_b__102_2(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c___playSe_b__102_3(SoundTestMenu___c_o *this, const MethodInfo *method)
{
  ;
}


void SoundTestMenu___c__DisplayClass100_0___ctor(
        SoundTestMenu___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass100_0___onClickSeOpenCue_b__0(
        SoundTestMenu___c__DisplayClass100_0_o *this,
        const MethodInfo *method)
{
  SoundTestMenu_o *_4__this; // x0
  struct SoundTestMenu_o *v4; // x8
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  struct SoundTestMenu_o *v7; // x8
  struct System_String_o *inputCueSheetName; // x1
  System_String_o *v9; // x19
  CommonUI_o *v10; // x20
  SoundTestMenu___c_c *v11; // x8
  System_Action_o *_9__100_1; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB3A0C & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_25498/*"このアセットは存在しません。"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A0C = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SoundTestMenu__createSeItem(_4__this, method);
  v4 = this->fields.__4__this;
  if ( !v4 )
    goto LABEL_16;
  v4->fields.isLoadingSeCueSheet = 0;
  _4__this = (SoundTestMenu_o *)CriAtom__GetAcb(this->fields.inputCueSheetName, 0);
  if ( _4__this )
  {
    v7 = this->fields.__4__this;
    if ( v7 )
    {
      inputCueSheetName = this->fields.inputCueSheetName;
      v7->fields.loadSeCueSheetName = inputCueSheetName;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v7->fields.loadSeCueSheetName, (int32_t)inputCueSheetName, v5, v6);
      return;
    }
LABEL_16:
    sub_1C6BC60(_4__this, method);
  }
  v9 = System_String__Concat_64005056(
         this->fields.inputCueSheetName,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_25498/*"このアセットは存在しません。"*/,
         0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)_4__this;
  v11 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v11 = SoundTestMenu___c_TypeInfo;
  }
  _9__100_1 = v11->static_fields->__9__100_1;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__100_1 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = SoundTestMenu___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__100_1 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__100_1, v14, Method_SoundTestMenu___c__onClickSeOpenCue_b__100_1__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__100_1 = _9__100_1;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__100_1, (int32_t)_9__100_1, v16, v17);
  }
  if ( !v10 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v10, v13, v9, _9__100_1, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass102_0___ctor(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass102_0___playSe_b__0(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x1
  SoundTestMenu_o *_4__this; // x0
  System_String_o *v5; // x19
  CommonUI_o *v6; // x20
  SoundTestMenu___c_c *v7; // x8
  System_Action_o *_9__102_2; // x22
  System_String_o *v9; // x21
  Il2CppObject *v10; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v12; // w2
  const MethodInfo *v13; // x3

  if ( (byte_4CB3A0D & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SoundTestMenu___c__playSe_b__102_2__);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_25498/*"このアセットは存在しません。"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A0D = 1;
  }
  if ( CriAtom__GetAcb(this->fields.inputCueSheetName, 0) )
  {
    _4__this = this->fields.__4__this;
    if ( _4__this )
    {
      SoundTestMenu__createSeItem(_4__this, v3);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        SoundTestMenu__playSe(_4__this, v3);
        return;
      }
    }
LABEL_15:
    sub_1C6BC60(_4__this, v3);
  }
  v5 = System_String__Concat_64005056(
         this->fields.inputCueSheetName,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_25498/*"このアセットは存在しません。"*/,
         0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v6 = (CommonUI_o *)_4__this;
  v7 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v7 = SoundTestMenu___c_TypeInfo;
  }
  _9__102_2 = v7->static_fields->__9__102_2;
  v9 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_2 )
  {
    if ( !v7->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v7);
      v7 = SoundTestMenu___c_TypeInfo;
    }
    v10 = (Il2CppObject *)v7->static_fields->__9;
    _9__102_2 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__102_2, v10, Method_SoundTestMenu___c__playSe_b__102_2__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__102_2 = _9__102_2;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__102_2, (int32_t)_9__102_2, v12, v13);
  }
  if ( !v6 )
    goto LABEL_15;
  CommonUI__OpenNotificationDialog(v6, v9, v5, _9__102_2, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass102_0___playSe_b__1(
        SoundTestMenu___c__DisplayClass102_0_o *this,
        const MethodInfo *method)
{
  SoundTestMenu_o *_4__this; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  struct SoundTestMenu_o *v6; // x8
  struct System_String_o *inputCueSheetName; // x1
  const MethodInfo *v8; // x2
  System_String_o *v9; // x19
  CommonUI_o *v10; // x20
  SoundTestMenu___c_c *v11; // x8
  System_Action_o *_9__102_3; // x22
  System_String_o *v13; // x21
  Il2CppObject *v14; // x23
  struct SoundTestMenu___c_StaticFields *static_fields; // x0
  int32_t v16; // w2
  const MethodInfo *v17; // x3

  if ( (byte_4CB3A0E & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C6BA08(&Method_SoundTestMenu___c__playSe_b__102_3__);
    sub_1C6BA08(&SoundTestMenu___c_TypeInfo);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_25498/*"このアセットは存在しません。"*/);
    sub_1C6BA08(&StringLiteral_1/*""*/);
    byte_4CB3A0E = 1;
  }
  _4__this = this->fields.__4__this;
  if ( !_4__this )
    goto LABEL_16;
  SoundTestMenu__createSeItem(_4__this, method);
  _4__this = (SoundTestMenu_o *)CriAtom__GetAcb(this->fields.inputCueSheetName, 0);
  if ( _4__this )
  {
    v6 = this->fields.__4__this;
    if ( v6 )
    {
      inputCueSheetName = this->fields.inputCueSheetName;
      v6->fields.loadSeCueSheetName = inputCueSheetName;
      sub_1C6B9AC((CGThumbnailListItem_o *)&v6->fields.loadSeCueSheetName, (int32_t)inputCueSheetName, v4, v5);
      _4__this = this->fields.__4__this;
      if ( _4__this )
      {
        SoundTestMenu__playSeLocal(_4__this, this->fields.inputCueSheetName, v8);
        return;
      }
    }
LABEL_16:
    sub_1C6BC60(_4__this, method);
  }
  v9 = System_String__Concat_64005056(
         this->fields.inputCueSheetName,
         (System_String_o *)StringLiteral_43/*"\n"*/,
         (System_String_o *)StringLiteral_25498/*"このアセットは存在しません。"*/,
         0);
  _4__this = (SoundTestMenu_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v10 = (CommonUI_o *)_4__this;
  v11 = SoundTestMenu___c_TypeInfo;
  if ( !SoundTestMenu___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(SoundTestMenu___c_TypeInfo);
    v11 = SoundTestMenu___c_TypeInfo;
  }
  _9__102_3 = v11->static_fields->__9__102_3;
  v13 = (System_String_o *)StringLiteral_1/*""*/;
  if ( !_9__102_3 )
  {
    if ( !v11->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v11);
      v11 = SoundTestMenu___c_TypeInfo;
    }
    v14 = (Il2CppObject *)v11->static_fields->__9;
    _9__102_3 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
    System_Action___ctor(_9__102_3, v14, Method_SoundTestMenu___c__playSe_b__102_3__, 0);
    static_fields = SoundTestMenu___c_TypeInfo->static_fields;
    static_fields->__9__102_3 = _9__102_3;
    sub_1C6B9AC((CGThumbnailListItem_o *)&static_fields->__9__102_3, (int32_t)_9__102_3, v16, v17);
  }
  if ( !v10 )
    goto LABEL_16;
  CommonUI__OpenNotificationDialog(v10, v13, v9, _9__102_3, -1, 0, 0, 0, 0, 0, 1, 0, 0, 0.0, 0, 0);
}


void SoundTestMenu___c__DisplayClass109_0___ctor(
        SoundTestMenu___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass109_0___openCueList_b__0(
        SoundTestMenu___c__DisplayClass109_0_o *this,
        const MethodInfo *method)
{
  struct CriAtomExAcb_o *Acb; // x0
  int32_t v4; // w2
  const MethodInfo *v5; // x3
  SoundTestMenu_o *v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  Acb = CriAtom__GetAcb(this->fields.cueSheetName, 0);
  this->fields.acb = Acb;
  sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields, (int32_t)Acb, v4, v5);
  if ( !this->fields.__4__this )
    sub_1C6BC60(v6, v7);
  SoundTestMenu__setupCueNameList(v6, this->fields.cueNameList, this->fields.acb, v8);
  ActionExtensions__Call(this->fields.callBack, 0);
}


void SoundTestMenu___c__DisplayClass112_0___ctor(
        SoundTestMenu___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass112_0___allCpkCueListup_b__0(
        SoundTestMenu___c__DisplayClass112_0_o *this,
        const MethodInfo *method)
{
  System_String_array *Instance; // x0
  __int64 v4; // x1
  struct SoundTestMenu_o *_4__this; // x8
  System_String_array *v6; // x20
  System_String_o *v7; // x0
  const MethodInfo *v8; // x2

  if ( (byte_4CB3A0F & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_1037/*".txt"*/);
    byte_4CB3A0F = 1;
  }
  Instance = (System_String_array *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance
    || (Instance = SoundManager__GetCueList((SoundManager_o *)Instance, this->fields.fileName, 0),
        (_4__this = this->fields.__4__this) == 0)
    || (v6 = Instance,
        v7 = System_String__Concat_64005056(
               _4__this->fields.cueListOutputPath,
               this->fields.fileName,
               (System_String_o *)StringLiteral_1037/*".txt"*/,
               0),
        System_IO_File__WriteAllLines(v7, v6, 0),
        !this->fields.__4__this) )
  {
    sub_1C6BC60(Instance, v4);
  }
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.fileName, v8);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass114_0___ctor(
        SoundTestMenu___c__DisplayClass114_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass114_1___ctor(
        SoundTestMenu___c__DisplayClass114_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass114_1___OutputCurrentSeList_b__0(
        SoundTestMenu___c__DisplayClass114_1_o *this,
        const MethodInfo *method)
{
  SoundManager_o *Instance; // x0
  __int64 v4; // x1
  SoundManager_o *v5; // x20
  System_String_o *cpkName; // x21
  System_String_o *v7; // x0
  struct SoundTestMenu___c__DisplayClass114_0_o *CS___8__locals1; // x8
  const MethodInfo *v9; // x2
  struct SoundTestMenu___c__DisplayClass114_0_o *v10; // x8
  unsigned __int64 v11; // x24
  int64_t p_SoundBinders; // x21
  __int64 v13; // x0
  System_String_o *v14; // x22
  System_String_o *v15; // x0
  struct SoundTestMenu___c__DisplayClass114_0_o *v16; // x8
  int m_CancellationTokenSource; // [xsp+Ch] [xbp-44h] BYREF

  if ( (byte_4CB3A10 & 1) == 0 )
  {
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    sub_1C6BA08(&StringLiteral_43/*"\n"*/);
    sub_1C6BA08(&StringLiteral_808/*","*/);
    sub_1C6BA08(&StringLiteral_16422/*"__CPK__,"*/);
    byte_4CB3A10 = 1;
  }
  Instance = (SoundManager_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_12;
  Instance = (SoundManager_o *)SoundManager__GetCueInfoList(Instance, this->fields.cpkName, 0);
  if ( !Instance )
    goto LABEL_12;
  v5 = Instance;
  m_CancellationTokenSource = (int)Instance->fields.m_CancellationTokenSource;
  cpkName = this->fields.cpkName;
  v7 = System_Int32__ToString((int32_t)&m_CancellationTokenSource, 0);
  Instance = (SoundManager_o *)System_String__Concat_64007060(
                                 (System_String_o *)StringLiteral_16422/*"__CPK__,"*/,
                                 cpkName,
                                 (System_String_o *)StringLiteral_808/*","*/,
                                 v7,
                                 0);
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_12;
  System_IO_File__AppendAllText(CS___8__locals1->fields.filePath, (System_String_o *)Instance, 0);
  v10 = this->fields.CS___8__locals1;
  if ( !v10 )
    goto LABEL_12;
  v11 = 0;
  p_SoundBinders = (int64_t)&v5->fields.SoundBinders;
  while ( (__int64)v11 < m_CancellationTokenSource )
  {
    System_IO_File__AppendAllText(v10->fields.filePath, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
    if ( v11 >= LODWORD(v5->fields.m_CancellationTokenSource) )
      sub_1C6BC68(v13);
    v14 = *(System_String_o **)(p_SoundBinders - 16);
    v15 = System_Int64__ToString(p_SoundBinders, 0);
    Instance = (SoundManager_o *)System_String__Concat_64005056(v14, (System_String_o *)StringLiteral_808/*","*/, v15, 0);
    v16 = this->fields.CS___8__locals1;
    if ( v16 )
    {
      ++v11;
      p_SoundBinders += 152LL;
      System_IO_File__AppendAllText(v16->fields.filePath, (System_String_o *)Instance, 0);
      v10 = this->fields.CS___8__locals1;
      if ( v10 )
        continue;
    }
    goto LABEL_12;
  }
  if ( !v10->fields.__4__this )
LABEL_12:
    sub_1C6BC60(Instance, v4);
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.cpkName, v9);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass116_0___ctor(
        SoundTestMenu___c__DisplayClass116_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass116_1___ctor(
        SoundTestMenu___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void SoundTestMenu___c__DisplayClass116_1___CheckSeVersionDiff_b__0(
        SoundTestMenu___c__DisplayClass116_1_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1
  CriAtomEx_CueInfo_array *CueInfoList; // x21
  System_Collections_Generic_Dictionary_TKey__TValue__o *v6; // x20
  il2cpp_array_size_t max_length; // x8
  unsigned __int64 v8; // x22
  int64_t *p_length; // x24
  struct SoundTestMenu___c__DisplayClass116_0_o *CS___8__locals1; // x8
  const MethodInfo *v11; // x2
  struct SoundTestMenu___c__DisplayClass116_0_o *v12; // x8

  if ( (byte_4CB3A11 & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_Dictionary_string__long___ctor__);
    sub_1C6BA08(&System_Collections_Generic_Dictionary_string__long__TypeInfo);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
    byte_4CB3A11 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3A4F3B4 *)Method_SingletonMonoBehaviour_SoundManager__get_Instance__);
  if ( !Instance )
    goto LABEL_15;
  CueInfoList = SoundManager__GetCueInfoList((SoundManager_o *)Instance, this->fields.cpkName, 0);
  v6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)sub_1C6BC54(System_Collections_Generic_Dictionary_string__long__TypeInfo);
  System_Collections_Generic_Dictionary_object__long____ctor(
    v6,
    (const MethodInfo_34B8088 *)Method_System_Collections_Generic_Dictionary_string__long___ctor__);
  if ( !CueInfoList )
    goto LABEL_15;
  max_length = CueInfoList->max_length;
  if ( (int)max_length >= 1 )
  {
    v8 = 0;
    p_length = &CueInfoList->m_Items[0].fields.length;
    while ( 1 )
    {
      if ( v8 >= (unsigned int)max_length )
        sub_1C6BC68(Instance);
      if ( !v6 )
        break;
      System_Collections_Generic_Dictionary_object__long___Add(
        v6,
        (Il2CppObject *)*(p_length - 2),
        *p_length,
        (const MethodInfo_34B8A38 *)Method_System_Collections_Generic_Dictionary_string__long__Add__);
      LODWORD(max_length) = CueInfoList->max_length;
      ++v8;
      p_length += 19;
      if ( (__int64)v8 >= (int)max_length )
        goto LABEL_10;
    }
LABEL_15:
    sub_1C6BC60(Instance, v4);
  }
LABEL_10:
  CS___8__locals1 = this->fields.CS___8__locals1;
  if ( !CS___8__locals1 )
    goto LABEL_15;
  Instance = (Il2CppObject *)CS___8__locals1->fields.currentCpkList;
  if ( !Instance )
    goto LABEL_15;
  System_Collections_Generic_Dictionary_object__object___Add(
    (System_Collections_Generic_Dictionary_object__object__o *)Instance,
    (Il2CppObject *)this->fields.cpkName,
    (Il2CppObject *)v6,
    (const MethodInfo_34BB93C *)Method_System_Collections_Generic_Dictionary_string__Dictionary_string__long___Add__);
  v12 = this->fields.CS___8__locals1;
  if ( !v12 || !v12->fields.__4__this )
    goto LABEL_15;
  SoundTestMenu__releaseSe((SoundTestMenu_o *)Instance, this->fields.cpkName, v11);
  this->fields.check = 1;
}


void SoundTestMenu___c__DisplayClass134_0___ctor(
        SoundTestMenu___c__DisplayClass134_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundTestMenu___c__DisplayClass134_0___onClickSearchButton_b__0(
        SoundTestMenu___c__DisplayClass134_0_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  SoundTestMenu___c__DisplayClass134_0_o *v4; // x19

  v4 = this;
  if ( (byte_4CB3A12 & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass134_0_o *)sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_4CB3A12 = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass134_0_o *)this[17].monitor) == 0 )
  {
    sub_1C6BC60(this, x);
  }
  return System_String__IndexOf_64023764((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
}


void SoundTestMenu___c__DisplayClass139_0___ctor(
        SoundTestMenu___c__DisplayClass139_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool SoundTestMenu___c__DisplayClass139_0___onClickCpkSearchButton_b__0(
        SoundTestMenu___c__DisplayClass139_0_o *this,
        UnityEngine_Transform_o *x,
        const MethodInfo *method)
{
  SoundTestMenu___c__DisplayClass139_0_o *v4; // x19

  v4 = this;
  if ( (byte_4CB3A13 & 1) == 0 )
  {
    this = (SoundTestMenu___c__DisplayClass139_0_o *)sub_1C6BA08(&Method_UnityEngine_Component_GetComponent_UILabel___);
    byte_4CB3A13 = 1;
  }
  if ( !x
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)UnityEngine_Component__GetComponent_object_(
                                                           (UnityEngine_Component_o *)x,
                                                           (const MethodInfo_3131B38 *)Method_UnityEngine_Component_GetComponent_UILabel___)) == 0
    || (this = (SoundTestMenu___c__DisplayClass139_0_o *)this[17].monitor) == 0 )
  {
    sub_1C6BC60(this, x);
  }
  return System_String__IndexOf_64023764((System_String_o *)this, v4->fields.searchName, 5, 0) >= 0;
}


void SoundTestMenu__allCpkCueListup_d__112___ctor(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool SoundTestMenu__allCpkCueListup_d__112__MoveNext(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  int32_t _1__state; // w8
  void *outputMask; // x0
  struct SoundTestMenu_o *_4__this; // x20
  System_String_o *CpkPath; // x0
  struct System_String_array *Files_64827112; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w8
  int32_t v13; // w20
  Il2CppObject *v14; // x22
  struct SoundTestMenu___c__DisplayClass112_0_o **p__8__1; // x21
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct SoundTestMenu___c__DisplayClass112_0_o *v20; // x22
  struct System_String_array *v21; // x8
  __int64 ii_5__3; // x9
  System_String_o *v23; // x23
  System_String_o *FileNameWithoutExtension; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  struct SoundTestMenu___c__DisplayClass112_0_o *v27; // x22
  CGThumbnailListItem_o *p_fields; // x22
  System_String_o *fileName; // t1
  System_String_o *v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  Il2CppObject *v33; // x22
  System_String_o *klass; // x21
  System_Action_o *v35; // x23
  const MethodInfo *v36; // x3
  struct SoundTestMenu___c__DisplayClass112_0_o *_8__1; // x8
  struct System_String_array *files_5__2; // x9

  if ( (byte_4CB3A16 & 1) == 0 )
  {
    sub_1C6BA08(&System_Action_TypeInfo);
    sub_1C6BA08(&System_IO_Path_TypeInfo);
    sub_1C6BA08(&SoundManager_TypeInfo);
    sub_1C6BA08(&Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__);
    sub_1C6BA08(&SoundTestMenu___c__DisplayClass112_0_TypeInfo);
    sub_1C6BA08(&StringLiteral_792/*"*.cpk.bytes"*/);
    byte_4CB3A16 = 1;
  }
  _1__state = this->fields.__1__state;
  outputMask = 0;
  if ( _1__state == 2 )
  {
    v13 = -1;
    goto LABEL_35;
  }
  _4__this = this->fields.__4__this;
  if ( _1__state == 1 )
  {
    this->fields.__1__state = -1;
    goto LABEL_25;
  }
  if ( !_1__state )
  {
    this->fields.__1__state = -1;
    if ( _4__this )
    {
      outputMask = _4__this->fields.outputMask;
      if ( outputMask )
      {
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)outputMask, 1, 0);
        if ( !SoundManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
        CpkPath = SoundManager__getCpkPath(0);
        Files_64827112 = System_IO_Directory__GetFiles_64827112(CpkPath, (System_String_o *)StringLiteral_792/*"*.cpk.bytes"*/, 1, 0);
        this->fields._files_5__2 = Files_64827112;
        sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields._files_5__2, (int32_t)Files_64827112, v10, v11);
        outputMask = (void *)System_IO_Directory__Exists(_4__this->fields.cueListOutputPath, 0);
        if ( ((unsigned __int8)outputMask & 1) == 0 )
          outputMask = System_IO_Directory__CreateDirectory(_4__this->fields.cueListOutputPath, 0);
        v12 = 0;
        for ( this->fields._ii_5__3 = 0; ; this->fields._ii_5__3 = v12 )
        {
          files_5__2 = this->fields._files_5__2;
          if ( !files_5__2 )
            goto LABEL_37;
          if ( v12 >= SLODWORD(files_5__2->max_length) )
            break;
          v14 = (Il2CppObject *)sub_1C6BC54(SoundTestMenu___c__DisplayClass112_0_TypeInfo);
          System_Object___ctor(v14, 0);
          this->fields.__8__1 = (struct SoundTestMenu___c__DisplayClass112_0_o *)v14;
          p__8__1 = &this->fields.__8__1;
          sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__8__1, (int32_t)v14, v16, v17);
          outputMask = this->fields.__8__1;
          if ( !outputMask )
            goto LABEL_37;
          *((_QWORD *)outputMask + 4) = _4__this;
          sub_1C6B9AC((CGThumbnailListItem_o *)((char *)outputMask + 32), (int32_t)_4__this, v18, v19);
          v20 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          v20->fields.check = 0;
          v21 = this->fields._files_5__2;
          if ( !v21 )
            goto LABEL_37;
          ii_5__3 = this->fields._ii_5__3;
          if ( (unsigned int)ii_5__3 >= LODWORD(v21->max_length) )
            sub_1C6BC68(outputMask);
          v23 = v21->m_Items[ii_5__3];
          if ( !System_IO_Path_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(System_IO_Path_TypeInfo);
          FileNameWithoutExtension = System_IO_Path__GetFileNameWithoutExtension(v23, 0);
          v20->fields.fileName = FileNameWithoutExtension;
          sub_1C6B9AC((CGThumbnailListItem_o *)&v20->fields, (int32_t)FileNameWithoutExtension, v25, v26);
          v27 = *p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          fileName = v27->fields.fileName;
          p_fields = (CGThumbnailListItem_o *)&v27->fields;
          v30 = System_IO_Path__GetFileNameWithoutExtension(fileName, 0);
          p_fields->klass = (CGThumbnailListItem_c *)v30;
          sub_1C6B9AC(p_fields, (int32_t)v30, v31, v32);
          v33 = (Il2CppObject *)*p__8__1;
          if ( !*p__8__1 )
            goto LABEL_37;
          klass = (System_String_o *)v33[1].klass;
          v35 = (System_Action_o *)sub_1C6BC54(System_Action_TypeInfo);
          System_Action___ctor(v35, v33, Method_SoundTestMenu___c__DisplayClass112_0__allCpkCueListup_b__0__, 0);
          if ( !_4__this )
            goto LABEL_37;
          SoundTestMenu__loadSE((SoundTestMenu_o *)outputMask, klass, v35, v36);
LABEL_25:
          outputMask = &this->fields.__8__1;
          _8__1 = this->fields.__8__1;
          if ( !_8__1 )
            goto LABEL_37;
          if ( !_8__1->fields.check )
          {
            v13 = 1;
LABEL_34:
            this->fields.__2__current = 0;
            sub_1C6B9AC((CGThumbnailListItem_o *)&this->fields.__2__current, 0, v2, v3);
            LOBYTE(outputMask) = 1;
LABEL_35:
            this->fields.__1__state = v13;
            return (char)outputMask;
          }
          this->fields.__8__1 = 0;
          sub_1C6B9AC((CGThumbnailListItem_o *)outputMask, 0, v2, v3);
          v12 = this->fields._ii_5__3 + 1;
        }
        if ( _4__this )
        {
          outputMask = _4__this->fields.outputMask;
          if ( outputMask )
          {
            UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)outputMask, 0, 0);
            v13 = 2;
            goto LABEL_34;
          }
        }
      }
    }
LABEL_37:
    sub_1C6BC60(outputMask, method);
  }
  return (char)outputMask;
}


Il2CppObject *SoundTestMenu__allCpkCueListup_d__112__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn SoundTestMenu__allCpkCueListup_d__112__System_Collections_IEnumerator_Reset(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1C6BA1C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C6BC54(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_1C6BA1C(&Method_SoundTestMenu__allCpkCueListup_d__112_System_Collections_IEnumerator_Reset__);
  sub_1C6BB30(v3, v4);
}


Il2CppObject *SoundTestMenu__allCpkCueListup_d__112__System_Collections_IEnumerator_get_Current(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void SoundTestMenu__allCpkCueListup_d__112__System_IDisposable_Dispose(
        SoundTestMenu__allCpkCueListup_d__112_o *this,
        const MethodInfo *method)
{
  ;
}