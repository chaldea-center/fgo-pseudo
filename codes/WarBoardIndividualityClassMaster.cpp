void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  if ( (byte_4A5C120 & 1) == 0 )
  {
    sub_1B885B0(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4A5C120 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A5C11B & 1) == 0 )
  {
    sub_1B885B0(&Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
    byte_4A5C11B = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    336,
    (const MethodInfo_311D8F4 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v5; // x19

  if ( (byte_4A5C11F & 1) == 0 )
  {
    sub_1B885B0(&Method_DataManager_GetMasterData_ServantClassMaster___);
    sub_1B885B0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_DataManager__getInstance__);
    sub_1B885B0(&WarBoardIndividualityClassMaster_TypeInfo);
    byte_4A5C11F = 1;
  }
  v2 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v2 + 309) & 1) == 0 )
    v2 = sub_1BDA48C(v2);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 192) + 16LL);
  if ( (*(_BYTE *)(v3 + 309) & 1) == 0 )
    v3 = sub_1BDA48C(v3);
  MasterData_object = **(Il2CppObject ***)(v3 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2E7F908 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v5 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v5 )
LABEL_12:
    sub_1B8880C(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v5,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_311D934 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
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
  __int64 p_method; // x0
  Il2CppObject *v14; // x22
  System_Collections_Generic_IEnumerator_T__c *v15; // x8
  __int64 v16; // x9
  int32_t *v17; // x10
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x1
  int32_t v21; // w2
  int32_t v22; // w3
  __int64 v23; // x8
  WarBoardIndividualityClassEntity_c *v24; // x1
  __int64 methodPtr_low; // x9
  ServantStatusBattleListViewItem_o *v26; // x23
  System_Func_int__bool__o *v27; // x24
  _BOOL8 v28; // x0
  __int64 v29; // x1
  int32_t v30; // w2
  int32_t v31; // w3
  Il2CppObject *v32; // x1
  struct System_Object_array *items; // x8
  _QWORD *v34; // x9
  __int64 size; // x10
  Il2CppClass **v36; // x0
  System_Collections_Generic_IEnumerator_T__c *v37; // x8
  __int64 v38; // x9
  int32_t *v39; // x10
  __int64 v40; // x0

  if ( (byte_4A5C11C & 1) == 0 )
  {
    sub_1B885B0(&Method_BasicHelper_Any_int____76088816);
    sub_1B885B0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    sub_1B885B0(&System_Func_int__bool__TypeInfo);
    sub_1B885B0(&System_IDisposable_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo);
    sub_1B885B0(&System_Collections_IEnumerator_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
    sub_1B885B0(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__);
    sub_1B885B0(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
    sub_1B885B0(&WarBoardIndividualityClassEntity_TypeInfo);
    byte_4A5C11C = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_48;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_30BAB58 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1B8880C(0LL, v8);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v11 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v11;
          p_offset += 4;
          if ( !v11 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1BDA590(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v14 = (Il2CppObject *)sub_1B887FC(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor(v14, 0LL);
      v15 = Enumerator->klass;
      v16 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v17 = &v15->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v17 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v16;
          v17 += 4;
          if ( !v16 )
            goto LABEL_17;
        }
        v18 = (__int64)&v15->vtable[*v17].method;
      }
      else
      {
LABEL_17:
        v18 = sub_1BDA590(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v19 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v18)(
              Enumerator,
              *(_QWORD *)(v18 + 8));
      if ( !v14 )
        goto LABEL_45;
      v23 = v19;
      if ( v19 )
      {
        v24 = WarBoardIndividualityClassEntity_TypeInfo;
        methodPtr_low = LOBYTE(WarBoardIndividualityClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * (methodPtr_low - 1)) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          sub_1B88ACC(v19);
LABEL_44:
          sub_1B88ACC(v23);
LABEL_45:
          sub_1B8880C(v19, v20);
        }
        v14[1].klass = (Il2CppClass *)v19;
        v26 = (ServantStatusBattleListViewItem_o *)&v14[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)v19 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v19 + 200LL) + 8 * (methodPtr_low - 1)) != v24 )
        {
          goto LABEL_44;
        }
      }
      else
      {
        v14[1].klass = 0LL;
        v26 = (ServantStatusBattleListViewItem_o *)&v14[1];
      }
      sub_1B88554(v26, v19, v21, v22);
      if ( v26->klass )
      {
        v27 = (System_Func_int__bool__o *)sub_1B887FC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v27,
          v14,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0LL);
        v28 = BasicHelper__Any_int__48671312(
                individualities,
                (System_Func_T__bool__o *)v27,
                (const MethodInfo_2E6AA50 *)Method_BasicHelper_Any_int____76088816);
        if ( v28 )
        {
          if ( !v5 )
            sub_1B8880C(v28, v29);
          v32 = (Il2CppObject *)v26->klass;
          items = v5->fields._items;
          v34 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v5->fields._version;
          if ( !items )
            sub_1B8880C(v28, v32);
          size = v5->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v5,
              v32,
              *(const MethodInfo_34FD834 **)(*(_QWORD *)(v34[4] + 192LL) + 112LL));
          }
          else
          {
            v36 = &items->obj.klass + size;
            v5->fields._size = size + 1;
            v36[4] = (Il2CppClass *)v32;
            sub_1B88554((ServantStatusBattleListViewItem_o *)(v36 + 4), (int32_t)v32, v30, v31);
          }
        }
      }
    }
    v37 = Enumerator->klass;
    v38 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v39 = &v37->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v39 - 1) != System_IDisposable_TypeInfo )
      {
        --v38;
        v39 += 4;
        if ( !v38 )
          goto LABEL_38;
      }
      v40 = (__int64)&v37->vtable[*v39].method;
    }
    else
    {
LABEL_38:
      v40 = sub_1BDA590(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v40)(
                                                               Enumerator,
                                                               *(_QWORD *)(v40 + 8));
  }
  if ( !v5 )
LABEL_48:
    sub_1B8880C(list, v7);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v5,
                                                     (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
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
  int32_t v13; // w3
  struct System_Object_array *items; // x8
  _QWORD *v15; // x9
  __int64 size; // x10
  WarBoardIndividualityClassEntity_o *v17; // x1
  Il2CppClass **v18; // x0

  if ( (byte_4A5C11D & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassEntity__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    sub_1B885B0(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
    sub_1B885B0(&System_Collections_Generic_List_ServantClassEntity__TypeInfo);
    byte_4A5C11D = 1;
  }
  v5 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v5,
    (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
    v11 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v11 >= (unsigned int)klass )
        sub_1B88814(Entities, v8);
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
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v5,
          (Il2CppObject *)Entities,
          *(const MethodInfo_34FD834 **)(*(_QWORD *)(v15[4] + 192LL) + 112LL));
      }
      else
      {
        v18 = &items->obj.klass + size;
        v5->fields._size = size + 1;
        v18[4] = (Il2CppClass *)v17;
        sub_1B88554((ServantStatusBattleListViewItem_o *)(v18 + 4), (int32_t)v17, v12, v13);
      }
      LODWORD(klass) = v10[1].klass;
      if ( (int)++v11 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v5,
                                             (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1B8880C(Entities, v8);
  }
  if ( !v5 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v5,
                                       (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
}


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

  if ( (byte_4A5C11E & 1) == 0 )
  {
    sub_1B885B0(&int___TypeInfo);
    byte_4A5C11E = 1;
  }
  result = (ServantClassEntity_o *)sub_1B88658(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B8880C(0LL, v6);
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
      sub_1B88814(result, v8);
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
    sub_1B8880C(this, x);
  return entity->fields.individuality == x;
}