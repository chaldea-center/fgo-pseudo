void WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4C38B61 & 1) == 0 )
  {
    sub_1C32C20(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4C38B61 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void WarBoardIndividualityClassMaster___ctor(WarBoardIndividualityClassMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C38B5C & 1) == 0 )
  {
    sub_1C32C20(&Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
    byte_4C38B5C = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    342,
    (const MethodInfo_3394514 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
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

  if ( (byte_4C38B60 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1C32C20(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1C32C20(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4C38B60 = 1;
  }
  v3 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1C83334(v2);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 192) + 16LL);
  if ( (*(_BYTE *)(v4 + 309) & 1) == 0 )
    v4 = sub_1C83334(v2);
  MasterData_object = **(Il2CppObject ***)(v4 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_30DD3F0 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v6 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v6 )
LABEL_12:
    sub_1C32E7C(MasterData_object);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v6,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_3396838 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v5; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v9; // x9
  int32_t *p_offset; // x10
  __int64 v11; // x0
  __int64 v12; // x22
  System_Collections_Generic_IEnumerator_T__c *v13; // x8
  __int64 v14; // x9
  int32_t *v15; // x10
  __int64 v16; // x0
  __int64 v17; // x0
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Func_int__bool__o *v20; // x24
  _BOOL8 v21; // x0
  int32_t v22; // w2
  const MethodInfo *v23; // x3
  Il2CppObject *v24; // x1
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  Il2CppClass **v28; // x0
  System_Collections_Generic_IEnumerator_T__c *v29; // x8
  __int64 v30; // x9
  int32_t *v31; // x10
  __int64 v32; // x0

  if ( (byte_4C38B5D & 1) == 0 )
  {
    sub_1C32C20(&Method_BasicHelper_Any_int____78062168);
    sub_1C32C20(&Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    sub_1C32C20(&System_Func_int__bool__TypeInfo);
    sub_1C32C20(&System_IDisposable_TypeInfo);
    sub_1C32C20(&System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo);
    sub_1C32C20(&System_Collections_IEnumerator_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
    sub_1C32C20(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__);
    sub_1C32C20(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
    byte_4C38B5D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_3330280 *)Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C32E7C(0);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v9 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v9;
          p_offset += 4;
          if ( !v9 )
            goto LABEL_10;
        }
        v11 = (__int64)&klass->vtable[*p_offset];
      }
      else
      {
LABEL_10:
        v11 = sub_1C83438(Enumerator, System_Collections_IEnumerator_TypeInfo, 0);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v11)(
              Enumerator,
              *(_QWORD *)(v11 + 8))
          & 1) == 0 )
        break;
      v12 = sub_1C32E6C(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v12, 0);
      v13 = Enumerator->klass;
      v14 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
      if ( *(_WORD *)&Enumerator->klass->_2.rank )
      {
        v15 = &v13->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__c **)v15 - 1) != System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo )
        {
          --v14;
          v15 += 4;
          if ( !v14 )
            goto LABEL_17;
        }
        v16 = (__int64)&v13->vtable[*v15];
      }
      else
      {
LABEL_17:
        v16 = sub_1C83438(
                Enumerator,
                System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo,
                0);
      }
      v17 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v16)(
              Enumerator,
              *(_QWORD *)(v16 + 8));
      if ( !v12 )
        sub_1C32E7C(v17);
      *(_QWORD *)(v12 + 16) = v17;
      sub_1C32BC4((CGThumbnailListItem_o *)(v12 + 16), v17, v18, v19);
      if ( *(_QWORD *)(v12 + 16) )
      {
        v20 = (System_Func_int__bool__o *)sub_1C32E6C(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v20,
          (Il2CppObject *)v12,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0);
        v21 = BasicHelper__Any_int__51143952(
                individualities,
                (System_Func_T__bool__o *)v20,
                (const MethodInfo_30C6510 *)Method_BasicHelper_Any_int____78062168);
        if ( v21 )
        {
          if ( !v5 )
            sub_1C32E7C(v21);
          v24 = *(Il2CppObject **)(v12 + 16);
          items = v5->fields._items;
          v26 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1C32E7C(v21);
          size = v5->fields._size;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v24,
              *(const MethodInfo_37987BC **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
          }
          else
          {
            v28 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v28[4] = (Il2CppClass *)v24;
            sub_1C32BC4((CGThumbnailListItem_o *)(v28 + 4), (int32_t)v24, v22, v23);
          }
        }
      }
    }
    v29 = Enumerator->klass;
    v30 = *(unsigned __int16 *)&Enumerator->klass->_2.rank;
    if ( *(_WORD *)&Enumerator->klass->_2.rank )
    {
      v31 = &v29->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v31 - 1) != System_IDisposable_TypeInfo )
      {
        --v30;
        v31 += 4;
        if ( !v30 )
          goto LABEL_31;
      }
      v32 = (__int64)&v29->vtable[*v31];
    }
    else
    {
LABEL_31:
      v32 = sub_1C83438(Enumerator, System_IDisposable_TypeInfo, 0);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v32)(
                                                               Enumerator,
                                                               *(_QWORD *)(v32 + 8));
  }
  if ( !v5 )
LABEL_39:
    sub_1C32E7C(list);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v5,
                                                     (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
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

  if ( (byte_4C38B5E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassEntity__Add__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    sub_1C32C20(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
    sub_1C32C20(&System_Collections_Generic_List_ServantClassEntity__TypeInfo);
    byte_4C38B5E = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1C32E6C(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_3797F88 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
        sub_1C32E84(Entities);
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
          *(const MethodInfo_37987BC **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1C32BC4((CGThumbnailListItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
      LODWORD(klass) = v10[1].klass;
      if ( (int)++v11 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1C32E7C(Entities);
  }
  if ( !v5 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_379A314 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


ServantClassEntity_o *WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  const MethodInfo *v6; // x2
  struct System_String_o *name; // x8

  if ( (byte_4C38B5F & 1) == 0 )
  {
    sub_1C32C20(&int___TypeInfo);
    byte_4C38B5F = 1;
  }
  result = (ServantClassEntity_o *)sub_1C32CC8(int___TypeInfo, 1);
  if ( !result )
    sub_1C32E7C(0);
  if ( !LODWORD(result->fields.name) )
    goto LABEL_11;
  result->fields.individuality = individuality;
  result = (ServantClassEntity_o *)WarBoardIndividualityClassMaster__GetServantClassEntities(
                                     this,
                                     (System_Int32_array *)result,
                                     v6);
  if ( result )
  {
    name = result->fields.name;
    if ( name )
    {
      if ( (_DWORD)name )
        return *(ServantClassEntity_o **)&result->fields.individuality;
LABEL_11:
      sub_1C32E84(result);
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
    sub_1C32E7C(this);
  return entity->fields.individuality == x;
}