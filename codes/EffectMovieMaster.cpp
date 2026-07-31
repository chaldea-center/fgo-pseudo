void EffectMovieMaster___cctor(const MethodInfo *method)
{
  System_String_o *v1; // x2
  System_String_o *v2; // x3
  int32_t v3; // w4
  int32_t v4; // w5
  bool v5; // w6
  bool v6; // w7
  int32_t v7; // w1
  int32_t v8; // w1
  struct EffectMovieMaster_StaticFields *static_fields; // x0
  System_String_o *v10; // x2
  System_String_o *v11; // x3
  int32_t v12; // w4
  int32_t v13; // w5
  bool v14; // w6
  bool v15; // w7
  int32_t v16; // w1
  struct EffectMovieMaster_StaticFields *v17; // x0
  System_String_o *v18; // x2
  System_String_o *v19; // x3
  int32_t v20; // w4
  int32_t v21; // w5
  bool v22; // w6
  bool v23; // w7
  int32_t v24; // w1
  struct EffectMovieMaster_StaticFields *v25; // x0
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7

  if ( (byte_59384E8 & 1) == 0 )
  {
    sub_21FFC50(&EffectMovieMaster_TypeInfo);
    sub_21FFC50(&StringLiteral_6148/*"Effect/weapon/{0}/usm/"*/);
    sub_21FFC50(&StringLiteral_6090/*"Effect/BattleCommon/usm/"*/);
    sub_21FFC50(&StringLiteral_6151/*"Effect/weapon/{0}/{1}/usm/"*/);
    sub_21FFC50(&StringLiteral_9897/*"NoblePhantasm/{0}/usm/"*/);
    byte_59384E8 = 1;
  }
  v7 = StringLiteral_9897/*"NoblePhantasm/{0}/usm/"*/;
  EffectMovieMaster_TypeInfo->static_fields->NOBLE_PATH = (struct System_String_o *)StringLiteral_9897/*"NoblePhantasm/{0}/usm/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)EffectMovieMaster_TypeInfo->static_fields, v7, v1, v2, v3, v4, v5, v6);
  v8 = StringLiteral_6148/*"Effect/weapon/{0}/usm/"*/;
  static_fields = EffectMovieMaster_TypeInfo->static_fields;
  static_fields->WEAPON_PATH = (struct System_String_o *)StringLiteral_6148/*"Effect/weapon/{0}/usm/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&static_fields->WEAPON_PATH, v8, v10, v11, v12, v13, v14, v15);
  v16 = StringLiteral_6151/*"Effect/weapon/{0}/{1}/usm/"*/;
  v17 = EffectMovieMaster_TypeInfo->static_fields;
  v17->WEAPON_SUB_PATH = (struct System_String_o *)StringLiteral_6151/*"Effect/weapon/{0}/{1}/usm/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v17->WEAPON_SUB_PATH, v16, v18, v19, v20, v21, v22, v23);
  v24 = StringLiteral_6090/*"Effect/BattleCommon/usm/"*/;
  v25 = EffectMovieMaster_TypeInfo->static_fields;
  v25->BATTLECOMMON_PATH = (struct System_String_o *)StringLiteral_6090/*"Effect/BattleCommon/usm/"*/;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v25->BATTLECOMMON_PATH, v24, v26, v27, v28, v29, v30, v31);
}


void EffectMovieMaster___ctor(EffectMovieMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59384E7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
    byte_59384E7 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    516,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int___ctor__);
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
  System_String_o *v13; // x2
  System_String_o *v14; // x3
  int32_t v15; // w4
  int32_t v16; // w5
  bool v17; // w6
  bool v18; // w7
  Il2CppObject *v19; // x1
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  Il2CppClass **v23; // x0
  System_Collections_Generic_List_Enumerator_int__o v25; // [xsp+8h] [xbp-88h] BYREF
  System_Collections_Generic_List_Enumerator_int__o v26; // [xsp+20h] [xbp-70h] BYREF

  if ( (byte_59384E6 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__MoveNext__);
    sub_21FFC50(&Method_System_Collections_Generic_List_Enumerator_int__get_Current__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_int__GetEnumerator__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    byte_59384E6 = 1;
  }
  memset(&v26, 0, sizeof(v26));
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
  if ( !effectMovieIdList )
    goto LABEL_16;
  System_Collections_Generic_List_int___GetEnumerator(
    (System_Collections_Generic_List_Enumerator_T__o *)&v25,
    effectMovieIdList,
    (const MethodInfo_4433BE8 *)Method_System_Collections_Generic_List_int__GetEnumerator__);
  v26 = v25;
  v25.fields._list = 0;
  *(_QWORD *)&v25.fields._index = &v26;
  while ( System_Collections_Generic_List_Enumerator_int___MoveNext(
            &v26,
            (const MethodInfo_40C2130 *)Method_System_Collections_Generic_List_Enumerator_int__MoveNext__) )
  {
    current = v26.fields._current;
    Entity = DataMasterBase_object__object__int___GetEntity(
               (DataMasterBase_TMaster__TEntity__PKType__o *)this,
               v26.fields._current,
               (const MethodInfo_3EDD388 *)Method_DataMasterBase_EffectMovieMaster__EffectMovieEntity__int__GetEntity__);
    if ( !Entity )
      sub_21FFECC(0, v10);
    FilePath = (Il2CppObject *)EffectMovieEntity__GetFilePath((EffectMovieEntity_o *)Entity, current, 0, v11);
    v19 = FilePath;
    if ( !v5
      || (items = v5->fields._items,
          v21 = Method_System_Collections_Generic_List_string__Add__,
          ++v5->fields._version,
          !items) )
    {
      sub_21FFECC(FilePath, FilePath);
    }
    size = v5->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v5,
        FilePath,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
    }
    else
    {
      v23 = &items->obj.klass + size;
      v5->fields._size = size + 1;
      v23[4] = (Il2CppClass *)v19;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v23 + 4), (int32_t)v19, v13, v14, v15, v16, v17, v18);
    }
  }
  System_Collections_Generic_List_Enumerator_int___Dispose(
    &v26,
    (const MethodInfo_40C212C *)Method_System_Collections_Generic_List_Enumerator_int__Dispose__);
  if ( !v5 )
LABEL_16:
    sub_21FFECC(v6, v7);
  return (System_String_array *)System_Collections_Generic_List_object___ToArray(
                                  v5,
                                  (const MethodInfo_445164C *)Method_System_Collections_Generic_List_string__ToArray__);
}