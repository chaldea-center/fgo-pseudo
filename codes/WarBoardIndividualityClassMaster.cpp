void __fastcall WarBoardIndividualityClassMaster___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2

  if ( (byte_4B171D9 & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardIndividualityClassMaster_TypeInfo, v1, v2);
    byte_4B171D9 = 1;
  }
  *WarBoardIndividualityClassMaster_TypeInfo->static_fields = (struct WarBoardIndividualityClassMaster_StaticFields)0x3EA000003E9LL;
}


void __fastcall WarBoardIndividualityClassMaster___ctor(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171D4 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__,
      method,
      v2);
    byte_4B171D4 = 1;
  }
  DataMasterBase_object__object__int____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    336,
    (const MethodInfo_31B2E00 *)Method_DataMasterBase_WarBoardIndividualityClassMaster__WarBoardIndividualityClassEntity__int___ctor__);
}


ServantClassEntity_o *__fastcall WarBoardIndividualityClassMaster__GetAllClassServantEntity(
        WarBoardIndividualityClassMaster_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  long double v3; // q0
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x0
  __int64 v11; // x0
  Il2CppObject *MasterData_object; // x0
  DataMasterBase_TMaster__TEntity__PKType__o *v13; // x19

  if ( (byte_4B171D8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMasterData_ServantClassMaster___, method, v2);
    sub_1BCA7E0(&Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_DataManager__getInstance__, v6, v7);
    sub_1BCA7E0(&WarBoardIndividualityClassMaster_TypeInfo, v8, v9);
    byte_4B171D8 = 1;
  }
  v10 = *((_QWORD *)Method_SingletonMonoBehaviour_DataManager__getInstance__ + 4);
  if ( (*(_BYTE *)(v10 + 309) & 1) == 0 )
    v10 = sub_1C1C6BC(v3);
  v11 = *(_QWORD *)(*(_QWORD *)(v10 + 192) + 16LL);
  if ( (*(_BYTE *)(v11 + 309) & 1) == 0 )
    v11 = sub_1C1C6BC(v3);
  MasterData_object = **(Il2CppObject ***)(v11 + 184);
  if ( !MasterData_object )
    goto LABEL_12;
  MasterData_object = DataManager__GetMasterData_object_(
                        (DataManager_o *)MasterData_object,
                        (const MethodInfo_2F12C90 *)Method_DataManager_GetMasterData_ServantClassMaster___);
  v13 = (DataMasterBase_TMaster__TEntity__PKType__o *)MasterData_object;
  if ( !WarBoardIndividualityClassMaster_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(WarBoardIndividualityClassMaster_TypeInfo, method);
  if ( !v13 )
LABEL_12:
    sub_1BCAA3C(MasterData_object, method);
  return (ServantClassEntity_o *)DataMasterBase_object__object__int___GetEntity(
                                   v13,
                                   WarBoardIndividualityClassMaster_TypeInfo->static_fields->ALL_CLASS_ID,
                                   (const MethodInfo_31B2E40 *)Method_DataMasterBase_ServantClassMaster__ServantClassEntity__int__GetEntity__);
}


WarBoardIndividualityClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  System_Collections_Generic_List_object__o *v30; // x20
  System_Collections_ObjectModel_Collection_T__o *list; // x0
  __int64 v32; // x1
  __int64 v33; // x1
  System_Collections_Generic_IEnumerator_T__o *Enumerator; // x19
  System_Collections_Generic_IEnumerator_T__c *klass; // x8
  __int64 v36; // x9
  int32_t *p_offset; // x10
  __int64 p_method; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x3
  Il2CppObject *v42; // x22
  System_Collections_Generic_IEnumerator_T__c *v43; // x8
  __int64 v44; // x9
  int32_t *v45; // x10
  __int64 v46; // x0
  int64_t v47; // x0
  __int64 v48; // x1
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  int64_t v55; // x8
  WarBoardIndividualityClassEntity_c *v56; // x1
  __int64 methodPtr_low; // x9
  PartyOrganizationUtility_o *v58; // x23
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x3
  System_Func_int__bool__o *v62; // x24
  _BOOL8 v63; // x0
  __int64 v64; // x1
  int64_t v65; // x2
  int32_t v66; // w3
  System_String_o *v67; // x4
  BattleSetupInfo_o *v68; // x5
  FollowerInfo_o *v69; // x6
  PartyListViewItem_o *v70; // x7
  Il2CppObject *v71; // x1
  struct System_Object_array *items; // x8
  _QWORD *v73; // x9
  __int64 size; // x10
  Il2CppClass **v75; // x0
  System_Collections_Generic_IEnumerator_T__c *v76; // x8
  __int64 v77; // x9
  int32_t *v78; // x10
  __int64 v79; // x0

  if ( (byte_4B171D5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Any_int____76840176, individualities, method);
    sub_1BCA7E0(&Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__, v6, v7);
    sub_1BCA7E0(&System_Func_int__bool__TypeInfo, v8, v9);
    sub_1BCA7E0(&System_IDisposable_TypeInfo, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, v12, v13);
    sub_1BCA7E0(&System_Collections_IEnumerator_TypeInfo, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__, v16, v17);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__, v18, v19);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__, v20, v21);
    sub_1BCA7E0(&System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__, v24, v25);
    sub_1BCA7E0(&WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v26, v27);
    sub_1BCA7E0(&WarBoardIndividualityClassEntity_TypeInfo, v28, v29);
    byte_4B171D5 = 1;
  }
  v30 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_WarBoardIndividualityClassEntity__TypeInfo,
                                                       individualities,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v30,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity___ctor__);
  if ( individualities )
  {
    list = (System_Collections_ObjectModel_Collection_T__o *)this->fields.list;
    if ( !list )
      goto LABEL_48;
    Enumerator = System_Collections_ObjectModel_Collection_object___GetEnumerator(
                   list,
                   (const MethodInfo_314F9E8 *)Method_System_Collections_ObjectModel_Collection_DataEntityBase__GetEnumerator__);
    if ( !Enumerator )
      sub_1BCAA3C(0LL, v33);
    while ( 1 )
    {
      klass = Enumerator->klass;
      v36 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        p_offset = &klass->_1.interfaceOffsets->offset;
        while ( *((System_Collections_IEnumerator_c **)p_offset - 1) != System_Collections_IEnumerator_TypeInfo )
        {
          --v36;
          p_offset += 4;
          if ( !v36 )
            goto LABEL_10;
        }
        p_method = (__int64)&klass->vtable[*p_offset].method;
      }
      else
      {
LABEL_10:
        p_method = sub_1C1C7C0(Enumerator, System_Collections_IEnumerator_TypeInfo, 0LL);
      }
      if ( ((*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))p_method)(
              Enumerator,
              *(_QWORD *)(p_method + 8)) & 1) == 0 )
        break;
      v42 = (Il2CppObject *)sub_1BCAA2C(WarBoardIndividualityClassMaster___c__DisplayClass3_0_TypeInfo, v39, v40, v41);
      System_Object___ctor(v42, 0LL);
      v43 = Enumerator->klass;
      v44 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
      if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
      {
        v45 = &v43->_1.interfaceOffsets->offset;
        while ( *((System_Collections_Generic_IEnumerator_DataEntityBase__c **)v45 - 1) != System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo )
        {
          --v44;
          v45 += 4;
          if ( !v44 )
            goto LABEL_17;
        }
        v46 = (__int64)&v43->vtable[*v45].method;
      }
      else
      {
LABEL_17:
        v46 = sub_1C1C7C0(Enumerator, System_Collections_Generic_IEnumerator_DataEntityBase__TypeInfo, 0LL);
      }
      v47 = (*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v46)(
              Enumerator,
              *(_QWORD *)(v46 + 8));
      if ( !v42 )
        goto LABEL_45;
      v55 = v47;
      if ( v47 )
      {
        v56 = WarBoardIndividualityClassEntity_TypeInfo;
        methodPtr_low = LOBYTE(WarBoardIndividualityClassEntity_TypeInfo->vtable._0_Equals.methodPtr);
        if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * (methodPtr_low - 1)) != WarBoardIndividualityClassEntity_TypeInfo )
        {
          sub_1BCACFC(v47);
LABEL_44:
          sub_1BCACFC(v55);
LABEL_45:
          sub_1BCAA3C(v47, v48);
        }
        v42[1].klass = (Il2CppClass *)v47;
        v58 = (PartyOrganizationUtility_o *)&v42[1];
        if ( *(unsigned __int8 *)(*(_QWORD *)v47 + 304LL) < (unsigned int)methodPtr_low
          || *(WarBoardIndividualityClassEntity_c **)(*(_QWORD *)(*(_QWORD *)v47 + 200LL) + 8 * (methodPtr_low - 1)) != v56 )
        {
          goto LABEL_44;
        }
      }
      else
      {
        v42[1].klass = 0LL;
        v58 = (PartyOrganizationUtility_o *)&v42[1];
      }
      sub_1BCA784(v58, v47, v49, v50, v51, v52, v53, v54);
      if ( v58->klass )
      {
        v62 = (System_Func_int__bool__o *)sub_1BCAA2C(System_Func_int__bool__TypeInfo, v59, v60, v61);
        System_Func_int__bool____ctor(
          v62,
          v42,
          Method_WarBoardIndividualityClassMaster___c__DisplayClass3_0__GetEntities_b__0__,
          0LL);
        v63 = BasicHelper__Any_int__49273364(
                individualities,
                (System_Func_T__bool__o *)v62,
                (const MethodInfo_2EFDA14 *)Method_BasicHelper_Any_int____76840176);
        if ( v63 )
        {
          if ( !v30 )
            sub_1BCAA3C(v63, v64);
          v71 = (Il2CppObject *)v58->klass;
          items = v30->fields._items;
          v73 = Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__Add__;
          ++v30->fields._version;
          if ( !items )
            sub_1BCAA3C(v63, v71);
          size = v30->fields._size;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v30,
              v71,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v73[4] + 192LL) + 112LL));
          }
          else
          {
            v75 = &items->obj.klass + size;
            v30->fields._size = size + 1;
            v75[4] = (Il2CppClass *)v71;
            sub_1BCA784((PartyOrganizationUtility_o *)(v75 + 4), (int64_t)v71, v65, v66, v67, v68, v69, v70);
          }
        }
      }
    }
    v76 = Enumerator->klass;
    v77 = *(unsigned __int16 *)(&Enumerator->klass->_2.bitflags2 + 3);
    if ( *(_WORD *)(&Enumerator->klass->_2.bitflags2 + 3) )
    {
      v78 = &v76->_1.interfaceOffsets->offset;
      while ( *((System_IDisposable_c **)v78 - 1) != System_IDisposable_TypeInfo )
      {
        --v77;
        v78 += 4;
        if ( !v77 )
          goto LABEL_38;
      }
      v79 = (__int64)&v76->vtable[*v78].method;
    }
    else
    {
LABEL_38:
      v79 = sub_1C1C7C0(Enumerator, System_IDisposable_TypeInfo, 0LL);
    }
    list = (System_Collections_ObjectModel_Collection_T__o *)(*(__int64 (__fastcall **)(System_Collections_Generic_IEnumerator_T__o *, _QWORD))v79)(
                                                               Enumerator,
                                                               *(_QWORD *)(v79 + 8));
  }
  if ( !v30 )
LABEL_48:
    sub_1BCAA3C(list, v32);
  return (WarBoardIndividualityClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                                     v30,
                                                     (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_WarBoardIndividualityClassEntity__ToArray__);
}


ServantClassEntity_array *__fastcall WarBoardIndividualityClassMaster__GetServantClassEntities(
        WarBoardIndividualityClassMaster_o *this,
        System_Int32_array *individualities,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  System_Collections_Generic_List_object__o *v12; // x19
  const MethodInfo *v13; // x2
  WarBoardIndividualityClassEntity_o *Entities; // x0
  const MethodInfo *v15; // x1
  WarBoardIndividualityClassEntity_c *klass; // x8
  WarBoardIndividualityClassEntity_o *v17; // x20
  __int64 v18; // x21
  int64_t v19; // x2
  int32_t v20; // w3
  System_String_o *v21; // x4
  BattleSetupInfo_o *v22; // x5
  FollowerInfo_o *v23; // x6
  PartyListViewItem_o *v24; // x7
  struct System_Object_array *items; // x8
  _QWORD *v26; // x9
  __int64 size; // x10
  int64_t v28; // x1
  Il2CppClass **v29; // x0

  if ( (byte_4B171D6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassEntity__Add__, individualities, method);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassEntity__ToArray__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_ServantClassEntity___ctor__, v8, v9);
    sub_1BCA7E0(&System_Collections_Generic_List_ServantClassEntity__TypeInfo, v10, v11);
    byte_4B171D6 = 1;
  }
  v12 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_ServantClassEntity__TypeInfo,
                                                       individualities,
                                                       method,
                                                       v3);
  System_Collections_Generic_List_object____ctor(
    v12,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_ServantClassEntity___ctor__);
  Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassMaster__GetEntities(
                                                     this,
                                                     individualities,
                                                     v13);
  if ( !Entities )
    goto LABEL_18;
  klass = Entities[1].klass;
  v17 = Entities;
  if ( klass && (int)klass >= 1 )
  {
    v18 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)v18 >= (unsigned int)klass )
        sub_1BCAA44(Entities, v15);
      Entities = (WarBoardIndividualityClassEntity_o *)*((_QWORD *)&v17[1].monitor + v18);
      if ( !Entities )
        break;
      Entities = (WarBoardIndividualityClassEntity_o *)WarBoardIndividualityClassEntity__GetServantClassEntity(
                                                         Entities,
                                                         v15);
      if ( !v12 )
        break;
      items = v12->fields._items;
      v26 = Method_System_Collections_Generic_List_ServantClassEntity__Add__;
      ++v12->fields._version;
      if ( !items )
        break;
      size = v12->fields._size;
      v28 = (int64_t)Entities;
      if ( (unsigned int)size >= items->max_length )
      {
        System_Collections_Generic_List_object___AddWithResize(
          v12,
          (Il2CppObject *)Entities,
          *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v26[4] + 192LL) + 112LL));
      }
      else
      {
        v29 = &items->obj.klass + size;
        v12->fields._size = size + 1;
        v29[4] = (Il2CppClass *)v28;
        sub_1BCA784((PartyOrganizationUtility_o *)(v29 + 4), v28, v19, v20, v21, v22, v23, v24);
      }
      LODWORD(klass) = v17[1].klass;
      if ( (int)++v18 >= (int)klass )
        return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                             v12,
                                             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
    }
LABEL_18:
    sub_1BCAA3C(Entities, v15);
  }
  if ( !v12 )
    goto LABEL_18;
  return (ServantClassEntity_array *)System_Collections_Generic_List_object___ToArray(
                                       v12,
                                       (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_ServantClassEntity__ToArray__);
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

  if ( (byte_4B171D7 & 1) == 0 )
  {
    sub_1BCA7E0(&int___TypeInfo, *(_QWORD *)&individuality, method);
    byte_4B171D7 = 1;
  }
  result = (ServantClassEntity_o *)sub_1BCA888(int___TypeInfo, 1LL);
  if ( !result )
    sub_1BCAA3C(0LL, v6);
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
      sub_1BCAA44(result, v8);
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


// local variable allocation has failed, the output may be wrong!
bool __fastcall WarBoardIndividualityClassMaster___c__DisplayClass3_0___GetEntities_b__0(
        WarBoardIndividualityClassMaster___c__DisplayClass3_0_o *this,
        int32_t x,
        const MethodInfo *method)
{
  struct WarBoardIndividualityClassEntity_o *entity; // x8

  entity = this->fields.entity;
  if ( !entity )
    sub_1BCAA3C(this, *(_QWORD *)&x);
  return entity->fields.individuality == x;
}