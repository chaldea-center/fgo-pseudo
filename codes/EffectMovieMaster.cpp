void EffectMovieMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  const MethodInfo *v2; // x3
  int32_t v3; // w1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  int32_t v7; // w1
  struct EffectMovieMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  struct EffectMovieMaster_StaticFields *v12; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_4C37828 & 1) == 0 )
  {
    sub_1C32C20(&EffectMovieMaster_TypeInfo);
    sub_1C32C20(&StringLiteral_5909/*"Effect/weapon/{0}/usm/"*/);
    sub_1C32C20(&StringLiteral_5851/*"Effect/BattleCommon/usm/"*/);
    sub_1C32C20(&StringLiteral_5912/*"Effect/weapon/{0}/{1}/usm/"*/);
    sub_1C32C20(&StringLiteral_9517/*"NoblePhantasm/{0}/usm/"*/);
    byte_4C37828 = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9517/*"NoblePhantasm/{0}/usm/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)EffectMovieMaster_TypeInfo->static_fields, StringLiteral_9517/*"NoblePhantasm/{0}/usm/"*/, v1, v2);
  v3 = StringLiteral_5909/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_5909/*"Effect/weapon/{0}/usm/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->WEAPON_PATH, v3, v5, v6);
  v7 = StringLiteral_5912/*"Effect/weapon/{0}/{1}/usm/"*/;
  v8 = EffectMovieMaster_TypeInfo->static_fields;
  v8->WEAPON_SUB_PATH = (struct System_String_o *)StringLiteral_5912/*"Effect/weapon/{0}/{1}/usm/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v8->WEAPON_SUB_PATH, v7, v9, v10);
  v11 = StringLiteral_5851/*"Effect/BattleCommon/usm/"*/;
  v12 = EffectMovieMaster_TypeInfo->static_fields;
  v12->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5851/*"Effect/BattleCommon/usm/"*/;
  sub_1C32BC4((CGThumbnailListItem_o *)&v12->BATTLECOMMON_PATH, v11, v13, v14);
}


void EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C37827 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
    byte_4C37827 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_3394514 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
}


System_String_array *EffectMovieMaster__GetFilePaths(
        EffectMovieMaster_o *this,
        System_Collections_Generic_List_int__o *effectMovieIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  const MethodInfo *v9; // x3
  Il2CppObject *FilePath; // x0
  int32_t v11; // w2
  const MethodInfo *v12; // x3
  Il2CppObject *v13; // x1
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  Il2CppClass **v17; // x0
  System_Collections_Generic_List_Enumerator_int__o v19; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v20; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4C37826 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C32C20(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_string__TypeInfo);
    byte_4C37826 = 1;
  }
  memset(&v20, 0, sizeof(v20));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v19,
    effectMovieIdList,
    (const MethodInfo_377C26C *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v20 = v19;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v20,
            (const MethodInfo_351F190 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v20.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v20.fields._current,
               (const MethodInfo_3396838 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C32E7C(0);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, 0, v9);
    v13 = FilePath;
    if ( !v5 )
      sub_1C32E7C(FilePath);
    items = v5->fields._items;
    v15 = Method_System_Collections_Generic_List_string__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C32E7C(FilePath);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        FilePath,
        *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
    }
    else
    {
      v17 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v17[4] = (Il2CppClass *)v13;
      sub_1C32BC4((CGThumbnailListItem_o *)(v17 + 4), (int32_t)v13, v11, v12);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v20,
    (const MethodInfo_351F18C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1C32E7C(v6);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_string__ToArray__);
}