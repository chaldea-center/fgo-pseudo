void __fastcall EffectMovieMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  int32_t v8; // w1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int32_t v10; // w2
  const MethodInfo *v11; // x3
  int32_t v12; // w1
  struct EffectMovieMaster_StaticFields *v13; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  int32_t v16; // w1
  struct EffectMovieMaster_StaticFields *v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3

  if ( (byte_49BACDF & 1) == 0 )
  {
    sub_1B4CF90(&EffectMovieMaster_TypeInfo, v1);
    sub_1B4CF90(&StringLiteral_5800/*"Effect/weapon/{0}/usm/"*/, v4);
    sub_1B4CF90(&StringLiteral_5746/*"Effect/BattleCommon/usm/"*/, v5);
    sub_1B4CF90(&StringLiteral_5803/*"Effect/weapon/{0}/{1}/usm/"*/, v6);
    sub_1B4CF90(&StringLiteral_9313/*"NoblePhantasm/{0}/usm/"*/, v7);
    byte_49BACDF = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9313/*"NoblePhantasm/{0}/usm/"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)EffectMovieMaster_TypeInfo->static_fields, StringLiteral_9313/*"NoblePhantasm/{0}/usm/"*/, v2, v3);
  v8 = StringLiteral_5800/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_5800/*"Effect/weapon/{0}/usm/"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->WEAPON_PATH, v8, v10, v11);
  v12 = StringLiteral_5803/*"Effect/weapon/{0}/{1}/usm/"*/;
  v13 = EffectMovieMaster_TypeInfo->static_fields;
  v13->WEAPON_SUB_PATH = (struct System_String_o *)StringLiteral_5803/*"Effect/weapon/{0}/{1}/usm/"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v13->WEAPON_SUB_PATH, v12, v14, v15);
  v16 = StringLiteral_5746/*"Effect/BattleCommon/usm/"*/;
  v17 = EffectMovieMaster_TypeInfo->static_fields;
  v17->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5746/*"Effect/BattleCommon/usm/"*/;
  sub_1B4CF34((CGThumbnailListItem_o *)&v17->BATTLECOMMON_PATH, v16, v18, v19);
}


void __fastcall EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49BACDE & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__, method);
    byte_49BACDE = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_319B678 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
}


System_String_array *__fastcall EffectMovieMaster__GetFilePaths(
        EffectMovieMaster_o *this,
        System_Collections_Generic_List_int__o *effectMovieIdList,
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
  System_Collections_Generic_List_object__o *v13; // x19
  __int64 v14; // x0
  __int64 v15; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v18; // x1
  const MethodInfo *v19; // x3
  Il2CppObject *FilePath; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  Il2CppObject *v23; // x1
  struct System_Object_array *items; // x8
  _QWORD *v25; // x9
  __int64 size; // x10
  Il2CppClass **v27; // x0
  System_Collections_Generic_List_Enumerator_int__o v29; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v30; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_49BACDD & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__, effectMovieIdList);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1B4CF90(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1B4CF90(&System_Collections_Generic_List_string__TypeInfo, v12);
    byte_49BACDD = 1;
  }
  memset(&v30, 0, sizeof(v30));
  v13 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v29,
    effectMovieIdList,
    (const MethodInfo_3563C8C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v30 = v29;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v30,
            (const MethodInfo_3304A70 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v30.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v30.fields._current,
               (const MethodInfo_319D99C *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B4D1EC(0LL, v18);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, 0, v19);
    v23 = FilePath;
    if ( !v13 )
      sub_1B4D1EC(FilePath, FilePath);
    items = v13->fields._items;
    v25 = Method_System_Collections_Generic_List_string__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1B4D1EC(FilePath, FilePath);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        FilePath,
        *(const MethodInfo_35801DC **)(*(_QWORD *)(v25[4] + 192LL) + 112LL));
    }
    else
    {
      v27 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v27[4] = (Il2CppClass *)v23;
      sub_1B4CF34((CGThumbnailListItem_o *)(v27 + 4), (int32_t)v23, v21, v22);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v30,
    (const MethodInfo_3304A6C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v13 )
LABEL_17:
    sub_1B4D1EC(v14, v15);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v13,
                                  (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_string__ToArray__);
}