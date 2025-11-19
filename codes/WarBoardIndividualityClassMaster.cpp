void WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4CB7490 & 1) == 0 )
  {
    sub_1C6BA08(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4CB7490 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void WarBoardIndividualityClassMaster___ctor(WarBoardIndividualityClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4CB748B & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
    byte_4CB748B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    342,
    (const MethodInfo_33F6DB8 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
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

  if ( (byte_4CB748F & 1) == 0 )
  {
    sub_1C6BA08(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C6BA08(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C6BA08(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C6BA08(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4CB748F = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C41A9C(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C41A9C(v2);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_313B368 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v6 )
LABEL_12:
    sub_1C6BC60(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v6,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_33F90DC *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v7; // x1
  __int64 v8; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v11; // x9
  int32_t *p_offset; // x10
  __int64 v13; // x0
  __int64 v14; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Func_int__bool__o *v22; // x24
  _BOOL8 v23; // x0
  __int64 v24; // x1
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  Il2CppObject *v27; // x1
  struct System_Object_array *items; // x8
  _QWORD *v29; // x9
  __int64 size; // x10
  Il2CppClass **v31; // x0
  System_Collections_Generic_IEnumerator_T__c *v32; // x8
  __int64 v33; // x9
  int32_t *v34; // x10
  __int64 v35; // x0

  if ( (byte_4CB748C & 1) == 0 )
  {
    sub_1C6BA08(&Method_BasicHelper_Any_int____78570976);
    sub_1C6BA08(&Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    sub_1C6BA08(&System_Func_int__bool__TypeInfo);
    sub_1C6BA08(&System_IDisposable_TypeInfo);
    sub_1C6BA08(&System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo);
    sub_1C6BA08(&System_Collections_IEnumerator_TypeInfo);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
    sub_1C6BA08(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__);
    sub_1C6BA08(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
    byte_4CB748C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_339243C *)Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C6BC60(0, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        v13 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v13 = sub_1C41D90(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v13)(
              Enumerator,
              *(_QWORD *)(v13 + 8))
          & 1) == 0 )
        break;
      v14 = sub_1C6BC54(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v14, 0);
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__c **)v17 - 1) != System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17];
      }
      else
      {
LABEL_17:
        v18 = sub_1C41D90(
                Enumerator,
                System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo,
                0);
      }
      v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8));
      if ( !v14 )
        sub_1C6BC60(v19, v19);
      *(_QWORD *)(v14 + 16) = v19;
      sub_1C6B9AC((CGThumbnailListItem_o *)(v14 + 16), v19, v20, v21);
      if ( *(_QWORD *)(v14 + 16) )
      {
        v22 = (System_Func_int__bool__o *)sub_1C6BC54(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v22,
          (Il2CppObject *)v14,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0);
        v23 = BasicHelper__Any_int__51528112(
                individualities,
                (System_Func_T__bool__o *)v22,
                (const MethodInfo_31241B0 *)Method_BasicHelper_Any_int____78570976);
        if ( v23 )
        {
          if ( !v5 )
            sub_1C6BC60(v23, v24);
          v27 = *(Il2CppObject **)(v14 + 16);
          items = v5->fields._items;
          v29 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C6BC60(v23, v27);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v27,
              *(const MethodInfo_3800974 **)(*(_QWORD *)(v29[4] + 192LL) + 112LL));
          }
          else
          {
            v31 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v31[4] = (Il2CppClass *)v27;
            sub_1C6B9AC((CGThumbnailListItem_o *)(v31 + 4), (int32_t)v27, v25, v26);
          }
        }
      }
    }
    v32 = Enumerator->klass;
    v33 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v34 = &v32->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v34 - 1) != System_IDisposable_TypeInfo )
      {
        --v33;
        v34 += 4;
        if ( !v33 )
          goto LABEL_31;
      }
      v35 = (__int64)&v32->vtable[*v34];
    }
    else
    {
LABEL_31:
      v35 = sub_1C41D90(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v35)(
                                                               Enumerator,
                                                               *(_QWORD *)(v35 + 8));
  }
  if ( !v5 )
LABEL_39:
    sub_1C6BC60(list, v7);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v5,
                                                     (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  WarBoardIndividualityClassEntity_o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4CB748D & 1) == 0 )
  {
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassEntity__Add__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    sub_1C6BA08(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
    sub_1C6BA08(&System_Collections_Generic_List_ServantClassEntity__TypeInfo);
    byte_4CB748D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C6BC54(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3800140 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
        sub_1C6BC68(Entities);
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v10[1].monitor + v11);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v8);
      if ( !v5 )
        break;
      items = v5->fields._items;
      v15 = Method_System_Collections_Generic_List_ServantClassEntity__Add__;
      ++v5->fields._version;
      if ( !items )
        break;
      size = v5->fields._size;
      v17 = Entities;
      if ( (unsigned int)size >= LODWORD(items->max_length) )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Entities,
          *(const MethodInfo_3800974 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C6B9AC((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
      LODWORD(klass) = v10[1].klass;
      if ( (int)++v11 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1C6BC60(Entities, v8);
  }
  if ( !v5 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_38024CC *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


ServantClassEntity_o *WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  struct System_String_o *name; // x8

  if ( (byte_4CB748E & 1) == 0 )
  {
    sub_1C6BA08(&int___TypeInfo);
    byte_4CB748E = 1;
  }
  result = (ServantClassEntity_o *)sub_1C6BAB0(int___TypeInfo, 1);
  if ( !result )
    sub_1C6BC60(0, v6);
  if ( !LODWORD(result->fields.name) )
    goto LABEL_11;
  result->fields.individuality = individuality;
  result = (ServantClassEntity_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                     this,
                                     (System_Int32_array *)result,
                                     v7);
  if ( result )
  {
    name = result->fields.name;
    if ( name )
    {
      if ( (_DWORD)name )
        return *(ServantClassEntity_o **)&result->fields.individuality;
LABEL_11:
      sub_1C6BC68(result);
    }
    return 0;
  }
  return result;
}


void WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardIndividualityClassMaster___c__DisplayClass3_0___GetEntities_b__0(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardIndividualityClassEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1C6BC60(this, x);
  return entity->fields.individuality == x;
}