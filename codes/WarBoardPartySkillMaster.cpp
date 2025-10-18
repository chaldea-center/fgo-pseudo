void WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4C44177 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
    byte_4C44177 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    420,
    (const MethodInfo_33A3834 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
}


// local variable allocation has failed, the output may be wrong!
WarBoardPartySkillEntity_o *WarBoardPartySkillMaster__GetEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        int32_t target,
        int32_t num,
        const MethodInfo *method)
{
  Il2CppObject *PK; // x1

  if ( (byte_4C44178 & 1) == 0 )
  {
    sub_1C37058(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
    byte_4C44178 = 1;
  }
  PK = (Il2CppObject *)WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_33A5B58 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
}


WarBoardPartySkillEntity_array *WarBoardPartySkillMaster__GetEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t id,
        bool isEnemy,
        const MethodInfo *method)
{
  __int64 v7; // x22
  __int64 v8; // x0
  int v9; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v10; // x19
  System_Func_object__bool__o *v11; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v12; // x0

  if ( (byte_4C44179 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
    sub_1C37058(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_1C37058(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__);
    sub_1C37058(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
    byte_4C44179 = 1;
  }
  v7 = sub_1C372A4(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v7, 0);
  if ( !v7 )
    sub_1C372B4(v8);
  if ( isEnemy )
    v9 = 2;
  else
    v9 = 1;
  *(_DWORD *)(v7 + 16) = id;
  *(_DWORD *)(v7 + 20) = v9;
  v10 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_3116E34 *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v11 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v11,
    (Il2CppObject *)v7,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    0);
  v12 = System_Linq_Enumerable__Where_object_(
          v10,
          (System_Func_TSource__bool__o *)v11,
          (const MethodInfo_312E410 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v12,
                                             (const MethodInfo_31272F4 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
}


SkillEntity_array *WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partyNum,
        int32_t checkTarget,
        WarBoardPartySkillEntity_array *entityArray,
        const MethodInfo *method)
{
  System_Collections_Generic_List_object__o *v8; // x22
  WarBoardPartySkillEntity_o *SkillEntity; // x0
  const MethodInfo *v10; // x1
  int max_length; // w8
  unsigned int v12; // w23
  int32_t target; // w8
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  struct System_Object_array *items; // x8
  _QWORD *v17; // x9
  __int64 size; // x10
  WarBoardPartySkillEntity_o *v19; // x1
  Il2CppClass **v20; // x0

  if ( (byte_4C4417B & 1) == 0 )
  {
    sub_1C37058(&Method_System_Collections_Generic_List_SkillEntity__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillEntity__ToArray__);
    sub_1C37058(&Method_System_Collections_Generic_List_SkillEntity___ctor__);
    sub_1C37058(&System_Collections_Generic_List_SkillEntity__TypeInfo);
    byte_4C4417B = 1;
  }
  v8 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v8,
    (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_19;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      if ( v12 >= max_length )
        sub_1C372BC(SkillEntity);
      SkillEntity = entityArray->m_Items[v12];
      if ( !SkillEntity )
        break;
      if ( SkillEntity->fields.num == partyNum )
      {
        target = SkillEntity->fields.target;
        if ( target == checkTarget || !target )
        {
          SkillEntity = (WarBoardPartySkillEntity_o *)WarBoardPartySkillEntity__GetSkillEntity(SkillEntity, v10);
          if ( !v8 )
            break;
          items = v8->fields._items;
          v17 = Method_System_Collections_Generic_List_SkillEntity__Add__;
          ++v8->fields._version;
          if ( !items )
            break;
          size = v8->fields._size;
          v19 = SkillEntity;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v8,
              (Il2CppObject *)SkillEntity,
              *(const MethodInfo_37A3024 **)(*(_QWORD *)(v17[4] + 192LL) + 112LL));
          }
          else
          {
            v20 = &items->obj.klass + size;
            v8->fields._size = size + 1;
            v20[4] = (Il2CppClass *)v19;
            sub_1C36FFC((CGThumbnailListItem_o *)(v20 + 4), (int32_t)v19, v14, v15);
          }
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v12 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1C372B4(SkillEntity);
  }
LABEL_17:
  if ( !v8 )
    goto LABEL_19;
  return (SkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v8,
                                (const MethodInfo_37A4B7C *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
}


SkillEntity_o *WarBoardPartySkillMaster__GetPartySkillEntity(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  const MethodInfo *v5; // x5
  int32_t maxNum; // [xsp+Ch] [xbp-4h] BYREF

  maxNum = 0;
  return WarBoardPartySkillMaster__GetPartySkillEntity_43323780(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_array *WarBoardPartySkillMaster__GetPartySkillEntityArray(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        const MethodInfo *method)
{
  System_Collections_ICollection_o *EntityArray; // x20
  _BOOL8 IsNullOrEmpty; // x0
  const MethodInfo *v11; // x4
  SkillEntity_array *v12; // x22
  int32_t v13; // w21
  SkillEntity_array *PartyNumMatchSkillArray; // x0
  WarBoardPartySkillMaster___c_c *v16; // x0
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v18; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v20; // w2
  const MethodInfo *v21; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v22; // x0
  Il2CppObject *v23; // x0
  const MethodInfo *v24; // x4
  int32_t monitor; // w1

  if ( (byte_4C4417A & 1) == 0 )
  {
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_1C37058(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_1C37058(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__);
    sub_1C37058(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_4C4417A = 1;
  }
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      (const MethodInfo *)isEnemy);
  IsNullOrEmpty = BasicHelper__IsNullOrEmpty(EntityArray, 0);
  v12 = 0;
  if ( IsNullOrEmpty )
    return v12;
  if ( isEnemy )
    v13 = 2;
  else
    v13 = 1;
  PartyNumMatchSkillArray = WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
                              (WarBoardPartySkillMaster_o *)IsNullOrEmpty,
                              partyNum,
                              v13,
                              (WarBoardPartySkillEntity_array *)EntityArray,
                              v11);
  if ( !PartyNumMatchSkillArray )
    sub_1C372B4(0);
  v12 = PartyNumMatchSkillArray;
  if ( PartyNumMatchSkillArray->max_length )
    return v12;
  v16 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v16 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v16->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v16->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v16);
      v16 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    v18 = (Il2CppObject *)v16->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v18,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      0);
    static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v20, v21);
  }
  v22 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v23 = System_Linq_Enumerable__FirstOrDefault_object_(
          v22,
          (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v23 )
    return v12;
  monitor = (int32_t)v23[1].monitor;
  if ( monitor >= partyNum )
    return v12;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v23,
             monitor,
             v13,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v24);
}


SkillEntity_o *WarBoardPartySkillMaster__GetPartySkillEntity_43323780(
        WarBoardPartySkillMaster_o *this,
        int32_t partySkillId,
        int32_t partyNum,
        bool isEnemy,
        int32_t *maxNum,
        const MethodInfo *method)
{
  __int64 v11; // x20
  __int64 v12; // x0
  const MethodInfo *v13; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_object__bool__o *v16; // x22
  WarBoardPartySkillEntity_o *object; // x0
  const MethodInfo *v18; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v20; // x0
  System_Func_object__int__o *_9__6_1; // x22
  Il2CppObject *v22; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v26; // x0

  if ( (byte_4C4417C & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Find_WarBoardPartySkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    sub_1C37058(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    sub_1C37058(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
    sub_1C37058(&System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    sub_1C37058(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__);
    sub_1C37058(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__);
    sub_1C37058(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
    sub_1C37058(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_4C4417C = 1;
  }
  v11 = sub_1C372A4(WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v11, 0);
  if ( !v11 )
    sub_1C372B4(v12);
  *(_DWORD *)(v11 + 16) = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v13);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0) )
    return 0;
  v16 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v16,
    (Il2CppObject *)v11,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    0);
  object = (WarBoardPartySkillEntity_o *)BasicHelper__Find_object_(
                                           (System_Object_array *)EntityArray,
                                           (System_Func_T__bool__o *)v16,
                                           (const MethodInfo_30D1BC4 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( object )
  {
    num = object->fields.num;
  }
  else
  {
    v20 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v20 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    _9__6_1 = (System_Func_object__int__o *)v20->static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( !v20->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v20);
        v20 = WarBoardPartySkillMaster___c_TypeInfo;
      }
      v22 = (Il2CppObject *)v20->static_fields->__9;
      _9__6_1 = (System_Func_object__int__o *)sub_1C372A4(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_1,
        v22,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        0);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_1C36FFC((CGThumbnailListItem_o *)&static_fields->__9__6_1, (int32_t)_9__6_1, v24, v25);
    }
    v26 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_311792C *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    object = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                             v26,
                                             (const MethodInfo_311035C *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !object )
      return 0;
    num = object->fields.num;
    if ( num >= *(_DWORD *)(v11 + 16) )
      return 0;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(object, v18);
}


void WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C4417D & 1) == 0 )
  {
    sub_1C37058(&WarBoardPartySkillMaster___c_TypeInfo);
    byte_4C4417D = 1;
  }
  v1 = (Il2CppObject *)sub_1C372A4(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v1, 0);
  WarBoardPartySkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v1;
  sub_1C36FFC((CGThumbnailListItem_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void WarBoardPartySkillMaster___c___ctor(WarBoardPartySkillMaster___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


int32_t WarBoardPartySkillMaster___c___GetPartySkillEntityArray_b__3_0(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.num;
}


int32_t WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.num;
}


void WarBoardPartySkillMaster___c__DisplayClass2_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartySkillMaster___c__DisplayClass2_0___GetEntityArray_b__0(
        WarBoardPartySkillMaster___c__DisplayClass2_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.id == this->fields.id
      && (entity->fields.target == this->fields.target || entity->fields.target == 0);
}


void WarBoardPartySkillMaster___c__DisplayClass6_0___ctor(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool WarBoardPartySkillMaster___c__DisplayClass6_0___GetPartySkillEntity_b__0(
        WarBoardPartySkillMaster___c__DisplayClass6_0_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1C372B4(this);
  return entity->fields.num == this->fields.partyNum;
}