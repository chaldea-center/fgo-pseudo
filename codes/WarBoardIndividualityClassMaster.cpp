void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49FF4A0 & 1) == 0 )
  {
    sub_1B64870(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_49FF4A0 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49FF49B & 1) == 0 )
  {
    sub_1B64870(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_49FF49B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    336,
    (const MethodInfo_30D6140 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x1
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x0
  __int64 v6; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v8; // x19

  if ( (byte_49FF49F & 1) == 0 )
  {
    sub_1B64870(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1B64870(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v2);
    sub_1B64870(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v3);
    sub_1B64870(&WarBoardIndividualityClassMaster_TypeInfo, v4);
    byte_49FF49F = 1;
  }
  v5 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v5 + 309) & 1) == 0 )
    v5 = sub_1BB674C(v5);
  v6 = *(_QWORD *)(*(_QWORD *)(v5 + 192) + 16LL);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1BB674C(v6);
  MasterData_object = **(Il2CppObject ***)(v6 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E3B6C8 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v8 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v8 )
LABEL_12:
    sub_1B64ACC(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v8,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_30D6180 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
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
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  System_Collections_Generic_List_object__o *v17; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v19; // x1
  __int64 v20; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v23; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  Il2CppObject *v26; // x22
  System_Collections_Generic_IEnumerator_T__c *v27; // x8
  __int64 v28; // x9
  int32_t *v29; // x10
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x1
  int32_t v33; // w2
  int32_t v34; // w3
  __int64 v35; // x8
  WarBoardIndividualityClassEntity_c *v36; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v38; // x23
  System_Func_int__bool__o *v39; // x24
  _BOOL8 v40; // x0
  __int64 v41; // x1
  int32_t v42; // w2
  int32_t v43; // w3
  Il2CppObject *v44; // x1
  struct System_Object_array *items; // x8
  _QWORD *v46; // x9
  __int64 size; // x10
  Il2CppClass **v48; // x0
  System_Collections_Generic_IEnumerator_T__c *v49; // x8
  __int64 v50; // x9
  int32_t *v51; // x10
  __int64 v52; // x0

  if ( (byte_49FF49C & 1) == 0 )
  {
    sub_1B64870(&Method_BasicHelper_Any_int____75717888, individualities);
    sub_1B64870(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v5);
    sub_1B64870(&System_Func_int__bool__TypeInfo, v6);
    sub_1B64870(&System_IDisposable_TypeInfo, v7);
    sub_1B64870(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v8);
    sub_1B64870(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v10);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v11);
    sub_1B64870(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v12);
    sub_1B64870(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v13);
    sub_1B64870(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v14);
    sub_1B64870(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v15);
    sub_1B64870(&WarBoardIndividualityClassEntity_TypeInfo, v16);
    byte_49FF49C = 1;
  }
  v17 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v17,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_48;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_30733BC *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B64ACC(0LL, v20);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v23 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v23;
          p_offset += 4;
          if ( !v23 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1BB6850(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v26 = (Il2CppObject *)sub_1B64ABC(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor(v26, 0LL);
      v27 = Enumerator->klass;
      v28 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v29 = &v27->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v29 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v28;
          v29 += 4;
          if ( !v28 )
            goto LABEL_17;
        }
        v30 = (__int64)&v27->vtable[*v29].method;
      }
      else
      {
LABEL_17:
        v30 = sub_1BB6850(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v31 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v30)(
              Enumerator,
              *(_QWORD *)(v30 + 8));
      if ( !v26 )
        goto LABEL_45;
      v35 = v31;
      if ( v31 )
      {
        v36 = WarBoardIndividualityClassEntity_TypeInfo;
        methodPtr_low = LOBYTE(WarBoardIndividualityClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * (methodPtr_low - 1)) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          sub_1B64D8C(v31);
LABEL_44:
          sub_1B64D8C(v35);
LABEL_45:
          sub_1B64ACC(v31, v32);
        }
        v26[1].klass = (Il2CppClass *)v31;
        v38 = (ServantStatusBattleListViewItem_o *)&v26[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)v31 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v31 + 200LL) + 8 * (methodPtr_low - 1)) != v36 )
        {
          goto LABEL_44;
        }
      }
      else
      {
        v26[1].klass = 0LL;
        v38 = (ServantStatusBattleListViewItem_o *)&v26[1];
      }
      sub_1B64814(v38, v31, v33, v34);
      if ( v38->klass )
      {
        v39 = (System_Func_int__bool__o *)sub_1B64ABC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v39,
          v26,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0LL);
        v40 = BasicHelper__Any_int__48392396(
                individualities,
                (System_Func_T__bool__o *)v39,
                (const MethodInfo_2E268CC *)Method_BasicHelper_Any_int____75717888);
        if ( v40 )
        {
          if ( !v17 )
            sub_1B64ACC(v40, v41);
          v44 = (Il2CppObject *)v38->klass;
          items = v17->fields._items;
          v46 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v17->fields._version;
          if ( !items )
            sub_1B64ACC(v40, v44);
          size = v17->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v17,
              v44,
              *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v46[4] + 192LL) + 112LL));
          }
          else
          {
            v48 = &items->obj.klass + size;
            v17->fields._size = size + 1;
            v48[4] = (Il2CppClass *)v44;
            sub_1B64814((ServantStatusBattleListViewItem_o *)(v48 + 4), (int32_t)v44, v42, v43);
          }
        }
      }
    }
    v49 = Enumerator->klass;
    v50 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v51 = &v49->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v51 - 1) != System_IDisposable_TypeInfo )
      {
        --v50;
        v51 += 4;
        if ( !v50 )
          goto LABEL_38;
      }
      v52 = (__int64)&v49->vtable[*v51].method;
    }
    else
    {
LABEL_38:
      v52 = sub_1BB6850(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v52)(
                                                               Enumerator,
                                                               *(_QWORD *)(v52 + 8));
  }
  if ( !v17 )
LABEL_48:
    sub_1B64ACC(list, v19);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v17,
                                                     (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  System_Collections_Generic_List_object__o *v8; // x19
  const MethodInfo *v9; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v11; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v13; // x20
  __int64 v14; // x21
  int32_t v15; // w2
  int32_t v16; // w3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  WarBoardIndividualityClassEntity_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_49FF49D & 1) == 0 )
  {
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v5);
    sub_1B64870(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v6);
    sub_1B64870(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v7);
    byte_49FF49D = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B64ABC(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_34AF17C *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v9);
  if ( !Entities )
    goto LABEL_18;
  klass = Entities[1].klass;
  v13 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v14 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v14 >= (unsigned int)klass )
        sub_1B64AD4(Entities, v11);
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v13[1].monitor + v14);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v11);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v18 = Method_System_Collections_Generic_List_ServantClassEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v20 = Entities;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Entities,
          *(const MethodInfo_34AF9B0 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1B64814((ServantStatusBattleListViewItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
      }
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1B64ACC(Entities, v11);
  }
  if ( !v8 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_34B15A8 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


// local variable allocation has failed, the output may be wrong!
ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntity(
        WarBoardIndividualityClassMaster_o *this,
        int32_t individuality,
        const MethodInfo *method)
{
  ServantClassEntity_o *result; // x0
  __int64 v6; // x1
  const MethodInfo *v7; // x2
  ServantClassEntity_o *v8; // x1
  struct System_String_o *name; // x8

  if ( (byte_49FF49E & 1) == 0 )
  {
    sub_1B64870(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_49FF49E = 1;
  }
  result = (ServantClassEntity_o *)sub_1B64918(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B64ACC(0LL, v6);
  v8 = result;
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
      sub_1B64AD4(result, v8);
    }
    return 0LL;
  }
  return result;
}


void __fastcall WarBoardIndividualityClassMaster___c__DisplayClass3_0___ctor(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardIndividualityClassMaster___c__DisplayClass3_0___GetEntities_b__0(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardIndividualityClassEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1B64ACC(this, x);
  return entity->fields.individuality == x;
}