void __fastcall EffectMovieMaster___cctor(const MethodInfo *method)
{
  int32_t v1; // w2
  int32_t v2; // w3
  int32_t v3; // w1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int32_t v5; // w2
  int32_t v6; // w3
  int32_t v7; // w1
  struct EffectMovieMaster_StaticFields *v8; // x0
  int32_t v9; // w2
  int32_t v10; // w3

  if ( (byte_4A5AFE5 & 1) == 0 )
  {
    sub_1B885B0(&EffectMovieMaster_TypeInfo);
    sub_1B885B0(&StringLiteral_5867/*"Effect/weapon/{0}/usm/"*/);
    sub_1B885B0(&StringLiteral_5814/*"Effect/BattleCommon/usm/"*/);
    sub_1B885B0(&StringLiteral_9504/*"NoblePhantasm/{0}/usm/"*/);
    byte_4A5AFE5 = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9504/*"NoblePhantasm/{0}/usm/"*/;
  sub_1B88554(
    (ServantStatusBattleListViewItem_o *)EffectMovieMaster_TypeInfo->static_fields,
    StringLiteral_9504/*"NoblePhantasm/{0}/usm/"*/,
    v1,
    v2);
  v3 = StringLiteral_5867/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_5867/*"Effect/weapon/{0}/usm/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&static_fields->WEAPON_PATH, v3, v5, v6);
  v7 = StringLiteral_5814/*"Effect/BattleCommon/usm/"*/;
  v8 = EffectMovieMaster_TypeInfo->static_fields;
  v8->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5814/*"Effect/BattleCommon/usm/"*/;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&v8->BATTLECOMMON_PATH, v7, v9, v10);
}


void __fastcall EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4A5AFE4 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
    byte_4A5AFE4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    507,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
}


System_String_array *__fastcall EffectMovieMaster__GetFilePaths(
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
  const MethodInfo *v11; // x2
  Il2CppObject *FilePath; // x0
  int32_t v13; // w2
  int32_t v14; // w3
  Il2CppObject *v15; // x1
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  Il2CppClass **v19; // x0
  System_Collections_Generic_List_Enumerator_int__o v21; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v22; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4A5AFE3 & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1B885B0(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_string__TypeInfo);
    byte_4A5AFE3 = 1;
  }
  memset(&v22, 0, sizeof(v22));
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v21,
    effectMovieIdList,
    (const MethodInfo_34E12E4 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v22 = v21;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v22,
            (const MethodInfo_3274238 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v22.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v22.fields._current,
               (const MethodInfo_311D934 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1B8880C(0LL, v10);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, v11);
    v15 = FilePath;
    if ( !v5 )
      sub_1B8880C(FilePath, FilePath);
    items = v5->fields._items;
    v17 = Method_System_Collections_Generic_List_string__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1B8880C(FilePath, FilePath);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        FilePath,
        *(const MethodInfo_34FD834 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
    }
    else
    {
      v19 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v19[4] = (Il2CppClass *)v15;
      sub_1B88554((ServantStatusBattleListViewItem_o *)(v19 + 4), (int32_t)v15, v13, v14);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v22,
    (const MethodInfo_3274234 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1B8880C(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_string__ToArray__);
}