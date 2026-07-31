void WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  if ( (byte_59398A8 & 1) == 0 )
  {
    sub_21FFC50(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_59398A8 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void WarBoardIndividualityClassMaster___ctor(WarBoardIndividualityClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_59398A4 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
    byte_59398A4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    344,
    (const MethodInfo_3EDAF38 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x0
  __int64 v4; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v6; // x19

  if ( (byte_59398A7 & 1) == 0 )
  {
    sub_21FFC50(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_21FFC50(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_21FFC50(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_59398A7 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_WORD *)(v3 + 309) & 1) == 0 )
    v3 = sub_2237AF8(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_WORD *)(v4 + 309) & 1) == 0 )
    v4 = sub_2237AF8(v2);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_3822EA4 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !*(&WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo, method);
  if ( !v6 )
LABEL_12:
    sub_21FFECC(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v6,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_3EDD388 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  __int64 list; // x0
  __int64 v7; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x0
  __int64 v9; // x1
  System_Collections_Generic_IEnumerator_T__o *i; // x21
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v12; // x9
  int *p_offset; // x10
  __int64 v14; // x0
  __int64 v15; // x21
  __int64 v16; // x0
  __int64 v17; // x1
  System_Collections_Generic_IEnumerator_T__c *v18; // x8
  __int64 v19; // x9
  int *v20; // x10
  __int64 v21; // x0
  __int64 v22; // x0
  System_String_o *v23; // x2
  System_String_o *v24; // x3
  int32_t v25; // w4
  int32_t v26; // w5
  bool v27; // w6
  bool v28; // w7
  System_Func_int__bool__o *v29; // x23
  _BOOL8 v30; // x0
  Il2CppObject *v31; // x1
  System_String_o *v32; // x2
  System_String_o *v33; // x3
  int32_t v34; // w4
  int32_t v35; // w5
  bool v36; // w6
  bool v37; // w7
  struct System_Object_array *items; // x8
  _QWORD *v39; // x9
  __int64 size; // x10
  Il2CppClass **v41; // x0
  System_Collections_Generic_IEnumerator_T__c *v42; // x8
  __int64 v43; // x9
  int *v44; // x10
  __int64 v45; // x0
  System_Collections_Generic_IEnumerator_T__o *v47; // [xsp+18h] [xbp-68h]

  if ( (byte_59398A5 & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_int____91485032);
    sub_21FFC50(&Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    sub_21FFC50(&System_Func_int__bool__TypeInfo);
    sub_21FFC50(&System_IDisposable_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo);
    sub_21FFC50(&System_Collections_IEnumerator_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
    sub_21FFC50(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__);
    sub_21FFC50(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
    byte_59398A5 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (__int64)this->fields.list;
    if ( !list )
      goto LABEL_44;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   (System_Collections_ObjectModel_Collection_T__o *)list,
                   (const MethodInfo_3E61068 *)Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    v47 = Enumerator;
    if ( !Enumerator )
      sub_21FFECC(Enumerator, v9);
    for ( i = Enumerator; ; i = v47 )
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
            goto LABEL_11;
        }
        v14 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_11:
        v14 = sub_2237E2C(i, System_Collections_IEnumerator_TypeInfo, 0);
      }
      list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v14)(
               i,
               *(_QWORD *)(v14 + 8));
      if ( (list & 1) == 0 )
        break;
      v15 = sub_21FFEBC(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v15, 0);
      if ( !v47 )
        sub_21FFECC(v16, v17);
      v18 = v47->klass;
      v19 = *(unsigned __int16 *)&v47->klass->_2.rank;
      if ( *(_WORD *)&v47->klass->_2.rank )
      {
        v20 = &v18->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__c **)v20 - 1) != System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo )
        {
          --v19;
          v20 += 4;
          if ( !v19 )
            goto LABEL_19;
        }
        v21 = (__int64)&v18->vtable[*v20];
      }
      else
      {
LABEL_19:
        v21 = sub_2237E2C(v47, System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo, 0);
      }
      v22 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v21)(
              v47,
              *(_QWORD *)(v21 + 8));
      if ( !v15 )
        sub_21FFECC(v22, v22);
      *(_QWORD *)(v15 + 16) = v22;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v15 + 16), v22, v23, v24, v25, v26, v27, v28);
      if ( *(_QWORD *)(v15 + 16) )
      {
        v29 = (System_Func_int__bool__o *)sub_21FFEBC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v29,
          (Il2CppObject *)v15,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0);
        v30 = BasicHelper__Any_int__58574768(
                individualities,
                (System_Func_T__bool__o *)v29,
                (const MethodInfo_37DC7B0 *)Method_BasicHelper_Any_int____91485032);
        if ( v30 )
        {
          if ( !v5
            || (items = v5->fields._items,
                v31 = *(Il2CppObject **)(v15 + 16),
                v39 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__,
                ++v5->fields._version,
                !items) )
          {
            sub_21FFECC(v30, v31);
          }
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v31,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v39[4] + 192LL) + 112LL));
          }
          else
          {
            v41 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v41[4] = (Il2CppClass *)v31;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v41 + 4), (int32_t)v31, v32, v33, v34, v35, v36, v37);
          }
        }
      }
    }
    if ( v47 )
    {
      v42 = v47->klass;
      v43 = *(unsigned __int16 *)&v47->klass->_2.rank;
      if ( *(_WORD *)&v47->klass->_2.rank )
      {
        v44 = &v42->_1.interfaceOffsets->offset;
        while ( *((System_IDisposable_c **)v44 - 1) != System_IDisposable_TypeInfo )
        {
          --v43;
          v44 += 4;
          if ( !v43 )
            goto LABEL_36;
        }
        v45 = (__int64)&v42->vtable[*v44];
      }
      else
      {
LABEL_36:
        v45 = sub_2237E2C(v47, System_IDisposable_TypeInfo, 0);
      }
      list = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v45)(
               v47,
               *(_QWORD *)(v45 + 8));
    }
  }
  if ( !v5 )
LABEL_44:
    sub_21FFECC(list, v7);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v5,
                                                     (const MethodInfo_445164C *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x19
  const MethodInfo *v6; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v8; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v10; // x20
  __int64 v11; // x21
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct System_Object_array *items; // x8
  _QWORD *v19; // x9
  __int64 size; // x10
  WarBoardIndividualityClassEntity_o *v21; // x1
  Il2CppClass **v22; // x0

  if ( (byte_59398A6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantClassEntity__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    sub_21FFC50(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_ServantClassEntity__TypeInfo);
    byte_59398A6 = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v6);
  if ( !Entities )
    goto LABEL_18;
  klass = Entities[1].klass;
  v10 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v11 = 0;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)klass )
        sub_21FFED4(Entities);
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v10[1].monitor + v11);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v8);
      if ( !v5 )
        break;
      items = v5->fields._items;
      v19 = Method_System_Collections_Generic_List_ServantClassEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      v21 = Entities;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Entities,
          *(const MethodInfo_444FB2C **)(*(_QWORD *)(v19[4] + 192LL) + 112LL));
      }
      else
      {
        v22 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v22[4] = (Il2CppClass *)v21;
        sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v22 + 4), (int32_t)v21, v12, v13, v14, v15, v16, v17);
      }
      LODWORD(klass) = v10[1].klass;
      if ( (int)++v11 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_21FFECC(Entities, v8);
  }
  if ( !v5 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_445164C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


void WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
bool WarBoardIndividualityClassMaster___c__DisplayClass3_0___GetEntities_b__0(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardIndividualityClassEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_21FFECC(this, *(_QWORD *)&x);
  return entity->fields.individuality == x;
}