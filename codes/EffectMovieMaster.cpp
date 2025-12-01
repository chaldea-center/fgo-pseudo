void EffectMovieMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  System_String_o *v3; // x4
  int32_t v4; // w5
  int64_t v5; // x6
  System_String_o *v6; // x7
  int32_t v7; // w1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  System_String_o *v11; // x4
  int32_t v12; // w5
  int64_t v13; // x6
  System_String_o *v14; // x7
  int32_t v15; // w1
  struct EffectMovieMaster_StaticFields *v16; // x0
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w1
  struct EffectMovieMaster_StaticFields *v24; // x0
  int32_t v25; // w2
  int32_t v26; // w3
  System_String_o *v27; // x4
  int32_t v28; // w5
  int64_t v29; // x6
  System_String_o *v30; // x7

  if ( (byte_4CC7257 & 1) == 0 )
  {
    sub_1C713B0(&EffectMovieMaster_TypeInfo);
    sub_1C713B0(&StringLiteral_5903/*"Effect/weapon/{0}/usm/"*/);
    sub_1C713B0(&StringLiteral_5845/*"Effect/BattleCommon/usm/"*/);
    sub_1C713B0(&StringLiteral_5906/*"Effect/weapon/{0}/{1}/usm/"*/);
    sub_1C713B0(&StringLiteral_9519/*"NoblePhantasm/{0}/usm/"*/);
    byte_4CC7257 = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9519/*"NoblePhantasm/{0}/usm/"*/;
  sub_1C71354(
    (GrandQuestFolderBoardItem_o *)EffectMovieMaster_TypeInfo->static_fields,
    StringLiteral_9519/*"NoblePhantasm/{0}/usm/"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_5903/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_5903/*"Effect/weapon/{0}/usm/"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&static_fields->WEAPON_PATH, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_5906/*"Effect/weapon/{0}/{1}/usm/"*/;
  v16 = EffectMovieMaster_TypeInfo->static_fields;
  v16->WEAPON_SUB_PATH = (struct System_String_o *)StringLiteral_5906/*"Effect/weapon/{0}/{1}/usm/"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v16->WEAPON_SUB_PATH, v15, v17, v18, v19, v20, v21, v22);
  v23 = StringLiteral_5845/*"Effect/BattleCommon/usm/"*/;
  v24 = EffectMovieMaster_TypeInfo->static_fields;
  v24->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5845/*"Effect/BattleCommon/usm/"*/;
  sub_1C71354((GrandQuestFolderBoardItem_o *)&v24->BATTLECOMMON_PATH, v23, v25, v26, v27, v28, v29, v30);
}


void EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CC7256 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
    byte_4CC7256 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    514,
    (const MethodInfo_3406B5C *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
}


System_String_array *EffectMovieMaster__GetFilePaths(
        EffectMovieMaster_o *this,
        System_Collections_Generic_List_int__o *effectMovieIdList,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t current; // w21
  Il2CppObject *Entity; // x0
  __int64 v10; // x1
  const MethodInfo *v11; // x3
  Il2CppObject *FilePath; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  System_String_o *v15; // x4
  int32_t v16; // w5
  int64_t v17; // x6
  System_String_o *v18; // x7
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4CC7255 & 1) == 0 )
  {
    sub_1C713B0(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C713B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C713B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C713B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C713B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4CC7255 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C715FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_380FEE4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    effectMovieIdList,
    (const MethodInfo_37F41C8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_35924B0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v26.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v26.fields._current,
               (const MethodInfo_3408E80 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C71608(0, v10);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, 0, v11);
    v19 = FilePath;
    if ( !v5 )
      sub_1C71608(FilePath, FilePath);
    items = v5->fields._items;
    v21 = Method_System_Collections_Generic_List_string__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C71608(FilePath, FilePath);
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        FilePath,
        *(const MethodInfo_3810718 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_1C71354((GrandQuestFolderBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_35924AC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1C71608(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3812270 *)Method_System_Collections_Generic_List_string__ToArray__);
}