void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_49FD3C4 & 1) == 0 )
  {
    sub_1B640C8(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__, method);
    byte_49FD3C4 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    414,
    (const MethodInfo_30D41BC *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
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

  if ( (byte_49FD3C5 & 1) == 0 )
  {
    sub_1B640C8(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_49FD3C5 = 1;
  }
  PK = (Il2CppObject *)WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_30D41FC *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_array *__fastcall WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x22
  __int64 v13; // x0
  int v14; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v15; // x19
  __int64 v16; // x1
  __int64 v17; // x2
  System_Func_object__bool__o *v18; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v19; // x0

  if ( (byte_49FD3C6 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, *(_QWORD *)&id);
    sub_1B640C8(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v7);
    sub_1B640C8(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v8);
    sub_1B640C8(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v9);
    sub_1B640C8(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v10);
    sub_1B640C8(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v11);
    byte_49FD3C6 = 1;
  }
  v12 = sub_1B64314(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, *(_QWORD *)&id, isEnemy);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1B64324(v13);
  if ( isEnemy )
    v14 = 2;
  else
    v14 = 1;
  *(_DWORD *)(v12 + 16) = id;
  *(_DWORD *)(v12 + 20) = v14;
  v15 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_2E62C20 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v18 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v16, v17);
  System_Func_object__bool____ctor(
    v18,
    (Il2CppObject *)v12,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    0LL);
  v19 = System_Linq_Enumerable__Where_object_(
          v15,
          (System_Func_TSource__bool__o *)v18,
          (const MethodInfo_2E7709C *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v19,
                                             (const MethodInfo_2E713C4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
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
  __int64 v9; // x1
  __int64 v10; // x1
  System_Collections_Generic_List_object__o *v11; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v13; // x1
  signed int max_length; // w8
  unsigned int v15; // w23
  int32_t target; // w8
  int32_t v17; // w2
  int32_t v18; // w3
  struct System_Object_array *items; // x8
  _QWORD *v20; // x9
  __int64 size; // x10
  WarBoardPartySkillEntity_o *v22; // x1
  Il2CppClass **v23; // x0

  if ( (byte_49FD3C8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillEntity__Add__, *(_QWORD *)&partyNum);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v9);
    sub_1B640C8(&System_Collections_Generic_List_SkillEntity__TypeInfo, v10);
    byte_49FD3C8 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                       System_Collections_Generic_List_SkillEntity__TypeInfo,
                                                       *(_QWORD *)&partyNum,
                                                       *(_QWORD *)&checkTarget);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_19;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v15 = 0;
    while ( 1 )
    {
      if ( v15 >= max_length )
        sub_1B6432C(SkillEntity, v13);
      SkillEntity = entityArray->m_Items[v15];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v13);
          if ( !v11 )
            break;
          items = v11->fields._items;
          v20 = Method_System_Collections_Generic_List_SkillEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          v22 = SkillEntity;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)SkillEntity,
              *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
          }
          else
          {
            v23 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v23[4] = (Il2CppClass *)v22;
            sub_1B6406C((ServantStatusBattleListViewItem_o *)(v23 + 4), (int32_t)v22, v17, v18);
          }
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v15 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1B64324(SkillEntity);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (SkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
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
  return WarBoardPartySkillMaster__GetPartySkillEntity_40015048(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
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
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v15; // x4
  SkillEntity_array *v16; // x22
  int32_t v17; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  __int64 v19; // x1
  __int64 v20; // x2
  WarBoardPartySkillMaster___c_c *v22; // x0
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v24; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v26; // w2
  int32_t v27; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  Il2CppObject *v29; // x0
  const MethodInfo *v30; // x4
  int32_t monitor; // w1

  if ( (byte_49FD3C7 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9);
    sub_1B640C8(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v10);
    sub_1B640C8(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v11);
    sub_1B640C8(&WarBoardPartySkillMaster___c_TypeInfo, v12);
    byte_49FD3C7 = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0LL);
  v16 = 0LL;
  if ( IsNullOrEmpty )
    return v16;
  if ( isEnemy )
    v17 = 2;
  else
    v17 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v17,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v15);
  if ( !PartyNumMatchSkillArray )
    sub_1B64324(0LL);
  v16 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v16;
  v22 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v22 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v22->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v22->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v22);
      v22 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    v24 = (Il2CppObject *)v22->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardPartySkillEntity__int__TypeInfo, v19, v20);
    System_Func_object__int____ctor(
      _9__3_0,
      v24,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      0LL);
    static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v26, v27);
  }
  v28 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v29 = System_Linq_Enumerable__FirstOrDefault_object_(
          v28,
          (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v29 )
    return v16;
  monitor = (int32_t)v29[1].monitor;
  if ( monitor >= partyNum )
    return v16;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v29,
             monitor,
             v17,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v30);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_40015048(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x20
  __int64 v20; // x0
  const MethodInfo *v21; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  __int64 v23; // x1
  __int64 v24; // x2
  System_Func_object__bool__o *v26; // x22
  WarBoardPartySkillEntity_o *object; // x0
  const MethodInfo *v28; // x1
  __int64 v29; // x2
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v31; // x0
  System_Func_object__int__o *_9__6_1; // x22
  Il2CppObject *v33; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v35; // w2
  int32_t v36; // w3
  System_Collections_Generic_IEnumerable_TSource__o *v37; // x0

  if ( (byte_49FD3C9 & 1) == 0 )
  {
    sub_1B640C8(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_1B640C8(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11);
    sub_1B640C8(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v12);
    sub_1B640C8(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v13);
    sub_1B640C8(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v14);
    sub_1B640C8(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v15);
    sub_1B640C8(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v16);
    sub_1B640C8(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v17);
    sub_1B640C8(&WarBoardPartySkillMaster___c_TypeInfo, v18);
    byte_49FD3C9 = 1;
  }
  v19 = sub_1B64314(
          WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo,
          *(_QWORD *)&partySkillId,
          *(_QWORD *)&partyNum);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1B64324(v20);
  *(_DWORD *)(v19 + 16) = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v21);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v26 = (System_Func_object__bool__o *)sub_1B64314(System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v23, v24);
  System_Func_object__bool____ctor(
    v26,
    (Il2CppObject *)v19,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    0LL);
  object = (WarBoardPartySkillEntity_o *)BasicHelper__Find_object_(
                                           (System_Object_array *)EntityArray,
                                           (System_Func_T__bool__o *)v26,
                                           (const MethodInfo_2E2543C *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( object )
  {
    num = object->fields.num;
  }
  else
  {
    v31 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v31 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    _9__6_1 = (System_Func_object__int__o *)v31->static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( !v31->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v31);
        v31 = WarBoardPartySkillMaster___c_TypeInfo;
      }
      v33 = (Il2CppObject *)v31->static_fields->__9;
      _9__6_1 = (System_Func_object__int__o *)sub_1B64314(System_Func_WarBoardPartySkillEntity__int__TypeInfo, v28, v29);
      System_Func_object__int____ctor(
        _9__6_1,
        v33,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        0LL);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&static_fields->__9__6_1, (int32_t)_9__6_1, v35, v36);
    }
    v37 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_2E63584 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    object = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                             v37,
                                             (const MethodInfo_2E5C894 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !object )
      return 0LL;
    num = object->fields.num;
    if ( num >= *(_DWORD *)(v19 + 16) )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(object, v28);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  Il2CppObject *v3; // x19
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_49FD3CA & 1) == 0 )
  {
    sub_1B640C8(&WarBoardPartySkillMaster___c_TypeInfo, v1);
    byte_49FD3CA = 1;
  }
  v3 = (Il2CppObject *)sub_1B64314(WarBoardPartySkillMaster___c_TypeInfo, v1, v2);
  System_Object___ctor(v3, 0LL);
  WarBoardPartySkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v3;
  sub_1B6406C(
    (ServantStatusBattleListViewItem_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields,
    (int32_t)v3,
    v4,
    v5);
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
    sub_1B64324(this);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1B64324(this);
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
    sub_1B64324(this);
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
    sub_1B64324(this);
  return entity->fields.num == this->fields.partyNum;
}