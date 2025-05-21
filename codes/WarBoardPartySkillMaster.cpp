void __fastcall WarBoardPartySkillMaster___ctor(WarBoardPartySkillMaster_o *this, const MethodInfo *method)
{
  if ( (byte_4B45BC1 & 1) == 0 )
  {
    sub_1BDB878(&Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__, method);
    byte_4B45BC1 = 1;
  }
  DataMasterBase_object__object__object____ctor(
    (DataMasterBase_TMaster__TEntity__PKType__o *)this,
    420,
    (const MethodInfo_32E45D0 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string___ctor__);
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

  if ( (byte_4B45BC2 & 1) == 0 )
  {
    sub_1BDB878(
      &Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__,
      *(_QWORD *)&id);
    byte_4B45BC2 = 1;
  }
  PK = (Il2CppObject *)WarBoardPartySkillEntity__CreatePK(id, target, num, *(const MethodInfo **)&num);
  return (WarBoardPartySkillEntity_o *)DataMasterBase_object__object__object___GetEntity(
                                         (DataMasterBase_TMaster__TEntity__PKType__o *)this,
                                         PK,
                                         (const MethodInfo_32E68F4 *)Method_DataMasterBase_WarBoardPartySkillMaster__WarBoardPartySkillEntity__string__GetEntity__);
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
  __int64 v14; // x1
  int v15; // w9
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x19
  System_Func_object__bool__o *v17; // x20
  System_Collections_Generic_IEnumerable_TSource__o *v18; // x0

  if ( (byte_4B45BC3 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___, *(_QWORD *)&id);
    sub_1BDB878(&Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___, v7);
    sub_1BDB878(&Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___, v8);
    sub_1BDB878(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v9);
    sub_1BDB878(&Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__, v10);
    sub_1BDB878(&WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo, v11);
    byte_4B45BC3 = 1;
  }
  v12 = sub_1BDBAC4(WarBoardPartySkillMaster___c__DisplayClass2_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v12, 0LL);
  if ( !v12 )
    sub_1BDBAD4(v13, v14);
  if ( isEnemy )
    v15 = 2;
  else
    v15 = 1;
  *(_DWORD *)(v12 + 16) = id;
  *(_DWORD *)(v12 + 20) = v15;
  v16 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OfType_object_(
                                                               (System_Collections_IEnumerable_o *)this->fields.list,
                                                               (const MethodInfo_305F06C *)Method_System_Linq_Enumerable_OfType_WarBoardPartySkillEntity___);
  v17 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v17,
    (Il2CppObject *)v12,
    Method_WarBoardPartySkillMaster___c__DisplayClass2_0__GetEntityArray_b__0__,
    0LL);
  v18 = System_Linq_Enumerable__Where_object_(
          v16,
          (System_Func_TSource__bool__o *)v17,
          (const MethodInfo_3077440 *)Method_System_Linq_Enumerable_Where_WarBoardPartySkillEntity___);
  return (WarBoardPartySkillEntity_array *)System_Linq_Enumerable__ToArray_object_(
                                             v18,
                                             (const MethodInfo_30707A8 *)Method_System_Linq_Enumerable_ToArray_WarBoardPartySkillEntity___);
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
  __int64 v14; // x2
  signed int max_length; // w8
  unsigned int v16; // w23
  int32_t target; // w8
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  struct System_Object_array *items; // x8
  _QWORD *v21; // x9
  __int64 size; // x10
  WarBoardPartySkillEntity_o *v23; // x1
  Il2CppClass **v24; // x0

  if ( (byte_4B45BC5 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillEntity__Add__, *(_QWORD *)&partyNum);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillEntity__ToArray__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_SkillEntity___ctor__, v9);
    sub_1BDB878(&System_Collections_Generic_List_SkillEntity__TypeInfo, v10);
    byte_4B45BC5 = 1;
  }
  v11 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_SkillEntity__TypeInfo);
  System_Collections_Generic_List_object____ctor(
    v11,
    (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_SkillEntity___ctor__);
  if ( !entityArray )
    goto LABEL_19;
  max_length = entityArray->max_length;
  if ( max_length >= 1 )
  {
    v16 = 0;
    while ( 1 )
    {
      if ( v16 >= max_length )
        sub_1BDBADC(SkillEntity, v13, v14);
      SkillEntity = entityArray->m_Items[v16];
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
          v21 = Method_System_Collections_Generic_List_SkillEntity__Add__;
          ++v11->fields._version;
          if ( !items )
            break;
          size = v11->fields._size;
          v23 = SkillEntity;
          if ( (unsigned int)size >= items->max_length )
          {
            System_Collections_Generic_List_object___AddWithResize(
              v11,
              (Il2CppObject *)SkillEntity,
              *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v21[4] + 192LL) + 112LL));
          }
          else
          {
            v24 = &items->obj.klass + size;
            v11->fields._size = size + 1;
            v24[4] = (Il2CppClass *)v23;
            sub_1BDB81C((CGThumbnailListItem_o *)(v24 + 4), (int32_t)v23, v18, v19);
          }
        }
      }
      max_length = entityArray->max_length;
      if ( (int)++v16 >= max_length )
        goto LABEL_17;
    }
LABEL_19:
    sub_1BDBAD4(SkillEntity, v13);
  }
LABEL_17:
  if ( !v11 )
    goto LABEL_19;
  return (SkillEntity_array *)System_Collections_Generic_List_object___ToArray(
                                v11,
                                (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_SkillEntity__ToArray__);
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
  return WarBoardPartySkillMaster__GetPartySkillEntity_42259152(this, partySkillId, partyNum, isEnemy, &maxNum, v5);
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
  WarBoardPartySkillMaster___c_c *v21; // x0
  System_Func_object__int__o *_9__3_0; // x23
  Il2CppObject *v23; // x24
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v25; // w2
  const MethodInfo *v26; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v27; // x0
  Il2CppObject *v28; // x0
  const MethodInfo *v29; // x4
  int32_t monitor; // w1

  if ( (byte_4B45BC4 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v9);
    sub_1BDB878(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v10);
    sub_1BDB878(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__, v11);
    sub_1BDB878(&WarBoardPartySkillMaster___c_TypeInfo, v12);
    byte_4B45BC4 = 1;
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
    sub_1BDBAD4(0LL, v19);
  v16 = PartyNumMatchSkillArray;
  if ( *(_QWORD *)&PartyNumMatchSkillArray->max_length )
    return v16;
  v21 = WarBoardPartySkillMaster___c_TypeInfo;
  if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
    v21 = WarBoardPartySkillMaster___c_TypeInfo;
  }
  _9__3_0 = (System_Func_object__int__o *)v21->static_fields->__9__3_0;
  if ( !_9__3_0 )
  {
    if ( !v21->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v21);
      v21 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    v23 = (Il2CppObject *)v21->static_fields->__9;
    _9__3_0 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
    System_Func_object__int____ctor(
      _9__3_0,
      v23,
      Method_WarBoardPartySkillMaster___c__GetPartySkillEntityArray_b__3_0__,
      0LL);
    static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
    static_fields->__9__3_0 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__3_0;
    sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__3_0, (int32_t)_9__3_0, v25, v26);
  }
  v27 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                               (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                               (System_Func_TSource__TKey__o *)_9__3_0,
                                                               (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
  v28 = System_Linq_Enumerable__FirstOrDefault_object_(
          v27,
          (const MethodInfo_3058594 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
  if ( !v28 )
    return v16;
  monitor = (int32_t)v28[1].monitor;
  if ( monitor >= partyNum )
    return v16;
  else
    return WarBoardPartySkillMaster__GetPartyNumMatchSkillArray(
             (WarBoardPartySkillMaster_o *)v28,
             monitor,
             v17,
             (WarBoardPartySkillEntity_array *)EntityArray,
             v29);
}


// local variable allocation has failed, the output may be wrong!
SkillEntity_o *__fastcall WarBoardPartySkillMaster__GetPartySkillEntity_42259152(
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
  __int64 v21; // x1
  const MethodInfo *v22; // x3
  System_Collections_ICollection_o *EntityArray; // x21
  System_Func_object__bool__o *v25; // x22
  WarBoardPartySkillEntity_o *object; // x0
  const MethodInfo *v27; // x1
  int32_t num; // w8
  WarBoardPartySkillMaster___c_c *v29; // x0
  System_Func_object__int__o *_9__6_1; // x22
  Il2CppObject *v31; // x23
  struct WarBoardPartySkillMaster___c_StaticFields *static_fields; // x0
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v35; // x0

  if ( (byte_4B45BC6 & 1) == 0 )
  {
    sub_1BDB878(&Method_BasicHelper_Find_WarBoardPartySkillEntity___, *(_QWORD *)&partySkillId);
    sub_1BDB878(&Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___, v11);
    sub_1BDB878(&Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___, v12);
    sub_1BDB878(&System_Func_WarBoardPartySkillEntity__bool__TypeInfo, v13);
    sub_1BDB878(&System_Func_WarBoardPartySkillEntity__int__TypeInfo, v14);
    sub_1BDB878(&Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__, v15);
    sub_1BDB878(&Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__, v16);
    sub_1BDB878(&WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo, v17);
    sub_1BDB878(&WarBoardPartySkillMaster___c_TypeInfo, v18);
    byte_4B45BC6 = 1;
  }
  v19 = sub_1BDBAC4(WarBoardPartySkillMaster___c__DisplayClass6_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v19, 0LL);
  if ( !v19 )
    sub_1BDBAD4(v20, v21);
  *(_DWORD *)(v19 + 16) = partyNum;
  *maxNum = 0;
  EntityArray = (System_Collections_ICollection_o *)WarBoardPartySkillMaster__GetEntityArray(
                                                      this,
                                                      partySkillId,
                                                      isEnemy,
                                                      v22);
  if ( BasicHelper__IsNullOrEmpty(EntityArray, 0LL) )
    return 0LL;
  v25 = (System_Func_object__bool__o *)sub_1BDBAC4(System_Func_WarBoardPartySkillEntity__bool__TypeInfo);
  System_Func_object__bool____ctor(
    v25,
    (Il2CppObject *)v19,
    Method_WarBoardPartySkillMaster___c__DisplayClass6_0__GetPartySkillEntity_b__0__,
    0LL);
  object = (WarBoardPartySkillEntity_o *)BasicHelper__Find_object_(
                                           (System_Object_array *)EntityArray,
                                           (System_Func_T__bool__o *)v25,
                                           (const MethodInfo_301D9C8 *)Method_BasicHelper_Find_WarBoardPartySkillEntity___);
  if ( object )
  {
    num = object->fields.num;
  }
  else
  {
    v29 = WarBoardPartySkillMaster___c_TypeInfo;
    if ( !WarBoardPartySkillMaster___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(WarBoardPartySkillMaster___c_TypeInfo);
      v29 = WarBoardPartySkillMaster___c_TypeInfo;
    }
    _9__6_1 = (System_Func_object__int__o *)v29->static_fields->__9__6_1;
    if ( !_9__6_1 )
    {
      if ( !v29->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v29);
        v29 = WarBoardPartySkillMaster___c_TypeInfo;
      }
      v31 = (Il2CppObject *)v29->static_fields->__9;
      _9__6_1 = (System_Func_object__int__o *)sub_1BDBAC4(System_Func_WarBoardPartySkillEntity__int__TypeInfo);
      System_Func_object__int____ctor(
        _9__6_1,
        v31,
        Method_WarBoardPartySkillMaster___c__GetPartySkillEntity_b__6_1__,
        0LL);
      static_fields = WarBoardPartySkillMaster___c_TypeInfo->static_fields;
      static_fields->__9__6_1 = (struct System_Func_WarBoardPartySkillEntity__int__o *)_9__6_1;
      sub_1BDB81C((CGThumbnailListItem_o *)&static_fields->__9__6_1, (int32_t)_9__6_1, v33, v34);
    }
    v35 = (System_Collections_Generic_IEnumerable_TSource__o *)System_Linq_Enumerable__OrderByDescending_object__int_(
                                                                 (System_Collections_Generic_IEnumerable_TSource__o *)EntityArray,
                                                                 (System_Func_TSource__TKey__o *)_9__6_1,
                                                                 (const MethodInfo_305FB80 *)Method_System_Linq_Enumerable_OrderByDescending_WarBoardPartySkillEntity__int___);
    object = (WarBoardPartySkillEntity_o *)System_Linq_Enumerable__FirstOrDefault_object_(
                                             v35,
                                             (const MethodInfo_3058594 *)Method_System_Linq_Enumerable_FirstOrDefault_WarBoardPartySkillEntity___);
    if ( !object )
      return 0LL;
    num = object->fields.num;
    if ( num >= *(_DWORD *)(v19 + 16) )
      return 0LL;
  }
  *maxNum = num;
  return WarBoardPartySkillEntity__GetSkillEntity(object, v27);
}


void __fastcall WarBoardPartySkillMaster___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_4B45BC7 & 1) == 0 )
  {
    sub_1BDB878(&WarBoardPartySkillMaster___c_TypeInfo, v1);
    byte_4B45BC7 = 1;
  }
  v2 = (Il2CppObject *)sub_1BDBAC4(WarBoardPartySkillMaster___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  WarBoardPartySkillMaster___c_TypeInfo->static_fields->__9 = (struct WarBoardPartySkillMaster___c_o *)v2;
  sub_1BDB81C((CGThumbnailListItem_o *)WarBoardPartySkillMaster___c_TypeInfo->static_fields, (int32_t)v2, v3, v4);
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
    sub_1BDBAD4(this, 0LL);
  return entity->fields.num;
}


int32_t __fastcall WarBoardPartySkillMaster___c___GetPartySkillEntity_b__6_1(
        WarBoardPartySkillMaster___c_o *this,
        WarBoardPartySkillEntity_o *entity,
        const MethodInfo *method)
{
  if ( !entity )
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
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
    sub_1BDBAD4(this, 0LL);
  return entity->fields.num == this->fields.partyNum;
}