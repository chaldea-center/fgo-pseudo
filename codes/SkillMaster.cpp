void SkillMaster___ctor(SkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59714B5 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
    byte_59714B5 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    56,
    (const MethodInfo_3F0E6E0 *)Method_DataMasterBase_SkillMaster__SkillEntity__int___ctor__);
}


bool SkillMaster__IsSkippable(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_59714B7 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_59714B7 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsSkippable((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


bool SkillMaster__IsWarBoardForcePassiveEveryBattle(SkillMaster_o *this, int32_t skillId, const MethodInfo *method)
{
  Il2CppObject *Entity; // x0
  const MethodInfo *v6; // x1

  if ( (byte_59714B8 & 1) == 0 )
  {
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
    byte_59714B8 = 1;
  }
  Entity = DataMasterBase_object__object__int___GetEntity(
             (DataMasterBase_TMaster__TEntity__PKType__o *)this,
             skillId,
             (const MethodInfo_3F10B30 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__GetEntity__);
  if ( Entity )
    LOBYTE(Entity) = SkillEntity__IsWarBoardForcePassiveEveryBattle((SkillEntity_o *)Entity, v6);
  return (char)Entity;
}


void SkillMaster__LinkToSkillAddEntity(SkillMaster_o *this, const MethodInfo *method)
{
  __int64 Instance; // x0
  __int64 v4; // x1
  Il2CppObject *MasterData_object; // x21
  System_Collections_Generic_Dictionary_int__object__o *v6; // x19
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *v9; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int *p_offset; // x10
  __int64 v13; // x0
  System_Collections_Generic_IEnumerator_T__o *v14; // x21
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  Il2CppObject *v21; // x21
  _BOOL8 v22; // x0
  __int64 v23; // x1
  System_String_o *v24; // x2
  System_String_o *v25; // x3
  int32_t v26; // w4
  int32_t v27; // w5
  bool v28; // w6
  bool v29; // w7
  Il2CppObject *v30; // x22
  System_Collections_Generic_List_object__o *v31; // x23
  __int64 v32; // x0
  __int64 v33; // x1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  System_Collections_Generic_List_object__o *v40; // x0
  struct System_Object_array *items; // x8
  _QWORD *v42; // x9
  __int64 size; // x10
  Il2CppClass **v44; // x8
  System_Collections_Generic_IEnumerator_T__o *v45; // x21
  System_Collections_Generic_IEnumerator_T__c *v46; // x8
  __int64 v47; // x9
  int *v48; // x10
  __int64 v49; // x0
  _BOOL8 v50; // x0
  __int64 v51; // x1
  SkillMaster___c_c *v52; // x0
  Il2CppClass *v53; // x19
  struct SkillMaster___c_StaticFields *static_fields; // x8
  System_Comparison_T__o *_9__2_0; // x20
  Il2CppObject *v56; // x21
  struct SkillMaster___c_StaticFields *v57; // x0
  System_String_o *v58; // x2
  System_String_o *v59; // x3
  int32_t v60; // w4
  int32_t v61; // w5
  bool v62; // w6
  bool v63; // w7
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v64; // [xsp+8h] [xbp-A8h] BYREF
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o v65; // [xsp+20h] [xbp-90h] BYREF
  Il2CppObject *entity; // [xsp+40h] [xbp-70h] BYREF
  System_Collections_Generic_IEnumerator_T__o *v67; // [xsp+48h] [xbp-68h] BYREF

  if ( (byte_59714B6 & 1) == 0 )
  {
    sub_2213A60(&Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
    sub_2213A60(&System_Comparison_SkillAddEntity__TypeInfo);
    sub_2213A60(&Method_DataManager_GetMasterData_SkillAddMaster___);
    sub_2213A60(&Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    sub_2213A60(&Method_DataMasterBase_SkillAddMaster__SkillAddEntity__string__getEntityList__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
    sub_2213A60(&System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__get_Current__);
    sub_2213A60(&System_IDisposable_TypeInfo);
    sub_2213A60(&System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo);
    sub_2213A60(&System_Collections_IEnumerator_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillAddEntity__Add__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
    sub_2213A60(&Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
    sub_2213A60(&System_Collections_Generic_List_SkillAddEntity__TypeInfo);
    sub_2213A60(&Method_SingletonMonoBehaviour_DataManager__get_Instance__);
    sub_2213A60(&Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__);
    sub_2213A60(&SkillMaster___c_TypeInfo);
    sub_2213A60(&Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
    byte_59714B6 = 1;
  }
  entity = 0;
  v67 = 0;
  memset(&v65, 0, sizeof(v65));
  Instance = (__int64)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_47A29F8 *)Method_SingletonMonoBehaviour_DataManager__get_Instance__);
  if ( !Instance )
    goto LABEL_70;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)Instance,
                        (const MethodInfo_385636C *)Method_DataManager_GetMasterData_SkillAddMaster___);
  v6 = (System_Collections_Generic_Dictionary_int__object__o *)sub_2213CCC(System_Collections_Generic_Dictionary_int__SkillEntity__TypeInfo);
  System_Collections_Generic_Dictionary_int__object____ctor(
    v6,
    (const MethodInfo_3F9BAFC *)Method_System_Collections_Generic_Dictionary_int__SkillEntity___ctor__);
  if ( !MasterData_object )
    goto LABEL_70;
  Instance = (__int64)MasterData_object[2].monitor;
  if ( !Instance )
    goto LABEL_70;
  Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                 (System_Collections_ObjectModel_Collection_T__o *)Instance,
                 (const MethodInfo_3E94810 *)Method_System_Collections_ObjectModel_Collection_SkillAddEntity__GetEnumerator__);
  v67 = Enumerator;
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._index = &v67;
  if ( !Enumerator )
LABEL_37:
    sub_2213CDC(Enumerator, v8);
  v9 = Enumerator;
  while ( 1 )
  {
    klass = v9->klass;
    v11 = *(unsigned __int16 *)&v9->klass->_2.rank;
    if ( *(_WORD *)&v9->klass->_2.rank )
    {
      p_offset = &klass->_1.interfaceOffsets->offset;
      while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
      {
        --v11;
        p_offset += 4;
        if ( !v11 )
          goto LABEL_12;
      }
      v13 = (__int64)&klass->vtable[*p_offset];
    }
    else
    {
LABEL_12:
      v13 = sub_224BC3C(v9, System_Collections_IEnumerator_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
                 v9,
                 *(_QWORD *)(v13 + 8));
    if ( (Instance & 1) == 0 )
      break;
    v14 = v67;
    if ( !v67 )
      sub_2213CDC(Instance, v4);
    v15 = v67->klass;
    v16 = *(unsigned __int16 *)&v67->klass->_2.rank;
    if ( *(_WORD *)&v67->klass->_2.rank )
    {
      v17 = &v15->_1.interfaceOffsets->offset;
      while ( *((System_Collections_Generic_IEnumerator_SkillAddEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo )
      {
        --v16;
        v17 += 4;
        if ( !v16 )
          goto LABEL_20;
      }
      v18 = (__int64)&v15->vtable[*v17];
    }
    else
    {
LABEL_20:
      v18 = sub_224BC3C(v67, System_Collections_Generic_IEnumerator_SkillAddEntity__TypeInfo, 0);
    }
    v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
            v14,
            *(_QWORD *)(v18 + 8));
    v21 = (Il2CppObject *)v19;
    if ( !v19 )
      sub_2213CDC(0, v20);
    Enumerator = (System_Collections_Generic_IEnumerator_T__o *)DataMasterBase_object__object__int___TryGetEntity(
                                                                  (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                                                  &entity,
                                                                  *(_DWORD *)(v19 + 16),
                                                                  (const MethodInfo_3F10B80 *)Method_DataMasterBase_SkillMaster__SkillEntity__int__TryGetEntity__);
    if ( ((unsigned __int8)Enumerator & 1) != 0 )
    {
      if ( !entity )
        sub_2213CDC(Enumerator, v8);
      if ( !v6 )
        sub_2213CDC(Enumerator, v8);
      v22 = System_Collections_Generic_Dictionary_int__object___ContainsKey(
              v6,
              (int32_t)entity[1].klass,
              (const MethodInfo_3F9C6A4 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__ContainsKey__);
      if ( !v22 )
      {
        if ( !entity )
          sub_2213CDC(v22, v23);
        System_Collections_Generic_Dictionary_int__object___set_Item(
          v6,
          (int32_t)entity[1].klass,
          entity,
          (const MethodInfo_3F9C49C *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__set_Item__);
        v30 = entity;
        v31 = (System_Collections_Generic_List_object__o *)sub_2213CCC(System_Collections_Generic_List_SkillAddEntity__TypeInfo);
        System_Collections_Generic_List_object____ctor(
          v31,
          (const MethodInfo_44833FC *)Method_System_Collections_Generic_List_SkillAddEntity___ctor__);
        if ( !v30 )
          sub_2213CDC(v32, v33);
        v30[5].klass = (Il2CppClass *)v31;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)&v30[5], (int32_t)v31, v34, v35, v36, v37, v38, v39);
      }
      if ( !entity )
        sub_2213CDC(v22, v23);
      v40 = (System_Collections_Generic_List_object__o *)entity[5].klass;
      if ( !v40
        || (items = v40->fields._items,
            v42 = Method_System_Collections_Generic_List_SkillAddEntity__Add__,
            ++v40->fields._version,
            !items) )
      {
        sub_2213CDC(v40, v23);
      }
      size = v40->fields._size;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v40,
          v21,
          *(const MethodInfo_4483C64 **)(*(_QWORD *)(v42[4] + 192LL) + 112LL));
      }
      else
      {
        v44 = &items->obj.klass + size;
        v40->fields._size = size + 1;
        v44[4] = (Il2CppClass *)v21;
        sub_2213A04((MissionNaviTransitionBoardItem_o *)(v44 + 4), (int32_t)v21, v24, v25, v26, v27, v28, v29);
      }
    }
    v9 = v67;
    if ( !v67 )
      goto LABEL_37;
  }
  v45 = v67;
  if ( v67 )
  {
    v46 = v67->klass;
    v47 = *(unsigned __int16 *)&v67->klass->_2.rank;
    if ( *(_WORD *)&v67->klass->_2.rank )
    {
      v48 = &v46->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v48 - 1) != System_IDisposable_TypeInfo )
      {
        --v47;
        v48 += 4;
        if ( !v47 )
          goto LABEL_43;
      }
      v49 = (__int64)&v46->vtable[*v48];
    }
    else
    {
LABEL_43:
      v49 = sub_224BC3C(v67, System_IDisposable_TypeInfo, 0);
    }
    Instance = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v49)(
                 v45,
                 *(_QWORD *)(v49 + 8));
  }
  if ( !v6
    || (Instance = (__int64)System_Collections_Generic_Dictionary_int__object___get_Values(
                              v6,
                              (const MethodInfo_3F9C2B4 *)Method_System_Collections_Generic_Dictionary_int__SkillEntity__get_Values__)) == 0 )
  {
LABEL_70:
    sub_2213CDC(Instance, v4);
  }
  System_Collections_Generic_Dictionary_ValueCollection_int__object___GetEnumerator(
    &v64,
    (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)Instance,
    (const MethodInfo_3CC3590 *)Method_System_Collections_Generic_Dictionary_ValueCollection_int__SkillEntity__GetEnumerator__);
  v65 = v64;
  v64.fields._dictionary = 0;
  *(_QWORD *)&v64.fields._index = &v65;
  while ( 1 )
  {
    v50 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___MoveNext(
            &v65,
            (const MethodInfo_41591F8 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__MoveNext__);
    if ( !v50 )
      break;
    if ( !v65.fields._currentValue )
      sub_2213CDC(v50, v51);
    v52 = SkillMaster___c_TypeInfo;
    v53 = v65.fields._currentValue[5].klass;
    if ( !*(&SkillMaster___c_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(SkillMaster___c_TypeInfo, v51);
      v52 = SkillMaster___c_TypeInfo;
    }
    static_fields = v52->static_fields;
    _9__2_0 = (System_Comparison_T__o *)static_fields->__9__2_0;
    if ( !_9__2_0 )
    {
      if ( !*(&v52->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v52, v51);
        static_fields = SkillMaster___c_TypeInfo->static_fields;
      }
      v56 = (Il2CppObject *)static_fields->__9;
      _9__2_0 = (System_Comparison_T__o *)sub_2213CCC(System_Comparison_SkillAddEntity__TypeInfo);
      System_Comparison_object____ctor(_9__2_0, v56, Method_SkillMaster___c__LinkToSkillAddEntity_b__2_0__, 0);
      v57 = SkillMaster___c_TypeInfo->static_fields;
      v57->__9__2_0 = (struct System_Comparison_SkillAddEntity__o *)_9__2_0;
      sub_2213A04((MissionNaviTransitionBoardItem_o *)&v57->__9__2_0, (int32_t)_9__2_0, v58, v59, v60, v61, v62, v63);
    }
    if ( !v53 )
      sub_2213CDC(v52, v51);
    System_Collections_Generic_List_object___Sort_71849708(
      (System_Collections_Generic_List_object__o *)v53,
      _9__2_0,
      (const MethodInfo_44856EC *)Method_System_Collections_Generic_List_SkillAddEntity__Sort__);
  }
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__object___Dispose(
    &v65,
    (const MethodInfo_41591F4 *)Method_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_int__SkillEntity__Dispose__);
}


bool SkillMaster__preProcess(SkillMaster_o *this, const MethodInfo *method)
{
  SkillMaster__LinkToSkillAddEntity(this, method);
  return 1;
}


void SkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7

  if ( (byte_59714B9 & 1) == 0 )
  {
    sub_2213A60(&SkillMaster___c_TypeInfo);
    byte_59714B9 = 1;
  }
  v1 = (Il2CppObject *)sub_2213CCC(SkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  SkillMaster___c_TypeInfo->static_fields->__9 = (struct SkillMaster___c_o *)v1;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)SkillMaster___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SkillMaster___c___ctor(SkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t SkillMaster___c___LinkToSkillAddEntity_b__2_0(
        SkillMaster___c_o *this,
        SkillAddEntity_o *x,
        SkillAddEntity_o *y,
        const MethodInfo *method)
{
  if ( !y || !x )
    sub_2213CDC(this, x);
  return y->fields.priority - x->fields.priority;
}