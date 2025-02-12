void __fastcall EffectMovieMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  int64_t v11; // x1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  int64_t v19; // x1
  struct EffectMovieMaster_StaticFields *v20; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7

  if ( (byte_4BC791E & 1) == 0 )
  {
    sub_1C1ABD4(&EffectMovieMaster_TypeInfo, v1);
    sub_1C1ABD4(&StringLiteral_6014/*"Effect/weapon/{0}/usm/"*/, v8);
    sub_1C1ABD4(&StringLiteral_5960/*"Effect/BattleCommon/usm/"*/, v9);
    sub_1C1ABD4(&StringLiteral_9688/*"NoblePhantasm/{0}/usm/"*/, v10);
    byte_4BC791E = 1;
  }
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9688/*"NoblePhantasm/{0}/usm/"*/;
  sub_1C1AB78(
    (PartyOrganizationUtility_o *)EffectMovieMaster_TypeInfo->static_fields,
    StringLiteral_9688/*"NoblePhantasm/{0}/usm/"*/,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
  v11 = StringLiteral_6014/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_6014/*"Effect/weapon/{0}/usm/"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&static_fields->WEAPON_PATH, v11, v13, v14, v15, v16, v17, v18);
  v19 = StringLiteral_5960/*"Effect/BattleCommon/usm/"*/;
  v20 = EffectMovieMaster_TypeInfo->static_fields;
  v20->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_5960/*"Effect/BattleCommon/usm/"*/;
  sub_1C1AB78((PartyOrganizationUtility_o *)&v20->BATTLECOMMON_PATH, v19, v21, v22, v23, v24, v25, v26);
}


void __fastcall EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4BC791D & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__, method);
    byte_4BC791D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    511,
    (const MethodInfo_3246354 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
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
  const MethodInfo *v19; // x2
  Il2CppObject *FilePath; // x0
  int64_t v21; // x2
  int32_t v22; // w3
  System_String_o *v23; // x4
  BattleSetupInfo_o *v24; // x5
  FollowerInfo_o *v25; // x6
  PartyListViewItem_o *v26; // x7
  int64_t v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_List_Enumerator_int__o v33; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v34; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_4BC791C & 1) == 0 )
  {
    sub_1C1ABD4(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__, effectMovieIdList);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__, v5);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__, v6);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__, v7);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__Add__, v8);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_int__GetEnumerator__, v9);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string__ToArray__, v10);
    sub_1C1ABD4(&Method_System_Collections_Generic_List_string___ctor__, v11);
    sub_1C1ABD4(&System_Collections_Generic_List_string__TypeInfo, v12);
    byte_4BC791C = 1;
  }
  memset(&v34, 0, sizeof(v34));
  v13 = (System_Collections_Generic_List_object__o *)sub_1C1AE20(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v13,
    (const MethodInfo_363C05C *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_17;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v33,
    effectMovieIdList,
    (const MethodInfo_3620340 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v34 = v33;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v34,
            (const MethodInfo_33CA42C *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v34.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v34.fields._current,
               (const MethodInfo_3248678 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_1C1AE30(0LL, v18);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, v19);
    v27 = (int64_t)FilePath;
    if ( !v13 )
      sub_1C1AE30(FilePath, FilePath);
    items = v13->fields._items;
    v29 = Method_System_Collections_Generic_List_string__Add__;
    ++v13->fields._version;
    if ( !items )
      sub_1C1AE30(FilePath, FilePath);
    size = v13->fields._size;
    if ( (unsigned int)size >= items->max_length )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v13,
        FilePath,
        *(const MethodInfo_363C890 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
    }
    else
    {
      v31 = &items->obj.klass + size;
      v13->fields._size = size + 1;
      v31[4] = (Il2CppClass *)v27;
      sub_1C1AB78((PartyOrganizationUtility_o *)(v31 + 4), v27, v21, v22, v23, v24, v25, v26);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v34,
    (const MethodInfo_33CA428 *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v13 )
LABEL_17:
    sub_1C1AE30(v14, v15);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v13,
                                  (const MethodInfo_363E3E8 *)Method_System_Collections_Generic_List_string__ToArray__);
}