void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B171F6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__, method, v2);
    byte_4B171F6 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_31B3158 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_o *__fastcall WarBoardPartySkillMaster__GetEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4B171F7 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      *(_QWORD *)&id,
      *(_QWORD *)&target);
    byte_4B171F7 = 1;
  }
  PK = (Il2CppObject *)WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_31B3198 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x22
  __int64 v18; // x0
  __int64 v19; // x1
  int v20; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v21; // x19
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  System_Func_object__bool__o *v25; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4B171F8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, *(_QWORD *)&id, isEnemy);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v7, v8);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v13, v14);
    sub_1BCA7E0(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v15, v16);
    byte_4B171F8 = 1;
  }
  v17 = sub_1BCAA2C(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&id, isEnemy, method);
  System_Object___ctor((Il2CppObject *)v17, 0LL);
  if ( !v17 )
    sub_1BCAA3C(v18, v19);
  if ( isEnemy )
    v20 = 2;
  else
    v20 = 1;
  *(_DWORD *)(v17 + 16) = id;
  *(_DWORD *)(v17 + 20) = v20;
  v21 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2F3AEF4 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v25 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v22, v23, v24);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v17,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    0LL);
  v26 = System_Linq_Enumerable__Where_object_(
          v21,
          (System_Func_TSource__bool__o *)v25,
          (const MethodInfo_2F51894 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v26,
                                             (const MethodInfo_2F4BA08 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  System_Collections_Generic_List_object__o *v14; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v16; // x1
  signed int max_length; // w8
  unsigned int v18; // w23
  int32_t target; // w8
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  struct System_Object_array *items; // x8
  _QWORD *v27; // x9
  __int64 size; // x10
  int64_t v29; // x1
  Il2CppClass **v30; // x0

  if ( (byte_4B171FA & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Collections_Generic_List_SkillEntity__Add__,
      *(_QWORD *)&partyNum,
      *(_QWORD *)&checkTarget);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v10, v11);
    sub_1BCA7E0(&System_Collections_Generic_List_SkillEntity__TypeInfo, v12, v13);
    byte_4B171FA = 1;
  }
  v14 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                       System_Collections_Generic_List_SkillEntity__TypeInfo,
                                                       *(_QWORD *)&partyNum,
                                                       *(_QWORD *)&checkTarget,
                                                       entityArray);
  System_Collections_Generic_List_object____ctor(
    v14,
    (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_19;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v18 = 0;
    while ( 1 )
    {
      if ( v18 >= max_length )
        sub_1BCAA44(SkillEntity, v16);
      SkillEntity = entityArray->m_Items[v18];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v16);
          if ( !v14 )
            break;
          items = v14->fields._items;
          v27 = Method_System_Collections_Generic_List_SkillEntity__Add__;
          ++v14->fields._version;
          if ( !items )
            break;
          size = v14->fields._size;
          v29 = (int64_t)SkillEntity;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v14,
              (Il2CppObject *)SkillEntity,
              *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v27[4] + 192LL) + 112LL));
          }
          else
          {
            v30 = &items->obj.klass + size;
            v14->fields._size = size + 1;
            v30[4] = (Il2CppClass *)v29;
            sub_1BCA784((PartyOrganizationUtility_o *)(v30 + 4), v29, v20, v21, v22, v23, v24, v25);
          }
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v18 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BCAA3C(SkillEntity, v16);
  }
LABEL_17:
  if ( !v14 )
    goto LABEL_19;
  return (SkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v14,
                                (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
}


SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t maxNum; // [xsp+Ch] [xbp-4h] BYREF

  maxNum = 0;
  return WarBoardPartySkillMaster__GetPartySkillEntity_41078800(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *__fastcall WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v19; // x4
  SkillEntity_array *v20; // x22
  int32_t v21; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x3
  WarBoardPartySkillMaster___c_c *v27; // x0
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v29; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int64_t v31; // x2
  int32_t v32; // w3
  System_String_o *v33; // x4
  BattleSetupInfo_o *v34; // x5
  FollowerInfo_o *v35; // x6
  PartyListViewItem_o *v36; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0
  Il2CppObject *v38; // x0
  const MethodInfo *v39; // x4
  int32_t monitor; // w1

  if ( (byte_4B171F9 & 1) == 0 )
  {
    sub_1BCA7E0(
      &Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___,
      *(_QWORD *)&partySkillId,
      *(_QWORD *)&partyNum);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9, v10);
    sub_1BCA7E0(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v13, v14);
    sub_1BCA7E0(&WarBoardPartySkillMaster___c_TypeInfo, v15, v16);
    byte_4B171F9 = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0LL);
  v20 = 0LL;
  if ( IsNullOrEmpty )
    return v20;
  if ( isEnemy )
    v21 = 2;
  else
    v21 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v21,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v19);
  if ( !PartyNumMatchSkillArray )
    sub_1BCAA3C(0LL, v23);
  v20 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v20;
  v27 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo, v23);
    v27 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v27->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v27->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v27, v23);
      v27 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    v29 = (Il2CppObject *)v27->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BCAA2C(
                                              System_Func_WarBoardPartySkillEntity__int__TypeInfo,
                                              v23,
                                              v24,
                                              v25);
    System_Func_object__int____ctor(
      _9__3_0,
      v29,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      0LL);
    static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_1BCA784((PartyOrganizationUtility_o *)&static_fields->__9__3_0, (int64_t)_9__3_0, v31, v32, v33, v34, v35, v36);
  }
  v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v38 = System_Linq_Enumerable__FirstOrDefault_object_(
          v37,
          (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v38 )
    return v20;
  monitor = (int32_t)v38[1].monitor;
  if ( monitor >= partyNum )
    return v20;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v38,
             monitor,
             v21,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v39);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_41078800(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x20
  __int64 v28; // x0
  __int64 v29; // x1
  const MethodInfo *v30; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x3
  System_Func_object__bool__o *v36; // x22
  WarBoardPartySkillEntity_o *object; // x0
  const MethodInfo *v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v42; // x0
  System_Func_object__int__o *_9__6_1; // x22
  Il2CppObject *v44; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int64_t v46; // x2
  int32_t v47; // w3
  System_String_o *v48; // x4
  BattleSetupInfo_o *v49; // x5
  FollowerInfo_o *v50; // x6
  PartyListViewItem_o *v51; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v52; // x0

  if ( (byte_4B171FB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId, *(_QWORD *)&partyNum);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11, v12);
    sub_1BCA7E0(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v13, v14);
    sub_1BCA7E0(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v15, v16);
    sub_1BCA7E0(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v17, v18);
    sub_1BCA7E0(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v19, v20);
    sub_1BCA7E0(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v21, v22);
    sub_1BCA7E0(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v23, v24);
    sub_1BCA7E0(&WarBoardPartySkillMaster___c_TypeInfo, v25, v26);
    byte_4B171FB = 1;
  }
  v27 = sub_1BCAA2C(
          WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&partySkillId,
          *(_QWORD *)&partyNum,
          isEnemy);
  System_Object___ctor((Il2CppObject *)v27, 0LL);
  if ( !v27 )
    sub_1BCAA3C(v28, v29);
  *(_DWORD *)(v27 + 16) = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v30);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v36 = (System_Func_object__bool__o *)sub_1BCAA2C(System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v32, v33, v34);
  System_Func_object__bool____ctor(
    v36,
    (Il2CppObject *)v27,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    0LL);
  object = (WarBoardPartySkillEntity_o *)BasicHelper__Find_object_(
                                           (System_Object_array *)EntityArray,
                                           (System_Func_T__bool__o *)v36,
                                           (const MethodInfo_2EFE860 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( object )
  {
    num = object->fields.num;
  }
  else
  {
    v42 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo, v38);
      v42 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    _9__6_1 = (System_Func_object__int__o *)v42->static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42, v38);
        v42 = WarBoardPartySkillMaster___c_TypeInfo;
      }
      v44 = (Il2CppObject *)v42->static_fields->__9;
      _9__6_1 = (System_Func_object__int__o *)sub_1BCAA2C(
                                                System_Func_WarBoardPartySkillEntity__int__TypeInfo,
                                                v38,
                                                v39,
                                                v40);
      System_Func_object__int____ctor(
        _9__6_1,
        v44,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        0LL);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&static_fields->__9__6_1,
        (int64_t)_9__6_1,
        v46,
        v47,
        v48,
        v49,
        v50,
        v51);
    }
    v52 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_2F3B8C4 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    object = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                             v52,
                                             (const MethodInfo_2F34B68 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !object )
      return 0LL;
    num = object->fields.num;
    if ( num >= *(_DWORD *)(v27 + 16) )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(object, v38);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B171FC & 1) == 0 )
  {
    sub_1BCA7E0(&WarBoardPartySkillMaster___c_TypeInfo, v1, v2);
    byte_4B171FC = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(WarBoardPartySkillMaster___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  WarBoardPartySkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall WarBoardPartySkillMaster___c___ctor(WarBoardPartySkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntityArray_b__3_0(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.num;
}


void __fastcall WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartySkillMaster___c__DisplayClass2_0___GetEntityArray_b__0(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.id == this->fields.id
      && (entity->fields.target == this->fields.target || entity->fields.target == 0);
}


void __fastcall WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall WarBoardPartySkillMaster___c__DisplayClass6_0___GetPartySkillEntity_b__0(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BCAA3C(this, 0LL);
  return entity->fields.num == this->fields.partyNum;
}