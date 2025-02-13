void __fastcall EffectMovieMaster___cctor(const MethodInfo *method)
{
  int64_t v1; // x2
  int32_t v2; // w3
  System_String_o *v3; // x4
  BattleSetupInfo_o *v4; // x5
  FollowerInfo_o *v5; // x6
  PartyListViewItem_o *v6; // x7
  int64_t v7; // x1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  int64_t v15; // x1
  struct EffectMovieMaster_StaticFields *v16; // x0
  int64_t v17; // x2
  int32_t v18; // w3
  System_String_o *v19; // x4
  BattleSetupInfo_o *v20; // x5
  FollowerInfo_o *v21; // x6
  PartyListViewItem_o *v22; // x7

  if ( (byte_4BDC3B5 & 1) == 0 )
  {
    sub_1C21E38(&EffectMovieMaster_TypeInfo);
    sub_1C21E38(&StringLiteral_6024/*"Effect/weapon/{0}/usm/"*/);
    sub_1C21E38(&StringLiteral_5970/*"Effect/BattleCommon/usm/"*/);
    sub_1C21E38(&StringLiteral_9698/*"NoblePhantasm/{0}/usm/"*/);
    byte_4BDC3B5 = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9698/*"NoblePhantasm/{0}/usm/"*/;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)EffectMovieMaster_TypeInfo->static_fields,
    StringLiteral_9698/*"NoblePhantasm/{0}/usm/"*/,
    v1,
    v2,
    v3,
    v4,
    v5,
    v6);
  v7 = StringLiteral_6024/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_6024/*"Effect/weapon/{0}/usm/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&static_fields->WEAPON_PATH, v7, v9, v10, v11, v12, v13, v14);
  v15 = StringLiteral_5970/*"Effect/BattleCommon/usm/"*/;
  v16 = EffectMovieMaster_TypeInfo->static_fields;
  v16->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5970/*"Effect/BattleCommon/usm/"*/;
  sub_1C21DDC((PartyOrganizationUtility_o *)&v16->BATTLECOMMON_PATH, v15, v17, v18, v19, v20, v21, v22);
}


void __fastcall EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BDC3B4 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
    byte_4BDC3B4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_3259AA4 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
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
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BDC3B3 & 1) == 0 )
  {
    sub_1C21E38(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_1C21E38(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_1C21E38(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C21E38(&System_Collections_Generic_List_string__TypeInfo);
    byte_4BDC3B3 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    effectMovieIdList,
    (const MethodInfo_3632B64 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_33DD1D0 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v26.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v26.fields._current,
               (const MethodInfo_325BDC8 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C22094(0LL, v10);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, v11);
    v19 = (int64_t)FilePath;
    if ( !v5 )
      sub_1C22094(FilePath, FilePath);
    items = v5->fields._items;
    v21 = Method_System_Collections_Generic_List_string__Add__;
    ++v5->fields._version;
    if ( !items )
      sub_1C22094(FilePath, FilePath);
    size = v5->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        FilePath,
        *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_1C21DDC((PartyOrganizationUtility_o *)(v23 + 4), v19, v13, v14, v15, v16, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_33DD1CC *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v5 )
LABEL_17:
    sub_1C22094(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_string__ToArray__);
}