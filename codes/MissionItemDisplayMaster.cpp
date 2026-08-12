void MissionItemDisplayMaster___ctor(MissionItemDisplayMaster_o *this, const MethodInfo *method)
{
  if ( (byte_5970D95 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__);
    byte_5970D95 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    538,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_MissionItemDisplayMaster__MissionItemDisplayEntity__int___ctor__);
}


MissionItemDisplayEntity_array *MissionItemDisplayMaster__GetListByMissionType(
        MissionItemDisplayMaster_o *this,
        int32_t missionType,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 v6; // x1
  void *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x0
  System_Collections_Generic_IEnumerator_T__c *v16; // x8
  __int64 v17; // x9
  int *v18; // x10
  __int64 v19; // x0
  MissionItemDisplayEntity_o *v20; // x0
  const MethodInfo *v21; // x1
  Il2CppObject *v22; // x21
  _BOOL8 IsEnable; // x0
  __int64 v24; // x1
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
  System_Collections_Generic_IEnumerator_T__c *v35; // x8
  __int64 v36; // x9
  int *v37; // x10
  __int64 v38; // x0
  struct MissionItemDisplayMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__0_0; // x20
  Il2CppObject *v41; // x21
  struct MissionItemDisplayMaster___c_StaticFields *v42; // x0
  System_String_o *v43; // x2
  System_String_o *v44; // x3
  int32_t v45; // w4
  int32_t v46; // w5
  bool v47; // w6
  bool v48; // w7
  System_Collections_Generic_IEnumerator_T__o *v50; // [xsp+18h] [xbp-38h]

  if ( (byte_5970D94 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_MissionItemDisplayEntity__TypeInfo);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__);
    sub_2213A60(&Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo);
    sub_2213A60(&Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__);
    sub_2213A60(&MissionItemDisplayMaster___c_TypeInfo);
    byte_5970D94 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_MissionItemDisplayEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_MissionItemDisplayEntity___ctor__);
  list = this->fields.list;
  if ( !list )
    goto LABEL_49;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)list,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_MissionItemDisplayEntity__GetEnumerator__);
  v50 = Enumerator;
  if ( !Enumerator )
    sub_2213CDC(Enumerator, v9);
  for ( i = Enumerator; ; i = v50 )
  {
    klass = i->klass;
    v12 = *(unsigned __int16 *)&i->klass->_2.rank;
    if ( *(_WORD *)&i->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v12;
        p_offset += 4;
        if ( !v12 )
          goto LABEL_10;
      }
      v14 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_10:
      v14 = sub_224BC3C(i, System_Collections_IEnumerator_TypeInfo, 0);
    }
    v15 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
            i,
            *(_QWORD *)(v14 + 8));
    if ( (v15 & 1) == 0 )
      break;
    if ( !v50 )
      sub_2213CDC(v15, v6);
    v16 = v50->klass;
    v17 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v18 = &v16->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__c **)v18 - 1) != System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo )
      {
        --v17;
        v18 += 4;
        if ( !v17 )
          goto LABEL_18;
      }
      v19 = (__int64)&v16->vtable[*v18];
    }
    else
    {
LABEL_18:
      v19 = sub_224BC3C(v50, System_Collections_Generic_IEnumerator_MissionItemDisplayEntity__TypeInfo, 0);
    }
    v20 = (MissionItemDisplayEntity_o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v19)(
                                          v50,
                                          *(_QWORD *)(v19 + 8));
    v22 = (Il2CppObject *)v20;
    if ( !v20 )
      sub_2213CDC(0, v21);
    if ( v20->fields.missionType == missionType )
    {
      IsEnable = MissionItemDisplayEntity__IsEnable(v20, v21);
      if ( IsEnable )
      {
        if ( !v5
          || (items = v5->fields._items,
              v32 = Method_System_Collections_Generic_List_MissionItemDisplayEntity__Add__,
              ++v5->fields._version,
              !items) )
        {
          sub_2213CDC(IsEnable, v24);
        }
        size = v5->fields._size;
        if ( (unsigned int)size >= LODWORD(items->max_length) )
        {
          System_Collections_Generic_List_object___AddWithResize(
            v5,
            v22,
            *(const MethodInfo_4483C64 **)(*(_QWORD *)(v32[4] + 192LL) + 112LL));
        }
        else
        {
          v34 = &items->obj.klass + size;
          v5->fields._size = size + 1;
          v34[4] = (Il2CppClass *)v22;
          sub_2213A04((MissionNaviTransitionBoardItem_o *)(v34 + 4), (int32_t)v22, v25, v26, v27, v28, v29, v30);
        }
      }
    }
  }
  if ( v50 )
  {
    v35 = v50->klass;
    v36 = *(unsigned __int16 *)&v50->klass->_2.rank;
    if ( *(_WORD *)&v50->klass->_2.rank )
    {
      v37 = &v35->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v37 - 1) != System_IDisposable_TypeInfo )
      {
        --v36;
        v37 += 4;
        if ( !v36 )
          goto LABEL_35;
      }
      v38 = (__int64)&v35->vtable[*v37];
    }
    else
    {
LABEL_35:
      v38 = sub_224BC3C(v50, System_IDisposable_TypeInfo, 0);
    }
    (*(void (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v38)(v50, *(_QWORD *)(v38 + 8));
  }
  list = MissionItemDisplayMaster___c_TypeInfo;
  if ( !*(&MissionItemDisplayMaster___c_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(MissionItemDisplayMaster___c_TypeInfo, v6);
    list = MissionItemDisplayMaster___c_TypeInfo;
  }
  static_fields = (struct MissionItemDisplayMaster___c_StaticFields *)*((_QWORD *)list + 23);
  _9__0_0 = (System_Comparison_T__o *)static_fields->__9__0_0;
  if ( !_9__0_0 )
  {
    if ( !*((_DWORD *)list + 57) )
    {
      j_il2cpp_runtime_class_init_0(list, v6);
      static_fields = MissionItemDisplayMaster___c_TypeInfo->static_fields;
    }
    v41 = (Il2CppObject *)static_fields->__9;
    _9__0_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_MissionItemDisplayEntity__TypeInfo);
    System_Comparison_object____ctor(
      _9__0_0,
      v41,
      Method_MissionItemDisplayMaster___c__GetListByMissionType_b__0_0__,
      0);
    v42 = MissionItemDisplayMaster___c_TypeInfo->static_fields;
    v42->__9__0_0 = (struct System_Comparison_MissionItemDisplayEntity__o *)_9__0_0;
    sub_2213A04((MissionNaviTransitionBoardItem_o *)&v42->__9__0_0, (int32_t)_9__0_0, v43, v44, v45, v46, v47, v48);
  }
  if ( !v5 )
LABEL_49:
    sub_2213CDC(list, v6);
  System_Collections_Generic_List_object___Sort_71849708(
    v5,
    _9__0_0,
    (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__Sort__);
  return (MissionItemDisplayEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_4485784 *)Method_System_Collections_Generic_List_MissionItemDisplayEntity__ToArray__);
}


void MissionItemDisplayMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_5970D96 & 1) == 0 )
  {
    sub_2213A60(&MissionItemDisplayMaster___c_TypeInfo);
    byte_5970D96 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(MissionItemDisplayMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MissionItemDisplayMaster___c_TypeInfo->static_fields->__9 = (struct MissionItemDisplayMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)MissionItemDisplayMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void MissionItemDisplayMaster___c___ctor(MissionItemDisplayMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t MissionItemDisplayMaster___c___GetListByMissionType_b__0_0(
        MissionItemDisplayMaster___c_o *this,
        MissionItemDisplayEntity_o *a,
        MissionItemDisplayEntity_o *b,
        const MethodInfo *method)
{
  if ( !b || !a )
    sub_2213CDC(this, a);
  return b->fields.priority - a->fields.priority;
}