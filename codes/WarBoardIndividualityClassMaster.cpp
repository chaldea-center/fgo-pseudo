void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1

  if ( (byte_49BBF12 & 1) == 0 )
  {
    sub_1B4CF90(&WarBoardIndividualityClassMaster_TypeInfo, v1);
    byte_49BBF12 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BBF0D & 1) == 0 )
  {
    sub_1B4CF90(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method);
    byte_49BBF0D = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    342,
    (const MethodInfo_319B678 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
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

  if ( (byte_49BBF11 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMasterData_ServantClassMaster___, method);
    sub_1B4CF90(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v3);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v4);
    sub_1B4CF90(&WarBoardIndividualityClassMaster_TypeInfo, v5);
    byte_49BBF11 = 1;
  }
  v6 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v6 + 309) & 1) == 0 )
    v6 = sub_1B9D620(v2);
  v7 = *(_QWORD *)(*(_QWORD *)(v6 + 192) + 16LL);
  if ( (*(_BYTE *)(v7 + 309) & 1) == 0 )
    v7 = sub_1B9D620(v2);
  MasterData_object = **(Il2CppObject ***)(v7 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F01B24 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v9 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo);
  if ( !v9 )
LABEL_12:
    sub_1B4D1EC(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v9,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_319D99C *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
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
  __int64 v30; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  System_Func_int__bool__o *v33; // x24
  _BOOL8 v34; // x0
  __int64 v35; // x1
  int32_t v36; // w2
  const MethodInfo *v37; // x3
  Il2CppObject *v38; // x1
  struct System_Object_array *items; // x8
  _QWORD *v40; // x9
  __int64 size; // x10
  Il2CppClass **v42; // x0
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0

  if ( (byte_49BBF0E & 1) == 0 )
  {
    sub_1B4CF90(&Method_BasicHelper_Any_int____75494880, individualities);
    sub_1B4CF90(&Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__, v5);
    sub_1B4CF90(&System_Func_int__bool__TypeInfo, v6);
    sub_1B4CF90(&System_IDisposable_TypeInfo, v7);
    sub_1B4CF90(&System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo, v8);
    sub_1B4CF90(&System_Collections_IEnumerator_TypeInfo, v9);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v10);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v11);
    sub_1B4CF90(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v12);
    sub_1B4CF90(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v13);
    sub_1B4CF90(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v14);
    sub_1B4CF90(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v15);
    byte_49BBF0E = 1;
  }
  v16 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v16,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_39;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_313B4BC *)Method_System_Collections_ObjectModel_Collection_WarBoardIndividualityClassEntity__GetEnumerator__);
    if ( !Enumerator )
      sub_1B4D1EC(0LL, v19);
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
        p_method = sub_1B9D724(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v25 = sub_1B4D1DC(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo);
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
        v29 = sub_1B9D724(
                Enumerator,
                System_Collections_Generic_IEnumerator_WarBoardIndividualityClassEntity__TypeInfo,
                0LL);
      }
      v30 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v29)(
              Enumerator,
              *(_QWORD *)(v29 + 8));
      if ( !v25 )
        sub_1B4D1EC(v30, v30);
      *(_QWORD *)(v25 + 16) = v30;
      sub_1B4CF34((CGThumbnailListItem_o *)(v25 + 16), v30, v31, v32);
      if ( *(_QWORD *)(v25 + 16) )
      {
        v33 = (System_Func_int__bool__o *)sub_1B4D1DC(System_Func_int__bool__TypeInfo);
        System_Func_int__bool____ctor(
          v33,
          (Il2CppObject *)v25,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0LL);
        v34 = BasicHelper__Any_int__49201684(
                individualities,
                (System_Func_T__bool__o *)v33,
                (const MethodInfo_2EEC214 *)Method_BasicHelper_Any_int____75494880);
        if ( v34 )
        {
          if ( !v16 )
            sub_1B4D1EC(v34, v35);
          v38 = *(Il2CppObject **)(v25 + 16);
          items = v16->fields._items;
          v40 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v16->fields._version;
          if ( !items )
            sub_1B4D1EC(v34, v38);
          size = v16->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v16,
              v38,
              *(const MethodInfo_35801DC **)(*(_QWORD *)(v40[4] + 192LL) + 112LL));
          }
          else
          {
            v42 = &items->obj.klass + size;
            v16->fields._size = size + 1;
            v42[4] = (Il2CppClass *)v38;
            sub_1B4CF34((CGThumbnailListItem_o *)(v42 + 4), (int32_t)v38, v36, v37);
          }
        }
      }
    }
    v43 = Enumerator->klass;
    v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v45 = &v43->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v45 - 1) != System_IDisposable_TypeInfo )
      {
        --v44;
        v45 += 4;
        if ( !v44 )
          goto LABEL_31;
      }
      v46 = (__int64)&v43->vtable[*v45].method;
    }
    else
    {
LABEL_31:
      v46 = sub_1B9D724(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
                                                               Enumerator,
                                                               *(_QWORD *)(v46 + 8));
  }
  if ( !v16 )
LABEL_39:
    sub_1B4D1EC(list, v18);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v16,
                                                     (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
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
  const MethodInfo *v16; // x3
  struct System_Object_array *items; // x8
  _QWORD *v18; // x9
  __int64 size; // x10
  WarBoardIndividualityClassEntity_o *v20; // x1
  Il2CppClass **v21; // x0

  if ( (byte_49BBF0F & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v5);
    sub_1B4CF90(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v6);
    sub_1B4CF90(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v7);
    byte_49BBF0F = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1B4D1DC(System_Collections_Generic_List_ServantClassEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_357F9A8 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
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
        sub_1B4D1F4(Entities, v11);
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
          *(const MethodInfo_35801DC **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
      }
      else
      {
        v21 = &items->obj.klass + size;
        v8->fields._size = size + 1;
        v21[4] = (Il2CppClass *)v20;
        sub_1B4CF34((CGThumbnailListItem_o *)(v21 + 4), (int32_t)v20, v15, v16);
      }
      LODWORD(klass) = v13[1].klass;
      if ( (int)++v14 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v8,
                                             (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1B4D1EC(Entities, v11);
  }
  if ( !v8 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v8,
                                       (const MethodInfo_3581D34 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
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

  if ( (byte_49BBF10 & 1) == 0 )
  {
    sub_1B4CF90(&int___TypeInfo, *(_QWORD *)&individuality);
    byte_49BBF10 = 1;
  }
  result = (ServantClassEntity_o *)sub_1B4D038(int___TypeInfo, 1LL);
  if ( !result )
    sub_1B4D1EC(0LL, v6);
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
      sub_1B4D1F4(result, v8);
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
    sub_1B4D1EC(this, x);
  return entity->fields.individuality == x;
}