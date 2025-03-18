void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_4C22FE4 & 1) == 0 )
  {
    sub_1C3B764(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_4C22FE4 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C22FDF & 1) == 0 )
  {
    sub_1C3B764(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_4C22FDF = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    342,
    (const MethodInfo_3298B24 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  long double v2; // q0
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x0
  __int64 v7; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v9; // x19

  if ( (byte_4C22FE3 & 1) == 0 )
  {
    sub_1C3B764(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1C3B764(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1C3B764(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1C3B764(&WarBoardIndividualityClassMaster_TypeInfo, v5);
    byte_4C22FE3 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1C8D640(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1C8D640(v2);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2FF0204 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v9 )
LABEL_12:
    sub_1C3B9C0(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v9,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_329AE48 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  System_Collections_Generic_List_object__o *v16; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v18; // x1
  __int64 v19; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v22; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v25; // x22
  System_Collections_Generic_IEnumerator_T__c *v26; // x8
  __int64 v27; // x9
  int32_t *v28; // x10
  __int64 v29; // x0
  int64_t v30; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Func_int__bool__o *v37; // x24
  _BOOL8 v38; // x0
  __int64 v39; // x1
  int64_t v40; // x2
  int32_t v41; // w3
  System_String_o *v42; // x4
  BattleSetupInfo_o *v43; // x5
  FollowerInfo_o *v44; // x6
  PartyListViewItem_o *v45; // x7
  Il2CppObject *v46; // x1
  struct System_Object_array *items; // x8
  _QWORD *v48; // x9
  __int64 size; // x10
  Il2CppClass **v50; // x0
  System_Collections_Generic_IEnumerator_T__c *v51; // x8
  __int64 v52; // x9
  int32_t *v53; // x10
  __int64 v54; // x0

  if ( (byte_4C22FE0 & 1) == 0 )
  {
    sub_1C3B764(&Method_BasicHelper_Any_int____77906328, individualities);
    sub_1C3B764(&Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__, v5);
    sub_1C3B764(&System_Func_int__bool__TypeInfo, v6);
    sub_1C3B764(&System_IDisposable_TypeInfo, v7);
    sub_1C3B764(&System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo, v8);
    sub_1C3B764(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v10);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v11);
    sub_1C3B764(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v12);
    sub_1C3B764(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v13);
    sub_1C3B764(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v14);
    sub_1C3B764(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v15);
    byte_4C22FE0 = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_32357CC *)Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1C3B9C0(0LL, v19);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v22 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v22;
          p_offset += 4;
          if ( !v22 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C8D744(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v25 = sub_1C3B9B0(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
      System_Object___ctor((Il2CppObject *)v25, 0LL);
      v26 = Enumerator->klass;
      v27 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v28 = &v26->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__c **)v28 - 1) != System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo )
        {
          --v27;
          v28 += 4;
          if ( !v27 )
            goto LABEL_17;
        }
        v29 = (__int64)&v26->vtable[*v28].method;
      }
      else
      {
LABEL_17:
        v29 = sub_1C8D744(
                Enumerator,
                System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo,
                0LL);
      }
      v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
              Enumerator,
              *(_QWORD *)(v29 + 8));
      if ( !v25 )
        sub_1C3B9C0(v30, v30);
      *(_QWORD *)(v25 + 16) = v30;
      sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 16), v30, v31, v32, v33, v34, v35, v36);
      if ( *(_QWORD *)(v25 + 16) )
      {
        v37 = (System_Func_int__bool__o *)sub_1C3B9B0(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v37,
          (Il2CppObject *)v25,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0LL);
        v38 = BasicHelper__Any_int__50178292(
                individualities,
                (System_Func_T__bool__o *)v37,
                (const MethodInfo_2FDA8F4 *)Method_BasicHelper_Any_int____77906328);
        if ( v38 )
        {
          if ( !v16 )
            sub_1C3B9C0(v38, v39);
          v46 = *(Il2CppObject **)(v25 + 16);
          items = v16->fields._items;
          v48 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1C3B9C0(v38, v46);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v46,
              *(const MethodInfo_368BC6C **)(*(_QWORD *)(v48[4] + 192LL) + 112LL));
          }
          else
          {
            v50 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v50[4] = (Il2CppClass *)v46;
            sub_1C3B708((PartyOrganizationUtility_o *)(v50 + 4), (int64_t)v46, v40, v41, v42, v43, v44, v45);
          }
        }
      }
    }
    v51 = Enumerator->klass;
    v52 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v53 = &v51->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v53 - 1) != System_IDisposable_TypeInfo )
      {
        --v52;
        v53 += 4;
        if ( !v52 )
          goto LABEL_31;
      }
      v54 = (__int64)&v51->vtable[*v53].method;
    }
    else
    {
LABEL_31:
      v54 = sub_1C8D744(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v54)(
                                                               Enumerator,
                                                               *(_QWORD *)(v54 + 8));
  }
  if ( !v16 )
LABEL_39:
    sub_1C3B9C0(list, v18);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v16,
                                                     (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
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
  int64_t v15; // x2
  int32_t v16; // w3
  System_String_o *v17; // x4
  BattleSetupInfo_o *v18; // x5
  FollowerInfo_o *v19; // x6
  PartyListViewItem_o *v20; // x7
  struct System_Object_array *items; // x8
  _QWORD *v22; // x9
  __int64 size; // x10
  int64_t v24; // x1
  Il2CppClass **v25; // x0

  if ( (byte_4C22FE1 & 1) == 0 )
  {
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v5);
    sub_1C3B764(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v6);
    sub_1C3B764(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v7);
    byte_4C22FE1 = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C3B9B0(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_368B438 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
        sub_1C3B9C8(Entities, v11);
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v13[1].monitor + v14);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v11);
      if ( !v8 )
        break;
      items = v8->fields._items;
      v22 = Method_System_Collections_Generic_List_ServantClassEntity__Add__;
      ++v8->fields._version;
      if ( !items )
        break;
      size = v8->fields._size;
      v24 = (int64_t)Entities;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v8,
          (Il2CppObject *)Entities,
          *(const MethodInfo_368BC6C **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
      }
      else
      {
        v25 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v25[4] = (Il2CppClass *)v24;
        sub_1C3B708((PartyOrganizationUtility_o *)(v25 + 4), v24, v15, v16, v17, v18, v19, v20);
      }
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1C3B9C0(Entities, v11);
  }
  if ( !v8 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_368D7C4 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
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

  if ( (byte_4C22FE2 & 1) == 0 )
  {
    sub_1C3B764(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_4C22FE2 = 1;
  }
  result = (ServantClassEntity_o *)sub_1C3B80C(int___TypeInfo, 1LL);
  if ( !result )
    sub_1C3B9C0(0LL, v6);
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
      sub_1C3B9C8(result, v8);
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
    sub_1C3B9C0(this, x);
  return entity->fields.individuality == x;
}